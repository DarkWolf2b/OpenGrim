# Chams (sixtwo.dv)

- Registry: `sixtwo.dv|Chams|Renders entities through walls|key=101|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dv.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 101, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~11 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders entities through walls

## Setting names (decrypted)

- `Apply To Own Player` → **Apply To Own Player**
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
- `Color One` → **Color One**
- `Color Three` → **Color Three**
- `Color Two` → **Color Two**
- `Contour` → **Contour**
- `Default` → **Default**
- `Dispersion` → **Dispersion**
- `Effect` → **Effect**
- `Entities` → **Entities**
- `Flow Scale` → **Flow Scale**
- `Flow Speed` → **Flow Speed**
- `Hide Original` → **Hide Original**
- `Light Angle` → **Light Angle**
- `Light Intensity` → **Light Intensity**
- `Liquid Metal` → **Liquid Metal**
- `Noise Freq X` → **Noise Freq X**
- `Noise Freq X2` → **Noise Freq X2**
- `Noise Freq Y` → **Noise Freq Y**
- `Noise Freq Y2` → **Noise Freq Y2**
- `Preset` → **Preset**
- `Red Shift` → **Red Shift**
- `Refraction` → **Refraction**
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

### Settings (15 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.jWIlg | cF | `this, mr.clS(nArray) /* "Entities" */` → .VS(jg$tJ.OCdZM) | 130 | see 00-framework.md [inferred] |
| this.NPcDw | cJ | `this, mr.clS(nArray2) /* "Hide Original"…` → .WE(true) | 145 | see 00-framework.md [inferred] |
| this.ZXujq | cJ | `this, mr.clS(nArray3) /* "Apply To Own P…` → .WE(false) | 166 | see 00-framework.md [inferred] |
| this.cdTwb | ct | `this, mr.clS(nArray4) /* "Effect" */`  | 174 | see 00-framework.md [inferred] |
| this.XdqBo | cu | `this.cdTwb, mr.clS(new int[]{(int)71, (i…` → .SY() | 175 | see 00-framework.md [inferred] |
| this.zysSC | cu | `this.cdTwb, mr.clS(new int[]{(int)87, (i…`  | 176 | see 00-framework.md [inferred] |
| this.SpKOT | cu | `this.cdTwb, mr.clS(nArray5) /* "Chrome" …`  | 184 | see 00-framework.md [inferred] |
| this.ezBRY | cu | `this.cdTwb, mr.clS(nArray6) /* "Liquid M…`  | 198 | see 00-framework.md [inferred] |
| this.yZFow | ct | `this, mr.clS(nArray25) /* "Preset" */`  | 468 | see 00-framework.md [inferred] |
| this.XOcqL | cu | `this.yZFow, mr.clS(nArray26) /* "Default…` → .SY() | 477 | see 00-framework.md [inferred] |
| this.ixTDC | cu | `this.yZFow, mr.clS(new int[]{(int)78, (i…`  | 478 | see 00-framework.md [inferred] |
| this.UMvcY | cu | `this.yZFow, mr.clS(nArray27) /* "Chrome"…`  | 486 | see 00-framework.md [inferred] |
| this.LcpZq | cu | `this.yZFow, mr.clS(new int[]{(int)79, (i…`  | 487 | see 00-framework.md [inferred] |
| this.EMNhW | cu | `this.yZFow, mr.clS(new int[]{(int)84, (i…`  | 488 | see 00-framework.md [inferred] |
| this.xuMLa | cu | `this.yZFow, mr.clS(new int[]{(int)70, (i…`  | 489 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Chams" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dv.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
