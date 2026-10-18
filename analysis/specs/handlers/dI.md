# Nuker (sixtwo.dI) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/decompiled/payload-decrypted/sixtwo/dI.java` (1776 lines, CFR, DES literals folded — all setting names and numeric builders recoverable verbatim). Companion: `analysis/decompiled/payload-named/sixtwo/dI.java`.
- **No native corpus**: `analysis/ghidra/handlers-stitched/sixtwo_dI.c` absent; coverage-matrix row `dI | Nuker | 0 | 0 | 0` — **zero JNI handlers**, pure-Java class. No image addresses exist for this class; citations below are java line numbers.
- Registry: `dI | sixtwo.dI | Nuker | Automatically mines blocks | key=58 | bind=-999` (`analysis/specs/registry.tsv`).
- Structural spec: `analysis/specs/modules/dI.md` (setting table verified against the decrypted source; its "native-blocked" note is stale — 5 `@hG` listeners with full Java bodies).
- Helper classes read: `cK.java` (item-set setting: `WL()`→`Set<Item>`, `WM(Set)` set contents, `WY(Block)` membership), `cG.java` (color setting: `Uf(mG)` initial, `Uh(boolean)`, `Wf()` value), `mG.java` (RGBA color, `cob(float)` alpha), `mB.java` (mining target: BlockPos + Vec3d hit point + Direction face), `mT.java` (timer: `cpz()` factory, `cpB()` reset, `cpD(long)` elapsed gate), `jc.java` (`GjreY` static `Set<Item>` default minable set), `gA.java` (input event), `gV.java` (BlockPos+BlockState world event), `go.java`/`go$sX.java` (world render event: MatrixStack + tick delta), `gH$th.java` (client tick event), `gv.java` (pre-rotation tick event), `qL.java` (rotation manager, `dbI(Vec3d, ou, mw, gg)`), `ou/oo/os/ow/ot` (rotation request objects), `ox.java` (raycast helpers `cHa(BlockPos,double)`, `cHc(RaycastContext,BlockPos)`), `iW.java` (render utils, `bxp(MatrixStack,BlockPos,mG,mG,boolean)`), `jg.java` (`bBG(Vec3d,float)` in-range test).

### Recoverability caveat

dI is fully Java-decompiled (no j2cc VM bodies); every control-flow path, setting builder and Minecraft call is statically visible. Residual unknowns are event-dispatcher internals and a few option combinations, tagged below. No float arithmetic is hidden.

## Runtime model

- `dI extends gg implements lA` — module id **58** (`gf.aZL(58, false, gh.qBzlZ)`), no keybind setting (registry bind -999) [decompiled dI.java:134].
- State: current target `mB OXKNB`; selection anchor `Block jpzPS` (block picked with the Selection Key); mining/retarget timer `mT uqcOW = mT.cpz()` [decompiled].
- Events wired: `gv` (pre-rotation tick, validation + rotation request), `gH$th` (tick, mining driver), `gA` (input — selection key), `go$sX` (world render — box overlay), `gV` (block-state change — retarget) [decompiled].
- Rotation integration: `rD.dlX().dbI(Vec3d target, new ou(new oo(), false, true, true, 3, true), mw.uWTdl, this)` — a rotation request into the shared rotation manager (`qL`) with options object `ou(os mode=oo, boolean, boolean, boolean, int=3, boolean)` and priority constant `mw.uWTdl`; semantics of the `ou` flags are in the rotation subsystem (see qL spec), not here [decompiled dI.java:620-626].

## Per-handler semantics

| handler | citation | role |
|---|---|---|
| `dI()` ctor | dI.java:133-374 | id 58; 20 settings; timer; visibility wiring |
| `alE(gv)` `@hG` | dI.java:541-630 | pre-rotation tick: target validity + rotation request |
| `alH(gA)` `@hG` | dI.java:798-932 | input: selection-key block pick |
| `alI(go$sX)` `@hG` | dI.java:1129-1212 | world render: draw target box |
| `alF(gH$th)` `@hG` | dI.java:1213-1426 | tick: mine the target |
| `alG(gV)` `@hG` | dI.java:1427-1470 | block event: retarget |
| `alK()` private | dI.java:632-719 | refresh target face via raycast |
| `alM()` private | dI.java:720-797 | mining engine core |
| `alN()` private | dI.java:933-941 | one dig tick |
| `alJ()` private | dI.java:942-1128 | target scan |
| `alL(BlockState)` private | dI.java:1540-1660 | block filter |
| statics (`alZ…`, `amp`, DES kernels) | dI.java:… | obfuscation machinery only |

