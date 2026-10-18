# Parkour (sixtwo.eE)

- Registry: `sixtwo.eE|Parkour|Automatically jumps at edges of blocks|key=52|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eE.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 52, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~7 native tokens vs ~7 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically jumps at edges of blocks

## Setting names (decrypted)

- `Edge Distance` Ôćĺ **Edge Distance**
- `Only If W Pressed` Ôćĺ **Only If W Pressed**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.iQpCa | cJ | `this, mr.clS(var10004) /* "Only If W PreÔÇŽ` Ôćĺ .WE(false) | 39 | see 00-framework.md [inferred] |
| this.OTTMg | cA | `this, mr.clS(var10004) /* "Edge DistanceÔÇŽ` Ôćĺ .UG(0.001).UE(0.001).UF(0.1).UI(0.001, 0.001) | 54 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "Parkour" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eE.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
