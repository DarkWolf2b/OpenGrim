# Block Piercer (sixtwo.dP)

- Registry: `sixtwo.dP|Block Piercer|Allows to place blocks through entities|key=143|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dP.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 143, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to place blocks through entities

## Setting names (decrypted)

- `Allowed Blocks` → **Allowed Blocks**
- `Entities` → **Entities**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.jOKrR | cF | `this, mr.clS(var10004) /* "Entities" */` → .VS(jg$tJ.OCdZM) | 36 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.item.Items`
- `net.minecraft.util.Hand`
- `net.minecraft.util.hit.HitResult`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.item.Items`
- `net.minecraft.util.Hand`
- `net.minecraft.util.hit.HitResult`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Block Piercer" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dP.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
