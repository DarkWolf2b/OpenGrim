# Ghost Hand (sixtwo.ec) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_ec.c` — 3 handlers (class-init `_a6b74c1c3e347fb3f64dc8d1948a0595`, `arz(gH$th)`, `arA`) + 20 continuation blocks, 0 unresolved table targets; note: 3 jump-table targets missing from `tables.json` (`0x226fee8/0x226fef8/0x226ff08` — the class-init dispatch family). Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff52exxxx`/`6ffff52fxxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/ec.java` — imports `java.util.HashSet`, `java.util.Set`, `net.minecraft.util.math.BlockPos`; field `private final Set<BlockPos> SRuur = new HashSet<>()`; static seeds `fIYBK`/`esMqW`; natives: class-init, `arz(gH$th)` `@hG`, `arA(MatchException)`.
- Structural spec: `analysis/specs/modules/ec.md`; registry row: `sixtwo.ec|Ghost Hand|Allows to open containers through walls|key=75|bind=-999`; category `gh.qBzlZ` = **Misc** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny` (verified below); pool re-resolution via `analysis/tools/resolve_pool_blob.py` (pool base RVA `0x301ee50`).
- Decrypted constants: **no `sixtwo.ec` entries in `analysis/decrypted/full-dump.jsonl`**.
- Neighbor runs pinned by class tokens: `sixtwo/ed` `[0xc397]` (Custom Camera Distance), `sixtwo/iY` `[0xc3a7]` (shared decrypt-pool/classload helper).

### Recoverability caveat

`arz`'s body is decrypt → VM dispatch; no float literal survives. The recovered surface is a 13-token own run plus four MC tokens that sit in the ed/iY region of the same window and are attributed to ec by semantic fit (flagged). Helper classes: `iY` (shared DES string-pool host + classload: `byj(byte[])String`, `byk(int,long)`, `byg(Class)`, `byd(String)Optional<Path>`), `gg`/`iS` module base.

## Runtime model

- `ec extends gg`. Constructor `[decompiled ec.java:11-14]`:
  - `long var1 = fIYBK ^ 131273348581354L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)esMqW, false, gh.qBzlZ))` — module id runtime-decrypted (registry: **75**), flag `false`, category **Misc** `[decompiled + registry]`.
  - `this.SRuur = new HashSet<>()` — per-instance block-position set `[decompiled]`.
- One `@hG` listener: `arz(gH$th)` — **pre-motion client-tick** (phase verified `er.md`) `[decompiled + er.md]`.
- No settings, no `aaj()`/`YO()` overrides `[decompiled]`.
- **Own pool run** `POOL[0xc311,0x76)` (window `[0xc2f1,0x217]` starts at `class_token − 0x20` = `0xc2f1`; per-token offsets):
  - `sixtwo/ec` `[0xc311]`, `fIYBK` `[0xc31b]` (seed), `arA` `[0xc321]` (rethrow name), `method_18276` `[0xc325]`, `method_31709` `[0xc332]`, `method_36455` `[0xc33f]`, `toRadians` `[0xc34c]`, `esMqW` `[0xc356]` (seed 2), `method_1037` `[0xc35c]`, `method_36454` `[0xc368]`, `method_1024` `[0xc375]`, `SRuur` `[0xc381]`, `Ljava/util/Set;` `[0xc387]`.
  - Tiny: `method_18276 ()Z` = `Entity.isInSneakingPose()`; `method_31709 ()Z` = `BlockState.hasBlockEntity()`; `method_36455 ()F` = `Entity.getPitch()`; `method_36454 ()F` = `Entity.getYaw()`; `toRadians` = `java.lang.Math.toRadians` (the yaw/pitch degrees→radians step feeding the rotations below); `method_1037 (F)Lnet/minecraft/class_243;` = `Vec3d.rotateX(float)`; `method_1024 (F)Lnet/minecraft/class_243;` = `Vec3d.rotateY(float)`; `Ljava/util/Set;` matches `SRuur`'s declared type `Set<BlockPos>` `[tiny + stub]`.
  - Window prefix `[0xc2f1,0xc311)`: `lBp`, `WefvZ`, `PwLkJ`, `method_7681` (`()Z` = `Slot.hasStack()` — tail of **eb (Chest Stealer)** run), `arw` `[slice]`.
  - **ed (Custom Camera Distance) run** `[0xc397,…]`: `sixtwo/ed`, `PQbtp` (ed's seed — stub-matched), then `sixtwo/iY` `[0xc3a7]`, `bxZ` (iY's `bxZ()Z` — stub-matched), `arD`, and then the four MC tokens below + `BpiUS` `[0xc4f6]` (ed's `cC` setting — stub-matched), `HfVsU` `[0xc4fc]` (ed's `cJ`), `RqWGM` `[0xc502]` (ed's `Integer[]`).
  - **Attribution flag — the interaction cluster**: `method_5836` `[0xc3b1]` = `Entity.getCameraPosVec(F)` → `Vec3d`; `method_1021` `[0xc3c5]` = `Vec3d.multiply(D)` (desc `(D)Lnet/minecraft/class_243;`); `net/minecraft/class_2350` = `Direction` + `field_11036` = `Direction.UP` + desc `(Lnet/minecraft/class_243;Lnet/minecraft/class_2350;Lnet/minecraft/class_2338;Z)V` = the **`BlockHitResult(Vec3d, Direction, BlockPos, boolean)` constructor**; `method_2896` = `ClientPlayerInteractionManager.interactBlock(ClientPlayerEntity, Hand, BlockHitResult) → ActionResult` (desc `(Lnet/minecraft/class_746;Lnet/minecraft/class_1268;Lnet/minecraft/class_3965;)Lnet/minecraft/class_1269;`). These sit in the ed/iY region of the window but match no stub of ed (camera distance) or iY (classload helper); they are exactly the surface needed to fabricate a `BlockHitResult` against an arbitrary `BlockPos` and open the container. Attributed to **ec** `[inferred, flagged — cross-boundary scatter precedent: vtEAj/PkbYQ/kPBXI]`.
- Contract: each pre-motion tick, build the look direction from the camera entity's yaw/pitch (`Math.toRadians` + `Vec3d.rotateX`/`rotateY` on a unit vector), scale by the reach distance (`Vec3d.multiply`), take the origin as `getCameraPosVec(1.0F)` (partial-ticks camera position), fabricate a `BlockHitResult(pos, side, targetPos, false)` against a container block found through walls, and submit `interactionManager.interactBlock(player, hand, hit)` — opening containers whose ray is occluded `[inferred from run]`. `SRuur` (`Set<BlockPos>`) is the natural dedupe/set of positions already acted on — exact role unrecovered `[uncertain]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_a6b74c1c3e347fb3f64dc8d1948a0595()V` | `[18d6e8730]` | `[0x226,0xd]` | class-init stub |
| `arz(Lsixtwo/gH$th;)V` | `[18d6da310]` | `[0xc2f1,0x217]` | pre-motion tick listener (whole behavior) |
| `arA(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18d6e86a0]` | — | identity rethrow |

- **class-init [18d6e8730]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck` (vtable `0x720`), dispatch `UNK_18226f0d8[(cVar1=='\0')*8]` at `18d6e880f` (3 of its jump-table targets are not in `tables.json` — flagged in the corpus header). No module behavior `[decompiled]`.
- **`arz(Lsixtwo/gH$th;)V` [18d6da310]** — decrypts `POOL[0xc2f1,0x217]`, `ExceptionCheck`, dispatch `UNK_182269f20` at `18d6da3da`. Virtualized body. Determinable surface (own run + flagged cluster): yaw/pitch → radians → `rotateX`/`rotateY` direction construction; `multiply` reach scaling; `BlockHitResult` fabrication (`Direction.UP` as the cited side constant); `interactBlock` submission; `isInSneakingPose` (a gate — e.g. only operate while sneaking — or a ray-origin adjustment; unproven); `hasBlockEntity` (container candidate test on block states) `[slice, inferred]`. Unrecovered: how the through-wall target block is chosen (no raycast-with-skip token; possibly a scan of blocks along the look vector using `hasBlockEntity`), the reach value, the `Hand` used, and `SRuur`'s exact lifecycle (insert/clear policy) `[uncertain]`.
- **`arA(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18d6e86a0]** — `return param_3;` identity rethrow `[decompiled]`.
- Continuation blocks (20): generic `ExceptionCheck` 2-way dispatchers; `FUN_190ddce00`/`FUN_190dd72e0` decrypt-reentry variants; `swi(3)` trampolines; bare `return`s. No module-specific logic `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `ec.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)esMqW, false, gh.qBzlZ))` + `SRuur` init `[decompiled ec.java:11-14]`.
- No `full-dump.jsonl` entries for ec (0 indy sites) — no hidden setting names recoverable `[decompiled absence]`.
- Consequence: reach and any gating are hard-wired in VM bytecode `[inferred]`.

