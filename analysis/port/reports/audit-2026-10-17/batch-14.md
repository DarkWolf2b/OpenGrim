# Batch 14 audit — cV, ds, dd, cY, do, cQ

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-14 subagent.
Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (one transient
failure caused by a concurrent session's in-flight edit in
`combat/TriggerBot.java`, cleared on retry; nothing outside this batch's six
modules was touched).

Sources per id from `analysis/tools/audit/source-map.tsv`; every decompile
verified by its declared class before use. Trace evidence folded from
`analysis/traces/2026-10-17/` (ENC names). Case-collision lookups resolved via
`analysis/decompiled/casesafe/` where the plain tree held the colliding twin
(`jI`/`ji`, `in`, `iq`/`iQ`, `jD`). Constants from
`analysis/decrypted/full-dump.jsonl` and the readable framework classes
(`mG_`, `cJ_`, `cC_`, `rk`, `rj`, `lC`) where applicable.

---

## cV — Skeleton ESP (`render/SkeletonEsp.java`)

- **Post-fix parity: ~96% · status: ported · fixed: yes**
- Settings: 2/2 exact — "Color" `cG(...).Uf(rD.dlM().bjG().bis())` (theme
  default, white; cV.java:74), "Line Width" `cC Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0)`
  → step 0.1 / 1.0–3.0 / default 1.0 (cV.java:86; cC_ semantics verified:
  Vy=step, Vw=min, Vx=max, VA=value).
- Fixes (this session):
  1. Visibility gate replaced — dropped the invented `isAlive()/isInvisible()`
     and 4096-distance gates; now exactly `jJ.bIB` = captured-frustum
     `isVisible(entity.getBoundingBox())` (cV.java:239-259, jJ.java:59-85).
  2. Swimming/gliding pose rotation corrected to `RotationAxis.NEGATIVE_X`
     — kq.java:278 is `new Quaternionf().rotationAxis(90+pitch, -1, 0, 0)`;
     the old `POSITIVE_X` was the inverse rotation.
  3. Removed the alpha fix-up (`argb |= 0xFF000000`); the original passes the
     raw setting int to `BufferBuilder.color(int)` (kq.java:137).
- Verified 1:1 (no change needed): bone table and order (spine, shoulders,
  pelvis, head, legs, arms with sneaking-dependent coordinates), part rotations
  (roll +Z, yaw −Y, pitch −X), renderer `updateRenderState` + `setAngles`,
  lerped-position translate via `jI.bIs` (jI_.java:108-113), line width,
  self-skip.
- Remaining gaps: the original's private `kS` pipeline state (LEQUAL depth,
  culling off — handler spec §Constructor) has no vanilla-layer equivalent;
  a null captured frustum renders instead of falling back to the world
  renderer's culling frustum (no WorldRenderer accessor mixin — same
  convention as Trails) [U, framework]. Buffer-size DES slot 707 is irrelevant
  under the shared layer.
- Evidence: trace 2026-10-17 cV — module loaded, zero handler entries (never
  exercised in the tour); behavior claims are decompile-only.

## ds — Entity ESP (`render/EntityEsp.java`)

- **Post-fix parity: ~93% · status: ported · fixed: yes**
- Settings: 6/6 — "Filled" false (ds.java:94), "Outline Color" theme white
  (109), "Fill Color" theme `.cob(0.5f)` → half alpha 0x80FFFFFF (121; mG.cob
  scales alpha, mG_.java:60-62), "Friend Outline/Fill Color" `jk.jEkxo` /
  `.cob(0.5f)` (143/162; jk.jEkxo unrecovered → 0xFF55FF55 kept, the
  repo-wide labeled guess), "Mode" `ct .SO(1)` with Model(0)/Hitbox(1) default
  Hitbox (163-172).
