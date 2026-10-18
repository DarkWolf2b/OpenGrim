# Speed (sixtwo.er) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_er.c` — 15 native handlers + 163 continuation blocks, 0 unresolved table targets. All 7 behavior handlers (`aub`/`auc`/`aud`/`aue`/`auf`/`aug`/`auj`) decompile to the same protection pattern: one `BLOB_DECRYPTOR` call over the shared class pool `POOL[0xd467,0x24c]` (588 bytes) + `JNI->ExceptionCheck` + an indirect jump into a jumptable Ghidra could not sanity-check (`"Treating indirect jump as call"`). The reachable continuation blocks are a mix of JNI dispatch fragments, array-index bounds guards, and multi-hundred-line constant-blob arithmetic from the VM interpreter; **no motion math is directly decompilable**. Behavior below is reconstructed from the pool symbol table, the event classes, and the verified payload helpers those symbols resolve to — every such step is tagged `[inferred]`.
- Structural: `analysis/specs/modules/er.md`, `analysis/decompiled/payload-named/sixtwo/er.java` (CFR), `analysis/decompiled/payload-decrypted/sixtwo/er.java` (literals folded — all setting labels recovered verbatim as char arrays).
- Identity: `super(gf.aZL(auo<"i">(13788,…), false, gh.xgeEn))`; pool entry `13788 → 133` confirms module id **133**, category `gh.xgeEn`, registry "Increases your speed", key 133, bind −999 `[registry]`.
- Shared pool `POOL[0xd467,0x24c]` (resolved with `resolve_pool_blob.py 0xd467 588`) is the string table of the obfuscation group `{er (Speed), eq (Null Movement), es (No Push), eu (Trident Boost), hd (BlockPos event), hq (Entity-pair event), op (os movement helper)}`; the MC-intermediary names inside it are used by *at least one* member of that group — attribution to `er` specifically is [inferred] but strongly matched by er's settings (see Runtime model).
- Yarn mapping (`jars/yarn-1.21.11+build.6.tiny`, verified per symbol):
  - `method_18112 ()Ljava/lang/Iterable;` → `getEntities`
  - `method_5805 ()Z` (class_1309) → `Entity.isAlive`
  - `method_7325 ()Z` → `Entity.isSpectator`
  - `method_1020 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;` → `Vec3d.subtract(Vec3d)`
  - `method_1029 ()Lnet/minecraft/class_243;` → `Vec3d.normalize()`
  - `method_9499 ()F` (class_2248) → `Block.getSlipperiness()`
  - `method_18799 (Lnet/minecraft/class_243;)V` → `Entity.setVelocity(Vec3d)`
  - `field_6235 I` → `Entity.hurtTime`
- Payload helpers (verified bodies, not guesses):
  - `jg.bBN(LivingEntity, double)Z` (`jg.java:1391`): `rD.dlmvG.player.getBoundingBox().expand(d2, 0.0, d2).intersects(livingEntity.getBoundingBox())` — horizontal-distance box-overlap test. Pool descriptor `(Lnet/minecraft/class_1309;D)Z` matches.
  - `iX.bxH(Lsixtwo/mF;)Z` (`iX.java:398`): `(mF.cnH() ^ mF.cnI()) || (mF.cnJ() ^ mF.cnK())` — "any directional movement input held".
  - `iX.bxG()Lsixtwo/mF;` (`iX.java:242`): current movement-flag struct.
  - `gw.bbw()Lsixtwo/mF;` — reads the movement event's flag struct (pool: `bbw | ()Lsixtwo/mF;`).
- Hash-named natives `aue/auf/aug` and the bootstrap family `auh–aun` are payload runtime (per-class pool/int/String decryptors, invokedynamic bootstraps, MatchException rethrow); they are listed per-handler below but are not module logic.
- Runtime helpers used only as opaque calls: `FUN_190de3220`, `FUN_190ddfc90`, `FUN_190dd72e0` (blob decryptor), `FUN_190ddce00`, `FUN_190dd9df0`, `FUN_18419fe70`, `func_0x000180001044` (VM dispatch).

