# Auto Crystal (sixtwo.eV)

- Registry: `sixtwo.eV|Auto Crystal|Automatically places and breaks crystals|key=28|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eV.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 28, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~39 native tokens vs ~34 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically places and breaks crystals

## Setting names (decrypted)

- `Activate On Key` Ôćĺ **Activate On Key**
- `Activation Key` Ôćĺ **Activation Key**
- `Break Delay` Ôćĺ **Break Delay**
- `Damage Tick` Ôćĺ **Damage Tick**
- `No Bounce` Ôćĺ **No Bounce**
- `No Count Glitch` Ôćĺ **No Count Glitch**
- `Place Delay` Ôćĺ **Place Delay**
- `Predict Id` Ôćĺ **Predict Id**
- `Spoof CPS` Ôćĺ **Spoof CPS**
- `Stop Time` Ôćĺ **Stop Time**
- `Stop on Kill` Ôćĺ **Stop on Kill**

## Structural findings

### Settings (10 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.NdPsx | cJ | `this, mr.clS(nArray) /* "Activate On KeyÔÇŽ` Ôćĺ .WE(false) | 84 | see 00-framework.md [inferred] |
| this.EbZHv | cD | `this, mr.clS(nArray2) /* "Activation KeyÔÇŽ` Ôćĺ .VO((int)-999) | 103 | see 00-framework.md [inferred] |
| this.UVCdF | cJ | `this, mr.clS(nArray3) /* "Spoof CPS" */` Ôćĺ .WE(false) | 114 | see 00-framework.md [inferred] |
| this.nAtgG | cA | `this, mr.clS(nArray4) /* "Place Delay" *ÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH((String)((Object)" ticks")) | 127 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.SYXBX | cA | `this, mr.clS(nArray5) /* "Break Delay" *ÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH((String)((Object)" ticks")) | 140 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.LtwQn | cJ | `this, mr.clS(nArray6) /* "No Count GlitcÔÇŽ` Ôćĺ .WE(false) | 157 | see 00-framework.md [inferred] |
| this.APBzk | cJ | `this, mr.clS(nArray7) /* "No Bounce" */` Ôćĺ .WE(false) | 168 | see 00-framework.md [inferred] |
| this.IXgwi | cJ | `this, mr.clS(nArray8) /* "Stop on Kill" ÔÇŽ` Ôćĺ .WE(false) | 182 | see 00-framework.md [inferred] |
| this.XtwRQ | cJ | `this, mr.clS(nArray10) /* "Damage Tick" ÔÇŽ` Ôćĺ .WE(false) | 206 | see 00-framework.md [inferred] |
| this.iexlJ | cJ | `this, mr.clS(nArray11) /* "Predict Id" *ÔÇŽ` Ôćĺ .WE(false) | 218 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.world.dimension.DimensionType`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.world.dimension.DimensionType`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Crystal" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eV.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
