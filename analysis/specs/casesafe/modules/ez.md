# No Fall (sixtwo.ez)

- Registry: `sixtwo.ez|No Fall|Attempts to prevent you from taking fall damage|key=36|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-named/sixtwo/ez.java` (Vineflower)
- Superclass: `gg` [structure]
- Keybind: primary key 36, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~4 native tokens vs ~4 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Attempts to prevent you from taking fall damage

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

None.

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "No Fall" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ez.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
