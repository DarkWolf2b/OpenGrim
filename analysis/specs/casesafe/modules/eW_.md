# Auto Hit Crystal (sixtwo.eW)

- Registry: `sixtwo.eW|Auto Hit Crystal|Automatically pops crystals|key=29|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eW.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 29, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~16 native tokens vs ~16 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically pops crystals

## Setting names (decrypted)

- `Activation Key` Ôćĺ **Activation Key**
- `Cancel On Use` Ôćĺ **Cancel On Use**
- `Double` Ôćĺ **Double**
- `Infinite` Ôćĺ **Infinite**
- `Limit Crystal` Ôćĺ **Limit Crystal**
- `Place Delay` Ôćĺ **Place Delay**
- `Single` Ôćĺ **Single**
- `Spoof CPS` Ôćĺ **Spoof CPS**
- `Switch Back To Slot` Ôćĺ **Switch Back To Slot**
- `Switch Delay` Ôćĺ **Switch Delay**
- `Work With Items` Ôćĺ **Work With Items**

## Structural findings

### Settings (10 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.oYVcq | cA | `this, mr.clS(var10004) /* "Place Delay" ÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(" ticks") | 54 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.mwZKu | cA | `this, mr.clS(var10004) /* "Switch Delay"ÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(" ticks") | 68 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.QUOiu | cJ | `this, mr.clS(var10004) /* "Spoof CPS" */` Ôćĺ .WE(false) | 79 | see 00-framework.md [inferred] |
| this.VBJFM | cD | `this, mr.clS(var10004) /* "Activation KeÔÇŽ` Ôćĺ .VO(1) | 95 | see 00-framework.md [inferred] |
| this.NbNqt | cJ | `this, mr.clS(var10004) /* "Switch Back TÔÇŽ` Ôćĺ .WE(false) | 141 | see 00-framework.md [inferred] |
| this.wjYZb | ct | `this, mr.clS(var10004) /* "Limit CrystalÔÇŽ` Ôćĺ .SO(2) | 156 | see 00-framework.md [inferred] |
| this.IMMQw | cu | `var10003, mr.clS(var10004) /* "Single" *ÔÇŽ`  | 165 | see 00-framework.md [inferred] |
| this.IAuqT | cu | `var10003, mr.clS(var10004) /* "Double" *ÔÇŽ`  | 174 | see 00-framework.md [inferred] |
| this.ABaQX | cu | `var10003, mr.clS(var10004) /* "Infinite"ÔÇŽ`  | 185 | see 00-framework.md [inferred] |
| this.AYUNa | cJ | `this, mr.clS(var10004) /* "Cancel On UseÔÇŽ` Ôćĺ .WE(true) | 200 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Hit Crystal" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eW.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
