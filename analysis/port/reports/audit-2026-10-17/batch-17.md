# Batch 17 audit — cU (Trails), fr (Kill Aura), dp (Logout Spots)

Date: 2026-10-17 · Auditor: batch-17 subagent · Compile: `.\gradlew.bat compileJava -q --offline` clean
after all edits.

Sources used: case-safe payload-decrypted decompiles (`analysis/decompiled/casesafe/payload-decrypted/
sixtwo/{cU_,fr,dp}.java`), bytecode cross-checks via `javap` of `analysis/decompiled/jar-casesafe/sixtwo/
{cU_,fr,dp}.class` (class declarations verified inside each file), helper classes (`cv/cw/cC/cG`, `kp/jk/
jJ/jI`, `og/oh/jg/qQ`, `kt/kw/kv/mT`, `cN`, `eL`, `dI`, `fl`, `fo`), decrypted constant pool
`analysis/decrypted/full-dump.jsonl` (sixtwo.cU rows), runtime traces `analysis/traces/2026-10-17/`
(`digests/{cU_,fr,dp}.txt`, `by-class-casesafe/{fr,dp}.jsonl`).

---

## cU — Trails

post-fix parity: **93%** (recovered surface) · status: **ported** · fixed: **yes**

### Fixed

- **Show-For gating re-ported bytecode-exact** (was the natural-but-wrong
  `players || (friends && isFriend)` reading). `Zz` in `cU_.class` reads:
  local player needs **Self**, every other player needs **Players**; then
  `if (!Friends.TC() && qQ.ddy(p)) continue` (friends are *skipped* unless the
  Friends box is checked — the check applies to the local player too); then
  `if (!Invisibles.TC() && p.isInvisible()) continue`.
  Verified three ways: CFR payload-decrypted `cU_.java:277-378`, CFR
  payload-named-cfr copy, and javap `cU_.class Zz` (`if_acmpne 159`,
  `ifne 193` self/players → friends, `205 ifne 256`, `234 ifeq 256`).
  `cw.TC()` = checkbox selected (`cw.java:157-181`, `Tz()` = default-on, only
  Self has it).
- **Render phase corrected** BEFORE_TRANSLUCENT → AFTER_ENTITIES: `cU.Zz` is a
  `go.sX` event, the same event class used by every other ported render module
  (Tracers, ChinaHat, …), all of which map to AFTER_ENTITIES in
  `EventBridge.java:22-27`. Trails was the only BEFORE_TRANSLUCENT user.
- **Removed non-original state handling**: `history.keySet().removeIf(...)` and
  the `onDisable()` history clear were inventions — `cU` declares no cleanup
  (javap method list: ctor, ZJ, Zz, ZA, ZF/ZE/ZD/ZC/ZB, ZH/ZI; no tick handler,
  no YO override — the handler spec's "tick handler / YO clears ERVmZ" claims
  are stale).
- Javadoc rewritten with bytecode-verified citations; [G] label on the jk
  gradient constants; color-default note.

### Verified 1:1 (unchanged)

- Settings, all from the decrypted constructor + `full-dump.jsonl` sixtwo.cU
  rows: Show For (Players/Friends/Invisibles/Self, Self default-on via `Tz()`),
  Color (`cG.Uf(bjG().bis())`), Length `Vy 0.01/Vw 2.0/Vx 4.0/VA 3.0`,
  Gradient Speed `1.0/1.0/10.0/5.0` (`cC` semantics from `cC_.java:81-104,
  151-194`; `Vy`=step, `Vw`=min, `Vx`=max, `VA`=default).
- Sampling (`getLerpedPos(tickDelta)`, add only when changed), retention
  `(long)(125.0f * Length.VB())`, prune `now - t - retention > 0`, in-place
  compaction, first/last visible index bookkeeping, `subList().clear()`,
  the three render guards (`list.size()<2`, `firstVisible==-1`,
  `lastVisible-firstVisible+1<2`), `ZA` guards (first-person skip, `n2<0→0`,
  `n5>=size→size-1`, `count<2`), `kp.bQA` (quad strip, alpha `step/count*0.7f`)
  then `kp.bQB(true)` then `kp.bQB(false)` (line strips, alpha
  `min(step/count*1.5f, 1f)`), palette [color, color×0.5] (`mG.coe(0.5f)`,
  `mG_.java:322-327`), gradient phase `(now/speed + step)` with per-vertex
  timestamp (matches `jk.bDo` call granularity).

### Remaining gaps

