# Trigger Bot (sixtwo.fF)

- Registry: `sixtwo.fF|Trigger Bot|Automatically hits entity when in range|key=1|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fF.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 1, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~14 native tokens vs ~11 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically hits entity when in range

## Setting names (decrypted)

- `All Items` Ôćĺ **All Items**
- `Allow Shielding` Ôćĺ **Allow Shielding**
- `Attack Options` Ôćĺ **Attack Options**
- `Cancel In Screens` Ôćĺ **Cancel In Screens**
- `Cancel On Use` Ôćĺ **Cancel On Use**
- `Cancel Use Mode` Ôćĺ **Cancel Use Mode**
- `Cooldown` Ôćĺ **Cooldown**
- `Critical Mode` Ôćĺ **Critical Mode**
- `Custom Slots` Ôćĺ **Custom Slots**
- `Hit Delay Mode` Ôćĺ **Hit Delay Mode**
- `Hold Key` Ôćĺ **Hold Key**
- `Ignore Friends` Ôćĺ **Ignore Friends**
- `Ignore In Damage Tick` Ôćĺ **Ignore In Damage Tick**
- `Ignore Naked` Ôćĺ **Ignore Naked**
- `Ignore Walls` Ôćĺ **Ignore Walls**
- `Ignore When Shielding` Ôćĺ **Ignore When Shielding**
- `Item Cooldown` Ôćĺ **Item Cooldown**
- `Items To Use` Ôćĺ **Items To Use**
- `Only Crits` Ôćĺ **Only Crits**
- `Prioritize Crits` Ôćĺ **Prioritize Crits**
- `Simulate Clicks` Ôćĺ **Simulate Clicks**
- `Target` Ôćĺ **Target**
- `Target Options` Ôćĺ **Target Options**
- `Un Press Shield` Ôćĺ **Un Press Shield**
- `Upper Cut` Ôćĺ **Upper Cut**
- `Weapon Only` Ôćĺ **Weapon Only**
- `When Holding` Ôćĺ **When Holding**

## Structural findings

### Settings (32 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.cdAZQ | cF | `this, mr.clS(nArray) /* "Target" */` Ôćĺ .VS(jg$tJ.OCdZM) | 84 | see 00-framework.md [inferred] |
| this.Nlyhu | ct | `this, mr.clS(nArray2) /* "Items To Use" ÔÇŽ`  | 98 | see 00-framework.md [inferred] |
| this.ArEzX | cu | `this.Nlyhu, mr.clS(nArray3) /* "Weapon OÔÇŽ`  | 111 | see 00-framework.md [inferred] |
| this.SYWdC | cu | `this.Nlyhu, mr.clS(nArray4) /* "Custom SÔÇŽ`  | 125 | see 00-framework.md [inferred] |
| this.QcPEg | cz | `this, mr.clS(new int[]{(int)83, (int)108ÔÇŽ`  | 126 | see 00-framework.md [inferred] |
| this.VtwAF | ct | `this, mr.clS(nArray5) /* "Hit Delay ModeÔÇŽ`  | 142 | see 00-framework.md [inferred] |
| this.gLvlK | cu | `this.VtwAF, mr.clS(nArray6) /* "Item CooÔÇŽ`  | 157 | see 00-framework.md [inferred] |
| this.hMopD | cu | `this.VtwAF, mr.clS(new int[]{(int)84, (iÔÇŽ`  | 158 | see 00-framework.md [inferred] |
| this.rIJAy | cA | `this, mr.clS(nArray7) /* "Cooldown" */` Ôćĺ .UG(0.01).UE(0.0).UF(1.0).UI(0.9, 0.9) | 168 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.eImKU | cA | `this, mr.clS(new int[]{(int)84, (int)105ÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(1000.0).UI(600.0, 600.0).UH((String)((Object)" ms")) | 169 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.xUGku | cv | `this, mr.clS(nArray8) /* "Attack OptionsÔÇŽ`  | 185 | see 00-framework.md [inferred] |
| this.JEhiJ | cw | `this.xUGku, mr.clS(nArray9) /* "Un PressÔÇŽ`  | 202 | see 00-framework.md [inferred] |
| this.jwWNp | cw | `this.xUGku, mr.clS(nArray10) /* "SimulatÔÇŽ`  | 219 | see 00-framework.md [inferred] |
| this.xkdUO | cv | `this, mr.clS(nArray11) /* "Target OptionÔÇŽ`  | 235 | see 00-framework.md [inferred] |
| this.pPuZs | cw | `this.xkdUO, mr.clS(nArray12) /* "Ignore ÔÇŽ`  | 249 | see 00-framework.md [inferred] |
| this.dsIVg | cw | `this.xkdUO, mr.clS(nArray13) /* "Ignore ÔÇŽ`  | 265 | see 00-framework.md [inferred] |
| this.dsyYm | cw | `this.xkdUO, mr.clS(nArray14) /* "Ignore ÔÇŽ`  | 279 | see 00-framework.md [inferred] |
| this.kiwwU | cw | `this.xkdUO, mr.clS(nArray15) /* "Ignore ÔÇŽ`  | 302 | see 00-framework.md [inferred] |
| this.RObGI | cw | `this.xkdUO, mr.clS(nArray16) /* "Ignore ÔÇŽ`  | 325 | see 00-framework.md [inferred] |
| this.hdxUq | ct | `this, mr.clS(nArray17) /* "Critical ModeÔÇŽ`  | 340 | see 00-framework.md [inferred] |
| this.oMwcs | cu | `this.hdxUq, mr.clS(new int[]{(int)78, (iÔÇŽ`  | 341 | see 00-framework.md [inferred] |
| this.oTXIW | cu | `this.hdxUq, mr.clS(nArray18) /* "PrioritÔÇŽ`  | 359 | see 00-framework.md [inferred] |
| this.AtBDT | cu | `this.hdxUq, mr.clS(nArray19) /* "Only CrÔÇŽ`  | 371 | see 00-framework.md [inferred] |
| this.VImHE | cJ | `this, mr.clS(nArray20) /* "Cancel In ScrÔÇŽ` Ôćĺ .WE(false) | 390 | see 00-framework.md [inferred] |
| this.gBIsx | cJ | `this, mr.clS(nArray21) /* "Cancel On UseÔÇŽ` Ôćĺ .WE(false) | 405 | see 00-framework.md [inferred] |
| this.LQzFK | ct | `this, mr.clS(nArray22) /* "Cancel Use MoÔÇŽ`  | 422 | see 00-framework.md [inferred] |
| this.Dkoqc | cu | `this.LQzFK, mr.clS(nArray23) /* "All IteÔÇŽ`  | 433 | see 00-framework.md [inferred] |
| this.owwxU | cu | `this.LQzFK, mr.clS(nArray24) /* "Allow SÔÇŽ`  | 450 | see 00-framework.md [inferred] |
| this.VvKfB | cA | `this, mr.clS(new int[]{(int)82, (int)97,ÔÇŽ` Ôćĺ .UG(0.01).UE(1.5).UF(6.0).UI(3.0, 3.0).UH((String)((Object)" blocks")) | 451 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.HWaak | cJ | `this, mr.clS(nArray25) /* "When Holding"ÔÇŽ` Ôćĺ .WE(false) | 465 | see 00-framework.md [inferred] |
| this.MftPL | cD | `this, mr.clS(nArray26) /* "Hold Key" */` Ôćĺ .VO(mA.sCBUa.cmO()) | 475 | see 00-framework.md [inferred] |
| this.sXFbg | cJ | `this, mr.clS(nArray27) /* "Upper Cut" */` Ôćĺ .WE(false) | 486 | see 00-framework.md [inferred] |

### Event listeners (1 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aST | `gH.th var1` | priority=mw.HIGH | 508 |

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.util.Map`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Trigger Bot" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fF.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
