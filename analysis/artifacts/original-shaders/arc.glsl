#version 150

in vec2 fragCoord;
in vec4 vertexColor;

uniform vec2 size;
uniform float thickness;
uniform float startAngle;
uniform float endAngle;
uniform float smoothness;
uniform vec4 colorModulator;

out vec4 fragColor;

const float PI = 3.14159265359;
const float TAU = 6.28318530718;

float arcSDF(vec2 p, float radius, float thickness, float startAngle, float endAngle) {
    float angle = atan(p.y, p.x);

    float start = mod(startAngle, TAU);
    float end = mod(endAngle, TAU);

    if (start < 0.0) start += TAU;
    if (end < 0.0) end += TAU;

    float normalizedAngle = mod(angle + TAU, TAU);

    float arcLength = end - start;
    if (arcLength < 0.0) arcLength += TAU;

    float angleFromStart = mod(normalizedAngle - start + TAU, TAU);

    float dist = abs(length(p) - radius) - thickness * 0.5;

    if (angleFromStart <= arcLength) {
        return dist;
    }

    float halfThickness = thickness * 0.5;

    vec2 startPoint = vec2(cos(start), sin(start)) * radius;
    vec2 endPoint = vec2(cos(end), sin(end)) * radius;

    float distToStart = length(p - startPoint) - halfThickness;
    float distToEnd = length(p - endPoint) - halfThickness;

    return min(distToStart, distToEnd);
}

void main() {
    vec2 center = size * 0.5;
    vec2 p = (fragCoord * size) - center;

    float radius = min(center.x, center.y) - thickness * 0.5 - smoothness;

    float dist = arcSDF(p, radius, thickness, startAngle, endAngle);

    float alpha = 1.0 - smoothstep(-smoothness, smoothness, dist);

    vec4 finalColor = vec4(vertexColor.rgb, vertexColor.a * alpha);

    if (finalColor.a < 0.001) {
        discard;
    }

    fragColor = finalColor * colorModulator;
}
