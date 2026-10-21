#version 150

uniform mat4 ProjMat;
uniform mat4 ModelViewMat;

in vec3 Position;
in vec4 Color;
in vec2 UV0;

out vec2 texCoord;
out float revealValue;

void main() {
    texCoord = UV0;
    revealValue = Color.r;
    gl_Position = ProjMat * ModelViewMat * vec4(Position, 1.0);
}
