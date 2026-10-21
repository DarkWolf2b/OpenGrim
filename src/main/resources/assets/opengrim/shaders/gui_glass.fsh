#version 330 core

/* Fragment stage for the recovered liquid glass shader
 * (assets/opengrim/shaders/liquid_glass.glsl, sixtwo.lC.ccW Liquid Glass branch /
 * kd.IbNTv). The 600-line bevel/refraction/dispersion model is copied verbatim;
 * only the uniform transport changed: per-window size/radius/cornerSmoothness/
 * tint/opacity arrive as vertex attributes (gui_glass.vsh), the glass config is
 * the recovered theme default (see the const values below), and the blurred
 * backdrop is Sampler0. */

layout(std140) uniform DynamicTransforms {
    mat4 ModelViewMat;
    vec4 ColorModulator;
    vec3 ModelOffset;
    mat4 TextureMat;
};

uniform sampler2D Sampler0;

in vec2 fragCoord;
in vec2 size;
in vec4 radius;
in vec4 cornerSmoothness;
in vec4 tintColor;
in vec4 vertexColor;

out vec4 fragColor;

#define colorModulator ColorModulator
#define blurredTexture Sampler0

const int hasUniformCorners = 1;
const int shapeType = 1;
const int maskType = 0;
const float thickness = 1.0;
const float innerSmoothness = 0.75;
const float innerRadius = 0.0;
const float outerRadius = 0.0;
const float startAngle = 0.0;
const float endAngle = 6.28318530718;
const int roundCaps = 0;

/* Theme.PanelProps (id.bhd defaults) + lC.ccW's glass config. */
const float splay = 100.0;
const float refraction = 100.0;
const float depth = 100.0;
const float lightIntensity = 80.0;
const float lightAngle = -45.0;
const float lightSize = 1.5;
const float dispersion = 0.0;
const vec4 lightColor = vec4(1.0);

const float HALF_PI = 1.57079632679;
const float PI = 3.14159265359;
const float TAU = 6.28318530718;
const float SQRT_2 = 1.41421356237;
const float SPECULAR_FALLOFF = 0.35;
const float BOTTOM_LIGHT_MULT = 0.6;
const float BEVEL_REFRACTION_MULT = 0.2;
const float SPECULAR_HARDNESS = 0.2;
const int CHROMA_KERNEL_SIZE = 8;
const float DISH_SHADE_STRENGTH = 0.05;

const int SHAPE_RECTANGLE = 0;
const int SHAPE_SQUIRCLE = 1;
const int SHAPE_ANNULAR_SECTOR = 2;
const int MASK_FILL = 0;
const int MASK_OUTLINE = 1;

const int NUM_NEWTON_ITERATIONS = 2;
const int NUM_NEWTON_START_POINTS = 3;
const float NEWTON_DAMPING_FACTOR = 1.0;

float sdBox(vec2 p, vec2 halfSize) {
    vec2 d = abs(p) - halfSize;
    return length(max(d, vec2(0.0))) + min(max(d.x, d.y), 0.0);
}

float sdRoundBox(vec2 p, vec2 halfSize, float cornerRadius) {
    float rn = min(cornerRadius, min(halfSize.x, halfSize.y));
    return sdBox(p, halfSize - rn) - rn;
}

float sdRoundBoxNonUniform(vec2 p, vec2 halfSize, vec4 rs) {
    float d = -9999999.0;
    vec2 s = halfSize * 2.0;
    d = max(d, sdRoundBox(p * vec2(1.0, 1.0) + halfSize, s, rs.x));
    d = max(d, sdRoundBox(p * vec2(-1.0, 1.0) + halfSize, s, rs.y));
    d = max(d, sdRoundBox(p * vec2(-1.0, -1.0) + halfSize, s, rs.z));
    d = max(d, sdRoundBox(p * vec2(1.0, -1.0) + halfSize, s, rs.w));
    return d;
}

float linearstep(float a, float b, float t) {
    return clamp((t - a) / max(0.00001, b - a), 0.0, 1.0);
}

float normalizeAngle(float angle) {
    float normalized = mod(angle, TAU);
    return normalized < 0.0 ? normalized + TAU : normalized;
}

float annularOuterRadius(vec2 halfSize) {
    float maxRadius = max(0.0, min(halfSize.x, halfSize.y));
    return clamp(max(innerRadius, outerRadius), 0.0, maxRadius);
}

