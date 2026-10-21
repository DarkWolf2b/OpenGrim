#version 150

in vec2 fragCoord;
in vec4 vertexColor;

uniform vec2 size;
uniform float cellSize;

uniform vec4 radius;
uniform float smoothness;
uniform vec4 colorModulator;

out vec4 fragColor;

float roundedBoxSDF(vec2 center, vec2 size, vec4 radius) {
    vec2 halfsize = size;
    radius = min(radius, vec4(halfsize.x, halfsize.y, halfsize.x, halfsize.y));

    radius.xy = (center.x > 0.0) ? radius.xy : radius.zw;
    radius.x = (center.y > 0.0) ? radius.x : radius.y;

    vec2 q = abs(center) - size + radius.x;
    return min(max(q.x, q.y), 0.0) + length(max(q, 0.0)) - radius.x;
}

float shapeCoverage() {
    vec2 center = size * 0.5;
    float distance = roundedBoxSDF(center - (fragCoord * size), center - 1.0, radius);
    return 1.0 - smoothstep(1.0 - smoothness, 1.0, distance);
}

void main() {
    float coverage = shapeCoverage();
    if (coverage <= 0.0) {
        discard;
    }

    vec2 px = fragCoord * size;
    vec2 cell = floor(px / cellSize);
    float k = mod(cell.x + cell.y, 2.0);
    vec4 color = mix(vec4(0.0, 0.0, 0.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0), k);

    color.a *= coverage;
    fragColor = color * vertexColor * colorModulator;
}
