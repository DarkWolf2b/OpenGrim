#version 150

in vec2 fragCoord;
in vec2 texCoord;
in vec4 vertexColor;

uniform sampler2D inTexture;

uniform vec2 size;
uniform float innerRadius;
uniform float outerRadius;
uniform float startAngle;
uniform float endAngle;
uniform float smoothness;
uniform int textured;
uniform int roundCaps;
uniform int screenTexture;
uniform vec2 screenSize;
uniform vec4 colorModulator;
uniform int gradientFill;
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

const float TAU = 6.28318530718;
const int GRADIENT_BILINEAR = 0;
const int GRADIENT_LINEAR = 1;
#define MAX_STOPS 8
const float DITHER_AMPLITUDE = 0.007843;

float normalizeAngle(float angle) {
    angle = mod(angle, TAU);
    if (angle < 0.0) angle += TAU;
    return angle;
}

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

float sectorSignedDistance(vec2 p, float innerR, float outerR, float startAngle, float endAngle) {
    float distanceFromCenter = length(p);
    float radialDistance = min(distanceFromCenter - innerR, outerR - distanceFromCenter);

    float rawArcLength = endAngle - startAngle;
    float arcLength = mod(rawArcLength, TAU);
    if (arcLength < 0.0) arcLength += TAU;
    if (abs(rawArcLength) >= TAU) arcLength = TAU;

    if (arcLength >= TAU - 0.001) {
        return radialDistance;
    }

    float angle = normalizeAngle(atan(p.y, p.x));
    float start = normalizeAngle(startAngle);
    float angleFromStart = mod(angle - start + TAU, TAU);

    float capDistance;
    if (angleFromStart <= arcLength) {
        capDistance = min(angleFromStart, arcLength - angleFromStart) * distanceFromCenter;
    } else {
        capDistance = -min(angleFromStart - arcLength, TAU - angleFromStart) * distanceFromCenter;
    }

    return min(radialDistance, capDistance);
}

float roundedSectorSignedDistance(vec2 p, float innerR, float outerR, float startAngle, float endAngle) {
    float distanceFromCenter = length(p);
    float radialDistance = min(distanceFromCenter - innerR, outerR - distanceFromCenter);

    float rawArcLength = endAngle - startAngle;
    float arcLength = mod(rawArcLength, TAU);
    if (arcLength < 0.0) arcLength += TAU;
    if (abs(rawArcLength) >= TAU) arcLength = TAU;

    if (arcLength >= TAU - 0.001) {
        return radialDistance;
    }

    float centerR = (innerR + outerR) * 0.5;
    float halfThickness = max((outerR - innerR) * 0.5, 0.0);
    if (halfThickness <= 0.001) {
        return sectorSignedDistance(p, innerR, outerR, startAngle, endAngle);
    }

    float angle = normalizeAngle(atan(p.y, p.x));
    float start = normalizeAngle(startAngle);
    float angleFromStart = mod(angle - start + TAU, TAU);

    float nearestAngle;
    if (angleFromStart <= arcLength) {
        nearestAngle = start + angleFromStart;
    } else {
        float distanceToEnd = angleFromStart - arcLength;
        float distanceToStart = TAU - angleFromStart;
        nearestAngle = distanceToStart < distanceToEnd ? start : start + arcLength;
    }

    vec2 nearestPoint = vec2(cos(nearestAngle), sin(nearestAngle)) * centerR;
    float distanceToCenterline = length(p - nearestPoint);
    return halfThickness - distanceToCenterline;
}

void main() {
    float aa = max(smoothness, 0.001);
    vec2 center = size * 0.5;
    vec2 p = (fragCoord * size) - center;

    float maxRadius = max(0.0, min(center.x, center.y) - aa);
    float outerR = clamp(max(innerRadius, outerRadius), 0.0, maxRadius);
    float innerR = clamp(min(innerRadius, outerRadius), 0.0, outerR);

    float dist = roundCaps == 1
        ? roundedSectorSignedDistance(p, innerR, outerR, startAngle, endAngle)
        : sectorSignedDistance(p, innerR, outerR, startAngle, endAngle);
    float alpha = smoothstep(-aa, aa, dist);

    vec4 finalColor = gradientFill == 1 ? createGradient(fragCoord) : vertexColor;
    if (textured == 1) {
        vec2 sampleUV = texCoord;
        if (screenTexture == 1 && screenSize.x > 0.0 && screenSize.y > 0.0) {
            sampleUV = gl_FragCoord.xy / screenSize;
        }

        finalColor *= texture(inTexture, sampleUV);
    }

    finalColor.a *= alpha;

    if (finalColor.a < 0.001) {
        discard;
    }

    fragColor = finalColor * colorModulator;
}
