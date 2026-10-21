#version 330 core

/*
 * Fragment stage for the recovered separable blur (assets/opengrim/shaders/
 * blur.glsl, sixtwo.kk.bPM). The Gaussian weights are generated exactly like
 * sixtwo.kk$uf.dsw: w[i] = 1/sqrt(2*pi*sigma^2) * exp(-i^2/(2*sigma^2)) with
 * sigma = radius/2; the shader normalises by the total weight.
 *
 * std140 layout (see BackdropBlur):
 *   vec2 texelSize; vec2 direction; float radius; float pad; vec4 weights[64];
 */

layout(std140) uniform Blur {
    vec2 texelSize;
    vec2 direction;
    float radius;
    float pad;
    vec4 weights[64];
};

uniform sampler2D inTexture;

in vec2 texCoord;

out vec4 fragColor;

float weightAt(int index) {
    return weights[index >> 2][index & 3];
}

void main() {
    int radiusInt = int(radius);
    vec3 color = texture(inTexture, texCoord).rgb * weightAt(0);
    float totalWeight = weightAt(0);

    for (int i = 1; i <= radiusInt; i++) {
        vec2 offset = texelSize * direction * float(i);
        float weight = weightAt(i);
        color += texture(inTexture, texCoord + offset).rgb * weight;
        color += texture(inTexture, texCoord - offset).rgb * weight;
        totalWeight += weight * 2.0;
    }

    fragColor = vec4(color / totalWeight, 1.0);
}