## Cross-module interplay

| peer | relationship | evidence |
|---|---|---|
| eb (Chest Stealer) | eb's run tail bleeds into ec's window prefix (`method_7681 hasStack` at `[0xc2f1,0xc311)`) | `[slice]` |
| ed (Custom Camera Distance) | next run from `[0xc397]`; ed's seed `PQbtp` and settings `BpiUS`/`HfVsU`/`RqWGM` stub-match to ed.java | `[0xc397,0xc502]` |
| iY | shared decrypt-pool host; its token `[0xc3a7]` and `bxZ` accessor sit between ed's and the flagged interaction cluster | `[0xc3a7]` |
| attribution law | the four-token interaction cluster (getCameraPosVec/multiply/BlockHitResult/interactBlock) matches no ed or iY stub; ec is the only module in this window with a `Set<BlockPos>` field and a tick listener — the scatter precedent (`vtEAj`/`PkbYQ`/`kPBXI` in ew/ex/ey) justifies the attribution | `[stub match]` |

- ec and eb both interact with container blocks: eb steals from an *opened* chest UI, ec *opens* one through walls. If both are enabled the module set is mutually reinforcing rather than conflicting.
- The `hasBlockEntity()` test is the container-candidate filter for any through-wall scan; a faithful rebuild can implement the scan with exactly this predicate plus the fabricated-hit interaction path.

