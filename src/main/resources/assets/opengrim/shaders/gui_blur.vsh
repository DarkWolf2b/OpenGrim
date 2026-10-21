#version 330 core

/*
 * Fullscreen vertex stage for the recovered separable blur
 * (assets/opengrim/shaders/blur.glsl, sixtwo.kk.bPM). Positions are already in
 * clip space (-1..1); texCoord follows posteffect_vertex.glsl.
 */

layout(location = 0) in vec3 Position;

out vec2 texCoord;

void main() {
    gl_Position = vec4(Position, 1.0);
    texCoord = (Position.xy * 0.5) + 0.5;
}
