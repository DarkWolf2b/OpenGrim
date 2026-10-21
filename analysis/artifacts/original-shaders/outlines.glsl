#version 330 core

in vec2 texCoord;

uniform sampler2D Sampler0;
uniform float time;
uniform vec4 firstColor;
uniform vec4 secondColor;
uniform int colorMode;
uniform int glowQuality;
uniform float glowRadius;
uniform float glowAlphaMult;
uniform int glowThinOutline;
uniform float fillAlphaMult;
uniform vec2 halfTexelSize;
uniform float saturation;
uniform float brightness;

out vec4 fragColor;

vec3 wave(vec2 pos)
{
    return mix(
        firstColor.rgb,
        secondColor.rgb,
        sin((distance(vec2(0), pos) - time * 60.0) / 60.0) * 0.5 + 0.5
    );
}

float rand(vec2 n)
{
    return fract(sin(dot(n, vec2(12.9898, 4.1414))) * 43758.5453);
}

void main()
{
    vec4 prevColor = texture(Sampler0, texCoord);
    vec4 outputColor = firstColor;

    switch (colorMode)
    {
        case 0:
            outputColor = firstColor;
            break;

        case 1:
        {
            vec3 p = -3.1416 * vec3(0.0, 0.5, 1.0);
            float diagonal = (texCoord.x + texCoord.y) * 0.5;
            float distVal = diagonal * 10.0 + time;

            vec3 col = 0.5 + 0.5 * -sin(distVal) * cos(distVal + p);

            vec3 gray = vec3(dot(col, vec3(0.299, 0.587, 0.114)));
            col = mix(gray, col, saturation);

            outputColor = vec4(col * brightness, 1.0);
            break;
        }

        case 2:
            outputColor = vec4(wave(gl_FragCoord.xy), 1.0);
            break;

        case 3:
            outputColor = vec4(wave(vec2(0.0, gl_FragCoord.y)), 1.0);
            break;
    }

    float alpha = 0.0;

    if (glowThinOutline == 1 && prevColor.a == 0.0)
    {
        for (int x = -1; x <= 1; x++)
        {
            for (int y = -1; y <= 1; y++)
            {
                if (x != 0 || y != 0)
                {
                    vec4 offsetColor = texture(
                        Sampler0,
                        texCoord + vec2(x, y) * halfTexelSize
                    );

                    if (offsetColor.a != 0.0)
                    {
                        fragColor = vec4(outputColor.rgb, 1.0);
                        return;
                    }
                }
            }
        }
    }

    float i = 0.0;
    float j = 0.0;

    int width = int(glowQuality * int(glowRadius));
    int count = int(glowRadius * glowRadius + glowRadius);

    j += sign(texture(Sampler0, texCoord + vec2(width, 0) * halfTexelSize).a);
    j += sign(texture(Sampler0, texCoord + vec2(-width, 0) * halfTexelSize).a);
    j += sign(texture(Sampler0, texCoord + vec2(0, width) * halfTexelSize).a);
    j += sign(texture(Sampler0, texCoord + vec2(0, -width) * halfTexelSize).a);

    j += sign(texture(Sampler0, texCoord + vec2(width, width) * halfTexelSize).a);
    j += sign(texture(Sampler0, texCoord + vec2(width, -width) * halfTexelSize).a);
    j += sign(texture(Sampler0, texCoord + vec2(-width, width) * halfTexelSize).a);
    j += sign(texture(Sampler0, texCoord + vec2(-width, -width) * halfTexelSize).a);

    if (glowRadius > 2.0 && j == 0.0)
    {
        if (prevColor.a != 0.0)
        {
            fragColor = vec4(
                outputColor.rgb,
                outputColor.a * fillAlphaMult
            );
            return;
        }
        else
        {
            discard;
        }
    }

    for (int x = -width; x <= width; x += glowQuality)
    {
        for (int y = -width; y <= width; y += glowQuality)
        {
            if ((abs(x) == width && abs(y) == width) ||
                (abs(x) == width && y == 0) ||
                (x == 0 && abs(y) == width) ||
                (x == 0 && y == 0))
            {
                continue;
            }

            vec4 offsetColor = texture(
                Sampler0,
                texCoord + vec2(x, y) * halfTexelSize
            );

            if (offsetColor.a != 0.0)
                j++;

            i++;
        }
    }

    alpha = (j / (count * 4.0));

    if (prevColor.a != 0.0)
    {
        alpha = max(
            (1.0 - alpha) * glowAlphaMult,
            outputColor.a * fillAlphaMult
        );
    }
    else
    {
        alpha *= glowAlphaMult;
    }

    fragColor = vec4(outputColor.rgb, alpha);
}