- [G] `jk.bDo` DES constants (modulus/ping-pong) absent from the decrypted
  pool: 360-step triangle wave, same labeled guess as the ChinaHat audit
  (batch-12). Colors are provably identical to the alternative reading; only
  the cycle length could differ ×2.
- [U] `jJ.bID` falls back to the culling frustum when the captured frustum is
  null (`getFrustumPos`/`getCullingFrustum` mixin accessors); OpenGrim has no
  such accessors — null → visible, same as EntityEsp/BlockEsp siblings.
- [U] Color default: `bjG().bis()` is theme-fed (batch-06 white vs batch-12
  accent conflict); kept white per the module spec table.
- [N] `kp.bQA/bQB` submit through the `kR` RenderPipeline constants
  (`agqAS` TRIANGLE_STRIP / `gNqqy` DEBUG_LINE_STRIP); OpenGrim uses
  `debugFilledBox()` / `linesTranslucent()` with equivalent geometry.
- Visual scale: ribbon surface + both line strips + gradient + frustum gate all
  present; only layer/blend plumbing differs.

### Evidence

javap `cU_.class` (Zz/ZA/lambdas ZB-ZD, no tick handler); `cU_.java:232-565,
567-667`; `full-dump.jsonl` sixtwo.cU ZJ rows (names, key 124, capacity 64);
trace: `digests/cU_.txt` empty (module never exercised in the tour — no runtime
evidence either way).

---

## fr — Kill Aura

post-fix parity: **60%** (recovered surface) · status: **partial** · fixed: **partial**

The class is 89 methods, almost all j2cc-native VM bodies (attack/aim math,
crit forcing, hit-delay timing, selection filters — unrecovered per the handler
spec). Everything Java-visible was re-checked and fixed.

### Fixed

