# Speed (sixtwo.er)

- Registry: `sixtwo.er|Speed|Increases your speed|key=133|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/er.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 133, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~16 native tokens vs ~16 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Increases your speed

## Setting names (decrypted)

- `Boost Range` Ôćĺ **Boost Range**
- `Collision` Ôćĺ **Collision**
- `Collision Target` Ôćĺ **Collision Target**
- `Constant` Ôćĺ **Constant**
- `Distance` Ôćĺ **Distance**
- `Ground` Ôćĺ **Ground**
- `Matrix` Ôćĺ **Matrix**
- `On Fall` Ôćĺ **On Fall**
- `On Ground` Ôćĺ **On Ground**
- `On Jump` Ôćĺ **On Jump**
- `Predict` Ôćĺ **Predict**
- `Yaw Offset` Ôćĺ **Yaw Offset**
- `Yaw Offset Mode` Ôćĺ **Yaw Offset Mode**

## Structural findings

### Settings (9 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.zVsNl | ct | `
         this,
         mr.clS(
       ÔÇŽ`  | 40 | see 00-framework.md [inferred] |
| this.rJcqT | cu | `var10003, mr.clS(var10004) /* "CollisionÔÇŽ`  | 62 | see 00-framework.md [inferred] |
| this.hqvXq | cu | `var10003, mr.clS(var10004) /* "CollisionÔÇŽ`  | 81 | see 00-framework.md [inferred] |
| this.VEzGB | cu | `var10003, mr.clS(var10004) /* "Matrix" *ÔÇŽ`  | 90 | see 00-framework.md [inferred] |
| this.HJQND | cJ | `this, mr.clS(var10004) /* "Yaw Offset" *ÔÇŽ` Ôćĺ .WE(false) | 102 | see 00-framework.md [inferred] |
| this.QVAYj | ct | `this, mr.clS(var10004) /* "Yaw Offset MoÔÇŽ` Ôćĺ .SO(1) | 119 | see 00-framework.md [inferred] |
| this.ylthu | cu | `var10003, mr.clS(var10004) /* "Ground" *ÔÇŽ`  | 128 | see 00-framework.md [inferred] |
| this.CUcNd | cu | `
         this.QVAYj,
         mr.clS(
 ÔÇŽ`  | 130 | see 00-framework.md [inferred] |
| this.aqeay | cu | `var13, mr.clS(var10005) /* "Constant" */`  | 146 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.util.Map`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Speed" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id er.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
