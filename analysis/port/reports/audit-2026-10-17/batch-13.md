# Batch 13 audit — dn, da, fX, fK, et, dg, fH

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-13 subagent.
Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (one transient
failure from a concurrent edit in `AntiTrap.java` — foreign to this batch —
cleared on retry).

Sources per id from `analysis/tools/audit/source-map.tsv`; all decompiles
declared-class-verified before use (`dn`/`da`/`et`/`dg`/`fK`/`fH` from
payload-decrypted, `fX` from casesafe/payload-decrypted). Trace evidence folded
from `analysis/traces/2026-10-17/` (ENC names). Constants cross-checked against
`analysis/decrypted/full-dump.jsonl`. Native evidence from
`analysis/ghidra/handlers-stitched/sixtwo_fH.c` and the bootstrap mixin corpus
(`analysis/decompiled/bootstrap/mixin/accessors/ClientWorldEventBridgeMixin.java`
— proves `hu` = `ClientWorld#addEntity` HEAD, `hp` = `removeEntity` HEAD).

---

## dn — Firework Spots (`render/FireworkSpots.java`)

- **Post-fix parity: ~85% · status: ported · fixed: yes**
- Settings 2/2 exact (dn.java:54-97): "Time Before Disappear" step 1 / min 1 /
  max 15 / default 8, "Quantity Limit" step 1 / min 1 / max 100 / default 10.
  Suffix `dn.AhEPk` is runtime-decrypted and absent from full-dump.jsonl → left
  empty **[U]**.
- Fixes (this session):
  - **Invented 128-block expand filter removed** — the original `ahb(hu)`
    (dn.java:280-330) records every `FireworkRocketEntity` add event with no
    distance gate (the `hu` event is fired from `ClientWorld#addEntity` HEAD,
    bootstrap `ClientWorldEventBridgeMixin`).
  - Cap trim now matches dn.java:322-324: oldest `size - (int)QuantityLimit`
    entries get the `dhd(0.0f)` + `uAOSS = true` forced-fade pair.
  - Expiry + removal moved into the draw pass (dn.java:209-235 / dn$sF.java:130-201):
    `elapsed > (int)TimeBeforeDisappear * 1000` → done; `doK()` (fade == 0 &&
    done) removes in the same pass. The previous tick-based `removeIf` with a
    non-int deadline is gone.
  - Seen-id set pruned to the world's present ids, so a chunk reload re-adds a
    spot exactly like the re-fired add event.
- Remaining gaps:
  - **[S]** No `hu`/`hp` entity add/remove event exists in this framework;
    recording is emulated by per-tick polling (same observable set; ≤1 tick
    latency). A `ClientWorld` bridge mixin mirroring the original bootstrap
    would close this for dn/dg/dp together.
  - **[G]** Fade-in animation omitted (`dn$sF.jYWIl` duration runtime-decrypted,
    unrecovered); **[U]** `ZOVgw` ms multiplier presumed 1000.
  - **[G]** Visual: original draws a projected screen-space firework icon with
    glow disc + jitter + fade (dn$sF.java:191-200); no 2D overlay surface in
    this framework → world-space marker boxes at the recorded position.
- Evidence: trace 2026-10-17 dn — `YO` ×2 (toggle only); no spawn captured
  (capture condition: throw a firework in-world while enabled).

## da — Sound ESP (`render/SoundEsp.java`)

- **Post-fix parity: ~85% · status: ported · fixed: yes**
- Settings 3/3 exact (da.java:60-91), suffixes byte-verified against
  full-dump.jsonl string records: " s" (record `sixtwo.da aby (IJ)Ljava/lang/String;`)
  and " blocks".
- Fixes (this session):
  - Cap trim now matches da.java:278-286: oldest `size - (int)QuantityLimit`
    entries get `Taibw.dhd(0.0f)` + `zUbCd = true` (fade slammed to 0, not a
    gradual fade-out).
  - Expiry + removal moved into the draw pass (da.java:373-406 / da$sv.java:140-215):
    `elapsed > (int)TimeBeforeDisappear * 1000` → done + `dhd(0.0f)`; `dok()`
    removes in the same pass.
  - Distance gate now uses `VB()` float semantics; cap/expiry use `VC()` int.
