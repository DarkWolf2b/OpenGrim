# Middle Click Friend (sixtwo.fU)

- Registry: `sixtwo.fU|Middle Click Friend|Adds friend when you click scroll on him|key=107|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-named/sixtwo/fU.java` (Vineflower)
- Superclass: `gg` [structure]
- Keybind: primary key 107, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~8 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Adds friend when you click scroll on him

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

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

- Implement "Middle Click Friend" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fU.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
