# Strafe (sixtwo.eA) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_eA.c` **does not exist in this workspace**; the same stitched decompile is at `analysis/ghidra/handlers-full/sixtwo_eA.c` (608 lines): 6 JNI handler decompiles, no separate continuation fragments (all dispatch tails end in two-way indirect jumps through the j2cc jump tables `UNK_182072f48 / 18206ab40 / 18206f908 / 182071970 / 182071f30`, annotated below). All citations are image addresses (`0x18xxxxxxxxx`, runtime base `6ffff48xxxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/eA.java` (CFR — the class stub is fully native-blocked: 1 listener + 4 plumbing natives). Context classes read: `cC.java` (numeric setting), `cB.java` (setting base), `gg.java` (module base), `eB.java` (Flight), `ez.java` (No Fall), `eC.java` (Sprint), `gH.java`/`gH$th.java` (event marker).
- Structural spec: `analysis/specs/modules/eA.md`; registry row 65: `eA | sixtwo.eA | Strafe | Makes player strafe | key=35 | bind=-999` (`analysis/specs/registry.tsv`).
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` lines 10392–10397 (6 entries, `bsm avq`, desc `(IJ)I`).
- Symbol translation: `analysis/jars/yarn-1.21.11+build.6.tiny` (tiny v2). Pool blobs re-resolved from `analysis/ghidra/dumps/jna-decrypted-v2.dll` with `analysis/tools/resolve_pool_blob` (source file absent; loaded from `analysis/tools/__pycache__/resolve_pool_blob.cpython-312.pyc`). Pool base `0x301ee40`, pool-pointer variable `0x301ee50` (`plRam000000018301ee50` in the decompile).
- Phase/ordering verification for `gH$th`: `analysis/specs/handlers/er.md` (verified dispatch order: all `gH$th` listeners → `gv` → `qL` motion processing). Format + `BLOB_DECRYPTOR` precedent: `analysis/specs/handlers/fa.md`.

### Recoverability caveat (read first)

`eA` is a **single-behavior class**: one virtualized tick listener (`avm`) plus obfuscation plumbing. Every behavior byte lives inside the j2cc bytecode VM: `avm` decrypts the class slice, calls `JNI->ExceptionCheck`, and tail-dispatches through a jump table Ghidra could not stitch ("Jumptable … did not pass sanity check" at `18cccd44a`). No Java-level body is linearly recoverable. What IS recoverable: the class's complete symbol universe (its constant-pool-derived pool run, 16 tokens), the setting wiring from the Java stub, and the decrypted integer constants. All semantics below are tagged:

- `[decompiled]` — visible directly in a decompile.
- `[slice]` — token verified present in eA's own constant-pool pool run.
- `[inferred]` — inferred from descriptors + slice contents + verified framework contract; NOT from a recovered body.
- `[uncertain]` — cannot be attributed with confidence.

## Runtime model

- `eA extends gg` (module base `gg extends iS`). Constructor `[decompiled eA.java:15-34]`:
  - Key-mix seed: `long var1 = lClZL ^ 78748095781882L` (`lClZL` = payload-decryptor static seed, set by the `gb.aYR(...)` clinit chain) `[decompiled]`.
  - `super(gf.aZL(avq<"b">(1330, 1702182247099329984L ^ var1), false, gh.xgeEn))` — decrypted module id **35** (verified `full-dump.jsonl:10392`: `raw [1330,1702182247099329984] → value 35`), flag `false`, category `gh.xgeEn` — the movement category shared with `eB` Flight (id 44), `eC` Sprint (id 34), `ez` No Fall (id 36) `[decompiled + registry]`.
  - Exactly one setting (see Settings section): `uYjwj = new cC(this, mr.clS({83,112,101,101,100})).Vy(0.05).Vw(0.25).Vx(2.0).VA(0.25)` — name `"Speed"` `[decompiled, values verified full-dump.jsonl:10393-10397]`.
- No keybind setting is constructed (registry bind `-999` = unbound; toggling is handled by the `gg` base machinery) `[decompiled]`.
- No `YO()` override — base `gg.YO()` (`hF.bdM(this)`) applies; the module's entire behavior is the `@hG avm(gH$th)` listener, default (NORMAL) priority (no `mw` argument) `[decompiled]`.
- Tick phase: `gH$th` is the **pre-motion client-tick event** — all `gH$th` listeners run each client tick *before* `qL` applies motion/rotation (verified in `er.md` via `qL.dbN` dispatch order). So `avm` edits the player's movement state every tick before the vanilla motion step consumes it `[inherited from er.md, inferred]`.
- **Recoverable MC API surface** (complete; the 16-token run at pool `0xdd7a–0xde1a`):
  - `field_6250` → `LivingEntity.forwardSpeed` (`F`) and `field_6212` → `LivingEntity.sidewaysSpeed` (`F`) — the per-tick movement-input magnitudes the vanilla travel pipeline consumes `[slice, tiny-mapped]`.
  - `method_5724` + descriptor `(FLnet/minecraft/class_243;)V` → `Entity.updateVelocity(float speed, Vec3d movementInput)` — the vanilla method that converts an input vector + speed scalar into added velocity (`movementInputToVelocity`), i.e. the friction-aware movement-injection entry point `[slice, tiny-mapped]`.
  - `method_10216` / `method_10214` / `method_10215` → `Vec3d.getX()` / `getY()` / `getZ()` — component reads of one or more `Vec3d`s (velocity and/or input vectors) `[slice, tiny-mapped]`.
  - `sixtwo/eC` — a reference to the **Sprint module class** (`eC`, id 34, same category). eA's VM code touches the Sprint module (most plausibly reading or forcing its sprint state while strafing) `[slice, inferred, uncertain]`.
  - Self symbols: `sixtwo/eA`, `lClZL` (seed), `avn`, `avo`, `oOQKe` (`Integer[]`), `GMvGu` (`long[]`), `ldHfb` (`Map`) — obfuscation state, and `uYjwj` (the Speed setting field) `[slice, decompiled]`.
- **What eA does NOT reference** (negative evidence, same slice): no packet classes (`PlayerMoveC2SPacket` tokens belong to eB's run, see below), no network handler, no rotation/aim class (`ov`), no jump/keystate tokens, no `LocalPlayerAccessor`, no world/block queries. Strafe is a pure **client-side movement-input manipulation**: it rewrites `forwardSpeed`/`sidewaysSpeed` (and/or calls `updateVelocity` with a rebuilt input vector scaled by Speed) each pre-motion tick; the vanilla pipeline then applies friction and collision. It does not spoof server-side movement packets itself `[slice, inferred]`.
- Interplay with vanilla friction: `updateVelocity(speed, input)` is the same method vanilla `travel()` uses with the friction-derived speed multiplier; a strafe module injecting extra `updateVelocity` calls (or enlarged input magnitudes) therefore gets automatically friction-scaled, producing the characteristic air-strafe control. Exact placement of the Speed multiplier inside this call sequence is virtualized `[inferred, uncertain]`.

### Pool slices (per-handler symbol universes)

| POOL[off,len] (pool base `0x301ee40`) | handlers | content |
|---|---|---|
| `[0x226,0xd]` | `_5e7cb2aeed2a4e96452d61e493ee8585` (clinit) only | `"ang/String;"`, `"<"` — tails of `java/lang/String;` / `<init>` (the `Loader.doInit` path). Shared clinit slice. |
| `[0x857,0x26]` | `avq` only | `"odHandle;"` (tail of `Ljava/lang/invoke/MethodHandle;`), `"iUrOn"` (obfuscated name), `"Ljava/util/Map;"`, `"java/l…"` (cut) — bootstrap plumbing + `Map` indy cache. |
| `[0xdd5a,0x26f]` | `avm` and `avo` (both tails) | eA's class symbol slice; straddles neighbors (see below). |

eA's window starts mid-token at `0xdd5a` (inside `mixin/accessors/ServerboundMovePlayerPacketAccessor`, pool `0xdd34–0xdd67`) and ends mid-token at `0xdfc9` (inside `()Lnet/minecraft/class_238;`). It therefore over-covers two neighbors' constant-pool runs; attribution by Java-stub matching:

- **ez (No Fall) run** `0xdd00–0xdd79`, only its tail borders eA's window: `sixtwo/ez`, `LWMHR`, `avl`, `mixin/accessors/ServerboundMovePlayerPacketAccessor`, `setOnGround`, `EAkuj` — packet `onGround` spoofing machinery is ez's, not eA's `[decompiled stub match]`.
- **eA run** `0xdd7a–0xde1a` (the 16 tokens above) `[decompiled stub match]`.
- **eB (Flight) run** `0xde1b–…`: `XiPDK`, `Kqwum`, `avw`, `avT`, `xVfhc`, `field_7478` (`PlayerAbilities.allowFlying`), `method_1033` (`Vec3d.length`), `LSmOj`, `raYeS`, `EKwun`, `VCxLS`, `dHwGI`, `fjDMc`, `MoNPF`, `avv`, `avt`, `(Lnet/minecraft/class_2828;D)V`, `avy`, `mixin/accessors/LocalPlayerAccessor`, `setY`, `method_36172` (`PlayerMoveC2SPacket.changesLook`), `class_2828$class_2830` (`…$Full`) + ctor `(DDDFFZZ)V`, `setPositionReminder`, `method_12271/12270/12273` (`getYaw/getPitch/isOnGround`), `field_5976` (`Entity.horizontalCollision`), `class_2828$class_2829` (`…$PositionAndOnGround`) + ctor `(DDDZZ)V`, `method_7248` (`PlayerAbilities.setFlySpeed`), `method_73183` (`getEntityWorld`) — all matched by eB.java's stub (`avt(PlayerMoveC2SPacket,double)`, `avv(double,double)`, `avw()`, `avy(Entity)`, `avT(MatchException)`). eB's own handlers decrypt `[0xcb21,0x228]`; these tokens are in eA's window only because the decrypt window is padded ~`0x250` past the class-name token `[decompiled stub match]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_5e7cb2aeed2a4e96452d61e493ee8585()V` | `[18ccea460]` | native clinit stub |
| `avm(Lsixtwo/gH$th;)V` | `[18cccd380]` | the entire module behavior (virtualized) |
| `avn(MatchException)MatchException` | `[18ccdaef0]` | identity rethrow |
| `avo(IJ)I` | `[18ccdaf80]` | int-constant decrypt kernel (BSM) |
| `avp(Lookup;MutableCallSite;String;[Object;)I` | `[18cce6740]` | MutableCallSite re-bootstrap stub |
| `avq(Lookup;String;MethodType;)CallSite` | `[18cce7750]` | indy bootstrap |

- **`_5e7cb2aeed2a4e96452d61e493ee8585()V` [18ccea460]** `[slice 0x226,0xd]` — decrypts the shared clinit slice (`"ang/String;"`, `"<"`), calls `JNI->ExceptionCheck` (vtable offset `0x720`, `cVar1 = (*env)->ExceptionCheck(env)`), and two-way dispatches at the jump table `18ccea548` (`UNK_182072f48[(cVar1=='\0')*8]`; index 0 = clean path, 1 = exception path). No module behavior `[decompiled]`.
- **`avm(Lsixtwo/gH$th;)V` [18cccd380]** `[slice 0xdd5a,0x26f]` — the `@hG` pre-motion tick listener. Visible prologue: `BLOB_DECRYPTOR(env, pool+0xdd5a, 0x26f)` then `JNI->ExceptionCheck` `[18cccd380]`, then tail dispatch through `UNK_18206ab40` at `18cccd44a`. The virtualized body is the whole Strafe behavior; from its symbol run it can only be: read `Vec3d` components (`getX/getY/getZ`), write `LivingEntity.forwardSpeed` / `sidewaysSpeed`, call `Entity.updateVelocity(F, Vec3d)`, read the Speed setting via `uYjwj`, and touch `sixtwo.eC` (Sprint) `[slice, inferred]`. The arithmetic — which vectors, which order, where the Speed multiplier enters, any camera/velocity alignment math — is **inside the VM and not recovered** `[uncertain]`.
- **`avn(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18ccdaef0]** — decompiled body is `return param_3;` — identity rethrow for the Vineflower/CFR `MatchException` pattern. No behavior `[decompiled]`.
- **`avo(IJ)I` [18ccdaf80]** — the invokedynamic **int-constant decrypt kernel** (BSM `avq`'s `"b"` target; matches `full-dump.jsonl` desc `(IJ)I`). ~500 lines of pure register key-mixing over globals `uRam183339xxx` with ~34 calls to the payload obfuscation helper `func_0x00018cce66b0` (key-mix/PRNG helper, no JNI; image `18cce66b0`), constants copied verbatim, e.g. `0xbda46b7b181278ae`, `0x68388960500e5a9d`, `0xfdbceb7bdc3e5b9f`, `0xe00a31e00c90cba6`, `0x84222325`, `0x84225cda`, `0x842262a8`, `0xdb0f5d70937519b7`, `0x9025a22f5466b0d0`, `0x4ed35a1d50c8c365`, `0x7fff`, `0x418d`, `0x80cb2f60`, `0xa1cd0f1c`, `0xf536447b`, `0xa7d4152c`, `0x7d1efd41`, popcount/`clz`-style bit tricks, and `rotate-by-0x2d` mixing (`<<0x1d | >>0x23`). The real arguments enter only in the tail half: `param_4` (key) at `param_4 ^ 0x84222325` and `(uint)param_4 & 0x7fff` (`[18ccdaf80]`, decompile lines 304–313), `param_3` (pool offset) in `(param_3 - uRam18333395a8)` and `uVar5 ^ param_3` / `(ulonglong)(uVar2 ^ param_3)` (lines 325–333). Ends by decrypting the class slice `POOL[0xdd5a,0x26f]` + `ExceptionCheck` + dispatch `UNK_18206f908` at `18ccdd41e`. **Anti-analysis machinery — not module behavior.** Observable contract (from `full-dump.jsonl:10392-10397`): `avo(int off, long key) → int`; the 6 verified eA constants are listed in the Settings section `[decompiled machinery]`.
- **`avp(Lookup;MutableCallSite;String;[Object;)I` [18cce6740]** — empty decompile; a single two-way indirect jump on `in_stack_00000030 == 0` through `UNK_182071970` at `18cce678b`. Re-bootstrap of a `MutableCallSite` (indy cache invalidation — the stable-target fast path). No blob decrypt, no JNI calls. No module behavior `[decompiled stub]`.
- **`avq(Lookup;String;MethodType;)CallSite` [18cce7750]** `[slice 0x857,0x26]` — indy bootstrap for eA's constant/pointer decrypt sites (`avq<"b">(off,key)` in the stub). Slice tokens: `"odHandle;"` (tail of `Ljava/lang/invoke/MethodHandle;`), `"iUrOn"`, `"Ljava/util/Map;"`, `"java/l…"` — standard bootstrap plumbing with a `Map`-keyed `MutableCallSite` cache (same shape as `kt.bRC`/`bRF` in sibling code). Prologue `BLOB_DECRYPTOR(env, pool+0x857, 0x26)` + `ExceptionCheck` + dispatch `UNK_182071f30` at `18cce77d9` `[decompiled machinery]`.

## Settings → behavior mapping

- **`uYjwj` — `"Speed"` (`cC` numeric)** `[decompiled, decrypted]`:
  - Name: 5 chars decrypted by `avo` at pool offsets 11690, 1763, 21921, 24792, 5475 → `83,112,101,101,100` = `'S','p','e','e','d'` (`full-dump.jsonl:10393-10397`) `[decompiled]`.
  - `.Vy(0.05)` → step `0.05` (`cC.Vy` sets `HqniU`, clamped ≥ 0) `[decompiled cC.java:180-186]`.
  - `.Vw(0.25)` → min `0.25` (`bYxsv`) `[decompiled cC.java:188-192]`.
  - `.Vx(2.0)` → max `2.0` (`WhuQX`) `[decompiled cC.java:190-194]`.
  - `.VA(0.25)` → default/current value `0.25` (clamped into `[0.25, 2.0]`, rounded to step `0.05` — remains `0.25`) `[decompiled cC.java:148-178]`.
  - No unit suffix (no `Vz` call) `[decompiled]`.
  - Value getters available to the VM: `cC.VI()` double / `VB()` float / `VC()` int / `VD()` long `[decompiled]`.
- Behavior coupling: the setting object `uYjwj` is the only module state in eA's slice run besides obfuscation statics, so the Speed multiplier is the single tuning knob of the strafe motion. `0.25`–`2.0` spans 25%–200% of baseline movement speed; how the value scales `forwardSpeed`/`sidewaysSpeed`/`updateVelocity`'s speed argument is virtualized `[slice, inferred, uncertain]`.
- Registry: module id 35, bind -999 (unbound), description "Makes player strafe" `[registry]`.

## Unrecovered / uncertain

1. **The entire arithmetic of `avm`** (jump-table dispatch at `18cccd44a` into `UNK_18206ab40`; continuation chains not statically stitchable). Never guessed. Unknowns include: which `Vec3d` is read (`getVelocity` vs input vs interpolation), the mapping from the Speed value onto `forwardSpeed`/`sidewaysSpeed`/`updateVelocity`'s `F` argument, whether camera yaw is used to rebuild the input direction, and any ground/air (friction-state) branching.
2. **How the Speed value is read inside the VM** — eA's run contains the field token `uYjwj` but no `cC` getter tokens (`VI`/`VB`/…), so the read mechanism (getter via an out-of-window resolved site vs. other) is unresolved `[uncertain]`.
3. **The `sixtwo/eC` (Sprint) interaction** — presence of the class reference in eA's run is verified; whether eA reads Sprint's enabled state, forces sprinting, or merely shares state is unknown `[slice, uncertain]`.
4. **`BLOB_DECRYPTOR` = `FUN_190dd72e0` internals** — no decompile available (`analysis/ghidra/funcs/func_dd72e0_FUN_180dd72e0.c` contains only `FAIL`); its contract (`env, pool_ptr, len` → decrypted slice for the VM) is taken from the sibling-spec precedent `[machinery, uncertain]`.
5. **Jump-table continuation contents** for all five dispatch tables (`182072f48`, `18206ab40`, `18206f908`, `182071970`, `182071f30`) — only the two-way `ExceptionCheck` selection semantics (`index = exception-pending ? 1 : 0`) are established; the target fragments were not in this corpus `[machinery]`.
6. **Constant-kernel exact math (`avo`)** — the 500-line mixing chain is intentionally unrecoverable statically (j2cc constant virtualization); only the I/O contract `avo(int off, long key) → int` and the 6 decrypted values are relied upon `[machinery]`.
7. The `false` flag in `gf.aZL(35, false, gh.xgeEn)` (same in all sibling modules) — meaning unrecovered `[uncertain]`.