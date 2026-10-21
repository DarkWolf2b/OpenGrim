#version 150

/* Fullscreen stage for the recovered outline composite (outlines.glsl). */

in vec3 Position;

out vec2 texCoord;

void main() {
    gl_Position = vec4(Position, 1.0);
    texCoord = (Position.xy * 0.5) + 0.5;
}
