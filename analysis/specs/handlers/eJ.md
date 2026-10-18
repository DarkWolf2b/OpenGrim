# Auto Trap (sixtwo.eJ) — handler-derived behavior spec

Class: `sixtwo/eJ` · module id **11** · display name **Auto Trap** · registry description
"Automatically traps enemy" · primary key 11, active bind -999 (unbound) [registry].
Superclass chain: `eJ → eL → gg` (`eL` = shared block-placement base, `gg` = module base).

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_eJ.c` — all 58 native handlers + 625
   continuation blocks (primary source). Structural facts about the corpus that govern
   how much behavior is recoverable:
   - **450 of 625 continuation blocks end in `halt_baddata()`** (Ghidra truncated the
     indirect-jump chains). The obfuscator (mango/`$mango$6dc686caab50ed59` blob +
     `Loader.doInit`) compiles Java method bodies into an embedded native VM; the
     decompiled "handlers" are VM entry stubs and the continuation blocks are JNI glue
     around it, not Java semantics.
   - Only **53 blocks contain any JNI call beyond the 4 exception-guard functions**
     (`ExceptionCheck`, `ExceptionOccurred`, `ThrowNew`, `IsInstanceOf`). Those 53 are
     cataloged per-handler below.
   - **No `rdtsc`** anywhere in this class. The large state-machine arithmetic in
     `[18c5a6d90]` (`azs`) and block `[18c5be3ad]` is the string-decryption PRNG
     (add/xor/rotate whitening, popcount tricks, constants like `0x84222325`,
     `0x7fffaaff5bdf50cf`, `0x33be22eddbff518f`, `0x5fc0`) — anti-analysis noise, not
     module logic.
   - Helper census (payload runtime, not analyzed): `FUN_190dd72e0` ×118, `FUN_190ddce00`
     ×21, `FUN_190dd9df0` ×19, `FUN_190ddfc90` ×18, `FUN_190de3220` ×8, plus
     `FUN_184117d50` ×2, `FUN_1842a3a30` ×1, whitening funcs `func_0x00018c5b1bc0`,
     `func_0x00018c58fb50`, `func_0x00018c5cf740`.
2. `analysis/decompiled/payload-named/sixtwo/eJ.java` (CFR) — complete Java-side skeleton:
   settings tree, wired method references, native method declarations. Method names below
   match the handler headers.
3. `analysis/decompiled/payload-named/sixtwo/eL.java` — placement base the module plugs
   into (674 lines, also obfuscated; gives the shared contract).
4. Supporting payload types read for vocabulary: `oz` (placement plan record),
   `oI` (player+int object), `oj` (placement executor), `oT` (block-interaction attempt),
   `oD` (3-constant enum), `gv` (tick event, extends `hH`).
5. Decrypted literals: `analysis/decrypted/full-dump.jsonl` (all 199 `sixtwo.eJ`
   `azu("k", idx, key)` entries resolved; every setting label and option label below was
   re-decoded char-by-char from it, e.g. 66,111,120 = "Box").
6. Yarn mapping: `analysis/jars/yarn-1.21.11+build.6.tiny` and
   `analysis/reference/intermediary-to-yarn-classes.tsv`.

## Runtime model

**Trigger.** One event subscription: `@hG ayq(gv)` (`gv extends hH` = client tick event),
native `[18c529810]`. Everything else runs inside the tick, or via `eL`'s two additional
`@hG` hooks (`eL.azO(gH$th)`, `eL.azP(go$sX)` — inherited, event types not decoded here).

**Shared pipeline (eL, native).** `eL` owns the placement machinery: target field
`protected PlayerEntity LNtEX` (accessor `aAN()`), a placement executor
`protected final oj qpOsU = new oj()` (`oj.cEr(oD,oB,boolean)` — imports
`ClientPlayerEntity`, `BlockHitResult`, `Box`, `Vec3d`), a controller handle
`TVLGg = mT.cpz()`, and the abstract hooks every subclass fills in:

- `ayB() → List<BlockPos>` — candidate positions for the current target (eJ implements).
- `ayy(oD) → oz` — build the placement plan (`oz` = `record(BlockPos blockPos,
  BlockHitResult blockHitResult)`, with helpers `blockState()` = world state at pos,
  `hitPoint()` = hit result position). So a plan is *which block, which face*.
- `ayv(ItemStack) → boolean` — is this held stack acceptable for placement.
- `ayw() → oI` — supplies the interacting player + an int (slot/index; `oI` validates
  `0 ≤ v ≤ <decrypted constant>` and stores a `PlayerEntity`).
- boolean gates `ays/ayt/ayu/ayr/ayz(oD)`; per-step callback `ayx(oD)`;
  final native helpers in `eL`: `azY(oz)→double` (plan score), `azZ(List<oz>)→oz`
  (plan selection), `azS()/azV(boolean)→Hand` (hand choice), `azW(List<BlockPos>)`
  (execute a batch), `azT()→oD`, `azU()→oB`, `azQ(boolean)`, `azX()`, `azR(mw)`,
  `aAb(BlockState)`, `aAc(Hand)`, `aAd()`.

**Target entity.** `ayC(PlayerEntity) → List<BlockPos>` native `[18c534ed0]` — candidates
are computed **per `PlayerEntity`** (parameter type class_1657). The target field itself
lives in `eL` (`LNtEX`) and its selection is native in `eL` — the eJ handlers do not
contain the targeting filter. Not further recoverable here.

**Placement computation (what the handlers show).** The candidate/plan layer of eJ is a
family of BlockPos offset helpers plus predicates:

- `azd/azk/azg/azi/aze (int, BlockPos) → BlockPos` `[18c58f690, 18c5915b0, 18c5905c0,
  18c590f10, 18c58fc70]` — five offset resolvers sharing constant-pool window
  `POOL[0x98a3,0x1b0]`, which contains: `BlockPos.offset(Direction)`
  (`method_10093`), `BlockView.getBlockState(BlockPos)` (`method_8320`),
  `BlockState.isOf(Block)` (`method_27852`), `BlockState.getBlock()`
  (`method_26204`), `Blocks.LEVER` (`class_2246.field_10363`), a `()Direction`
  accessor, and payload wrappers `sixtwo/oT` (`dlW ()Lsixtwo/qP;`,
  `(Lsixtwo/oT;)Z`; `oT` = an in-flight block interaction attempt: `Hand`,
  slot object `oS`, `BlockHitResult`, plan `oz`, boolean; two static instances
  `oT.UgZrs`, `oT.DpyXs`). Reading: the offset helpers pick a neighbor of a base pos
  via `offset(Direction)` and validate it against live `getBlockState`, including a
  check against `Blocks.LEVER` (see §Unrecovered for attribution caveat).
  The `int` argument indexes which of the ring/layer variants is taken; only the
  obfuscation prelude over that int is visible (`[18c58f690]`), the actual Δx/Δy/Δz
  arithmetic is inside the native VM.
- `azf/azj (List, BlockPos)` and `azh (List, int, BlockPos)` `[18c58fe60, 18c591100,
  18c5907b0]` — list adders that feed the offset helpers' results into the candidate
  list (pool fragment `POOL[0xcd,0x6] = "ion | si"` — uninformative).
- `aza/azb (BlockPos) → boolean` `[18c5864b0, 18c58bc40]` and `azq (BlockPos) → boolean`
  `[18c5a6720]` — position predicates (`azq` is wired as `Predicate<BlockPos> Ajpit`).
- `azp (BlockState) → boolean` `[18c59fb60]` — state predicate (wired as
  `Predicate<BlockState> kMQwW`; pool window `POOL[0xa5b5,0x1d5]` includes
  `BlockState.isAir()` `method_26215` and a `()BlockState` descriptor).
- `azo (BlockPos) → Double` `[18c59f3e0]` — numeric score; wired as
  `Comparator.comparing(eJ::azo)` (`ldzYZ`), so candidates are sorted by this score
  before any placement budget is spent. Its constant pool is a 5-byte fragment
  `POOL[0xb1,0x5] = "Tlzw"` — the formula is inside the VM. One float-vs-double
  comparison block survives nearby: `[18c595e42]` `switch((double)float < double)` in the
  azl/azm region — evidence of real numeric gating there, constant not recoverable.
- `azc (BlockPos) → BlockPos` `[18c58f4a0]` — base-position adjuster (same pool window
  as the offset family).

**Plan validity & interaction.** `ayG(oz) → boolean` `[18c576110]`,
`azl(oz) → boolean` `[18c5917a0]`, `azm(oD, BlockPos) → oz` `[18c5960f0]` — plan checks /
plan builder for a specific event kind `oD` (3-constant enum with DES-encrypted names;
`eL.ayy(oD)` produces an `oz`). The chain around `azm` shows
`CallStaticObjectMethodA` `[18c596321]`, `CallObjectMethodA` and the double compare
`[18c595e42]`.

**Blocks/swing behavior.** From `POOL[0xa5b5,0x1d5]` (shared by the pipeline handlers
ayB/ayC/ayD/ayE/ayF/ayG/ayq/ays/ayt/ayv/ayw/ayx/ayy/aza/azb/azl/azn/azp — 19 handlers,
so per-handler attribution of individual names is NOT possible):
`BlockPos.ofFloored(Position)` (`method_49638`), `BlockPos.toCenterPos()`
(`method_46558`), `Entity.getEyePos()` (`method_33571`),
`RaycastContext` / `RaycastContext$ShapeType.COLLIDER` (`class_3959`, `field_17558`),
`LivingEntity.swingHand(Hand)` (`method_6104`, `Hand` = class_1268), and
`ClientPlayerInteractionManager.updateBlockBreakingProgress(BlockPos, Direction)`
(`method_2902`). Reading: the pipeline floors a target position, raycasts from eye
position with COLLIDER shape (through-wall / visibility logic), swings a hand on
interaction, and there is *some* interaction-manager block-breaking call in the shared
pool window (see §Unrecovered). It also references `sixtwo/eK` (`cnb`, `bck`),
`()Lsixtwo/oj;` (the eL executor `aAM()`), and hash-internal names (`aAa`, `aAe`,
`cnd`, `anf`, `ImshN`, `zrgbM`, `CzAnG`, `QiyGI`, `krUWC`, `MxRqJ`, `ann`, `gnfiQ`)
which are payload-internal and unresolved.

**Block/item selection.** Item choice is a Java-side setting (`fBJse`, default
`Items.OBSIDIAN`); the native handlers read it via `GetObjectField` accessor blocks
(17 of them). The alternative-block item set `ayH() → Set<Item>` `[18c57b930]` is built
with `java/util/LinkedHashSet` (`AllocObject` blocks `[18c57b981]`, `[18c57bf5b]`)
through payload item helpers `sixtwo/aP`, `sixtwo/pF`, `sixtwo/lC`, `sixtwo/lc`,
`sixtwo/aT`, `sixtwo/pi` (`POOL[0x5951,0x110]`).

**Packets/rotations.** No packet class appears in any pool window. Rotation handling is
inherited (`eL.TVLGg = mT.cpz()`, `eL.azO/azP` events); eJ contributes no rotation code of
its own that is visible.

**State.** eJ static fields `ofjNs`, `soqHb`, `CLJoU`, `lbCIz` and the `$mango$...` blob
are obfuscator state, not module state. Instance state is the 13 settings objects plus
the three wired lambdas.

## Per-handler semantics

Group A — **trivial / proven exact**:

- `ayu ()Z` `[18c58fbe0]` — **returns constant 0 (`false`)**. The only handler in the
  class with a fully decompiled body. (Override of `eL.ayu`, one of the abstract gates.)
- `azr (MatchException) → MatchException` `[18c5a6d00]` — identity (`return param_3`),
  obfuscator exception stub.
- `ayA(oD) [18c52fe80]`, `ayr() [18c52fb10]`, `ayz(oD) [18c5e8290]`, `azm(oD,BlockPos)
  [18c5960f0]`, `ayJ/ayK/ayL/ayM/ayN/ayO/ayP/ayQ/ayR/ayS/ayT/ayU/ayV/ayW
  [18c57fb90…18c585cb0]`, `ayX [18c585eb0]`, `ayY [18c5860b0]`, `ayZ [18c5862b0]`,
  `azt [18c5b1c50]` — single-block dispatch: test `param_2 == 0` (null check on the
  JNIEnv frame / receiver arg) and indirect-jump through a 2-entry table
  (`&UNK_18xxxxxxx + (cond)*8`). Behavior = the continuation chain, not decompiled.
- Accessors `ayJ…ayZ` (17 getters returning the setting objects / lambdas): each
  continuation performs `GetObjectField` + `ExceptionCheck` and tail-jumps — e.g.
  `[18c574db6]`, `[18c57fcc6]`, `[18c580556]`…`[18c5863e6]`, `[18c5859e6]`,
  `[18c585be6]`, `[18c585de6]`. Pure field reads, no logic.
- `azs(IJ)I` `[18c5a6d90]` — string-decryption helper (same role as `eL.aAX/aAV`):
  ~560 lines of whitening arithmetic + `func_0x00018c5b1bc0`, ends decrypting
  `POOL[0xa5b5,0x1d5]`. Not module behavior.
- `azu(Lookup,String,MethodType) → CallSite` `[18c5b2c60]` — invokedynamic bootstrap for
  the `azu("k",…)` string-decrypt calls (pool `POOL[0x857,0x26]` = fragment of
  `…MethodHandle;`, `Ljava/util/Map;`, `java/l…`). `azt(Lookup,MutableCallSite,String,
  Object[]) → I` `[18c5b1c50]` — MutableCallSite relink BSM. Both are obfuscation
  machinery.
- `_0f62af144daa7258b4d816e929c19089()V` `[18c5b5970]` — static init: decrypts
  `POOL[0x226,0xd]` (fragment of `java/lang/String;`), `ExceptionCheck`, 2-way jump.

Group B — **pipeline handlers, real work behind the VM** (each decrypts
`POOL[0xa5b5,0x1d5]` then jumps; listed with the distinctive continuation evidence):

- `ayq(gv) [18c529810]` — the tick entry. Chain block `[18c5298dd]` calls
  `FUN_190ddce00` (payload runtime) and tail-jumps. Nearby `CallVoidMethodA` block
  `[18c530da8]` (one void method invocation per tick step, e.g. a super tick or
  executor call — attribution uncertain).
- `ayB() → List<BlockPos> [18c530ec0]` — candidate-list hook override.
- `ayC(PlayerEntity) → List<BlockPos> [18c534ed0]` — per-player candidate computation.
  Chain shows a `FUN_184117d50` call + `IsInstanceOf` check `[18c5344e4]`,
  `CallStaticObjectMethodA` `[18c534c64]`, `FUN_190de3220` `[18c534c0d]`,
  `ExceptionOccurred` + runtime cleanup `[18c534d9f]`, `[18c535b01]`, `[18c566d79]`,
  plus `SetObjectArrayElement` ×2 `[18c568240]` (object-array writes — building an
  array of results).
- `ayD() → boolean [18c5691e0]` — boolean check; chain contains the class's
  `CallBooleanMethodA` block `[18c56901b]` and `FUN_184117d50` + check `[18c56c545]`,
  `ThrowNew` `[18c56df2b]`.
- `ayE() → boolean [18c56e610]` — visibility callback for "Alternative Block Through
  Walls" (wired `MIXlE.Vf(this::ayE)`); chain `[18c56e6d4]` etc.
- `ayF(ItemStack) → boolean [18c572000]` — held-item acceptance override; chain
  `[18c5720c7]`, `[18c574c99]`, `GetObjectField` region starting `[18c574db6]`.
- `ayG(oz) → boolean [18c576110]` — plan-validity check override.
- `ayH() → Set<Item> [18c57b930]` — static seed set for the Alternative Block item
  selector; `Throw` `[18c57b7b7]`, `AllocObject` `[18c57b981]` (LinkedHashSet alloc).
- `ayI(List) → List [18c57bec0]` — post-filter of candidate list; `AllocObject`
  `[18c57bf5b]` (allocates the returned list).
- `ays() [18c57fd90]`, `ayt() [18c581820]` — gate overrides (`ayt` overrides `eL.ayt`;
  chain has `GetStaticLongField` `[18c57fe5e]` and `CallVoidMethodA` `[18c57fa28]`).
- `ayv(ItemStack) → boolean [18c59b1d0]` — held-item acceptance (second variant used by
  the base for alternative block).
- `ayw() → oI [18c5cf7d0]` — player+slot provider override; chain has
  `GetStaticLongField` `[18c5cf8e0]` and `ReleasePrimitiveArrayCritical` +
  `GetArrayLength < 2` check `[18c5c8a8f]` (array-size guard inside the decryptor chain).
- `ayx(oD) [18c5d4940]` — per-step callback override.
- `ayy(oD) → oz [18c5e12b0]` — plan builder override; chain `Throw` `[18c5e10a4]`,
  `CallObjectMethodA` `[18c5e8019]`.
- `aza(BlockPos) → boolean [18c5864b0]`, `azb(BlockPos) → boolean [18c58bc40]` —
  position predicates (azb chain has two `Throw` blocks `[18c58b85a]`, `[18c58ba9f]`).
- `azn() → Boolean [18c596720]` — visibility callback for the "Alternative Block"
  item selector (wired `ogYnJ.Vf(this::azn)`); returns boxed Boolean.
- `azp(BlockState) → boolean [18c59fb60]` — state predicate; chain
  `CallStaticObjectMethodA` `[18c59fa56]`.
- `azq(BlockPos) → boolean [18c5a6720]` — position predicate wired as `Ajpit`; chain
  `Throw` `[18c5a65e4]`, `GetObjectField` `[18c5a699b]`.

Group C — **shape helpers** (pool `POOL[0x98a3,0x1b0]`, see Runtime model):

- `azc(BlockPos) → BlockPos [18c58f4a0]` — chain `CallObjectMethodA` `[18c58f5bb]`.
- `azd(int, BlockPos) → BlockPos [18c58f690]` — only handler besides `azs` with visible
  arithmetic: ~70 lines of whitening over `param_3` (the int selector) writing
  `_DAT_18330a458/a4c8/a600/a360/a6c8/a4b8` (obfuscator state), calling
  `func_0x00018c58fb50`, then decrypting the pool and jumping. **No offset math is
  visible.**
- `aze(int, BlockPos) → BlockPos [18c58fc70]` — chain `CallObjectMethodA` `[18c58fac8]`.
- `azf(List, BlockPos) [18c58fe60]`, `azj(List, BlockPos) [18c591100]` — chain
  `CallObjectMethodA` `[18c58fd88]`, `[18c591028]` (method call into the list path).
- `azg(int, BlockPos) → BlockPos [18c5905c0]` — chain `CallObjectMethodA` `[18c5906e0]`.
- `azh(List, int, BlockPos) [18c5907b0]` — two-arg adder variant.
- `azi(int, BlockPos) → BlockPos [18c590f10]` — chain `CallObjectMethodA` `[18c591028]`.
- `azk(int, BlockPos) → BlockPos [18c5915b0]` — chain `CallBooleanMethodA`
  `[18c5914ba]` + `CallObjectMethodA` `[18c5916c8]` (validates then resolves).
- `azl(oz) → boolean [18c5917a0]`, `azm(oD, BlockPos) → oz [18c5960f0]` — plan
  checks/builder; chain `CallStaticObjectMethodA` `[18c596321]`, float→double compare
  `[18c595e42]`.
- `azo(BlockPos) → Double [18c59f3e0]` — comparator score.

## Settings → behavior mapping

All labels below were re-derived from `full-dump.jsonl` `azu` values (exact):

| Field | Wrapper | Label (verbatim) | Builder chain (constructor) | Behavior tie-in |
|---|---|---|---|---|
| `CuJCC` | `ct` | "Trap Mode" (84,114,97,112,32,77,111,100,101) | `new ct(this, mr.clS(nArray2))` | mode enum consumed by shape helpers |
| `LcoZx` | `cu` | "Box" (66,111,120) | child of `CuJCC` | trap mode option 1 (first = default) |
| `zRRku` | `cu` | "Head" (72,101,97,100) | child of `CuJCC` | trap mode option 2 |
| `dsMoQ` | `cu` | "Legs" (76,101,103,115) | child of `CuJCC` | trap mode option 3 |
| `fBJse` | `cK` | "Blocks" (66,108,111,99,107,115) | `.WM(jc.GjreY).WN(Items.OBSIDIAN)` | primary block item; default **OBSIDIAN** |
| `MIXlE` | `cJ` | "Alternative Block Through Walls" (29 chars, ends `…W a l l s`) | `.WE(false)` | boolean, default **false**; visibility cb `ayE()` |
| `ogYnJ` | `cK` | "Alternative Block" (65,108,…,107) | `.WM(eJ.ayH()).WN(Items.CRYING_OBSIDIAN, Items.OAK_PLANKS).WT()` | alternative item; extra choices CRYING_OBSIDIAN, OAK_PLANKS; visibility cb `azn()` |
| `fzDSC` | `cv` | "Double Place" (68,111,117,98,108,101,32,80,108,97,99,101) | `new cv(this, …)` | group |
| `TorvG` | `cw` | "Above" (65,98,111,118,101) | child of `fzDSC` | double-place above toggle |
| `ifPTd` | `cw` | "Below" (66,101,108,111,119) | child of `fzDSC` | double-place below toggle |
| `KtDjx` | `ct` | "Place Mode" (80,108,97,99,101,32,77,111,100,101) | `new ct(this, …)` | mode enum |
| `JNLoj` | `cu` | "Single" (83,105,110,103,108,101) | child of `KtDjx` | place mode option 1 (first = default) |
| `pAkkC` | `cu` | "Multi" (77,117,108,116,105) | child of `KtDjx` | place mode option 2 |
| `qBfOM` | `cC` | "Blocks Per Tick" (66,108,111,99,107,115,32,80,101,114,32,84,105,99,107) | `.Vy(1.0).VA(8.0).Vw(2.0).Vx(12.0)` | numeric: **step 1.0, default 8.0, min 2.0, max 12.0** (per `eL`'s `Vy=step, Vw=min, Vx=max, VA=default` ordering, cf. `eL.Motwu`) |

Wired references (constructor): `Ajpit = this::azq`, `kMQwW = this::azp`,
`ldzYZ = Comparator.comparing(eJ::azo)`, `MIXlE.Vf(this::ayE)`,
`ogYnJ.Vf(this::azn)`, `qBfOM.Vf(this.pAkkC::SZ)` (Blocks-Per-Tick gated on the
"Multi" option's `SZ`, consistent with visibility-gating; `SZ` semantics not proven).
`ayu()` is hard-wired `false` in native (`[18c58fbe0]`), so whatever `eL` uses `ayu` for
is permanently disabled for Auto Trap.

## Unrecovered / uncertain

Determinable with certainty from this corpus: the module/setting identity, every
setting label/option/default/range above, the wiring of predicates/comparator, the
`ayu()≡false` gate, and the MC API names inside each constant-pool window. Everything
below is **not recoverable** — the bodies live inside the obfuscator's native VM and the
continuation decompile truncates (`halt_baddata` in 450/625 blocks). No guessing is
offered.

1. **Trap shape offsets.** The actual Δ-coordinates produced by `azd/aze/azg/azi/azk`
   and the layer structure built by `azf/azh/azj` are inside the VM; `[18c58f690]` shows
   only whitening over the int selector. (The registry-era rebuild
   `modules/world/AutoTrap.java` used box/head/legs shapes — see `eJ.md` port notes —
   but the native numbers cannot confirm any offset.)
2. **Candidate scoring formula** (`azo`): only a 5-byte pool fragment
   `POOL[0xb1,0x5] = "Tlzw"`; the double math and any distance metric are unrecovered.
   One float<double comparison survives at `[18c595e42]` without its constant.
3. **Target selection filter**: where `LNtEX`/`aAN()` picks the enemy player is native in
   `eL`; eJ handlers only show `ayC` receives a `PlayerEntity`.
4. **`Blocks.LEVER` reference** (`class_2246.field_10363`) in `POOL[0x98a3,0x1b0]`:
   verified it is *in the class's pool window*, but the window is shared by 6 handlers
   (`azc/azd/azg/azi/azk/azq`) and the exact check (a "don't place onto/trap over lever"
   rule vs. an unrelated shared name) cannot be attributed.
5. **`updateBlockBreakingProgress(BlockPos, Direction)`** (`method_2902`) in
   `POOL[0xa5b5,0x1d5]`: verified present in the shared 19-handler window; whether the
   trap pipeline ever *breaks* blocks (vs. the name belonging to a shared `eL`/`eK`
   path cached in the same pool region) is not determinable from eJ alone.
6. **Raycast usage** (`getEyePos` + `RaycastContext` + `ShapeType.COLLIDER` +
   `toCenterPos`/`ofFloored`): the *names* are in the shared window; the exact
   visibility/through-wall rule (and whether `MIXlE` toggles it) is inferred from setting
   names only.
7. **`Vf` callback semantics** (visibility vs. change-listener) and `cu.SZ` /
   `cK.WT/WM/WN/WE/Tm/Tz` builder meanings — payload-internal, used consistently with
   the `eJ.md` reading but not proven here.
8. **`oD` enum constant names** (3 constants, DES-encrypted in `oD`'s static init):
   unresolved; affects the meaning of `ayy(oD)`/`ayz(oD)`/`ayx(oD)`/`azT()`.
9. **Hand/rotation/packet behavior**: no packet class appears in any eJ pool window;
   hand choice (`azS`/`azV`) and rotations (`mT`) are inherited native `eL` behavior —
   out of scope for this class's handlers.
10. **Numeric timing**: the only explicit numbers recovered are the Blocks-Per-Tick
    range (step 1.0 / min 2.0 / max 12.0 / default 8.0) and module id 11. No per-tick
    delay, click-delay, or rotation-speed constant for eJ itself is recoverable (eL's
    inherited `Motwu` slider — `Vy(0.01).Vw(2.0).Vx(6.0).VA(4.5)` — is eL's setting and
    its label is encrypted in `eL`).