- Remaining gaps:
  - **[G]** Fade-in rate per tick (original `rk` duration `xwXDE` unrecovered).
  - **[U]** Sound-name regex `ySNLn` runtime-decrypted; `'.'` used as separator
    substitute (`'_'` replacement is byte-verified, da$sv.java:203).
  - **[G]** Visual: original draws a projected HUD card (rounded rect + name
    text, da$sv.java:201-214); port draws world-space marker boxes.
  - **[S]** Sound capture uses the vanilla `SoundInstanceListener` (the closest
    equivalent of the original `gI` sound event) — verified registered on
    enable / removed on disable (`YO`, da.java:485-489).
- Evidence: trace 2026-10-17 da — `abt` ×2 + `YO` ×2; no sound events captured.

## fX — Interface (`utility/Interface.java`)

- **Post-fix parity: ~85% · status: ported · fixed: yes**
- Settings 3/3 exact (fX.java:54-104): Emote Key default 66 ('B'); Style with
  Liquid Glass(0)/Blur(1, `.SY()` default)/Solid(2); Edit Theme action.
- Fixes (this session):
  - **Boot enable now uses `bootEnabled()`** (was `setEnabled(true)` in the
    ctor) — the original metadata flag `gf.aZL(102, true, gh.KfAlY)`
    (fX.java:56); applied before config load.
  - **`YO()` self-re-enable ported**: `onDisable()` → `setEnabled(true)`
    (fX.java:226-229 `baa(true)`), so the module is effectively always on.
  - `bab()` in-game gate (gg.java:393-459) added before the key check.
  - Javadoc citations moved from stale temp paths to repo paths; divergences
    labeled.
- Remaining gaps:
  - **[G]** No key event bus → Emote Key press edge-detected via GLFW in
    `onTick` (original `aYc(gA)` with `bbQ()==1`); F3 (GLFW 292) suppression
    and `bD.LD()` → `ClickGuiScreen` are ported.
  - **[G]** The cI "Edit Theme" action opens `aZ(2.0f)` via `aw.route`
    (fX.java:96-103); no theme-editor screen in this rebuild → the BoolSetting
    trigger opens the ClickGuiScreen.
  - **[S]** Style is not consumed by the GUI: `getBackgroundOpacity()` (aYh,
    0.2/0.75/0.85) is exposed but `GuiTheme.BACKDROP`/`PANEL_BODY` still
    hardcode the Blur opacity — wiring the Click GUI surfaces to the module
    value remains open (the original's native render layer reads `fX.aYh()`,
    e.g. cW's `(255 - 100*aYh())*0.7f`).
  - **[U]** `aZQ(345)` builder arg vs registry bind 344 (native builder
    semantics); bind kept at 344 per registry.
- Evidence: trace 2026-10-17 fX — `aYf` → 1, `aYh` → 0.75 (Blur default
  confirmed live), `aYc` ×2, `YO` ×1; aYu probe channel exercised throughout.

## fK — Reach (`combat/Reach.java`)

- **Post-fix parity: ~98% · status: ported · fixed: no (verified 1:1)**
- Settings 2/2 exact (fK.java:41-71): Entity Value step 0.01 / 3.0-6.0 / 3.0
  " blocks"; Blocks Value step 0.01 / 4.5-6.0 / 4.5 " blocks" (both units
  runtime-confirmed via full-dump string records).
- Accessors reproduce `aUV()`/`aUW()` branch-for-branch (fK.java:196-262):
  enabled → live slider; disabled → entity 3.0, block 4.5 or **5.0 in
  creative**. Consumers wired through `InteractionRangeEvent` posted by
  `InteractionRangeMixin` from `PlayerEntity#getBlockInteractionRange`/
  `getEntityInteractionRange` (mirrors the original's unconditional native
  consumer reads; the off-state vanilla constants equal the vanilla getters).
- Remaining gap: **[U]** the original consumer call sites (attack raycast
  extension) live in the native layer outside the class (spec §Unrecovered 1) —
  out of scope; no divergence in module code.
- Evidence: trace 2026-10-17 fK — empty (accessors are called from native
  consumers; nothing traced).

## et — Anti Web (`movement/AntiWeb.java`)

- **Post-fix parity: ~92% · status: ported · fixed: yes**
- Settings 5/5 exact (et.java:63-155): Mode Vanilla(0)/Flight(1, `.SY()`
  default)/Solid(2); Horizontal Speed 0.01 / 0.1-2.0 / 0.64 (visible
  `SQ(1) || SQ(2)`); Vertical Speed 0.01 / 0.1-2.0 / 0.64 (visible `SQ(1)`).
- Fixes (this session):
  - **`iX.bxO` re-translated from raw bytecode** (`analysis/jars/payload-raw/
    sixtwo/iX.class#bxO`, decoded instruction-by-instruction): pure strafe
    keeps the raw vector; forward input **snaps the yaw by ±45°**, zeroes
    strafe and uses forward = ±1, so the direction has magnitude = speed.
    The previous port multiplied the raw input vector (diagonal magnitude
    √2 × speed) — corrected.
  - Movement yaw now comes from `RotationManager.get().effectiveRotation()`
    (`rD.dlX().dbC().cGI()`, iX.java:265), not the visual entity yaw.
  - Jump/sneak branches now re-read `getVelocity()` per branch (original
    add-per-branch semantics) and use `VB()` float casts.
- Remaining gaps:
  - **[G]** The four yaw constants are DES-decrypted (unrecovered); ±45 is
    forced by the input→direction mapping (backward diagonals use forward = −1).
  - **[U]** The original `gS` collision event's publisher (block-collision vs
    raycast) is unrecovered; wired to `CollisionShapeEvent` (same
    `bcg()`/`bci(BlockState)` contract).
  - `jg.bBs` cobweb test mirrored locally per spec; verified against
    `casesafe/payload-named-cfr/sixtwo/jg.java:1189-1258` (floor-bounds scan +
    `Box.contains(BlockPos)` + `isOf(COBWEB)`).