float annularInnerRadius(float outerR) {
    return clamp(min(innerRadius, outerRadius), 0.0, outerR);
}

float sectorSignedDistance(vec2 p, float innerR, float outerR, float startAngle, float endAngle) {
    float distanceFromCenter = length(p);
    float radialDistance = min(distanceFromCenter - innerR, outerR - distanceFromCenter);

    float rawArcLength = endAngle - startAngle;
    float arcLength = mod(rawArcLength, TAU);
    if (arcLength < 0.0) arcLength += TAU;
    if (abs(rawArcLength) >= TAU) arcLength = TAU;

    if (arcLength >= TAU - 0.001) {
        return radialDistance;
    }

    float angle = normalizeAngle(atan(p.y, p.x));
    float start = normalizeAngle(startAngle);
    float angleFromStart = mod(angle - start + TAU, TAU);

    float capDistance;
    if (angleFromStart <= arcLength) {
        capDistance = min(angleFromStart, arcLength - angleFromStart) * distanceFromCenter;
    } else {
        capDistance = -min(angleFromStart - arcLength, TAU - angleFromStart) * distanceFromCenter;
    }

    return min(radialDistance, capDistance);
}

float roundedSectorSignedDistance(vec2 p, float innerR, float outerR, float startAngle, float endAngle) {
    float distanceFromCenter = length(p);
    float radialDistance = min(distanceFromCenter - innerR, outerR - distanceFromCenter);

    float rawArcLength = endAngle - startAngle;
    float arcLength = mod(rawArcLength, TAU);
    if (arcLength < 0.0) arcLength += TAU;
    if (abs(rawArcLength) >= TAU) arcLength = TAU;

    if (arcLength >= TAU - 0.001) {
        return radialDistance;
    }

    float centerR = (innerR + outerR) * 0.5;
    float halfThickness = max((outerR - innerR) * 0.5, 0.0);
    if (halfThickness <= 0.001) {
        return sectorSignedDistance(p, innerR, outerR, startAngle, endAngle);
    }

    float angle = normalizeAngle(atan(p.y, p.x));
    float start = normalizeAngle(startAngle);
    float angleFromStart = mod(angle - start + TAU, TAU);

    float nearestAngle;
    if (angleFromStart <= arcLength) {
        nearestAngle = start + angleFromStart;
    } else {
        float distanceToEnd = angleFromStart - arcLength;
        float distanceToStart = TAU - angleFromStart;
        nearestAngle = distanceToStart < distanceToEnd ? start : start + arcLength;
    }

    vec2 nearestPoint = vec2(cos(nearestAngle), sin(nearestAngle)) * centerR;
    float distanceToCenterline = length(p - nearestPoint);
    return halfThickness - distanceToCenterline;
}

float sdAnnularSectorShape(vec2 p, vec2 halfSize) {
    float outerR = annularOuterRadius(halfSize);
    float innerR = annularInnerRadius(outerR);
    float dist = roundCaps == 1
        ? roundedSectorSignedDistance(p, innerR, outerR, startAngle, endAngle)
        : sectorSignedDistance(p, innerR, outerR, startAngle, endAngle);

    return -dist;
}

mat2 rot(float t) {
    float cosT = cos(t);
    float sinT = sin(t);
    return mat2(cosT, -sinT, sinT, cosT);
}

int solveCubic(float a, float b, float c, out vec3 roots) {
    float p = b - a * a / 3.0;
    float q = a * (2.0 * a * a - 9.0 * b) / 27.0 + c;
    float p3 = p * p * p;
    float discriminant = q * q + 4.0 * p3 / 27.0;
    float offset = -a / 3.0;

    if (discriminant >= 0.0) {
        float z = sqrt(discriminant);
        float u = (-q + z) / 2.0;
        float v = (-q - z) / 2.0;
        u = sign(u) * pow(abs(u), 1.0 / 3.0);
        v = sign(v) * pow(abs(v), 1.0 / 3.0);
        roots[0] = offset + u + v;
        float f = ((roots[0] + a) * roots[0] + b) * roots[0] + c;
        float f1 = (3.0 * roots[0] + 2.0 * a) * roots[0] + b;
        roots[0] -= f / f1;
        return 1;
    }

    float u = sqrt(-p / 3.0);
    float v = acos(-sqrt(-27.0 / p3) * q / 2.0) / 3.0;
    float m = cos(v), n = sin(v) * 1.732050808;
    roots[0] = offset + u * (m + m);
    roots[1] = offset - u * (n + m);
    roots[2] = offset + u * (n - m);
    vec3 f = ((roots + a) * roots + b) * roots + c;
    vec3 f1 = (3.0 * roots + 2.0 * a) * roots + b;
    roots -= f / f1;
    return 3;
}