- **`alE(gv)`** — if `!bab()` return. If `xbrHm.WF()` ("Mine In Screens") is false **and** `rD.dlmvG.currentScreen != null` → return (GUI open ⇒ pause). If `OXKNB == null` → return. If `!jg.bBG(OXKNB.cnc(), mHbSn.VB())` (target point out of "Range") → `OXKNB = null`, return. Otherwise request rotation to `OXKNB.cnc()` (the stored hit point) via `qL.dbI(...)` [decompiled dI.java:541-630].
- **`alH(gA)`** — selection-key handling: compares the input key code against `mbblx.VP()` (Selection Key); on match, reads `rD.dlmvG.crosshairTarget`, and when it is `HitResult.Type.BLOCK` stores `jpzPS = world.getBlockState(pos).getBlock()` and rebuilds `OXKNB = alJ()`; a mismatch/empty crosshair clears `jpzPS = null` [decompiled dI.java:798-932].
- **`alI(go$sX)`** — if `!bab()` or `OXKNB == null` return; if `uhsFy.WF()` ("Render Block") draw `iW.bxp(matrixStack, OXKNB.cnb(), fkIYK.Wf(), kNGru.Wf(), YdLcc.WF())` — box at the target BlockPos with the two colors and fill flag. Then `SIzNY.SQ(1)` is read (Mining Speed == index 1) [decompiled dI.java:1129-1212].
- **`alF(gH$th)`** — screen gate as in `alE`; if `OXKNB == null` → `alJ()`; drives `alM()`/`alN()`; checks `QxImU.TC()` ("Mine Flat") and `vbcIH.TC()` ("Avoid Lava") as branch inputs [decompiled dI.java:1213-1426].
- **`alG(gV)`** — block-state event: when the event's block matches the current context, `OXKNB = null; uqcOW.cpB(); OXKNB = alJ();` (invalidate + reset delay + retarget) [decompiled dI.java:1427-1470].
- **`alM()`** — mining engine: gate on `uqcOW.cpD(wLMcW.VC())` ("Delay" ticks between actions); if `world.getBlockState(OXKNB.cnb()).isAir()` → retarget `alJ()`; if `eBhEo.TC()` ("Check Raycast") and `!ox.cHa(OXKNB.cnb(), mHbSn.VB())` (no line-of-sight within Range) → abort current target [decompiled dI.java:720-797].
- **`alN()`** — `rD.dlmvG.interactionManager.updateBlockBreakingProgress(OXKNB.cnb(), OXKNB.cnd()); player.swingHand(Hand.MAIN_HAND);` — the actual dig call, face-aware [decompiled dI.java:933-941].
- **`alJ()`** — scan `BlockPos.iterateOutwards(player pos floored + up, mHbSn.VC(), mHbSn.VC(), mHbSn.VC())` (Range as cube radius, int-truncated); skip air; require `alL(state)`; require a `world.raycast(new RaycastContext(eye, pos.toCenterPos(), ShapeType.OUTLINE, FluidHandling.NONE, player))` to hit exactly that block (`HitResult.Type.BLOCK` and `getBlockPos().equals(pos)`); return `new mB(pos, hit.getPos(), hit.getSide())`; null if none [decompiled dI.java:942-1128].
- **`alL(BlockState)`** — (1) if state has non-empty fluid state → false; (2) if block is `CropBlock` → require `getAge(state) >= getMaxAge()` (mature crops only); (3) if `OEGRT.SQ(0)` ("From List") → `fEoGq.WY(block)` (block in Blocks set); (4) if `OEGRT.SQ(1)` ("Selected") → `block == jpzPS`; (5) else ("All") → true [decompiled dI.java:1540-1660].
- **`alK()`** — face refresh: if the target block still matches and `RxRpl.TC()` ("Through Walls"), a `COLLIDER` raycast sets the dig face to the raycast side; otherwise an `OUTLINE` raycast from the eye re-derives the visible face and stores it (`OXKNB.cna(side)`) [decompiled dI.java:632-719].
- A private helper constructs `new PlayerActionC2SPacket(PlayerActionC2SPacket.Action.START_DESTROY_BLOCK, blockPos, Direction.UP, sequence)` (with the `SequencedPacketCreator` import) — vanilla-sequence dig-packet path [decompiled ~dI.java:930].

