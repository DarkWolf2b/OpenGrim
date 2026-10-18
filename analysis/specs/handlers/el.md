# Water Speed (sixtwo.el) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-full/sixtwo_el.c` — all **8 native handlers** + `analysis/ghidra/continuations/sixtwo_el_cont.c` — 40 continuation blocks. (The referenced `analysis/ghidra/handlers-stitched/sixtwo_el.c` does not exist on disk; `handlers-full/` is the same corpus. `resolve_pool_blob.py` likewise survives only as bytecode at `analysis/tools/__pycache__/resolve_pool_blob.cpython-312.pyc`; it was loaded from there to resolve blobs.)
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/el.java` (CFR/Vineflower); literal-folded variant `analysis/decompiled/payload-decrypted/sixtwo/el.java` — the constructor id literal is already folded there: `super(gf.aZL(134, false, gh.xgeEn))` = module id **134**, not a toggle-default module, category `gh.xgeEn` = **Movement** (`analysis/port/reports/batch6.md`: `xgeEn=Movement`). Registry: `sixtwo.el|Water Speed|Increases speed while swimming|key=134|bind=-999` `[registry]`.
- Structure spec: `analysis/specs/modules/el.md` (structural only; superseded by this file for behavior).
- Sibling class-group classes read in full: `sixtwo/em.java` (**High Jump**, id 167 — shares this group's pool), `sixtwo/hs.java` (event payload `(LivingEntity, float, float)`), `sixtwo/jl.java` (`jl.bDR(double,double,double)→Block` — the relative block sampler, body fully Java-visible), `sixtwo/jh.java` (`jh.bCg(ItemStack, RegistryKey<Enchantment>)Z` — the enchantment test helper, native).
- Intermediary→Yarn mapping via `analysis/jars/yarn-1.21.11+build.6.tiny` (all tokens below resolved).
- JNI vtable offsets were mapped against `jdk-21 jni.h` (`JNINativeInterface_` ordering; the table includes JDK-9+ entries, giving `ExceptionCheck` at **0x720**). Offset map used throughout this file:

| offset | function | offset | function |
|---|---|---|---|
| 0x68 | `Throw` | 0x558 | `GetArrayLength` |
| 0x70 | `ThrowNew` | 0x570 | `SetObjectArrayElement` |
| 0x78 | `ExceptionOccurred` | 0x680 | `SetByteArrayRegion` |
| 0x88 | `ExceptionClear` | 0x6f0 | `GetPrimitiveArrayCritical` |
| 0x100 | `IsInstanceOf` | 0x6f8 | `ReleasePrimitiveArrayCritical` |
| 0x1f8 | `CallVoidMethodA` | 0x720 | `ExceptionCheck` |
| 0x2f8 | `GetObjectField` | 0x518 | `NewString` |

**Decompilation reality check (per `fF.md`/`ey.md`/`er.md` precedent):** every behavior handler compiles to (a) a BLOB_DECRYPTOR call (`FUN_190dd72e0`) over the class-group constant pool, (b) `JNI->ExceptionCheck` (vtable 0x720) whose result drives a 2-way indirect jump (`&UNK_18xxxxxxx[(cond)*8]` — Ghidra "jumptable did not pass sanity check"), and (c) a VM-interpreted body decrypted lazily against a live JVM. **No movement math is statically recoverable.** The load-bearing static evidence is the decrypted pool window `POOL[0xce02,0x236]` (566 bytes) — the complete API surface of the interpreted bodies. Jump-table targets were recovered from `analysis/ghidra/continuations/tables.json`, so each handler's reachable VM-op fragment set is known.

- No `rdtsc` reads occur anywhere in the el corpus — no anti-trace timing gates to discount.

## Runtime model

**Lifecycle.** `el extends gg` (module base). Constructed with `gf.aZL(134, false, gh.xgeEn)` → module id 134, category Movement, `aZS(false)` toggle-flag NOT applied (unlike em). Enable/disable go through the base `gg.aaj()`/`gg.YO()` → `hF.bdI/bdM` listener registration (both overrides are native here; el declares no enable/disable natives of its own).

**Events.** Exactly one `@hG` handler: `atb(gH$th)`. `gH$th` is a bare marker subclass of `gH` with no fields — per the fF/fH precedent this is the **client-tick event payload**. There are no packet handlers, no render handlers, no input (`gA`) handlers in this class.

**Settings.** None. `el` declares no `ct/cu/cA/cJ/cD/cz` instance fields and constructs no settings in the folded constructor — the only instance state is the inherited `gg` machinery plus four decryptor statics (`zseOG`, `XPejI`, `fDoMv`, `ItRIN`). All thresholds and multipliers of the speed boost are hard constants inside the native VM and unrecovered (see Unrecovered).

**Motion model (reconstructed from the el-exclusive pool run; every step's API surface is pool-proven, the math is not):**

1. **Water/ice ground-state detection** — the body samples blocks *relative to the player* via `sixtwo/jl.bDR(double,double,double) → net.minecraft.block.Block` (descriptor `(DDD)Lnet/minecraft/class_2248;`). Recovered body of the helper (`jl.java:473-476`):

```python
block = world.getBlockState(BlockPos.ofFloored(
    rD.dlmvG.player.getEntityPos().add(dx, dy, dz))).getBlock()
