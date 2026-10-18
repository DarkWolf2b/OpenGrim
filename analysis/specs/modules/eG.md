# Spear Lunge (sixtwo.eG)

- Registry: `sixtwo.eG|Spear Lunge|Automatically lunges with spear|key=148|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eG.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 148, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~27 native tokens vs ~26 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically lunges with spear

## Setting names (decrypted)

- `Activation Key` → **Activation Key**
- `Change Armor` → **Change Armor**
- `Restore Armor` → **Restore Armor**
- `Return Back` → **Return Back**
- `Return Delay` → **Return Delay**
- `Start Flying After Restore` → **Start Flying After Restore**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.TZAhh | cD | `this, mr.clS(nArray) /* "Activation Key"…` → .VO((int)-999) | 116 | see 00-framework.md [inferred] |
| this.erPcw | cJ | `this, mr.clS(nArray2) /* "Change Armor" …`  | 130 | see 00-framework.md [inferred] |
| this.DvcwW | cJ | `this, mr.clS(nArray3) /* "Restore Armor"…`  | 145 | see 00-framework.md [inferred] |
| this.TMKfZ | cJ | `this, mr.clS(nArray4) /* "Start Flying A…`  | 173 | see 00-framework.md [inferred] |
| this.lQVHc | cJ | `this, mr.clS(nArray5) /* "Return Back" *…` → .WE(true) | 186 | see 00-framework.md [inferred] |
| this.xSSxj | cA | `this, mr.clS(nArray6) /* "Return Delay" …` → .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(SOwbe) | 200 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "Spear Lunge" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eG.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
