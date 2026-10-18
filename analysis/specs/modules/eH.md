# Spear Dash (sixtwo.eH)

- Registry: `sixtwo.eH|Spear Dash|Automatically dashes in given direction with spear|key=149|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eH.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 149, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~34 native tokens vs ~33 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically dashes in given direction with spear

## Setting names (decrypted)

- `Activation Key` → **Activation Key**
- `Change Armor` → **Change Armor**
- `Dash Direction` → **Dash Direction**
- `Direction` → **Direction**
- `Given Direction` → **Given Direction**
- `Movement` → **Movement**
- `Restore Armor` → **Restore Armor**
- `Return Back` → **Return Back**
- `Return Delay` → **Return Delay**
- `Start Flying After Restore` → **Start Flying After Restore**

## Structural findings

### Settings (9 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.esiKf | cD | `this, mr.clS(nArray) /* "Activation Key"…` → .VO((int)-999) | 141 | see 00-framework.md [inferred] |
| this.pzTmJ | ct | `this, mr.clS(nArray2) /* "Dash Direction…` → .SO(0) | 157 | see 00-framework.md [inferred] |
| this.YlpsE | cu | `this.pzTmJ, mr.clS(nArray3) /* "Movement…`  | 167 | see 00-framework.md [inferred] |
| this.MncIp | cu | `this.pzTmJ, mr.clS(nArray4) /* "Directio…`  | 178 | see 00-framework.md [inferred] |
| this.VjgnR | cJ | `this, mr.clS(nArray6) /* "Change Armor" …`  | 209 | see 00-framework.md [inferred] |
| this.rxPTO | cJ | `this, mr.clS(nArray7) /* "Restore Armor"…`  | 224 | see 00-framework.md [inferred] |
| this.LAEkI | cJ | `this, mr.clS(nArray8) /* "Start Flying A…`  | 254 | see 00-framework.md [inferred] |
| this.gCPlB | cJ | `this, mr.clS(nArray9) /* "Return Back" *…` → .WE(true) | 267 | see 00-framework.md [inferred] |
| this.fUesG | cA | `this, mr.clS(nArray10) /* "Return Delay"…` → .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH((String)((Object)" ms")) | 281 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "Spear Dash" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eH.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