- **Pause gate `aNB()` now ported exactly** (fr.java:1001-1121): the aura yields
  while Nuker is *mining* (`dI.amm() != null`, fr.java:1018-1029 — was
  `nuker.isEnabled()`), while Auto Web / Auto Trap report active
  (`eK.aAa()`/`eJ.aAa()`, fr.java:1035-1065; `eL.aAa()` is native → ported as
  isEnabled, labeled [G]), and while Auto Potion is enabled **and its plan is
  live** (`fl.bag() && fl.aJQ()`, fr.java:1074-1097 — was enabled-only).
  Added `Nuker.isMining()` (port of `dI.amm()` → `OXKNB != null`, javap-verified)
  and `AutoPotion.isTriggerReady()` (wraps the existing fl#aJQ reading).
  `rD.dlZ().dbt()` remains unported (documented divergence, already in PARITY).
- **Target range metric corrected to `jg.bBI`** (was feet-to-feet
  `player.distanceTo`): eye → closest point on the bounding box
  (`jg.bBJ/bBK` clamp, jg.java:278-281, 382-385, 558-563), per the `og`/`oh`
  framework the module owns (og.java:30-135).
- **Locked-mode retention corrected**: the current target is kept while alive
  **and** within Search Distance (`og.cCT`, og.java:94-135); was alive-only.
- **Attack gate corrected to `jg.bBG`** (jg.java:573-594): eye-to-**point**
  distance ≤ Attack Distance, evaluated on the computed attack point (was
  distance-to-entity before the point existed).
- **Attack Point** (native `pe/pc/pd` engine, fr.java:964-967): Nearest Vector
  now uses the bounding-box point closest to the eye (`jg.bBK` clamp reading);
  Best Vector keeps the box-center stand-in. Both labeled [G].
- **Suffix literals restored** with their leading spaces: " blocks", " ms",
  " deg" (fr.java:150/376/731/962), matching MaceAura's convention.
- **"Targets" default corrected** to "all": the cF default preset
  `jg$tJ.OCdZM` = `jg.fbEDU` = every entity type minus the projectile/
  decoration list (jg.java:600-634); within `oh`'s LivingEntity-only stream
  (oh javap `cDo`) that is all living entities except armor stands — the "all"
  mode now implements exactly that (was default "players").
- **"Slots" (cz) converted** from an empty placeholder GroupSetting to the
  TriggerBot-style live `Set<Integer>` (getSlots/addSlot/removeSlot, default
  empty) and wired into Items To Use → Custom Slots (previously a no-op).
- **Attack Point default re-verified**: no `.SY()` marker exists in the
  constructor (fr.java:793/809), so default index 0 = Best Vector — the handler
  spec's "Nearest Vector default" is stale; impl was already correct.
- Target cache is now a `LivingEntity` field (`cslIX`/`aOQ` semantics,
  fr.java:121, 1214-1216); enable/disable no longer clears it (the original
  never clears cslIX in Java).
- Javadoc rewritten (60 settings in constructor order, Vf visibility gates,
  aNB exact, og/oh/jg semantics, labeled guesses).

### Verified 1:1 (unchanged)

- All 60 settings: names, wrapper kinds, children order, `.SO(1)` defaults
  (Correction Type=Focused, Critical Mode=Prioritize Crits, Render
  Mode=Capture Rounded, Target Mode=Locked), numeric chains
  (Search 0.1/2.5-50/6, Cooldown 0.01/0-1/0.9, Timer 1/0-1000/600, Attack
  Distance 0.01/2.5-5/3, FOV 1/10-360/180), color default white, `.WE(...)`
  bool defaults (fr.java:131-982).
- Visibility suppliers `Vf` (fr.java:967-974) → `setVisible` per tick.
- Tick event mapping `aNr(gv)` → `onTick`; cached target export `aOQ`.
- Trace cross-check: `aNB` returned 0 (not paused) in all 6 observed calls;
  `aNu` (native selection) ~330 ms; `aNx` returned 6; `aNs` (render) also
  consults `aNB`.

### Remaining gaps (scale)

- [N] Native core (~60% of behavior): `aNu` selection filter wiring, `aNv/aNw`
  attack + crit arithmetic (isOnGround/isGliding/jump cluster), `aNz` rotation
  submission details, aim smoothing (Unrestricted/Adaptive), sprint/move
  correction, Break Shield axe swap, Un Press Shield/Simulate Clicks internals,
  hit-delay math, `aNx/aNy` float state. Capture condition: enabled aura with a
  target in range + a full trace of `aNu/aNv/aNw/aNz`.
- [N] Render handlers `aNs(gH$th, HIGH)` (capture styles: Mark/Rounded/
  Triangle/Dashed Triangle) and `aNt(go.sX)` (Visualise Rotation / Change View /
  point-engine preview) — no bodies recovered; nothing implemented (was already
  the case).
- [U] `rD.dlZ().dbt()` arbitration gate (fr.java:1102-1112) — no counterpart
  (already in PARITY divergences).
- [G] `eK.aAa()`/`eJ.aAa()` (native) read as isEnabled; Cancel In Screens /
  Cancel On Use / Items-To-Use gates keep their existing labeled readings
  (pool-neighborhood evidence, owner unproven).

### Evidence

javap `fr.class` (method list, `aNB` bytecode), `fr.java:131-982` (constructor),
`1001-1121` (aNB), `1214-1216` (aOQ); `og.java`, `oh.class` javap (cDo/cDr/cDp),
`jg.java:278-281/382-385/558-563/573-594/600-634`; `eL.class`/`dI_.class` javap;
trace `by-class-casesafe/fr.jsonl` + `digests/fr.txt`.

---

## dp — Logout Spots

post-fix parity: **80%** (recovered surface) · status: **ported** · fixed: **yes**

### Fixed

- **AntiBot filter replaces the friend filter** (was `FriendsManager.isFriend`):
  both `ahs` and `aht` use `rD.dml().aLp(player)` = the AntiBot verdict
  (`rD.dml()` returns `sixtwo.fo`, javap; `fo.aLp` = enabled && flagged set,
  fo.class javap; ported `AntiBot.isBot`, AntiBot.java:115-117). The handler
  spec's "friend check" is stale.
- **Tick rescan `aht` re-ported to the recovered algorithm** (dp.java:534-625):
  throttle `Refresh Timer.VC() * 20` ticks through the mT timer, then rescan
  **only when the tab-list size changed** (`collection.size() != KrDsH.size()`,
  dp.java:569); world players whose UUID is absent from the tab-list profile-id
  set and who are not AntiBot-flagged are recorded into FlxVs + JTVMZ
  (`computeIfAbsent`), then the tab snapshot is refreshed and the world snapshot
  rebuilt (`ahx`, dp.java:407-433). The old impl scanned every interval with a
  home-grown lastKnownPos heuristic.
- **On-enable `aaj` ported** (dp.java:368-394): rebuild world snapshot, seed
  tab snapshot via `addAll` **without clear** (quirk preserved — repeated
  enables duplicate the snapshot exactly as in the original), clear FlxVs +
  JTVMZ.
- **Color default fixed to white** (was 0xFFFF5555): `.Uf(mG.hoGuU).Uh(false)`
  (dp.java:203) → `ColorSetting(..., 0xFFFFFFFF, false)` (`.Uh(false)` → no
  alpha, same mapping as Nuker's outline color).
- **Frustum gate added** to the world render (`jJ.bIB` entity-box test,
  dp.java:761-765) using `getCapturedFrustum()` (sibling pattern).
- **Clear Spots now clears FlxVs + JTVMZ** (dp.java:838-841); the old
  `clearSpots()` cleared only the spot map. Key poll moved to a
  `!= -999` guard (default unbound) — gA key-event surface absent, documented.
- **Re-login (`ahs`) approximated with add-transition semantics**: a
  previously-logged-out player who becomes present in the world (absent →
  present) is removed from FlxVs + JTVMZ with the optional "logged in" message
  (dp.java:435-530); the old impl removed spots for players merely present
  (which would erase vanish-type spots).
- Removed the invented `clearAll()`/`onDisable` wipe (the original clears only
  in aaj/ahw/ahr).
- Javadoc rewritten with citations + labeled [G]/[U]/[N] gaps.

### Verified 1:1 (unchanged)

- All 7 settings (dp.java:113-236): Refresh Timer 1/0-100/5 " s", Login
  Notification false, Position Render Mode Simple/Textured (default Simple,
  `ct` without SO), Position Color, Height 0.1/0.1-3/2.8 " blocks", Background
  false (unreferenced in handlers — matches original), Clear Spots int default
  -999 (IntSetting(id, min, max, default)).
- Render settings consumption: Height as the drawn extent, Background as the
  backdrop switch, Position Color as the outline color.
- Trace cross-check: `aaj → ahx` (188 `ahz` entity tests, 1 player found),
  `aht` ×6, `ahL` (int decryptor) returned **20** — confirms the ×20 tick
  multiplier constant in aht.

### Remaining gaps

- [U] `mT.cpD` tick quantum `fCqJQ` is DES-encrypted (mT_.class static block):
  read as 50 ms so `VC()*20` ticks equals the seconds setting; labeled guess.
- [N] `ahu` renders a player-model hologram through the `kt` helper
  (PlayerEntityModel + cape/elytra + skin passes, kt.class javap — helper out of
  audit scope); a box at the logout position (the registry description) stands
  in, now with the frustum gate and the recovered settings. PopChams has the
  model-render machinery if a later pass wants to reuse it.
- [U] `ahv(gk)` HUD name labels: no 2D overlay/projection surface in this
  framework (cf. FireworkSpots javadoc).
- [U] `ahs(hu)` entity-add event and `ahw(gA)` key event have no OpenGrim
  counterparts — both approximated in the tick (documented).
- [U] `ahr(gM)` bare marker event unported (no counterpart; cf. ShieldBlock/
  AirStuck notes) — spots persist until the next enable or Clear Spots.
- [U] Login-notification message text (`ahM`/`mZ.csf` 3-part build,
  dp.java:504-529) runtime-decrypted; the port emits `"<name> logged in"` via
  chat — text is a stand-in.
- Visual scale: box + outline + frustum + settings; original's model hologram
  + HUD label not reproduced.

### Evidence

javap `dp.class` (method list incl. lambdas ahz/ahy/ahA/ahB/ahC/ahD/ahE),
`dp.java:110-242, 368-394, 407-433, 435-532, 534-625, 627-708, 710-799,
801-846, 859-863`; `rD_.class`/`fo.class` javap (dml→fo, aLp); `oh.class` javap
(LivingEntity-only stream); `mT_.class` javap (cpB/cpD/cpF); trace
`by-class-casesafe/dp.jsonl` + `digests/dp.txt`.

---

## Changed files

- `src/main/java/dev/opengrim/modules/render/Trails.java` (cU)
- `src/main/java/dev/opengrim/modules/combat/KillAura.java` (fr)
- `src/main/java/dev/opengrim/modules/render/LogoutSpots.java` (dp)
- `src/main/java/dev/opengrim/modules/world/Nuker.java` — added `isMining()`
  (dI.amm() port) for the KillAura pause gate
- `src/main/java/dev/opengrim/modules/combat/AutoPotion.java` — added
  `isTriggerReady()` (fl.aJQ() port) for the KillAura pause gate

## Divergences to fold into PARITY.md (orchestrator)

- cU Trails: jk triangle-wave constants [G]; frustum culling-frustum fallback
  missing; theme-fed color default kept white.
- fr Kill Aura: Targets multiselect → players/mobs/all mode (default "all"
  = fbEDU within the LivingEntity stream); Slots (cz) as a live set; aAa()
  read as isEnabled; native aim/attack/crit core + render handlers unimplemented.
- dp Logout Spots: mT quantum 50 ms [G]; box stand-in for the kt model
  hologram; ahs/ahw/ahr/ahv approximated or unported; notification text
  stand-in; tab-snapshot addAll-without-clear quirk preserved.
