#version 150

in vec2 fragCoord;
in vec2 texCoord;
in vec4 vertexColor;

uniform sampler2D inTexture;

uniform vec2 size;
uniform vec4 radius;
uniform float smoothness;
uniform float innerSmoothness;
uniform float cornerSmoothness;
uniform float thickness;
uniform int shapeType;
uniform int maskType;
uniform int fillType;
uniform vec4 colorModulator;
uniform vec2 screenSize;
uniform int loading;
uniform float progress;
uniform float stripeWidth;
uniform float fade;

uniform vec4 topLeft;
uniform vec4 bottomLeft;
uniform vec4 topRight;
uniform vec4 bottomRight;
uniform int gradientType;
uniform int stopCount;
uniform vec4 stopColors[8];
uniform float stopOffsets[8];
uniform float gradientAngle;

out vec4 fragColor;

const int SHAPE_RECTANGLE = 0;
const int SHAPE_SQUIRCLE = 1;

const int MASK_FILL = 0;
const int MASK_OUTLINE = 1;

const int FILL_SOLID = 0;
const int FILL_GRADIENT = 1;
const int FILL_TEXTURE = 2;

const int GRADIENT_BILINEAR = 0;
const int GRADIENT_LINEAR = 1;

#define MAX_STOPS 8

const float DITHER_AMPLITUDE = 0.007843;

vec4 createBilinearGradient(vec2 uv) {
    vec4 topColor = mix(topLeft, topRight, uv.x);
    vec4 bottomColor = mix(bottomLeft, bottomRight, uv.x);
    return mix(topColor, bottomColor, uv.y);
}

float computeGradient(vec2 uv) {
    vec2 centered = uv - 0.5;
    vec2 linearDirection = vec2(cos(gradientAngle), sin(gradientAngle));
    float linearScale = max(abs(linearDirection.x) + abs(linearDirection.y), 0.00001);

    return dot(centered, linearDirection) / linearScale + 0.5;
}

vec4 sampleStopGradient(float t) {
    t = clamp(t, 0.0, 1.0);

    if (stopCount <= 0) {
        return vec4(1.0);
    }

    if (stopCount == 1 || t <= stopOffsets[0]) {
        return stopColors[0];
    }

    for (int i = 0; i < MAX_STOPS - 1; i++) {
        if (i >= stopCount - 1) {
            break;
        }

        float a = stopOffsets[i];
        float b = stopOffsets[i + 1];

        if (t >= a && t <= b) {
            float localT = (b - a) > 0.0 ? (t - a) / (b - a) : 0.0;
            return mix(stopColors[i], stopColors[i + 1], localT);
        }
    }

    return stopColors[stopCount - 1];
}

float hashNoise() {
    vec2 pixel = gl_FragCoord.xy;
    return fract(sin(dot(vec2(12.9898, 78.233), pixel)) * 43758.5453);
}

vec4 applyDither(vec4 color) {
    float offset = (hashNoise() - 0.5) * DITHER_AMPLITUDE;
    return color.a > 0.0 ? clamp(color + offset, 0.0, 1.0) : color;
}

vec4 createGradient(vec2 uv) {
    if (gradientType == GRADIENT_BILINEAR) {
        return createBilinearGradient(uv);
    }

    return applyDither(sampleStopGradient(computeGradient(uv)));
}

float shapeSDF(vec2 p, vec2 b, vec4 radii) {
    if (shapeType == SHAPE_RECTANGLE) {
        radii = min(radii, vec4(min(b.x, b.y)));
    }

    float r = (p.x > 0.0)
            ? ((p.y > 0.0) ? radii.x : radii.y)
            : ((p.y > 0.0) ? radii.z : radii.w);

    vec2 q = abs(p) - b + r;
    vec2 qClamped = max(q, 0.0);

    float len;
    if (shapeType == SHAPE_SQUIRCLE) {
        float power = max(cornerSmoothness, 1.0);
        len = pow(pow(qClamped.x, power) + pow(qClamped.y, power), 1.0 / power);
    } else {
        len = length(qClamped);
    }

    return min(max(q.x, q.y), 0.0) + len - r;
}

float maskAlpha(float distance) {
    if (maskType == MASK_OUTLINE) {
        float inner = smoothstep(
            1.0 - thickness - innerSmoothness - smoothness,
            1.0 - thickness - smoothness,
            distance
        );
        float outer = 1.0 - smoothstep(1.0 - smoothness, 1.0, distance);
        return inner * outer;
    }

    return 1.0 - smoothstep(1.0 - smoothness, 1.0, distance);
}

float loadingStripeAlpha(vec2 uv) {
    float diag = (uv.x + uv.y) * 0.5;
    float halfWidth = stripeWidth * 0.5;
    return smoothstep(progress - halfWidth - fade, progress - halfWidth, diag)
        * (1.0 - smoothstep(progress + halfWidth, progress + halfWidth + fade, diag));
}

void main() {
    vec2 center = size * 0.5;
    vec2 p = center - (fragCoord * size);

    float distance = shapeSDF(p, center - 1.0, radius);
    float alpha = maskAlpha(distance);

    vec4 outputColor;
    if (fillType == FILL_TEXTURE) {
        vec2 sampleUV = texCoord;
        if (screenSize.x > 0.0 && screenSize.y > 0.0) {
            sampleUV = gl_FragCoord.xy / screenSize;
        }

        outputColor = texture(inTexture, sampleUV) * vertexColor;
    } else if (fillType == FILL_GRADIENT) {
        outputColor = createGradient(fragCoord);
        outputColor.a *= vertexColor.a;
    } else {
        outputColor = vertexColor;
    }

    if (loading == 1) {
        outputColor.a *= loadingStripeAlpha(fragCoord);
    }

    outputColor.a *= alpha;
    if (outputColor.a == 0.0) {
        discard;
    }

    fragColor = outputColor * colorModulator;
}