## Runtime model

### Event wiring

`er` registers three Java-visible listeners (all bare `@hG`, priority default NORMAL — no explicit `mw` priority; note pool symbol `hrPmv` is a `mw` enum constant referenced from group VM code `[structure mw.java:16]`):

| handler | event | what the event is (verified) |
|---|---|---|
| `auc(gH$th)` `[18ced1dc0]` | `gH$th` (marker subclass of `gH`, no fields) | pre-motion client-tick event. `qL.dbN` is its CRITICAL-priority listener: it first lets all other `gH$th` listeners run, then builds and dispatches `gv` (`qL.java:64-66`). |
| `aub(gv)` `[18cec9750]` | `gv extends hH`, empty | dispatched by `qL.dbN` *inside* the `gH$th` phase, immediately before `qL.dbK()` (the motion/rotation processing step). So per pre-motion tick the order is: all `gH$th` listeners (incl. `er.auc`) → `gv` listeners (incl. `er.aub`) → `qL` motion processing. |
| `aud(gw)` `[18cf1c800]` | `gw extends hH`, fields `mF KefNs; boolean KnRQq; boolean mQKQb` (all mutable via `bbz(mF)/bbA(boolean)/bbB(boolean)`, readable via `bbw()/bbx()/bby()`) | movement-input event carrying the 4-direction movement-flag struct `mF` plus two booleans. `mF` is built by the input manager `iX` from `options.forwardKey, backKey, rightKey, leftKey` in that order (`iX.java:133-136`), i.e. `cnH/cnI/cnJ/cnK` = forward/back/right/left movement-key state. Constructed only from native (j2cc mixin) code; only `er` and `qN` consume it in the Java tree. The two event booleans and their default values are **not recoverable** (see Unrecovered). |

Per-tick, `er.aud(gw)` is the only handler with write access to live movement input; `auc`/`aub` run earlier in the tick and operate on player state directly (native) — the pool's `setVelocity(Vec3d)` call is how modified motion is committed `[inferred]`.

### Speed modes / behavior branches (all [inferred] — derived from settings + pool surface)

The module has no classic "Mode" dropdown; modes are toggle groups:

1. **Collision mode** (`rJcqT`, group `Mode`/`zVsNl`): when on, exposes `Distance` (horizontal box expansion, 0.05–2.0, default 0.3) and three per-motion-state boost factors `On Ground` / `On Jump` / `On Fall` (each 0.5–3.0, default 1.1). The `jg.bBN` box test (`expand(Distance, 0.0, Distance)` vs entity box) is the collision probe; `Block.getSlipperiness()` is available in the same pool for friction compensation of ground motion; `On Ground/On Jump/On Fall` select the boost factor by the player's current motion state. `[inferred]`
2. **Collision Target mode** (`hqvXq`): when on, exposes `Power` (0.01–0.1, default 0.06 — per-tick acceleration), `Boost Range` (0.0–2.0, default 1.0 blocks) and `Predict` (0–10, default 5 ticks). The pool's targeting surface matches: `world.getEntities()` iteration filtered by `isAlive()` and `!isSpectator()`, `Vec3d.subtract(Vec3d).normalize()` to build the direction toward the target, `Entity.hurtTime` as a combat-state gate, and `Entity.setVelocity(Vec3d)` to commit the boosted motion; `jg.bBN(entity, Boost Range)` is the natural range test. `[inferred]`
3. **Matrix mode** (`VEzGB`): standalone toggle inside `Mode`, no dependent settings — an anti-cheat-specific movement profile (name from registry-verified decrypted label). Behavior not recoverable.
4. **Yaw Offset** (`HJQND`, boolean, default `false`) master switch; when on, shows the `Yaw Offset Mode` group (`QVAYj`, `SO(1)`) containing three toggles `Ground` (`ylthu`), `Air` (`CUcNd`), `Constant` (`aqeay`) — i.e. yaw offset is applied per-motion-state (on ground / airborne / always). `er` holds a `static ou UGcHq`; `ou` wraps an `os` rotation-provider and is the object type consumed by the rotation manager `qL` (`dbH(ov, ou, mw, gg)`, `dbI(Vec3d, ou, mw, gg)`, `dbG(ov, LivingEntity, ou, mw, gg)`, `dbJ(ot, mw, gg)`) — so the yaw offset is delivered to the client rotation pipeline through an `ou` context registered from native code. `[inferred]`

