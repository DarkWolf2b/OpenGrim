#version 150

in vec2 texCoord;

uniform sampler2D maskTexture;
uniform sampler2D backgroundTexture;

uniform vec2 screenSize;
uniform float time;
uniform vec4 waterColor;
uniform float flowSpeed;
uniform float flowScale;
uniform vec4 colorModulator;
uniform float refractionStrength;
uniform float specularIntensity;
uniform float waveHeight;
uniform float choppiness;
uniform float waveFreq;

out vec4 fragColor;

const float PI = 3.14159265358;
const float TAU = 6.28318530718;
const float SEA_SPEED = 1.9;
const vec3 SEA_BASE = vec3(0.11, 0.19, 0.22);
const vec3 SEA_WATER_COLOR = vec3(0.55, 0.9, 0.7);
const int ITER_FRAGMENT = 5;
const mat2 octave_m = mat2(1.7, 1.2, -1.2, 1.4);

float getMask(vec2 uv) { return texture(maskTexture, uv).a; }
vec3 getWorld(vec2 uv) { return texture(backgroundTexture, clamp(uv, vec2(0.001), vec2(0.999))).rgb; }

float hash(vec2 p) {
    float h = dot(p, vec2(127.1, 311.7));
    return fract(sin(h) * 83758.5453123);
}

float noise(vec2 p) {
    vec2 i = floor(p);
    vec2 f = fract(p);
    vec2 u = f * f * (3.0 - 2.0 * f);
    return -1.0 + 2.0 * mix(
        mix(hash(i + vec2(0.0, 0.0)), hash(i + vec2(1.0, 0.0)), u.x),
        mix(hash(i + vec2(0.0, 1.0)), hash(i + vec2(1.0, 1.0)), u.x),
        u.y);
}

float sea_octave(vec2 uv, float choppy) {
    uv += noise(uv);
    vec2 wv  = 1.0 - abs(sin(uv));
    vec2 swv = abs(cos(uv));
    wv = mix(wv, swv, wv);
    return pow(1.0 - pow(wv.x * wv.y, 0.65), choppy);
}

float map_detailed(vec2 uv, float time) {
    float seaTime = time * SEA_SPEED * flowSpeed;
    float freq = waveFreq * flowScale / 3.0;
    float amp = waveHeight;
    float choppy = choppiness;
    uv.x *= 0.75;
    float h = 0.0;
    for (int i = 0; i < ITER_FRAGMENT; i++) {
        float d = sea_octave((uv + seaTime) * freq, choppy);
        d += sea_octave((uv - seaTime) * freq, choppy);
        h += d * amp;
        uv *= octave_m / 1.2;
        freq *= 1.9;
        amp *= 0.22;
        choppy = mix(choppy, 1.0, 0.2);
    }
    return h;
}

vec3 waveNormal(vec2 uv, float time, float eps) {
    float h  = map_detailed(uv, time);
    float hx = map_detailed(uv + vec2(eps, 0.0), time);
    float hz = map_detailed(uv + vec2(0.0, eps), time);
    vec3 n;
    n.x = hx - h;
    n.z = hz - h;
    n.y = eps;
    return normalize(n);
}

float sea_diffuse(vec3 n, vec3 l, float p) {
    return pow(dot(n, l) * 0.4 + 0.6, p);
}

float sea_specular(vec3 n, vec3 l, vec3 e, float s) {
    float nrm = (s + 8.0) / (PI * 8.0);
    return pow(max(dot(reflect(e, n), l), 0.0), s) * nrm;
}

float skinLuminance(vec2 uv) {
    return dot(texture(maskTexture, uv).rgb, vec3(0.299, 0.587, 0.114));
}

float skinStructure(vec2 uv, vec2 ts) {
    float lc = skinLuminance(uv);
    float ll = skinLuminance(uv + vec2(-ts.x, 0.0));
    float lr = skinLuminance(uv + vec2( ts.x, 0.0));
    float lt = skinLuminance(uv + vec2(0.0,  ts.y));
    float lb = skinLuminance(uv + vec2(0.0, -ts.y));
    return sqrt(pow(lr - ll, 2.0) + pow(lt - lb, 2.0));
}

vec2 skinGradient(vec2 uv, vec2 ts) {
    float ll = skinLuminance(uv + vec2(-ts.x, 0.0));
    float lr = skinLuminance(uv + vec2( ts.x, 0.0));
    float lt = skinLuminance(uv + vec2(0.0,  ts.y));
    float lb = skinLuminance(uv + vec2(0.0, -ts.y));
    return vec2(lr - ll, lt - lb);
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
    return vec2((tr + 2.0*r + br) - (tl + 2.0*l + bl),
                (tl + 2.0*t + tr) - (bl + 2.0*b + br));
}

