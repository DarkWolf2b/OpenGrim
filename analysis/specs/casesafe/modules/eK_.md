# Auto Web (sixtwo.eK)

- Registry: `sixtwo.eK|Auto Web|Automatically places webs at enemies|key=10|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eK.java` (CFR, literals folded)
- Superclass: `eL` [structure]
- Keybind: primary key 10, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~29 native tokens vs ~24 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically places webs at enemies

## Setting names (decrypted)

- `Placement Options` Ôćĺ **Placement Options**
- `Predict Position` Ôćĺ **Predict Position**
- `Prediction Ticks` Ôćĺ **Prediction Ticks**
- `Surround` Ôćĺ **Surround**
- `Upper Surround` Ôćĺ **Upper Surround**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.NMgGy | cv | `this, mr.clS(nArray) /* "Placement OptioÔÇŽ` Ôćĺ .Tm(1) | 74 | see 00-framework.md [inferred] |
| this.GDZTu | cw | `this.NMgGy, mr.clS(new int[]{(int)76, (iÔÇŽ` Ôćĺ .Tz() | 75 | see 00-framework.md [inferred] |
| this.MeIjx | cw | `this.NMgGy, mr.clS(new int[]{(int)72, (iÔÇŽ` Ôćĺ .Tz() | 76 | see 00-framework.md [inferred] |
| this.wBiWF | cw | `this.NMgGy, mr.clS(nArray2) /* "SurroundÔÇŽ`  | 86 | see 00-framework.md [inferred] |
| this.zlXZx | cw | `this.NMgGy, mr.clS(nArray3) /* "Upper SuÔÇŽ`  | 102 | see 00-framework.md [inferred] |
| this.OBXLo | cJ | `this, mr.clS(nArray4) /* "Predict PositiÔÇŽ` Ôćĺ .WE(false) | 120 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.block.BlockState`
- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.math.BlockPos`

### Other imports of interest

- `java.util.List`
- `java.util.Map`
- `java.util.function.Predicate`
- `net.minecraft.block.BlockState`
- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.math.BlockPos`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Web" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eK.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
