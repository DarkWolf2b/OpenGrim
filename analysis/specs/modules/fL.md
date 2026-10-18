# Auto Tool (sixtwo.fL)

- Registry: `sixtwo.fL|Auto Tool|Automatically swaps to best tool when mining|key=22|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fL.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 22, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~13 native tokens vs ~13 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically swaps to best tool when mining

## Setting names (decrypted)

- `Cooldown` → **Cooldown**
- `Return Back` → **Return Back**
- `Return Delay` → **Return Delay**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.CFGfw | cA | `this, mr.clS(var10004) /* "Cooldown" */` → .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms") | 40 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.ryfBX | cJ | `this, mr.clS(var10004) /* "Return Back" …` → .WE(false) | 53 | see 00-framework.md [inferred] |
| this.Hykwk | cA | `this, mr.clS(var10004) /* "Return Delay"…` → .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms") | 67 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.block.BlockState`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.block.BlockState`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Tool" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fL.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