float softEdgeAlpha(vec2 uv, vec2 ts) {
    float total = 0.0, wSum = 0.0;
    total += getMask(uv) * 1.0; wSum += 1.0;
    for (int i = 0; i < 6; i++) {
        float a = float(i) * 1.0472 + 0.2618;
        total += getMask(uv + vec2(cos(a), sin(a)) * 0.8 * ts) * 0.75; wSum += 0.75;
    }
    for (int i = 0; i < 8; i++) {
        float a = float(i) * 0.7854;
        total += getMask(uv + vec2(cos(a), sin(a)) * 1.5 * ts) * 0.35; wSum += 0.35;
    }
    total += getMask(uv + vec2( 2.2, 0.0) * ts) * 0.15;
    total += getMask(uv + vec2(-2.2, 0.0) * ts) * 0.15;
    total += getMask(uv + vec2(0.0,  2.2) * ts) * 0.15;
    total += getMask(uv + vec2(0.0, -2.2) * ts) * 0.15;
    wSum += 0.6;
    return smoothstep(0.05, 0.95, total / wSum);
}

vec3 ACESFilm(vec3 x) {
    return clamp((x * (2.51 * x + 0.03)) / (x * (2.43 * x + 0.59) + 0.14), 0.0, 1.0);
}

void main() {
    vec2 uv = texCoord;
    vec2 ts = 1.0 / screenSize;

    float mask = getMask(uv);
    if (mask < 0.01) { fragColor = vec4(0.0); return; }

    float animTime = time;

    float edgeLen = length(sobelGradient(uv, ts * 1.5));
    float outerEdge = smoothstep(0.0, 0.8, edgeLen * 2.0);
    float deepInside = 1.0 - outerEdge;
    float thickness = deepInside * deepInside;

    float struct_ = skinStructure(uv, ts * 3.0);
    float structLines = smoothstep(0.02, 0.12, struct_);
    vec2 skinGrad = skinGradient(uv, ts * 3.0);
    float skinLum = skinLuminance(uv);

    vec2 waveUV = uv * 10.0;
    waveUV += skinLum * 1.5;
    waveUV += skinGrad * 8.0;

    float wave = map_detailed(waveUV, animTime);
    wave += structLines * 0.3;

    float nrmEps = 0.02;
    vec3 n = waveNormal(waveUV, animTime, nrmEps);
    n.x += skinGrad.x * 0.4;
    n.z += skinGrad.y * 0.4;
    n.x += structLines * 0.2 * sin(animTime * flowSpeed * 3.0);
    n = normalize(n);

    float refrStr = refractionStrength / 100.0;
    vec2 refrOff = n.xz * refrStr * deepInside * 15.0 * ts;
    vec3 refracted = vec3(
        getWorld(uv + refrOff * 1.3).r,
        getWorld(uv + refrOff).g,
        getWorld(uv + refrOff * 0.7).b
    );

    vec3 lightDir = normalize(vec3(0.0, 1.0, 0.8));
    vec3 eyeDir = vec3(0.0, -0.3, -1.0);

    vec3 seaBase = waterColor.rgb * 0.3;
    vec3 seaWaterCol = waterColor.rgb;

    float fresnel = 1.0 - max(dot(n, -eyeDir), 0.0);
    fresnel = pow(fresnel, 3.0) * 0.45;

    vec3 reflDir = reflect(eyeDir, n);
    vec3 skyCol = vec3(pow(1.0 - max(reflDir.y, 0.0), 2.0),
                       1.0 - max(reflDir.y, 0.0),
                       0.6 + (1.0 - max(reflDir.y, 0.0)) * 0.4);
    vec3 reflected = skyCol * 0.99;

    vec3 refractedSea = seaBase + sea_diffuse(n, lightDir, 80.0) * seaWaterCol * 0.27;
    vec3 seaCol = mix(refractedSea, reflected, fresnel);
    seaCol += seaWaterCol * (wave - waveHeight) * 0.15;
    seaCol += vec3(sea_specular(n, lightDir, eyeDir, 90.0)) * 0.5 * specularIntensity;

    vec3 clearWater = refracted;
    float spec = sea_specular(n, lightDir, eyeDir, 90.0) * specularIntensity;
    clearWater += vec3(spec * 0.4);
    clearWater += structLines * 0.08 * vec3(0.9, 0.95, 1.0);

    float density = 3.5;
    float d = density * thickness;
    vec3 transmittance = exp(-d * (1.0 - waterColor.rgb));

    vec3 seaFull = vec3(0.0);
    float clarity = 0.75;
    seaFull += (1.0 - thickness) * clarity * refracted * transmittance;
    seaFull += seaCol * thickness;
    seaFull += structLines * 0.12 * vec3(0.8, 0.9, 1.0);

    seaFull *= sqrt(sqrt(seaFull)) * 2.5;
    seaFull = ACESFilm(seaFull);
    seaFull = pow(seaFull, vec3(0.75));

    float tint = waterColor.a;
    vec3 col = mix(clearWater, seaFull, tint);

    float alpha = softEdgeAlpha(uv, ts);

    col *= colorModulator.rgb;
    fragColor = vec4(clamp(col, 0.0, 1.0), alpha);
}

