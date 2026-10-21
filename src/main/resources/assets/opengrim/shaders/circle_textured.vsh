#version 150

/*
 * Vertex stage for the recovered textured circle billboard (sixtwo.kz.bSh,
 * kz.java:458-480; pipeline kR.Dmmsd.bUZ(kz.aKqGY)). Vertex data is
 * POSITION_COLOR_TEXTURE_LIGHT; the lightmap attribute is ignored here because
 * kz.bSh's lightmap values are native kz.bSr constants (see EffectDraw).
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

out vec2 texCoord;
out vec4 vertexColor;

void main() {
    gl_Position = ProjMat * ModelViewMat * vec4(Position, 1.0);
    texCoord = UV0;
    vertexColor = Color;
}
