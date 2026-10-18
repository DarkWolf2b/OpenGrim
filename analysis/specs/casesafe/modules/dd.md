# Block ESP (sixtwo.dd)

- Registry: `sixtwo.dd|Block ESP|Highlights selected blocks|key=82|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dd.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 82, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~9 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Highlights selected blocks

## Setting names (decrypted)

- `Blocks To Highlight` Ôćĺ **Blocks To Highlight**
- `Fill Color` Ôćĺ **Fill Color**
- `Filled` Ôćĺ **Filled**
- `Outline Color` Ôćĺ **Outline Color**
- `Tracers` Ôćĺ **Tracers**
- `Tracers Width` Ôćĺ **Tracers Width**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.jUhNc | cJ | `this, mr.clS(nArray4) /* "Filled" */` Ôćĺ .WE(false) | 128 | see 00-framework.md [inferred] |
| this.IfTUx | cJ | `this, mr.clS(nArray5) /* "Tracers" */` Ôćĺ .WE(false) | 137 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Block ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dd.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
