# Hand Chams (sixtwo.de)

- Registry: `sixtwo.de|Hand Chams|Customizes hand rendering with custom colors and transparency|key=132|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/de.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 132, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~78 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Customizes hand rendering with custom colors and transparency

## Setting names (decrypted)

- `Animation Speed` → **Animation Speed**
- `Bevel Color` → **Bevel Color**
- `Blue Shift` → **Blue Shift**
- `Brightness` → **Brightness**
- `Choppiness` → **Choppiness**
- `Chrome` → **Chrome**
- `Chrome Rim Intensity` → **Chrome Rim Intensity**
- `Chrome Rim Sharpness` → **Chrome Rim Sharpness**
- `Chrome Speed` → **Chrome Speed**
- `Chrome Tint` → **Chrome Tint**
- `Color Four` → **Color Four**
- `Color Mode` → **Color Mode**
- `Color One` → **Color One**
- `Color Three` → **Color Three**
- `Color Two` → **Color Two**
- `Contour` → **Contour**
- `Default` → **Default**
- `Dispersion` → **Dispersion**
- `Effect` → **Effect**
- `Fill Alpha Multiplier` → **Fill Alpha Multiplier**
- `Flow Scale` → **Flow Scale**
- `Flow Speed` → **Flow Speed**
- `Glow Alpha Multiplier` → **Glow Alpha Multiplier**
- `Glow Quality` → **Glow Quality**
- `Glow Radius` → **Glow Radius**
- `Light Angle` → **Light Angle**
- `Light Intensity` → **Light Intensity**
- `Liquid Metal` → **Liquid Metal**
- `Noise Freq X` → **Noise Freq X**
- `Noise Freq X2` → **Noise Freq X2**
- `Noise Freq Y` → **Noise Freq Y**
- `Noise Freq Y2` → **Noise Freq Y2**
- `Outline` → **Outline**
- `Preset` → **Preset**
- `Red Shift` → **Red Shift**
- `Refraction` → **Refraction**
- `Saturation` → **Saturation**
- `Second Color` → **Second Color**
- `Softness` → **Softness**
- `Tint Color` → **Tint Color**
- `Warp Intensity X` → **Warp Intensity X**
- `Warp Intensity Y` → **Warp Intensity Y**
- `Water Color` → **Water Color**
- `Water Refraction` → **Water Refraction**
- `Water Specular` → **Water Specular**
- `Wave Freq` → **Wave Freq**
- `Wave Height` → **Wave Height**

## Structural findings

### Settings (18 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.RgAHq | ct | `this, mr.clS(nArray) /* "Effect" */`  | 130 | see 00-framework.md [inferred] |
| this.GAQfN | cu | `this.RgAHq, mr.clS(nArray2) /* "Outline"…` → .SY() | 139 | see 00-framework.md [inferred] |
| this.zRrqK | ct | `this, mr.clS(nArray3) /* "Color Mode" */`  | 152 | see 00-framework.md [inferred] |
| this.hegBg | cu | `this.zRrqK, mr.clS(new int[]{(int)90, (i…`  | 153 | see 00-framework.md [inferred] |
| this.TiyZU | cu | `this.zRrqK, mr.clS(new int[]{(int)79, (i…`  | 154 | see 00-framework.md [inferred] |
| this.ZzssF | cu | `this.zRrqK, mr.clS(new int[]{(int)84, (i…`  | 155 | see 00-framework.md [inferred] |
| this.LmBXr | cu | `this.zRrqK, mr.clS(new int[]{(int)84, (i…`  | 156 | see 00-framework.md [inferred] |
| this.ALxVB | cu | `this.RgAHq, mr.clS(new int[]{(int)71, (i…`  | 285 | see 00-framework.md [inferred] |
| this.ydMpG | cu | `this.RgAHq, mr.clS(new int[]{(int)87, (i…`  | 286 | see 00-framework.md [inferred] |
| this.DwUUB | cu | `this.RgAHq, mr.clS(nArray12) /* "Chrome"…`  | 294 | see 00-framework.md [inferred] |
| this.iFVsF | cu | `this.RgAHq, mr.clS(nArray13) /* "Liquid …`  | 308 | see 00-framework.md [inferred] |
| this.gyUKP | ct | `this, mr.clS(nArray32) /* "Preset" */`  | 576 | see 00-framework.md [inferred] |
| this.lPues | cu | `this.gyUKP, mr.clS(nArray33) /* "Default…` → .SY() | 585 | see 00-framework.md [inferred] |
| this.akmpb | cu | `this.gyUKP, mr.clS(new int[]{(int)78, (i…`  | 586 | see 00-framework.md [inferred] |
| this.LvyMV | cu | `this.gyUKP, mr.clS(nArray34) /* "Chrome"…`  | 594 | see 00-framework.md [inferred] |
| this.DaCOY | cu | `this.gyUKP, mr.clS(new int[]{(int)79, (i…`  | 595 | see 00-framework.md [inferred] |
| this.CBEMj | cu | `this.gyUKP, mr.clS(new int[]{(int)84, (i…`  | 596 | see 00-framework.md [inferred] |
| this.LJJGt | cu | `this.gyUKP, mr.clS(new int[]{(int)70, (i…`  | 597 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.client.render.VertexConsumerProvider`
- `net.minecraft.client.render.VertexConsumerProvider$Immediate`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `mixin.accessors.GameRendererAccessor`
- `net.minecraft.client.render.VertexConsumerProvider`
- `org.joml.Matrix4f`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Hand Chams" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id de.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
