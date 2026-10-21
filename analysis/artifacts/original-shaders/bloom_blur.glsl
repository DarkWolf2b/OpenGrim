#version 150

in vec2 texCoord;

uniform sampler2D Sampler0;
uniform sampler2D Sampler1;
uniform float temporalBlend;

out vec4 fragColor;

const int MAX_LOD = 7;
const float HDR_RANGE = 8.0;
const float kWeights[7] = float[7](1.0, 6.0, 15.0, 20.0, 15.0, 6.0, 1.0);

vec3 encodeBloom(vec3 lin) {
    return pow(max(lin / HDR_RANGE, vec3(0.0)), vec3(0.25));
}

vec3 decodeBloom(vec3 enc) {
    vec3 sq = enc * enc;
    return sq * sq * HDR_RANGE;
}

vec4 gaussianBlur(sampler2D tex, vec2 uv, float lod, vec2 texel) {
    vec4 sum = vec4(0.0);
    for (int x = -3; x <= 3; x++) {
        for (int y = -3; y <= 3; y++) {
            float w = kWeights[x + 3] * kWeights[y + 3];
            sum += textureLod(tex, uv + vec2(float(x), float(y)) * texel, lod) * w;
        }
    }
    return sum / 4096.0;
}

void main() {
    vec2 iResolution = vec2(textureSize(Sampler0, 0));
    vec2 fragCoord = gl_FragCoord.xy;

    vec2 res = floor(iResolution / 2.0);
    float xpos = 0.0;
    int lod = 0;
    for (int i = 0; i < MAX_LOD; i++) {
        xpos += res.x;
        if (xpos > fragCoord.x || res.x <= 1.0) {
            break;
        }
        lod++;
        res = floor(res / 2.0);
    }

    if (fragCoord.y >= res.y || lod >= MAX_LOD) {
        fragColor = vec4(0.0);
        return;
    }

    vec2 uv = (fragCoord - vec2(xpos - res.x, 0.0)) / res;
    vec2 texel = 0.5 / res;
    vec4 bloom = gaussianBlur(Sampler0, uv, float(lod), texel);
    bloom.rgb = clamp(bloom.rgb, vec3(0.0), vec3(65504.0));

    vec3 prevEncoded = texelFetch(Sampler1, ivec2(fragCoord), 0).rgb;
    bloom.rgb = mix(bloom.rgb, decodeBloom(prevEncoded), temporalBlend);

    fragColor = vec4(encodeBloom(bloom.rgb), 1.0);
}
