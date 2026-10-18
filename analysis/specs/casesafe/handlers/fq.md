# fq — Hitbox (module id 4, key=4, bind=-999)

## Evidence base

- Registry: `fq  sixtwo.fq  Hitbox  "Visible version of hitboxes"  key=4  bind=-999`
  (`analysis/specs/registry.tsv`); coverage matrix row `fq  Hitbox  0 0 0`. Note
  the pairing with fJ ("Invisible version of hitboxes") — fq is the local-player
  targeting/attack counterpart.
- `analysis/decompiled/payload-decrypted/sixtwo/fq.java` (1515 lines, CFR; all
  setting names/options present as plain int char arrays in the constructor).
- Runtime interception corpus: 195 `"sixtwo.fq"` records in
  `analysis/decrypted/full-dump.jsonl`, including 3 `bsm:"aNn"`,
  `desc:"(IJ)Ljava/lang/String;"` records with decrypted values `' blocks'`,
  `' blocks'`, `' ms'` — independently confirming the unit strings of Width,
  Height, and Retry Timeout.
- Helper sources verified: `payload-named/sixtwo/qL.java` (rotation manager —
  `dbI(Vec3d, ou, mw, gg)` is a **native** method [qL.java:143],
  `dbC()` returns current rotation [qL.java:145]),
  `sixtwo/qP.java` (attack manager — `ddn(Entity)` is **native** [qP.java:49]),
  `sixtwo/mT.java` (`cpB()` reset [mT.java:118], `cpC(long)` elapsed test
  [mT.java:60]), `sixtwo/jg.java` (`bBK(Vec3d, Box)` closest point on box
  [jg.java:558]), `sixtwo/ou.java` (`kxNyl` static constant [ou.java:7]),
  `sixtwo/mw.java` (`uWTdl` enum constant [mw.java:14]).
- **No native corpus**: no `sixtwo_fq.c` in `analysis/ghidra/handlers-stitched/`;
  fq is pure Java. All citations below are Java line numbers.

## Runtime model

- Construction: `super(gf.aZL(4, false, gh.xwjCw))` [fq.java:96] — module id 4,
  starts disabled, combat category `gh.xwjCw` (same as fJ/fK/ff).
- fq is a **silent-aim attack module driven by expanded hitboxes**. When the
  crosshair misses every vanilla entity, it raycasts against per-entity boxes
  expanded by the Width/Height settings, silently rotates the camera-rotation
  manager toward the expanded-hitbox intersection point, and fires the attack
  through the native attack manager once the rotated view actually hits the
  target (or a Retry Timeout elapses). Expanded-box geometry is also exported to
  the native render layer via public getters (`aNd`/`aNc`/`aNe` etc.), which is
  where the "hitbox is visible" aspect lives.
- Cached state: `float vzqAe` / `float ZLJlY` mirror the Width/Height sliders
  (refreshed via `Vd()` change callbacks [fq.java:238-245]); `Entity NZTfz` is the
  locked silent target [fq.java:87]; `mT obThK = mT.cpA()` is the retry timer
  [fq.java:246].
- Target lifecycle: locked in the attack handler, validated every pre-rotation
  event and tick, cleared by `aMN()` [fq.java:527-529] on disable (`YO()`
  override [fq.java:1477-1480]), invalidation, mode exit, or after a successful
  attack.

## Per-handler semantics

- `@hG public void aMD(gZ.tt tt2)` [fq.java:532-637] — **attack event** (gZ is the
  bare interaction-event base; `tt2.bdX(true)` cancels the vanilla attack, same
  cancel API ff uses on packets). Runs only when `bab()` (enabled) AND Mode is
  Silent (`zpLUV.SZ()`). Flow:
  1. `aMN()` clears any stale target.
  2. If `rD.dlmvG.crosshairTarget instanceof EntityHitResult` → return; vanilla
     targeting already has an entity, no interference.
  3. `aMI()` — custom raycast against expanded boxes (below); null → return.
  4. `aMO(entity)` — interaction-range check on the closest box point; null →
     return.
  5. `aMJ(entity, rD.dlX().dbC())` — entity raycast along the *current* rotation;
     non-null → return (the current view already hits the target, let vanilla
     proceed).
  6. Otherwise lock: `NZTfz = entity; obThK.cpB(); tt2.bdX(true)` — the vanilla
     attack is swallowed and replaced by the silent-aim flow.
