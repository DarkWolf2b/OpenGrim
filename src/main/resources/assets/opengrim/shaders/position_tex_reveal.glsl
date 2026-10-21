#version 150

uniform sampler2D Sampler0;

uniform vec4 colorModulator;

uniform float revealProgress;
uniform float revealedAlpha;
uniform float hiddenAlpha;
uniform float edgeSoftness;

in vec2 texCoord;
in float revealValue;

out vec4 fragColor;

void main() {
    vec4 tex = texture(Sampler0, texCoord) * colorModulator;

    float revealedMask;
    if (edgeSoftness <= 0.0001) {
        revealedMask = step(revealValue, revealProgress);
    } else {
        revealedMask = 1.0 - smoothstep(
            revealProgress - edgeSoftness,
            revealProgress + edgeSoftness,
            revealValue
        );
    }

    float alpha = mix(hiddenAlpha, revealedAlpha, revealedMask);
    tex.a *= alpha;

    if (tex.a <= 0.001) {
        discard;
    }

    fragColor = tex;
}
