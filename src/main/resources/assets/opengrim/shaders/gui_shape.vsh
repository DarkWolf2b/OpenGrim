#version 330 core

/*
 * Vertex stage for the recovered `shape` fragment shader
 * (assets/opengrim/shaders/shape.glsl, sixtwo.lC.cdm/cej).
 *
 * The original client binds scalar uniforms through raw GL (sixtwo.jN.bJq/bJr/
 * bJt) on its own program. Minecraft 1.21.11's deferred GUI renderer batches
 * primitives by pipeline and cannot upload per-primitive scalar uniforms, so
 * the same values travel in the vertex stream instead. Every vertex of a quad
 * carries the primitive's uniforms; the fragment stage below reads them with
 * exactly the same meaning as shape.glsl's declarations.
 *
 * Attribute channel map (all four vertices carry identical uniform values):
 *   UV0    = size (width, height)
 *   UV1    = radius.x, radius.y  (top-left, bottom-left)   fixed-point 8.8
 *   UV2    = radius.z, radius.w  (top-right, bottom-right) fixed-point 8.8
 *   Normal = smoothness, innerSmoothness, thickness        normalized bytes
 *   Pos.z  = cornerSmoothness (ignored for gl_Position; forwarded to the FS)
 *
 * radius order matches ke.bOi's `radius` upload: topLeft, bottomLeft,
 * topRight, bottomRight (shape.glsl shapeSDF reads radii.x for p.x>0,p.y>0).
 *
 * fragCoord comes from gl_VertexID exactly like position_tex_color_vertex.glsl;
 * indexed QUADS keep gl_VertexID % 4 aligned with the four corners.
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

out vec2 fragCoord;
out vec2 shapeSize;
out vec4 vertexColor;
out vec4 radius;
out vec3 smoothParams;
out float cornerSmoothness;

const vec2[4] RECT_VERTICES_COORDS = vec2[] (
    vec2(0.0, 0.0),
    vec2(0.0, 1.0),
    vec2(1.0, 1.0),
    vec2(1.0, 0.0)
);

void main() {
    gl_Position = ProjMat * ModelViewMat * vec4(Position.xy, 0.0, 1.0);

    fragCoord = RECT_VERTICES_COORDS[gl_VertexID % 4];
    shapeSize = UV0;
    vertexColor = Color;
    radius = vec4(float(UV1.x), float(UV1.y), float(UV2.x), float(UV2.y)) / 256.0;
    smoothParams = clamp(Normal, 0.0, 1.0);
    cornerSmoothness = Position.z;
}
