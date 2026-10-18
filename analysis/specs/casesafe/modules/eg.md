# No Swing (sixtwo.eg)

- Registry: `sixtwo.eg|No Swing|Cancels swinging|key=77|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eg.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 77, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~7 native tokens vs ~7 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Cancels swinging

## Setting names (decrypted)

- `Client` Ôćĺ **Client**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.DdQgn | cJ | `this, mr.clS(var10004) /* "Client" */` Ôćĺ .WE(true) | 28 | see 00-framework.md [inferred] |

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

- Implement "No Swing" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eg.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
