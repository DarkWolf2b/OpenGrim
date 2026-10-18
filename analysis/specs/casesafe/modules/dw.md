# Circle ESP (sixtwo.dw)

- Registry: `sixtwo.dw|Circle ESP|Draws circle around entities|key=84|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dw.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 84, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~17 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Draws circle around entities

## Setting names (decrypted)

- `Animated` Ôćĺ **Animated**
- `Circle Scale` Ôćĺ **Circle Scale**
- `Circle Style` Ôćĺ **Circle Style**
- `Circle Texture` Ôćĺ **Circle Texture**
- `Custom` Ôćĺ **Custom**
- `Default` Ôćĺ **Default**
- `Entities` Ôćĺ **Entities**
- `Only For Target` Ôćĺ **Only For Target**
- `Texture URL` Ôćĺ **Texture URL**
- `Textured` Ôćĺ **Textured**

## Structural findings

### Settings (9 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.ZIRir | cF | `this, mr.clS(nArray) /* "Entities" */` Ôćĺ .VS(jg$tJ.OCdZM).VT(EntityType.ITEM) | 108 | see 00-framework.md [inferred] |
| this.DVJWE | cJ | `this, mr.clS(nArray2) /* "Animated" */` Ôćĺ .WE(true) | 118 | see 00-framework.md [inferred] |
| this.OrinU | ct | `this, mr.clS(nArray4) /* "Circle TextureÔÇŽ`  | 150 | see 00-framework.md [inferred] |
| this.CkUcI | cu | `this.OrinU, mr.clS(nArray5) /* "Default"ÔÇŽ`  | 159 | see 00-framework.md [inferred] |
| this.ZTyjv | cu | `this.OrinU, mr.clS(nArray6) /* "Custom" ÔÇŽ`  | 167 | see 00-framework.md [inferred] |
| this.JxSnN | ct | `this, mr.clS(nArray8) /* "Circle Style" ÔÇŽ` Ôćĺ .SO(1) | 194 | see 00-framework.md [inferred] |
| this.GLHXM | cu | `this.JxSnN, mr.clS(nArray9) /* "TexturedÔÇŽ`  | 204 | see 00-framework.md [inferred] |
| this.eSXTX | cu | `this.JxSnN, mr.clS(new int[]{(int)83, (iÔÇŽ`  | 205 | see 00-framework.md [inferred] |
| this.CIvYl | cJ | `this, mr.clS(nArray10) /* "Only For TargÔÇŽ` Ôćĺ .WE(false) | 222 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (6 refs)

- `net.minecraft.client.texture.AbstractTexture`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.EntityType`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `java.util.function.Consumer`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.texture.AbstractTexture`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.EntityType`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Circle ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dw.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
