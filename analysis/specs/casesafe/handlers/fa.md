# Auto X-Bow (sixtwo.fa) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fa.c` — 53 JNI handlers, 612 continuation blocks, 0 unresolved table targets. All paths in this doc are image addresses (`0x18xxxxxxxxx`), cited inline like `[18b4c73e0]`.
- Java skeleton: `analysis/decompiled/payload-decrypted/sixtwo/fa.java` (Vineflower, literals folded — authoritative for decrypted constants) and `payload-named/sixtwo/fa.java`, `fa$sK.java`, `fa$sL.java`.
- Structural spec: `analysis/specs/modules/fa.md`; framework spec: `analysis/specs/modules/00-framework.md`.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` (25 entries for `sixtwo.fa`, all `bsm aGZ`, desc `(IJ)I`).
- Symbol translation: `analysis/jars/yarn-1.21.11+build.6.tiny` (tiny v2). Pool blobs re-resolved with `analysis/tools/resolve_pool_blob.py`.

### Recoverability caveat (read first)

Every behavior handler in this class is a *dispatcher stub*: it decrypts one constant-pool blob slice with `BLOB_DECRYPTOR(image-addr,resolved-ptr,len)`, calls `JNI->ExceptionCheck`, and tail-dispatches through a jump table into tiny continuation fragments (612 blocks, largest 32 lines) that each perform a single JNI vtable call with `unaff_*` register state and end in `halt_baddata`-truncated indirect jumps ("Jumptable … did not pass sanity check"). Ghidra cannot stitch the fragment chain, so **no Java-level bytecode body of any behavior method is linearly recoverable from this corpus**. What IS recoverable per handler: which pool slice it decrypts (its symbol universe) and, in a few cases, directly decompiled code. All semantics below are therefore tagged:

- `[slice]` — handler verifiably decrypts the named pool slice (verified by address).
- `[decompiled]` — logic visible directly in the decompile.
- `[inferred]` — inferred from descriptor + slice contents + framework contract; NOT from a recovered body.
- `[uncertain]` — cannot be attributed with confidence.

## Runtime model

- `fa extends gg` (module base, `gg extends iS`). Constructor [cf. decrypted source fa.java:23-46]:
  - `super(gf.aZL(164, false, gh.xwjCw))` — module id **164**, flag `false`, category `gh.xwjCw` (names of the 5 `gh` categories are themselves encrypted) `[decompiled]`.
  - Key-mix seed: `long var1 = cTrfy ^ 19392193421588L` (static long `cTrfy`, payload-decryptor state) `[decompiled]`.
  - One setting: `vPwrl = new cD(this, mr.clS({65,99,116,105,118,97,116,105,111,110,32,75,101,121})).VO(-999)` — the 14 ints are the ASCII of `"Activation Key"` (`A c t i v a t i o n ␣ K e y`); `.VO(-999)` sets the bind default **-999** (unbound) `[decompiled]` (values verified in full-dump.jsonl lines 6196-6220).
  - `this.YfDDm = fa$sK.YbJTa` — state machine initialized to state #0 `[decompiled]`.
- Instance state: `fa$sL uULHD` (current plan), `fa$sK YfDDm` (current state), `int oEEDi` (counter/timer — role unrecovered) `[decompiled]`. Statics `irPKw String[]`, `cTrfy long`, `qJCJb long[]`, `zsVGN Integer[]`, `TOBUA Map` are obfuscation-runtime state `[decompiled]`.
- `fa$sK` = private state enum with **8 constants**: `YbJTa, RWBsV, MAgEy, oBiuY, dzJyB, hECYg, tKIGa, wglWG` (order = ordinal). Names are decrypted at runtime by `fa$sK.doS(byte[])`; none of the 8 names is recovered `[decompiled, uncertain]`.
- `fa$sL` = record `(BlockPos railPos, BlockPos firePos, BlockHitResult cartHitResult, Vec3d shotPoint)` — a firing plan: the rail the cart sits on, the position to fire/ignite from, the raycast hit on the cart, and the computed shot point `[decompiled]`.
- `oz` = record `(BlockPos blockPos, BlockHitResult blockHitResult)` with `blockState()` = `world.getBlockState(pos)` and `hitPoint()` = `blockHitResult.getPos()` — a block+hit snapshot used by plan building `[decompiled]`.
- `ov` = payload aim/rotation class (yaw+pitch pair). `ov.cGH()` returns the look direction `Vec3d(sin(-yaw·π/180)·cos(pitch·π/180), −sin(pitch·π/180), cos(-yaw·π/180)·cos(pitch·π/180))`; `ov.cGy(Vec3d)` = rotation to aim at a point from the eye; `ov.cGA()` = current player rotation `[decompiled]`. `fa` consumes `ov` (in `aGn(ov)`) and `ov.cGH` (symbol `cGH` in fa's pool slice) `[slice, inferred]`.
- Tick contract: `gg.YO()` base body is `hF.bdM(this)` — the native module-tick dispatcher; `fa.YO()` overrides it `[decompiled]`. Module tick-gate: `gc` (per-module state container, default `gd.ipLAD`) with 2-state enum `gd {ipLAD, zlSAY}`; `gc.aZg()` reads, `gc.aZi(gd)` writes `[decompiled]`.
- Events (payload bus `hH.bdV()` → `hF.bdO` listener lists, native dispatch):
  - `gM` — bare event subclass (empty marker); produced natively; consumed by ~100 modules. Role: per-tick / frame event `[inferred]`.
  - `gA` — input event carrying `MouseInput`, `KeyInput`, and 3 ints (action/mods/key) `[decompiled]`.
  - `gv` — bare event subclass fired by the aim module `qL` immediately before it applies a rotation (`qL.dbN` on `gH$th`: `new gv().bdV(); this.dbK()`) `[decompiled]`.
  - `gH$th` — player-tick event (qL's tick listener type) `[inferred]`.
- Registry intent: "Automatically performs crossbow cart" (module `fa`, key=164 is the *module id*, primary bind -999) `[registry]`. Combined with the pool surface (`Items.TNT_MINECART`, `Items.FLINT_AND_STEEL`, rail/plan record, aim class), the module automates a TNT-minecart ("cart") contraption: acquire a rail/cart/igniter scenario, build a firing plan, and (state-machine driven) aim + ignite/fire. The exact triggering and firing sequence is inside the native VM and is **not** recovered `[uncertain]`.

### Pool slices (per-handler symbol universes)

Verified mapping handler → decrypted slice:

| slice (off,len at pool base 0x301ee40) | handlers |
|---|---|
| `[0x109ac,0x2c5]` — fa's own symbol table | aGA, aGD, aGE, aGF, aGG, aGH, aGI, aGJ, aGK, aGL, aGM, aGO, aGP, aGR, aGS, aGT, aGU, aGV, aGX, aGb, aGc, aGd, aGe, aGf, aGg, aGh, aGi, aGj, aGk, aGl, aGm, aGn, aGo, aGp, aGq, aGr, aGs, aGt, aGu, aGv, aGw, aGy (43 handlers) |
| `[0xa96b,0x1de]` — straddles neighboring classes | aGN only |
| `[0x3806,0xbf]` — module-base tick slice | YO only |
| `[0x857,0x26]` | aGZ only |
| `[0x226,0xd]` | `_58c15a8e35946d7df205876cf3176779` (clinit) only |
| `[0xb1,5]` = `"Tlzw"` | aGB, aGC, aGx, aGz |
| (no blob decrypt) | aGQ, aGW, aGY |

fa's own slice `[0x109ac,0x2c5]` token-for-token (resolved):

```
minecraft/class_3965; | shotPoint | sixtwo/fa | aGQ | cTrfy | aGV | aGW | uULHD |
Lsixtwo/fa$sL; | YfDDm | aGM | vPwrl | aGn | (Lsixtwo/ov;)Lsixtwo/fa$sL; | doS |
aGr | (Lsixtwo/fa$sL;)Z | aGf | aGs | (Lsixtwo/fa$sL;)Lsixtwo/fa$sK; | oEEDi | aGB |
aGv | (Lnet/minecraft/class_2338;)Lsixtwo/oz; | aGH | aGg | aGh | aGi | aGj | aGk |
aGl | doR | ()[Lsixtwo/fa$sK; | aGm | aGP | aGD | (Lnet/minecraft/class_243;)Z |
field_8069 | aGG | (Lnet/minecraft/class_1792;)Lnet/minecraft/class_1268; | aGC |
aGw | field_8884 | cGH | aGN | (Lnet/minecraft/class_2338;)Lnet/minecraft/class_243; |
aGK | method_1026 | (Lnet/minecraft/class_243;)D | aGt | bDT | method_31607 |
method_31600 | aGp | (aGp descriptor) | srUqw
```

Reliable class-level MC API surface from this slice `[slice]`:

- `field_8069` = `Items.TNT_MINECART` (`Lnet/minecraft/class_1792;`).
- `field_8884` = `Items.FLINT_AND_STEEL` (`Lnet/minecraft/class_1792;`).
- `method_1026` + `(Lnet/minecraft/class_243;)D` = `Vec3d.dotProduct(Vec3d) → double`.
- `method_31607` = `HeightLimitView.getBottomY() → int`; `method_31600` = `HeightLimitView.getTopYInclusive() → int` (immediately precede `aGp` — used by the rail-scan vertical bounds `[inferred]`).
- `shotPoint` = the `fa$sL.shotPoint()` accessor; `cGH` = `ov.cGH()` (look-direction vector).
- Self symbols: fields `uULHD`, `YfDDm`, `oEEDi`, `vPwrl`, `cTrfy`; methods `aGQ…aGp`, `aGr`, `aGs`, `aGB`, `aGv`, `aGH`, `aGg–aGl`, `aGm`, `aGP`, `aGD`, `aGG`, `aGC`, `aGw`, `aGN`, `aGK`, `aGt`, `aGV`, `aGW`, `aGQ`; enum accessors `doR()/doS(byte[])`.
- Obfuscated tokens `bDT`, `srUqw` — unresolved (helper member names; owners not identifiable) `[uncertain]`.

## Per-handler semantics

### Framework / obfuscation machinery (no module behavior)

- **`YO()V` [18b4c73e0]** `[slice 0x3806,0xbf]` — module tick override (`gg.YO()` base = `hF.bdM(this)`). Slice tokens: `Lsixtwo/gg;` `baf ()Lsixtwo/gc;` `sixtwo/gc` `aZg ()Lsixtwo/gd;` `aZi (Lsixtwo/gd;)Lsixtwo/gc;` `cnP (FFF)Lsixtwo/mG;` `sixtwo/gx`. So YO reads the module tick-state container (`gg.baf()` → `gc`), reads (`gc.aZg()`) and possibly writes (`gc.aZi(gd)`) the 2-state tick enum `gd {ipLAD, zlSAY}`, constructs an RGB color via `mG.cnP(float,float,float)` (`mG` = 4-float color class; static palette instances exist), and references event class `sixtwo/gx` (empty event marker). Exact behavior (state transitions, color values, whether the tick gate is flipped) is inside the VM `[inferred]`.
- **`_58c15a8e35946d7df205876cf3176779()V` [18b58fa70]** `[slice 0x226,0xd]` — native clinit stub; slice = `"ang/String;"` + `"<"` (resolves `java/lang/String` / `<init>` for the `Loader.doInit(fa.class)` path). No module behavior `[decompiled]`.
- **`aGV()[Ljava/lang/String;` [18b56f070] / `aGU([Ljava/lang/String;)V` [18b56eef0]** `[slice 0x109ac]` — getter/setter of static `String[] irPKw` (obfuscation string array) `[decompiled structure, inferred]`.
- **`aGW(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18b56f200]** — decompiled body is `return param_3;` — identity rethrow for the Vineflower `MatchException` pattern. No behavior `[decompiled]`.
- **`aGX(IJ)I` [18b56f290]** — the invokedynamic **int-constant decrypt kernel** (matches full-dump `bsm` entries for `sixtwo.fa`, desc `(IJ)I`). 560 lines of key-mixing over globals `uRam1832a6xxx` using constants copied verbatim, e.g. `0x7b5f2b817b893c7d`, `0x7c4872e4a190961c`, `0x7175965da19aa60`, `0x8d4ea7032e494164`, `0xfb3ff5ff6f56d8d6`, `0x84222325`, popcount/`clz`-style bit tricks, rotate-by-`0x2d` (`<<0x1d | >>0x23`) mixing, and ~20 calls to the payload PRNG helper `func_0x18b57b310`. Ends by decrypting the shared slice and tail-dispatching. **Anti-analysis machinery — not module behavior.** The observable contract (from full-dump.jsonl): `aGX(int off, long key) → decrypted int` `[decompiled machinery]`.
- **`aGY(Lookup;MutableCallSite;String;[Object;)I` [18b58bd50]** — empty decompile; re-bootstrap of a `MutableCallSite` (indy cache invalidation). No module behavior `[decompiled stub]`.
- **`aGZ(Lookup;String;MethodType;)CallSite` [18b58cd60]** `[slice 0x857,0x26]` — indy bootstrap; slice tokens `"odHandle;"` (tail of `Ljava/lang/invoke/MethodHandle;`), `"iUrOn"` (obfuscated name), `"Ljava/util"` (`Map` cache). Standard bootstrap plumbing `[decompiled machinery]`.
- **`aGQ()V` [18b56dbc0]** — decompiled body is a single two-way indirect jump on `param_2 == 0`; no blob decrypt, no JNI calls. Pure continuation/dispatch fragment (likely the exception-path tail of a neighboring handler's chain) `[decompiled stub, uncertain]`.

### Plan construction (records + geometry)

- **`aGn(Lsixtwo/ov;)Lsixtwo/fa$sL;` [18b4da7f0]** `[slice 0x109ac]` — given an aim rotation (`ov`), produce a firing plan `fa$sL(railPos, firePos, cartHitResult, shotPoint)`. Slice shows it can reference the record type, its accessors (`shotPoint`), and `ov.cGH()` (look direction). Step sequence (raycast along look vector → cart hit → derive rail/fire positions) `[inferred, uncertain]`.
- **`aGo(Lnet/minecraft/class_2338;Lnet/minecraft/class_243;Lnet/minecraft/class_243;)Lsixtwo/fa$sL;` [18b4e27b0]** `[slice 0x109ac]` — build a plan from `(BlockPos, Vec3d, Vec3d)`: rail position + two vectors (likely eye/shot points) `[inferred]`.
- **`aGp(Lnet/minecraft/class_2338;Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_243;)Lnet/minecraft/class_2338;` [18b4e4f20]** `[slice 0x109ac]` — compute a target `BlockPos` from a block position + three vectors. Slice places `HeightLimitView.getBottomY`/`getTopYInclusive` immediately before this method — the vertical scan bounds (world bottom..top) for rail search are in this neighborhood `[inferred]`.
- **`aGq(Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_243;)D` [18b4e7410]** `[slice 0x109ac]` — scalar score/geometry function over three vectors. The slice contains exactly one Vec3d double-returning MC call: `Vec3d.dotProduct(Vec3d) → D` (`method_1026`). Most plausible formula family: a dot-product based projection/angle score (e.g. `dot(normalize(b−a), dir)` or an un-normalized `dot` of two of the arguments). **Exact arithmetic not recovered** `[inferred, uncertain]`.
- **`aGv(Lnet/minecraft/class_2338;)Lsixtwo/oz;` [18b4fecc0] / `aGw(Lnet/minecraft/class_2338;)Lsixtwo/oz;` [18b500a90]** `[slice 0x109ac]` — two variants producing an `oz(blockPos, blockHitResult)` snapshot (block + block-hit). Slice carries the `(Lnet/minecraft/class_2338;)Lsixtwo/oz;` descriptor and, in `aGw`'s neighborhood, token `cGH` (`ov.cGH()`), suggesting one variant raycasts along the player look direction to that block and the other uses a fixed/planned direction `[inferred, uncertain]`.
- **`aGr(Lsixtwo/fa$sL;)Z` [18b4e7ba0]** `[slice 0x109ac]` — validate a plan (descriptor `(Lsixtwo/fa$sL;)Z` in slice). Plausibly checks the cart hit result / distance / world state `[inferred, uncertain]`.
- **`aGs(Lsixtwo/fa$sL;)Lsixtwo/fa$sK;` [18b4eda50]** `[slice 0x109ac]` — next-state function: `(fa$sL) → fa$sK`, i.e. the state-machine transition computed from the current plan. Slice carries `doR ()[Lsixtwo/fa$sK;` (enum `values()`), so the return is picked from the 8 enum constants `[inferred]`.

### Block / item / vector predicates

All `BlockPos → boolean` / `(BlockPos, BlockState) → boolean` handlers use fa's shared slice and are single-decision predicates of the cart contraption (rail detection, cart-at-block, ignition target, clearance, etc.). Which predicate is which is **not recovered**; only the token `Tlzw` marks the small group below `[slice, uncertain]`.

- **`aGB(Lnet/minecraft/class_2338;)Z` [18b50c620], `aGC(Lnet/minecraft/class_2338;)Z` [18b50cce0], `aGx(Lnet/minecraft/class_2338;)Z` [18b502860], `aGz(Lnet/minecraft/class_2338;)Z` [18b507470]** — each decrypts the 5-byte slice `[0xb1,5]` = `"Tlzw"`. In sibling payload classes, tiny 4–5-char tokens are passed to `iS.bwK(String)` as null-guard markers (cf. `ov.cGN()` calling `iS.bwK("OgWBT")`); these four handlers most likely share the same guard marker around a cached lookup, not a literal `[inferred, uncertain]`.
- **`aGA(Lnet/minecraft/class_2338;Lnet/minecraft/class_2680;)Z` [18b507a40], `aGy(Lnet/minecraft/class_2338;Lnet/minecraft/class_2680;)Z` [18b502e30]** — `(BlockPos, BlockState) → boolean` predicates (e.g. "is rail block here" / "is TNT block here"). Both also appear as the descriptor pair in fa's slice next to `aGS`/`aGT` tokens `[slice, uncertain]`.
- **`aGD(Lnet/minecraft/class_2338;)Z` [18b50d3a0], `aGt(Lnet/minecraft/class_2338;)Z` [18b4ee870], `aGu(Lnet/minecraft/class_2338;)Z` [18b4fb370]** — additional `BlockPos → boolean` predicates. `aGD`'s slice also carries `(Lnet/minecraft/class_243;)Z` (a `Vec3d → boolean` predicate descriptor — shared with `aGO`/`aGP`) `[slice, uncertain]`.
- **`aGO(Lnet/minecraft/class_243;)Z` [18b5635e0], `aGP(Lnet/minecraft/class_243;)Z` [18b568760]** — `Vec3d → boolean` predicates (e.g. point-in-range / point-reachable tests) `[slice, uncertain]`.
- **`aGE(Lnet/minecraft/class_1792;)Z` [18b51b970]** — `Item → boolean` (item identity test; slice contains `Items.TNT_MINECART` and `Items.FLINT_AND_STEEL`, so one of the tested items is the TNT minecart item, the other flint & steel) `[slice, inferred]`.
- **`aGI(Lnet/minecraft/class_1799;)Z` [18b5396b0], `aGL(Lnet/minecraft/class_1799;)Z` [18b54f0c0]** — `ItemStack → boolean` predicates; almost certainly the "held stack is TNT minecart" / "held stack is flint & steel" checks against the two Items constants above (order not recoverable) `[slice, inferred, uncertain]`.
- **`aGR(Lnet/minecraft/class_1297;)Z` [18b56e100]** — `Entity → boolean` predicate (candidate filter — plausibly "is TNT minecart entity") `[slice, uncertain]`.
- **`aGS(Lnet/minecraft/class_2338;Lnet/minecraft/class_2680;)Z` [18b56eaf0], `aGT(Lnet/minecraft/class_2338;Lnet/minecraft/class_2680;)Z` [18b56ecf0]** — `(BlockPos, BlockState) → boolean` predicates registered as natives but **absent from the Java stub** (`fa.java` declares only 48 of the 53 natives; `aGR`, `aGS`, `aGT` are extra DLL registrations) `[decompiled mismatch, uncertain]`.

### Hand / item selection

- **`aGG(Lnet/minecraft/class_1792;)Lnet/minecraft/class_1268;` [18b52be00]** — `Item → Hand`: which hand holds the given item (nullable when held nowhere). Descriptor `(Lnet/minecraft/class_1792;)Lnet/minecraft/class_1268;` verbatim in fa's slice `[slice, inferred]`.
- **`aGH()Lnet/minecraft/class_1268;` [18b531f50], `aGK()Lnet/minecraft/class_1268;` [18b5488f0]** — parameterless `→ Hand` getters, almost certainly "hand holding TNT minecart" and "hand holding flint & steel" built on `aGG` with the two Items constants `[slice, inferred, uncertain]`.
- **`aGJ()Z` [18b53e760], `aGF()Z` [18b521a50]** — parameterless boolean gates. Typical roles: "player is holding the required items" and "module enabled / prerequisites met" `[inferred, uncertain]`.

### Aim / world sampling

- **`aGM()Lnet/minecraft/class_243;` [18b555520]** — parameterless `→ Vec3d`; plausibly eye/anchor point of the local player (slice carries `shotPoint` accessor, so it may also return the plan's `shotPoint`) `[slice, uncertain]`.
- **`aGN(Lnet/minecraft/class_2338;)Lnet/minecraft/class_243;` [18b55db30]** — `BlockPos → Vec3d`. Decrypts the only non-shared slice `[0xa96b,0x1de]`, which **straddles neighboring classes' symbol regions** (it contains `sixtwo/dL` = module "No Entity Clip" fields `MvRUw`/`lXvtl`, `sixtwo/dN` = module "Slot Lock" fields `YAFsA`/`mOyJK`, `sixtwo/gz` keybind-manager method `bbK`, `sixtwo/hh` float holder `bcA`, plus `GameOptions.dropKey` `field_1869`). Because the window starts mid-descriptor (`…t/class_2350;)V`) and covers several classes, the MC tokens inside it **cannot all be attributed to fa**. Tokens present: `Vec3i.getX/getY/getZ` (`method_10263/10264/10260`), `Vec3d.<init>(DDD)V`, a descriptor ending in `class_2350` (`net.minecraft.util.math.Direction`), `ItemTags.PICKAXES` (`field_42614`, `TagKey`), `ItemStack.isIn(TagKey)` (`method_31573`), `BlockView.raycast(RaycastContext) → BlockHitResult` (`method_17742`), `RaycastContext$ShapeType.OUTLINE` (`field_17559`), `PlayerEntity.getBlockInteractionRange()` (`method_55754`), `MinecraftClient.getCameraEntity()` (`method_1560`), `Entity.raycast(double,float,boolean) → HitResult` (`method_5745`).
  - Attributable to fa with moderate confidence: `Vec3d.<init>(DDD)` and the `Vec3i.getX/getY/getZ` trio — consistent with `aGN(BlockPos)` building a position vector (block center / offset point) `[inferred]`.
  - Likely belonging to `dL` ("No Entity Clip") rather than fa: the `BlockView.raycast` + `OUTLINE` + `getCameraEntity` + `getBlockInteractionRange` + `Entity.raycast(DFZ)` cluster, and possibly `ItemTags.PICKAXES`/`isIn` and `dropKey` (which fits `dN` "Slot Lock") `[uncertain]`.
- **`aGf()V` [18b57b3a0], `aGg()V` [18b5a96c0], `aGh()V` [18b5afc10], `aGi()V` [18b5b4470], `aGj()V` [18b5bbb30], `aGk()V` [18b4c78c0], `aGl()V` [18b4ce740], `aGm()V` [18b4d3150]** — 8 parameterless `void` steps. Given the 8-constant state enum `fa$sK`, the natural reading is that these are the per-state actions of the machine (one or more per state: scan, aim, ignite, fire, reset, …). All decrypt fa's shared slice; all bodies are VM-internal. **No step's behavior is recovered** `[slice, inferred structure, uncertain behavior]`.
  - Note: `func_0x18b57b310` (payload PRNG, immediately preceding the `aGf` handler at 18b57b310) is runtime machinery, not module logic.
- **Event listeners:**
  - **`aGb(Lsixtwo/gM;)V` [18b4c76d0]** — `@hG` listener for the bare tick-ish event `gM` `[decompiled annotation, inferred role]`.
  - **`aGc(Lsixtwo/gA;)V` [18b4f34b0]** — `@hG` listener for the input event `gA` (MouseInput/KeyInput/action/mods/key). Given the only setting is the "Activation Key" keybind, this handler almost certainly toggles the module on the configured key press `[inferred]`.
  - **`aGd(Lsixtwo/gv;)V` [18b5153a0]** — `@hG` listener for the pre-rotation event `gv` (fired by aim module `qL` before rotations are applied) — the natural hook for this module to inject its own aim rotation toward the cart/shot point `[inferred]`.
  - **`aGe(Lsixtwo/gH$th;)V` [18b55e010]** — `@hG` listener for the player-tick event `gH$th` — per-tick state-machine advance `[inferred]`.

### Anti-trace noise

- The corpus contains exactly one `rdtsc` pair, at continuation block `[18b5a2dec]` (rva 0xb5a2dec), sandwiched between two stack-encoded `uStack…` UTF literals feeding `JNI->NewString` (a string-building fragment). It does not gate any logic — anti-trace noise. No other timing reads exist in the corpus.

## Settings → behavior mapping

| setting | wrapper | decrypted value | behavior link |
|---|---|---|---|
| "Activation Key" | `cD` (field `vPwrl`) | name char codes `{65,99,116,105,118,97,116,105,111,110,32,75,101,121}` ("Activation Key", len 14); default `.VO(-999)` | the module's only control: activation keybind, default unbound (-999). Read by the native `aGc(gA)` input listener `[inferred]`; key=164 in the registry is the module id (constructor `gf.aZL(164, false, gh.xwjCw)`), not a key `[decompiled]` |

There are no numeric/boolean settings in this class — all thresholds (scan range, ignite timing, aim tolerance) are hard-coded inside the native VM and unrecovered.

## Unrecovered / uncertain

The following are explicitly NOT recoverable from this corpus. Do not guess them in the clean-room rebuild; pick documented designer choices and record divergence in PARITY.md:

1. **All behavior-method bytecode bodies.** The 53 handlers are dispatcher stubs into a thread-code native VM; 612 continuation fragments (max 32 lines) could not be stitched into method bodies.
2. **The 8 state names of `fa$sK`** (`YbJTa, RWBsV, MAgEy, oBiuY, dzJyB, hECYg, tKIGa, wglWG` — ordinals only) and the transition table implemented by `aGs(fa$sL) → fa$sK`.
3. **Per-handler role assignment** among the predicate cluster (`aGB/aGC/aGD/aGt/aGu/aGx/aGy/aGz/aGA/aGS/aGT/aGO/aGP/aGR/aGE/aGI/aGL/aGF/aGJ`) and the void-step cluster (`aGf…aGm`) — descriptors and shared slice are known; semantics are not.
4. **Exact math of `aGq(Vec3d,Vec3d,Vec3d)D`** — only that `Vec3d.dotProduct` (`method_1026`) is in fa's slice; normalization, argument order and any scale factors unknown.
5. **Attribution of the `[0xa96b,0x1de]` slice** (aGN's blob): the `BlockView.raycast`/`OUTLINE`/`getCameraEntity`/`getBlockInteractionRange`/`Entity.raycast`/`ItemTags.PICKAXES`/`ItemStack.isIn`/`GameOptions.dropKey` tokens likely belong to neighboring classes `dL` ("No Entity Clip") and `dN` ("Slot Lock") whose symbols share the pool window; only `Vec3d.<init>(DDD)` and `Vec3i.getX/getY/getZ` are plausibly fa's.
6. **`Tlzw`** (5-byte slice used by aGB/aGC/aGx/aGz) — most likely an `iS.bwK` null-guard marker token, not a literal.
7. **Obfuscated tokens** `bDT`, `srUqw` (fa's slice) and `anr`, `lXvtl`, `MvRUw`, `OKemK`, `xmVgM`, `VTfqp`, `ans`, `aoo`, `mOyJK`, `YAFsA`, `bcA`, `bbK`, `iUrOn` (neighboring slices) — unresolved member names.
8. **Direction usage**: the aGN window contains a descriptor ending in `class_2350` (`Direction`); which fa method (if any) consumes a Direction is unknown.
9. **The `mG.cnP(FFF)` color values** constructed by `YO`, and whether `YO` writes the `gd` tick state (`gc.aZi`) or only reads it.
10. **Firing/ignition trigger conditions** (what makes the machine advance from scan → aim → ignite → fire), including any use of `fa$sL.cartHitResult` for timing.