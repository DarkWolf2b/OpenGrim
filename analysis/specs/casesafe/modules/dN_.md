# Slot Lock (sixtwo.dN)

- Registry: `sixtwo.dN|Slot Lock|Disables item drop from selected slots|key=64|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dN.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 64, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~7 native tokens vs ~7 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Disables item drop from selected slots

## Setting names (decrypted)

- `Locked Slots` Ôćĺ **Locked Slots**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.mOyJK | cz | `this, mr.clS(var10004) /* "Locked Slots"ÔÇŽ`  | 35 | see 00-framework.md [inferred] |

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

- Implement "Slot Lock" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dN.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
