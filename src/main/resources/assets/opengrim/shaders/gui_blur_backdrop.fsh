#version 330 core

/*
 * Blur-style window backdrop (lC.ccW Blur branch, fX.aYf). Samples the
 * two-pass separable blur of the world framebuffer and masks it with the
 * recovered shape.glsl rounded-rect SDF. Channel map is gui_shape.vsh's:
 *   UV0 size, UV1/UV2 radius, Normal = smoothness / tintMix / opacity,
 *   Color = tint colour, Position.z = cornerSmoothness.
 * The tintMix is the style opacity (fX.aYh).
 */

layout(std140) uniform DynamicTransforms {
    mat4 ModelViewMat;
    vec4 ColorModulator;
    vec3 ModelOffset;
    mat4 TextureMat;
};

uniform sampler2D Sampler0;

in vec2 fragCoord;
in vec2 shapeSize;
in vec4 vertexColor;
in vec4 radius;
in vec3 smoothParams;
in float cornerSmoothness;

out vec4 fragColor;

float shapeSDF(vec2 p, vec2 b, vec4 radii) {
    radii = min(radii, vec4(min(b.x, b.y)));

    float r = (p.x > 0.0)
            ? ((p.y > 0.0) ? radii.x : radii.y)
            : ((p.y > 0.0) ? radii.z : radii.w);

    vec2 q = abs(p) - b + r;
    vec2 qClamped = max(q, 0.0);
    return min(max(q.x, q.y), 0.0) + length(qClamped) - r;
}

void main() {
    vec2 center = shapeSize * 0.5;
    vec2 p = center - (fragCoord * shapeSize);
    float distance = shapeSDF(p, center - 1.0, radius);

    float smoothness = smoothParams.x;
    float tintMix = smoothParams.y;
    float opacity = smoothParams.z;
    float alpha = (1.0 - smoothstep(1.0 - smoothness, 1.0, distance)) * opacity;
    if (alpha <= 0.0) {
        discard;
    }

    vec2 sampleUv = gl_FragCoord.xy / vec2(textureSize(Sampler0, 0));
    vec4 blurred = texture(Sampler0, sampleUv);
    vec3 color = mix(blurred.rgb, vertexColor.rgb, tintMix);
    fragColor = vec4(color, alpha) * ColorModulator;
}
