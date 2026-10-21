#version 150

in vec2 texCoord;
in vec4 vertexColor;

out vec4 fragColor;

void main() {
    vec2 uv = texCoord * 2.0 - 1.0;
    float d2 = dot(uv, uv);
    if (d2 > 1.0) {
        discard;
    }

    float core = exp(-d2 * 3.5);
    float alpha = core * vertexColor.a;
    if (alpha < 0.003) {
        discard;
    }

    fragColor = vec4(vertexColor.rgb, alpha);
}
