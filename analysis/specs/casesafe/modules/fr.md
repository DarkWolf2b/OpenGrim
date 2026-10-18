# Kill Aura (sixtwo.fr)

- Registry: `sixtwo.fr|Kill Aura|Automatically attacks entities|key=5|bind=82` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fr.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 5, active bind 82 (-999 = unbound) [registry]
- Native coverage: ~90 native tokens vs ~89 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically attacks entities

## Setting names (decrypted)

- `Adaptive` Ôćĺ **Adaptive**
- `Aim Mode` Ôćĺ **Aim Mode**
- `Aim Smoothing Mode` Ôćĺ **Aim Smoothing Mode**
- `All Items` Ôćĺ **All Items**
- `Allow Shielding` Ôćĺ **Allow Shielding**
- `Attack Distance` Ôćĺ **Attack Distance**
- `Attack Options` Ôćĺ **Attack Options**
- `Attack Point` Ôćĺ **Attack Point**
- `Best Vector` Ôćĺ **Best Vector**
- `Break Shield` Ôćĺ **Break Shield**
- `Cancel In Screens` Ôćĺ **Cancel In Screens**
- `Cancel On Use` Ôćĺ **Cancel On Use**
- `Cancel Use Mode` Ôćĺ **Cancel Use Mode**
- `Capture Mark` Ôćĺ **Capture Mark**
- `Capture Rounded` Ôćĺ **Capture Rounded**
- `Capture Triangle` Ôćĺ **Capture Triangle**
- `Change View` Ôćĺ **Change View**
- `Cooldown` Ôćĺ **Cooldown**
- `Correction Type` Ôćĺ **Correction Type**
- `Critical Mode` Ôćĺ **Critical Mode**
- `Custom Slots` Ôćĺ **Custom Slots**
- `Dashed Triangle` Ôćĺ **Dashed Triangle**
- `Default` Ôćĺ **Default**
- `Distance` Ôćĺ **Distance**
- `Focused` Ôćĺ **Focused**
- `Health` Ôćĺ **Health**
- `Hit Delay Mode` Ôćĺ **Hit Delay Mode**
- `Ignore Friends` Ôćĺ **Ignore Friends**
- `Ignore In Damage Tick` Ôćĺ **Ignore In Damage Tick**
- `Ignore Naked` Ôćĺ **Ignore Naked**
- `Ignore Walls` Ôćĺ **Ignore Walls**
- `Ignore When Shielding` Ôćĺ **Ignore When Shielding**
- `Item Cooldown` Ôćĺ **Item Cooldown**
- `Items To Use` Ôćĺ **Items To Use**
- `Limit FOV` Ôćĺ **Limit FOV**
- `Locked` Ôćĺ **Locked**
- `Move Correction` Ôćĺ **Move Correction**
- `Nearest Vector` Ôćĺ **Nearest Vector**
- `Normal` Ôćĺ **Normal**
- `Only Crits` Ôćĺ **Only Crits**
- `Prioritize Crits` Ôćĺ **Prioritize Crits**
- `Render Mode` Ôćĺ **Render Mode**
- `Search Distance` Ôćĺ **Search Distance**
- `Silent` Ôćĺ **Silent**
- `Simulate Clicks` Ôćĺ **Simulate Clicks**
- `Sprint Mode` Ôćĺ **Sprint Mode**
- `Switch` Ôćĺ **Switch**
- `Target Mode` Ôćĺ **Target Mode**
- `Target Options` Ôćĺ **Target Options**
- `Target Priority` Ôćĺ **Target Priority**
- `Target Render` Ôćĺ **Target Render**
- `Target Render Color` Ôćĺ **Target Render Color**
- `Targets` Ôćĺ **Targets**
- `Un Press Shield` Ôćĺ **Un Press Shield**
- `Unrestricted` Ôćĺ **Unrestricted**
- `Visualise Rotation` Ôćĺ **Visualise Rotation**
- `Weapon Only` Ôćĺ **Weapon Only**

## Structural findings

