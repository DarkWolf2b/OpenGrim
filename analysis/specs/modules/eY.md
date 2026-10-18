# Crystal Optimizer (sixtwo.eY)

- Registry: `sixtwo.eY|Crystal Optimizer|Optimizes exploding crystals|key=33|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-named/sixtwo/eY.java` (Vineflower)
- Superclass: `gg` [structure]
- Keybind: primary key 33, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~8 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Optimizes exploding crystals

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.entity.decoration.EndCrystalEntity`
- `net.minecraft.item.ItemStack`

### Other imports of interest

- `java.util.concurrent.atomic.DoubleAdder`
- `net.minecraft.entity.decoration.EndCrystalEntity`
- `net.minecraft.item.ItemStack`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Crystal Optimizer" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eY.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
