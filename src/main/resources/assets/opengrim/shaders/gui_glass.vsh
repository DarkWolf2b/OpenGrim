#version 330 core

/*
 * Vertex stage for the recovered liquid glass shader
 * (assets/opengrim/shaders/liquid_glass.glsl, sixtwo.lC.ccW Liquid Glass
 * branch). Per-window attributes:
 *   UV0 = size (width, height)
 *   UV1/UV2 = radius TL/BL/TR/BR fixed-point 8.8 (same as gui_shape)
 *   Position.z = cornerSmoothness (squircle exponent)
 *   Color = tintColor
 *   Normal.z = window opacity
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
out vec2 size;
out vec4 radius;
out vec4 cornerSmoothness;
out vec4 tintColor;
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
    size = UV0;
    radius = vec4(float(UV1.x), float(UV1.y), float(UV2.x), float(UV2.y)) / 256.0;
    cornerSmoothness = vec4(max(Position.z, 1.0));
    tintColor = Color;
    vertexColor = vec4(1.0, 1.0, 1.0, clamp(Normal.z, 0.0, 1.0));
}
