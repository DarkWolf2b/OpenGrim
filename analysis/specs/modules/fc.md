# Cart Refill (sixtwo.fc)

- Registry: `sixtwo.fc|Cart Refill|Automatically refills TNT minecarts|key=165|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fc.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 165, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~8 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically refills TNT minecarts

## Setting names (decrypted)

- `Randomize Slots` → **Randomize Slots**
- `Slots To Refill` → **Slots To Refill**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.TSAtI | cJ | `this, mr.clS(var10005) /* "Randomize Slo…` → .WE(false) | 72 | see 00-framework.md [inferred] |

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

- Implement "Cart Refill" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fc.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