### Jump boost / friction interplay

- `On Jump` / `On Fall` factors are separate from `On Ground`, i.e. the boost multiplier switches discretely with motion state rather than persisting `[inferred]`.
- `Block.getSlipperiness()` (block under player) in the pool is the standard friction term used by vanilla ground deceleration (`velocity × slipperiness × 0.91`); a Speed module reading it is compensating for or scaling friction so the `On Ground` factor is applied against the real per-block deceleration `[inferred]`.
- `Entity.hurtTime` in the pool — the only combat-state field referenced by the group; most plausibly suppresses speed modification while the player (or the target, in Collision Target mode) is in hurt frames `[inferred, not verified]`.

### Anti-trace noise

`rdtsc` appears only inside string-building continuation blocks `[0xcef4d69]` (5×, interleaved with UTF-16 stack writes of `"DES/CBC/NoPadding"`) and `[0xcefdfb3]` (2×, `"two/er"` class-name string) — no timing result feeds a branch; treat as noise per the standing rule.

## Per-handler semantics

All `[18ced1dc0]`-style addresses are image addresses (handler header form: `runtime 6ffff…`). Every behavior handler: `BLOB_DECRYPTOR(env, pool_base+0xd467, 0x24c)` → `JNI->ExceptionCheck` → unchecked indirect tail-jump (`&UNK_<group> + (cond)*8`) into the VM interpreter. The pool decrypt is idempotent across handlers (same offsets every time).

