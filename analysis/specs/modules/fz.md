# Auto Jump Reset (sixtwo.fz)

- Registry: `sixtwo.fz|Auto Jump Reset|Reduces knockback by jumping when getting hurt|key=23|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fz.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 23, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Reduces knockback by jumping when getting hurt

## Setting names (decrypted)

- `Cancel In Fire` → **Cancel In Fire**
- `Chance` → **Chance**
- `Only From Players` → **Only From Players**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.EiuwG | cJ | `this, mr.clS(var10004) /* "Cancel In Fir…` → .WE(false) | 52 | see 00-framework.md [inferred] |
| this.QrNyB | cJ | `this, mr.clS(var10004) /* "Only From Pla…` → .WE(true) | 71 | see 00-framework.md [inferred] |

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

- Implement "Auto Jump Reset" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fz.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
