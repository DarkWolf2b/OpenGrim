# Batch 08 audit report — audit 2026-10-17

Modules: eN (Mace Swap), fV (Self Destruct), fG (W-Tap), eS (Auto Stun Slam), dU (Auto Fish),
eC (Sprint), ft (Auto GApple), fb (Cart Assist), eK (Auto Web), eG (Spear Lunge).

Method: decompile (payload-decrypted / casesafe payload-decrypted preferred) vs spec (module +
handler) vs impl; settings trees checked for names / step / min / max / default / suffix /
visibility gates / builder order; behavior checked against the recovered surface and the
2026-10-17 runtime trace (`analysis/traces/2026-10-17/digests/`, `by-class-casesafe/`, and the
in-repo master `raw/trace.jsonl` for cross-class calls such as `sixtwo/ol`). All ten sources were
header-verified (Windows case-collision): eN/fG/eC/ft/fb/eG read from
`analysis/decompiled/payload-decrypted/sixtwo/` (declared classes verified); eS/dU/eK from
`analysis/decompiled/casesafe/payload-decrypted/sixtwo/`. Case-twin landmine: the non-casesafe
trees resolve several of this batch's ids to the wrong twin (e.g. `payload-decrypted/sixtwo/dU.java`
is class **du** Tracers, `fB.java` is class **fb**), so only the header-verified files above were
used.

Widget semantics used (verified this pass): `ct` = radio group (`kErPl=0` default; `cu.SY()`
selects a child as default; `cu.SZ()` = selected && enabled, cu.java:42,174-203) · `cv` =
multi-select group (children in `jjOKZ`, selected in `JIvPe` which starts empty; `.Tz()` =
`parent.To(this)` = default-selected, cv.java:24-25,40-126; cw.java:152,157-198) · `cJ` default
**false** (cJ_.java:20) · `cK` item set with `WM` pool + `WN` selection (cK.java:335-399,567-573).

Trace windows (by-class JSONL): eN aBb×2+YO, fV aaj, fG aaj, eS aCT/aCV/YO, dU aaj, eC YO,
ft aQe/aPW/aPX inside YO, fb aHH/aHG inside YO, eK azv×2+ayt→0×2, eG awZ inside YO. Master-trace
context was pulled for eN/eS/fb/ft/eG (ol/oi/mW nesting, below).

---

### eN — Mace Swap
post-fix parity: 80% | status: ported | fixed: yes

fixed:
- **Mode group corrected**: the original is a `ct` radio named "Mode" with three `cu` children
  Breach / Wind Burst / **Smart** (eN.java:32-76; no `.SY()` → default index 0 = Breach). The
  impl's `ModeSetting` had `["breach","wind_burst","windburst_threshold"]`; now
  `["breach","wind_burst","smart"]` default `breach` (MaceSwap.java:63-64).
- **Allowed Items populated**: `cK .WM(jc.WnbNG).WN(12 items)` (eN.java:91-105; jc.WnbNG is the
  wider pool, jc.java:120) was an **empty GroupSetting**; now twelve `BoolSetting`s (six swords +
  six axes, all default true) with the membership test wired to them (MaceSwap.java:65-90,
  196-210; same convention as the sibling SpearReach eF port).
- **Windburst Threshold suffix** `" blocks"` (eN.java:126) — was null; visibility now keyed to
  **Smart** (`PxteY.Vf(this.EifDU::SZ)`, eN.java:142) (MaceSwap.java:91,169).
- **Restore-on-disable added**: trace 2026-10-17 — disable `YO` → `ol.cET()` (raw trace
  t=169329230442); `onDisable` now restores the latched pre-swap slot (MaceSwap.java:103-115).
