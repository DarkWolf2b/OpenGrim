# Pearl Chaser (sixtwo.fm)

- Registry: `sixtwo.fm|Pearl Chaser|Automatically throws pearls after players|key=145|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fm.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 145, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~22 native tokens vs ~22 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically throws pearls after players

## Setting names (decrypted)

- `Ignore Friends` → **Ignore Friends**
- `Minimal Health To Throw` → **Minimal Health To Throw**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.HtBNt | cJ | `this, mr.clS(var10004) /* "Ignore Friend…` → .WE(true) | 80 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.entity.projectile.thrown.EnderPearlEntity`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.util.List`
- `java.util.Map`
- `net.minecraft.entity.projectile.thrown.EnderPearlEntity`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Pearl Chaser" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fm.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
