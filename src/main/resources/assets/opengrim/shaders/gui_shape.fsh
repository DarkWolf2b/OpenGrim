#version 330 core

/*
 * Fragment stage for the recovered `shape` shader
 * (assets/opengrim/shaders/shape.glsl, sixtwo.lC.cdm/cej; original uniform set
 * recovered from sixtwo.ke.bOi). The SDF and mask math below is copied verbatim
 * from shape.glsl; only the transport changed (per-primitive uniforms arrive as
 * vertex attributes because the 1.21.11 deferred GUI renderer cannot bind
 * per-draw scalar uniforms — see gui_shape.vsh).
 *
 * Pipeline defines:
 *   SHAPE_TYPE  = 0 (SHAPE_RECTANGLE) or 1 (SHAPE_SQUIRCLE)
 *   MASK_OUTLINE = outline stroke (lC.cej / kg.bPb), absent = fill (lC.cdm)
 *
 * Solid fills are the only fillType wired in this pass; shape.glsl's
 * FILL_GRADIENT/FILL_TEXTURE paths and the gradient-stop dither are untouched
 * in shape.glsl and will be added with the gradient pipeline.
 */

layout(std140) uniform DynamicTransforms {
    mat4 ModelViewMat;
    vec4 ColorModulator;
    vec3 ModelOffset;
    mat4 TextureMat;
};

in vec2 fragCoord;
in vec2 shapeSize;
in vec4 vertexColor;
in vec4 radius;
in vec3 smoothParams;
in float cornerSmoothness;

out vec4 fragColor;

#ifndef SHAPE_TYPE
#define SHAPE_TYPE 0
#endif

const int SHAPE_RECTANGLE = 0;
const int SHAPE_SQUIRCLE = 1;

// shape.glsl: shapeSDF — unchanged.
float shapeSDF(vec2 p, vec2 b, vec4 radii) {
    if (SHAPE_TYPE == SHAPE_RECTANGLE) {
        radii = min(radii, vec4(min(b.x, b.y)));
    }

    float r = (p.x > 0.0)
            ? ((p.y > 0.0) ? radii.x : radii.y)
            : ((p.y > 0.0) ? radii.z : radii.w);

    vec2 q = abs(p) - b + r;
    vec2 qClamped = max(q, 0.0);

    float len;
    if (SHAPE_TYPE == SHAPE_SQUIRCLE) {
        float power = max(cornerSmoothness, 1.0);
        len = pow(pow(qClamped.x, power) + pow(qClamped.y, power), 1.0 / power);
    } else {
        len = length(qClamped);
    }

    return min(max(q.x, q.y), 0.0) + len - r;
}

// shape.glsl: maskAlpha — unchanged, with smoothness/innerSmoothness/thickness
// read from smoothParams instead of scalar uniforms.
float maskAlpha(float distance) {
    float smoothness = smoothParams.x;
    float innerSmoothness = smoothParams.y;
    float thickness = smoothParams.z;

#ifdef MASK_OUTLINE
    float inner = smoothstep(
        1.0 - thickness - innerSmoothness - smoothness,
        1.0 - thickness - smoothness,
        distance
    );
    float outer = 1.0 - smoothstep(1.0 - smoothness, 1.0, distance);
    return inner * outer;
#else
    return 1.0 - smoothstep(1.0 - smoothness, 1.0, distance);
#endif
}

void main() {
    vec2 center = shapeSize * 0.5;
    vec2 p = center - (fragCoord * shapeSize);

    float distance = shapeSDF(p, center - 1.0, radius);
    float alpha = maskAlpha(distance);

    vec4 outputColor = vertexColor;
    outputColor.a *= alpha;

    if (outputColor.a == 0.0) {
        discard;
    }

    fragColor = outputColor * ColorModulator;
}