- **Attack priority**: `aBc` is `@hG(priority = mw.LOW)` (eN.java:165-167) → `@Subscribe(priority
  = -1)` (runs after default-0 listeners; same convention as DoubleTap's HIGH→1 mapping).
- Javadoc rewritten with repo-relative citations + trace facts.

trace evidence: tick `aBb` ran once per tick, body = `ol.cER(Return Delay)` → 0 (nested
`cEX()`→12, `cEW()`→0) — the "swap back due?" poll (raw trace lines 5448025-5448037,
5448517-5448532); `aBc` never fired.

remaining gaps:
- [N] `aBc`/`aBb` native bodies — the breach-swap and wind-burst sequences (handler spec
  "Unrecovered" 1). Capture: attack an entity with a sword/axe + mace in hotbar.
- [U] Whether Smart is a third distinct strategy or "wind burst + threshold" (spec "Unrecovered").
- [U] Which mace/charge slot the native picks when several exist (port: first hotbar slot).

evidence: analysis/decompiled/payload-decrypted/sixtwo/eN.java:29-193 + handlers/eN.md +
by-class-casesafe/eN_.jsonl + raw/trace.jsonl vs modules/combat/MaceSwap.java

### fV — Self Destruct
post-fix parity: 78% | status: ported | fixed: yes

fixed:
- **Post Action corrected**: `ct` radio with `cu` children Delete File / Replace File / Close
  Handles / None (fV.java:68-125; no `.SY()` → default index 0 = **Delete File**) was ported as a
  GroupSetting with four independent bools; now a `ModeSetting` (default `delete_file`)
  (SelfDestruct.java:65-66).
- **Visibility wiring added**: Replace File text iff Replace File selected
  (`gJTkT.Vf(this.mZCNn::SZ)`, fV.java:165); Mod Id text iff Custom Mod Id on
  (`oNtMH.Vf(this.dczoz::WF)`, fV.java:166) — applied in ctor + `onTick` (SelfDestruct.java:75-85).
- **Post Action implemented** on the rebuild's client-state file (`config/opengrim.json`):
  delete / replace-with-path / close-handles no-op / none (SelfDestruct.java:121-140) — labeled
  **high-probability guess** in the javadoc (file scope is unrecovered; fV_.md "Unrecovered" 1).
- Javadoc rewritten (settings lines, `qu` builder pipeline, trace).

trace evidence: only `aaj` (enable, 1.17 s) — enabling **is** the trigger (fV.java:180-181).

remaining gaps:
- [N] `aaj` body — the `qu` request builder/executor and the fW/fY/fZ string+config sweep
  (fV_.md "Token surface"; capture: enable the module and observe the request's file effects).
- [U] File scope of the destruct; [U] `qt` enum ↔ display mapping; [U] `.aZS(false)`/`.aZU(true)`
  metadata flags; [U] whether `qu.cYI()` exits the process.
- [V] `cy` max lengths 2048/32 not expressible on `StringSetting` (flagged in javadoc).

evidence: analysis/decompiled/payload-decrypted/sixtwo/fV.java:26-192 +
casesafe/handlers/fV_.md + by-class-casesafe/fV_.jsonl vs modules/utility/SelfDestruct.java

### fG — W-Tap
post-fix parity: 78% | status: ported | fixed: partial

fixed:
- Settings verified **8/8** (the module-md lists 7 — Tap Delay was omitted): Mode ct
  WTap/STap/SneakTap default WTap; Only On Ground false; Tap Start 5/0-1000/120 " ms"; Tap Stop
  5/1-1000/450 " ms"; Tap Delay 10/0-2500/0 " ms" (fG.java:56-116) — impl matches exactly.
- **STap key-restore bug fixed**: the tap now captures and restores the user's own back-key state
  (`backWasPressed`) instead of force-releasing it (WTap.java:36-37,67-68,105-112).
- Javadoc rewritten (repo-relative citations, 8-setting note, trace, "never guess the timing
  formula" caveat retained).

trace evidence: only `aaj` (enable) — `aTf(hw$tv)`/`aTg(gA)` never fired (no attacks/input in
the tour).

remaining gaps:
- [N] `aTi..aTm` phase bodies (which runnable releases/presses, the deLoo timing math; fG_.md
  "Unrecovered" 1) and `aTh(Z,eD)` — the Fast Bridge bridge (no Java caller; item 4).
- [S] `aTg(gA)` input event has no counterpart on our bus (press/release tracking).
- [U] Key identity per mode (WTap→forward / STap→back / SneakTap→sneak is name inference,
  fG_.md item 2). Capture: attack an entity (aTf), press movement keys (aTg).

evidence: analysis/decompiled/payload-decrypted/sixtwo/fG.java:53-167 +
casesafe/handlers/fG_.md + by-class-casesafe/fG_.jsonl vs modules/combat/WTap.java

### eS — Auto Stun Slam
post-fix parity: 82% | status: ported | fixed: yes

fixed:
- **Trigger corrected**: `ct .SO(0)` "Trigger" with `cu` children **Auto** (index 0, default) and
  On Attack (index 1) (eS_.java:45-68) — was a one-option ModeSetting (`on_attack`), which left
  the default path inert; now `["auto","on_attack"]` default `auto` (AutoStunSlam.java:56-57).
- **Auto path wired**: the tick engages for `auto`; `on_attack` now subscribes
  `AttackEntityEvent` (port of `aCO(gZ$tt)`, eS_.java:187-188) (AutoStunSlam.java:104-157).
- **Chance suffix** is exactly `"%"` (eS_.java:123) — was `" %"`; roll fixed so default 100 =
  always (was ~1% false-negative) (AutoStunSlam.java:59,168).
- **Restore-on-disable added**: trace 2026-10-17 — `YO` → `aCT()` → `ol.cET()` (latched-slot
  restore) then `aCV()` → `mW.crA()` (ticker reset) (raw trace lines 5545666-5545684)
  (AutoStunSlam.java:88-102).
- Unused `GroupSetting` import removed (re-audit correction).

remaining gaps:
- [N] `change_armor` — the native `ol` armor-swap path is not wired (eS_.md "Settings → behavior
  mapping"); [N] `aCQ`/`aCU` predicates, `aCR` executor, `aCS` step; [U] `aCX`/`aCY` probes and
  `UKQaD` phase int; [U] trigger→chance→slam ordering. Capture: stand next to a shielding player
  (aCP) / attack one (aCO).

evidence: analysis/decompiled/casesafe/payload-decrypted/sixtwo/eS_.java:34-207 +
casesafe/handlers/eS_.md + by-class-casesafe/eS_.jsonl + raw/trace.jsonl vs
modules/combat/AutoStunSlam.java

### dU — Auto Fish
post-fix parity: 85% | status: ported | fixed: yes

fixed:
- Settings verified **8/8** against the decrypted ctor — and the handler spec's suffix uncertainty
  (bsm windows 27377/3670/30680, "values not recovered") is **resolved**: Recast/Catch/Throw Delay
  all read `" ticks"` (dU_.java:77,90,103) and Splash Detection `" blocks"` (dU_.java:146). Javadoc
  corrected accordingly.
- **Removed the wrong packet subscription** (`apK(gI)` → any `EntityTrackerUpdateS2CPacket.id()`):
  it tracked arbitrary entity ids and the field was written-never-read; the live bobber is read
  from `player.fishHook`. Documented as the [U] gap instead (AutoFish.java:39-44).
- Removed dead state fields (`casting`/`caught`/`stage`) and the dead-write assignments; javadoc
  records the native state fields (dneZD/kzZLu/nzBUx/DiDCD/TcAon/gipBo) and their unrecovered
  roles.

trace evidence: only `aaj` (enable) in the window — `apL`/`apK`/`apM` untriggered (tick stall;
capture: fish with the module enabled).

remaining gaps:
- [U] `apK(gI)` packet-side bobber-id semantics; [N] splash predicate / reel / recast scheduling
  (`apL` body; `apN..apQ` trampolines); [U] `attackBlock`/`attackEntity` pool role.
- Reconstruction: Y-dip bite detection + delay state machine (kept, documented).

evidence: analysis/decompiled/casesafe/payload-decrypted/sixtwo/dU_.java:38-195 +
casesafe/handlers/dU_.md + by-class-casesafe/dU_.jsonl vs modules/utility/AutoFish.java

### eC — Sprint
post-fix parity: 88% | status: ported | fixed: yes

fixed:
- **Ignore defaults corrected**: Blindness / Hunger / Collision are `cw` children of the `cv`
  "Ignore" group with **no `.Tz()`** (eC.java:42-75) — `cv` is multi-select with an empty selected
  list at construction (cv.java:24-25,40-126), so all three default **off**; the impl had all
  three `true` (only `.Tz()` children default on — same rule as the NoSlow eo port)
  (Sprint.java:57-59).
- Javadoc rewritten: removed stale absolute `<home>/...` citations; added the `cv`/`cw`
  semantics, the shim-pinned core loop (`sideways²+forward² > 1.0E-4F` →
  `setSprinting(true)`, ClientEventBridgeMixin `restoreMovementModules`), the mixin-verified
  Ignore gates (`awe` hunger / `awf` collision / `awg` ownership) and the trace.

trace evidence: only the disable override `YO` ran (no tick listener activity).

remaining gaps:
- [U] Keep Sprint math — forwardSpeed/sidewaysSpeed/`updateVelocity` reconstruction kept
  (eC.md "Unrecovered" 2-3); [U] Ignore→Blindness consumer (`awh`/`awj`) and the awd/awi/awg
  predicate split; [U] packet-layer spoof triggers; [N] `awb(gH$ti)`/`awc(hk)` bodies.
  Capture: run with live ticks while moving.

evidence: analysis/decompiled/payload-decrypted/sixtwo/eC.java:32-211 + handlers/eC.md +
by-class-casesafe/eC_.jsonl vs modules/movement/Sprint.java

### ft — Auto GApple
post-fix parity: 85% | status: ported | fixed: yes

fixed:
- Settings verified 7/7 (Eat Below 0.1/1-100/40 "%"; Eat Until ct with **Reaches Threshold**
  default via `.SY()` on uaqBp, ft.java:90; Eat Threshold 0.1/1-100/60 "%" visible for it; Eat
  Enchanted true; When Player Away false gating Distance Threshold 0.1/1-30/6 no suffix)
  (ft.java:49-177).
- **Use path verified 1:1 with the re-audit correction**: the original presses
  `KeyBinding.useKey` (`setPressed`, ft.md:18) — the impl already does this (not `interactItem`);
  javadoc records it.
- Removed the dead `restored` field (written-never-read — the exact issue the 2026-10-16
  verification flagged) (AutoGApple.java:44-73).
- Javadoc rewritten: disable chain evidence below.

trace evidence: enable = inherited `gg.aaj` (no override); disable `YO` → `aQe()` → `aPW()` →
`aPX()` (raw trace lines 6663452-6664701, nested inside `gg.baa` exit) — the port restores the
original slot in `onDisable` (AutoGApple.java:66-73).

remaining gaps:
- [N] `aPU` main loop + `aPY`/`aPZ` predicates + `aPV` start/stop + `aQf` finder +
  `aPW/aPX/aQc/aQe` steps (ft.md "Unrecovered"); [U] `aPY`/`aPZ` ↔ the two % sliders; [U]
  `aQf` boolean ↔ Eat Enchanted; [U] When-Player-Away player scope. Capture: take damage below
  Eat Below with apples in the hotbar.

evidence: analysis/decompiled/payload-decrypted/sixtwo/ft.java:36-219 + handlers/ft.md +
by-class-casesafe/ft.jsonl + raw/trace.jsonl vs modules/utility/AutoGApple.java

### fb — Cart Assist
post-fix parity: 80% | status: ported | fixed: partial

fixed:
- Settings verified 6/6: Actions `cv` with Place Rail / Place Minecart (`.Tz()` → default on) and
  Place Protect (default off) (fb.java:47-94); Return To `ct` with Bow (`.SY()` → default) / Slot
  (fb.java:105-128); Slot `cC .Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0)` no suffix, visible iff Slot
  (`YCydL.Vf(this.SGmOv::SZ)`, fb.java:148) — impl matches.
- Javadoc rewritten: repo-relative citations, disable chain + the [S] trigger gap.

trace evidence: disable `YO` → `aHH()` → `oi.cDI()` (placement-engine reset) → `aHG()` (state
reset) (raw trace lines 6414203-6414209) — mirrored by `onDisable`.

remaining gaps:
- [S] `aHd(gE)` — the block-break/attack-progress trigger (the only non-tick entry, fb.md
  "Unrecovered" 2) has no counterpart event on our bus.
- [N] `fb$sM`/`fb$sN` plan records + `aHj/aHk/aHl/aHm` (fb.md "Unrecovered" 3); [U] slot fields
  `kXSZU`/`pnzrf`; [U] exact rail/minecart/protect placement geometry (port: crosshair target
  reconstruction). Capture: hold a rail and mine/place.

evidence: analysis/decompiled/payload-decrypted/sixtwo/fb.java:36-246 + handlers/fb.md +
by-class-casesafe/fb.jsonl + raw/trace.jsonl vs modules/world/CartAssist.java

### eK — Auto Web
post-fix parity: 85% | status: ported | fixed: partial

fixed:
- Settings verified 6/6 + superclass: Placement Options `cv .Tm(1)` with Legs/Head (`.Tz()` →
  default on) and Surround / Upper Surround (off) (eK_.java:74-102); Prediction Position
  `cJ .WE(false)` (eK_.java:120 — the module-md name list's "Predict Position" is stale; the ctor
  chars decode to "Prediction Position"); Prediction Ticks `cC .Vy(1.0).Vw(1.0).Vx(6.0).VA(3.0)
  .Vz(EbxJv)` (eK_.java:138) — impl matches, suffix gap below.
- Javadoc rewritten: repo-relative citations; eL base-settings note (encrypted names, not ported —
  same convention as the AutoTrap eJ port); trace facts.

trace evidence: `azv(gv)` ran once per window tick; `ayt()` (shared-window eligibility gate)
returned **0** both times → no placement attempted (by-class-casesafe/eK_.jsonl).

remaining gaps:
- [V] Prediction Ticks suffix `EbxJv` — native-decrypted static, absent from
  `analysis/decrypted/full-dump.jsonl` (eK has 126 int entries, no string); kept null.
- [N] `azv`/`ayB`/`ayx`/`ayy` placement math (ring geometry, tick prediction, `oj` submission);
  [U] `azE`/`azF`/`azG` predicates and `ayu()==true` pin; [U] eL base settings names. Capture:
  stand next to an enemy with cobwebs in the hotbar.

evidence: analysis/decompiled/casesafe/payload-decrypted/sixtwo/eK_.java:36-211 +
payload-named-cfr/sixtwo/eL.java:49-99 + casesafe/handlers/eK_.md + by-class-casesafe/eK_.jsonl
vs modules/world/AutoWeb.java

### eG — Spear Lunge
post-fix parity: 82% | status: ported | fixed: yes

fixed:
- **Spear identity now 1:1**: the recovered gate is the `SPEARS` item tag (field_63257,
  eG.md:21) — impl now uses `stack.isIn(ItemTags.SPEARS)` instead of the ATTACK_RANGE-component
  proxy (SpearLunge.java:140-142).
- **Range gate now 1:1**: candidate within the held spear's effective max range — component
  `comp_5261` with `AttackRangeComponent.defaultForEntity` fallback (method_76734, eG.md:21-27) —
  replaced the fixed 5.0 expansion (SpearLunge.java:144-159).
- **Restore-on-disable added**: trace 2026-10-17 — `YO` → `awZ()` → `ol.cET()` (raw trace lines
  5336539-5336566); `onDisable` restores the latched pre-lunge slot (SpearLunge.java:83-95).
- Settings verified: cJ defaults all **false** (cJ_.java:20 — Change/Restore Armor, Start
  Flying), Return Back true, Return Delay 10/0-1000/50-100 " ms" (native `SOwbe`; kept per the
  eI/eH sibling convention); visibility `restoreArmor iff changeArmor` and `returnDelay iff
  returnBack` wired (eG.java:202-206) (SpearLunge.java:104-106).
- Javadoc rewritten.

trace evidence: `awU`/`awV`/`awW` never fired (no input in the tour); capture: hold a spear with
a target in reach / press the Activation Key.

remaining gaps:
- [N] `awU`/`awV`/`awW` lunge mechanics — LUNGE RegistryKey trigger, motion math, sequence
  (eG.md "Unrecovered" 1); [U] `axk` visibility condition for Start Flying After Restore
  (supplier wired but condition unrecovered; not gated in the port); [U] `yLAeQ/UGYqg/xDsLg`
  roles and `awX` vs `awZ`; [U] `SOwbe` exact string.
- Reconstruction kept: look-direction impulse + Return Back + flight restart.

evidence: analysis/decompiled/payload-decrypted/sixtwo/eG.java:97-226 + handlers/eG.md +
by-class-casesafe/eG_.jsonl + raw/trace.jsonl vs modules/combat/SpearLunge.java

---

## Summary

| id | module | parity before (row) | parity after | status | fixed |
|---|---|---|---|---|---|
| eN | Mace Swap | medium (~70%) | 80% | ported | yes |
| fV | Self Destruct | medium (~70%) | 78% | ported | yes |
| fG | W-Tap | low (~65%) | 78% | ported | partial |
| eS | Auto Stun Slam | low (~60%) | 82% | ported | yes |
| dU | Auto Fish | medium (~75%) | 85% | ported | yes |
| eC | Sprint | (~80%) | 88% | ported | yes |
| ft | Auto GApple | low (~70%) | 85% | ported | yes |
| fb | Cart Assist | low (~70%) | 80% | ported | partial |
| eK | Auto Web | medium (~75%) | 85% | ported | partial |
| eG | Spear Lunge | low (~65%) | 82% | ported | yes |

Changed files (all under `src/main/java/dev/opengrim/modules/`):
`combat/MaceSwap.java`, `utility/SelfDestruct.java`, `combat/WTap.java`, `combat/AutoStunSlam.java`,
`utility/AutoFish.java`, `movement/Sprint.java`, `utility/AutoGApple.java`, `world/CartAssist.java`,
`world/AutoWeb.java`, `combat/SpearLunge.java`.

Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (clean).

Key cross-module trace pins folded in (raw/trace.jsonl): eN `aBb` → `ol.cER`→0 / `YO` → `ol.cET`;
eS `YO` → `aCT`→`ol.cET` + `aCV`→`mW.crA`; fb `YO` → `aHH`→`oi.cDI` + `aHG`; ft `YO` →
`aQe`→`aPW`→`aPX`; eG `YO` → `awZ`→`ol.cET`.
