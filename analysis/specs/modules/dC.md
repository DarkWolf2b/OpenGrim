# View Model (sixtwo.dC)

- Registry: `sixtwo.dC|View Model|Changes player View Model|key=95|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dC.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 95, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~12 native tokens vs ~12 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Changes player View Model

## Setting names (decrypted)

- `Arm Position X` → **Arm Position X**
- `Arm Position Y` → **Arm Position Y**
- `Arm Position Z` → **Arm Position Z**
- `Arm Rotation X` → **Arm Rotation X**
- `Arm Rotation Y` → **Arm Rotation Y**
- `Arm Rotation Z` → **Arm Rotation Z**
- `Main Position X` → **Main Position X**
- `Main Position Y` → **Main Position Y**
- `Main Position Z` → **Main Position Z**
- `Main Rotation X` → **Main Rotation X**
- `Main Rotation Y` → **Main Rotation Y**
- `Main Rotation Z` → **Main Rotation Z**
- `Off Position X` → **Off Position X**
- `Off Position Y` → **Off Position Y**
- `Off Position Z` → **Off Position Z**
- `Off Rotation X` → **Off Rotation X**
- `Off Rotation Y` → **Off Rotation Y**
- `Off Rotation Z` → **Off Rotation Z**
- `Work On Arm` → **Work On Arm**
- `Work On Items` → **Work On Items**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.dEZDK | cJ | `this, mr.clS(var10004) /* "Work On Items…` → .WE(true) | 59 | see 00-framework.md [inferred] |
| this.DwJFs | cJ | `this, mr.clS(var10004) /* "Work On Arm" …` → .WE(false) | 286 | see 00-framework.md [inferred] |

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

- Implement "View Model" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dC.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
