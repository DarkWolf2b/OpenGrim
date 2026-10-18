# Batch 25 audit report - audit 2026-10-17

Modules: dI (Nuker) - the single id in `analysis/specs/audit20261017/batch25.txt`.

Registry row re-verified from `analysis/jars/bootstrap-raw/offline/features/metadata.txt` and
`analysis/specs/registry.tsv`:
`sixtwo.dI|Nuker|Automatically mines blocks|key=58|bind=-999` (port: `Module` default bind -999,
`super("nuker", "Nuker", "Automatically mines blocks", ModuleCategory.WORLD)`).
Category `gh.qBzlZ` (dI.java:135) is the same constant as ids 56/62/74/76/112 (dL No Entity Clip,
dZ Fast Place, ed Custom Camera Distance, dW Freecam, dF Lever Replace), all ported to WORLD.

dI is fully Java-decompiled (no j2cc bodies); every branch, constant and builder was re-checked
against the **bytecode** (`javap -c -p` on `analysis/decompiled/jar-casesafe/sixtwo/dI_.class`,
which declares `sixtwo.dI` - verified). Helper classes were disassembled the same way
(ct/cu/cw/cJ/cK/cD/cC/cG/mT/jg/ja/ox/jd/gA/gV/iW/mG/jc/qL/rD). The class file was cross-checked
for hidden members: the only method missing from the CFR source is `amo()` - the visibility
lambda, `Boolean.valueOf(OEGRT.SQ(1))` (dI_.class `amo()`).

Runtime trace (`analysis/traces/2026-10-17`): `by-class-casesafe/dI_.jsonl` shows
`alE(gv)`, `alF(gH$th)`, `alI(go$sX)`, `YO()` and 12 external `amm()` calls; `logs/driver.log`
shows `on id=58 ok=1` / `off id=58`. No mining-path entries (no target was found during the
run), so the mining/scan/filter behavior rests on bytecode, not trace.

---

### dI - Nuker
post-fix parity: 94% | status: partial | fixed: yes

fixed (all bytecode-verified):

- **Block To Mine default was wrong**: `ct`'s selected index field `kErPl` defaults to 0 and
  `SQ(n)` is `kErPl == n` (ct.class `ST/SQ/SN/SO`), so the default mode is index 0 = From List
  (`JsQul`); the previous port defaulted to "all". `ModeSetting("block_to_mine", …, "from_list")`
  now matches. `amo()` = `SQ(1)` also confirms the Selection Key visibility gate (already correct).
- **Blocks (cK) was non-functional**: the port had an invented `from_list` BoolSetting plus a
  permanently empty `Set<String>`; `alL`'s From List branch could never be true. Now:
  `Set<Item> blocks` initialised by a port of `jc.bzN` (jc.java:1335-1352 - every declared
  `Blocks` field whose `asItem() != Items.AIR`; `jc.GjreY` at jc.java:2168 is that set) and
  `alL` tests `blocks.contains(block.asItem())`, the exact body of `cK.WY(Block)`
  (cK.class: `eAose.contains(block.asItem())`, cK.java:552-554; `eAose` = the `WM` default
  filtered by itself, cK.java:132-201). Programmatic `getBlocks()/addBlock/removeBlock` mirror
  `WL/WV/WU`.
- **Color defaults were white**: `Uf(rD.dlM().bjG().bis())` resolves to `ig.bis()` = `ie.bhJ()`,
  the theme accent - `mG.yHyOB = mG.cnP(151,71,255)` (mG.java:192), i.e. `0xFF9747FF`
  (`GuiTheme.ACCENT`, Theme.java:80-86 maps bhJ -> accent). `cob(0.5f)` **multiplies** the alpha
  (mG.java:60-62: `new mG(x,y,z, WkNmh * f)`), so Fill Color = `0x809747FF`. Outline/Fill defaults
  now use those values (was 0xFFFFFFFF / 0x80FFFFFF).
- **Delay used a tick counter instead of mT**: `mT.cpD(n)` = `cpF() > n * fCqJQ` (mT.class:
  `currentTimeMillis() - vJZlo > n*K`, no internal reset), `cpB()` = stamp reset, `cpz()` resets
  in the ctor (mT.java: cpz/cpB/cpF/cpD). Ported as a ms stopwatch (`timerReset`) with the gate
  `System.currentTimeMillis() - timerReset > delay * MS_PER_TICK`; reset point is the break
  (see next item). `MS_PER_TICK = 50` is labelled [G] (the constant is DES-encrypted through the
  native `gb.aYR` key machinery, absent from `analysis/decrypted/full-dump.jsonl`).
- **alN carried invented logic**: the original `alN` is exactly
  `updateBlockBreakingProgress(OXKNB.cnb(), OXKNB.cnd()); player.swingHand(MAIN_HAND);`
  (dI_.class alN, dI.java:933-936). The port's isAir/retarget/delay tail was removed; the break
  is now handled by `handleBlockChanged`, the verbatim alG body (`SQ(2)` early-out, null target
  guard, `pos.equals(OXKNB.cnb()) && state.isAir()` -> `OXKNB=null; cpB(); OXKNB=alJ()`,
  dI_.class alG / dI.java:1427-1500).