### Settings (60 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.XPsdZ | ct | `this, mr.clS(nArray2) /* "Aim Mode" */`  | 160 | see 00-framework.md [inferred] |
| this.gFhjZ | cu | `this.XPsdZ, mr.clS(nArray3) /* "Normal" ÔÇŽ`  | 168 | see 00-framework.md [inferred] |
| this.qAqUI | cu | `this.XPsdZ, mr.clS(new int[]{(int)83, (iÔÇŽ`  | 169 | see 00-framework.md [inferred] |
| this.loPKM | ct | `this, mr.clS(nArray4) /* "Aim Smoothing ÔÇŽ`  | 189 | see 00-framework.md [inferred] |
| this.vnYZx | cu | `this.loPKM, mr.clS(nArray5) /* "UnrestriÔÇŽ`  | 203 | see 00-framework.md [inferred] |
| this.xCupG | cu | `this.loPKM, mr.clS(nArray6) /* "AdaptiveÔÇŽ`  | 213 | see 00-framework.md [inferred] |
| this.zZDPB | ct | `this, mr.clS(nArray7) /* "Sprint Mode" *ÔÇŽ`  | 226 | see 00-framework.md [inferred] |
| this.QnRHK | cu | `this.zZDPB, mr.clS(new int[]{(int)78, (iÔÇŽ`  | 227 | see 00-framework.md [inferred] |
| this.hJKeY | cu | `this.zZDPB, mr.clS(nArray8) /* "Default"ÔÇŽ`  | 236 | see 00-framework.md [inferred] |
| this.esnRH | cJ | `this, mr.clS(nArray9) /* "Move CorrectioÔÇŽ` Ôćĺ .WE(true) | 253 | see 00-framework.md [inferred] |
| this.kOSut | ct | `this, mr.clS(nArray10) /* "Correction TyÔÇŽ` Ôćĺ .SO(1) | 270 | see 00-framework.md [inferred] |
| this.lDjkh | cu | `this.kOSut, mr.clS(nArray11) /* "Silent"ÔÇŽ`  | 278 | see 00-framework.md [inferred] |
| this.vlCiC | cu | `this.kOSut, mr.clS(nArray12) /* "FocusedÔÇŽ`  | 287 | see 00-framework.md [inferred] |
| this.kmSAT | ct | `this, mr.clS(nArray13) /* "Critical ModeÔÇŽ` Ôćĺ .SO(1) | 302 | see 00-framework.md [inferred] |
| this.ZacKI | cu | `this.kmSAT, mr.clS(new int[]{(int)78, (iÔÇŽ`  | 303 | see 00-framework.md [inferred] |
| this.EsIxA | cu | `this.kmSAT, mr.clS(nArray14) /* "PrioritÔÇŽ`  | 321 | see 00-framework.md [inferred] |
| this.znCAf | cu | `this.kmSAT, mr.clS(nArray15) /* "Only CrÔÇŽ`  | 333 | see 00-framework.md [inferred] |
| this.rJhwq | ct | `this, mr.clS(nArray16) /* "Hit Delay ModÔÇŽ`  | 349 | see 00-framework.md [inferred] |
| this.TSzIa | cu | `this.rJhwq, mr.clS(nArray17) /* "Item CoÔÇŽ`  | 364 | see 00-framework.md [inferred] |
| this.nuObX | cu | `this.rJhwq, mr.clS(new int[]{(int)84, (iÔÇŽ`  | 365 | see 00-framework.md [inferred] |
| this.drPlk | cA | `this, mr.clS(nArray18) /* "Cooldown" */` Ôćĺ .UG(0.01).UE(0.0).UF(1.0).UI(0.9, 0.9) | 375 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.TwxgO | cA | `this, mr.clS(new int[]{(int)84, (int)105ÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(1000.0).UI(600.0, 600.0).UH((String)((Object)" ms")) | 376 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.bjunC | cv | `this, mr.clS(nArray19) /* "Attack OptionÔÇŽ`  | 392 | see 00-framework.md [inferred] |
| this.xYDCY | cw | `this.bjunC, mr.clS(nArray20) /* "Break SÔÇŽ`  | 406 | see 00-framework.md [inferred] |
| this.ufARj | cw | `this.bjunC, mr.clS(nArray21) /* "Un PresÔÇŽ`  | 423 | see 00-framework.md [inferred] |
| this.bWNtd | cw | `this.bjunC, mr.clS(nArray22) /* "SimulatÔÇŽ`  | 440 | see 00-framework.md [inferred] |
| this.JmYqQ | cv | `this, mr.clS(nArray23) /* "Target OptionÔÇŽ`  | 456 | see 00-framework.md [inferred] |
| this.aZsiY | cw | `this.JmYqQ, mr.clS(nArray24) /* "Ignore ÔÇŽ`  | 470 | see 00-framework.md [inferred] |
| this.CswPu | cw | `this.JmYqQ, mr.clS(nArray25) /* "Ignore ÔÇŽ`  | 486 | see 00-framework.md [inferred] |
| this.xIZYV | cw | `this.JmYqQ, mr.clS(nArray26) /* "Ignore ÔÇŽ`  | 500 | see 00-framework.md [inferred] |
| this.waYha | cw | `this.JmYqQ, mr.clS(nArray27) /* "Ignore ÔÇŽ`  | 523 | see 00-framework.md [inferred] |
| this.kGRXw | cw | `this.JmYqQ, mr.clS(nArray28) /* "Ignore ÔÇŽ`  | 546 | see 00-framework.md [inferred] |
| this.wDjqt | cF | `this, mr.clS(nArray29) /* "Targets" */` Ôćĺ .VS(jg$tJ.OCdZM) | 555 | see 00-framework.md [inferred] |
| this.nMsgI | ct | `this, mr.clS(nArray30) /* "Items To Use"ÔÇŽ`  | 569 | see 00-framework.md [inferred] |
| this.JAwIX | cu | `this.nMsgI, mr.clS(nArray31) /* "Weapon ÔÇŽ`  | 582 | see 00-framework.md [inferred] |
| this.JWNzq | cu | `this.nMsgI, mr.clS(nArray32) /* "Custom ÔÇŽ`  | 596 | see 00-framework.md [inferred] |
| this.lEEKm | cz | `this, mr.clS(new int[]{(int)83, (int)108ÔÇŽ`  | 597 | see 00-framework.md [inferred] |
| this.AaZvh | cJ | `this, mr.clS(nArray33) /* "Target RenderÔÇŽ` Ôćĺ .WE(false) | 612 | see 00-framework.md [inferred] |
| this.UuMRr | ct | `this, mr.clS(nArray36) /* "Render Mode" ÔÇŽ` Ôćĺ .SO(1) | 648 | see 00-framework.md [inferred] |
| this.NRHKu | cu | `this.UuMRr, mr.clS(nArray37) /* "CaptureÔÇŽ`  | 662 | see 00-framework.md [inferred] |
| this.HTLEq | cu | `this.UuMRr, mr.clS(nArray38) /* "CaptureÔÇŽ`  | 679 | see 00-framework.md [inferred] |
| this.GAmVW | cu | `this.UuMRr, mr.clS(nArray39) /* "CaptureÔÇŽ`  | 697 | see 00-framework.md [inferred] |
| this.CiqUj | cu | `this.UuMRr, mr.clS(nArray40) /* "Dashed ÔÇŽ`  | 714 | see 00-framework.md [inferred] |
| this.RAhFv | ct | `this, mr.clS(nArray42) /* "Target PrioriÔÇŽ`  | 748 | see 00-framework.md [inferred] |
| this.bqKDj | cu | `this.RAhFv, mr.clS(nArray43) /* "DistancÔÇŽ`  | 758 | see 00-framework.md [inferred] |
| this.AotRw | cu | `this.RAhFv, mr.clS(nArray44) /* "Health"ÔÇŽ`  | 766 | see 00-framework.md [inferred] |
| this.WEzOU | ct | `this, mr.clS(nArray45) /* "Attack Point"ÔÇŽ`  | 780 | see 00-framework.md [inferred] |
| this.zgYYt | cu | `this.WEzOU, mr.clS(nArray46) /* "Best VeÔÇŽ`  | 793 | see 00-framework.md [inferred] |
| this.FWguf | cu | `this.WEzOU, mr.clS(nArray47) /* "NearestÔÇŽ`  | 809 | see 00-framework.md [inferred] |
| this.Zywer | cJ | `this, mr.clS(nArray48) /* "Cancel In ScrÔÇŽ` Ôćĺ .WE(false) | 828 | see 00-framework.md [inferred] |
| this.vdmvy | cJ | `this, mr.clS(nArray49) /* "Cancel On UseÔÇŽ` Ôćĺ .WE(false) | 843 | see 00-framework.md [inferred] |
| this.dlzgV | ct | `this, mr.clS(nArray50) /* "Cancel Use MoÔÇŽ`  | 860 | see 00-framework.md [inferred] |
| this.MYpIA | cu | `this.dlzgV, mr.clS(nArray51) /* "All IteÔÇŽ`  | 871 | see 00-framework.md [inferred] |
| this.jtUDD | cu | `this.dlzgV, mr.clS(nArray52) /* "Allow SÔÇŽ`  | 888 | see 00-framework.md [inferred] |
| this.pboNi | cJ | `this, mr.clS(nArray53) /* "Change View" ÔÇŽ` Ôćĺ .WE(false) | 901 | see 00-framework.md [inferred] |
| this.vUmBx | ct | `this, mr.clS(nArray54) /* "Target Mode" ÔÇŽ` Ôćĺ .SO(1) | 914 | see 00-framework.md [inferred] |
| this.tKSmQ | cu | `this.vUmBx, mr.clS(nArray55) /* "Switch"ÔÇŽ`  | 922 | see 00-framework.md [inferred] |
| this.TRsxw | cu | `this.vUmBx, mr.clS(nArray56) /* "Locked"ÔÇŽ`  | 930 | see 00-framework.md [inferred] |
| this.KNaqi | cJ | `this, mr.clS(nArray57) /* "Visualise RotÔÇŽ` Ôćĺ .WE(true) | 950 | see 00-framework.md [inferred] |
| this.ePFjw | cJ | `this, mr.clS(nArray58) /* "Limit FOV" */` Ôćĺ .WE(false) | 961 | see 00-framework.md [inferred] |

### Event listeners (1 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aNs | `gH.th var1` | priority=mw.HIGH | 1203 |

### Minecraft API surface (1 refs)

- `net.minecraft.entity.LivingEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.LivingEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Kill Aura" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fr.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.