float cubicBezierSign(vec2 uv, vec2 p0, vec2 p1, vec2 p2, vec2 p3) {
    float cu = (-p0.y + 3.0 * p1.y - 3.0 * p2.y + p3.y);
    float qu = (3.0 * p0.y - 6.0 * p1.y + 3.0 * p2.y);
    float li = (-3.0 * p0.y + 3.0 * p1.y);
    float co = p0.y - uv.y;

    vec3 roots;
    int numRoots = solveCubic(qu / cu, li / cu, co / cu, roots);

    int numIntersections = 0;
    for (int i = 0; i < 3; i++) {
        if (i < numRoots) {
            if (roots[i] >= 0.0 && roots[i] <= 1.0) {
                float t = roots[i];
                float xPos = ((((-p0.x + 3.0 * p1.x - 3.0 * p2.x + p3.x) * t
                              + (3.0 * p0.x - 6.0 * p1.x + 3.0 * p2.x)) * t)
                              + (-3.0 * p0.x + 3.0 * p1.x)) * t + p0.x;
                if (xPos < uv.x) {
                    numIntersections++;
                }
            }
        }
    }

    vec2 tangStart = p0.xy - p1.xy;
    vec2 tangEnd = p2.xy - p3.xy;
    vec2 normStart = vec2(tangStart.y, -tangStart.x);
    vec2 normEnd = vec2(tangEnd.y, -tangEnd.x);

    if (p0.y < p1.y) {
        if ((uv.y <= p0.y) && (dot(uv - p0.xy, normStart) < 0.0)) {
            numIntersections++;
        }
    } else {
        if (!(uv.y <= p0.y) && !(dot(uv - p0.xy, normStart) < 0.0)) {
            numIntersections++;
        }
    }

    if (p2.y < p3.y) {
        if (!(uv.y <= p3.y) && dot(uv - p3.xy, normEnd) < 0.0) {
            numIntersections++;
        }
    } else {
        if ((uv.y <= p3.y) && !(dot(uv - p3.xy, normEnd) < 0.0)) {
            numIntersections++;
        }
    }

    if (numIntersections == 0 || numIntersections == 2 || numIntersections == 4) {
        return 1.0;
    } else {
        return -1.0;
    }
}

float cubicBezierNormalIteration(float t, vec2 a0, vec2 a1, vec2 a2, vec2 a3) {
    vec2 a_2 = a2 + t * a3;
    vec2 a_1 = a1 + t * a_2;
    vec2 b_2 = a_2 + t * a3;
    vec2 uvToP = a0 + t * a_1;
    vec2 tang = a_1 + t * b_2;
    float tanLenSq = dot(tang, tang);
    float projection = dot(tang, uvToP);
    return t - NEWTON_DAMPING_FACTOR * projection / tanLenSq;
}

float cubicBezierDistApproxSq(vec2 uv, vec2 p0, vec2 p1, vec2 p2, vec2 p3) {
    vec2 a3 = (-p0 + 3.0 * p1 - 3.0 * p2 + p3);
    vec2 a2 = (3.0 * p0 - 6.0 * p1 + 3.0 * p2);
    vec2 a1 = (-3.0 * p0 + 3.0 * p1);
    vec2 a0 = p0 - uv;

    float d0 = 1.0e38;
    float t0 = 0.0;
    float t;
    for (int i = 0; i < NUM_NEWTON_START_POINTS; i++) {
        t = t0;
        for (int j = 0; j < NUM_NEWTON_ITERATIONS; j++) {
            t = cubicBezierNormalIteration(t, a0, a1, a2, a3);
        }
        t = clamp(t, 0.0, 1.0);
        vec2 uvToP = ((a3 * t + a2) * t + a1) * t + a0;
        d0 = min(d0, dot(uvToP, uvToP));
        t0 += 1.0 / float(NUM_NEWTON_START_POINTS - 1);
    }
    return d0;
}

