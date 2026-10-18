# Batch 06 audit report - audit 2026-10-17

Modules: fg (Target Lock), fc (Cart Refill), eD (Fast Bridge), eT (Shield Drain),
dR (Click Action), fm (Pearl Chaser), fM (Auto MLG), fa (Auto X-Bow),
fj (Projectile Aim Bot), fT (Resource Pack Bypass). All ten are j2cc-native
classes; every behavior body lives in the obfuscation VM. Parity is scored
against the **recovered surface** = registry rows + decompiled
constructors/settings/listener declarations + handler-spec pool-token runs.

## Evidence base and registry verification

- Registry rows (`analysis/specs/registry.tsv`, all bind=-999): fg id 136,
  fc 165, eD 50, eT 156, dR 60, fm 145, fM 21, fa 164, fj 111, fT 78 - every
  id matches the decompiled `super(gf.aZL(id, bool, gh.X))` first argument.
  The port's `Module` bind default -999 is correct for all ten.
- Boot flags: nine modules register `false`; **fT registers `true`**
  (casesafe fT_.java:26) and must override `bootEnabled()` (fQ/fO precedent,
  OpenGrimClient.java:21).
- gh categories (verified from the decompiled constructors): fg/eT/fa/fj/fc/fm/fM
  = `gh.xwjCw` (Combat), eD = `gh.xgeEn` (Movement), dR = `gh.qBzlZ`
  (Misc), fT = `gh.KfAlY` (Client). The port's function-based `ModuleCategory`
  differs for fc (WORLD), fm (MOVEMENT), fM (WORLD), dR/fT UTILITY - the
  established repo-wide pattern (batch-03 category note; AutoGApple/AutoWeb/
  AutoTrap do the same); left unchanged.
- Trace: `analysis/traces/2026-10-17/` per-class JSONL + digests + the
  merged-timeline findings in `trace-recheck-movement-b-render.md`. Only eD,
  dR, fM, fa, fj, fT, fg produced runtime events; fc/eT/fm logged class-load
  only (never enabled in the tour).

## Case-twin landmine (fixed in this pass)

The Windows-collapsed `payload-decrypted/sixtwo/<id>.java` and
`payload-named-cfr/sixtwo/<id>.java` trees declare the *uppercase* twin for
eight of these ids (fg->fG, fc->fC, eT->et, dR->dr, eD->ed, fm->fM, fa->fA,
fT->ft; fM and fj are correct). The same collapse hit the spec files:

1. `analysis/specs/handlers/eT.md` = sixtwo.et Anti Web; `handlers/fM.md` =
   sixtwo.fm Pearl Chaser; `handlers/fa.md` = sixtwo.fA Potion Refill;
   `handlers/fT.md` = sixtwo.ft Auto GApple. Correct: `casesafe/handlers/
   {eT_,fM_,fa,fT_}.md` (verified headers). Same for `modules/fT.md` and
   `modules/fa.md`/`modules/fM.md`/`modules/eT.md`.
2. Impl javadocs of ShieldDrain, AutoMlg, AutoXBow, ResourcePackBypass cited
   those wrong files, and TargetLock/CartRefill/PearlChaser/AutoXBow/
   ResourcePackBypass cited the collapsed decompile paths. All corrected to
   `analysis/decompiled/casesafe/...`.

---

### fg - Target Lock
post-fix parity: 60% | status: partial | fixed: yes
fixed:
- Source citation corrected to the case-safe file
  (casesafe/payload-named-cfr/sixtwo/fg.java:26-79; the plain path is the fG
  W-Tap twin). Settings verified exact: Lock Keybind `cD .VO(-999)`
  (fg.java:42), Select Range `cC .Vy(0.1).Vw(3.0).Vx(10.0).VA(5.0).Vz(" blocks")`
  = step 0.1 / min 3.0 / max 10.0 / default 5.0 / " blocks" (fg.java:56),
  Select Through Walls `cJ .WE(false)` (fg.java:78); declaration order matches.
- Added trace note: the aIV/aIW static int[] broadcast is polled 275x by
  unrelated VM bodies and is obfuscation tripwire plumbing, not behavior
  (trace-recheck-movement-b-render.md:30); aIS (gA input) never fired.
