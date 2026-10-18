# Shield Block (sixtwo.fi)

- Registry: `sixtwo.fi|Shield Block|Automatically switches to shield when right clicked|key=155|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-named/sixtwo/fi.java` (Vineflower)
- Superclass: `gg` [structure]
- Keybind: primary key 155, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~15 native tokens vs ~15 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically switches to shield when right clicked

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.item.BlockItem`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.hit.BlockHitResult`

### Other imports of interest

- `net.minecraft.item.BlockItem`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.hit.BlockHitResult`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Shield Block" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fi.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
