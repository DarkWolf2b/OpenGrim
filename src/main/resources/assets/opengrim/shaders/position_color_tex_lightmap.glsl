#version 150

uniform sampler2D Sampler0;
uniform vec4 ColorModulator;

in vec4 vertexColor;
in vec2 texCoord;
in vec2 lightCoord;

out vec4 fragColor;

void main() {
    vec4 color = texture(Sampler0, texCoord) * vertexColor;
    if(color.a == 0.0) {
        discard;
    }
    fragColor = color * ColorModulator;
}
