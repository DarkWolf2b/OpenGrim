#version 150

in vec2 fragCoord;
in vec4 vertexColor;

uniform vec2 size;
uniform vec2 p0;
uniform vec2 p1;
uniform vec2 p2;
uniform vec2 p3;
uniform float thickness;
uniform float smoothness;
uniform vec4 colorModulator;

out vec4 fragColor;

vec2 bezier(float t) {
    float u = 1.0 - t;
    float uu = u * u;
    float tt = t * t;

    return uu * u * p0
         + 3.0 * uu * t * p1
         + 3.0 * u * tt * p2
         + tt * t * p3;
}

vec2 bezierDeriv(float t) {
    float u = 1.0 - t;

    return 3.0 * u * u * (p1 - p0)
         + 6.0 * u * t * (p2 - p1)
         + 3.0 * t * t * (p3 - p2);
}

vec2 bezierDeriv2(float t) {
    float u = 1.0 - t;

    return 6.0 * u * (p2 - 2.0 * p1 + p0)
         + 6.0 * t * (p3 - 2.0 * p2 + p1);
}

void main() {
    vec2 position = fragCoord * size;

    float bestT = 0.0;
    float minDistance = 1e10;

    const int coarseSamples = 64;
    for (int i = 0; i <= coarseSamples; i++) {
        float t = float(i) / float(coarseSamples);
        float currentDistance = distance(position, bezier(t));

        if (currentDistance < minDistance) {
            minDistance = currentDistance;
            bestT = t;
        }
    }

    for (int i = 0; i < 4; i++) {
        vec2 curvePoint = bezier(bestT);
        vec2 firstDeriv = bezierDeriv(bestT);
        vec2 secondDeriv = bezierDeriv2(bestT);
        vec2 diff = curvePoint - position;

        float f = dot(diff, firstDeriv);
        float fp = dot(firstDeriv, firstDeriv) + dot(diff, secondDeriv);

        if (abs(fp) > 1e-6) {
            bestT = clamp(bestT - f / fp, 0.0, 1.0);
        }
    }

    float curveDistance = distance(position, bezier(bestT));
    float halfThickness = thickness * 0.5;
    float edgeSoftness = max(smoothness, 1e-4);
    float alpha = 1.0 - smoothstep(halfThickness - edgeSoftness, halfThickness, curveDistance);

    vec4 outputColor = vec4(vertexColor.rgb, vertexColor.a * alpha);

    if (outputColor.a == 0.0) {
        discard;
    }

    fragColor = outputColor * colorModulator;
}