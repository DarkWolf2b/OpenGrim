# Resource Pack Bypass (sixtwo.fT)

- Registry: `sixtwo.fT|Resource Pack Bypass|Allows to bypass required server texture pack|key=78|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fT.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 78, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~29 native tokens vs ~29 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to bypass required server texture pack

## Setting names (decrypted)

- `Enable For All` Ôćĺ **Enable For All**
- `Servers` Ôćĺ **Servers**
- `Specific Servers` Ôćĺ **Specific Servers**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.UpGbN | ct | `
         this,
         mr.clS(
       ÔÇŽ`  | 27 | see 00-framework.md [inferred] |
| this.HRntz | cu | `var10003, mr.clS(var10004) /* "Enable FoÔÇŽ`  | 54 | see 00-framework.md [inferred] |
| this.IVIuI | cu | `var10003, mr.clS(var10004) /* "Specific ÔÇŽ` Ôćĺ .SY() | 73 | see 00-framework.md [inferred] |

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

- Implement "Resource Pack Bypass" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fT.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
