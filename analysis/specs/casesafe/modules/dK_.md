# Auto Lever Replace (sixtwo.dK)

- Registry: `sixtwo.dK|Auto Lever Replace|Automatically destroys levers|key=130|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dK.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 130, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~19 native tokens vs ~19 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically destroys levers

## Setting names (decrypted)

- `Auto Trap` Ôćĺ **Auto Trap**
- `Auto Web` Ôćĺ **Auto Web**
- `Ignore Walls` Ôćĺ **Ignore Walls**
- `Work With` Ôćĺ **Work With**

## Structural findings

### Settings (4 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.zrgbM | cv | `this, mr.clS(var10004) /* "Work With" */`  | 37 | see 00-framework.md [inferred] |
| this.ImshN | cw | `var10003, mr.clS(var10004) /* "Auto TrapÔÇŽ`  | 49 | see 00-framework.md [inferred] |
| this.CzAnG | cw | `var10003, mr.clS(var10004) /* "Auto Web"ÔÇŽ`  | 60 | see 00-framework.md [inferred] |
| this.QiyGI | cJ | `this, mr.clS(var10004) /* "Ignore Walls"ÔÇŽ` Ôćĺ .WE(true) | 74 | see 00-framework.md [inferred] |

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

- Implement "Auto Lever Replace" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dK.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
