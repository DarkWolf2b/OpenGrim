#version 150

/*
 * Fullscreen stage shared by the four recovered Chams fragment stages
 * (chams_glass/water/chrome/liquidmetal). The original pass draws a
 * screen-space quad exactly like posteffect_vertex.glsl; texCoord follows the
 * same clip-space to texture-space mapping.
 */

in vec3 Position;

out vec2 texCoord;

void main() {
    gl_Position = vec4(Position, 1.0);
    texCoord = (Position.xy * 0.5) + 0.5;
}
