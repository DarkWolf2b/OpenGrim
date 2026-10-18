# Auto Shield Break (sixtwo.fB)

- Registry: `sixtwo.fB|Auto Shield Break|Automatically breaks shield|key=3|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fB.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 3, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~19 native tokens vs ~16 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically breaks shield

## Setting names (decrypted)

- `All Items` Ôćĺ **All Items**
- `Allow Shielding` Ôćĺ **Allow Shielding**
- `Attack Mode` Ôćĺ **Attack Mode**
- `Auto Switch Delay` Ôćĺ **Auto Switch Delay**
- `Cancel On Use` Ôćĺ **Cancel On Use**
- `Cancel Use Mode` Ôćĺ **Cancel Use Mode**
- `Disable Mode` Ôćĺ **Disable Mode**
- `Ignore Friends` Ôćĺ **Ignore Friends**
- `Ignore Walls` Ôćĺ **Ignore Walls**
- `Manual` Ôćĺ **Manual**
- `Return Delay` Ôćĺ **Return Delay**
- `Single` Ôćĺ **Single**
- `Spam CPS` Ôćĺ **Spam CPS**
- `Spoof CPS` Ôćĺ **Spoof CPS**
- `Stun Chance` Ôćĺ **Stun Chance**
- `Switch Mode` Ôćĺ **Switch Mode**

## Structural findings

### Settings (21 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.TUmhB | ct | `this, mr.clS(nArray) /* "Attack Mode" */`  | 86 | see 00-framework.md [inferred] |
| this.snORa | cu | `this.TUmhB, mr.clS(new int[]{(int)65, (iÔÇŽ`  | 87 | see 00-framework.md [inferred] |
| this.zlYES | cu | `this.TUmhB, mr.clS(nArray2) /* "Manual" ÔÇŽ`  | 95 | see 00-framework.md [inferred] |
| this.BRjKS | ct | `this, mr.clS(nArray3) /* "Switch Mode" *ÔÇŽ`  | 108 | see 00-framework.md [inferred] |
| this.RsARQ | cu | `this.BRjKS, mr.clS(new int[]{(int)65, (iÔÇŽ`  | 109 | see 00-framework.md [inferred] |
| this.YEDyf | cu | `this.BRjKS, mr.clS(nArray4) /* "Manual" ÔÇŽ`  | 117 | see 00-framework.md [inferred] |
| this.vOaqN | cA | `this, mr.clS(nArray5) /* "Auto Switch DeÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(10.0).UI(1.0, 2.0).UH((String)((Object)" ticks")) | 136 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.itUea | cA | `this, mr.clS(new int[]{(int)82, (int)97,ÔÇŽ` Ôćĺ .UG(0.1).UE(1.0).UF(6.0).UI(2.5, 3.0).UH((String)((Object)" blocks")) | 137 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.SotCh | ct | `this, mr.clS(nArray6) /* "Disable Mode" ÔÇŽ` Ôćĺ .SO(1) | 151 | see 00-framework.md [inferred] |
| this.xenvw | cu | `this.SotCh, mr.clS(nArray7) /* "Single" ÔÇŽ`  | 159 | see 00-framework.md [inferred] |
| this.QsGiD | cu | `this.SotCh, mr.clS(new int[]{(int)83, (iÔÇŽ`  | 160 | see 00-framework.md [inferred] |
| this.tWbtJ | cu | `this.SotCh, mr.clS(new int[]{(int)83, (iÔÇŽ`  | 161 | see 00-framework.md [inferred] |
| this.ftPwi | cA | `this, mr.clS(nArray9) /* "Spam CPS" */` Ôćĺ .UG(1.0).UE(1.0).UF(20.0).UI(4.0, 6.0).UH((String)((Object)" cps")) | 184 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.HBnKR | cJ | `this, mr.clS(nArray10) /* "Ignore Walls"ÔÇŽ` Ôćĺ .WE(false) | 198 | see 00-framework.md [inferred] |
| this.LDZVd | cJ | `this, mr.clS(nArray11) /* "Spoof CPS" */` Ôćĺ .WE(false) | 209 | see 00-framework.md [inferred] |
| this.bApwx | cA | `this, mr.clS(nArray12) /* "Return Delay"ÔÇŽ` Ôćĺ .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH((String)((Object)" ms")) | 223 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.MeJvD | cJ | `this, mr.clS(nArray13) /* "Ignore FriendÔÇŽ` Ôćĺ .WE(true) | 239 | see 00-framework.md [inferred] |
| this.qRPky | cJ | `this, mr.clS(nArray14) /* "Cancel On UseÔÇŽ` Ôćĺ .WE(false) | 254 | see 00-framework.md [inferred] |
| this.EFLIl | ct | `this, mr.clS(nArray15) /* "Cancel Use MoÔÇŽ`  | 271 | see 00-framework.md [inferred] |
| this.XlqCA | cu | `this.EFLIl, mr.clS(nArray16) /* "All IteÔÇŽ`  | 282 | see 00-framework.md [inferred] |
| this.CeUWS | cu | `this.EFLIl, mr.clS(nArray17) /* "Allow SÔÇŽ`  | 299 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Shield Break" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fB.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