## Settings → behavior mapping

All names from folded literals, cited verbatim [decompiled dI.java:139-369].

| field | wrapper | name | builder chain (verbatim) |
|---|---|---|---|
| fEoGq | cK | `Blocks` | `.WM(jc.GjreY)` (defaults to the shared minable `Set<Item>`) |
| mHbSn | cC | `Range` | `.Vy(0.1).Vw(2.0).Vx(6.0).VA(4.5).Vz(" blocks")` |
| wLMcW | cC | `Delay` | `.Vy(1.0).Vw(0.0).Vx(20.0).VA(0.0).Vz(" ticks")` |
| OEGRT | ct | `Block To Mine` | mode: `JsQul` `From List`, `ndzRO` `Selected`, `DmJAW` `All` |
| mbblx | cD | `Selection Key` | `.VO((int)-999)`; `.Vf(() -> this.OEGRT.SQ(1))` (visible iff `Selected`) |
| SIzNY | ct | `Mining Speed` | `.SO(1)`?? — no `SO` call observed; options `iMYFd` `Normal`, `nKDKe` `Faster`, `cuKBK` `Fastest` |
| OgoNY | cv | `Options` | group |
| RxRpl | cw | `Through Walls` | (no default chain) |
| QxImU | cw | `Mine Flat` | (no default chain) |
| vbcIH | cw | `Avoid Lava` | (no default chain) |
| eBhEo | cw | `Check Raycast` | `.Tz()` |
| uhsFy | cJ | `Render Block` | `.WE(false)` |
| fkIYK | cG | `Outline Color` | `.Uf(rD.dlM().bjG().bis()).Uh(false)`; `.Vf(this.uhsFy::WF)` |
| kNGru | cG | `Fill Color` | `.Uf(rD.dlM().bjG().bis().cob(0.5f)).Uh(false)`; `.Vf(this.uhsFy::WF)` |
| YdLcc | cJ | `Filled` | `.WE(false)`; `.Vf(this.uhsFy::WF)` |
| xbrHm | cJ | `Mine In Screens` | `.WE(false)` |

- Numeric semantics: `Range` 2.0–6.0 blocks, step 0.1, default 4.5, unit `" blocks"`; `Delay` 0–20, step 1, default 0, unit `" ticks"`. Getters used at runtime: `VB()` (Range double→float compare in `jg.bBG`), `VC()` (int, scan radius and Delay) [decompiled].
- Speed options map to how often `updateBlockBreakingProgress`/swing is driven; the exact per-option cadence (immediate multi-call vs vanilla progress) is decided inside `alF`/`alM` but the per-option formulas are **not** separately visible — treat `Normal`/`Faster`/`Fastest` as progress-driver modes [decompiled; per-option cadence uncertain].

## Unrecovered / uncertain

1. **Per-option `Mining Speed` cadence** — which of `alM`/`alN` each option routes to per tick; only `SIzNY.SQ(1)` (index read) and the dig call are verified [uncertain].
2. **`Mine Flat` / `Avoid Lava` mechanics** — both are read in `alF` but the concrete effect (y-layer restriction vs. lava raycast vs. scan filtering) is not distinguishable in the folded control flow; note `alL` already rejects any non-empty fluid state unconditionally [uncertain].
3. **`ou(new oo(), false, true, true, 3, true)` rotation options** — flag meanings belong to the qL/ou subsystem [inherited unknown].
4. **`gV` trigger point** — the event wraps BlockPos+BlockState; which mixin fires it (block break confirmation vs. block update) is not visible from dI [uncertain].
5. `lA` interface (empty marker) semantics and the `false` flag in `gf.aZL(58,false,…)` [uncertain].