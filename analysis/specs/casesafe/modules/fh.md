# Attribute Swap (sixtwo.fh)

- Registry: `sixtwo.fh|Attribute Swap|Automatically performs attribute swap|key=139|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fh.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 139, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~9 native tokens vs ~9 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically performs attribute swap

## Setting names (decrypted)

- `Return Delay` Ôćĺ **Return Delay**
- `Target Slot` Ôćĺ **Target Slot**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.bQVAY | cA | `this, mr.clS(var10004) /* "Return Delay"ÔÇŽ` Ôćĺ .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(NXMEC) | 65 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "Attribute Swap" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fh.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
