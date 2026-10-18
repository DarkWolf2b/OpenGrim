# Wind Hop (sixtwo.eR)

- Registry: `sixtwo.eR|Wind Hop|Throws a wind charge beneath you|key=119|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eR.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 119, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Throws a wind charge beneath you

## Setting names (decrypted)

- `Activation Key` → **Activation Key**
- `Only On Ground` → **Only On Ground**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.woKJb | cD | `this, mr.clS(var10004) /* "Activation Ke…` → .VO(-999) | 39 | see 00-framework.md [inferred] |
| this.aBhOM | cJ | `this, mr.clS(var10004) /* "Only On Groun…` → .WE(true) | 55 | see 00-framework.md [inferred] |

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

- Implement "Wind Hop" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eR.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