- **`_9ef051d9baa5318468933a355ecc175b()`** `[18ceffb60]` — class static-init trampoline. Decrypts a 13-byte blob `POOL[0x226,0xd]` (fragment `ang/String; | <`), ExceptionCheck, tail-jump `[18ceffc48]`. Payload runtime, no module logic.
- **`aub(gv)`** `[18cec9750]` — `gv` (post-`gH$th`, pre-motion) listener. Visible ops: pool decrypt + ExceptionCheck `[18cec981a]`. Continuations reachable: `FUN_18cec981d` (payload runtime call + vtable tail), plain-return `FUN_18cece34e`/`FUN_18ced5c9a`/`FUN_18cef3657`, `IsInstanceOf` type-checks `[18cece9a7, 18cef0828, 18cef570b]`, `ExceptionCheck` guard splits, `GetArrayLength` bounds guards `[18cefbee2 (len<1), 18cefb859, 18cefc1ad]`, `CallVoidMethodA` + ExceptionCheck `[18cefcd21]` — a single void Java method invoked from the VM body (the motion-commit call site candidate, e.g. `setVelocity`) `[inferred]`, `AllocObject` `[18cefcd64, 18cefcedc]` (fresh `Vec3d`/event allocation candidate), `CallStaticObjectMethodA` `[18ceff364]`, `CallNonvirtualVoidMethodA` `[18cf04ab6]` (super-method call), `ThrowNew` `[18cef4698, 18ceffdd3]` and `Throw` paths for VM-internal errors. Real math virtualized.
- **`auc(gH$th)`** `[18ced1dc0]` — pre-motion tick listener. Same decrypt; tail `[18ced1e8f]`. Notable continuations: `ExceptionOccurred` + blob `[18ced148f, 18ced78b3]` (catch-path re-decrypt of `POOL[0xb15,0x2c]`-style pages), `ExceptionClear` catch re-entry `[18cef7217/18cef8121]`, `Throw` `[18ced1c33]`. No behavior recoverable beyond the phase ordering established above.
- **`aud(gw)`** `[18cf1c800]` — movement-input listener; tail `[18cf1c8c4]`. Continuations include the `DES/CBC/NoPadding` string builder `[0xcef4d69]` (shared with `aui`, i.e. the same crypto page serves the handler group; the string is the cipher transformation of the payload string decryptor, not a module message) and the `"two/er"` self-class-name builder `[0xcefdfb3]` (used for `Class.forName`-style lookups inside the VM). The event mutation calls (`bbz`, `bbA`, `bbB`) are referenced by pool symbol `bbA` and are the intended write surface of this handler `[inferred]`.
- **`aue()`** `[18cf217d0]`, **`auf()`** `[18cf26fd0]`, **`aug()`** `[18cf35c40]` — private native subroutines invoked from VM code (their names appear inside the group pool). Same decrypt + tail pattern (`[18cf21891, 18cf2709a, 18cf35d0a]`). Semantics not recoverable.
- **`auh(MatchException)MatchException`** `[18cf3d5e0]` — identity (`return param_3`); synthetic exception rethrow trampoline, no behavior.
- **`aui(byte[])String`** `[18cf3d670]` — payload string decryptor. Body is a null-check split into a jumptable `[18cf3d710]`; the DES machinery lives in continuations: `NewStringUTF`-style `NewString` of the 17-char `"DES/CBC/NoPadding"` built on stack `[0xcef4d69]`, `Cipher` blob pages `POOL[0xb15,0x2c]` and `POOL[0xb4a,0x2e]` decrypted on the ExceptionClear catch path `[18cef7217, 18cef8121, 18cef4d69 tail]`. Payload runtime.
- **`auj(int,long)String`** `[18cf65fc0]` — pool-int decryptor variant that also rebuilds the 588-byte group pool via `BLOB_DECRYPTOR` before ExceptionCheck `[18cf67d9c]`. Body is ~400 lines of chained constant arithmetic over `uRam_18334xxxx` state words (rotation/multiply/xor mixing, popcount, lzcnt patterns) — the key-schedule mixing for the decryptor family, not module logic. Continuations include array-index guards (`GetArrayLength`, `len<1`, `len<2` `[18cf6c723, 18cf6c9c6]`), `SetObjectArrayElement` `[18cf6c285]`, `CallStaticObjectMethodA` `[18cf6cd10]`, `ExceptionCheck` splits `[18cf67d9f, 18cf67dfe, 18cf682c7, 18cf68686, 18cf68aea, 18cf69539, 18cf69599, 18cf6c237, 18cf6c6cf, 18cf6cfa5, 18cf6d187]`.
- **`auk(Lookup, MutableCallSite, String, Object[])Object`** `[18cf6c690]` — invokedynamic bootstrap, single tail-jump `[18cf6c6cc]` on a stack flag; everything else is in `aun`-shared continuation blocks.
- **`aul(Lookup, String, MethodType)CallSite`** `[18ceeebd0]` — string bootstrap ("d" tag; used for `.Vz(" blocks")`-style suffix decryption in the ctor). Decrypts 0x26-byte blob `POOL[0x857,0x26]` (`…odHandle; | iUrOn | Ljava/util/Map; | java/l…`), ExceptionCheck `[18ceeec4d]`. Payload runtime.
- **`aum(int,long)int`** `[18cef1690]` — the `(I)J`→`I` pool-int decryptor (the `auo<"i">` engine). ~350 lines of constant mixing, no JNI except the shared pool decrypt + ExceptionCheck `[18cef34b3]`. Continuations: `ReleasePrimitiveArrayCritical` + mixing + `GetArrayLength < 8` guard `[0xcf1a16a]`, `GetPrimitiveArrayCritical` single-byte element read + release `[0xcf4ebb5 tail]` (reads `int` array element as char), `GetArrayLength` sign-branched loop setup `[18cf3d768, 18cf47850 (bound preloaded 0xff)]`, VM dispatch trampolines `[18cf1c9b7, 18cf45cf8 (ends in func_0x000180001044), 18cf48b36, 18cf4ebb5]`. Payload runtime; anti-trace constants only.
- **`aun(Lookup, MutableCallSite, String, Object[])int`** `[18cefbe40]` — int-call-site bootstrap; single tail-jump `[18cefbe8b]`, shares `aum` continuation blocks.
- **`auo(Lookup, String, MethodType)CallSite`** `[18cefce50]` — int bootstrap ("i" tag); same 0x26-byte blob decrypt as `aul`, tail `[18cefced9]`.