- Evidence: trace 2026-10-17 et — `auv` ×2 (handler entered; no `jg.bBs` call
  traced → likely `bab()` early return; capture condition: stand in a cobweb in
  Flight mode).

## dg — Pearl Prediction (`render/PearlPrediction.java`)

- **Post-fix parity: ~78% · status: ported · fixed: yes**
- Settings 1/1 exact (dg.java:64-83): "Show Time Left" `cJ.WE(false)`.
- Fixes (this session):
  - Tracking moved out of `onTick` into the render pass — the original `aei`
    (dg.java:191-377) is the world-render handler; order preserved
    (`removeIf(dop)` → mark gone pearls → simulate new pearls → fade advance).
  - Removal semantics fixed: gone/expired markers get `iAudN.dhd(0.0f)` +
    `sDPfY = true` (dg.java:264-270 / 431-439) and disappear at the next pass
    (`dop()` = fade == 0 && done); the invented gradual fade-out is gone.
  - `isAlive()` filter dropped (original scans plain `instanceof
    EnderPearlEntity`); markers still record `max(steps − 1, 0)` and
    `player.age` at creation (dg$sx.java:52-60, `don()`).
- Remaining gaps:
  - **[G]** Simulation: original drives the native trajectory simulator
    (`mh.ckg...cky(maxSteps)` — max-steps DES-unrecovered); port re-implements
    pearl physics (drag 0.99 / gravity 0.03) with a 600-step cap and a
    block-collision raycast; the original's two accepted termination kinds
    (`mf.juSGK`/`mf.RlLKW`) are unrecovered → block hits only.
  - **[U]** Time-left format string `NkcQX` runtime-decrypted → `"%.1fs"`;
    `* 50 / 1000` seconds conversion is the natural reading of dg$sx.java:293-295.
  - **[G]** Fade-in rate per frame; **[G]** visual: HUD card + pearl icon →
    world-space box + nametag text (no 2D surface).
- Evidence: trace 2026-10-17 dg — `YO` ×2 only (capture condition: throw an
  ender pearl in-world while enabled).

## fH — Aim Assist (`combat/AimAssist.java`)

- **Post-fix parity: ~50% · status: ported (native-blocked) · fixed: yes (partial)**
- Settings: 27 registered objects covering all 35 originals (8 `cu` options
  folded into ModeSettings per repo convention) — names/steps/mins/maxes/
  defaults/suffixes exact (fH.java:228-699).
