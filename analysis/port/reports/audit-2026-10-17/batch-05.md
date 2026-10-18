# Batch 05 audit report — audit 2026-10-17

Modules: fz (Auto Jump Reset), dD (Item Frame Blocker), dK (Auto Lever Replace),
fL (Auto Tool), fC (Velocity), em (High Jump), fA (Potion Refill), eO (Auto Pearl
Catch), dS (Hand No Clip), eF (Spear Reach). All ten are j2cc-native classes; every
behavior body lives in the obfuscation VM. Parity is scored against the **recovered
surface** = registry rows + decompiled constructors/settings/listener declarations +
the handler-spec pool-token runs, per `analysis/specs/casesafe/handlers/*`.

Registry rows verified verbatim from `analysis/jars/bootstrap-raw/offline/features/metadata.txt`:
fz key=23, dD key=70, dK key=130, dS key=55, fL key=22, fC key=24, em key=167,
fA key=7, eO key=118, eF key=128 — **all bind=-999** (no keybinds; impls' default
-999 is correct, `dD`'s explicit `setBind(-999)` is a no-op). All ten register
disabled (`gf.aZL(id, false, …)`) and none overrides `bootEnabled()` ✓.

Runtime trace (`win/trace.jsonl`, class-qualified grep): all ten classes appear
(init-registry), but for every one **only `<clinit>`, `<init>` and the constant
decryptor kernels ran** (fz `aRW/aRX/aRY/aRZ`; dD `akD/akE/akF`; dK `ann/ano/anp`;
dS `apF/apG/apH`; fL `aVi…aVo`; fC `aSA…aSG`; em `atm/atn/ato`; fA `aSc…aSf`;
eO `aBx/aBy/aBz`; eF `awQ…awT`) — **no behavior handler executed**, and the trace
logs no values (enter/exit only). All behavior remains [N] VM-virtualized.

## Case-twin landmine (affects this batch)

1. `source-map.tsv` handlerSpec column: `handlers/fC.md` documents **sixtwo.fc
   Cart Refill**, `handlers/dK.md` documents **sixtwo.dk XRay**, `handlers/eF.md`
   documents **sixtwo.ef Elytra Swapper**, `handlers/eO.md` documents **sixtwo.eo
   No Slow** — all four are case-collapsed wrong twins. Correct specs used:
   `casesafe/handlers/fC_.md`, `casesafe/handlers/dK_.md`, `casesafe/handlers/eF_.md`,
   `casesafe/handlers/eO_.md`. The other six map rows (fz, dD, dS, fL, fA, em) are correct.
2. Ghidra annotated corpus: `handlers-full-annotated/sixtwo_fz.c` and
   `sixtwo_em.c` declare `Lsixtwo/fZ` and `Lsixtwo/eM` (wrong twins). Correct
   corpora: `casesafe/handlers-stitched/sixtwo_fz.c` and `sixtwo_em.c`.
   `sixtwo_fC_.c`/`sixtwo_fA_.c` exist only under `casesafe/handlers-stitched`.
   `sixtwo_dD.c`, `sixtwo_dK.c`, `sixtwo_dS.c`, `sixtwo_fL.c`, `sixtwo_eO.c`,
   `sixtwo_eF.c` in `handlers-full-annotated` are the correct classes (verified
   `Lsixtwo/<id>;` in the header).
3. Impl javadocs already pointed at the correct casesafe spec files for
   dK/eO/eF (fixed in earlier sessions); this batch corrected fL/fC/dS citations.

---

### fz — Auto Jump Reset
post-fix parity: 80% | status: partial | fixed: yes
fixed:
- Only From Players now uses the recovered API `Attackable.getLastAttacker`
  (`method_49107` in fz's exclusive token run, handlers/fz.md:37-38) instead of
  `getRecentDamageSource()`: original fz.java:71 + pool run vs impl
  AutoJumpReset.java:91. Same guard semantics (last attacker must be a
  `PlayerEntity`), but on the evidenced call surface.
- Javadoc extended with the mW/mU citations (`mW_.java:33-58` latch,
  `mU.cpN` percent roll `mU.java:133-189`) and the guard-order ambiguity.
- Verified: settings exact — Chance `Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0)` =
  step 1.0 / min 1.0 / max 100.0 / default 100.0 (fz.java:36), Cancel In Fire
  `.WE(false)` (fz.java:52), Only From Players `.WE(true)` (fz.java:71); Combat
  category `gh.xwjCw` (fz.java:28); declaration order Chance → Cancel In Fire →
  Only From Players ✓.
remaining gaps:
- [N] `aRT(Lsixtwo/gL$tk;)V` (S2C packet handler, image 18b087870), `aRU(Lsixtwo/hc;)V`
  (hurt trigger, 18b092140), `YO()V` (disable override) — VM-virtualized → needs
  runtime trace (trace shows no behavior-handler entry).
- [U] Guard order: the pool token order (EiuwG/isOnFire → ZGNVq → QrNyB/getLastAttacker,
  handlers/fz.md:28) conflicts with the spec's inferred order; all guards are pure
  early-returns, so only the roll position relative to them is affected. Left as is.
- [U] Latch re-arm: the original resets `mW` via `crA()` somewhere (aRU(hc) vs
  per-packet — unresolved); our bus has no `hc` event, so the latch re-arms per
  tick (documented substitution, one roll per packet).
- [U] Jump mechanism (which control is spoofed, for how many ticks) — no
  `KeyBinding`/`jumpKey`/`input` token exists in fz's window; impl spoofs
  `PlayerInput.jump` + `player.jump()`.
- [U] Chance suffix `.Vz(ddesD)` is DES-encrypted (undecrypted); `" %"` assumed.
- [U] Packet-type discrimination is not token-visible in fz's run (the
  `EntityVelocityUpdateS2CPacket` tokens belong to fC's slice of the shared
  `0x13fec` window) — impl filters on `EntityVelocityUpdateS2CPacket` + local id.
evidence: payload-decrypted/sixtwo/fz.java:26-98; handlers/fz.md:28-45,62-105;
casesafe/handlers-stitched/sixtwo_fz.c (`Lsixtwo/fz`; aRT/aRU/YO) vs
src/main/java/dev/opengrim/modules/movement/AutoJumpReset.java:38-105.

### dD — Item Frame Blocker
post-fix parity: 80% | status: partial | fixed: yes
fixed:
- **Attack-packet exclusion (behavior fix).** The original cancels the right-click
  *use* event `gO$tm` (handlers/dD.md:60-67); the port's stack adaptation cancels
  the resulting `PlayerInteractEntityC2SPacket`, which previously also cancelled
  left-click ATTACK packets (breaking frames). The packet now dispatches through
  its public `handle(Handler)` (`method_34209`; ground truth verified in the
  obfuscated client: `aiy.a(aiy$c)` → `this.action.dispatch(handler)`, ATTACK
  handler `aiy$1` invokes the no-arg callback) and ATTACK packets pass through:
  ItemFrameBlocker.java:90-92,151-168.
- Verified: settings exact — Mode group with All Items / Only Weapons /
  Specified Slots (dD_.java:26-81, radio-shaped ct+cu) and Slots action
  (dD_.java:82-93); recovered decision pipeline fully present — crosshairTarget
  (`field_1765`) → `HitResult.getType() == Type.ENTITY` (`method_17783`,
  `field_1331`) → `EntityHitResult.getEntity()` (`method_17782`) →
  `ItemFrameEntity` (`class_1533`) → filter → cancel (handlers/dD.md:68-82);
  Only Weapons uses the fully recovered `oR.cJV` = `isIn(SWORDS) || isIn(AXES) ||
  isOf(MACE)` on the main hand (oR.java:516, impl:142-144) ✓.
remaining gaps:
- [N] `akB(Lsixtwo/gO$tm;)V` (the module's only behavior entry, image 18df69e10) —
  VM-virtualized → needs runtime trace.
- [G] high-probability guess: default Mode = All Items (first cu; no `.SY()` marker
  on any of the three entries, so the original default is unmarked).
- [G] high-probability guess: the `cz` "Slots" picker is encoded as nine hotbar
  toggles (pattern from fA's `cz .Uw(int[])`); defaults unrecovered.
- [U] Cancel scope: whether cancelling stops just the frame placement or the whole
  use action is native (handlers/dD.md:132-133).
- [U] GlowItemFrame coverage depends on the VM type test (`instanceof` would include
  it — impl uses `instanceof`, unproven).
evidence: casesafe/payload-decrypted/sixtwo/dD_.java:23-111; handlers/dD.md:27-48,
60-135; handlers-full-annotated/sixtwo_dD.c (`Lsixtwo/dD`) vs
src/main/java/dev/opengrim/modules/utility/ItemFrameBlocker.java:46-169.

### dK — Auto Lever Replace
post-fix parity: 65% | status: partial | fixed: no
fixed:
- No code change warranted. Verified settings exact — Work With group
  (cv, dK_.java:27-37) with Auto Trap (cw, no `.Tz()` → default off, dK_.java:38-49)
  and Auto Web (cw, default off, dK_.java:50-60); Ignore Walls `.WE(true)`
  (dK_.java:61-74) ✓; listeners mapped — tick `ana(gv)` (impl onTick), block-change
  `anc(gV)` (impl PacketReceiveEvent with BlockUpdateS2CPacket/ChunkDeltaUpdateS2CPacket,
  clearing on `method_26215` isAir, matching the recovered window token), render
  marker `anb(gH$th)` documented absent; `qL.dbI` attack submission mapped to
  `RotationManager.submitPosition(…, RotationPriority.uWTdl, this)` +
  `interactionManager` destroy (impl:156-160) — `mw.uWTdl` is the recovered
  priority constant; `jg.bBG(Vec3d,F)` eye-distance contract matches
  `withinEyeRange` (impl:229-231, jg.java:573-594); getters `ank()/anl()` mirrored
  by `getTarget()/getRange()`.
- Citation fix pending note: javadoc already cites casesafe dK_.java / dK_.md ✓.
remaining gaps:
- [N] `ana(Lsixtwo/gv;)V` (tick, 18dd51400), `anc(Lsixtwo/gV;)V` (block change,
  18dd856f0), `anb(Lsixtwo/gH$th;)V` (render marker, 18dd80fe0), `and(Z)V`,
  `ane()V`, `anf()V` — VM-virtualized → needs runtime trace (trace: ctor/clinit only).
- [U] Target acquisition: how the lever enters `vuasL` (crosshair raycast vs
  trap/web placement position) is VM-only (dK_.md "Unrecovered" #1); the impl
  invents a radius scan (standalone) / partner-module candidate positions.
- [U] `Work With` semantics: cooperation vs suppression is unrecovered (dK_.md #6);
  impl requires an enabled partner when a child is checked.
- [U] Interaction path: `updateBlockBreakingProgress`/`attackBlock` choice is not
  decodable (dK_.md #3); `and(Z)/ane()/anf()` roles unknown.
- [U] `jcQsa` float semantics (range vs progress) unresolved (dK_.md #2); impl
  feeds the player's block interaction range.
- [U] Render marker `anb` (candidate: target highlight) unimplemented — no
  render-specific tokens recovered.
evidence: casesafe/payload-decrypted/sixtwo/dK_.java:24-119; casesafe/handlers/dK_.md:46-99,
121-134; handlers-full-annotated/sixtwo_dK.c (`Lsixtwo/dK`) vs
src/main/java/dev/opengrim/modules/world/AutoLeverReplace.java:55-251.

### dS — Hand No Clip
post-fix parity: 70% | status: partial | fixed: partial
fixed:
- Javadoc citation corrected from the unverified `payload-named-cfr/sixtwo/dS.java`
  to the declared-class-verified `casesafe/payload-decrypted/sixtwo/dS_.java:26-99`
  plus the full settings/handler evidence (HandNoClip.java:14-30).
- Verified: settings exact — Ignore group (ct, dS_.java:29-36) with All / Specified
  (cu, dS_.java:37-54); Work On (cv `.Tm(1)`, dS_.java:55-63) with Place and Break
  (`cw .Tz()` → default on — same marker convention as eo No Slow's default-on
  children, eo.java:137-171); Blocks item set `cK .WM(jc.GjreY).WN(COBWEB, PAINTING)`
  (dS_.java:90-98) with the `Vf(UeXgv::SZ)` callback encoded as visibility gating.
  Recovered handler contract implemented: shape replacement while the block is
  relevant to the current action + Ignore mode (handlers/dS.md:61-69); impl sets
  `Blocks.AIR` replacement (empty collision shape — our `CollisionShapeEvent`
  substitute for `VoxelShapes.empty()` via `hm.bcS`) at HandNoClip.java:58-70.
remaining gaps:
- [N] `apC(Lsixtwo/hm;)V` (the entire behavior, 18da56430), `apD()Z` (private
  predicate, 18da5afa0) — VM-virtualized → needs runtime trace (trace: ctor/clinit
  only).
- [U] The action gate: `field_1886` (`KeyBinding.attackKey`) participates in the
  predicate and `apD()`'s exact combination is virtualized (handlers/dS.md:61-69,
  "Unrecovered" #1) — impl only gates on the Place/Break toggles, not key state.
- [U] `cv.Tm(1)` / `cw.Tz()` / `cu.SZ()` builder-arg semantics are native
  (handlers/dS.md #2); the Place/Break defaults follow the `.Tz()` = on convention.
- [U] The item→block mapping for the `cK` set: `Items.PAINTING` is an entity and
  inert on the block-shape path (documented); only `Items.COBWEB` → `Blocks.COBWEB`
  is consulted.
- [U] Which vanilla call sites consume the mutated shape (attack raycast vs block
  collision vs outline) is unlocated (handlers/dS.md #4) — our event fires from
  `AbstractBlockState.getCollisionShape(BlockView, BlockPos)` (CollisionShapeMixin.java:17-27).
evidence: casesafe/payload-decrypted/sixtwo/dS_.java:26-118; handlers/dS.md:23-69,77-90;
handlers-full-annotated/sixtwo_dS.c (`Lsixtwo/dS`) vs
src/main/java/dev/opengrim/modules/combat/HandNoClip.java:14-82.

### fL — Auto Tool
post-fix parity: 70% | status: partial | fixed: partial
fixed:
- Javadoc citation corrected to `casesafe/payload-decrypted/sixtwo/fL_.java:28-101`
  (was the unverified `payload-named-cfr` path), with the tick/worker/handler
  line evidence (AutoTool.java:14-24).
- Verified: settings exact — Cooldown `.UG(10.0).UE(0.0).UF(1000.0).UI(50.0,100.0).
  UH(" ms")` (fL_.java:40), Return Back `.WE(false)` (fL_.java:53), Return Delay
  same chain (fL_.java:67) — impl DoubleSettings (10.0, 0.0, 1000.0, 50.0, " ms")
  in declaration order ✓ (AutoTool.java:25-27); tool scoring uses the recovered
  `Item.getMiningSpeedMultiplier(BlockState)` (`method_7924`, fL slice)
  (impl:101) ✓.
remaining gaps:
- [N] `aVf(Lsixtwo/gH$th;)V` (tick, 18ac20330), `aVg(Lnet/minecraft/class_2680;)V`
  (BlockState worker, 18ac47cc0), `YO()V` (18ac1ff00) — VM-virtualized → needs
  runtime trace (trace: ctor/clinit only).
- [U] Swap trigger source (crosshair `BlockHitResult` vs `currentBreakingPos` vs
  mining progress) and whether swaps happen mid-mine or on block change (fL.md #2) —
  impl uses `interactionManager.isBreakingBlock()` + crosshair target.
- [U] Inventory scan scope and tie-breaking (fL.md #3) — impl scans hotbar 0-8,
  first strictly-better speed wins.
- [U] `ol` division of work and `mT` timer use (fL.md #4) — impl uses
  System.currentTimeMillis + last-switch gating.
- [U] Role of `boolean aLWOy = true` (fL.md #5) unported (no recovered link).
- [U] Possible creative-mode guard (`method_2920`/`method_8386` tokens sit in fM's
  window segment — attribution unprovable, fL.md #6); not implemented.
evidence: casesafe/payload-decrypted/sixtwo/fL_.java:28-101; handlers/fL.md:23-29,33-40,
65-80; handlers-full-annotated/sixtwo_fL.c (`Lsixtwo/fL`) vs
src/main/java/dev/opengrim/modules/combat/AutoTool.java:14-109.

### fC — Velocity
post-fix parity: 75% | status: partial | fixed: partial
fixed:
- Javadoc spec citation corrected to `analysis/specs/casesafe/handlers/fC_.md`
  (the mapped `handlers/fC.md` is the fc Cart Refill twin).
- Verified: settings exact — Horizontal / Vertical `UG(1.0).UE(0.0).UF(100.0).
  UI(100.0,100.0).UH(" %")` (fC.java:39,49), Disable In Fluid `.WE(false)`
  (fC.java:67) ✓; recovered handler order present — filter to
  `EntityVelocityUpdateS2CPacket` → `pltDm` + `isInLava` (`method_5771`) pass-through
  → rewrite (casesafe/handlers/fC_.md:49-63) ✓ (impl:48-74).
remaining gaps:
- [N] `aSw(Lsixtwo/gL$tk;)V` (packet handler, 18af2bc60), `aSx(DDI)D` (per-axis
  transform, 18af349c0), `aSy(class_2743,DDD)V` (rewrite, 18af54690) —
  VM-virtualized → needs runtime trace (trace: ctor/clinit only).
- [G] high-probability guess: the per-component formula `v * pct / 100`
  (impl:76-78). The corpus shows only one `dadd` and no `dmul`/`ddiv`; the spec
  explicitly forbids guessing the multiplication (fC_.md "Unrecovered" #1) — the
  identity-at-100 behavior is the only evidenced anchor.
- [G] high-probability guess: entity filter to the local player id (fC_.md #6 —
  whether any entityId filter exists is not evidenced).
- [G] high-probability guess: cancel + `player.setVelocity` instead of the
  original in-place packet mutation via `ClientboundSetEntityMotionPacketAccessor
  .setMovement` (fC_.md:60-63) — the accessor mixin is not in this stack; same
  client-visible effect, but vanilla handling is suppressed instead of applied
  mutated (fC_.md #5 unresolved).
- [U] The `iU.bwT` delayed path (delay/args/cancel predicate VM-only, fC_.md #3-4)
  is not implemented; impl rewrites immediately.
- [U] "Disable In Fluid" covers only lava (`method_5771` is the only fluid
  predicate in the pool, fC_.md #7).
evidence: payload-decrypted/sixtwo/fC.java:25-97; casesafe/handlers/fC_.md:15-63,68-88;
casesafe/handlers-stitched/sixtwo_fC_.c (`Lsixtwo/fC`) vs
src/main/java/dev/opengrim/modules/combat/Velocity.java:14-78.

### em — High Jump
post-fix parity: 75% | status: partial | fixed: yes
fixed:
- **Grim Shulker scan restructured to the recovered calls.** The tick upkeep
  (`atj`) reads `Entity.getChunkPos` (`method_31476`), `World.isChunkLoaded`
  (`method_8393`), `World.getChunk` (`method_8497`), `ja.byD(WorldChunk)`
  (= `new ArrayList<>(chunk.getBlockEntities().values())`, fully recovered Java
  ja.java:26-28) and feeds each `ShulkerBoxBlockEntity` to `atk`
  (handlers/em.md:49-66,81-89). Impl now scans the player's chunk block entities
  (HighJump.java:104-116) instead of probing only the block below the player.
- Javadoc rewritten: honest `[U] reconstruction` note (no `hs` event in this
  stack; float mapping VM-only) replacing the previous "parity: full" overclaim;
  constructor/listener citations added (HighJump.java:15-41).
- Verified: settings exact — Mode group with Vanilla / Grim Shulker `.SY()`
  (default mode, em.java:25-60); Jump Height `Vy(0.01).Vw(1.0).Vx(3.0).VA(1.6)`
  + `Vf(Mbkzf::SZ)` (em.java:73); Vertical Boost `Vy(0.01).Vw(0.1).Vx(3.0).VA(1.91)`
  + `Vf(nszob::SZ)` (em.java:89); Movement category `gh.xgeEn` + `.aZS(false)`
  metadata (em.java:24) ✓.
remaining gaps:
- [N] `ati(Lsixtwo/hs;)V` (jump-velocity event, 18d1a6f20), `atj(Lsixtwo/gH$th;)V`
  (tick, 18d1ac2c0), `atk(Lnet/minecraft/class_2627;)Z` (18d1b3400) —
  VM-virtualized → needs runtime trace (trace: ctor/clinit only).
- [U] Mapping of Jump Height / Vertical Boost onto jump velocity (em.md #1) — impl
  scales the jump-off velocity once per jump after leaving the ground.
- [U] `atk`'s acceptance condition (em.md #2) — impl uses the proximity test
  (|dx|,|dz| ≤ 1, y within [feet−2, feet]).
- [G] high-probability guess: the `Vf(Mbkzf::SZ)` / `Vf(nszob::SZ)` wiring is
  encoded as per-mode slider visibility (repo convention; the original callback
  most plausibly re-selects the mode when its slider changes).
- [U] `cu.SY()` argument and `.aZS(false)` metadata flag meanings (em.md #3).
evidence: payload-decrypted/sixtwo/em.java:22-114; handlers/em.md:30-66,81-102;
casesafe/handlers-stitched/sixtwo_em.c (`Lsixtwo/em`) vs
src/main/java/dev/opengrim/modules/movement/HighJump.java:15-117.

### fA — Potion Refill
post-fix parity: 70% | status: partial | fixed: no
fixed:
- No code change warranted. Verified settings exact — Delay
  `UG(5.0).UE(0.0).UF(1000.0).UI(0.0,50.0).UH(NSrLe)` → step 5 / min 0 / max 1000 /
  default 0 (first UI arg), suffix encrypted → null (fA.java:38-54); Hover
  `.WE(false)` (fA.java:55-67); Randomize Slots `.WE(false)` (fA.java:68-84);
  Slots To Refill `cz .Uw([0..8])` (fA.java:85-112) → nine default-on toggles;
  timer `mT.cpz()` (fA.java:113) → ms gate; tick listener `aSa(gH$th)` → onTick ✓.
  Technique matches the template twin fc: timer-gated scan of the selected hotbar
  slots, refill via `ClickType.SWAP` (`field_7791` recovered for fc, fA.md
  "Unrecovered" #1), `Collections.shuffle` for Randomize Slots ✓ (impl:90-104,120-123).
remaining gaps:
- [N] `aSa(Lsixtwo/gH$th;)V` (the entire behavior, 18b02a580) — VM-virtualized →
  needs runtime trace (trace: ctor/clinit only).
- [U] The inventory-swap mechanism inside `aSa` (no ClickType/ScreenHandler token
  in fA's own segment; inferred from fc) — impl uses
  `clickSlot(currentScreenHandler.syncId, sourceSlot, hotbarSlot, SWAP, player)`.
- [U] "Hover" semantics (GUI-hover gate vs hover-key hold, fA.md #2) — impl:
  only while an inventory screen is open (labeled guess, matches fc's twin).
- [U] Delay units (ms at 10 ms granularity vs ticks, fA.md #4) and suffix `NSrLe`.
- [U] Refill cadence: one slot per Delay window (impl) vs all targets per pass —
  VM-only.
evidence: payload-decrypted/sixtwo/fA.java:35-122; handlers/fA.md:23-38,58-88;
casesafe/handlers-stitched/sixtwo_fA_.c (`Lsixtwo/fA`) vs
src/main/java/dev/opengrim/modules/combat/PotionRefill.java:18-142.

### eO — Auto Pearl Catch
post-fix parity: 65% | status: partial | fixed: no
fixed:
- No code change warranted. Verified settings exact — Activation Key
  `cD .VO(-999)` (eO.java:27-44) → IntSetting(-999..348, default -999); Wind Charge
  Delay `Vy(10.0).Vw(150.0).Vx(500.0).VA(250.0)` (eO.java:45-61); Return Slot
  `.WE(true)` (eO.java:62-74); Return Delay `UG(10.0).UE(0.0).UF(1000.0).
  UI(50.0,100.0)` + `Vf(GzaZR::WF)` (eO.java:75-91) ✓. Listeners mapped: tick
  `aBv(gH$th)` → onTick, pre-rotation `aBu(gv)` → RotationManager submission,
  mouse `aBt(gA)` → per-tick key poll (no mouse event on our bus), `YO()` →
  onDisable ✓; items `Items.WIND_CHARGE`/`Items.MACE` (`field_49098`/`field_49814`)
  and `ol` scheduler + `mT` timer shapes present.
remaining gaps:
- [N] `aBt(Lsixtwo/gA;)V` (mouse/activation, 18c06d720), `aBu(Lsixtwo/gv;)V`
  (pre-rotation, 18c074540), `aBv(Lsixtwo/gH$th;)V` (tick, 18c078bd0), `YO()V` —
  VM-virtualized → needs runtime trace (trace: ctor/clinit only).
- [U] Pearl-tracking math (prediction, wind-charge aim point, `eQ.aBF(eQ,Z,qL)→ov`
  interpolation) — VM-only (eO_.md "Unrecovered" #1); impl aims at the pearl's
  current position.
- [U] The mace phase (`Items.MACE` token) is virtualized and not replicated.
- [U] Return Slot switch mechanics (no packet tokens in the slice, eO_.md #2) —
  impl restores `PlayerInventory.setSelectedSlot`.
- [U] `eT.aDw(PlayerEntity)Z` owner predicate and `oW$vp` builder options
  (`dwX(F)`, `dxf(Z)`) unrecovered (eO_.md #4) — impl accepts owner-null pearls
  and skips non-local owners.
- [G] high-probability guess: Return Delay visible-while-Return-Slot (the original
  `Vf(GzaZR::WF)` callback toggles Return Slot when Return Delay changes).
- [U] Time units of Wind Charge Delay / Return Delay (eO_.md #3).
evidence: payload-decrypted/sixtwo/eO.java:24-120; casesafe/handlers/eO_.md:24-101;
handlers-full-annotated/sixtwo_eO.c (`Lsixtwo/eO`) vs
src/main/java/dev/opengrim/modules/movement/AutoPearlCatch.java:20-144.

### eF — Spear Reach
post-fix parity: 70% | status: partial | fixed: no
fixed:
- No code change warranted. Verified settings exact — Allowed Items
  `cK .WM(jc.WnbNG).WN(12 swords+axes, all default)` (eF.java:62-90); Return Delay
  `UG(10.0).UE(0.0).UF(1000.0).UI(50.0,100.0).UH(feInP)` → default 50, suffix
  native-decrypted → null (eF.java:91-104) ✓. Reach pipeline matches the recovered
  window (casesafe/handlers/eF_.md:51-78,85-106): held stack →
  `get(DataComponentTypes.ATTACK_RANGE)` (`method_58694`, `awK`) →
  `AttackRangeComponent.defaultForEntity` (`method_76734`) → `maxRange`/LUNGE;
  spear identity via the `SPEARS` tag (`field_63257`); attack event `awH(hw$tv)`
  distance evaluation + hotbar swap; `awF(gY)` reach write mapped to
  `InteractionRangeEvent` (ENTITY) ✓.
remaining gaps:
- [N] `awH(Lsixtwo/hw$tv;)V` (attack, 18c981be0), `awF(Lsixtwo/gY;)V` (reach,
  18c921d60), `awG(Lsixtwo/gZ$tt;)V` (marker, 18c981a00), `awE(Lsixtwo/gH$th;)V`
  (render marker, 18c91eed0), `awI(Lnet/minecraft/class_1297;)Z` (18c985870),
  `awJ()Lsixtwo/oI;` (18c98e690), `awK(Lnet/minecraft/class_1799;)…` (18c98fd40),
  `awO(Lnet/minecraft/class_1799;)Z` (18c9293a0) — VM-virtualized → needs runtime
  trace (trace: ctor/clinit only).
- [G] high-probability guess: the reach value written is the spear's
  `getEffectiveMaxRange(player)` (`method_76739`) — the write-formula inside
  `bco(double)` is VM-only and must not be guessed (eF_.md #1); the impl raises
  the event value only when greater than vanilla.
- [U] Swap choreography (which slot, click-window vs packet, `useKey.setPressed`
  role — the awJ window shows the primitives, eF_.md #2); impl swaps the hotbar
  slot inside the cancellable attack event and returns after Return Delay.
- [U] `SPEARS`/`LUNGE` attribution vs sibling eG Spear Lunge (eF_.md #3); the
  cross-module call eF → eG.axm is certain but unimplemented.
- [U] `gZ$tt` / `gY` firing-site semantics (eF_.md #4-5); `awG`/`awE` unimplemented.
- [U] `feInP` suffix (likely " ms" by analogy, not evidenced, eF_.md #7).
evidence: payload-decrypted/sixtwo/eF.java:15-114; casesafe/handlers/eF_.md:25-106,117-153;
handlers-full-annotated/sixtwo_eF.c (`Lsixtwo/eF`) vs
src/main/java/dev/opengrim/modules/combat/SpearReach.java:19-236.

---

## Summary

| id | module | parity | status | fixed |
|---|---|---|---|---|
| fz | Auto Jump Reset | 80% | partial | yes |
| dD | Item Frame Blocker | 80% | partial | yes |
| dK | Auto Lever Replace | 65% | partial | no |
| fL | Auto Tool | 70% | partial | partial |
| fC | Velocity | 75% | partial | partial |
| em | High Jump | 75% | partial | yes |
| fA | Potion Refill | 70% | partial | no |
| eO | Auto Pearl Catch | 65% | partial | no |
| dS | Hand No Clip | 70% | partial | partial |
| eF | Spear Reach | 70% | partial | no |

All ten: settings verified 1:1 against the decrypted constructors (names, order,
step/min/max/default/suffix/gates); behavior is scored over the recovered surface
only — every behavior handler is VM-virtualized and no behavior ran in the trace.
No shared framework/mixin files were touched.

compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (after all edits).

changed files:
- src/main/java/dev/opengrim/modules/movement/AutoJumpReset.java
- src/main/java/dev/opengrim/modules/utility/ItemFrameBlocker.java
- src/main/java/dev/opengrim/modules/movement/HighJump.java
- src/main/java/dev/opengrim/modules/combat/HandNoClip.java
- src/main/java/dev/opengrim/modules/combat/AutoTool.java
- src/main/java/dev/opengrim/modules/combat/Velocity.java
