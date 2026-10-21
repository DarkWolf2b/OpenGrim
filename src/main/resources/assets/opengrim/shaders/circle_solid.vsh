#version 150

/*
 * Vertex stage for the recovered solid circle ring (sixtwo.kz.bSi,
 * kz.java:344-452; pipeline kR.PMnQE, POSITION_COLOR TRIANGLE_STRIP).
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

out vec4 vertexColor;

void main() {
    gl_Position = ProjMat * ModelViewMat * vec4(Position, 1.0);
    vertexColor = Color;
}