- `@hG public void aME(gv gv2)` [fq.java:954-1057] — **pre-rotation event**
  (shared `gv` event used by other rotation modules). If disabled or not Silent
  → `aMN()` and return. If `NZTfz == null` → return. If `!aML()` (target no
  longer valid) → `aMN()`. Compute `aMK()` (closest point on target's expanded
  box, range-checked); null → `aMN()`. Otherwise send the silent rotation:
  `rD.dlX().dbI(vec3d, ou.kxNyl, mw.uWTdl, this)` — the native rotation manager
  aim call.
- `@hG public void aMF(gH.th th2)` [fq.java:1139-1287] — **tick**. Same gate
  chain (enabled, Silent, target locked, `aML()`, `aMK()` non-null; any failure
  clears the target). Then build the rotation toward the point with
  `ov.cGy(vec3d)` and re-check `aMJ(NZTfz, ov2)`:
  - If the rotated raycast does **not** hit the target and
    `obThK.cpC(this.xkXFw.VC())` (Retry Timeout elapsed) → `aMN()` (give up).
  - If it does hit: `rD.dlW().ddn(this.NZTfz)` — native attack — then `aMN()`.
- `private Vec3d aMO(Entity)` [fq.java:639-676] — null-safe; closest point on the
  entity's *original* bounding box via `jg.bBK(eye, box)`; returns the point only
  if `eye.squaredDistanceTo(point) <= player.getEntityInteractionRange()^2`.
- `private EntityHitResult aMI()` [fq.java:1058-1135] — the expanded-raycast
  engine: direction from current camera rotation (`rD.dlX().dbC()`), max
  distance = `getEntityInteractionRange()` clamped by the nearest blocking block
  (`ox.cGV().cHd(ov).cHe(range).cHp()`), search box =
  `player.getBoundingBox().stretch(dir*range).expand(1.0 + vzqAe,
  1.0 + ZLJlY, 1.0 + vzqAe)`; for every candidate (filtered by `aMM`), raycast
  eye→end against `aMH(entity, entity.getBoundingBox())` and keep the closest
  hit; returns `EntityHitResult` or null.
- `public Box aMH(Entity, Box)` [fq.java:821-920] — box expansion geometry:
  - Default branch: symmetric grow — `minX/vzqAe/2`... i.e. X and Z edges move
    out by `vzqAe/2` each side, Y edges by `ZLJlY/2` each side.
  - If the entity is a `PlayerEntity` **and** `fylmP` (Static Height) is on
    **and** the player `isGliding() || isCrawling() || isInSwimmingPose()`: use
    `EntityDimensions.STANDING` (`getDimensions(EntityPose.STANDING)`) —
    reconstructed box is centered on the original box's X/Z center with
    `width = dims.width + vzqAe`, `minY` unchanged, `maxY = minY + dims.height +
    ZLJlY`. This stops the expanded box from collapsing when the target is
    gliding/crawling/swimming.
- `public boolean aMG(Entity)` [fq.java:690-815] — attack filter: false for
  null/self; false if `QSPxG` (Disable If Holding Cobweb) and the local player
  `isHolding(Items.COBWEB)`; if `bLnpl` (Only For Slots) and `!aucRP.Uy()`
  (selected slot not in the slot set — same `cz.Uy()` semantics as fJ) → false;
  for `PlayerEntity` targets, false if `sHsoL` (Ignore Friends) and
  `rD.dmc().ddy(player)` (friend list); non-player entities pass.
- `private boolean aMM(Entity)` [fq.java:1294-1348] — raycast candidate filter:
  `entity.canHit() && !entity.isSpectator() && aMG(entity)`.
- `private boolean aML()` [fq.java:1357-1445] — target validity: non-null,
  `!isRemoved()`, `canHit()`, `aMG(NZTfz)`, and if `LivingEntity`, `!isDead()`.
- `private EntityHitResult aMJ(Entity, ov)` [fq.java:1462-1475] —
  `ox.cGV().cHd(rotation).cHe(interactionRange).cHj(e -> e == entity).cHn()` —
  raycast restricted to the one target entity.
- API surface for the native render layer (getters only, no behavior):
  `aMZ()`→ZCQrO, `aMU()`→sHsoL, `aMY()`→mEZCb, `aNe()`→NZTfz, `aMW()`→bLnpl,
  `aNc()`→vzqAe, `aNd()`→ZLJlY, `aMV()`→QSPxG, `aMX()`→aucRP, `aNa()`→xkXFw,
  `aNb()`→fylmP, `aNf()`→obThK, `aMQ()`→ufdaw, `aMR()`→zpLUV, `aMS()`→zGQMR,
  `aMT()`→TrhFC, `aMP()`→meQED [fq.java:407-521, 1289-1352].

## Settings→behavior

All names from plain int char arrays in the constructor [fq.java:96-247].

