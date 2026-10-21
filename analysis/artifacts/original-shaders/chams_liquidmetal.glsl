#version 150

uniform sampler2D maskTexture;
uniform sampler2D backgroundTexture;

uniform float time;
uniform vec2 screenSize;
uniform vec4 colorModulator;

uniform float scale;
uniform float noiseFreqX;
uniform float noiseFreqY;
uniform float noiseFreqX2;
uniform float noiseFreqY2;
uniform float warpIntensityX;
uniform float warpIntensityY;
uniform vec3 color1;
uniform vec3 color2;
uniform vec3 color3;
uniform vec3 color4;
uniform float brightness;
uniform float speed;
uniform float shiftRed;
uniform float shiftBlue;
uniform float contour;
uniform float softness;

in vec2 texCoord;

out vec4 fragColor;

float cheapNoise(vec3 stp) {
    vec3 p = vec3(stp.st, stp.p);
    vec4 a = vec4(noiseFreqX, noiseFreqY, noiseFreqX2, noiseFreqY2);
    return mix(
        sin(p.z + p.x * a.x + cos(p.x * a.x - p.z)) *
        cos(p.z + p.y * a.y + cos(p.y * a.x + p.z)),
        sin(1.0 + p.x * a.z + p.z + cos(p.y * a.w - p.z)) *
        cos(1.0 + p.y * a.w + p.z + cos(p.x * a.x + p.z)),
        0.436
    );
}

vec2 getGradient(sampler2D tex, vec2 uv, vec2 texelSize) {
    float tl = texture(tex, uv + vec2(-texelSize.x, texelSize.y)).a;
    float t  = texture(tex, uv + vec2(0.0, texelSize.y)).a;
    float tr = texture(tex, uv + vec2(texelSize.x, texelSize.y)).a;
    float l  = texture(tex, uv + vec2(-texelSize.x, 0.0)).a;
    float r  = texture(tex, uv + vec2(texelSize.x, 0.0)).a;
    float bl = texture(tex, uv + vec2(-texelSize.x, -texelSize.y)).a;
    float b  = texture(tex, uv + vec2(0.0, -texelSize.y)).a;
    float br = texture(tex, uv + vec2(texelSize.x, -texelSize.y)).a;

    float gx = -tl - 2.0*l - bl + tr + 2.0*r + br;
    float gy = -tl - 2.0*t - tr + bl + 2.0*b + br;

    return vec2(gx, gy);
}

float softEdgeAlpha(sampler2D tex, vec2 uv, vec2 ts) {
    float total = 0.0, wSum = 0.0;
    total += texture(tex, uv).a * 1.0; wSum += 1.0;

    for (int i = 0; i < 6; i++) {
        float a = float(i) * 1.0472 + 0.2618;
        total += texture(tex, uv + vec2(cos(a), sin(a)) * 0.8 * ts).a * 0.75;
        wSum += 0.75;
    }

    for (int i = 0; i < 8; i++) {
        float a = float(i) * 0.7854;
        total += texture(tex, uv + vec2(cos(a), sin(a)) * 1.5 * ts).a * 0.35;
        wSum += 0.35;
    }

    total += texture(tex, uv + vec2( 2.2, 0.0) * ts).a * 0.15;
    total += texture(tex, uv + vec2(-2.2, 0.0) * ts).a * 0.15;
    total += texture(tex, uv + vec2(0.0,  2.2) * ts).a * 0.15;
    total += texture(tex, uv + vec2(0.0, -2.2) * ts).a * 0.15;
    wSum += 0.6;

    return smoothstep(0.05, 0.95, total / wSum);
}

float getDistanceField(sampler2D tex, vec2 uv, vec2 texelSize) {
    float centerAlpha = texture(tex, uv).a;
    if (centerAlpha < 0.01) return 0.0;

    float minDist = 100.0;
    int samples = 8;

    for (int ring = 1; ring <= 3; ring++) {
        float ringRadius = float(ring) * 2.0;
        for (int i = 0; i < samples; i++) {
            float angle = float(i) * 6.28318 / float(samples);
            vec2 offset = vec2(cos(angle), sin(angle)) * ringRadius * texelSize;
            float alpha = texture(tex, uv + offset).a;

            if (alpha < 0.5) {
                minDist = min(minDist, ringRadius);
            }
        }
    }

    return minDist / 6.0;
}

float skinLuminance(vec2 uv) {
    return dot(texture(maskTexture, uv).rgb, vec3(0.299, 0.587, 0.114));
}

float skinStructure(vec2 uv, vec2 ts) {
    float lc = skinLuminance(uv);
    float ll = skinLuminance(uv + vec2(-ts.x, 0.0));
    float lr = skinLuminance(uv + vec2( ts.x, 0.0));
    float lt = skinLuminance(uv + vec2(0.0,  ts.y));
    float lb = skinLuminance(uv + vec2(0.0, -ts.y));
    return sqrt(pow(lr - ll, 2.0) + pow(lt - lb, 2.0));
}

vec2 skinGradient(vec2 uv, vec2 ts) {
    float ll = skinLuminance(uv + vec2(-ts.x, 0.0));
    float lr = skinLuminance(uv + vec2( ts.x, 0.0));
    float lt = skinLuminance(uv + vec2(0.0,  ts.y));
    float lb = skinLuminance(uv + vec2(0.0, -ts.y));
    return vec2(lr - ll, lt - lb);
}

