# Trident Boost (sixtwo.eu)

- Registry: `sixtwo.eu|Trident Boost|Allows to use trident outside water or rain|key=40|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eu.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 40, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to use trident outside water or rain

## Setting names (decrypted)

- `Allow Outside Water Or Rain` Ôćĺ **Allow Outside Water Or Rain**
- `Boost Cooldown` Ôćĺ **Boost Cooldown**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.SDRyJ | cJ | `this, mr.clS(var10004) /* "Allow OutsideÔÇŽ` Ôćĺ .WE(false) | 66 | see 00-framework.md [inferred] |

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

- Implement "Trident Boost" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eu.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