float cubicBezierDistApprox(vec2 uv, vec2 p0, vec2 p1, vec2 p2, vec2 p3) {
    return sqrt(cubicBezierDistApproxSq(uv, p0, p1, p2, p3));
}

float sdSmoothRoundCorner(vec2 uv, float r, float smoothing) {
    float bezAngle = 0.5 * HALF_PI * smoothing;
    float arcAngle = HALF_PI * (1.0 - smoothing);
    float requiredEdgeLength = (1.0 + smoothing) * r;

    float dOverC = tan(bezAngle);
    float l = sin(arcAngle * 0.5) * r * SQRT_2;
    float c = r * tan(bezAngle * 0.5) * cos(bezAngle);
    float d = c * dOverC;
    float b = ((requiredEdgeLength - l) - (1.0 + dOverC) * c) / 3.0;
    float a = 2.0 * b;

    uv = rot(PI * -0.25) * uv;
    uv.x = -abs(uv.x);
    vec2 cp = uv + vec2(0.0, 1.414213) * r;
    float angle = atan(cp.x, cp.y);
    uv = rot(PI * 0.25) * uv;

    vec2 p0 = vec2(-requiredEdgeLength, 0.0);
    vec2 p1 = p0 + vec2(a, 0.0);
    vec2 p2 = p1 + vec2(b, 0.0);
    vec2 p3 = p2 + vec2(c, -d);

    vec2 cornerCenter = uv + requiredEdgeLength;
    if (cornerCenter.x < 0.0) {
        return cornerCenter.y - requiredEdgeLength;
    } else if (abs(angle) < arcAngle * 0.5) {
        return length(cp) - r;
    }

    float dis = cubicBezierDistApprox(uv, p0, p1, p2, p3);
    float sgn = -cubicBezierSign(uv, p0, p1, p2, p3);
    return dis * sgn;
}

float sdSmoothRoundBox(vec2 uv, vec2 halfSize, float r, float smoothing) {
    if (r <= 1e-6) {
        return sdBox(uv, halfSize);
    }
    float minHalfSize = min(halfSize.x, halfSize.y);
    float requiredLength = r * (1.0 + smoothing);
    float overlap = max(0.0, requiredLength - minHalfSize) / r;
    float finalSmoothing = max(0.0, smoothing - overlap);
    float finalRadius = min(minHalfSize, r);

    if (finalSmoothing <= 1e-6) {
        return sdRoundBox(uv, halfSize, finalRadius);
    }

    vec2 p = abs(uv) - halfSize;
    return sdSmoothRoundCorner(p, finalRadius, finalSmoothing);
}

float sdSmoothRoundBoxNonUniform(vec2 p, vec2 halfSize, vec4 radii, vec4 smoothings) {
    float d = sdBox(p, halfSize);
    vec2 s = halfSize * 2.0;
    d = max(d, sdSmoothRoundBox(p * vec2(1.0, 1.0) + halfSize, s, radii.x, smoothings.x));
    d = max(d, sdSmoothRoundBox(p * vec2(-1.0, 1.0) + halfSize, s, radii.y, smoothings.y));
    d = max(d, sdSmoothRoundBox(p * vec2(-1.0, -1.0) + halfSize, s, radii.z, smoothings.z));
    d = max(d, sdSmoothRoundBox(p * vec2(1.0, -1.0) + halfSize, s, radii.w, smoothings.w));
    return d;
}

float sdShapeBox(vec2 p, vec2 halfSize, vec4 radii, vec4 smoothings) {
    if (shapeType == SHAPE_RECTANGLE) {
        if (hasUniformCorners == 1) {
            return sdRoundBox(p, halfSize, radii.x);
        }
        return sdRoundBoxNonUniform(p, halfSize, radii);
    }

    if (hasUniformCorners == 1) {
        float cornerRad = min(radii.x, min(halfSize.x, halfSize.y));
        return sdSmoothRoundBox(p, halfSize, cornerRad, smoothings.x);
    }

    return sdSmoothRoundBoxNonUniform(p, halfSize, radii, smoothings);
}