- Fixes (this session):
  - **"Items To Use" was a GroupSetting with two independent toggles**; the
    original is `ct pNnvx` with `cu` options "Wapon Only"(0, default) /
    "Custom Slots"(1) (fH.java:519-546) → converted to a ModeSetting; the
    `slots` (cz) visibility now follows Custom Slots (`hjLsk.Vf(this::aUr)`).
  - **Visibility wiring completed**: `renderPrediction` ← Predict Position
    (`maPUy.Vf(xZaeo::WF)`, fH.java:690); `predictionColor` ← Predict Position
    (aUs native predicate, spec's structural reading); `slots` gate added.
  - **Hold Key default corrected to 0**: `cD.VO(mA.sCBUa.cmO())` with
    `mA.sCBUa = new mA(0)` (mA.java:171, cmO → 0), was −999.
  - All substituted math labeled **[G]** in the javadoc with the native-VM
    inventory and the capture condition.
- Remaining gaps:
  - **[N]** All behavior is a native VM (59 handlers / 589 continuation blocks,
    `sixtwo_fH.c`; zero surviving float constants — fH.md §Unrecovered 1-7):
    rotation smoothing (`aTv`/`aTw`/`aTy` bodies), target predicate `aUp`,
    player gate `aUq`, prediction path `CBxhI`. Only evidenced primitive:
    `Entity.setPitch(F)V` (pool token `method_36457`). Port uses linear
    per-tick stepping + hash noise, submits through RotationManager.
  - **[G]** Draw Fov + Fov Color and Render Prediction + Prediction Color are
    registered but render nothing: the original's 2D FOV circle (`aTy` fetches
    the `lC` context) has no surface in this framework, and the `iW.bxt`
    polyline needs the unrecovered `CBxhI` path construction.
  - **[U]** cG color defaults come from the runtime theme (`rD.dlM().bjG().bis()`);
    fixed ARGB placeholders used. Target (cF) contents/default
    (`jg$tJ.OCdZM`) unrecovered → players/mobs/all mode per fr KillAura.
- Evidence: trace 2026-10-17 fH — `aTv` → `aTx` (render-stage handler →
  target getter) ×2; no rotation values recorded.

---

## Summary table

| id | status | parity | fixed |
|---|---|---|---|
| dn | ported | ~85% | yes |
| da | ported | ~85% | yes |
| fX | ported | ~85% | yes |
| fK | ported | ~98% | no (verified 1:1) |
| et | ported | ~92% | yes |
| dg | ported | ~78% | yes |
| fH | ported (native-blocked) | ~50% | partial |

## Changed files

- `src/main/java/dev/opengrim/modules/render/FireworkSpots.java` (dn: add-event
  emulation without distance filter, cap-trim/done flags, draw-pass expiry+removal)
- `src/main/java/dev/opengrim/modules/render/SoundEsp.java` (da: cap-trim
  `dhd(0.0f)`, draw-pass expiry+removal, VC/VB semantics)
- `src/main/java/dev/opengrim/modules/utility/Interface.java` (fX: bootEnabled,
  YO self-re-enable, bab gate, doc fixes)
- `src/main/java/dev/opengrim/modules/movement/AntiWeb.java` (et: bytecode-exact
  iX.bxO snap, rotation-manager yaw, per-branch velocity reads)
- `src/main/java/dev/opengrim/modules/render/PearlPrediction.java` (dg:
  render-pass tracking, `dhd(0.0f)` removal semantics, labeled guesses)
- `src/main/java/dev/opengrim/modules/combat/AimAssist.java` (fH: Items To Use →
  ModeSetting, visibility completion, Hold Key default 0, [G]/[N] labels)

Not edited (verified 1:1, gaps documented): `combat/Reach.java` (fK).

## Notes for the orchestrator

1. `hu`/`hp` entity add/remove events exist in the original bootstrap
   (`ClientWorldEventBridgeMixin`: `ClientWorld#addEntity`/`removeEntity` HEAD)
   but have no counterpart here; dn/dg (and dp) emulate them by polling. A
   shared `ClientWorldMixin` + event pair would close that gap for all three.
2. fH's Draw Fov / Render Prediction features need a 2D overlay surface
   (screen-space) which the framework does not expose; they remain documented
   gaps rather than guessed draws.
3. Stale spec rows encountered: `analysis/specs/modules/fX.md` claims "native
   coverage ~0 ... behavior bodies mostly native-blocked" — fX is pure Java
   (the handler spec fX.md is correct); `modules/dn.md` "Settings (0
   constructed)" is superseded by handlers/dn.md.
