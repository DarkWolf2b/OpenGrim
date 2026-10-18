# Super Firework (sixtwo.ep)

- Registry: `sixtwo.ep|Super Firework|Increases speed after firework use|key=113|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ep.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 113, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~6 native tokens vs ~6 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Increases speed after firework use

## Setting names (decrypted)

- `Boost Value` Ôćĺ **Boost Value**

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

- Implement "Super Firework" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ep.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