float sdLiquidShape(vec2 p, vec2 halfSize, vec4 radii, vec4 smoothings) {
    if (shapeType == SHAPE_ANNULAR_SECTOR) {
        return sdAnnularSectorShape(p, halfSize);
    }

    return sdShapeBox(p, halfSize, radii, smoothings);
}

float liquidShapeDepth(vec2 halfSize) {
    if (shapeType == SHAPE_ANNULAR_SECTOR) {
        float outerR = annularOuterRadius(halfSize);
        float innerR = annularInnerRadius(outerR);
        return max((outerR - innerR) * 0.5, 0.001);
    }

    return min(halfSize.x, halfSize.y);
}

float maskAlpha(float dist, float edgeSoftness) {
    if (maskType == MASK_OUTLINE) {
        float inner = smoothstep(-thickness - innerSmoothness, -thickness, dist);
        float outer = 1.0 - smoothstep(-edgeSoftness, edgeSoftness, dist);
        return inner * outer;
    }

    return 1.0 - smoothstep(-edgeSoftness, edgeSoftness, dist);
}

vec2 getGlassRectNormalUniform(vec2 p, vec2 halfSize, float cornerRad) {
    float r = min(min(halfSize.x, halfSize.y), cornerRad);
    vec2 d = abs(p) - (halfSize - r);
    float isFlat = step(max(d.x, d.y), -lightSize * step(cornerRad, lightSize));
    return normalize(d + max(-min(d.x, d.y), 1.0e-5)) * sign(p) * (1.0 - isFlat);
}

vec2 getGlassRectNormalNonUniform(vec2 p, vec2 halfSize, vec4 radii) {
    float s = 0.1;
    float d  = sdRoundBoxNonUniform(p, halfSize, radii);
    float dx = sdRoundBoxNonUniform(p + vec2(s, 0.0), halfSize, radii);
    float dy = sdRoundBoxNonUniform(p + vec2(0.0, s), halfSize, radii);
    return (vec2(dx, dy) - d) / s;
}

vec2 getGlassRectNormal(vec2 p, vec2 halfSize, vec4 radii) {
    if (hasUniformCorners == 1) {
        return getGlassRectNormalUniform(p, halfSize, radii.x);
    } else {
        return getGlassRectNormalNonUniform(p, halfSize, radii);
    }
}

vec2 getGlassRectRefractionDir(vec2 p, vec2 halfSize, vec4 radii, float refrDist) {
    vec4 refrRadii = max(radii, vec4(refrDist));
    vec2 dirFromEdge = getGlassRectNormal(p, halfSize, refrRadii);
    float pLen = length(p);
    vec2 dirFromCenter = (pLen > 0.001) ? normalize(p) : vec2(0.0, 1.0);
    return mix(dirFromEdge, dirFromCenter, splay / 100.0);
}

vec2 getDistanceNormal(vec2 p, vec2 halfSize) {
    float s = 0.5;
    float d = sdLiquidShape(p, halfSize, radius, cornerSmoothness);
    float dx = sdLiquidShape(p + vec2(s, 0.0), halfSize, radius, cornerSmoothness);
    float dy = sdLiquidShape(p + vec2(0.0, s), halfSize, radius, cornerSmoothness);
    vec2 gradient = vec2(dx, dy) - d;
    return length(gradient) > 0.0001 ? normalize(gradient) : vec2(0.0, 1.0);
}

vec2 getGlassShapeNormal(vec2 p, vec2 halfSize) {
    if (shapeType == SHAPE_ANNULAR_SECTOR) {
        return getDistanceNormal(p, halfSize);
    }

    return getGlassRectNormal(p, halfSize, radius);
}

vec2 getGlassShapeRefractionDir(vec2 p, vec2 halfSize, float refrDist) {
    if (shapeType == SHAPE_ANNULAR_SECTOR) {
        vec2 dirFromEdge = getDistanceNormal(p, halfSize);
        float pLen = length(p);
        vec2 dirFromCenter = (pLen > 0.001) ? normalize(p) : vec2(0.0, 1.0);
        return mix(dirFromEdge, dirFromCenter, splay / 100.0);
    }

    return getGlassRectRefractionDir(p, halfSize, radius, refrDist);
}

vec4 sampleScreen(vec2 uv) {
    return texture(blurredTexture, uv);
}

