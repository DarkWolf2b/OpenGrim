# Batch 21 audit report - audit 2026-10-17

Modules: cZ (Soul Effects), fq (Hitbox).

Both are fully decompiled pure-Java payload classes (no j2cc VM bodies in the logic
paths; only the DES key helpers `gb.aYR` are native). Parity is scored against the
recovered surface: settings tree (verbatim constructor chains), handler wiring,
geometry/physics math (cross-checked against `javap -c` of the ground-truth
`jar-casesafe` classes where CFR's obfuscated control flow was mangled), and the
runtime trace.

Compile: `.\gradlew.bat compileJava -q --offline` - clean after all edits.

## Cross-cutting findings

- **`cJ` boolean default is false** (`cJ.java:20` `LIkdP = false`; only `.WE(true)`
  flips it, `cJ.java:105-125`). cZ's "Behind Walls" has **no** `.WE` call
  (cZ.java:148) => default **false**. The previous `true` was a real settings bug;
  the cZ handler spec's table ("default true") is stale. Verified against the
  casesafe payload-named-cfr twin (`cZ_.java:148`, no `.WE`).
- **`gZ$tt` (fq's attack event) is `MinecraftClient.doAttack` HEAD**: bootstrap
  `ClientEventBridgeMixin` injects `method_1536` HEAD and cancels the attack when
  the event reports handled. That is exactly Fabric's `ClientPreAttackCallback` =
  our **`AttackPressEvent`**. The previous `AttackEntityEvent` mapping was dead for
  fq's purpose: Fabric's `AttackEntityCallback` fires only after vanilla resolved a
  target entity (`Player.attack`), and fq's `aMD` returns immediately when
  `crosshairTarget instanceof EntityHitResult`. `hw$tv` (fJ TargetMargin's event)
  is `Player.attack` HEAD (bootstrap `InteractionEventBridgeMixin` `method_2918`) =
  `AttackEntityEvent` - the two attack events are distinct.
- **Packet receive runs on the netty thread** in both clients: the original
  dispatches `gL$tk` from `ClientConnection.channelRead0` HEAD (bootstrap
  `ConnectionEventBridgeMixin`, `method_10759`) and our `PacketReceiveEvent` is
  posted from the same hook. cZ's `CopyOnWriteArrayList` / `ConcurrentHashMap`
  state matches the original's thread-safe collections exactly.
- **`jI.bIs(stack, vec)` = `stack.translate(vec - cameraPos)`** (jI.java:108-113) -
  confirms the repo-wide `matrices.translate(-cameraPos)` + absolute-coordinate
  convention used by the stand-in draw passes.
- **New accessor mixins** mirror the original's own bootstrap accessors:
  `mixin.accessors.ModelPartAccessor` (`field_3663`/`field_3661`) and
  `mixin.accessors.LivingEntityAccessor.getDataHealthId()` (`field_6228`), both
  private in 1.21.11 (javap on the mapped build.6 jar). Added as
  `dev.opengrim.mixin.ModelPartAccessor` / `LivingEntityAccessor` and wired in
  `opengrim.mixins.json`. `LivingEntityAccessor` is shared: Fake Player's batch
  added the bootstrap's `callSetLivingEntityFlag` invoker to the same file
  (both halves compile together).
- Traces for this batch are thin: cZ_ (aaX x48 packet handler, aaW x2 render gate
  entered with an empty effect list, YO x1) and fq (aME x4 + aMF x4 = both handlers
  once per tick over two enable tours in default Vanilla mode, aMN x10 = one clear
  per handler call, YO x1). No spawn path (abb) and no attack path (aMD) ran in the
  tour.

---

### cZ - Soul Effects
post-fix parity: 89% | status: ported | fixed: yes

fixed:
- **"Behind Walls" default corrected to false** (cJ default, cZ.java:148) - the
  previous `true` diverged from the original's constructor.
- **Tracker trigger fixed to the health entry**: `aaZ` (cZ.java:835-935) matches
  `entry.id() == LivingEntityAccessor.getDataHealthId().id()`; the previous
  "any Float <= 0" test would false-trigger on unrelated float entries (e.g.
  ABSORPTION 0). New `LivingEntityAccessor` mixin exposes the private `HEALTH`
  tracked data.
- **Full geometry rewrite 1:1** (was a generic particle blob): model-AABB
  collection `abf`/`abg` (cZ.java:466-689, 1066-1106) via the new
  `ModelPartAccessor` - default-transform pivot translate (pixel space, no /16),
  `rotateZYX(roll, yaw, pitch)` when any angle is non-zero, scale when any scale
  differs from 1, 8 transformed corners per cuboid, area weight
  `2*(wx*wy + wx*wz + wy*wz)`, degenerate cuboids (< 0.001) skipped (all verified
  against `javap -c` of `cZ_.class`); area-weighted box pick `dnY`; 70/30
  surface/interior point `dnZ` + `abi` (cumulative face pick Z-, Z+, Y-, Y+, X-, X+
  with the 0.4 inward bias, bytecode-verified thresholds); model->world conversion
  `(point - center)/16`, Y flipped from the union top and scaled by
  `entityHeight / ((maxY-minY)/16)` when > 0.01 (cZ$su.java:207-233, bytecode
  constants 16.0f/0.01f verified); yaw rotation about the entity center; ellipsoid
  fallback `dnX` (cube-root radial, `width*0.45`, `+height*0.5` lift) when the
  model list is empty (resolved from the bytecode branch of the cZ$su constructor:
  `boxes.isEmpty()` -> dnX, else dnW).
- **Particle motion/alpha 1:1 from sixtwo.ml**: envelope
  `sin(smoothstep(t/t0)^rand(0.4,0.7) * PI)`, the 0.15*envelope lift, the three
  two-octave sine waves (freqs 0.012-0.03 / 0.005-0.015, phases 0..2PI, x1.7 phase
  factor), origin+direction*envelope*speed + waves; alpha phases (fade-in, hold
  until `t1`, smoothstep fade-out until `t2`) and the `clg`/`clj`/`cli`/`clh`
  behaviours (bytecode-verified branch structure incl. `Math.max(JJ)` shapes).
- **Lifecycle 1:1**: effects tick inside the render pass (`cZ$su.dnV` per frame,
  cZ.java:794-798), `nYGDp` released only when the particle list empties, cleanup
  `abe` releases the UUID (cZ.java:1427-1454), `YO` clears both collections.
- **Removal trigger documented stand-in**: `aba(hp)` (KILLED || isDead,
  cZ.java:998-1053) has no framework hook; the dead state is observed by the
  per-tick world scan (<= 1 tick later, UUID dedup keeps it idempotent).
- **Render stand-in labeled**: the original's framebuffer capture + glow composite
  (`kl.bQa`/`bQb`/`bQd`, `lF.cfH`, custom `kR` pipelines, `jL.uHvyh` uniform) has
  no rebuild counterpart; quads now draw through `RenderLayers.debugFilledBox()`
  with the glow halo and the collapsed "Behind Walls" pipeline choice documented.

remaining gaps:
- [G] The four DES longs of `cZ$su#dob` (bsm "doi" ids 32204/543) and `ml#clj`
  (bsm "clo" ids 11388/21204) are statically undecryptable (per-class key from
  native `gb.aYR`). Shape `max(const, lifetime / const)` recovered; values guessed
  as 100 ms / divisor 2, labeled in the javadoc (fade-in ends at the motion
  envelope's peak).
- [U] `kl.bQa/bQb/bQd` capture/composite and the `kR.bHqVE`/`kR.HUQWl` custom
  pipelines (custom shaders/assets) - visual-only collapse; "Behind Walls" has no
  effect in the stand-in.
- [U] Duration suffix `ZBgUJ` (DES string, not in the trace); `" s"` kept from the
  handler spec (presumption).
- [U] Theme-fed color defaults (`rD.dlM().bjf()`) - white stand-in per repo
  convention; `.We()` is the picker's alpha flag, not a behavior switch.
- [N] None - the class is pure Java; `gb.aYR` only derives the DES keys.

### fq - Hitbox
post-fix parity: 90% | status: ported | fixed: yes

fixed:
- **Category corrected to COMBAT** (fq.java:97 `gh.xwjCw`, the fJ/fF/ff family) -
  the module was registered as RENDER. File kept at `modules/render/Hitbox.java`
  for the audit's path stability (the category, not the package, is what the
  original registers).
- **"Slots" (cz aucRP) setting added** (fq.java:184) as the repo's nine-toggle
  group (TargetMargin/NoMiss precedent), empty by default (cz.java:26), with the
  `Only For Slots` visibility gate; `aMG` now checks
  `onlyForSlots && !slotsContain(selectedSlot)` in the original order
  (cobweb -> slots -> friends).
- **Visibility gates wired** (fq.java:244-249): Slots iff Only For Slots,
  Invisible iff Vanilla mode, Visible + Retry Timeout iff Silent mode.
- **Attack event corrected to `AttackPressEvent`** (= `gZ$tt` at
  `MinecraftClient.doAttack` HEAD; bootstrap-verified) - the previous
  `AttackEntityEvent` subscription could never reach the miss-interception path.
- **`aMI` expanded raycast fixed 1:1**: direction from
  `RotationManager.effectiveRotation()` (was the raw player rotation), block clamp
  (`ox.cHp` shape: world raycast along the rotation, OUTLINE/NONE, range), search
  box `stretch(dir*range).expand(1+Width, 1+Height, 1+Width)`, `aMM` candidates
  (`canHit() && !isSpectator() && aMG`), strictly-closest hit wins, hit position
  carried into the `EntityHitResult` (was target-only).
- **`aMJ` single-target raycast fixed to the `ox.cHn` shape**: block-clamped end
  point, `stretch(dir*range).expand(1,1,1)` box, `!isSpectator() && e == target`
  predicate, range^2 max (was `player.getBoundingBox().expand(range)`).
- **`aMF` tick fixed**: computes the rotation toward the closest point
  (`ov.cGy`) and raycasts along *that* rotation (was the live camera view),
  attacks only on a hit, and drops the lock on strictly `elapsed > Retry Timeout`
  (`mT.cpC` = `now - start - timeout > 0`, was `>=`).
- **`aME` pre-rotation folded into the tick** (framework has no pre-rotation
  event): submits the silent rotation via
  `RotationManager.submitRotation(..., RotationPriority.uWTdl, this)` (= `qL.dbI`,
  fq.java:1054) before the attack check; behaviorally identical to the original's
  aME -> aMF per-tick order.
- **`aML`/`aMO`/`aMH` re-verified 1:1** (validity incl. `canHit()`, closest-point
  range check, STANDING-pose rebuild for gliding/crawling/swimming players).
- **Attack through the native `qP.ddn` ported as `TriggerBot.attack`**
  (attackEntity + swing), the repo's shared labeled stand-in for the native attack
  manager.

remaining gaps:
- [U] The native hitbox renderer consuming `aMY`/`aMZ`/`aNe`/`aNc`/`aNd`... (fq.md
  "Unrecovered"): the Visible/Invisible draw semantics are not in the corpus. The
  world-render pass is a labeled [G] stand-in (mode-flag-gated expanded boxes,
  `RenderLayers.lines()`).
- [U] `qP.ddn` native attack semantics (immediate interact packet vs. click-delay
  gating) - the stand-in sends `interactionManager.attackEntity` + swing.
- [U] `ou.kxNyl` rotation-policy constant (no rebuild counterpart; priority and
  owner carried).
- [G] The `cz` slot-list widget is not expressible in the settings API; the
  nine-toggle group is the repo's established approximation.
- Trace 2026-10-17: aME x4 / aMF x4 / aMN x10 / YO x1 confirm the two-handler
  per-tick structure and the mode-gate clear; capture condition for the attack
  path: enable Silent mode, aim beside an entity within reach and press attack.