Fields mutated by native code (from class layout + pool): instance `float tmlzg` (only non-final instance field; likely a smoothed/accumulated speed value `[inferred]`), `static ou UGcHq` (aim/rotation context handed to `qL`), `static long JyNdk` (decryptor state), `static String[] qjOuA/GPmbA`, `static Map rxcxT/fmmgC`, `static long[] uyklF`, `static Integer[] WEdTE` (obfuscation caches — pool symbols `qjOuA, GPmbA, rxcxT, uyklF, WEdTE, fmmgC` confirm they are touched from VM code).

## Settings → behavior mapping

All labels/ranges verified verbatim from `payload-decrypted/sixtwo/er.java` (char arrays) and `full-dump.jsonl`; builder semantics verified from `cC.java` (`Vy`=step→`HqniU`, `Vw`=min→`bYxsv`, `Vx`=max→`WhuQX`, `VA`=value→`LYVpX` clamped, `Vz`=suffix→`VnJkN`), `cJ.java` (`WE`=boolean, `WF`=getter), `cu.java` (`SZ`=toggle state `IopEl`), `cB.java` (`Vf(Supplier<Boolean>)` = visibility/enabled supplier).

| field | label | type | exact builder chain | gates |
|---|---|---|---|---|
| `zVsNl` | **Mode** | group `ct` | `new ct(this, clS([77,111,100,101]))` | — |
| `rJcqT` | **Collision** | toggle `cu` under `Mode` | `new cu(zVsNl, clS([67,111,108,108,105,115,105,111,110]))` | parent of 1–4 below |
| `oxsCR` | **Distance** | double | `.Vy(0.05).Vw(0.05).Vx(2.0).VA(0.3).Vz(" blocks")` | visible while `Collision.SZ()` |
| `LjlKg` | **On Ground** | double | `.Vy(0.05).Vw(0.5).Vx(3.0).VA(1.1)` | visible while `Collision.SZ()` |
| `SdfDA` | **On Jump** | double | `.Vy(0.05).Vw(0.5).Vx(3.0).VA(1.1)` | visible while `Collision.SZ()` |
| `wCnjW` | **On Fall** | double | `.Vy(0.05).Vw(0.5).Vx(3.0).VA(1.1)` | visible while `Collision.SZ()` |
| `hqvXq` | **Collision Target** | toggle `cu` under `Mode` | `new cu(zVsNl, clS([67,111,108,108,105,115,105,111,110,32,84,97,114,103,101,116]))` | parent of 5–7 below |
| `ZdKpi` | **Power** | double | `.Vy(0.01).Vw(0.01).Vx(0.1).VA(0.06)` | visible while `CollisionTarget.SZ()` |
| `qMlRb` | **Boost Range** | double | `.Vy(0.1).Vw(0.0).Vx(2.0).VA(1.0).Vz(" blocks")` | visible while `CollisionTarget.SZ()` |
| `eCLmu` | **Predict** | double | `.Vy(1.0).Vw(0.0).Vx(10.0).VA(5.0).Vz(" ticks")` | visible while `CollisionTarget.SZ()` |
| `VEzGB` | **Matrix** | toggle `cu` under `Mode` | `new cu(zVsNl, clS([77,97,116,114,105,120]))` | — |
| `HJQND` | **Yaw Offset** | boolean `cJ` | `new cJ(this, clS([89,97,119,32,79,102,102,115,101,116])).WE(false)` | gates `QVAYj` via `QVAYj.Vf(this.HJQND::WF)` |
| `QVAYj` | **Yaw Offset Mode** | group `ct` | `new ct(this, clS([89,97,119,32,79,102,102,115,101,116,32,77,111,100,101])).SO(1)` | visible while `Yaw Offset.WF()` |
| `ylthu` | **Ground** | toggle `cu` under `Yaw Offset Mode` | `new cu(QVAYj, clS([71,114,111,117,110,100]))` | — |
| `CUcNd` | **Air** | toggle `cu` under `Yaw Offset Mode` | `new cu(QVAYj, clS([65,105,114]))` | — |
| `aqeay` | **Constant** | toggle `cu` under `Yaw Offset Mode` | `new cu(QVAYj, clS([67,111,110,115,116,97,110,116]))` | — |

