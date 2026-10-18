# Uncharge Block (sixtwo.fD)

- Registry: `sixtwo.fD|Uncharge Block|Prevents attacking when not passing the threshold|key=19|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fD.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 19, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~7 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Prevents attacking when not passing the threshold

## Setting names (decrypted)

- `All Items` → **All Items**
- `Items To Use` → **Items To Use**
- `Only Weapons` → **Only Weapons**
- `Specified Slots` → **Specified Slots**
- `Threshold` → **Threshold**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.uboIQ | ct | `this, mr.clS(nArray) /* "Items To Use" *…`  | 53 | see 00-framework.md [inferred] |
| this.PtIgv | cu | `this.uboIQ, mr.clS(nArray2) /* "All Item…`  | 64 | see 00-framework.md [inferred] |
| this.VXzzI | cu | `this.uboIQ, mr.clS(nArray3) /* "Only Wea…`  | 78 | see 00-framework.md [inferred] |
| this.aMhGz | cu | `this.uboIQ, mr.clS(nArray4) /* "Specifie…`  | 95 | see 00-framework.md [inferred] |
| this.Fdfgt | cz | `this, mr.clS(new int[]{(int)83, (int)108…`  | 96 | see 00-framework.md [inferred] |
| this.ByUPz | cA | `this, mr.clS(nArray5) /* "Threshold" */` → .UG(0.01).UE(0.25).UF(1.0).UI(0.9, 0.9) | 107 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "Uncharge Block" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fD.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
