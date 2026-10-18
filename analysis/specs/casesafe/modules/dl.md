# Outlines (sixtwo.dl)

- Registry: `sixtwo.dl|Outlines|Renders outlines around entities|key=131|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dl.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 131, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~7 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders outlines around entities

## Setting names (decrypted)

- `Animation Speed` Ôćĺ **Animation Speed**
- `Brightness` Ôćĺ **Brightness**
- `Entities` Ôćĺ **Entities**
- `Saturation` Ôćĺ **Saturation**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.Myqqn | cF | `this, mr.clS(nArray) /* "Entities" */` Ôćĺ .VS(jg$tJ.OCdZM).VT(EntityType.END_CRYSTAL) | 85 | see 00-framework.md [inferred] |
| this.kHCyC | ct | `this, mr.clS(nArray2)`  | 98 | see 00-framework.md [inferred] |
| this.ySLzi | cu | `this.kHCyC, mr.clS(new int[]{(int)90, (iÔÇŽ`  | 99 | see 00-framework.md [inferred] |
| this.TJfWG | cu | `this.kHCyC, mr.clS(new int[]{(int)79, (iÔÇŽ`  | 100 | see 00-framework.md [inferred] |
| this.rjOTp | cu | `this.kHCyC, mr.clS(new int[]{(int)84, (iÔÇŽ`  | 101 | see 00-framework.md [inferred] |
| this.bFjPw | cu | `this.kHCyC, mr.clS(new int[]{(int)84, (iÔÇŽ`  | 102 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.EntityType`

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
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.EntityType`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Outlines" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dl.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