- Fixes (this session):
  1. Hitbox-mode expansion now calls the ported fJ module ("Target Margin")
     `marginFor(entity)` with the fJ enabled check — ds.java:396-409
     (`fJ.bag()` / `fJ.aUP(entity)`); the old hard-coded `expand(0.1)` was an
     invention.
  2. Added the `jJ.bIB` frustum gate (ds.java:361).
  3. Dropped the invented `isAlive()` skip (original: self + frustum + cF
     membership only).
- Verified 1:1: check order (self → frustum → "Entities" set → box → expand →
  camera-negate offset), friend branch via the qQ name registry
  (`rD.dmc().ddy` → FriendsManager), `kH.bTJ(stack, box, filled, false)`
  outline/fill mapping, camera-negation computed once per frame, fJ instance
  lookup once per frame.
- Remaining gaps: "Entities" `cF` preset scope `jg$tJ.OCdZM` and the item-list
  widget are unexpressible (programmatic `Set<EntityType<?>>`) [U]; the
  `kH` builder is a custom batcher, approximated by vanilla line/filled layers
  [U, framework]; null-captured-frustum fallback as in cV [U].
- Evidence: no ds trace (lowercase `d` ids were not traced); decompile-only.

## dd — Block ESP (`render/BlockEsp.java`)

- **Post-fix parity: ~85% · status: ported (scanner approximation) · fixed: yes**
- Settings: 6 registered — "Range" 1.0/1.0–128.0/100.0 suffix " blocks"
  (fixed: was "blocks", the DES literal is 7 bytes = leading space; dd.java:93),
  "Outline Color" white (108), "Fill Color" 0x80FFFFFF (120), "Filled" false
  (128), "Tracers" false (137), "Tracers Width" 0.1/1.0–3.0/1.0 (152).
  "Blocks To Highlight" (`cK` item list) is not expressible → programmatic
  `Set<Item>` + getters [U, framework].
- Fixes (this session):
  1. Scan predicate is now item-based: `state.getBlock().asItem()` membership
     (dd.java:367) — the old Block-set test diverged for item-only blocks
     (redstone wire, tripwire, crops).
  2. Per-position `jJ.bIA(center)` frustum gate added for box draws
     (dd.java:410, jJ.java:91-117 = `new Box(pos)`); tracers deliberately not
     gated (matches the original).
  3. Tracer origin rewritten to the camera entity's lerped position + eye
     height with the first-person (0,0,75) rotateX/rotateY offset
     (dd.java:446-460) — was player `getEyePos()` (non-lerped).
- Remaining gaps: the `rl` scanner (`dhJ`/`dhB`) is a shell/native contract —
  cube scan capped at 32 blocks like the sibling TrapEsp port; the true scan
  shape (sphere/cylinder) and the DES long `SSCLk` program id are unrecovered
  [U]; the 128 max range therefore does not scan in full [G, documented];
  render layer/`MMuss` batcher approximated by vanilla layers [U, framework].
- Evidence: no dd trace; decompile-only.

## cY — Shield Status (`render/ShieldStatus.java`)

