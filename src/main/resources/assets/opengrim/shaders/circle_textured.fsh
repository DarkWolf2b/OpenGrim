#version 150

/*
 * Fragment stage for the textured circle billboard (sixtwo.kz.bSh). The
 * recovered pipeline is a plain texture * vertex colour stage (kR.Dmmsd,
 * POSITION_COLOR_TEXTURE_LIGHT), blended with lh.aApMr and no depth test.
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

out vec4 fragColor;

void main() {
    fragColor = texture(Sampler0, texCoord) * vertexColor * ColorModulator;
}
