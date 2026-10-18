# W-Tap (sixtwo.fG)

- Registry: `sixtwo.fG|W-Tap|Automatically performs W-Tap|key=13|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fG.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 13, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~19 native tokens vs ~13 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically performs W-Tap

## Setting names (decrypted)

- `Only On Ground` Ôćĺ **Only On Ground**
- `SneakTap` Ôćĺ **SneakTap**
- `Tap Delay` Ôćĺ **Tap Delay**
- `Tap Start` Ôćĺ **Tap Start**
- `Tap Stop` Ôćĺ **Tap Stop**

## Structural findings

### Settings (7 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.xHSEs | ct | `this, mr.clS(new int[]{(int)77, (int)111ÔÇŽ`  | 56 | see 00-framework.md [inferred] |
| this.rLoJa | cu | `this.xHSEs, mr.clS(new int[]{(int)87, (iÔÇŽ`  | 57 | see 00-framework.md [inferred] |
| this.qPyIG | cu | `this.xHSEs, mr.clS(new int[]{(int)83, (iÔÇŽ`  | 58 | see 00-framework.md [inferred] |
| this.WOHue | cu | `this.xHSEs, mr.clS(nArray) /* "SneakTap"ÔÇŽ`  | 68 | see 00-framework.md [inferred] |
| this.XOUKT | cJ | `this, mr.clS(nArray2) /* "Only On GroundÔÇŽ` Ôćĺ .WE(false) | 84 | see 00-framework.md [inferred] |
| this.XUvTV | cA | `this, mr.clS(nArray3) /* "Tap Start" */` Ôćĺ .UG(5.0).UE(0.0).UF(1000.0).UI(120.0, 120.0).UH((String)((Object)" ms")) | 95 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.PWSXA | cA | `this, mr.clS(nArray4) /* "Tap Stop" */` Ôćĺ .UG(5.0).UE(1.0).UF(1000.0).UI(450.0, 450.0).UH((String)((Object)" ms")) | 105 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "W-Tap" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fG.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
