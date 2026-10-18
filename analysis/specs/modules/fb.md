# Cart Assist (sixtwo.fb)

- Registry: `sixtwo.fb|Cart Assist|Automatically performs insta cart|key=163|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fb.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 163, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~41 native tokens vs ~39 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically performs insta cart

## Setting names (decrypted)

- `Actions` → **Actions**
- `Place Minecart` → **Place Minecart**
- `Place Protect` → **Place Protect**
- `Place Rail` → **Place Rail**
- `Return To` → **Return To**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.tuKUN | cv | `this, mr.clS(var10004) /* "Actions" */`  | 47 | see 00-framework.md [inferred] |
| this.uMDXH | cw | `var10003, mr.clS(var10004) /* "Place Rai…` → .Tz() | 60 | see 00-framework.md [inferred] |
| this.WbnlP | cw | `var10003, mr.clS(var10004) /* "Place Min…` → .Tz() | 77 | see 00-framework.md [inferred] |
| this.PVMYe | cw | `var8, mr.clS(var10005) /* "Place Protect…`  | 94 | see 00-framework.md [inferred] |
| this.bKNZB | ct | `this, mr.clS(var10005) /* "Return To" */`  | 105 | see 00-framework.md [inferred] |
| this.SGmOv | cu | `
            this.bKNZB,
            mr.…`  | 118 | see 00-framework.md [inferred] |

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

- Implement "Cart Assist" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fb.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
