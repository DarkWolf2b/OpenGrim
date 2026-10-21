#version 330 core

layout(location = 0) in vec3 Position;
layout(location = 1) in vec2 UV0;

uniform mat4 ModelViewMat;
uniform mat4 ProjMat;

out vec2 fragCoord;
out vec2 texCoord;

const vec2 RECT_VERTICES_COORDS[4] = vec2[](
    vec2(0.0, 0.0),
    vec2(0.0, 1.0),
    vec2(1.0, 1.0),
    vec2(1.0, 0.0)
);

vec2 rvertexcoord(int id) {
    return RECT_VERTICES_COORDS[id % 4];
}

void main() {
    gl_Position = ProjMat * ModelViewMat * vec4(Position, 1.0);
    fragCoord = rvertexcoord(gl_VertexID);
    texCoord = UV0;
}
