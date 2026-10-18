# Safe Walk (sixtwo.ex)

- Registry: `sixtwo.ex|Safe Walk|Stops you from walking off blocks|key=51|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ex.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 51, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~6 native tokens vs ~6 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Stops you from walking off blocks

## Setting names (decrypted)

- `Release On Forward` Ôćĺ **Release On Forward**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.pyxZq | cJ | `this, mr.clS(var10004) /* "Release On FoÔÇŽ` Ôćĺ .WE(false) | 41 | see 00-framework.md [inferred] |

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

- Implement "Safe Walk" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ex.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
