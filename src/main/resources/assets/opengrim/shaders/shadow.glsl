#version 150

in vec2 coord;

uniform float cornerRadiusOverBlurRadius;
uniform vec2 halfSizeOverBlurRadius;
uniform vec4 shadowColor;
uniform vec4 colorModulator;

out vec4 fragColor;

const float DITHER_AMOUNT = 0.007843;

float hashRandom() {
    return fract(sin(dot(vec2(12.9898, 78.233), gl_FragCoord.xy)) * 43758.5453);
}

vec4 ditherColor(vec4 color) {
    float noise = (hashRandom() - 0.5) * DITHER_AMOUNT;
    return color.a > 0.0 ? min(abs(color + noise), 1.0) : color;
}

float smoothStepIntegral(float x) {
    if (x < -1.0) return 0.0;
    if (x <  0.0) return 0.5 * (x + 1.0) * (x + 1.0);
    if (x <  1.0) return 0.5 - 0.5 * x * (x - 2.0);
    return 1.0;
}

float triangleFilter(float x) {
    return max(0.0, 1.0 - abs(x));
}

float cornerIntegral(float axis, float offset, float cornerRadius,
                     float halfExtent, float halfExtentOrtho) {
    float outsideOrtho = min(halfExtentOrtho - cornerRadius - abs(offset), 0.0);
    float edge = halfExtent - cornerRadius
               + sqrt(max(0.0, cornerRadius * cornerRadius - outsideOrtho * outsideOrtho));
    vec2 bounds = vec2(axis + edge, axis - edge);
    return smoothStepIntegral(bounds.x) - smoothStepIntegral(bounds.y);
}

float sliceY(float x, float y, float cornerRadius, vec2 halfSize) {
    return cornerIntegral(y, x, cornerRadius, halfSize.y, halfSize.x);
}

float sliceX(float x, float y, float cornerRadius, vec2 halfSize) {
    return cornerIntegral(x, y, cornerRadius, halfSize.x, halfSize.y);
}

float shadowIntegral(vec2 point, vec2 halfSize, float cornerRadius) {
    const int SAMPLE_COUNT = 4;
    float weightSum = 0.0;
    float accum = 0.0;
    float clampedMin, clampedMax, stepSize, weight;

    if (abs(point.x) > abs(point.y)) {
        float segmentMin = point.y - halfSize.y;
        float segmentMax = point.y + halfSize.y;
        clampedMin = clamp(-1.0, segmentMin, segmentMax);
        clampedMax = clamp( 1.0, segmentMin, segmentMax);
        if (clampedMin == clampedMax) return 0.0;

        stepSize = (clampedMax - clampedMin) / float(SAMPLE_COUNT);
        float sampleT = clampedMin + stepSize * 0.5;
        for (int i = 0; i < SAMPLE_COUNT; i++) {
            weight = triangleFilter(sampleT);
            accum += sliceX(point.x, point.y - sampleT, cornerRadius, halfSize) * weight;
            weightSum += weight;
            sampleT += stepSize;
        }
    } else {
        float segmentMin = point.x - halfSize.x;
        float segmentMax = point.x + halfSize.x;
        clampedMin = clamp(-1.0, segmentMin, segmentMax);
        clampedMax = clamp( 1.0, segmentMin, segmentMax);
        if (clampedMin == clampedMax) return 0.0;

        stepSize = (clampedMax - clampedMin) / float(SAMPLE_COUNT);
        float sampleT = clampedMin + stepSize * 0.5;
        for (int i = 0; i < SAMPLE_COUNT; i++) {
            weight = triangleFilter(sampleT);
            accum += sliceY(point.x - sampleT, point.y, cornerRadius, halfSize) * weight;
            weightSum += weight;
            sampleT += stepSize;
        }
    }

    float normalization = (smoothStepIntegral(clampedMax) - smoothStepIntegral(clampedMin)) / weightSum;
    return accum * normalization;
}

void main() {
    float coverage;
    if (all(lessThan(abs(coord), halfSizeOverBlurRadius - vec2(cornerRadiusOverBlurRadius + 1.0)))) {
        coverage = 1.0;
    } else {
        coverage = shadowIntegral(coord, halfSizeOverBlurRadius, cornerRadiusOverBlurRadius);
    }

    vec4 color = shadowColor * colorModulator;
    color.a *= coverage;
    fragColor = ditherColor(color);
}
