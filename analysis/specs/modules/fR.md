# Client Sounds (sixtwo.fR)

- Registry: `sixtwo.fR|Client Sounds|Manages sounds of client|key=103|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fR.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 103, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Manages sounds of client

## Setting names (decrypted)

- `Bubble` → **Bubble**
- `Normal` → **Normal**
- `Sound Type` → **Sound Type**
- `Sound Volume` → **Sound Volume**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.foDkU | ct | `this, mr.clS(var10004) /* "Sound Type" *…`  | 35 | see 00-framework.md [inferred] |
| this.sxltZ | cu | `var10003, mr.clS(var10004) /* "Normal" *…`  | 44 | see 00-framework.md [inferred] |
| this.uLWvr | cu | `var10003, mr.clS(var10004) /* "Bubble" *…`  | 53 | see 00-framework.md [inferred] |

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

- Implement "Client Sounds" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fR.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
