# Auto X-Bow (sixtwo.fa)

- Registry: `sixtwo.fa|Auto X-Bow|Automatically performs crossbow cart|key=164|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fa.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 164, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~51 native tokens vs ~48 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically performs crossbow cart

## Setting names (decrypted)

- `Activation Key` Ôćĺ **Activation Key**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.vPwrl | cD | `this, mr.clS(var10004) /* "Activation KeÔÇŽ` Ôćĺ .VO(-999) | 45 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (6 refs)

- `net.minecraft.block.BlockState`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.Hand`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.block.BlockState`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.Hand`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto X-Bow" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fa.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
