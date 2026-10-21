#version 150

/*
 * Fragment stage for the solid circle ring (sixtwo.kz.bSi). The recovered
 * pipeline is POSITION_COLOR with lh.aApMr blending and no depth test.
 */

layout(std140) uniform DynamicTransforms {
    mat4 ModelViewMat;
    vec4 ColorModulator;
    vec3 ModelOffset;
    mat4 TextureMat;
};

in vec4 vertexColor;

out vec4 fragColor;

void main() {
    fragColor = vertexColor * ColorModulator;
}
