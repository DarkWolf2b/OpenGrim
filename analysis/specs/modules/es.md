# No Push (sixtwo.es)

- Registry: `sixtwo.es|No Push|Prevents pushing out of blocks|key=37|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/es.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 37, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~8 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Prevents pushing out of blocks

## Setting names (decrypted)

- `Block Push` → **Block Push**
- `Cancel Push` → **Cancel Push**
- `Entity Push` → **Entity Push**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.nPcnW | cv | `this, mr.clS(var10004) /* "Cancel Push" …`  | 34 | see 00-framework.md [inferred] |
| this.lfLfR | cw | `var10003, mr.clS(var10004) /* "Block Pus…` → .Tz() | 47 | see 00-framework.md [inferred] |
| this.uaNzy | cw | `var10003, mr.clS(var10004) /* "Entity Pu…`  | 61 | see 00-framework.md [inferred] |

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

- Implement "No Push" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id es.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
