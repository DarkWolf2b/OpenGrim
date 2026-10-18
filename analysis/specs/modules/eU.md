# Air Anchor (sixtwo.eU)

- Registry: `sixtwo.eU|Air Anchor|Allows to place anchor in air|key=114|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eU.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 114, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~14 native tokens vs ~14 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to place anchor in air

## Setting names (decrypted)

- `Chance` → **Chance**
- `Double Anchor` → **Double Anchor**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.uOhjt | cJ | `this, mr.clS(var10004) /* "Double Anchor…` → .WE(false) | 40 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.util.math.BlockPos`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.util.math.BlockPos`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Air Anchor" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eU.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
