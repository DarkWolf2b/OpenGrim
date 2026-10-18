# Double Tap (sixtwo.eM)

- Registry: `sixtwo.eM|Double Tap|Performs Aerial D-Tap automatically|key=121|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-named/sixtwo/eM.java` (Vineflower)
- Superclass: `gg` [structure]
- Keybind: primary key 121, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~5 native tokens vs ~5 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Performs Aerial D-Tap automatically

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (1 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aAY | `hw$tv var1` | priority = mw.HIGH | 24 |

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

None.

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Double Tap" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eM.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
