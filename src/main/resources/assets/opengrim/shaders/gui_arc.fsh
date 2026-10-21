#version 330 core

/*
 * Fragment stage for the recovered arc SDF (assets/opengrim/shaders/arc.glsl).
 * The arcSDF math is copied verbatim; only the uniform transport changed
 * (thickness/startAngle/endAngle/smoothness arrive as vertex attributes, see
 * gui_arc.vsh).
 */

layout(std140) uniform DynamicTransforms {
    mat4 ModelViewMat;
    vec4 ColorModulator;
    vec3 ModelOffset;
    mat4 TextureMat;
};

in vec2 fragCoord;
in vec2 arcSize;
in vec4 arcParams;
in vec4 vertexColor;

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
    float thickness = arcParams.x;
    float startAngle = arcParams.y;
    float endAngle = arcParams.z;
    float smoothness = arcParams.w;

    vec2 center = arcSize * 0.5;
    vec2 p = (fragCoord * arcSize) - center;

    float radius = min(center.x, center.y) - thickness * 0.5 - smoothness;

    float dist = arcSDF(p, radius, thickness, startAngle, endAngle);

    float alpha = 1.0 - smoothstep(-smoothness, smoothness, dist);

    vec4 finalColor = vec4(vertexColor.rgb, vertexColor.a * alpha);

    if (finalColor.a < 0.001) {
        discard;
    }

    fragColor = finalColor * ColorModulator;
}
