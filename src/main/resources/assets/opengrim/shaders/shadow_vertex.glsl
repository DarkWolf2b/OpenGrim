#version 150

uniform mat4 ProjMat;
uniform mat4 ModelViewMat;

in vec3 Position;
in vec2 UV0;

uniform vec2 halfSizeOverBlurRadius;

out vec2 coord;

void main() {
    coord = (UV0 * 2.0 - 1.0) * (halfSizeOverBlurRadius + vec2(1.0));
    gl_Position = ProjMat * ModelViewMat * vec4(Position, 1.0);
}
