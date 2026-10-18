# Auto Dripstone (sixtwo.fd)

- Registry: `sixtwo.fd|Auto Dripstone|Automatically places dripstone and opens trapdoor|key=15|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fd.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 15, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~18 native tokens vs ~16 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically places dripstone and opens trapdoor

## Setting names (decrypted)

- `Cooldown` Ôćĺ **Cooldown**

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (5 refs)

- `net.minecraft.block.BlockState`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Direction`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.block.BlockState`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Direction`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Dripstone" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fd.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