(`SO(1)` = `ct.SO(int)` on the group state int `kErPl` `[structure ct.java:205]`; exact UI meaning of value 1 not recovered.)

Behavioral mapping (all `[inferred]`):
- `Distance` (0.3 default) feeds the horizontal box-expansion of `jg.bBN(entity, d)` (`expand(d, 0.0, d)`) — the collision probe radius, in blocks.
- `On Ground` / `On Jump` / `On Fall` (1.1 default each) are the per-motion-state boost magnitudes applied by the `gw`/`gv` handlers, selected by whether the player is grounded, ascending (jump), or descending (fall). Range 0.5–3.0 is consistent with a multiplier, not an offset `[inferred]`.
- `Boost Range` (1.0 default) is the target-selection radius for `Collision Target` (same `bBN` box test with the larger distance); `Power` (0.06 default) is the per-tick velocity increment; `Predict` (5 default, in ticks) is the target-motion lookahead horizon (the only " ticks"-suffixed setting).
- `Matrix` selects an anti-cheat-specific motion profile; with `Collision Target` targeting enabled, `hurtTime` is the likely combat gate.
- `Yaw Offset` + `Ground`/`Air`/`Constant` select when a yaw offset is injected into the rotation pipeline via the static `ou UGcHq` context.

## Unrecovered / uncertain

NEVER GUESSED — the following are explicitly not recovered:

1. **All motion math.** Every behavior handler's arithmetic lives in the VM interpreter whose continuation blocks decompile to constant-blob mixing and truncated jumptables (`halt_baddata`, "Could not recover jumptable", "Exceeded maximum restarts"). No formula connecting `On Ground/On Jump/On Fall`, `Power`, friction, or `setVelocity` arguments can be stated numerically. The multipliers-as-multipliers reading is inference from names/ranges only.
2. **`gw`'s two booleans** (`KnRQq`/`bbx()`, `mQKQb`/`bby()`): meaning, defaults, and which one `er` writes (`bbA` vs `bbB`) are unknown; only `bbA` appears in the shared pool.
3. **`mF` field→direction assignment**: built from keybindings in order forward/back/right/left (`iX.java:133-136`), but the mapping of `cnH/cnI/cnJ/cnK` to those four is inferred from construction order and `iX.bxR`'s yaw math, which decompiles mangled (`** GOTO` restructuring); treat the per-field mapping as probable, not proven.
4. **Attribution of pool MC calls to `er` specifically**: `getEntities/isAlive/isSpectator/subtract/normalize/getSlipperiness/setVelocity/hurtTime` are proven present in the shared group pool, and the group contains `Null Movement`, `No Push`, `Trident Boost` too; which member uses which call is not decidable statically (no per-call-site pool attribution survives).
5. **`hurtTime` usage**: which entity's field is read, and whether it gates boosting or targeting, is unknown.
6. **`SO(1)` semantics** on the `Yaw Offset Mode` group.
7. **`tmlzg` (float) and `UGcHq` (static `ou`)**: mutation sites and exact role (the `ou`-handed-to-`qL` rotation-pipeline claim is structural, from `qL`'s signatures only).
8. **Whether `er` itself dispatches or listens to `hd(BlockPos)`/`hq(Entity,Entity)`** — both events sit in er's pool group (collision family with `No Push`), but no listener registration is visible in Java.
9. **`Matrix` mode internals** — no dependent settings, no recoverable branch.
10. Tables `['0x170c0', '0x19c088', '0x20d7520' … '0x20dbe38']` were not present in `tables.json`; jumptable-dependent control flow inside handlers could not be resolved and may hide additional branches.