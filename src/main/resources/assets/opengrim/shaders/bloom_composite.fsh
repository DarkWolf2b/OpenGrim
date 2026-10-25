#version 150

/*
 * Recovered sixtwo.kl composite pass (analysis/artifacts/original-shaders/
 * bloom_composite.glsl). The original pipeline is kR.xfXqe with the
 * jL.wxgUS uniform block: Sampler0 is the effect layer, Sampler1 the encoded
 * bloom pyramid. The pass is additive over the main framebuffer.
 */

in vec2 texCoord;

uniform sampler2D Sampler0;
uniform sampler2D Sampler1;

layout(std140) uniform Bloom {
    vec3 glowColor;
    float bloomStrength;
};

out vec4 fragColor;

const int MAX_LOD = 7;
const float HDR_RANGE = 8.0;

vec4 sampleLod(sampler2D tex, vec2 uv, vec2 res, int lod) {
    vec2 nres = floor(res / 2.0);
    float xpos = 0.0;
    for (int i = 0; i < lod; i++) {
        xpos += nres.x;
        nres = floor(nres / 2.0);
    }
    vec2 nuv = clamp(uv * nres, vec2(0.5), nres - 0.5) + vec2(xpos, 0.0);
    return texture(tex, nuv / res);
}

vec4 sampleLodBlurred(sampler2D tex, vec2 uv, vec2 res, int lod) {
    float sc = exp2(float(lod));
    vec2 nres = floor(res / sc * 0.5);
    vec2 offsets[4] = vec2[](
        vec2(-1.0 / 3.0, -1.0 / 3.0),
        vec2( 1.0 / 3.0, -1.0 / 3.0),
        vec2(-1.0 / 3.0,  1.0 / 3.0),
        vec2( 1.0 / 3.0,  1.0 / 3.0)
    );

    vec4 result = vec4(0.0);
    for (int i = 0; i < 4; i++) {
        vec2 p = clamp(uv + offsets[i] / nres, vec2(0.0), vec2(1.0));
        result += sampleLod(tex, p, res, lod);
    }
    return result * 0.25;
}

vec3 decodeBloom(vec3 encoded) {
    vec3 sq = encoded * encoded;
    return sq * sq * HDR_RANGE;
}

vec3 tile(int lod, vec2 uv, vec2 res) {
    return decodeBloom(sampleLod(Sampler1, uv, res, lod).rgb);
}

vec3 tileBlurred(int lod, vec2 uv, vec2 res) {
    return decodeBloom(sampleLodBlurred(Sampler1, uv, res, lod).rgb);
}

void main() {
    vec2 iResolution = vec2(textureSize(Sampler1, 0));
    vec2 uv = texCoord;
    vec4 srcSample = texture(Sampler0, uv);

    float r = bloomStrength;
    vec3 bloom = vec3(0.0);
    float wsum = 0.0;
    float w = 1.0;

    bloom += tile(0, uv, iResolution) * w; wsum += w;
    w = smoothstep(0.0, 0.25, r); bloom += tile(1, uv, iResolution) * w; wsum += w;
    w = smoothstep(0.1, 0.4, r); bloom += tile(2, uv, iResolution) * w; wsum += w;
    w = smoothstep(0.2, 0.55, r); bloom += tileBlurred(3, uv, iResolution) * w; wsum += w;
    w = smoothstep(0.35, 0.75, r); bloom += tileBlurred(4, uv, iResolution) * w; wsum += w;
    w = smoothstep(0.5, 1.0, r); bloom += tileBlurred(5, uv, iResolution) * w; wsum += w;
    w = smoothstep(0.65, 1.0, r); bloom += tileBlurred(6, uv, iResolution) * w; wsum += w;

    bloom /= max(wsum, 1e-4);

    float bloomLum = max(max(bloom.r, bloom.g), bloom.b);
    const float SHAPE_PIVOT = 0.4;
    bloomLum = SHAPE_PIVOT * pow(max(bloomLum, 1e-6) / SHAPE_PIVOT, 0.3);

    vec3 outerHalo = glowColor * bloomLum * 1.2;
    vec3 outCol = outerHalo + srcSample.rgb;
    float vis = max(max(max(outerHalo.r, outerHalo.g), outerHalo.b),
                    max(max(srcSample.r, srcSample.g), srcSample.b));
    if (vis < 0.003) {
        discard;
    }

    fragColor = vec4(outCol, 1.0);
}