- **Post-fix parity: ~70% · status: partial (native state machine) · fixed: yes**
- Settings: 5/5 exact — "Only Self" false (cY.java:82); "Color Transition"
  **false** (fixed: the cJ field default is false, cJ_.java:20, and cY.java:100
  passes no `.WE(...)` — the handler spec's "true (cJ default)" was wrong);
  "Enabled Color" and "Using Color" = `mG.rxCUH` = `cnP(0,255,71)` = 0xFF00FF47
  (fixed: was 0xFF00FF00; mG_.java:185); "Disabled Color" = `mG.vuAhq` =
  0xFFFF0000 (mG_.java:184).
- Fixes (this session): the two color defaults and the Color Transition
  default; render loop now skips alpha-0 colors and passes alpha through
  unchanged (jD.bHk's `mG.cnW()` transparent test, mG_.java:951-972; the old
  alpha force-up was an invention); javadoc now records the exact handler
  wiring and labels the guessed parts.
- Verified 1:1: `aaK` resolution order (null → mG.UhgnI transparent; Only Self →
  transparent; shield in use → Using Color; !Color Transition →
  Disabled/Enabled; else lerp(Enabled, Disabled, progress)), settings order,
  attack/packet entry points (aaM → cFz(player); aaN → EntityStatusS2CPacket
  cFy / PlaySoundS2CPacket path match cFw).
- Remaining gaps: the `on` helper is fully native (on.java:74-127; Ghidra
  `handlers-stitched/sixtwo_on.c` shows only BLOB_DECRYPTOR stubs with pool
  names) — [N]; capture condition: runtime trace of `cFA/cFB/cFC` returns per
  shield state. Guessed state machine, labeled in javadoc: 100-tick disable,
  status bytes 9/30, "shield.break"/"shield.block" substrings, 2-block sound
  radius, axe-only attack gate [G]. The original's two tick handlers (bare tick
  `cFG` clear vs post-motion `cFv` update) collapse onto one `onTick` in
  OpenGrim [U, framework]. Visual: the original queues the rendered player's
  model via jD.bHk (native/mixin caller, jD_.java:266-303) and flushes it in
  aaP/aaQ; the port draws a small outline marker above each player instead
  (approximation) [U].
- Evidence: trace 2026-10-17 cY — `aaN` entered 34×, `aaL` 6×, `YO` 2×;
  `aaO`/`aaM`/`aaP`/`aaQ` never fired (tour had no screen/attack events);
  no numeric exits. Confirms the packet path is the live one but adds no
  constants.

## do — Arrows (`render/Arrows.java`)

- **Post-fix parity: ~92% · status: ported · fixed: yes (HUD path implemented)**
- Settings: 5/5 exact — "Entities" `cF` with `.VS(jg$tJ.OCdZM)` and **no** VT
  seed (do.java:95; empty selection matches nothing), "Size"
  0.1/1.0–10.0/3.0 (96), "Radius" 0.5/20.0–100.0/50.0 (104), "Color" theme
  white (105), "Friend Color" `jk.jEkxo` → 0xFF55FF55 [G, repo-wide guess] (119).
- Fixes (this session):
  1. The invented world-space line pass was replaced by the recovered HUD
     marker: Fabric `HudElementRegistry` element registered on enable /
     removed on disable; square of `Size * 5.0f` px at
     `(centerX − w/2, centerY − Radius − rise)` rotated about the screen center
     by `ahk(entity, delta) − player.yaw` via the vanilla `Matrix3x2fStack`
     `rotateAbout` (the original's `lC.cfb` is literally
     `method_51448().rotateAbout(toRadians(a), x, y)`, lC.java:298-300);
     alpha scaled by the fade, rise `30 − 30·fade` (do$sG.doM, do$sG.java:70-96).
  2. Tick rescan corrected: local player skipped, AntiBot positives excluded
     (`rD.dml().aLp` = fo.java:118-154 enabled+bot-set; the old code used the
     friend list), unseen entries marked removed instead of dropped
     (removal deferred to the draw pass by doN, do.java:557-568).
  3. Fade animator ported from the readable `rk` (rk.java:54-134): per-entry
     value ramps toward target through ease-out-back `rj.XzDkv` =
     `dgl(1.70158)` (rj.java:527-532), removal at `removed && fade == 0`.
  4. Bearing now uses lerped positions at the frame tick delta (ahk,
     do.java:601-607).
