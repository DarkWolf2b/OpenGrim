#version 150

in vec2 texCoord;

uniform sampler2D maskTexture;
uniform sampler2D backgroundTexture;

uniform vec2 screenSize;
uniform float refraction;           // 0-100
uniform float depth;                // 0-100
uniform float frost;                // 0-100
uniform float dispersion;           // 0-100
uniform vec4 tintColor;
uniform vec4 colorModulator;

uniform float lightAngle;           // -180 to 180
uniform float lightIntensity;       // 0-100
uniform vec4 lightColor;
uniform float splay;                // 0-100

out vec4 fragColor;

const float GOLDEN_ANGLE = 2.39996323;
const float HALF_PI = 1.57079632679;
const int CHROMA_KERNEL_SIZE = 8;
const int BLUR_SAMPLES = 16;

float linearstep(float a, float b, float x) {
    return clamp((x - a) / (b - a), 0.0, 1.0);
}

float getMask(vec2 uv) {
    return texture(maskTexture, uv).a;
}

vec4 getWorld(vec2 uv) {
    return texture(backgroundTexture, clamp(uv, vec2(0.001), vec2(0.999)));
}

float hash21(vec2 p) {
    p = fract(p * vec2(123.34, 456.21));
    p += dot(p, p + 45.32);
    return fract(p.x * p.y);
}

float valueNoise(vec2 p) {
    vec2 i = floor(p);
    vec2 f = fract(p);
    f = f * f * (3.0 - 2.0 * f);
    float a = hash21(i);
    float b = hash21(i + vec2(1.0, 0.0));
    float c = hash21(i + vec2(0.0, 1.0));
    float d = hash21(i + vec2(1.0, 1.0));
    return mix(mix(a, b, f.x), mix(c, d, f.x), f.y);
}

float glassNoise(vec2 uv) {
    float n = 0.0;
    n += valueNoise(uv * 40.0) * 0.5;
    n += valueNoise(uv * 80.0) * 0.25;
    n += valueNoise(uv * 160.0) * 0.125;
    return n;
}

float softEdgeAlpha(vec2 uv, vec2 ts) {
    float total = 0.0;
    float wSum  = 0.0;

    total += getMask(uv) * 1.0; wSum += 1.0;

    for (int i = 0; i < 6; i++) {
        float angle = float(i) * 1.0472 + 0.2618;
        vec2 off = vec2(cos(angle), sin(angle)) * 0.8 * ts;
        total += getMask(uv + off) * 0.75;
        wSum += 0.75;
    }

    for (int i = 0; i < 8; i++) {
        float angle = float(i) * 0.7854;
        vec2 off = vec2(cos(angle), sin(angle)) * 1.5 * ts;
        total += getMask(uv + off) * 0.35;
        wSum += 0.35;
    }

    total += getMask(uv + vec2( 2.2, 0.0) * ts) * 0.15;
    total += getMask(uv + vec2(-2.2, 0.0) * ts) * 0.15;
    total += getMask(uv + vec2(0.0,  2.2) * ts) * 0.15;
    total += getMask(uv + vec2(0.0, -2.2) * ts) * 0.15;
    wSum += 0.6;

    return smoothstep(0.05, 0.95, total / wSum);
}

vec2 sobelGradient(vec2 uv, vec2 ts) {
    float tl = getMask(uv + vec2(-ts.x,  ts.y));
    float t  = getMask(uv + vec2(  0.0,  ts.y));
    float tr = getMask(uv + vec2( ts.x,  ts.y));
    float l  = getMask(uv + vec2(-ts.x,   0.0));
    float r  = getMask(uv + vec2( ts.x,   0.0));
    float bl = getMask(uv + vec2(-ts.x, -ts.y));
    float b  = getMask(uv + vec2(  0.0, -ts.y));
    float br = getMask(uv + vec2( ts.x, -ts.y));
    return vec2(
        (tr + 2.0*r + br) - (tl + 2.0*l + bl),
        (tl + 2.0*t + tr) - (bl + 2.0*b + br)
    );
}

float skinStructure(vec2 uv, vec2 texelSize) {
    vec3 c  = texture(maskTexture, uv).rgb;
    vec3 cl = texture(maskTexture, uv + vec2(-texelSize.x, 0.0)).rgb;
    vec3 cr = texture(maskTexture, uv + vec2( texelSize.x, 0.0)).rgb;
    vec3 ct = texture(maskTexture, uv + vec2(0.0,  texelSize.y)).rgb;
    vec3 cb = texture(maskTexture, uv + vec2(0.0, -texelSize.y)).rgb;
    float lc = dot(c, vec3(0.299, 0.587, 0.114));
    float ll = dot(cl, vec3(0.299, 0.587, 0.114));
    float lr = dot(cr, vec3(0.299, 0.587, 0.114));
    float lt = dot(ct, vec3(0.299, 0.587, 0.114));
    float lb = dot(cb, vec3(0.299, 0.587, 0.114));
    float dx = abs(lr - ll);
    float dy = abs(lt - lb);
    return sqrt(dx * dx + dy * dy);
}

