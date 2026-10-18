# Scaffold (sixtwo.ei) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-full/sixtwo_ei.c` — 12 JNI handlers (stubs only, 710 lines). Each behavior handler decrypts a constant-pool blob slice with `BLOB_DECRYPTOR(image-addr, *plRam000000018301ee50 + off, len)` (= `FUN_190dd72e0`), calls `JNI->ExceptionCheck`, then tail-dispatches through a relocated pointer table into **continuation fragments** (`analysis/ghidra/continuations/all-continuations.c`, 67,570 blocks; ei owns ~135 distinct blocks spanning image `18d278b44`–`18d2bc814`). Per the pipeline finding: the j2cc obfuscator shredded each native method body into many small straight-line blocks chained by indirect jumps — **the blocks ARE the handler machine code; there is no bytecode interpreter**. Fragments were stitched by resolving `jmp [rip+disp]` / `jmp [reg+idx*8]` targets against the runtime-relocated dump DLL `analysis/ghidra/dumps/jna-decrypted-v2.dll` (runtime delta `0x6ff72c160000`, derived from the asE stub header: runtime `6ffff4e88a80` − image `18d278a80`).
- Java skeleton: `analysis/decompiled/payload-decrypted/sixtwo/ei.java` (Vineflower, literals folded — authoritative for decrypted setting strings).
- Placement engine (Java, decompiled): `analysis/decompiled/payload-named-cfr/sixtwo/oC.java` (CFR; `cHT` and its helpers decompiled, `cIb`/`cIc` failed), `oA.java`, `oD.java`, `oB.java`, `oE.java` (`cIq`/`cIr` failed), `oF.java`, `oT.java`, `oT$vo.java`, `oU.java`, `oz.java`, `jl.java` (`bDT`), `jg.java`, `ov.java`, `qL.java`, `qP.java`, `rD.java`.
- Structural spec: `analysis/specs/modules/ei.md`; framework spec: `analysis/specs/modules/00-framework.md`; sibling handler-spec format reference: `analysis/specs/handlers/fa.md`.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` (108 entries touched by this class's bsm `asO`/`asN`, desc `(IJ)I` / indy); module registry `analysis/specs/registry.tsv` line 98: `ei|sixtwo.ei|Scaffold|Automatically bridges for you|key=38|bind=-999`.
- Symbol translation: `analysis/jars/yarn-1.21.11+build.6.tiny` (tiny v2). Pool blobs re-resolved with `analysis/tools/resolve_pool_blob.py`.

### Recoverability caveat (read first)

The stubs are dispatcher prologues; the real bodies are continuation fragments. Fragment chains were traced in machine code (not Ghidra pseudo-C), so per handler the recoverable evidence is:

- `[slice]` — handler verifiably decrypts the named pool slice (verified by stub address).
- `[decompiled]` — logic visible directly in a Java decompile (the placement engine classes, the ctor, `asL`).
- `[decompiled machinery]` — anti-analysis/key-schedule code, not module behavior.
- `[inferred]` — inferred from descriptor + slice contents + call shape + framework contract; NOT from a fully recovered body.
- `[uncertain]` — cannot be attributed with confidence.

**Attribution warning:** ei's shared slice `[0xcb11,0x227]` overlaps the window decrypted by the neighboring class `sixtwo.eB` (`[0xcb21,0x228]`), and BFS tracing can wander across handler regions (the asG/asH continuation regions `18d2a8xxx`–`18d2aaxxx` interleave). Every JNI-call attribution below is tagged accordingly.

### Pool slices (per-handler symbol universes)

| slice (off,len at pool base rva 0x301ee40) | handlers |
|---|---|
| `[0xcb11,0x227]` — ei/eB shared symbol table | asE, asF, asG, asH, asI, asK, asM, asN |
| `[0xb1,5]` = `"Tlzw"` | asJ only |
| `[0x857,0x26]` | asO only |
| `[0x226,0xd]` | `_f25485ee343fb698e3bb919784879d84` (clinit) only |
| (no blob decrypt) | asL |

ei-shared slice `[0xcb11,0x227]`, null-separated tokens from offset `0xcb1b` (the first two tokens, `Rzq`/`XWHiC`, are `eh`'s tail) `[slice]`:

```
edZTg | aNeIU | asB | XmJDu | sixtwo/ei | Hbvpn | sixtwo/eB | avS | asG | QZqXr | asL |
asJ | ()Lsixtwo/oz; | asA | asH | sixtwo/oz | hitPoint | asK | ()Lsixtwo/oS; | dwM |
(Lsixtwo/oz;)Lsixtwo/oT$vo; | VLSja | method_5715 | cNIJT | asI |
(Lnet/minecraft/class_1268;)Z | method_6115 | method_2923 | method_24515 | method_10074 |
sixtwo/oD | hAkBH | Lsixtwo/oD; | BhfJC | sixtwo/oA | cHC |
(Lnet/minecraft/class_2338;Lsixtwo/oD;Z)Lsixtwo/oA; | sixtwo/oB | LwHxs | Lsixtwo/oB; |
cHF | (Lsixtwo/oB;)Lsixtwo/oA; | QhKIT | cHL | gnKgk | rzkkP | asM | QqXlu | sixtwo/ej |
KBjlK | asS | UqlCk  (+ trailing sixtwo/ej entries: ISzxl | sixtwo/iV | bxl |
(Lsixtwo/ov;)V | sixtwo/hc | sixtwo/ek | Lq)
```

Reliable MC API surface from this slice `[slice]`:

- `method_5715` = `Entity.isSneaking()Z`.
- `method_6115` = `LivingEntity.isUsingItem()Z`.
- `method_2923` = `ClientPlayerInteractionManager.isBreakingBlock()Z`.
- `method_24515` = `EntityLike.getBlockPos()Lnet/minecraft/class_2338;`.
- `method_10074` = `BlockPos.down()Lnet/minecraft/class_2338;`.
- `class_1268` = `net.minecraft.util.math/Hand` (descriptor `(Lnet/minecraft/class_1268;)Z`).

Engine/self symbols in the slice: `sixtwo/oA` + `cHC` + descriptor `(Lnet/minecraft/class_2338;Lsixtwo/oD;Z)Lsixtwo/oA;` (builder factory), `cHF` + `(Lsixtwo/oB;)Lsixtwo/oA;` (mode setter), `cHL` (builder → `oz` evaluation), `sixtwo/oD` + `hAkBH` (placement mode enum value), `sixtwo/oB` + `LwHxs` (pick-strategy enum value), `sixtwo/oS` + `QhKIT` (mode enum value), `sixtwo/oz` + `hitPoint` (record accessor), `dwM` + `(Lsixtwo/oz;)Lsixtwo/oT$vo;` (action-packet factory/setter), setting fields `cNIJT` ("Hand To Use"), `VLSja` ("Only When Crouching"), `BhfJC` ("Hand Swing"), statics `Hbvpn`, `rzkkP`, `gnKgk`, `QqXlu`, plus obfuscated tokens `asA/asB/avS/edZTg/aNeIU/XmJDu/QZqXr/KBjlK/asS/UqlCk` (unresolved; several belong to `sixtwo/eB`/`sixtwo/ej` whose symbols share the window) `[uncertain]`.

## Runtime model

- `ei extends gg implements lA` (module base; `lA` = tick-listener marker interface per framework spec). Ctor `[decompiled, payload-decrypted/sixtwo/ei.java]`:
  - `long var1 = Hbvpn ^ 13388885539051L` (decryptor seed mixing).
  - `super(gf.aZL(38, false, gh.xgeEn))` — module id **38** (registry: "Scaffold", "Automatically bridges for you", primary bind -999 = unbound), flag `false`, category `gh.xgeEn`.
  - Static clinit: `Loader.doInit(ei.class)` + `_f25485ee343fb698e3bb919784879d84()` (native bootstrapper).
- **Settings** (all decrypted ASCII in the ctor, values verified in full-dump.jsonl):
  - `cNIJT` = `ct` "Hand To Use" with `cu` children `kVyvV` "Main Hand" (77,97,105,110,32,72,97,110,100), `mjyti` "Off Hand" (79,102,102,32,72,97,110,100), `bjFxu` "Both" (66,111,116,104).
  - `BhfJC` = `ct` "Hand Swing" with children `JluvD` "Client" (67,108,105,101,110,116), `RrLuA` "Server" (83,101,114,118,101,114).
  - `VLSja` = `cJ` "Only When Crouching" (79,110,108,121,32,87,104,101,110,32,67,114,111,117,99,104,105,110,103) with `.WE(false)` — **default false**.
- **Engine classes (decompiled, authoritative):**
  - `oz` = record `(BlockPos blockPos, BlockHitResult blockHitResult)`; `blockState()` = `world.getBlockState(pos)`, `hitPoint()` = `bhr.getPos()`. It is one placement decision: where to click (support block), on which face, at which point.
  - `oA` = builder: `cHB(BlockPos)` private ctor wrapper; static `cHC(BlockPos, oD, boolean)` = `new oA(pos).cHE(oD).cHG(bool).cHH(oC.djrGf)`; `cHF(oB)` sets strategy; `cHJ(oz)` sets previous snapshot; `cHI(oy)` appends a point processor; `cHL()` evaluates via `oC.cHT(...)` and returns the `oz`; `cHK()` = `cHL() != null`. Defaults: mode `fhmDl=oD.pxPhl`, strategy `zwhrf=oB.LwHxs`, entity-check `xUADK=false`, predicate `TgQUV=oC.djrGf` `[decompiled]`.
  - `oD` = placement-mode enum `pxPhl, hAkBH, xBObQ` (display names native-decrypted, unrecovered). `cIm(int)`: 1→hAkBH, 2→xBObQ, else pxPhl.
  - `oB` = pick-strategy enum `LwHxs` (best/single), `FXGPX` (random).
  - `oS` = enum `QhKIT, Kifdf` (display names unrecovered). Stored in the action packet `oT`.
  - `oT` = action packet consumed by the native placement executor `qP.ddp(oT)`: fields Hand `cVhsi`, `oS` `NGsJb`, `BlockHitResult` `zrqTl`, `oz` `EJHXC`, boolean `WGosN`, with accessors `cKN()→oz`, `cKL()→Hand`, `cKH()→oS`, `cKI()→BlockHitResult`, `cKK()→boolean` and statics `cKC()/cKB(Hand)/cKJ()`.
  - `oT$vo` = staged packet builder: `dwJ(Hand)`, `dwK(oS)`, `dwL(BlockHitResult)`, `dwM(oz)` (sets `BzuXr` + flag `qbYSv=true`), `dwN(boolean)`, `dwO()→oT` (fills unset fields from `oT` accessors).
  - `oU.Xrdom` = `public static Map<BlockPos,Long>` — registry of blocks already planned (dedupe + cross-module coordination; value's role unrecovered).
  - `oy` = point processor interface: `process(Vec3d point, BlockPos supportPos, Direction dir) → Vec3d` (applied in list order by `cHX`).
  - `qL` = rotation manager: `dbC()→ov` (current rotation), `dbI(Vec3d, ou, mw, gg)` void (aim request), `dbN(gH$th)` fires a bare `gv` event each tick **before** applying a rotation — `gv` is ei's `asE` listener type.
  - `rD.dlmvG` = static `MinecraftClient`; `rD.dlX()` = rotation-manager accessor.
- **Placement math — `oC.cHT(BlockPos targetPos, oD mode, oB strategy, boolean entityCheck, Predicate<BlockState> predicate, List<oy> processors, oz previous) → oz`** `[decompiled, payload-named-cfr/sixtwo/oC.java lines 184-444]`:

  1. **Entity-occupancy guard:** `if (entityCheck && jl.bDT(targetPos)) return null;` where `jl.bDT(BlockPos)` `[decompiled, jl.java:509]` = `rD.dlmvG.world.getOtherEntities(player, new Box(blockPos), jl::bDU)` is non-empty — i.e. another (filtered) entity occupies the target block.
  2. **Already-planned guard:** `if (oU.Xrdom.containsKey(targetPos)) return null;`
  3. **Replaceable-target guard:** `BlockState s = world.getBlockState(targetPos); if (!predicate.test(s)) return null;` Default predicate `oC.djrGf` = lambda → `cHP(BlockState)`: block `instanceof FireBlock || ShortPlantBlock || SnowBlock || VineBlock || isReplaceable()` (i.e. the target must be a replaceable/decorative block, so scaffolding fills air, grass, snow layers, vines, fire).
  4. **Mode `oD.xBObQ` (direct mode):** no face search — raycast `ox.cHc(new RaycastContext(player.getEyePos(), targetPos.toCenterPos(), ShapeType.COLLIDER, FluidHandling.NONE, player), targetPos)` and return `oz(targetPos, hit)`.
  5. **Modes `pxPhl`/`hAkBH` (face search).** Setup: `eye = player.getEyePos()`, `look = rD.dlX().dbC().cGH()` (current look vector from `ov.cGH()`: `(sin(−yaw·π/180)·cos(pitch·π/180), −sin(pitch·π/180), cos(−yaw·π/180)·cos(pitch·π/180))`), `range = player.getBlockInteractionRange()`.
     - **a. Previous-target reuse (`cHU`, lines 793-905):** if `previous != null` and `previous.blockPos().equals(targetPos)` and its hit's `(supportPos = bhr.getBlockPos(), side = bhr.getSide())` is still in the current support list `cIe(targetPos)` and `cIb(supportPos, side, eye)` is false → adjust the point with `cHX(bhr.getPos(), supportPos, side, processors)` and re-validate with `cHY`; if valid, return `oz(targetPos, new BlockHitResult(point, side, supportPos, false))`, else null. (Sticky face selection: keep clicking the same face as long as it is still legal.)
     - **b. Support enumeration (`cIe`, lines 897-925):** iterate the 6 offsets `YuMVe[i]`; `neighbor = targetPos.add(YuMVe[i])`; keep if `cIf(neighbor)` = `world.getBlockState(neighbor).isSolid() || oU.Xrdom.containsKey(neighbor)` (solid support, or a block already planned this run); the clicked face is `ja.toQLU[i]` (Direction table, see Unrecovered #7). The face points **from the neighbor back into the target block** (offsets are negated per that Direction order assumption).
       `YuMVe` verbatim `[decompiled, oC.java:175-180]`:
       ```
       (0,-1,0), (0,1,0), (-1,0,0), (1,0,0), (0,0,1), (0,0,-1)
       ```
       (built as `new Vec3i[cIl("j", 10251, 3852772743206723803L ^ var11)]` — exactly 6 elements assigned, so the decrypted count is 6.)
     - **c. Per support**, skip it when `cIb(neighbor, dir, eye)` is true (face-usability/blocked test — body failed to decompile, see Unrecovered #5). Then:
       - **Strategy `oB.FXGPX` (random pick, `cHW`, lines 954-1028):** for **every** candidate point `p` of `oE.cIq(neighbor, dir, N₁)` (sample count `N₁` = DES-decrypted constant `cIl("j", 6501, …)` — **unrecovered**): skip if `cIc(p, neighbor, dir)` is false (point-validity test — decompile failed, likely the `cId` face-bounds check below); apply `cHX`; reject if `cHY` fails; otherwise add `oz(targetPos, new BlockHitResult(p₂, dir, neighbor, false))` to the result list. Final selection: `list.get(ThreadLocalRandom.current().nextInt(list.size()))` — **uniformly random among all valid candidates**; null if the list is empty.
       - **Strategy `oB.LwHxs` (best pick, `cHV`, lines 1030-1115):** pick the single point `p` of `oE.cIq(neighbor, dir, N₂)` (`N₂` = `cIl("j", 30560, …)` — **unrecovered**) minimizing `cIa(p, eye, look)` among points that pass `cIc` and `cHY`; skip support if none. Then apply `cHX`, re-validate `cHY`, and keep the running best by `cIa` (init `Double.MAX_VALUE`).
     - **d. Scoring — `cIa(point, eye, axis)`** `[decompiled, oC.java:442-475]`:
       ```
       Δ  = point − eye
       sq = Δ.lengthSquared()
       if (sq <= 1.0E-12) return 0.0
       return sq − (Δ · axis)²          // squared perpendicular distance to the look ray
       ```
       i.e. the preferred click point is the sampled face point **closest to the player's current look ray** (with a degenerate-case guard at `1.0E-12`).
     - **e. Face-bounds check — `cId(double d)`** `[decompiled, oC.java:501-539]`: returns `(d − 0.15 ≥ 0) && (d − 0.85 ≤ 0)` — a coordinate must lie in the closed sub-range **[0.15, 0.85]** of the face (keeps the click 15 % away from block edges). The same constants appear in `oE` (`DNYow = 0.15`, `XZnzz = 0.85`), strongly suggesting `oE.cIq` samples the face sub-square [0.15, 0.85]² and `cIc` re-checks these bounds (see Unrecovered #6).
     - **f. Point adjustment — `cHX(Vec3d, BlockPos, Direction, List<oy>)`** `[decompiled, oC.java:1116-1136]`: runs each `oy` processor in order, `p = oy.process(p, supportPos, dir)`.
     - **g. Validation — `cHY(point, supportPos, dir, lenient, range)`** `[decompiled, oC.java:1137-1211]` (true = reject):
       1. `if (jg.bBH(player.getEyePos(), point) > range) return true;` — reject points beyond reach (`jg.bBH` = distance metric; compared directly against `getBlockInteractionRange()`).
       2. `end = point − dir·0.001` (per-axis: `point.x − dir.getOffsetX()*0.001`, same for Y/Z) — back off the ray into the support block.
       3. `hit = cHZ(RaycastContext(player.getEyePos(), end, ShapeType.OUTLINE, FluidHandling.NONE, player))`.
       4. `if (hit.getType() == BLOCK && hit.getBlockPos().equals(supportPos)) return false;` — the eye→point ray must land on the intended support block (accept).
       5. otherwise `return !lenient;` — a blocked/missed ray is tolerated only in **lenient mode (`oD == pxPhl`)**; strict mode (`hAkBH`) rejects.
     - **h. Raycast — `cHZ(RaycastContext)`** `[decompiled, oC.java:590-636]`: custom `BlockView.raycast` that (i) skips blocks passing `cHP` (fire/short-plant/snow/vine/replaceable — so scaffolding does not collide with what it is replacing), (ii) at each position picks the nearer of the block-shape hit and the fluid-shape hit by `squaredDistanceTo` from the ray start (`Double.MAX_VALUE` for null), and (iii) on miss returns `BlockHitResult.createMissed(ctx.getEnd(), Direction.getFacing(start − end), BlockPos.ofFloored(end))`.
  6. **Final result:** `oz(targetPos, new BlockHitResult(point, dir, supportPos, false))` — `BlockHitResult` with `isInsideBlock=false`.
- **Execution path (native side):** the assembled `oz` is wrapped into a packet via the pool-referenced `dwM` family (`(Lsixtwo/oz;)Lsixtwo/oT$vo;` in ei's slice) and handed to `qP.ddp(oT)` (public native `boolean ddp(oT)` on `qP` — the placement executor); the click point is fed to the rotation manager `qL.dbI(Vec3d, ou, mw, gg)` so the player is aimed at `oz.hitPoint()` before placement `[inferred from engine classes + pool tokens]`.

## Per-handler semantics

### Behavior handlers

- **`asJ()Lsixtwo/oz;` [stub 18d2af0e0]** `[slice 0xb1,5]` — **the placement-point query.** Entry block `0x18d2af133`; semantic JNI sequence (machine-code traced): GetStaticObjectField `[18d2af1b9]`, GetObjectField `[18d2af32d]`, three ThrowNew null-guards, GetStaticObjectField `[18d2af6a6]`, CallStaticObjectMethodA `[18d2af793]`, GetStaticObjectField `[18d2af894]`, CallObjectMethodA `[18d2af9e3]`, return `[18d2afb17]`. Exactly one static object call + one instance object call — the exact shape of `oA.cHC(pos, oD, bool).cHL()` (both symbols are in ei's slice: `cHC (Lnet/minecraft/class_2338;Lsixtwo/oD;Z)Lsixtwo/oA;`, `cHL`, `hAkBH`, `LwHxs`) `[inferred]`. The target position is most plausibly `player.getBlockPos().down()` — the slice uniquely pairs `method_24515` (`EntityLike.getBlockPos`) with `method_10074` (`BlockPos.down()`), and bridging = placing under the player `[inferred]`. The `oB` strategy is not explicitly set in the traced calls, so the default `oB.LwHxs` (best pick) applies unless `cHF` runs inside an unrecovered fragment `[uncertain]`. The `boolean` argument to `cHC` (entity-check flag `xUADK`, default `false`) is not recoverable from the call shape `[uncertain]`. Its own blob slice is the 5-byte token `"Tlzw"` (verbatim) — same tiny-slice pattern as fa's null-guard marker group, so it likely gates a cached lookup rather than carrying method names `[uncertain]`. Method-ID names are resolved once at class init and cached in `.data` globals, so the `cHC`/`cHL` attribution rests on the pool tokens + call shape, not on recovered name strings `[uncertain]`.
- **`asE(Lsixtwo/gv;)V` [stub 18d278a80]** `[slice 0xcb11,0x227]` — **`@hG` listener on the rotation-manager pre-rotation event `gv`** (`qL.dbN` fires `new gv().bdV()` each tick before applying a rotation). Entry block `0x18d278b44`. Prologue: GetStaticLongField `[18d27bca]` (decryptor seed — `Hbvpn` is the only static long in the slice) followed by a large opaque arithmetic block at `0x18d278c11` with ~11 calls to the slice-decrypt helper `0x18d27ce80` — that is the **pool-slice decryption machinery, not behavior** `[decompiled machinery]`. Semantic calls after decryption: CallStaticObjectMethodA `[18d27c437]`, CallStaticObjectMethodA `[18d27c94e]`, GetStaticObjectField `[18d27cb7a]`, GetStaticObjectField `[18d27cc7b]`, CallVoidMethodA `[18d27cdcd]`, chain end ThrowNew `[18d27cdb6]`. Reading: two static engine calls (most plausibly the placement computation that yields an `oz`, e.g. `asJ`-equivalent static path) followed by a **void instance call — most plausibly the rotation-manager aim request `qL.dbI(Vec3d, ou, mw, gg)` with the placement `hitPoint()`** (token `hitPoint` is in ei's slice), which is exactly what a `gv` (pre-rotation) listener is for `[inferred, uncertain]`. The exact receiver/method of the terminal CallVoidMethodA was not resolved (method IDs cached in `.data`) `[uncertain]`.
- **`asF(Lsixtwo/gH$th;)V` [stub 18d27cf10]** `[slice 0xcb11,0x227]` — **`@hG` listener on the player-tick event `gH$th`.** Entry block `0x18d27cfd4`; GetStaticLongField `[18d27d05a]` + decrypt block at `0x18d27d0a1` (helper `0x18d2814f0` ×11) `[decompiled machinery]`. Semantic calls: CallStaticObjectMethodA `[18d280630]`, CallStaticObjectMethodA `[18d280b47]`, CallStaticObjectMethodA `[18d280e52]`, CallObjectMethodA `[18d2810e5]`, CallObjectMethodA `[18d2811ec]`, CallBooleanMethodA `[18d28142c]`. Reading: three static calls (gate/settings read + packet staging, e.g. `oT$vo.cKC()`-family statics), two instance calls (packet field setters such as `dwM(oz)` / `dwL(BlockHitResult)`), and a final boolean instance call — **most plausibly `qP.ddp(oT)`, the native placement executor**, consistent with `oT$vo.dwO() → oT` then `ddp(oT)` returning success `[inferred, uncertain]`.
- **`asG()Z` [stub 18d29dd50]** `[slice 0xcb11,0x227]` — **the "may I place now" gate.** Entry block `0x18d29de1d`; GetStaticLongField `[18d29dea3]` + decrypt block at `0x18d29df05` (helper `0x18d2a5e10` ×11) `[decompiled machinery]`. Semantic calls in the traced region: CallStaticObjectMethodA `[18d2a0cc3]`, `[18d2a145b]`, GetObjectField `[18d2a111a]`, GetStaticObjectField `[18d2a16a2]`, `[18d2a1a71]`, plus boolean-returning calls deeper in the interleaved region (`18d2a1xxx`–`18d2a5d7e`; BFS noise reached asH's region, so attribution there is soft). The slice uniquely contains the three gating predicates `method_5715` (`isSneaking`), `method_6115` (`isUsingItem`), `method_2923` (`isBreakingBlock`), and the setting field `VLSja` ("Only When Crouching") — so asG combines the crouch setting with sneaking/using/breaking state `[inferred]`. The exact boolean combination is NOT recovered (see Unrecovered #2). Natural reading consistent with the setting names: crouching required only when `VLSja` is true; placement suppressed while breaking or using an item `[inferred, uncertain]`.
- **`asH()Lnet/minecraft/class_1268;` [stub 18d2a5ea0]** `[slice 0xcb11,0x227]` — **hand selection: maps the "Hand To Use" setting to `Hand`.** Entry block `0x18d2a5f64`; GetStaticLongField `[18d2a5fea]` + decrypt block (helper `0x18d2ab090` ×15) `[decompiled machinery]`. Semantic calls in the (shared/interleaved) region: GetObjectField `[18d2a8884]`, CallStaticObjectMethodA `[18d2a8db3]`, GetStaticObjectField `[18d2a9048]`, CallStaticObjectMethodA `[18d2a9ee6]`, `[18d2aa2c1]`, CallBooleanMethodA `[18d2aa452]`, GetStaticObjectField `[18d2aa698]`, CallBooleanMethodA `[18d2a9d2d]`, GetStaticObjectField `[18d2aaaa6]`, CallStaticObjectMethodA `[18d2aaec6]`, GetStaticObjectField `[18d2aa8f1]`, CallStaticObjectMethodA `[18d2a9c10]`, CallBooleanMethodA `[18d2aaff4]`. Reads the `ct` setting `cNIJT` (GetObjectField on `this`), compares the selected child name against "Main Hand"/"Off Hand"/"Both" (the repeated static-get + boolean-compare pattern), and returns the corresponding `Hand.MAIN_HAND` / `Hand.OFF_HAND` `[inferred, uncertain]`. For "Both", the mapping (alternate hands per placement, prefer filled hand, etc.) is unrecovered `[uncertain]`. Region `18d2a8xxx`–`18d2aaxxx` is shared with asG's continuation set — several of the listed call sites may belong to asG `[uncertain]`.
- **`asI(Lnet/minecraft/class_1268;)Z` [stub 18d2ab120]** `[slice 0xcb11,0x227]` — **per-hand usability predicate** (descriptor `(Lnet/minecraft/class_1268;)Z` verbatim in the slice). Entry block `0x18d2ab1e4`; GetStaticLongField `[18d2ab26a]` + decrypt block at `0x18d2af050` (helper ×13) `[decompiled machinery]`. Semantic calls: GetStaticObjectField `[18d2ad8bf]`, CallStaticObjectMethodA `[18d2ae628]`, `[18d2aea03]`, GetObjectField `[18d2ada35]`, CallObjectMethodA `[18d2ae346]`. The only MC method referenced by the slice that fits a per-hand boolean is `method_6115` (`LivingEntity.isUsingItem()Z`), so the most plausible reading is "the player is not already using an item in that hand" or a held-item-usability check on the given hand `[inferred, uncertain]`.
- **`asK()Lsixtwo/oS;` [stub 18d2afbd0]** `[slice 0xcb11,0x227]` — **returns the current `oS` mode constant.** Entry block `0x18d2afc26`; GetStaticLongField `[18d2afcac]` + machinery; semantic calls: GetObjectField `[18d2afe27]` (reads a field of `this` — plausibly the `BhfJC` "Hand Swing" setting), seven opaque `ExceptionOccurred`+`IsInstanceOf` class checks `[18d2aff6a..18d2b0298]` (obfuscated string/class comparisons — consistent with comparing the selected child name against "Client"/"Server"), CallStaticObjectMethodA `[18d2b0351]`, Throw `[18d2b0402]`, return `[18d2b0414]`. Most plausible mapping: **"Client" → `oS.QhKIT`, "Server" → `oS.Kifdf`** (both enum constants are in ei's slice; order of the two-name comparison unrecovered) `[inferred, uncertain]`.

### Machinery / framework handlers (no module behavior)

- **`asL(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18d2b09f0]** — decompiled body is `return param_3;` — identity rethrow for the Vineflower `MatchException` pattern (payload Java: `cIi`/`cHM`/`bDX` equivalents). No behavior `[decompiled]`.
- **`asM(IJ)I` [18d2b0a80]** — the invokedynamic **int-constant decrypt kernel** (bsm for `sixtwo.ei`, desc `(IJ)I`; matches full-dump.jsonl entries: 30290→38 (module id), 72,97,110,100,32,84,111,32,85,115,101 → "Hand To Use", etc.). ~530 lines of inline opaque key schedule in the stub itself, constants copied verbatim from `analysis/ghidra/handlers-full/sixtwo_ei.c`:
  `0xd147793bf576346e`, `0xd147793b7154174b`, `0x6e23e2dafcff327`, `0xf97bb09b2328b9c`, `0x90df6707eaed5c91`, `0x90df67076ecf004a`, `0x90df6707eaeddc8f`, `0x835c0d6c640db451`, `0x84225cda`, `0x2efa405ca509e301`, `0xffbd3967507fd770`, `0x6f2098f81512a371`, `0x90df67076ecfffaa`, `0x10df67076ecfffaa`, `0x6b0f7557fa69f423`, `0xefe1d9d3d02e5f5f`, `0xdd525e01fa077dc0`, `0x2bb9d21f01799830`, `0x858324d6e82f5019`; masks `0x5555555555555555`, `0x3333333333333333`, `0xf0f0f0f0f0f0f0f`, `0x101010101010101`, `0x7fff`; rotate/mix steps `*0x2000`, `>>7`, `<<0x11`, `<<0xf|>>0x31`, and the `0x40 − (…)*0x101010101010101 >> 0x38` clz-style step; tail re-decrypts the shared slice `[0xcb11,0x227]` at `[18d2b300d]` and uses `GetStaticObjectField` `[18d2b309b]` (plausibly the per-thread cache map `ei.QqXlu`, whose name is in the slice) before returning at `[18d2b31c7]` `[decompiled machinery]`.
