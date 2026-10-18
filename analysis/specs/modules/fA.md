# Potion Refill (sixtwo.fA)

- Registry: `sixtwo.fA|Potion Refill|Automatically refills potions|key=7|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fA.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 7, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~8 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically refills potions

## Setting names (decrypted)

- `Randomize Slots` → **Randomize Slots**
- `Slots To Refill` → **Slots To Refill**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.gaHGm | cJ | `this, mr.clS(var10004) /* "Randomize Slo…` → .WE(false) | 84 | see 00-framework.md [inferred] |

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

- Implement "Potion Refill" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fA.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
