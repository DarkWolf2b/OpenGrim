# XRay (sixtwo.dk)

- Registry: `sixtwo.dk|XRay|Allows to see ores through walls|key=96|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dk.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 96, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~16 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to see ores through walls

## Setting names (decrypted)

None decoded (all native).

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.AwjXZ | cJ | `this, mr.clS(new int[]{(int)87, (int)97,…` → .WE(false) | 83 | see 00-framework.md [inferred] |
| this.JTZwR | cJ | `this, mr.clS(new int[]{(int)76, (int)97,…` → .WE(false) | 84 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (5 refs)

- `net.minecraft.block.BlockState`
- `net.minecraft.fluid.Fluid`
- `net.minecraft.fluid.Fluids`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.block.BlockState`
- `net.minecraft.fluid.Fluid`
- `net.minecraft.fluid.Fluids`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "XRay" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dk.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
