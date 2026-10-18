# Trails (sixtwo.cU)

- Registry: `sixtwo.cU|Trails|Renders trails behind players|key=124|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cU.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 124, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~7 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders trails behind players

## Setting names (decrypted)

- `Friends` → **Friends**
- `Gradient Speed` → **Gradient Speed**
- `Invisibles` → **Invisibles**
- `Length` → **Length**
- `Players` → **Players**
- `Show For` → **Show For**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.BauFa | cv | `this, mr.clS(nArray) /* "Show For" */`  | 80 | see 00-framework.md [inferred] |
| this.PhtFx | cw | `this.BauFa, mr.clS(nArray2) /* "Players"…`  | 89 | see 00-framework.md [inferred] |
| this.BcQvA | cw | `this.BauFa, mr.clS(nArray3) /* "Friends"…`  | 98 | see 00-framework.md [inferred] |
| this.QwJkI | cw | `this.BauFa, mr.clS(nArray4) /* "Invisibl…`  | 110 | see 00-framework.md [inferred] |
| this.QoAWo | cw | `this.BauFa, mr.clS(new int[]{(int)83, (i…` → .Tz() | 111 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Trails" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cU.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