- `ct meQED` — `"Mode"` (77 111 100 101) [fq.java:97] — enum select with two
  `cu` options:
  - `ufdaw` = `"Vanilla"` (86 97 110 105 108 108 97) `.SY()` [fq.java:99-108] —
    **default**. In Vanilla mode the module does not intercept attacks at all
    (aMD/aME/aMF all bail out); it only exports geometry for rendering.
  - `zpLUV` = `"Silent"` (83 105 108 101 110 116) [fq.java:109-117] — enables
    the silent-aim attack flow above.
- `cC zGQMR` — `"Width"` (87 105 100 116 104) [fq.java:118]
  `.Vy(0.01).Vw(0.0).Vx(2.0).VA(0.0).Vz(" blocks")` — step 0.01, min 0.0,
  max 2.0, default 0.0, unit `" blocks"` (runtime record confirms unit).
  Extra X/Z expansion per side: total box width grows by `2 × Width`.
- `cC TrhFC` — `"Height"` (72 101 105 103 104 116) [fq.java:119-127]
  `.Vy(0.01).Vw(0.0).Vx(2.0).VA(0.0).Vz(" blocks")` — step 0.01, min 0.0,
  max 2.0, default 0.0, unit `" blocks"` (runtime record confirms unit).
  Y expansion: `ZLJlY/2` per side in the default branch.
- `cJ sHsoL` — `"Ignore Friends"` (14 chars) [fq.java:128-139] `.WE(false)` —
  default off; on: friends excluded from attack filtering.
- `cJ QSPxG` — `"Disable If Holding Cobweb"` (25 chars) [fq.java:140-168]
  `.WE(false)` — default off; on: `aMG` rejects everything while holding cobweb
  (mirrors fJ's self-disable).
- `cJ bLnpl` — `"Only For Slots"` (14 chars) [fq.java:169-183] `.WE(false)` —
  default off; visibility-gates `cz aucRP` = `"Slots"` (83 108 111 116 115)
  [fq.java:184] (`aucRP.Vf(this.bLnpl::WF)` [fq.java:246]). No default slots;
  empty set ⇒ filter rejects when enabled.
- `cJ mEZCb` — `"Invisible"` (73 110 118 105 115 105 98 108 101) [fq.java:185-198]
  `.WE(false)`; shown only in Vanilla mode (`mEZCb.Vf(this.ufdaw::SZ)`
  [fq.java:247]).
- `cJ ZCQrO` — `"Visible"` (86 105 115 105 98 108 101) [fq.java:199-208]
  `.WE(false)`; shown only in Silent mode (`ZCQrO.Vf(this.zpLUV::SZ)`
  [fq.java:248]). Both flags are consumed by the native hitbox renderer via
  `aMY()`/`aMZ()`; exact draw semantics are native (see Unrecovered).
- `cC xkXFw` — `"Retry Timeout"` (82 101 116 114 121 32 84 105 109 101 111 117
  116) [fq.java:209-219] `.Vy(10.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz(" ms")`;
  shown only in Silent mode (`xkXFw.Vf(this.zpLUV::SZ)` [fq.java:249]) —
  step 10.0, min 0.0, max 1000.0, default 100.0, unit `" ms"` (runtime record
  confirms unit). After this long without the rotated view hitting the target,
  the lock is dropped.
- `cJ fylmP` — `"Static Height"` (83 116 97 116 105 99 32 72 101 105 103 104 116)
  [fq.java:220-231] `.WE(false)` — default off; on: gliding/crawling/swimming
  player targets use STANDING-pose dimensions in `aMH`.

## Unrecovered

- **Native consumers of the getter API** (`aNd`/`aNc`/`aNe`/`aMY`/`aMZ`/…): the
  hitbox *rendering* that makes the expansion "visible" is in the native layer;
  how `Visible`/`Invisible` toggles map onto which boxes are drawn (e.g. whether
  Vanilla-mode expansions draw around vanilla-targeted entities) is not in this
  class.
- **`ou.kxNyl` and `mw.uWTdl` exact values.** These are rotation-priority /
  rotation-mode constants passed to the native `qL.dbI`; their enum ordinals and
  the priority ordering are defined in the native/mixin layer (fields exist in
  `ou.java`/`mw.java` but are assigned natively).
- **`qP.ddn` attack semantics** (native): whether the attack sends C2S
  interact packets immediately or waits for server-side confirmation, and
  whether it respects the click delay shared by other combat modules.
- **DES string/int tables** (`cCFLo`, `RNFBd`): statically undecryptable (per-class
  key `JcqZx` from native `gb.aYR`); behaviorally irrelevant — every string and
  int constant the logic needs is already plaintext in the constructor.