- Added labeled guess list (lock toggle, nearest-target selection, release
  conditions, aIT predicate set).
remaining gaps:
- [N] `aIS(gA)` input selection, `aIT(Entity)` predicate, `aIU()` getter body,
  `aIV/aIW` element layout (handlers/fg.md "Unrecovered" #1-4). Capture
  condition: bind Lock Keybind and press it with players in range.
evidence: casesafe fg.java:26-79 vs TargetLock.java:31-104; trace 2026-10-17
fg.jsonl (aIW 275x, r empty)

### fc - Cart Refill
post-fix parity: 68% | status: partial | fixed: yes
fixed:
- **Delay default corrected 50.0 -> 0.0**: the cA chain is
  `.UG(5.0).UE(0.0).UF(1000.0).UI(0.0, 50.0)` (casesafe fc.java:37-41) and the
  repo convention takes the first UI-pair value as default (AutoStunSlam/
  AutoShieldBreak/AutoPearlCatch; PARITY.md row "default 0 = first UI-pair
  value"). Suffix set to " ms" (high-probability guess, labeled: XcqMh is
  native-decrypted/unrecovered, fc.java:41; the mT timer it gates is ms-based
  and sibling Return Delay chains decrypt " ms").
- Citations corrected to casesafe paths (payload-decrypted and
  payload-named-cfr both were fC Velocity); Hover/Randomize Slots/Slots group
  verified (9 toggles mirror `cz .Uw({0..8})`, fc.java:90-100).
- Added trace note + labeled guesses (single swap per tick vs per-slot loop,
  Hover = "container screen open", SWAP click path, omitted fa String[3]
  buffer - fc.java:55,105-109).
remaining gaps:
- [U] Hover semantics, per-slot loop shape, fa shared-buffer contract
  (handlers/fc.md "Unrecovered" #1-4). [N] aHO body. Capture condition: enable
  with TNT minecarts in the inventory and a depleted selected hotbar slot.
evidence: casesafe fc.java:22-110 vs CartRefill.java:33-131; trace: fc.jsonl
load only

### eD - Fast Bridge
post-fix parity: 75% | status: partial | fixed: partial
fixed:
- Settings verified exact: three `cJ .WE(false)` toggles
  (casesafe eD_.java:49,77,105), declaration order matches FastBridge.java:34-36.
- Added trace note: awt ran 3x and awu ran **2x per tick** (eD_.jsonl) - the
  helper is invoked twice inside the tick body (role unrecovered), so this
  port's single release-path call is documented as a stand-in; labeled the
  guessed geometry/gates (edge-test offsets, native sneak patch replaced by
  options.sneakKey + PlayerInput, skip-while-sneaking guard, second
  isReplaceable check).
remaining gaps:
- [N] `awt`/`awu` bodies (handlers/eD_.md "Unrecovered" #1-3); the eD vs eE
  shared-region attribution for the collision machinery (#4). Capture
  condition: stand at a block edge, log awt/awu counts + sneak key state.
evidence: casesafe eD_.java:22-106 vs FastBridge.java:33-143; trace
2026-10-17 eD_.jsonl

### eT - Shield Drain
post-fix parity: 66% | status: partial | fixed: partial
fixed:
- **Wrong-twin citations corrected** (impl cited handlers/eT.md = Anti Web):
  now casesafe/payload-named-cfr/sixtwo/eT_.java:23-92 + casesafe/handlers/eT_.md.
- Min Fall Distance suffix set to " blocks" (high-probability guess, labeled:
  QSxPs native-decrypted; the sibling eS "Min Fall Distance" with the identical
  `.Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5)` chain is decrypted " blocks", eS_.md).
- Click Mode default "vanilla" labeled as a high-probability guess (no `.SY()`
  marker in the shell, eT_.java:66-76); Hit Per Tick visibility wiring verified
  (`YtRvz.Vf(mRyFn::SZ)`, eT_.java:91); 4.0 search radius and
  player.fallDistance comparator labeled as guesses.
- Verified public predicate `aDw(PlayerEntity)` is preserved as
  `engages(PlayerEntity)` (eP cross-reference; no in-port consumer).
remaining gaps:
- [N] `aDu` tick drain loop, `aDv/aDw` predicate bodies, the plan/attack-point
  suite calls (oW/pe/qP/qL) and the `stopGliding` role (handlers/eT_.md
  "Blockers"). [U] default Click Mode selection. Capture condition: enable next
  to a shielding player and log the aDu/aDw decisions.
evidence: casesafe eT_.java:23-92 vs ShieldDrain.java:29-80; trace: eT_.jsonl
load only

### dR - Click Action
post-fix parity: 76% | status: ported | fixed: yes
fixed:
- **Settings tree made 1:1**: the original has ONE Return Delay widget
  (`cA .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(gcmeH)`, casesafe
  dR_.java:86); the port exposed two (`return_delay` + `return_delay_max`).
  Collapsed to one setting (default 50.0 = first UI-pair value, suffix " ms" -
  labeled high-probability guess, gcmeH unrecovered, sibling chains decrypt
  " ms"); the pair's second value 100.0 is kept as the sampled upper bound
  constant `RETURN_DELAY_ANCHOR`.
- Constructor citation corrected (dR_.java:33-90; previous 37-61 was the
  collapsed twin range) and the state-machine/use-path guesses labeled
  (handlers/dR_.md "Unrecovered").
- Keys verified: Pearl/Firework/Potion `cD .VO(-999)` (dR_.java:46,60,72);
  item constants ENDER_PEARL/FIREWORK_ROCKET/SPLASH_POTION (field_8634/8639/8436);
  off-hand-first search, cooldown gate, useKey setPressed shape.
remaining gaps:
- [N] `apk`/`apj`/`app`/`apq`/`apr` bodies; [U] per-item predicate assignment
  and the enum phase meanings. Capture condition: bind a key and press it while
  holding the matching item; log the apk sequence + app/apq calls.
evidence: casesafe dR_.java:33-90 vs ClickAction.java:35-249; trace
2026-10-17 dR_.jsonl (apk 3x, YO->aps 1x)

### fm - Pearl Chaser
post-fix parity: 55% | status: partial | fixed: partial
fixed:
- Source citations corrected to case-safe paths (plain fm.java = fM Auto MLG);
  settings verified exact: Minimal Health To Throw `cC .Vy(0.1).Vw(2.0).Vx(20.0).VA(5.0)`
  (casesafe fm.java:64) and Ignore Friends `cJ .WE(true)` (fm.java:80).
- Javadoc reworded: the trajectory sim/aim/throw path is a labeled stand-in
  (handlers/fm.md "Unrecovered" explicitly says the `(DDDDDD)V` physics
  parameters, threat predicate and throw aim are not recoverable - do not
  guess); guesses listed (vlFZY=64.0, 1 s cadence, 0.99/0.8/0.03 sim constants).
remaining gaps:
- [N] `aKp/aKq/aKA/aKC/aKD/aKw` bodies (handlers/fm.md "Unrecovered" #1-4).
  Capture condition: health above threshold + another player's pearl in
  flight; log aKp/aKq + aKA/aKw values.
evidence: casesafe fm.java:14-132 vs PearlChaser.java:34-296; trace: fm.jsonl
load only

### fM - Auto MLG
post-fix parity: 74% | status: partial | fixed: yes
fixed:
- **Wrong-twin spec citation corrected** (impl cited handlers/fM.md = Pearl
  Chaser): now casesafe/handlers/fM_.md; the payload-decrypted fM.java paths
  were already correct (verified declared class).
- Threshold suffix set to " blocks" (high-probability guess, labeled: GgimX
  native-decrypted/unrecovered; PARITY.md records " blocks" as the assumed
  suffix and the setting gates a fall-distance check).
- Settings verified exact: Threshold `cC .Vy(0.1).Vw(3.0).Vx(15.0).VA(4.0).Vz(GgimX)`
  (fM.java:41), Anchor Player `cJ .WE(false)` (fM.java:56), Mode group with six
  `cu` toggles Bucket/Slime/Honey/Cobweb/HayBale/Cherry (fM.java:57-128);
  isCreative + hurtByWater + material-constant mapping verified; guesses labeled
  (fall-damage estimate, 16-block ground scan, placement hit, gv split).
remaining gaps:
- [N] `aVp`/`aVq` bodies (handlers/fM_.md "Unrecovered" #1-3). [U] multi-mode
  fallback order. Capture condition: fall more than Threshold with a mode
  material in the hotbar; log the placement.
evidence: payload-decrypted fM.java:28-129 vs AutoMlg.java:38-155; trace
2026-10-17 fM_.jsonl (aVp 1x, aVq 1x)

### fa - Auto X-Bow
post-fix parity: 45% | status: partial | fixed: partial
fixed:
- **Wrong-twin citations corrected** (impl cited handlers/fa.md = Potion
  Refill): now casesafe/handlers/fa.md + casesafe/payload-named-cfr/sixtwo/fa.java:27-47.
- Javadoc now states explicitly that the crossbow hold-to-charge loop is a
  design-level **stand-in, not 1:1**: the recovered surface (Items.TNT_MINECART
  field_8069, Items.FLINT_AND_STEEL field_8884, fa$sL rail/fire/cart-hit plan,
  8-state fa$sK, vertical rail scan bounded by HeightLimitView, Vec3d.dotProduct
  scoring) is NOT implemented (handlers/fa.md "Unrecovered" #1-3,6,10).
- Added trace note: aGd/aGe each call aGV (shared String[3] buffer read) once;
  the buffer stays omitted (documented gap; its only external consumer, fc's
  constructor, discards the result).
remaining gaps:
- [N] all 53 handler bodies; [U] state transition table and plan builders.
  Capture condition: TNT minecart on a rail in view; log aGn/aGs + aGf..aGm.
evidence: casesafe fa.java:27-47 vs AutoXBow.java:21-113; trace 2026-10-17
fa.jsonl (aGd 1x, aGe 1x, aGV 2x, aGQ 1x)

### fj - Projectile Aim Bot
post-fix parity: 62% | status: partial | fixed: yes
fixed:
- **Color defaults corrected to the recovered values**: Outline Color
  `cG .Uf(rD.dlM().bjG().bis()).Uh(false)` -> white, alpha-off; Fill Color
  `cG .Uf(bis().cob(0.5F)).Uh(false)` -> white at alpha 0.5, alpha-off
  (`bis()` = white theme accessor per db/dc/dd specs; `Uh(false)` =
  allowAlpha false, the repo convention). Was 0xFFFF5555 / 0x80FFAA00 with
  alpha enabled.
- Settings verified exact: Ignore Walls `cJ .WE(false)`, FOV
  `cC .Vy(1.0).Vw(10.0).Vx(360.0).VA(45.0).Vz(zVHFr)` = step 1.0 / min 10.0 /
  max 360.0 / default 45.0, Render Prediction `cJ .WE(false)`, Filled
  `cJ .WE(false)` visible with Render Prediction (`Vf(IMpen::WF)`,
  fj.java:111-113).
- Trajectory/lead math labeled as a stand-in (handlers/fj.md "Unrecovered":
  the aJA/aJB formula is explicitly not recovered) + trace note (aJy 2x, no
  nested aJA/aJB/aJC - no target scenario).
remaining gaps:
- [N] aJA/aJB/aJC/aJD/aJE bodies; [U] aJE scoring, regex pattern, suffix zVHFr.
  Capture condition: charged bow/crossbow + player in FOV; log aJA/aJB/aJC.
evidence: payload-decrypted fj.java:27-114 vs ProjectileAimBot.java:35-106;
trace 2026-10-17 fj.jsonl

### fT - Resource Pack Bypass
post-fix parity: 82% | status: ported | fixed: yes
fixed:
- **bootEnabled() added** - the original is the only module of the batch
  registered with the `true` metadata flag (`gf.aZL(78, true, gh.KfAlY)`,
  casesafe fT_.java:26); same flag as fQ/fO (OpenGrimClient.java:21).
- **Servers visibility wired**: `NKPoi.Vf(this.IVIuI::SZ)` (fT_.java:86) ->
  `servers.setVisible(specificServers.getValue())` in onTick.
- **Wrong-twin citations corrected** (impl cited handlers/fT.md = Auto GApple
  and modules/fT.md): now casesafe/handlers/fT_.md + casesafe/modules/fT_.md +
  casesafe payload paths; settings verified (ct "Mode" with cu "Enable For
  All" / cu "Specific Servers" `.SY()` default, cy "Servers"
  `.Un(1024).Uo(placeholder).Up("anarchia.gg")`); the cy max-length/placeholder
  are documented as not representable by StringSetting.
- Forged-reply specifics labeled as high-probability guesses (status order
  ACCEPTED->SUCCESSFULLY_LOADED, 500 ms delay, packet cancellation) per
  handlers/fT_.md "Unrecovered" #1.
- Trace note added: aXs is the session's global inbound-packet hook (4353x,
  every S2C packet; aXu/aXv/aXw/aXx/aXz/aXA once + aXy twice per call, all
  probes false - no forced pack in the run; aaj/YO 1x each).
remaining gaps:
- [N] `aXG`/`aXr`/`aXq`/`aXp` bodies and the aXy/aXz/aXA string-normalizer
  contracts (handlers/fT_.md "Unrecovered"). [U] gN/gR event semantics.
  Capture condition: join a pack-forcing server with a matching address; log
  the two status sends + the address-match chain.
evidence: casesafe fT_.java:24-90 vs ResourcePackBypass.java:40-131; trace
2026-10-17 fT_.jsonl

---

## Cross-module notes

- Settings API: `cD` keybind ints use the established
  `IntSetting(id, -999, 348, -999)` shape (fg/dR/fa); `cC` numeric chains map
  step/min/max/default/suffix in builder order Vy/Vw/Vx/VA/Vz (all verified);
  `cA` UI(a,b) uses default = first value, second value unmodelled (fc, dR).
- The VM "tripwire probes" (fg.aIW, ee.arS, eB.avS, eP.aBU, fX.aYu -
  trace-recheck-movement-b-render.md:30-38) are not behavior and were not
  ported; TargetLock exposes `sharedIds()` only for completeness.
- Case-twin check for this batch: every impl javadoc now points at
  `analysis/decompiled/casesafe/**` or a verified non-collapsed path.

## Compile

`.\gradlew.bat compileJava -q --offline` -> clean after the fixes (the first
run was blocked by an out-of-batch file, `modules/render/FriendIndicator.java`,
missing `import net.minecraft.util.math.Box;` - one-line import added so the
batch could be verified; that file belongs to another session's work).

## Changed files

- src/main/java/dev/opengrim/modules/combat/TargetLock.java (javadoc: casesafe
  citation, trace note, labeled guesses)
- src/main/java/dev/opengrim/modules/world/CartRefill.java (delay default
  50.0 -> 0.0, suffix " ms", citations, trace note)
- src/main/java/dev/opengrim/modules/movement/FastBridge.java (trace note,
  labeled guesses)
- src/main/java/dev/opengrim/modules/combat/ShieldDrain.java (suffix " blocks",
  casesafe citations, labeled guesses)
- src/main/java/dev/opengrim/modules/utility/ClickAction.java (two Return Delay
  settings collapsed to one + RETURN_DELAY_ANCHOR, suffix " ms", citations,
  labels)
- src/main/java/dev/opengrim/modules/movement/PearlChaser.java (casesafe
  citations, stand-in labeling)
- src/main/java/dev/opengrim/modules/world/AutoMlg.java (suffix " blocks",
  casesafe spec citation, labels)
- src/main/java/dev/opengrim/modules/combat/AutoXBow.java (casesafe citations,
  stand-in labeling + trace note)
- src/main/java/dev/opengrim/modules/combat/ProjectileAimBot.java (color
  defaults white/white-0.5 + allowAlpha=false, labels, trace note)
- src/main/java/dev/opengrim/modules/utility/ResourcePackBypass.java
  (bootEnabled, Servers visibility, casesafe citations, guess labels, trace note)
- src/main/java/dev/opengrim/modules/render/FriendIndicator.java (out-of-batch:
  added missing Box import to unblock compile)