## Unrecovered

1. **Module id 75** — registry-sourced; `(int)esMqW` has no dump verification.
2. **Target-block selection algorithm** — the through-wall search (ray-march with `hasBlockEntity`? neighbor scan of the hit face?) is VM-resident; no scan-loop tokens beyond `hasBlockEntity` exist.
3. **Reach distance** — the `multiply(D)` argument (blocks) is a VM float; unrecovered.
4. **`Direction.UP` role** — it is the only Direction constant in the window; whether the fabricated `BlockHitResult` always reports side `UP` (accepting a wrong face server-side) or the VM computes faces per-position is unresolved.
5. **`SRuur` lifecycle** — insert on successful open? clear on screen close/world change? No clear/contains tokens in the run.
6. **`isInSneakingPose` gate direction** — active-only-while-sneaking vs ray-origin compensation; unproven either way.
7. **Attribution of the four-token interaction cluster** — flagged; if it actually belongs to a helper spec'd elsewhere (iY hosts none of these), ec's surface shrinks to the 13-token run.
8. **Flag `false` in `gf.aZL(75, false, gh.qBzlZ)`** — meaning unrecovered.
9. **`Hand` used for `interactBlock`** — no `class_1268` token in the run; the VM can pass a constant through its interpreter without a pool reference.

## Shared helpers cited

- `gg`/`iS` — module base; `hF` bus registration on enable via base `aaj()`.
- `gH$th` — pre-motion tick event (phase verified `er.md`).
- `iY` — shared DES string-pool host + classload utility (`byj` decode, `byk` int-decrypt, `byg(Class)`, `bxZ()Z`); its token appears in ec's window via clinit plumbing.
- `gf`/`gh` — metadata + category enum (`qBzlZ` = Misc).
- Neighbors in window: eb (Chest Stealer) prefix, ed (Custom Camera Distance) tail.

---
Confidence: MEDIUM on the surface (13 own tokens + 4 semantically-attributed) and LOW-MEDIUM on the algorithm (target selection, reach, and set lifecycle all VM-resident).