- **`asN(Lookup;MutableCallSite;String;[Object;)I` [18d2bb8f0]** `[slice 0xcb11,0x227]` — re-bootstrap of a `MutableCallSite` (indy cache invalidation): GetArrayLength / GetObjectArrayElement / IsInstanceOf guards, NewObjectArray + SetObjectArrayElement, three GetStaticObjectField, two CallStaticObjectMethodA, terminal CallVoidMethodA `[18d2bc7dd]`, return `[18d2bc813]` `[decompiled machinery]`.
- **`asO(Lookup;String;MethodType;)CallSite` [18d281580]** `[slice 0x857,0x26]` — indy bootstrap (slice tokens include `…odHandle;` tail of `Ljava/lang/invoke/MethodHandle;`): AllocObject `[18d281615]`, CallNonvirtualVoidMethodA `[18d28171a]` (CallSite super-ctor), GetStaticObjectField `[18d28190d]`, NewObjectArray `[18d28197d]`, SetObjectArrayElement ×4 `[18d2819ee, 18d281a52, 18d281a84, 18d281b22]`, NewStringUTF `[18d281c83]`, then further AllocObject/CallNonvirtualVoidMethodA/CallObjectMethodA/CallVoidMethodA machinery through `18d2825f6+` (292 continuation blocks, 200 JNI calls) `[decompiled machinery]`.
- **`_f25485ee343fb698e3bb919784879d84()V` [18d284290]** `[slice 0x226,0xd]` — native clinit bootstrapper: decrypt helpers, GetStaticLongField `[18d284b22]`, AllocObject/CallNonvirtualVoidMethodA, CallObjectMethodA, NewByteArray/GetArrayLength, and **6 GetPrimitiveArrayCritical/ReleasePrimitiveArrayCritical pairs** `[18d287ce0..18d28b400]` (bulk array copying to initialize decryptor state). Slice resolves `java/lang/String` + `"<"` (the `Loader.doInit(ei.class)` path). Anti-analysis machinery, no module behavior `[decompiled machinery]`.