vec4 applyChroma(vec2 uv, vec2 dir, float amount) {
    if (amount < 0.1 || length(dir) < 0.001) return getWorld(uv);
    float chromaAmt = amount / 100.0;
    vec4 chromaColor = vec4(0.0);
    float sum = 0.0;
    for (int i = 0; i < CHROMA_KERNEL_SIZE; i++) {
        float fi = float(i) / float(CHROMA_KERNEL_SIZE - 1) - 0.5;
        float weight = 1.0 - abs(fi * 2.0);
        vec4 red   = getWorld(uv + (fi + 0.5) * chromaAmt * dir);
        vec4 green = getWorld(uv + fi * chromaAmt * dir);
        vec4 blue  = getWorld(uv + (fi - 0.5) * chromaAmt * dir);
        chromaColor += vec4(red.r, green.g, blue.b, 1.0) * weight;
        sum += weight;
    }
    return chromaColor / sum;
}

void main() {
    vec2 uv = texCoord;
    vec2 texelSize = 1.0 / screenSize;

    float maskAlpha = getMask(uv);
    if (maskAlpha < 0.01) {
        fragColor = vec4(0.0);
        return;
    }

    vec2 fineGrad   = sobelGradient(uv, texelSize * 1.5);
    float fineLen   = length(fineGrad);
    vec2 medGrad    = sobelGradient(uv, texelSize * max(depth * 0.5, 3.0));
    float medLen    = length(medGrad);
    vec2 coarseGrad = sobelGradient(uv, texelSize * max(depth, 5.0));
    float coarseLen = length(coarseGrad);

    vec2 edgeNormal = coarseLen > 0.001 ? normalize(coarseGrad) : vec2(0.0);

    float outerEdge  = smoothstep(0.0, 0.8, fineLen * 2.0);
    float deepInside = 1.0 - outerEdge;

    float structure = skinStructure(uv, texelSize * 2.0);
    float structureLines = smoothstep(0.02, 0.15, structure);

    vec2 dirFromCenter = length(edgeNormal) > 0.001 ? normalize(edgeNormal) : vec2(0.0, 1.0);
    vec2 refrDir = mix(edgeNormal, dirFromCenter, splay / 100.0);

    float refIntensity = refraction / 100.0;
    float refrDist = max(depth, 1.0);

    float refrArea = pow(linearstep(0.0, 1.0, deepInside), 3.5) * refrDist;
    float maxRefrOffset = 0.999 * refrDist;

    float dishOffset = clamp(refrArea * refIntensity, -maxRefrOffset, maxRefrOffset);
    float bevelOffset = refIntensity * 0.2 * maxRefrOffset;

    vec2 refrPixelOffset = -refrDir * mix(dishOffset, bevelOffset, outerEdge);

    float noise = glassNoise(uv);
    vec2 noiseOffset = (vec2(
        glassNoise(uv + vec2(0.01, 0.0)),
        glassNoise(uv + vec2(0.0, 0.01))
    ) - noise) * 2.5;
    refrPixelOffset += noiseOffset * refIntensity * 0.3;

    vec2 refrUVOffset = refrPixelOffset * texelSize;
    vec2 finalUV = uv + refrUVOffset;

    vec4 worldCol;
    if (dispersion > 0.1) {
        worldCol = applyChroma(finalUV, refrUVOffset, dispersion);
    } else {
        worldCol = getWorld(finalUV);
    }

    float blurAmt = frost / 100.0;
    if (blurAmt > 0.001) {
        vec4 blurred = vec4(0.0);
        float total = 0.0;
        float blurRadius = blurAmt * 20.0;
        for (int i = 0; i < BLUR_SAMPLES; i++) {
            float fi = float(i);
            float r = sqrt(fi / float(BLUR_SAMPLES)) * blurRadius;
            float theta = fi * GOLDEN_ANGLE;
            vec2 offset = vec2(cos(theta), sin(theta)) * r / screenSize;
            float weight = exp(-fi / float(BLUR_SAMPLES) * 2.5);
            vec2 sampleUV = finalUV + offset;
            vec4 samp = (dispersion > 0.1) ? applyChroma(sampleUV, refrUVOffset, dispersion) : getWorld(sampleUV);
            blurred += samp * weight;
            total += weight;
        }
        worldCol = blurred / total;
    }

    vec3 col = worldCol.rgb;

    float thickness = deepInside;
    float absorptionStrength = thickness * thickness;
    col *= mix(1.0, 0.92, absorptionStrength);
    col = mix(col, col * tintColor.rgb, tintColor.a * absorptionStrength * 1.5);
    col = mix(col, tintColor.rgb, tintColor.a * 0.15);

    col += structureLines * 0.08;
    float microTexture = (noise - 0.5) * 0.03;
    col += microTexture;

    float lightIntensityNorm = lightIntensity / 100.0;
    vec2 specNormal = medLen > 0.001 ? normalize(medGrad) : vec2(0.0);
    float specAngle = radians(lightAngle) + HALF_PI;
    vec2 lightDir = vec2(cos(specAngle), sin(specAngle));

    float specTop = smoothstep(0.35, 1.0, dot(specNormal, -lightDir));
    float specBot = smoothstep(0.35, 1.0, dot(specNormal,  lightDir));

    col += specTop * outerEdge * lightIntensityNorm * lightColor.rgb * lightColor.a;
    col += specBot * outerEdge * lightIntensityNorm * 0.6 * lightColor.rgb * lightColor.a;
    col += specTop * structureLines * 0.04 * lightIntensityNorm;

    float rimGlow = pow(outerEdge, 2.5) * 0.18;
    col += rimGlow;

    col += dot(refrDir, lightDir) * deepInside * 0.04 * lightIntensityNorm;

    float alpha = softEdgeAlpha(uv, texelSize);

    col *= colorModulator.rgb;
    fragColor = vec4(clamp(col, 0.0, 1.0), alpha);
}

