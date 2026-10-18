# Fast Bridge (sixtwo.eD)

- Registry: `sixtwo.eD|Fast Bridge|Automatically sneaks on block edge|key=50|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eD.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 50, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~8 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically sneaks on block edge

## Setting names (decrypted)

- `Only When Holding Block` Ôćĺ **Only When Holding Block**
- `Only When Looking At Block` Ôćĺ **Only When Looking At Block**
- `Only When Moving Backwards` Ôćĺ **Only When Moving Backwards**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.uZrTG | cJ | `this, mr.clS(var10004) /* "Only When HolÔÇŽ` Ôćĺ .WE(false) | 49 | see 00-framework.md [inferred] |
| this.oGUVa | cJ | `this, mr.clS(var10004) /* "Only When LooÔÇŽ` Ôćĺ .WE(false) | 77 | see 00-framework.md [inferred] |
| this.YrRkq | cJ | `this, mr.clS(var10004) /* "Only When MovÔÇŽ` Ôćĺ .WE(false) | 105 | see 00-framework.md [inferred] |

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

- Implement "Fast Bridge" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eD.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