## Settings → behavior mapping

| setting | wrapper (field) | decrypted value | behavior link |
|---|---|---|---|
| "Hand To Use" | `ct` (`cNIJT`) | children "Main Hand" / "Off Hand" / "Both" | read by native `asH()` → selects which `Hand` the placement is executed with `[inferred]`; field name `cNIJT` verbatim in ei's slice `[slice]` |
| "Hand Swing" | `ct` (`BhfJC`) | children "Client" / "Server" | read by native `asK()` → mapped to the `oS` enum (`QhKIT`/`Kifdf`) carried in the action packet `oT` (client-side vs server-side swing) `[inferred, uncertain]` |
| "Only When Crouching" | `cJ` (`VLSja`), default **false** (`.WE(false)`) | boolean | combined with `isSneaking` (`method_5715`) inside the gate `asG()` — when true, placement presumably only proceeds while sneaking `[inferred, uncertain]`; exact boolean combination unrecovered |

There are no numeric settings in this class; all placement thresholds (sample counts `N₁`/`N₂`, face bounds, reach) are hard-coded in the engine classes (`oC`/`oE`) and the native VM.

## Unrecovered / uncertain

The following are explicitly NOT recoverable from this corpus. Do not guess them in the clean-room rebuild; pick documented designer choices and record divergence in PARITY.md:

1. **Exact Java-method attribution per JNI call site.** Method IDs are resolved once at class init and cached in `.data` globals; no name/signature string is recovered from any handler slice except via the pool. Attributions of `cHC`/`cHL`, `qL.dbI`, `qP.ddp`, `oT$vo` setters rest on call shape + pool tokens only.
2. **The boolean combination inside `asG()`.** The slice proves the ingredient set (`isSneaking` method_5715, `isUsingItem` method_6115, `isBreakingBlock` method_2923, setting `VLSja`) but not the formula (which conditions suppress, whether VLSja inverts, whether isUsingItem is per-hand). Region `18d2a8xxx`–`18d2aaxxx` is shared between asG's and asH's continuation sets; several traced call sites cannot be assigned to one handler.
3. **`asE`'s terminal CallVoidMethodA receiver/method** `[18d27cdcd]` and the precise duty split between `asE` (rotation-manager `gv` tick) and `asF` (player-tick `gH$th`) — which handler computes the target position (`getBlockPos().down()`), which submits the packet, and which triggers `qP.ddp`.
4. **`oE.cIq(BlockPos, Direction, int)` and `oE.cIr(BlockPos, Direction)` — sample-point generation — CFR decompile failed.** The face-bounds constants `DNYow=0.15` / `XZnzz=0.85` strongly suggest sampling within the [0.15, 0.85] face sub-square, and the sample counts are `cIl("j", 6501, 0x53EEBC8E2F86F31EL ^ l2)` (in `cHW`) and `cIl("j", 30560, 0x48AF86E24AC9391BL ^ l2)` (in `cHV`) — both DES-decrypted at runtime with the key long `baTmf` (itself produced by the native `gb.aYR` kernel) and therefore **unrecovered**.
5. **`oC.cIb(BlockPos, Direction, Vec3d) → boolean` — face-usability/blocked test — decompile failed.** Observed contract only: returning true causes the support/face to be skipped (in `cHT`'s loop and in the `cHU` reuse path). `oC.cIc(Vec3d, BlockPos, Direction) → boolean` — point-validity filter — also decompile failed; observed contract: points where it returns false are skipped in `cHW`/`cHV`; plausibly the `cId` [0.15, 0.85] bounds check applied to the point coordinates on the face.
6. **`ja.toQLU` Direction order.** `cIe` indexes `ja.toQLU[i]` against `YuMVe[i]`; the table is populated natively. If (unproven) it is `[DOWN, UP, WEST, EAST, SOUTH, NORTH]` matching the Yarn `Direction.values()` order, the clicked faces are DOWN (from below), UP (from above), WEST (from −X), EAST (+X), SOUTH (+Z), NORTH (−Z) — i.e. the face pointing from the neighbor back into the target block. Any other population order changes the face mapping.
7. **The `boolean` argument passed to `oA.cHC(pos, oD, bool)`** by the native callers (entity-occupancy-check flag `xUADK`; engine default false, meaning `jl.bDT` is skipped unless enabled) and whether `cHF(oB)` is ever called with `FXGPX` (random pick) by ei — ei's traced calls show no `cHF`, implying the default `LwHxs` (best pick).
8. **"Both" hand semantics** in `asH()` (alternate per placement vs. prefer the hand holding a block vs. other), and the exact "Client"/"Server" → `oS.QhKIT`/`Kifdf` direction in `asK()`.
9. **Pool-entry attribution ei vs `sixtwo.eB`.** eB's handlers decrypt `[0xcb21,0x228]`, overlapping ei's `[0xcb11,0x227]`; tokens `asB`, `avS`, `asS`, `KBjlK`, `UqlCk`, `edZTg`, `aNeIU`, `XmJDu`, `QZqXr` and the trailing `sixtwo/ej` entries (`ISzxl`, `sixtwo/iV`, `bxl`, `(Lsixtwo/ov;)V`, `sixtwo/hc`, `sixtwo/ek`, `Lq`) cannot be assigned to ei with certainty. The `dwM (Lsixtwo/oz;)Lsixtwo/oT$vo;` descriptor likewise matches `oT$vo.dwM(oz)` only in argument shape (`oT$vo.dwM` returns `void` in the Java decompile), so the packet-staging attribution is soft.
10. **`"Tlzw"`** (asJ's 5-byte slice) — same opaque tiny-token pattern as fa's null-guard markers; meaning unrecovered.
11. **`oU.Xrdom` value semantics** (`Long` per planned BlockPos — timestamp vs. tick counter vs. id) and the lifetime of entries (cleared per tick / per placement / per module disable).
12. **`jl.bDU` (the entity filter used by `jl.bDT`)** — which entity classes are excluded from the occupancy test (decompile present but predicate body not inspected exhaustively); **`jg.bBH(Vec3d, Vec3d)`** — whether the distance metric is plain or squared distance (it is compared directly against `getBlockInteractionRange()`).
13. **Tick cadence / ordering** of `gv` vs `gH$th` listeners relative to rotation application, and whether ei registers any additional native-only event hooks (the DLL registers exactly the 12 handlers listed; no extra registrations were found).
14. **Display names of `oD` (`pxPhl`, `hAkBH`, `xBObQ`) and `oS` (`QhKIT`, `Kifdf`)** — decrypted natively at enum init (`oD.cIm`, `oS._ad21b99…`); semantic roles (e.g. hAkBH vs xBObQ = "normal raycast" vs "direct center-click"; QhKIT vs Kifdf = "client swing" vs "server swing") are inferred from usage sites only.
15. **`oE.IBRal`** — a DES/CBC/PKCS5Padding-decrypted string constant in `oE` (24-byte ciphertext); content unrecovered, likely a helper class/member name used by the failed-to-decompile methods.