## Native handler findings

Source: `../../../analysis/ghidra/handlers/sixtwo_fr.c` (89 handler stubs, j2cc native bodies). The
bodies are interpreter-obfuscated (XOR-mixed constants feeding `func_0xÔÇŽ` dispatches), so
behavioral recovery came from method signatures, the decompiled Java fragments, and the
decrypted setting builder chains ÔÇö not from reading the raw C.

### Handlers examined
- `aNr (Lsixtwo/gv;)V` ÔÇö tick entry point; body reduces to `halt_baddata()` (dispatcher).
- `aNu ()Lnet/minecraft/class_1309;` ÔÇö target selection; decompiles only to an indirect
  jump-table stub (signature confirms it returns the chosen `LivingEntity`).
- `aNv (Lnet/minecraft/class_1309;)V` ÔÇö attack executor (target only): ~6.5k obfuscated
  lines of constant-mixing VM code; no readable math survived.
- `aNw (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V` ÔÇö attack with rotation/aim
  context (`ov`) and a crit/placement context (`qL`); body also dispatcher-only.
- `aNx/aNy ()F` ÔÇö float accessors (rotation state), dispatcher stubs.
- `aNs (Lsixtwo/gH$th;)V` HIGH priority ÔÇö render handler (target box capture styles).
- `aNt (Lsixtwo/go$sX;)V` ÔÇö secondary event handler.
- `aNB ()Z` ÔÇö **fully decompiled in the Java source**: the aura self-suspends while
  module `dI` has state (`amm() != null`), while `eK` is enabled, while `eJ` (Auto Trap)
  is enabled, while `fl.bag()`/`fl.aJQ()`, or while `rD.dlZ().dbt()`.

