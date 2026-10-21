#version 150

// 1.21.11 port note: the recovered fragment stage (assets/opengrim/shaders/
// chams_chrome.glsl) declares loose uniforms. RenderPass can only upload uniform buffers,
// so the recovered body below is kept verbatim and the same names are mapped
// to a std140 block filled by ChamsRenderer (12 vec4 slots, see packUniforms).

in vec2 texCoord;

uniform sampler2D maskTexture;
uniform sampler2D backgroundTexture;

layout(std140) uniform Chams {
    vec2 screenSize;      // 0
    float time;           // 8
    float pad0;           // 12
    vec4 chromeParams;    // 16 (slot 1): speed, rimSharpness, rimIntensity, -
    vec4 pad1;            // 32 (slot 2)
    vec4 pad2;            // 48 (slot 3)
    vec4 pad3;            // 64 (slot 4)
    vec4 tintColor;       // 80 (slot 5)
    vec4 colorModulator;  // 96 (slot 6)
};

#define speed chromeParams.x
#define rimSharpness chromeParams.y
#define rimIntensity chromeParams.z

out vec4 fragColor;
const float PI  = 3.141592654;
const float TAU = 6.283185307;

float getMask(vec2 uv) {
    return texture(maskTexture, uv).a;
}

float luminance(vec3 c) {
    return dot(c, vec3(0.299, 0.587, 0.114));
}

