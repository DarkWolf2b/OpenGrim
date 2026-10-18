# Inventory Move (sixtwo.ek)

- Registry: `sixtwo.ek|Inventory Move|Allows to move inside screens|key=47|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ek.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 47, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~9 native tokens vs ~9 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to move inside screens

## Setting names (decrypted)

- `Block Clicks` → **Block Clicks**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.FjUNy | cJ | `this, mr.clS(var10004) /* "Block Clicks"…` → .WE(false) | 35 | see 00-framework.md [inferred] |

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

- Implement "Inventory Move" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ek.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
