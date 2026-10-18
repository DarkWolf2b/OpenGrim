# Ghost Hand (sixtwo.ec)

- Registry: `sixtwo.ec|Ghost Hand|Allows to open containers through walls|key=75|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-named/sixtwo/ec.java` (Vineflower)
- Superclass: `gg` [structure]
- Keybind: primary key 75, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~4 native tokens vs ~4 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to open containers through walls

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.util.math.BlockPos`

### Other imports of interest

- `java.util.HashSet`
- `java.util.Set`
- `net.minecraft.util.math.BlockPos`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Ghost Hand" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ec.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
