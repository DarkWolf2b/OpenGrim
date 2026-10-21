#version 150

in vec4 vertexColor;
noperspective in float lineSide;
flat in float lineHalfWidth;

uniform vec4 colorModulator;

out vec4 fragColor;

const float AA_SIZE = 1.0;

void main() {
    vec4 color = vertexColor * colorModulator;

    float distanceFromCenter = abs(lineSide);
    float alpha = 1.0 - smoothstep(lineHalfWidth, lineHalfWidth + AA_SIZE, distanceFromCenter);

    color.a *= alpha;

    if (color.a <= 0.0) {
        discard;
    }

    fragColor = color;
}
