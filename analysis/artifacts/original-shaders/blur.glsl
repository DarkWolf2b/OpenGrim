#version 150

in vec2 fragCoord;
in vec2 texCoord;

uniform sampler2D inTexture;
uniform vec2 texelSize, direction;
uniform float radius, weights[256];

#define offset texelSize * direction

out vec4 fragColor;

void main() {
    vec3 color = texture(inTexture, texCoord.st).rgb * weights[0];
    float totalWeight = weights[0];

    for (float f = 1.0; f <= radius; f++) {
        color += texture(inTexture, texCoord.st + f * offset).rgb * (weights[int(abs(f))]);
        color += texture(inTexture, texCoord.st - f * offset).rgb * (weights[int(abs(f))]);

        totalWeight += (weights[int(abs(f))]) * 2.0;
    }

    fragColor = vec4(color / totalWeight, 1.0);
}