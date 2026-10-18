# Anti-Cheat Detector (sixtwo.fP)

- Registry: `sixtwo.fP|Anti-Cheat Detector|Analyzes packets to detect Anti-Cheat|key=108|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fP.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 108, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~21 native tokens vs ~21 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Analyzes packets to detect Anti-Cheat

## Setting names (decrypted)

None decoded (all native).

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.util.ArrayList`
- `java.util.List`
- `java.util.Map`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Anti-Cheat Detector" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fP.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