```

   i.e. `bDR` returns the Block at `player pos + (dx,dy,dz)` — the offsets (the actual probe points around/on the swimmer) are VM-internal. The pool also references `net.minecraft.block.IceBlock` (`class_2386`) exclusively alongside `bDR`, so the sampled blocks are type-compared, and ice under/around the water is distinguished from other blocks — the classic Water-Speed "extra boost / different traction on frozen water" input. `[pool-proven API; offsets and comparison outcome inferred]`

2. **Depth Strider gear check** — `field_6166` = `EquipmentSlot.FEET` + `field_9128` = `Enchantments.DEPTH_STRIDER` (`RegistryKey<Enchantment>`, `class_5321`) + `bCg` with descriptor `(Lnet/minecraft/class_1799;Lnet/minecraft/class_5321;)Z` = **`jh.bCg(ItemStack, RegistryKey<Enchantment>)Z`** (static native helper "stack has enchantment X", `jh.java:59`). So the body reads the equipped boots (`EquipmentSlot.FEET`) and tests them for Depth Strider. Most plausibly the boost strength scales with (or is gated on) the boots' Depth Strider level. `[pool-proven read; gating-vs-scaling inferred]`

3. **Speed status effect check** — `field_5904` = `StatusEffects.SPEED` (`RegistryEntry<StatusEffect>`, `class_6880`) + `method_6059` = `LivingEntity.hasStatusEffect(RegistryEntry)Z`. The body tests the player for the vanilla Speed effect. `[pool-proven read; purpose inferred — most plausibly a boost-amplification or suppression guard]`

4. **Motion commit** — `method_18798` = `Entity.getVelocity() → Vec3d` and `method_18800` = `Entity.setVelocity(double,double,double)V`. Read-modify-write of the player's velocity vector is the only motion-write surface in the class; there are **no packet classes, no `move()`-family calls, no yaw/rotation tokens** in the el pool — the module modifies client velocity and lets vanilla's swim physics integrate it. `[pool-proven APIs; multiplier/formula unrecovered]`

**Attribute discipline.** The group pool `POOL[0xce02,0x236]` is one contiguous slice of the shared pool table; `em` (High Jump) handlers decrypt the overlapping window `POOL[0xcf35,0x23a]`. The token run layout is: `[bleed: …InputUtil$Key.getCode, AnvilScreen, CommandBlockScreen(class_477, fragment "ass_477"), StructureBlockScreen(class_497)] → [sixtwo/el, zseOG, FEET, ate, Enchantments, DEPTH_STRIDER, bCg, (ItemStack;RegistryKey;)Z, SPEED, hasStatusEffect, sixtwo/jl, bDR, (DDD)Block, IceBlock, atc, atd, getVelocity, setVelocity, fDoMv, XPejI, atf, ItRIN] → [sixtwo/em … hs accessors … getChunkPos/ChunkPos.x/z/isChunkLoaded/getChunk … ShulkerBox/getPos … ja.byD(WorldChunk)List … fallDistance … PlayerActionC2SPacket]`. Conclusions:
- `class_477`/`class_497` (CommandBlockScreen/StructureBlockScreen) are **bleed from the preceding group** (a GUI/keybind module's token run) — *not* Water Speed behavior; `class_477` is even truncated mid-name at the window edge.
- `method_18800` (`setVelocity`) is fully inside el's window but only a fragment (`"od_18800"`) inside em's window — the velocity-modification surface is **el-exclusive**.
- The chunk-guard set (`method_31476` `Entity.getChunkPos()`, `class_1923` `ChunkPos` with `field_9181`/`field_9180` `x`/`z`, `method_8393` `WorldView.isChunkLoaded(int,int)Z`, `method_8497` `World.getChunk(int,int) → WorldChunk`) sits in the em-run region (el's window cuts `getChunk`'s descriptor mid-token, so el's VM cannot resolve it). It is attributed to **em (High Jump)**'s ground probe; el may additionally use the chunk-pos/isChunkLoaded prefix — cannot be proven either way.

## Per-handler semantics

All handlers take `(JNIEnv* env, ...)`; Ghidra shows only `param_1`. The `*plRam000000018301ee50` global is the single shared pool base (`0x18301ee50`); `FUN_190dd72e0(env, pool_base+off, len)` is BLOB_DECRYPTOR; `FUN_190ddce00` is the secondary runtime call seen in VM-op tails; `FUN_190de3220` is init plumbing.

| # | Method (descriptor) | Image | What the decompile actually contains |
|---|---|---|---|
| 1 | `_e46056dffe9d6e6edddd85a8c13dc18b()V` — static init | [18d20b5b0] | Decrypts init pool `POOL[0x226,0xd]` = fragments `"ang/String;"` + `"<"` (resolves `java/lang/String` / `<init>` for the `Loader.doInit(el.class)` path — identical blob in fF/fu/ey/em clinit stubs); `JNI->ExceptionCheck` (0x720); 2-way jump into `UNK_182182df0` table. Continuation [18d20b69b]: `FUN_190de3220()` + second ExceptionCheck + truncated VM dispatch. No module behavior. |
| 2 | `atb(Lsixtwo/gH$th;)V` — **tick handler** (`@hG`) | [18d1e1600] | Decrypts the shared method pool `POOL[0xce02,0x236]`, ExceptionCheck, jump into `UNK_1821774e0` table. Reachable VM-op fragments (tables.json, 16 entries): plain-return anchors `FUN_18d1e5ff7` [18d1e5ff7], `Throw` [18d1e752d] (vtable 0x68), `IsInstanceOf` type-check splits [18d1e5fb6, 18d1e65aa] (vtable 0x100) with guard-tails [18d1e6eef, 18d1e6bcf, 18d1e6b8a, 18d1e57bc], `ExceptionOccurred`+decrypt path [18d1e6cc4] (vtable 0x78), VM end marker [18d1e753c] (`swi(3)` illegal-opcode). Two distinct `IsInstanceOf` sites = two type tests in the interpreted body (consistent with the `jl.bDR`-result/IceBlock and equipment checks; exact subjects unprovable). Real body VM-interpreted; see Runtime model. |
| 3 | `atc()V` — private subroutine | [18d1e7660] | Same shared pool `POOL[0xce02,0x236]` (so its VM program references the same token table — `atc` appears as a token inside the pool, i.e. it is invoked from other VM programs). Table `UNK_1821792b0`: fragments include `GetObjectField` [18d1eb111] (vtable 0x2f8), **`CallVoidMethodA` + ExceptionCheck [18d1f7bbf]** (vtable 0x1f8 — a parameterized void Java call from VM code; the motion-commit call-site candidate), `IsInstanceOf` [18d1f432d, 18d1f5440], ExceptionCheck guard-tails [18d1ea83c, 18d1f3957, 18d1ea68a], indirect-call tail [18d1f5f0d], decrypt-tail [18d1e774e], return anchor [18d1f7be5]. |
| 4 | `atd()V` — private subroutine | [18d1f7d80] | Same shared pool. Table `UNK_18217e0f8`: fragments include `CallVoidMethodA` + ExceptionCheck [18d1fc3e2], `GetObjectField` [18d1faf88], `ThrowNew` [18d1fbb06] (vtable 0x70), decrypt-tails [18d1f7e41, 18d1fbb42, 18d1fbac5], guard-tails [18d1fb25e, 18d1fb2db, 18d1fbed7, 18d1fc08d], return anchor [18d1fc406]. Same shape as atc: state access + one parameterized void call, VM-interpreted. |
| 5 | `ate(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | [18d1fc540] | **Fully recovered — identity function: `return param_3;`** (the handler receives env, clazz, exception and returns the exception). Synthetic MatchException rethrow trampoline — obfuscation plumbing, not behavior. |
| 6 | `atf(IJ)I` — int constant decryptor `(int idx, long key)` | [18d1fc5d0] | ~590 lines of opaque keyed constant-mixing (per-site globals `0x84222325`, `0x842223da`, `0x3e0d`, `0x7fff`, rotations `<<0x1d` / `*0x2000` masks, popcount chains, `func_0x00018d207800` self-calls), then pool decrypt + jump `UNK_18217f820`. Continuations: [18d21bc24] `GetPrimitiveArrayCritical` (0x6f0) → single-byte read `*(char*)(ptr+idx)` → `ReleasePrimitiveArrayCritical` (0x6f8, mode 2) → more mixing → jump; [18d217258] `ReleasePrimitiveArrayCritical` + `GetArrayLength` (0x558) `len < 4` bounds guard + mixing. This is the whitelist/constant-decrypt state machine that produces decrypted int constants consumed by the VM programs (like fF's `aTc`) — anti-trace noise, **no module behavior**. |
| 7 | `atg(Lookup;MutableCallSite;String;[Object;)I` — invokedynamic int fallback | [18d207890] | Dispatch stub keyed on `in_stack_00000030 == 0` → `UNK_182181840`. Fragments: `GetArrayLength` guard `len < 1` [18d207932], `SetObjectArrayElement` [18d2083e8] (vtable 0x570), decrypt/`ExceptionClear` plumbing [18d2078de, 18d208382], `ThrowNew` [18d207e59, 18d208549], guard-tails. Bootstrap infra for `ath<"f">(idx, key)` int-constant callsites (see constructor id folding) — not module behavior. |
| 8 | `ath(Lookup;String;MethodType)CallSite` — bootstrap | [18d2088a0] | Decrypts bootstrap pool `POOL[0x857,0x26]` = fragments `"odHandle;"` (java/lang/invoke/MethodHandle), `"iUrOn"`, `"Ljava/util/Map;"`, `"java/l"` — identical blob to fF's `aTb` / em's `ato`. Table `UNK_182181e00`: return anchors [18d20a8c6], `SetObjectArrayElement`-region plumbing [18d209cb8, 18d20892c], `ExceptionOccurred`+decrypt [18d20b404], `ExceptionClear` [18d200c86-region thunks], `ThrowNew` [18d20dba9-region], guard-tails. invokedynamic bootstrap infra only. |

**Pool windows cited per handler** (all `BLOB_DECRYPTOR(env, *0x18301ee50 + off, len)`):
- clinit [18d20b5b0]: `POOL[0x226,0xd]`
- atb [18d1e1600], atc [18d1e7660], atd [18d1f7d80]: `POOL[0xce02,0x236]` — the group token table, full contents enumerated below
- atf [18d1fc5d0]: pool decrypt + `UNK_18217f820` dispatch; continuation machinery reads its key stream from a Java byte[] via `Get/ReleasePrimitiveArrayCritical`
- ath [18d2088a0]: `POOL[0x857,0x26]`

## The group pool `POOL[0xce02,0x236]` — complete token list, with attribution

Exact token sequence (pool rva `0x301ee40 + 0xce02`, len 566; front and back are cut mid-token):

```
ass_477                                          ← tail of net/minecraft/class_477 (bleed, previous group)
net/minecraft/class_497                          ← StructureBlockScreen (bleed, previous group)
sixtwo/el  zseOG                                 ← el self + decryptor state
field_6166                                       ← EquipmentSlot.FEET            [EL]
ate                                              ← el's MatchException trampoline (VM call target)
net/minecraft/class_1893  field_9128             ← Enchantments.DEPTH_STRIDER    [EL]
bCg  (Lnet/minecraft/class_1799;Lnet/minecraft/class_5321;)Z
                                                 ← jh.bCg(ItemStack, RegistryKey<Enchantment>)Z  [EL]
field_5904                                       ← StatusEffects.SPEED           [EL]
method_6059  (Lnet/minecraft/class_6880;)Z       ← LivingEntity.hasStatusEffect(RegistryEntry)Z   [EL]
sixtwo/jl  bDR  (DDD)Lnet/minecraft/class_2248;  ← jl.bDR(dx,dy,dz) → Block      [EL]
net/minecraft/class_2386                         ← IceBlock                      [EL]
atc  atd                                         ← el's subroutines (VM call targets)
method_18798                                     ← Entity.getVelocity() → Vec3d  [EL]
method_18800                                     ← Entity.setVelocity(DDD)V      [EL; only a fragment in em's window]
fDoMv  XPejI  atf  ItRIN                         ← el decryptor statics + int decryptor (shared infra)
sixtwo/em  IAnJC  atl  Mbkzf                     ← em (High Jump) self + state + trampoline
sixtwo/hs  bdd  nszob  bde  qbgVw                ← hs event payload accessors + em fields
method_31476  ()Lnet/minecraft/class_1923;       ← Entity.getChunkPos()          [EM-run]
net/minecraft/class_1923  field_9181  field_9180 ← ChunkPos.x / ChunkPos.z       [EM-run]
bdg                                              ← hs.bdg(float) setter
method_8393  (II)Z                               ← WorldView.isChunkLoaded(int,int)Z  [EM-run]
net/minecraft/class_2627  method_11016           ← ShulkerBoxBlockEntity.getPos() [EM-run]
method_8497  (II)Lnet/m                          ← World.getChunk(int,int) → WorldChunk (descriptor truncated at window edge) [EM-run]
```

Tokens after the window edge (em-only): `cSAnF`, `rXots`, `rnwKn`, `sixtwo/ja` + `byD` + `(Lnet/minecraft/class_2818;)Ljava/util/List;`, `net/minecraft/class_2586`, `atk`, `(Lnet/minecraft/class_2627;)Z`, `eXBkK`, `atm`, `field_6017` (fallDistance), `method_11312` (ShulkerBoxBlockEntity.getAnimationProgress), `sixtwo/en`, `net/minecraft/class_2846$class_2847` (PlayerActionC2SPacket) — all High Jump group, not el.

## Settings → behavior mapping

**None.** `el` constructs zero settings (verified in both `payload-named` and `payload-decrypted` constructors — the only constructor work is `super(gf.aZL(134, false, gh.xgeEn))` plus the decryptor-state computation `zseOG ^ 10392063716592L`). Registration defaults from registry: module key 134, active bind −999 (unbound), category Movement (`gh.xgeEn`). There is no settings tree, no visibility callbacks, no keybind beyond the base-class binds. Every behavioral constant (swim multipliers, ice bonus, Depth Strider scaling, Speed-effect handling, probe offsets) lives in the VM.

| input | type | behavioral role [confidence] |
|---|---|---|
| boots (`EquipmentSlot.FEET`) item | ItemStack read | tested with `jh.bCg(stack, Enchantments.DEPTH_STRIDER)` [pool-proven read] |
| player status effects | `hasStatusEffect(StatusEffects.SPEED)` [pool-proven read] |
| blocks at player-relative offsets | `jl.bDR(dx,dy,dz)` + `IceBlock` type compare [pool-proven read] |
| player velocity | `getVelocity()` read → `setVelocity(x,y,z)` write [pool-proven read+write] |

## Unrecovered / uncertain

**Not recoverable from static analysis (native VM bodies, decrypted lazily against a live JVM):**

1. **All motion math.** The exact velocity transformation — per-axis or scalar multiplier(s), whether the boost is applied to horizontal only or all axes, any tick-to-tick accumulation or smoothing, and the values of any constants — is inside the VM programs and unrecovered. `getVelocity`/`setVelocity` prove the mechanism, nothing more. The `atf(IJ)I` decryptor would yield the VM's integer constants only with a live JVM (its decrypted outputs are not in `full-dump.jsonl`, which covers only Java-side BSM calls).
2. **Gating order and conditions.** Whether the Depth Strider check *gates* the module (no boost without Depth Strider boots), *scales* it (per-level multiplier), or merely selects a branch; whether the `StatusEffects.SPEED` check amplifies, suppresses, or only reports. Pool proves the reads; the control flow is unrecovered.
3. **Probe geometry.** The `(dx,dy,dz)` offsets passed to `jl.bDR` (how many sample points, and where relative to the swimmer's position) are VM-internal. Likewise which comparison outcome against `IceBlock` does what (extra boost on ice vs. suppression vs. separate water/ice modes).
4. **What `atc()` and `atd()` do.** Both are private subroutines invoked from VM code (they appear as pool tokens); their reachable op fragments show one `GetObjectField` + one `CallVoidMethodA` each (plus type checks / ThrowNew plumbing) — consistent with motion-commit helpers or state refreshers, but the call targets and arguments are unrecovered.
5. **Whether the `IsInstanceOf` checks in `atb`'s program test the sampled `Block` (e.g. `instanceof IceBlock`), the equipment item, or something else** — two type tests are provably reachable; their subjects are not.
6. **Chunk-guard attribution.** `getChunkPos`/`ChunkPos.x/z`/`isChunkLoaded` sit in the shared band of the group pool; the `getChunk` descriptor is truncated at el's window edge, so el's VM provably cannot resolve `World.getChunk`. The prefix set could still be used by el for safe block probing — cannot be proven vs. em (High Jump) ownership.
7. **`hs` event flow.** `sixtwo/hs` + `bdd`/`bde`/`bdg` tokens are in the shared band; `em.ati(hs)` is the only Java-visible `hs` consumer. Whether el's VM emits `hs` events (AllocObject candidates exist in the group's continuation corpus) or only em reads them is unrecovered.
8. **The `atf` mixing.** The keyed-constant arithmetic (globals `0x84222325`, `0x842223da`, `0x3e0d`, `0x7fff`, constants like `0xa16468448ae60192`, `0xc205fc13d6f6400`, …) is the protection VM's own state machine — documented verbatim above where cited, deliberately not interpreted as behavior.
9. `handlers` summary artifacts (`handlers-stitched/`, `resolve_pool_blob.py`, `framework-findings.md`) are absent from disk; all values in this spec were re-derived from `handlers-full/`, `continuations/` (+ `tables.json`, `blocks-resume.jsonl`), and the `.pyc`-only pool tool.

**Explicitly not guessed:** no swim-speed multipliers, no Depth Strider level thresholds, no ice-bonus values, no probe coordinates, no tick frequencies beyond vanilla client-tick semantics, and no message strings (none exist for this class — no `cN`/`cM` chat tokens in the el pool).