### What the decrypted settings reveal (cross-checked with builder chains)
- Two-radius design: `Search Distance` (step 0.1, min 2.5, max 50.0, default 6.0) scopes
  targeting; `Attack Distance` (step 0.01, min 2.5, max 5.0, default 3.0) gates the hit.
- `Hit Delay Mode` = `Item Cooldown` | `Timer`; `Cooldown` (step 0.01, 0.0ÔÇô1.0, default
  0.9) is the attack-cooldown-progress threshold; `Timer` (step 1, 0ÔÇô1000, default
  600 ms) is a fixed inter-attack delay.
- `Target Mode` = `Switch` | `Locked` (`.SO(1)` Ôçĺ default index 1 = Locked); `Target
  Priority` = `Distance` | `Health` (default Distance).
- `Critical Mode` = `None` | `Prioritize Crits` | `Only Crits` (default index 1).
- `Attack Point` = `Best Vector` | `Nearest Vector` (`.SY()` default marker on
  `FWguf` Ôçĺ default Nearest Vector).
- `Limit FOV` bool + `FOV` (step 1, 10ÔÇô360, default 180 deg) gate candidate angles.
- `Target Options`: Ignore Walls / Ignore Friends / Ignore Naked / Ignore In Damage Tick /
  Ignore When Shielding.
- Mode options with a single `.SY()` child carry the default selection; `.SO(1)` on a `ct`
  group selects option index 1. (Consistent across fr and fH.)

### Upgraded in rebuild (`modules/combat/KillAura.java`)
- Split single `range`/`require_full_charge` into the two-radius search/attack design
  with the exact decrypted ranges/defaults.
- Replaced full-charge toggle with `hit_delay_mode` (`item_cooldown` threshold 0.9 /
  `timer` 600 ms), matching the native hit-delay model.
- Added target priority (distance/health), target mode (switch/locked), FOV limiting
  (10ÔÇô360 deg, default 180), and the five target-option filters (friends via shared
  FriendsManager, naked, walls, damage tick via `hurtTime`, shielding via `isBlocking`).
- Added `critical_mode` gating (crit window = airborne + falling); `prioritize_crits`
  never hard-locks on ground.
- Ported the decompiled `aNB` flow: the aura pauses while the (ported) Auto Trap module
  is enabled.
- Not ported (render-only, native-blocked): target render capture styles, rotation
  visualisation, simulate-clicks/sprint/aim-smoothing mechanics.
