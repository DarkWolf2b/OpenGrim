#version 330 core

/*
 * Vertex stage for the recovered MSDF shader (assets/opengrim/shaders/msdf.glsl
 * + msdf_vertex.glsl, sixtwo.lk.bZd / kR.mQUZT).
 *
 * The original passes the per-text uniforms as scalar uniforms on its own raw
 * GL program (sixtwo.jN.bJq/bJx/bJt/bJu). 1.21.11's deferred GUI renderer has
 * no per-draw scalar uniform hook, so the values are packed into the vertex
 * stream (same approach as gui_shape.vsh). Every glyph vertex carries:
 *
 *   UV0      = atlas texcoord
 *   UV1.x    = range (8 bits, 0..12) | thickness (8 bits, -1..1)
 *   UV1.y    = smoothness (8 bits, 0..4) | outlineThickness (8 bits, 0..4)
 *   UV2.x    = outlineColor.r (8) | outlineColor.g (8)
 *   UV2.y    = outlineColor.b (8) | outlineColor.a (8)
 *   Normal   = fadeoutStart, fadeoutEnd (0..1), 0
 *   Pos.z    = normalized x for fadeout ((x - textPosX) / maxWidth)
 *   Color    = text colour
 *
 * Outline/fadeout are enabled by pipeline defines (MSDF_OUTLINE /
 * MSDF_FADEOUT); the plain pipeline used by MsdfFont leaves them off.
 */

layout(std140) uniform DynamicTransforms {
    mat4 ModelViewMat;
    vec4 ColorModulator;
    vec3 ModelOffset;
    mat4 TextureMat;
};

layout(std140) uniform Projection {
    mat4 ProjMat;
};

in vec3 Position;
in vec4 Color;
in vec2 UV0;
in ivec2 UV1;
in ivec2 UV2;
in vec3 Normal;

out vec2 texCoord;
out vec4 vertexColor;
out vec4 msdfParams;
out vec4 outlineColor;
out vec2 fadeRange;
out float fadePosition;

void main() {
    gl_Position = ProjMat * ModelViewMat * vec4(Position.xy, 0.0, 1.0);

    texCoord = UV0;
    vertexColor = Color;

    uint packedRangeThickness = uint(UV1.x) & 0xFFFFu;
    uint packedSmoothOutline = uint(UV1.y) & 0xFFFFu;
    msdfParams = vec4(
        float((packedRangeThickness >> 8) & 0xFFu) * (12.0 / 255.0),
        float(packedRangeThickness & 0xFFu) * (2.0 / 255.0) - 1.0,
        float((packedSmoothOutline >> 8) & 0xFFu) * (4.0 / 255.0),
        float(packedSmoothOutline & 0xFFu) * (4.0 / 255.0)
    );

    uint packedRg = uint(UV2.x) & 0xFFFFu;
    uint packedBa = uint(UV2.y) & 0xFFFFu;
    outlineColor = vec4(
        float((packedRg >> 8) & 0xFFu),
        float(packedRg & 0xFFu),
        float((packedBa >> 8) & 0xFFu),
        float(packedBa & 0xFFu)
    ) / 255.0;

    fadeRange = clamp(Normal.xy, 0.0, 1.0);
    fadePosition = Position.z;
}
