# Custom Camera Distance (sixtwo.ed)

- Registry: `sixtwo.ed|Custom Camera Distance|Changes camera distance from player|key=74|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ed.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 74, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Changes camera distance from player

## Setting names (decrypted)

- `Distance` → **Distance**
- `No Clip` → **No Clip**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.HfVsU | cJ | `this, mr.clS(var10004) /* "No Clip" */` → .WE(false) | 40 | see 00-framework.md [inferred] |

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

- Implement "Custom Camera Distance" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ed.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
