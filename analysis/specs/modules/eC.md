# Sprint (sixtwo.eC)

- Registry: `sixtwo.eC|Sprint|Automatically sprints|key=34|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eC.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 34, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~21 native tokens vs ~21 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically sprints

## Setting names (decrypted)

- `Blindness` → **Blindness**
- `Chance` → **Chance**
- `Collision` → **Collision**
- `Ground` → **Ground**
- `Hunger` → **Hunger**
- `Hurt Time` → **Hurt Time**
- `Ignore` → **Ignore**
- `Keep Sprint` → **Keep Sprint**
- `Motion` → **Motion**
- `Motion When Hurt` → **Motion When Hurt**
- `Stop On` → **Stop On**

## Structural findings

### Settings (11 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.DpuAv | cv | `this, mr.clS(var10004) /* "Ignore" */`  | 42 | see 00-framework.md [inferred] |
| this.ZxBxP | cw | `var10003, mr.clS(var10004) /* "Blindness…`  | 54 | see 00-framework.md [inferred] |
| this.vCPTc | cw | `var10003, mr.clS(var10004) /* "Hunger" *…`  | 63 | see 00-framework.md [inferred] |
| this.AublY | cw | `var10003, mr.clS(var10004) /* "Collision…`  | 75 | see 00-framework.md [inferred] |
| this.ldLRq | cv | `this, mr.clS(var10004) /* "Stop On" */`  | 84 | see 00-framework.md [inferred] |
| this.MeYau | cw | `var10003, mr.clS(var10004) /* "Ground" *…`  | 93 | see 00-framework.md [inferred] |
| this.OqeVu | cw | `
         this.ldLRq,
         mr.clS(
 …`  | 94 | see 00-framework.md [inferred] |
| this.AjuCa | cJ | `this, mr.clS(var10004) /* "Keep Sprint" …` → .WE(false) | 112 | see 00-framework.md [inferred] |
| this.paKVr | cA | `this, mr.clS(var10004) /* "Motion" */` → .UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %") | 120 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.KmNkh | cA | `this, mr.clS(var10004) /* "Motion When H…` → .UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %") | 138 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.BgMhY | cA | `this, mr.clS(var10004) /* "Hurt Time" */` → .UG(1.0).UE(1.0).UF(10.0).UI(1.0, 10.0) | 149 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "Sprint" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eC.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
