# Jump Circle (sixtwo.db)

- Registry: `sixtwo.db|Jump Circle|Draws circle when you jump|key=89|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/db.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 89, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~18 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Draws circle when you jump

## Setting names (decrypted)

- `Circle Color` Ôćĺ **Circle Color**
- `Circle Scale` Ôćĺ **Circle Scale**
- `Circle Texture` Ôćĺ **Circle Texture**
- `Custom` Ôćĺ **Custom**
- `Default` Ôćĺ **Default**
- `Glowing` Ôćĺ **Glowing**
- `Only Self` Ôćĺ **Only Self**
- `Texture URL` Ôćĺ **Texture URL**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.iiIVe | cJ | `this, mr.clS(nArray2) /* "Only Self" */` Ôćĺ .WE(false) | 123 | see 00-framework.md [inferred] |
| this.GZUSi | ct | `this, mr.clS(nArray4) /* "Circle TextureÔÇŽ`  | 153 | see 00-framework.md [inferred] |
| this.NcADa | cu | `this.GZUSi, mr.clS(nArray5) /* "Default"ÔÇŽ`  | 162 | see 00-framework.md [inferred] |
| this.laKOH | cu | `this.GZUSi, mr.clS(nArray6) /* "Glowing"ÔÇŽ`  | 171 | see 00-framework.md [inferred] |
| this.AvPuQ | cu | `this.GZUSi, mr.clS(nArray7) /* "Custom" ÔÇŽ`  | 179 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (5 refs)

- `net.minecraft.client.texture.AbstractTexture`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.RotationAxis`
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
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.RotationAxis`
- `net.minecraft.util.math.Vec3d`
- `org.joml.Quaternionfc`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Jump Circle" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id db.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