vec3 getColorAtUV(vec2 st, vec2 v1, vec2 v2, float n) {
    vec3 color = mix(color1, color2, clamp((n*n)*8.0, 0.0, 1.0));
    color = mix(color, color3, clamp(length(v1), 0.0, 1.0));
    color = mix(color, color4, clamp(length(v2.x), 0.0, 1.0));
    color *= brightness / (n*n + n * 7.0);
    return color;
}

void main() {
    vec2 uv = texCoord;

    float mask = texture(maskTexture, uv).a;

    if (mask < 0.01) {
        discard;
    }

    vec2 aspect = vec2(screenSize.x / screenSize.y, 1.0);
    if (screenSize.x < screenSize.y) {
        aspect = vec2(1.0, screenSize.y / screenSize.x);
    }
    vec2 st = uv * aspect * scale;

    float animTime = time * speed;
    float S = sin(animTime * 0.005);
    float C = cos(animTime * 0.005);

    vec2 v1 = vec2(cheapNoise(vec3(st, 2.0)), cheapNoise(vec3(st, 1.0)));
    vec2 v2 = vec2(
        cheapNoise(vec3(st + warpIntensityX*v1 + vec2(C * 1.7, S * 9.2), 0.15 * animTime)),
        cheapNoise(vec3(st + warpIntensityY*v1 + vec2(S * 8.3, C * 2.8), 0.126 * animTime))
    );
    float n = 0.5 + 0.5 * cheapNoise(vec3(st + v2, 0.0));

    n = pow(n, 1.0 / max(softness, 0.1));

    vec2 pixelSize = 1.0 / screenSize;
    vec2 redShift = vec2(shiftRed, 0.0) * pixelSize * 3.0;
    vec2 blueShift = vec2(shiftBlue, 0.0) * pixelSize * 3.0;

    vec2 stRed = (uv + redShift) * aspect * scale;
    vec2 stBlue = (uv + blueShift) * aspect * scale;

    vec2 v2Red = vec2(
        cheapNoise(vec3(stRed + warpIntensityX*v1 + vec2(C * 1.7, S * 9.2), 0.15 * animTime)),
        cheapNoise(vec3(stRed + warpIntensityY*v1 + vec2(S * 8.3, C * 2.8), 0.126 * animTime))
    );
    vec2 v2Blue = vec2(
        cheapNoise(vec3(stBlue + warpIntensityX*v1 + vec2(C * 1.7, S * 9.2), 0.15 * animTime)),
        cheapNoise(vec3(stBlue + warpIntensityY*v1 + vec2(S * 8.3, C * 2.8), 0.126 * animTime))
    );

    float nRed = 0.5 + 0.5 * cheapNoise(vec3(stRed + v2Red, 0.0));
    float nBlue = 0.5 + 0.5 * cheapNoise(vec3(stBlue + v2Blue, 0.0));

    nRed = pow(nRed, 1.0 / max(softness, 0.1));
    nBlue = pow(nBlue, 1.0 / max(softness, 0.1));

    vec3 colorRed = getColorAtUV(stRed, v1, v2Red, nRed);
    vec3 colorGreen = getColorAtUV(st, v1, v2, n);
    vec3 colorBlue = getColorAtUV(stBlue, v1, v2Blue, nBlue);

    vec3 color = vec3(colorRed.r, colorGreen.g, colorBlue.b);

    float alpha = 1.0;

    vec2 texelSize = 1.0 / screenSize;

    alpha = softEdgeAlpha(maskTexture, uv, texelSize);

    float skinStruct = skinStructure(uv, texelSize * 3.0);
    float structLines = smoothstep(0.02, 0.12, skinStruct);
    vec2 skinGrad = skinGradient(uv, texelSize * 3.0);
    float skinLum = skinLuminance(uv);

    vec2 gradient = getGradient(maskTexture, uv, texelSize);
    float edgeStrength = length(gradient);

    if (alpha > 0.1) {
        vec2 normal2D = normalize(gradient + vec2(0.001));

        float distField = getDistanceField(maskTexture, uv, texelSize);

        vec2 flatUV = st + normal2D * edgeStrength * 0.5;
        vec2 volumeUV = st + normal2D * distField * 15.0 * contour;
        vec2 shapeAwareUV = mix(flatUV, volumeUV, contour);

        shapeAwareUV += skinGrad * 0.4;

        float shapeNoise = cheapNoise(vec3(shapeAwareUV + v2 * 0.3, animTime * 0.1));

        float contourBands = sin(distField * 30.0 * (1.0 + contour * 2.0)) * 0.5 + 0.5;
        float bandEffect = mix(1.0, contourBands, contour * 0.3);

        float aberrationStrength = edgeStrength * 0.2 * smoothstep(0.3, 1.0, alpha);
        color.r += aberrationStrength * sin(shapeNoise * 3.14159);
        color.b += aberrationStrength * cos(shapeNoise * 3.14159);

        color *= (0.6 + skinLum * 0.3 + shapeNoise * 0.1) * bandEffect;

        color += structLines * 0.15 * vec3(1.0, 1.05, 1.1);

        float edgeHighlight = smoothstep(0.1, 0.5, edgeStrength);
        color += vec3(edgeHighlight * contour * 0.3);
    }

    color = clamp(color, 0.0, 1.0);

    fragColor = vec4(color, alpha) * colorModulator;
}