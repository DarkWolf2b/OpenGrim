#version 330 core

/*
 * Fragment stage for the recovered MSDF shader (assets/opengrim/shaders/
 * msdf.glsl, sixtwo.lk.bZd / kR.mQUZT). The distance-field math is copied
 * verbatim; only the uniform transport changed (packed vertex attributes, see
 * gui_msdf.vsh). Pipeline defines:
 *
 *   MSDF_OUTLINE  - lk's outlined text path (outline + outlineThickness)
 *   MSDF_FADEOUT  - text overflow fade (fadeoutStart/End, maxWidth/textPosX)
 *
 * The plain pipeline used by MsdfFont has neither define set.
 */

layout(std140) uniform DynamicTransforms {
    mat4 ModelViewMat;
    vec4 ColorModulator;
    vec3 ModelOffset;
    mat4 TextureMat;
};

uniform sampler2D Sampler0;

in vec2 texCoord;
in vec4 vertexColor;
in vec4 msdfParams;
in vec4 outlineColor;
in vec2 fadeRange;
in float fadePosition;

out vec4 fragColor;

float median(vec3 color) {
    return max(min(color.r, color.g), min(max(color.r, color.g), color.b));
}

void main() {
    float range = msdfParams.x;
    float thickness = msdfParams.y;
    float smoothness = msdfParams.z;
    float outlineThickness = msdfParams.w;

    float dist = median(texture(Sampler0, texCoord).rgb) - 0.5 + thickness;
    vec2 h = vec2(dFdx(texCoord.x), dFdy(texCoord.y)) * textureSize(Sampler0, 0);
    float pixels = range * inversesqrt(h.x * h.x + h.y * h.y);
    pixels = max(pixels, 1.0);
    float alpha = smoothstep(-smoothness, smoothness, dist * pixels);
    vec4 color = vec4(vertexColor.rgb, vertexColor.a * alpha);

#ifdef MSDF_OUTLINE
    color = mix(outlineColor, vertexColor, alpha);
    color.a *= smoothstep(-smoothness, smoothness, (dist + outlineThickness) * pixels);
#endif

#ifdef MSDF_FADEOUT
    float fadeAlpha = 1.0;
    if (fadePosition > fadeRange.x) {
        fadeAlpha = 1.0 - smoothstep(fadeRange.x, fadeRange.y, fadePosition);
    }
    color.a *= fadeAlpha;
#endif

    fragColor = color * ColorModulator;
}
