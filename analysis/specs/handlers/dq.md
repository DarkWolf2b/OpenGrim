# Storage ESP (sixtwo.dq) — handler-derived behavior spec

Class `sixtwo.dq` extends `sixtwo.gg`. Registry: `sixtwo.dq|Storage ESP|…` — module id **81**, category `gh.nOCvV` (`analysis/specs/modules/dq.md`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dq.c` | **MISSING** — lowercase `d` classes: 0 natives declared/bound (`coverage-matrix.tsv` row 55); `sixtwo/dq` absent from both runtime jsonl registries; no `native` methods. |
| `analysis/decompiled/payload-decrypted/sixtwo/dq.java` | **PRIMARY** (1152 lines; constructor + both handlers + helpers `ahN/ahO/ahR/ahS/ahT` read; all 22 setting names re-folded from char arrays — see Settings table, verbatim). **Corrected 2026-10-17 (batch 30): that path declares `class dQ` (the Hit Sounds twin) — the real decompile is `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dq.java` (cited line numbers 107-1138 match it).** |
| Helpers | `kH.bTJ(MatrixStack, Box, boolean filled, boolean)` outline+fill builder (`.dtN(outline)` / `.dtO(fill)` / `.dtS()`), `kF.bTn(MatrixStack, Vec3d from, Vec3d to, mG)` tracer builder (`.dts(width)` / `.dtt()`), `MMuss` box batcher (`startBatch/bUS/endBatch`), `dJxyG` line batcher (`startBatch/bUv/endBatch`), `jJ.bIC(BlockEntity)` frustum check, `ja.byG()` loaded-chunk iteration + `ja.byD(chunk)` chunk block entities (both **native**), `jc.FFgfM` static set (colored-shulker item list, `jc` helper), `mT` timer (`cpC(long)` elapsed-check / `cpB()` reset), `cK.WW(Item)` set membership. |

## Runtime model

- `super(gf.aZL(81, false, gh.nOCvV))` (`dq.java:107`).
- Async block-entity collector: a dedicated `ExecutorService balhj` runs `ahR()` off-thread; results swap into `DJvpl : List<BlockEntity>` on the main worker executor; boolean `pvnDE` marks "first scan done"; `mT laGjl` throttles rescans by the (decrypted) interval constant `irQyF`.
- Per-item color registry `bZIEf : Map<Item, Pair<cG outline, cG fill>>` populated by `ahS(item, outline, fill)` for the 9 storage types; `ahT` binds both colors' visibility to `ahO(item)`.
- Render (`ahQ`): one `MMuss` batch of outline/fill boxes (`kH.bTJ`), then optionally one `dJxyG` batch of tracers (`kF.bTn`) from the camera eye toward each block entity center.

## Per-handler semantics

### `@hG ahP(gH.th)` — tick rescan (`dq.java:1078-1130`)
1. Guard `bab()`; bail unless `pvnDE` (previous scan finished).
2. Bail unless `laGjl.cpC(irQyF)` (throttle interval elapsed — `irQyF` is a DES-decrypted static long, **not folded**).
3. `CompletableFuture.supplyAsync(this::ahR, balhj).thenAcceptAsync(list -> { DJvpl.clear(); DJvpl.addAll(list); pvnDE = true; }, Util.getMainWorkerExecutor());`
4. `laGjl.cpB()` (restart throttle timer).

### `ahR()` — block-entity scan (`dq.java:881-925`)
Iterate loaded chunks (`ja.byG()`, native) and their block entities (`ja.byD(chunk)`, native); keep `blockEntity` when `bZIEf.containsKey(item)` (item = `getCachedState().getBlock().asItem()`) **and** `ahO(item)`.

### `ahO(Item)` — effective toggle check (`dq.java:773-…`)
`jc.FFgfM.contains(item)` (colored shulker variants) → `YLsuJ.WW(Items.SHULKER_BOX)`; otherwise `YLsuJ.WW(item)`. I.e. all 16 shulker colors collapse onto the single `SHULKER_BOX` entry of the item set.

### `ahN(BlockEntity)` — color pair lookup (`dq.java:723-770`)
`bZIEf.get(item)` → `Pair.of(outline.Wf(), fill.Wf())` (live color values); null when absent.

### `@hG ahQ(go.sX)` — world render (`dq.java:945-1076`)
1. Guard `bab()`; `vec3d2 = camera.getCameraPos().negate()`.
2. Box batch: `MMuss.startBatch()`; per `blockEntity` in `DJvpl`: frustum check `jJ.bIC`; `pair = ahN(be)`; emit `MMuss.bUS(kH.bTJ(sX2.bbh(), new Box(blockEntity.getPos()).offset(vec3d2), rlmtC.WF(), false).dtN(pair.getFirst()).dtO(pair.getSecond()).dtS())` — fill enabled by "Filled", second builder flag constant `false`; `MMuss.endBatch()`.
3. Tracers: only when `wzGtS` on. `f3 = cameraEntity.getEyeHeight(getPose())`; `bl3 = options.getPerspective().isFirstPerson()`; `f2 = pveEv.VB()` (width); `f4 = -toRadians(pitch)`, `f5 = -toRadians(yaw)`; origin: **first person** → `new Vec3d(0.0, 0.0, 75.0).rotateX(f4).rotateY(f5).add(eyePos)` (eye pos + 75 units forward), **third person** → `eyePos` alone. Per block entity: `dJxyG.bUv(kF.bTn(sX2.bbh(), vec3d, blockEntity.getPos().toCenterPos(), pair.getFirst()).dts(f2).dtt())` (tracer colored with the **outline** color); `finally dJxyG.endBatch()`.

## Settings→behavior (exact — all names re-folded from char arrays, verbatim)

| Field | Class | Name | Value |
|---|---|---|---|
| `YLsuJ` | `cK` item set | `"Block Entities"` (66,108,111,99,107,32,69,110,116,105,116,105,101,115) | `.WK(...)` seeded: `CHEST, BARREL, SHULKER_BOX, ENDER_CHEST, FURNACE, TRAPPED_CHEST, BREWING_STAND, SPAWNER, HOPPER`; `.WQ()` extra flag |
| `rlmtC` | `cJ` toggle | `"Filled"` | `.WE(false)` |
| `wzGtS` | `cJ` toggle | `"Tracers"` | `.WE(false)` |
| `pveEv` | `cC` number | `"Tracers Width"` | step `.Vy(0.1)`, min `.Vw(1.0)`, max `.Vx(3.0)`, default `.VA(1.0)` |
| `ApnsN`/`ZRJVA` | `cG` ×2 | `"Chest Outline Color"` / `"Chest Fill Color"` | defaults theme color / theme ×`cob(0.5f)` |
| `mEDKH`/`JsVce` | `cG` ×2 | `"Barrel Outline Color"` / `"Barrel Fill Color"` | same defaults |
| `rQwKE`/`rmZxW` | `cG` ×2 | `"Shulker Outline Color"` / `"Shulker Fill Color"` | same defaults |
| `XwDpx`/`krEuG` | `cG` ×2 | `"Ender Chest Outline Color"` / `"Ender Chest Fill Color"` | same defaults |
| `hFiYC`/`ytNWg` | `cG` ×2 | `"Furnace Outline Color"` / `"Furnace Fill Color"` | same defaults |
| `WZexV`/`SSRqp` | `cG` ×2 | `"Trapped Chest Outline Color"` / `"Trapped Chest Fill Color"` | same defaults |
| `OPRdv`/`jppZY` | `cG` ×2 | `"Brewing Stand Outline Color"` / `"Brewing Stand Fill Color"` | same defaults |
| `RalId`/`IkAKZ` | `cG` ×2 | `"Spawner Outline Color"` / `"Spawner Fill Color"` | same defaults |
| `tWvfT`/`Yvlpb` | `cG` ×2 | `"Hopper Outline Color"` / `"Hopper Fill Color"` | same defaults |

All 18 colors: visibility callbacks bound to their item toggle via `ahT`. Registry keybind: **81**.

## Unrecovered

- `dq.irQyF` — the rescan throttle interval (`mT.cpC` argument, static DES-decrypted long). Not folded; likely hundreds of ms but **do not assume a value**.
- `jc.FFgfM` exact contents (colored shulker item set) — `jc` helper not in scope; behavior inferred from the `ahO` branch.
- `cK.WQ()` extra flag semantics (probably "allow sub-item matching"); native.
- `ja.byG()/byD()` chunk iteration internals (native helpers; presumably `world.getChunks()` + `chunk.getBlockEntities()`).
- The second constant `false` in `kH.bTJ(stack, box, filled, false)` (likely "depth test off/on") — helper-internal.
- `ExecutorService balhj` creation is in a constructor branch not shown (thread count/daemon flag unknown).

## Helper contracts (one line each)

- `kH.bTJ(MatrixStack, Box, boolean filled, boolean)` — outline+fill box builder; `.dtN(mG)` outline color, `.dtO(mG)` fill color, `.dtS()` finalize (same builder as `ds` Entity ESP).
- `kF.bTn(MatrixStack, Vec3d, Vec3d, mG)` — tracer builder; `.dts(float)` width, `.dtt()` finalize (same builder as `du` Tracers, which passes the same 75-unit-forward first-person origin convention).
- `MMuss` — box batcher (`startBatch` / `bUS(kH)` / `endBatch`); `dJxyG` — line batcher (`startBatch` / `bUv(kF)` / `endBatch`); both are the static instances shared across the render family.
- `jJ.bIC(BlockEntity)` — block-entity frustum check (entity variant `bIB` used by `ds`/`dl`).
- `ja.byG()` / `ja.byD(chunk)` — **native** loaded-chunk iteration and per-chunk block-entity iteration.
- `jc.FFgfM` — static item set of colored shulker variants; routes all 16 colors to the single `SHULKER_BOX` toggle via `ahO`.
- `mT` — throttle timer (`cpC(long)` elapsed check, `cpB()` reset); interval constant `irQyF` DES-decrypted.
- `Pair` — `ahN` returns `Pair.of(outline.Wf(), fill.Wf())`; first = outline (also tracer color), second = fill.
- Registry metadata: `bootstrap/offline/features/metadata.txt:116`: `sixtwo.dq|Storage ESP|Draws box around storage blocks|key=81|bind=-999` — primary keybind **81**, secondary bind **−999** (unbound). 22 settings: 1 item set, 3 toggles/numbers, 18 colors (9 outline/fill pairs).

## Concurrency model (cited)

The scan is the only async path in the render family: `ahP` (tick) submits `ahR()` to the private
executor `balhj`, and the accept stage runs on `Util.getMainWorkerExecutor()` — so the swap of
`DJvpl` is main-threaded while chunk iteration is not. `pvnDE` starts false, meaning the first
draw after enable waits for the first completed scan; `laGjl.cpB()` restarts the throttle after
each submission, so the effective scan period is `irQyF` plus scan time.