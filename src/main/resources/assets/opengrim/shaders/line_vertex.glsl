#version 150

in vec3 Position;
in vec4 Color;
in vec3 Normal;
in float LineWidth;

uniform mat4 ModelViewMat;
uniform mat4 ProjMat;
uniform vec2 ScreenSize;

out vec4 vertexColor;
noperspective out float lineSide;
flat out float lineHalfWidth;

const float AA_SIZE = 1.0;

const float VIEW_SHRINK = 1.0 - (1.0 / 256.0);
const mat4 VIEW_SCALE = mat4(
    VIEW_SHRINK, 0.0, 0.0, 0.0,
    0.0, VIEW_SHRINK, 0.0, 0.0,
    0.0, 0.0, VIEW_SHRINK, 0.0,
    0.0, 0.0, 0.0, 1.0
);

void main() {
    vec4 linePosStart = ProjMat * VIEW_SCALE * ModelViewMat * vec4(Position, 1.0);
    vec4 linePosEnd = ProjMat * VIEW_SCALE * ModelViewMat * vec4(Position + Normal, 1.0);

    vec3 ndc1 = linePosStart.xyz / linePosStart.w;
    vec3 ndc2 = linePosEnd.xyz / linePosEnd.w;

    vec2 lineScreenDirection = normalize((ndc2.xy - ndc1.xy) * ScreenSize);
    vec2 lineOffsetDirection = vec2(-lineScreenDirection.y, lineScreenDirection.x);

    float expandedHalfWidth = (LineWidth * 0.5) + AA_SIZE;
    vec2 lineOffset = lineOffsetDirection * expandedHalfWidth * 2.0 / ScreenSize;

    if (lineOffset.x < 0.0) {
        lineOffset *= -1.0;
    }

    float side = gl_VertexID % 2 == 0 ? 1.0 : -1.0;
    gl_Position = vec4((ndc1 + vec3(lineOffset * side, 0.0)) * linePosStart.w, linePosStart.w);

    vertexColor = Color;
    lineSide = side * expandedHalfWidth;
    lineHalfWidth = LineWidth * 0.5;
}
