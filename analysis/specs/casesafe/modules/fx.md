# Auto Totem (sixtwo.fx)

- Registry: `sixtwo.fx|Auto Totem|Manages totem in your off hand|key=31|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fx.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 31, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~29 native tokens vs ~25 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Manages totem in your off hand

## Setting names (decrypted)

- `Auto Open Inventory` Ôćĺ **Auto Open Inventory**
- `Block Input` Ôćĺ **Block Input**
- `Client` Ôćĺ **Client**
- `Close After Swap` Ôćĺ **Close After Swap**
- `Close Delay` Ôćĺ **Close Delay**
- `Health Requirement` Ôćĺ **Health Requirement**
- `Inventory Mode` Ôćĺ **Inventory Mode**
- `Minimal Health %` Ôćĺ **Minimal Health %**
- `Normal` Ôćĺ **Normal**
- `Open Delay` Ôćĺ **Open Delay**
- `Pick Random Totem` Ôćĺ **Pick Random Totem**
- `Return Original Slot` Ôćĺ **Return Original Slot**
- `Silent` Ôćĺ **Silent**
- `Swap Cooldown` Ôćĺ **Swap Cooldown**
- `Take From Hotbar` Ôćĺ **Take From Hotbar**
- `Totem Item` Ôćĺ **Totem Item**

## Structural findings

### Settings (16 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.BYSSp | ct | `this, mr.clS(new int[]{(int)77, (int)111ÔÇŽ` Ôćĺ .SO(1) | 89 | see 00-framework.md [inferred] |
| this.hSKyg | cu | `this.BYSSp, mr.clS(new int[]{(int)76, (iÔÇŽ`  | 90 | see 00-framework.md [inferred] |
| this.dKTMI | cu | `this.BYSSp, mr.clS(nArray2) /* "Normal" ÔÇŽ`  | 98 | see 00-framework.md [inferred] |
| this.XZIWm | ct | `this, mr.clS(nArray3) /* "Inventory ModeÔÇŽ` Ôćĺ .SO(1) | 114 | see 00-framework.md [inferred] |
| this.yvOlX | cu | `this.XZIWm, mr.clS(nArray4) /* "Client" ÔÇŽ`  | 122 | see 00-framework.md [inferred] |
| this.DStJv | cu | `this.XZIWm, mr.clS(nArray5) /* "Silent" ÔÇŽ`  | 130 | see 00-framework.md [inferred] |
| this.cbLje | cJ | `this, mr.clS(nArray6) /* "Auto Open InveÔÇŽ` Ôćĺ .WE(true) | 151 | see 00-framework.md [inferred] |
| this.JVKvm | cJ | `this, mr.clS(nArray7) /* "Take From HotbÔÇŽ` Ôćĺ .WE(false) | 169 | see 00-framework.md [inferred] |
| this.iLysS | cA | `this, mr.clS(nArray8) /* "Swap Cooldown"ÔÇŽ` Ôćĺ .UG(50.0).UE(0.0).UF(5000.0).UI(0.0, 0.0).UH((String)((Object)" ms")) | 184 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.GLCcw | cA | `this, mr.clS(nArray9) /* "Open Delay" */` Ôćĺ .UG(10.0).UE(0.0).UF(1000.0).UI(0.0, 0.0).UH((String)((Object)" ms")) | 196 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.qJwPM | cJ | `this, mr.clS(nArray10) /* "Close After SÔÇŽ` Ôćĺ .WE(true) | 214 | see 00-framework.md [inferred] |
| this.qPSSJ | cA | `this, mr.clS(nArray11) /* "Close Delay" ÔÇŽ` Ôćĺ .UG(10.0).UE(0.0).UF(1000.0).UI(0.0, 0.0).UH((String)((Object)" ms")) | 227 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.ZWKLJ | cJ | `this, mr.clS(nArray12) /* "Return OriginÔÇŽ` Ôćĺ .WE(false) | 249 | see 00-framework.md [inferred] |
| this.CVZbc | cJ | `this, mr.clS(nArray13) /* "Health RequirÔÇŽ` Ôćĺ .WE(true) | 269 | see 00-framework.md [inferred] |
| this.kMhip | cJ | `this, mr.clS(nArray15) /* "Pick Random TÔÇŽ` Ôćĺ .WE(false) | 306 | see 00-framework.md [inferred] |
| this.JVdpl | cJ | `this, mr.clS(nArray16) /* "Block Input" ÔÇŽ` Ôćĺ .WE(true) | 319 | see 00-framework.md [inferred] |

### Event listeners (1 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aRk | `gA var1` | priority=mw.LOWEST | 371 |

### Minecraft API surface (2 refs)

- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.util.List`
- `java.util.Map`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Totem" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fx.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
