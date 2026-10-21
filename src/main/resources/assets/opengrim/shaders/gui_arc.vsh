#version 330 core

/*
 * Vertex stage for the recovered arc SDF (assets/opengrim/shaders/arc.glsl,
 * sixtwo.lC.cdw/cdx). Per-primitive uniforms are carried in the vertex stream
 * (the 1.21.11 deferred GUI renderer has no per-draw scalar hook):
 *   UV0    = size (width, height)
 *   UV1    = thickness, startAngle  (fixed-point 8.8)
 *   UV2    = endAngle, smoothness   (fixed-point 8.8)
 *   Color  = vertex colour
 * fragCoord comes from gl_VertexID exactly like position_tex_color_vertex.glsl.
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

out vec2 fragCoord;
out vec2 arcSize;
out vec4 arcParams;
out vec4 vertexColor;

const vec2[4] RECT_VERTICES_COORDS = vec2[] (
    vec2(0.0, 0.0),
    vec2(0.0, 1.0),
    vec2(1.0, 1.0),
    vec2(1.0, 0.0)
);

void main() {
    gl_Position = ProjMat * ModelViewMat * vec4(Position.xy, 0.0, 1.0);
    fragCoord = RECT_VERTICES_COORDS[gl_VertexID % 4];
    arcSize = UV0;
    arcParams = vec4(
        float(UV1.x) / 32.0,
        float(UV1.y) / 256.0,
        float(UV2.x) / 256.0,
        float(UV2.y) / 256.0
    );
    vertexColor = Color;
}