- Remaining gaps: do$sG's fade duration `dEIfC` is DES-decrypted and absent
  from the dump — [G] 400 ms (the module-level animator's literal, do.java:121).
  The ahi GUI-offset literals (`ahq("c",15311)`/`3999`) are unrecovered — [U],
  offset left at 0 (the editor-open push-away is therefore missing). The
  render-layer name `do.eLTLf` is unrecovered; a plain `DrawContext.fill`
  stands in for the batcher layer [U].
- Evidence: no do trace (the `dO_` trace belongs to Hotbar Restorer).

## cQ — Swing Animations (`render/SwingAnimations.java`)

- **Post-fix parity: ~60% · status: partial (native profile system) · fixed: yes**
- Settings: the original's tree is exactly one action button "Edit Animation"
  (`cI(...).Wx(c::z)` opening the swing-animation editor, cQ.java:86). OpenGrim
  has no action-setting type and no editor, so the module registers **no**
  settings (the old fake `BoolSetting edit_animation` was removed); documented
  framework gap [U].
- Fixes (this session):
  1. `YF` instant equip ported via a new accessor mixin
     `mixin/ItemInHandRendererAccessor.java` (registered in
     `opengrim.mixins.json`) mirroring the original's own
     `mixin.accessors.ItemInHandRendererAccessor`: on a held-item change, when
     `equipProgressMainHand/OffHand <= 1.0f`, snap it to 1 and refresh the
     renderer's cached stack (cQ.java:240-299). The original's `hc` trigger is
     posted outside the payload (no poster found in the payload, bootstrap or
     stage2 jars) → a per-tick stack comparison stands in [G].
  2. Removed the invented re-swing logic (`player.swingHand` on progress
     crossing) and the invented fixed swing transform (0.56/−0.52/−0.72 etc.).
  3. `YH` filter kept 1:1 with corrected javadoc: true = custom transform
     applies; false for AIR, FILLED_MAP, CROSSBOW, BOW, TRIDENT, DRINK, EAT
     (cQ.java:316-433). The handler spec's "exclusion predicate returns true"
     is inverted — YG proceeds only when YH is true (cQ.java:456).
- Remaining gaps: `YG`'s transform reads the `im` profile from
  `rD.dlU().blR(swingProgress)`; the profile registry `iq` (blR/blM/blN) and
  `im`'s accessors are native (iq.java:24-173, im.java:18-94; zero decrypted
  constants), so all curve parameters are unrecovered — [N]; capture
  condition: runtime dump of the profile objects or VM deobfuscation. The
  `YI` gate's extra `in.bkZ()` profile flag (cQ.java:197) and YF's per-hand
  `in.bkX()/bkY()` flags are native and unmodeled [G, documented]. `hc`'s
  trigger point and `gm` (the first-person begin-hand-render event YG consumes)
  have no OpenGrim event counterpart [U, framework].
- Evidence: trace 2026-10-17 cQ — `YF` exercised (digest counts 4 entries; the
  captured JSONL window shows two enter/exit pairs), no numeric exits; confirms
  YF is the live path, no constants.

---

### Summary

| id | module | status | parity | fixed |
|---|---|---|---|---|
| cV | Skeleton ESP | ported | ~96% | yes |
| ds | Entity ESP | ported | ~93% | yes |
| dd | Block ESP | ported (scanner approx.) | ~85% | yes |
| cY | Shield Status | partial (native `on` VM) | ~70% | yes |
| do | Arrows | ported | ~92% | yes |
| cQ | Swing Animations | partial (native `im`/`iq` VM) | ~60% | yes |

Changed files:
- `src/main/java/dev/opengrim/modules/render/SkeletonEsp.java`
- `src/main/java/dev/opengrim/modules/render/EntityEsp.java`
- `src/main/java/dev/opengrim/modules/render/BlockEsp.java`
- `src/main/java/dev/opengrim/modules/render/ShieldStatus.java`
- `src/main/java/dev/opengrim/modules/render/Arrows.java` (rewritten)
- `src/main/java/dev/opengrim/modules/render/SwingAnimations.java` (rewritten)
- `src/main/java/dev/opengrim/mixin/ItemInHandRendererAccessor.java` (new)
- `src/main/resources/opengrim.mixins.json` (accessor registered)
