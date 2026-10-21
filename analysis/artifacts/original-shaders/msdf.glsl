#version 150

            in vec2 texCoord;
            in vec4 vertexColor;
            in vec2 textPos;

            uniform sampler2D Sampler0;
            uniform float range;
            uniform float thickness;
            uniform float smoothness;
            uniform bool outline;
            uniform float outlineThickness;
            uniform vec4 outlineColor;
            uniform vec4 colorModulator;

            uniform bool fadeout;
            uniform float fadeoutStart;
            uniform float fadeoutEnd;
            uniform float maxWidth;
            uniform float textPosX;

            out vec4 fragColor;

            float median(vec3 color) {
                return max(min(color.r, color.g), min(max(color.r, color.g), color.b));
            }

            void main() {
                float dist = median(texture(Sampler0, texCoord).rgb) - 0.5 + thickness;
                vec2 h = vec2(dFdx(texCoord.x), dFdy(texCoord.y)) * textureSize(Sampler0, 0);
                float pixels = range * inversesqrt(h.x * h.x + h.y * h.y);
                pixels = max(pixels, 1.0);
                float alpha = smoothstep(-smoothness, smoothness, dist * pixels);
                vec4 color = vec4(vertexColor.rgb, vertexColor.a * alpha);

                if (outline) {
                    color = mix(outlineColor, vertexColor, alpha);
                    color.a *= smoothstep(-smoothness, smoothness, (dist + outlineThickness) * pixels);
                }

                if (fadeout) {
                    float fadeAlpha = 1.0;
                    float relativeX = textPos.x - textPosX;
                    float normalizedX = relativeX / maxWidth;
                    if (normalizedX > fadeoutStart) {
                        fadeAlpha = 1.0 - smoothstep(fadeoutStart, fadeoutEnd, normalizedX);
                    }
                    color.a *= fadeAlpha;
                }

                fragColor = color * colorModulator;
            }