- **alK structure was wrong**: the original walks `iterateOutwards(player pos up, Range,Range,Range)`,
  skips every position except the target, then either (Through Walls) one `ox.cHc` COLLIDER
  raycast, or (else) the full 0..1/0.2 grid of OUTLINE rays - refreshing only the **face**
  (`cna(side)`, the last matching hit wins; the hit point is never rewritten) - dI_.class alK
  offsets 85-403 / dI.java:632-718. The port previously returned on the first grid hit and also
  rewrote `hitPoint`. Now 1:1 (direct target access is equivalent - the only processed position
  is the target).
- **ox.cHc was not ported**: Through Walls used a plain `world.raycast(COLLIDER)` (respecting
  other blocks and the target's real shape). Ported `raycastIgnoringBlocks` = `BlockView.raycast`
  with the target as a full OBSIDIAN cube and every other position as AIR, closest-of-blockHit/
  emptyHit, and `BlockHitResult.createMissed(end, Direction.getFacing(start-end), ofFloored(end))`
  as the miss factory (ox.class cHc/cHv/cHu; used by alJ dI.java:1061 and alK dI.java:653).
- **Check Raycast used the wrong direction source**: `ox.cHa(pos, Range)` = `new Box(pos).raycast(
  camera.getEyePos(), eye + qL.dbC().cGH() * Range).isPresent()` (ox.class cHa/cHb,
  ox.java:188-206). The port used `player.getRotationVector()`; now it uses
  `RotationManager.get().effectiveRotation().toDirection()` (port of qL.dbC, Rotation.java:65)
  and the camera entity (null -> false).
- **Fastest mode divergences**: removed the `state.isAir()` skip (alF's loop has none - air is
  filtered only by alL, which returns true for air in All mode; dI_.class alF 378-434); restored
  the exact check order (mineFlat -> avoidLava -> getBlockState -> jg.bBG range -> alL);
  `jd.bAo` is now ported (`PendingUpdateManager.incrementSequence()` -> `sendPacket(
  creator.predict(sequence))` -> `close()` in a finally; jd.class bAo) using the new
  `ClientWorldAccessor` mixin, which mirrors the original's own
  `mixin.accessors.ClientLevelAccessor` (bootstrap decompile). Previously a sequence-0 packet.
- **Render/Faster cadence**: `WorldRenderEvent` is posted three times per frame
  (EventBridge.java:22-27); the ungated `alM` call could therefore run 3x/frame. alI is a single
  event, so both the box draw and the Faster-mode `alM` call are now gated to AFTER_ENTITIES
  (port convention, cf. BlockEsp.java:103). The invented `currentScreen == null || mineInScreens`
  gate on that call was removed - alI has no screen check (dI_.class alI 122-146).
- **YO (onDisable)**: now `pickedBlock = null; target = null;` matching `jpzPS = null;
  OXKNB = null` (dI_.class YO, dI.java:1745-1750); the old delayLeft reset is gone.
- **Render alpha**: `iW.bxs` draws the filled pass from `fillColor.con()` with the alpha halved
  (`fconst_2; fdiv`) and the outline pass from `outlineColor.coh()` packed (iW.class bxp/bxs).
  The port's fill pass now halves `fillColor.alpha()` too.

verified 1:1 (no change needed):
- Range `.Vy(0.1).Vw(2.0).Vx(6.0).VA(4.5).Vz(" blocks")` and Delay
  `.Vy(1.0).Vw(0.0).Vx(20.0).VA(0.0).Vz(" ticks")` (dI.java:144-145) vs
  `DoubleSetting(step,min,max,default,suffix)`; `VB()` float / `VC()` int usages.
- Selection Key `cD.VO(-999)` -> `IntSetting("selection_key", -999, 348, -999)` (neighbour
  convention, AutoPearlCatch.java:55); visible iff Block To Mine = Selected (`amo()`).
- Mining Speed mode (Normal/Faster/Fastest) default index 0; `eBhEo.Tz()` -> check_raycast
  default true; Render Block/Filled/Mine In Screens `.WE(false)` -> false; the three color
  settings gated on `uhsFy.WF()` (updateVisibility).
- alE: `bab()` -> screen gate -> null target -> `!jg.bBG(OXKNB.cnc(), Range)` clears the target ->
  `qL.dbI(point, new ou(new oo(), false, true, true, 3, true), mw.uWTdl, this)` ->
  `RotationManager.submitPosition(..., RotationPriority.uWTdl, this)` (dI_.class alE; the `ou`
  flag semantics belong to qL, unchanged).
- alH: mode gate, key-code compare against `mbblx.VP()`, `crosshairTarget` BLOCK ->
  `jpzPS = state.getBlock(); OXKNB = alJ()`, non-BLOCK -> `jpzPS = null`; a non-matching key does
  nothing (dI_.class alH 82-205). Port polls `InputUtil.isKeyPressed` with an edge latch
  (`bbQ()==1` is the press action; gA.class bbQ/bbP are raw field getters).
- alJ: air -> Mine Flat (`posY - playerY < 0`) -> range -> Avoid Lava -> alL -> Through Walls
  cHc / first grid hit returns `new mB(pos, point, hit.getSide())` (dI_.class alJ 85-606).
- alM order: delay gate -> air retarget -> Check Raycast gate -> alK -> alN (dI_.class alM).
- alF dispatch: target==null -> alJ; Normal -> alM and return; non-Fastest -> return (Faster is
  render-driven); Fastest -> the radius loop (dI_.class alF 76-493).
- alL: fluid-state reject -> CropBlock requires `getAge >= getMaxAge` -> From List / Selected /
  All (dI_.class alL 13-197).
- `amm()` -> `isMining()` consumed by KillAura (fr.java:1024 `gg3.amm() == null` gate,
  KillAura.java:216); `aml()` (jpzPS) has no port consumer (bJ is unported).

remaining gaps:

- [N] `ja.byI(BlockPos)` (called at dI.java:1027 and dI.java:1371) is a native-VM method: no Java
  body (casesafe payload `ja.java:99`), no handler in
  `analysis/ghidra/casesafe/handlers-stitched` / `handlers-full-annotated`, no trace entries, no
  decrypted constant. The call sites are gated by `vbcIH.TC()` (Avoid Lava), so the port keeps a
  3x3x3 lava-fluid test as a labelled high-probability guess [G]; capture condition for exact
  semantics: a runtime trace of `sixtwo/ja.byI` under the native sweep (n-manifest has no `ja`
  rows, so the current tracer cannot see it).
- [G] `mT.cpD`'s ms-per-tick multiplier (see Delay fix) - 50 ms/tick assumed; scale-only effect
  on the Delay slider.
- [G] Event plumbing with no bus equivalent: `gv` (pre-rotation tick) folded into the client tick
  before alF; `gA` (input) polled with an edge latch; `gV` (block state change) observed at the
  dig site. All three reproduce the original's control flow within one tick; only the exact
  dispatch instant can differ.
- [U] `ou(new oo(), false, true, true, 3, true)` rotation options - qL subsystem, not resolvable
  from dI (inherited unknown, unchanged).
- [G] cK "Blocks" item multiselect has no settings-API equivalent (programmatic set + empty
  placeholder group, BlockEsp precedent: BlockEsp.java:52-54).
- [G] Render pipeline: the original draws through its own BufferAllocator/BufferBuilder
  (`iW.bxs` + `lR.cfW`); the port uses `RenderLayers.debugFilledBox()/lines()` (port convention,
  cf. BlockEsp), so line width (1px vs the original's double-drawn DEBUG_LINES edges) and blend
  behaviour can differ.

evidence:
- analysis/decompiled/payload-decrypted/sixtwo/dI.java:96-98,133-374,541-626,632-718,720-793,
  798-895,933-936,942-1115,1129-1203,1213-1425,1427-1500,1540-1647,1745-1750
- bytecode: `javap -c -p` of analysis/decompiled/jar-casesafe/sixtwo/dI_.class (alE/alK/alM/alH/
  alN/alJ/alI/alF/alG/alL/YO/amo) and of ct/cK/cG/mG/mT/jg/ja/ox/jd/gA/gV/iW/jc/qL/rD classes
  (encoded `_` names; every declared class name verified before use)
- analysis/specs/handlers/dI.md (per-handler roles; its "Unrecovered" items 1-3 are now resolved:
  per-option cadence = alI/alF dispatch, Mine Flat/Avoid Lava = alJ/alF filters, `ou` = inherited)
- analysis/specs/modules/dI.md (setting table, now superseded on the two defaults + colors)
- analysis/traces/2026-10-17/by-class-casesafe/dI_.jsonl, logs/driver.log, n-manifest.tsv
- analysis/decrypted/full-dump.jsonl (no mT/ja entries - both constants stay unrecovered)
- src/main/java/dev/opengrim/modules/world/Nuker.java, src/main/java/dev/opengrim/mixin/
  ClientWorldAccessor.java, src/main/resources/opengrim.mixins.json

compile: `.\gradlew.bat compileJava -q --offline` -> exit 0.
changed files:
- src/main/java/dev/opengrim/modules/world/Nuker.java (settings defaults, timer, alK/alJ/alM/alN/
  alL/alF/alI/alG-compensation, cHc/cHa ports, sequenced packet, render alpha)
- src/main/java/dev/opengrim/mixin/ClientWorldAccessor.java (new; port of the original's
  ClientLevelAccessor accessor)
- src/main/resources/opengrim.mixins.json (registers ClientWorldAccessor)
