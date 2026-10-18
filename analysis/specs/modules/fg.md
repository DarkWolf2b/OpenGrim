# Target Lock (sixtwo.fg)

- Registry: `sixtwo.fg|Target Lock|Allows to lock on a single target|key=136|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fg.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 136, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~15 native tokens vs ~15 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to lock on a single target

## Setting names (decrypted)

- `Lock Keybind` → **Lock Keybind**
- `Select Range` → **Select Range**
- `Select Through Walls` → **Select Through Walls**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.vJxZS | cD | `this, mr.clS(var10004) /* "Lock Keybind"…` → .VO(-999) | 42 | see 00-framework.md [inferred] |
| this.VEiCg | cJ | `this, mr.clS(var10004) /* "Select Throug…` → .WE(false) | 78 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Target Lock" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fg.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