vec4 applyChroma(vec2 uv, vec2 dir, float amount) {
    if (amount < 0.1 || length(dir) < 0.001) return sampleScreen(uv);

    float chromaAmt = amount / 100.0;
    vec4 chromaColor = vec4(0.0);
    float sum = 0.0;

    for (int i = 0; i < CHROMA_KERNEL_SIZE; i++) {
        float fi = float(i) / float(CHROMA_KERNEL_SIZE - 1) - 0.5;
        float weight = 1.0 - abs(fi * 2.0);

        vec4 red   = sampleScreen(uv + (fi + 0.5) * chromaAmt * dir);
        vec4 green = sampleScreen(uv + fi * chromaAmt * dir);
        vec4 blue  = sampleScreen(uv + (fi - 0.5) * chromaAmt * dir);

        chromaColor += vec4(red.r, green.g, blue.b, max(max(red.a, green.a), blue.a)) * weight;
        sum += weight;
    }

    return chromaColor / sum;
}

void main() {
    vec2 halfSize = size * 0.5;
    float refrDist = min(liquidShapeDepth(halfSize), depth);

    vec2 pBox = (fragCoord - 0.5) * size;
    vec2 screenUV = gl_FragCoord.xy / vec2(textureSize(Sampler0, 0));
    vec2 nodeToScreenUV = vec2(dFdx(screenUV.x), dFdy(screenUV.y)) / vec2(dFdx(pBox.x), dFdy(pBox.y));

    float shapeDist = sdLiquidShape(pBox, halfSize, radius, cornerSmoothness);

    float edgeSoftness = fwidth(shapeDist) * 1.5;
    float alpha = maskAlpha(shapeDist, edgeSoftness);
    if (alpha <= 0.0) discard;

    float REF_INTENSITY = refraction / 100.0;

    float refrArea = linearstep(-refrDist - lightSize, -lightSize, shapeDist);
    float refrMult = pow(refrArea, 3.5) * refrDist;
    float maxRefrOffset = 0.999 * refrDist;

    float dishRefrOffset = clamp(refrMult * REF_INTENSITY, -maxRefrOffset, maxRefrOffset);
    float bevelRefrOffset = REF_INTENSITY * BEVEL_REFRACTION_MULT * maxRefrOffset;

    float isBevel = linearstep(-lightSize - 0.0001, -lightSize * 0.3, shapeDist);

    vec2 glassNormal = getGlassShapeRefractionDir(pBox, halfSize, max(lightSize, refrDist));
    vec2 refrPixelOffset = -glassNormal * mix(dishRefrOffset, bevelRefrOffset, isBevel);
    vec2 refrUVOffset = refrPixelOffset * nodeToScreenUV;
    vec2 finalUV = screenUV + refrUVOffset;

    vec4 col;
    if (dispersion > 0.1) {
        col = applyChroma(finalUV, refrUVOffset, dispersion);
    } else {
        col = sampleScreen(finalUV);
    }

    col.rgb = mix(col.rgb, tintColor.rgb, tintColor.a);
    col.rgb *= vertexColor.rgb * colorModulator.rgb;

    float LIGHT_INTENSITY = lightIntensity / 100.0;

    float rim = smoothstep(-lightSize - 0.001, -lightSize * SPECULAR_HARDNESS, shapeDist);

    float specAngle = radians(lightAngle) + HALF_PI;
    vec2 lightDir = vec2(cos(specAngle), sin(specAngle));
    vec2 specNormal = getGlassShapeNormal(pBox, halfSize);

    col.rgb += smoothstep(SPECULAR_FALLOFF, 1.0, dot(specNormal, -lightDir)) * rim * LIGHT_INTENSITY * lightColor.rgb * lightColor.a * alpha;
    col.rgb += smoothstep(SPECULAR_FALLOFF, 1.0, dot(specNormal, lightDir)) * rim * LIGHT_INTENSITY * BOTTOM_LIGHT_MULT * lightColor.rgb * lightColor.a * alpha;

    float shadeMult = pow(linearstep(-refrDist, -lightSize + 0.0001, shapeDist), 2.0);
    col.rgb += dot(glassNormal, lightDir) * shadeMult * DISH_SHADE_STRENGTH * LIGHT_INTENSITY;

    fragColor = vec4(clamp(col.rgb, 0.0, 1.0), alpha * vertexColor.a * colorModulator.a);
}