float softEdgeAlpha(vec2 uv, vec2 ts) {
    float total = 0.0, wSum = 0.0;
    total += getMask(uv) * 1.0; wSum += 1.0;
    for (int i = 0; i < 6; i++) {
        float a = float(i) * 1.0472 + 0.2618;
        total += getMask(uv + vec2(cos(a), sin(a)) * 0.8 * ts) * 0.75;
        wSum += 0.75;
    }
    for (int i = 0; i < 8; i++) {
        float a = float(i) * 0.7854;
        total += getMask(uv + vec2(cos(a), sin(a)) * 1.5 * ts) * 0.35;
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

void rot(inout vec2 p, float a) {
    float c = cos(a);
    float s = sin(a);
    p = vec2(c*p.x + s*p.y, -s*p.x + c*p.y);
}

float hashLM(in vec2 co) {
    return fract(sin(dot(co.xy, vec2(12.9898, 58.233))) * 13758.5453);
}

float psin(float a) {
    return 0.5 + 0.5*sin(a);
}

float tanhApprox(float x) {
    float x2 = x*x;
    return clamp(x*(27.0 + x2)/(27.0+9.0*x2), -1.0, 1.0);
}

float onoise(vec2 x) {
    x *= 0.5;
    float a = sin(x.x);
    float b = sin(x.y);
    float c = mix(a, b, psin(TAU*tanhApprox(a*b+a+b)));
    return c;
}

float vnoise(vec2 x) {
    vec2 i = floor(x);
    vec2 w = fract(x);
    vec2 u = w*w*w*(w*(w*6.0-15.0)+10.0);
    float a = hashLM(i+vec2(0.0,0.0));
    float b = hashLM(i+vec2(1.0,0.0));
    float c = hashLM(i+vec2(0.0,1.0));
    float d = hashLM(i+vec2(1.0,1.0));
    float k0 = a;
    float k1 = b - a;
    float k2 = c - a;
    float k3 = d - c + a - b;
    return k0 + k1*u.x + k2*u.y + k3*u.x*u.y;
}

float fbm1(vec2 p) {
    vec2 op = p;
    float h = 0.0, d = 0.0, a = 1.0;
    for (int i = 0; i < 5; ++i) {
        h += a*onoise(p); d += a; a *= 0.45;
        p += vec2(-1.23, -1.5); p *= 2.03; rot(p, 1.2);
    }
    return mix(h/d, -0.5*(h/d), pow(vnoise(0.9*op), 0.25));
}

float fbm2(vec2 p) {
    vec2 op = p;
    float h = 0.0, d = 0.0, a = 1.0;
    for (int i = 0; i < 7; ++i) {
        h += a*onoise(p); d += a; a *= 0.45;
        p += vec2(-1.23, -1.5); p *= 2.03; rot(p, 1.2);
    }
    return mix(h/d, -0.5*(h/d), pow(vnoise(0.9*op), 0.25));
}

float fbm3(vec2 p) {
    vec2 op = p;
    float h = 0.0, d = 0.0, a = 1.0;
    for (int i = 0; i < 3; ++i) {
        h += a*onoise(p); d += a; a *= 0.45;
        p += vec2(-1.23, -1.5); p *= 2.03; rot(p, 1.2);
    }
    return mix(h/d, -0.5*(h/d), pow(vnoise(0.9*op), 0.25));
}

float warp(vec2 p, float t) {
    vec2 v = vec2(fbm1(p), fbm1(p+0.7));
    rot(v, 1.0+t*0.1);
    vec2 vv = vec2(fbm2(p + 3.7*v), fbm2(p - 2.7*v.yx + 0.7));
    rot(vv, -1.0+t*0.21315);
    return fbm3(p + 1.4*vv);
}

float height(vec2 p, float t) {
    float a = 0.005*t;
    p += 5.0*vec2(cos(a), sin(a));
    p *= 2.0;
    p += 13.0;
    float h = warp(p, t);
    float rs = 3.0;
    return 0.35*tanhApprox(rs*h)/rs;
}

vec3 computeNormal(vec2 p, float t) {
    vec2 eps = -vec2(2.0/screenSize.y, 0.0);
    vec3 n;
    n.x = height(p + eps.xy, t) - height(p - eps.xy, t);
    n.y = 2.0*eps.x;
    n.z = height(p + eps.yx, t) - height(p - eps.yx, t);
    return normalize(n);
}

vec3 postProcess(vec3 col) {
    col = pow(clamp(col, 0.0, 1.0), vec3(0.75));
    col = col*0.6+0.4*col*col*(3.0-2.0*col);
    col = mix(col, vec3(dot(col, vec3(0.33))), -0.4);
    return col;
}

vec3 envReflection(vec2 uv, vec3 surfNormal, vec3 metalCol) {
    vec2 reflUV = uv + surfNormal.xz * 0.08;
    reflUV = clamp(reflUV, vec2(0.001), vec2(0.999));
    vec3 envCol = texture(backgroundTexture, reflUV).rgb;
    float envLum = luminance(envCol);
    return mix(envCol, metalCol * envLum * 1.5, 0.6);
}

void main() {
    vec2 uv = texCoord;
    vec2 texelSize = 1.0 / screenSize;

    float maskAlpha = getMask(uv);
    if (maskAlpha < 0.01) {
        fragColor = vec4(0.0);
        return;
    }

    vec2 q = uv;
    vec2 p = -1.0 + 2.0 * q;
    p.x *= screenSize.x / screenSize.y;

    float iTime = time * speed;

    vec2 fineGrad = sobelGradient(uv, texelSize * 1.5);
    float fineLen = length(fineGrad);
    vec2 medGrad  = sobelGradient(uv, texelSize * 5.0);
    float medLen  = length(medGrad);
    vec2 wideGrad = sobelGradient(uv, texelSize * 15.0);
    float wideLen = length(wideGrad);

    float edgeProximity = smoothstep(0.0, 0.8, fineLen * 2.0) * 0.5
                        + smoothstep(0.0, 0.5, medLen * 1.5) * 0.3
                        + smoothstep(0.0, 0.3, wideLen) * 0.2;
    float depth = 1.0 - edgeProximity;

    vec3 pseudoNormal;
    if (fineLen > 0.01) {
        vec2 edgeNorm2D = normalize(fineGrad);
        float edgeFade = smoothstep(0.0, 0.6, depth);
        pseudoNormal = normalize(vec3(
            edgeNorm2D.x * (1.0 - edgeFade),
            edgeNorm2D.y * (1.0 - edgeFade),
            0.3 + 0.7 * edgeFade
        ));
    } else {
        pseudoNormal = vec3(0.0, 0.0, 1.0);
    }

    vec3 lightDir3D = normalize(vec3(0.5, 0.8, 0.6));
    float shapeDiff = max(dot(pseudoNormal, lightDir3D), 0.0);
    float shapeDiff2 = max(dot(pseudoNormal, normalize(vec3(-0.3, -0.5, 0.4))), 0.0);

    vec3 lp1 = vec3(0.9, -0.5, 0.8);
    vec3 lp2 = vec3(-0.9, -1.5, 0.9);

    float h = height(p, iTime);
    vec3 pp = vec3(p.x, h, p.y);
    float ll1 = length(lp1.xz - pp.xz);
    vec3 ld1 = normalize(lp1 - pp);
    vec3 ld2 = normalize(lp2 - pp);

    vec3 n = computeNormal(p, iTime);
    float diff1 = max(dot(ld1, n), 0.0);
    float diff2 = max(dot(ld2, n), 0.0);

    vec3 warmCol = mix(vec3(1.0, 0.8, 0.6), tintColor.rgb, tintColor.a);
    vec3 coolCol = warmCol * vec3(0.6, 0.7, 1.2);
    float warmth = clamp(diff1 * 1.5, 0.0, 1.0);
    vec3 baseCol = mix(coolCol, warmCol, warmth);

    float oh = height(p + ll1*0.05*normalize(ld1.xz), iTime);
    vec3 scol = baseCol*(smoothstep(0.0, 0.125, h) - smoothstep(0.0, 0.125, oh));

    vec3 col = vec3(0.0);
    col += warmCol*pow(diff1, 6.0);
    col += 0.1*baseCol*pow(diff1, 1.5);
    col += 0.15*coolCol*pow(diff2, 8.0);
    col += 0.015*coolCol*pow(diff2, 2.0);
    col += scol*0.5;

    col = postProcess(col);

    float shapeShading = 0.3 + 0.5 * shapeDiff + 0.2 * shapeDiff2;
    col *= mix(0.6, 1.2, shapeShading);

    float shapeSpec = pow(shapeDiff, 4.0);
    col += warmCol * shapeSpec * 0.25 * depth;

    vec3 skinRGB = texture(maskTexture, uv).rgb;
    float skinLum = luminance(skinRGB);
    float skinHeight = skinLum * 0.8 + 0.2;
    col *= mix(0.7, 1.3, skinHeight);
    vec3 skinTint = skinRGB * 0.15;
    col += skinTint * depth * 0.5;

    float structure = skinStructure(uv, texelSize * 2.0);
    float structWide = skinStructure(uv, texelSize * 5.0);
    float crease = smoothstep(0.02, 0.2, structure + structWide * 0.5);
    col *= mix(1.0, 0.65, crease * 0.6);
    col += warmCol * crease * 0.08;

    vec3 envRefl = envReflection(uv, n, warmCol);
    float reflBlend = 0.25 * depth;
    col = mix(col, col + envRefl * 0.5, reflBlend);

    if (medLen > 0.01) {
        vec2 edgeDir = normalize(medGrad);
        vec2 tangent = vec2(-edgeDir.y, edgeDir.x);

        vec2 lightDir2D = normalize(vec2(0.7, -0.5));
        float tangentDot = abs(dot(tangent, lightDir2D));
        float anisoSpec = pow(tangentDot, 8.0) * edgeProximity;
        col += warmCol * anisoSpec * 0.4;

        vec2 lightDir2Db = normalize(vec2(-0.7, -0.5));
        float tangentDotB = abs(dot(tangent, lightDir2Db));
        float anisoSpecB = pow(tangentDotB, 12.0) * edgeProximity;
        col += coolCol * anisoSpecB * 0.2;
    }

    float fresnel = rimIntensity * pow(edgeProximity, rimSharpness);
    col += fresnel * 0.3 * warmCol;

    float edgeDark = smoothstep(0.0, 0.12, maskAlpha);
    col *= mix(0.1, 1.0, edgeDark);

    float alpha = softEdgeAlpha(uv, texelSize);
    col *= colorModulator.rgb;
    fragColor = vec4(clamp(col, 0.0, 1.0), alpha);
}
