# Auto Clicker (sixtwo.fn) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-full/sixtwo_fn.c` — all 27 native handlers (`YO`, `_37c593e9…`, `aKM`, `aKN`, `aKO`, `aKP`, `aKQ`, `aKR`, `aKS`, `aKT`, `aKU`, `aKV`, `aKW`, `aKX`, `aKY`, `aKZ`, `aLa`, `aLb`, `aLc`, `aLd`, `aLe`, `aLf`, `aLg`, `aLh`, `aLi`, `aLj`, `aLk`) decompile to the same protection pattern: one `FUN_190dd72e0` (blob decryptor) call + `JNI->ExceptionCheck` (vtable `+0x720`) + an unchecked indirect tail-jump (`&UNK_<group> + (cond)*8`, "Treating indirect jump as call") into the j2cc VM interpreter. Reachable continuations live in `analysis/ghidra/continuations/all-continuations.c` lines ~991846–999166. **No click-rate math is directly decompilable**; behavior below is reconstructed from the class pool symbol table, the verified payload helpers those symbols resolve to, and the decrypted Java — every such step is tagged `[inferred]`.
- Handler body layout (verified, identical shape in every behavior handler): the class pool `POOL[0x1272c,0x2f0]` (752 bytes, pool base `*plRam000000018301ee50`) is decrypted per handler (idempotent across all of them), except: `YO` decrypts `POOL[0x3806,0xbf]`, `_37c5…` decrypts `POOL[0x226,0xd]`, `aKZ`/`aLa` decrypt `POOL[0xb1,5]`, and the invokedynamic bootstraps `aLh`/`aLk` decrypt `POOL[0x857,0x26]`.
- Structural: `analysis/specs/modules/fn.md`; Java: `analysis/decompiled/payload-named/sixtwo/fn.java` and `analysis/decompiled/payload-decrypted/sixtwo/fn.java` (literals folded — every setting label recovered verbatim as a `mr.clS(int[])` char-array argument).
- Identity: `super(gf.aZL((int)161, false, gh.xwjCw))` — module id **161**, category `gh.xwjCw`; registry `sixtwo.fn|Auto Clicker|Clicks automatically when holding attack key|key=161|bind=-999` `[registry]` (bind −999 = unbound; activation is via the module toggle, not a keybind).
- Class pool `POOL[0x1272c,0x2f0]` (resolved verbatim, in order): `aKG, TspBo, mMfNq, fLgmv, aKJ, QeCTb, sixtwo/fn, bcgit, HzZRg, TgvNw, guvrN, Lsixtwo/re;, sixtwo/re, deN (Lsixtwo/gH$th;)V, MVcap, UjADv, aLd, aKP, aKW, aKV, aKU, java/util/function/BooleanSupplier, deO (Ljava/util/function/BooleanSupplier;)I, aKN, aKO, zUyjt, aKT ()Lsixtwo/rf;, wznPK, Lsixtwo/rf;, deW (Lsixtwo/rf;)V, aKR, OHuMF, aKQ (Lsixtwo/re;Lsixtwo/cC;I)V, uuTCc, ybxcg, YfhNn, aKS, KYiQd, Ljava/util/Random;, java/util/Random, bunVK, AYQUN, nextDouble, kySvO, [Lsixtwo/rf;, OIxOu, sixtwo/rf, ElhZz, SWful, deV, akhNQ, sxweB, LbAPM, aKX (Lnet/minecraft/class_465;Lnet/minecraft/class_1735;)Z, diT (Lnet/minecraft/class_304;)V, aVMzs, RazEo, EsjGg, aLf, tamEM, sQAhp, dTOmd, hQNGE, aLe, aLi, sixtwo/fo, aLo, yUbEH, aLx, xVFMx, net/minecraft/class_2684, method_11645, PzVPu, ehxwR, YlLcN, NErxJ, SrySj, BfWtc, HfrXE, OiqRK, ARs`.
- Yarn mapping (`jars/yarn-1.21.11+build.6.tiny`, verified per symbol): `class_465` → `HandledScreen`, `class_1735` → `Slot`, `class_304` → `KeyBinding`, `class_2684` → `EntityS2CPacket` with `method_11645` → `getEntity(World)` (returns `Entity`). **`class_2684`/`method_11645` and the trailing field names (`xVFMx, YlLcN, PzVPu, ehxwR, SrySj, OiqRK, NErxJ, aLo, aLx, yUbEH`) belong to `sixtwo.fo` (Anti Bot, registry key=12), which shares this pool page — they are NOT attributed to `fn`** (see Unrecovered #6).
- Payload helpers (verified bodies, not guesses):
  - `rr.diT(KeyBinding)` = `rr.diS(((KeyMappingAccessor)keyBinding).getKey().getCode())` (`rr.java`).
  - `rr.diS(int code)`: `mouseHandlerAccessor.callOnButton(windowAccessor.getHandle(), new MouseInput(code, 0), 1)` immediately followed by `callOnButton(handle, new MouseInput(code, 0), 0)` — a full press+release injected through Minecraft's own mouse pipeline (`rr.java:360-369`).
  - `rr.diU(int button, long delayMs)`: `callOnButton(handle, new MouseInput(button, 0), 1)` then `iU.bwU(() -> callOnButton(handle, new MouseInput(button, 0), 0), delayMs, TimeUnit.MILLISECONDS)` — press now, scheduled release after delay ms (`rr.java:288-291`); `rr.diV(KeyBinding, long)` = `diU(keyCode, delay)`.
  - `re` (click scheduler, `re.java`): ctor `(int, int, rf, rd, BooleanSupplier, boolean)` — stores the gate supplier (`DUyHX`), calls `deV(n2, n3)` with the two ints, sets pattern `homNT` and timing curve `nRKli` (`rd`, null here), calls `deY()`, sets `GUqTN = true`, and only calls `hF.bdI(this)` (event-bus registration) when the 6th arg is `true`. `fn` passes `false`, so **fn's schedulers are NOT self-registered tick listeners; `fn` must drive them itself** from its own `@hG aKM` handler `[inferred]`. Static `re.KYiQd` is the shared `java.util.Random`; `rc` is a rows×cols int ring buffer (`re` uses cols=2); `rd` is a timing-curve object.
  - `rf` (click-pattern enum, `rf.java`): exactly 8 constants `BfWtc, jojsN, wSUrn, OzzRG, SXABY, HfrXE, CmnWh, ElhZz`; each carries display name `lJQiS` (via `dft()`) and a `rb` strategy (via `dfu()`); `rb` contract is `void fill(int[] delays, re scheduler)` — patterns generate delay arrays consumed by `re` `[inferred from rb` interface + `re.deV(int,int)]`. Display names are native (`dft()` is a native method) — **not recovered**.
- Hash-named natives `aLb–aLe`, `aLg–aLk`, `aLf`, `aLi` and `_37c5…` are payload runtime (per-class pool/String/int decryptors, invokedynamic bootstraps, MatchException rethrow); listed per-handler below, not module logic.
- Runtime helpers used only as opaque calls: `FUN_190dd72e0` (blob decryptor), `FUN_190ddfc90`, `FUN_190dd9df0`, `FUN_190ddce00`, `FUN_190de3220`, `FUN_184117db0`, `FUN_184117d50`, `FUN_1842a3a30`, `FUN_184194800`, `func_0x000180001044` (VM dispatch), decryptor mixers `func_0x00018c2e6410 / 0x00018c3027d0 / 0x00018c2f3990 / 0x00018c321fd0`.
- JNI vtable offsets (established, cross-validated against the classic `JNINativeInterface` ordering): `0x68`=Throw, `0x70`=ThrowNew, `0x78`=ExceptionOccurred, `0x88`=ExceptionClear, `0xd8`=AllocObject, `0xf8`=GetObjectClass, `0x100`=IsInstanceOf, `0x138`=CallBooleanMethodA, `0x1f8`=CallVoidMethodA, `0x2f8`=GetObjectField, `0x3a0`=CallStaticObjectMethodA, `0x488`=GetStaticObjectField, `0x4b8`=GetStaticLongField, `0x558`=GetArrayLength, `0x570`=SetObjectArrayElement, `0x580`=NewByteArray, `0x688/0x698`=region/critical release variants, `0x6f0`=GetPrimitiveArrayCritical, `0x6f8`=ReleasePrimitiveArrayCritical, `0x720`=ExceptionCheck.

## Runtime model

### Event wiring

`fn` declares exactly one Java-visible listener:

| handler | event | what the event is (verified) |
|---|---|---|
| `aKM(gH$th)` `[18c2a4ed0]` | `gH$th` | the same pre-tick client event consumed by Speed (`er`) — a marker subclass of `gH` dispatched every client tick. `@hG` (default priority). This is the only `@hG` method in `fn` (`analysis/specs/modules/fn.md` shows "0 @hG methods" because the annotation lives on the native decl). |

Because both `re` schedulers are constructed with `register=false`, the tick event reaches the schedulers only through `fn`'s native tick body: `aKM` → (VM) → calls into the pool-verified `re` surface `deN(gH$th)`, `deV(int,int)`, `deW(rf)`, `deO(BooleanSupplier)I` `[inferred from pool symbols]`.

### Click-rate model (all numeric wiring below is `[inferred]` except the verbatim settings)

- Two independent click pipelines: **left** (`guvrN`) and **right** (`UjADv`). Field order in the decrypted ctor (`guvrN` constructed immediately before `UjADv`, mirroring `MVcap`="Left Click" before `zUyjt`="Right Click") supports `guvrN`=left, `UjADv`=right `[inferred]`.
- Both are created identically: `new re(12, 12, rf.ElhZz, null, fn::aLc, false)` / `new re(12, 12, rf.ElhZz, null, fn::aLb, false)` — initial pair `(12, 12)` matches the default CPS of **12.0** for both sliders, default pattern `rf.ElhZz`, **no `rd` timing curve** (`null`), gate supplier **always true** (`aLc`/`aLb` are literal `return 1` at `[18c2bce70]`/`[18c2bcde0]`).
- The `(12, 12)` ctor pair is most plausibly (min, max) or (low, high) delay bounds in scheduler units, not a fixed delay — `re.deV(int,int)` stores a pair (`bacvZ`/`Qafjr`-class fields) and `re`'s own no-arg ctor uses `(5, re.dfp(...))` (a non-trivial second value), i.e. a range `[inferred, exact unit not recovered]`.
- `aKQ(re, cC, int)` `[18c32d5f0]` is the slider→scheduler adapter: it takes the scheduler, the CPS slider (`cC`), and an int, and re-programs the scheduler when CPS changes — the pool keeps `deV(int,int)` right next to the scheduler fields, and the int parameter is most plausibly the mouse button (0=left / 1=right) selecting `guvrN` vs `UjADv` `[inferred]`. The CPS→delay conversion (how 12.0 CPS becomes the `(12,12)`-style pair, or what unit the pair is in) is virtualized — see Unrecovered #1.
- **Randomization**: the pool carries `java/util/Random`, `nextDouble`, `KYiQd` (re's static `Random`) — the "Randomize" (`YfhNn`, default **true**) and "Randomize Speed" (`aVMzs`, default **true**) toggles gate `Random.nextDouble()`-driven perturbation of the click delays `[inferred]`. Exact jitter distribution and magnitude are virtualized (Unrecovered #2).
- **Click Pattern**: `bunVK` ("Click Pattern", `ct` group) holds one `cu` toggle per `rf` constant (`for (rf rf2 : kySvO) new cu(this.bunVK, mr.clQ(rf2.dft()))`), i.e. **8 pattern toggles**. `wznPK` (field, type `rf`) is the selected pattern; `aKT()` `[18c3463d0]` returns it; `re.deW(rf)` is in the pool as the scheduler-side pattern setter. `rf.ElhZz` is the ctor default. Pattern delay profiles are generated by each pattern's `rb.fill(int[], re)` — content virtualized (Unrecovered #3).
- **Hold vs toggle**: the registry description says "Clicks automatically when holding attack key" — i.e. output fires while the vanilla attack/use key is held, not on module toggle alone. The state read that detects "holding" is virtualized; the module has no keybind of its own (`bind=-999`, 0 `rk` constructions) `[inferred from registry]`.
- **Conditions group** (`ipOaN`): `SWful` "Holding Weapon" and `LbAPM` "Not Using Item" are gate toggles evaluated per click `[inferred]`; their checks are virtualized (no pool symbols survive for them beyond the labels).
- **Inventory mode** (`sxweB`, default **false**): when on, clicking also operates inside container GUIs — the pool keeps `aKW(HandledScreen)`, `aKX(HandledScreen, Slot)Z`, `aKY(HandledScreen, Slot)Z` adjacent to this setting, and `aVMzs` ("Randomize Speed") is wired visible-only-while-Inventory-is-on (`aVMzs.Vf(this.sxweB::WF)`), tying slot-level click speed randomization to inventory mode `[inferred]`.
- **Attack packet path**: `fn` never builds a C2S packet itself. The pool's only click-execution symbol is `diT (Lnet/minecraft/class_304;)V` → `rr.diT(KeyBinding)` → `rr.diS(keyCode)` → **two `MouseHandlerAccessor.callOnButton(windowHandle, new MouseInput(code, 0), action)` calls (1 then 0)**. The click therefore enters Minecraft's normal `MouseHandler.onButton` processing (attack/use keybinding resolution, item use, block breaking, and the resulting server-bound interaction packets are all vanilla behavior downstream of the injected press+release). `rr.diU`/`diV` (press + delayed release via `iU.bwU(…, TimeUnit.MILLISECONDS)`) exist on the same helper and are the natural match for a press-hold-release click variant, but which of `diS` (instant) vs `diU` (timed) `fn` uses per mode is not decodable statically `[inferred]`.
- **Allow Breaking Blocks** (`akhNQ`, default **true**): a gate on whether auto-clicks are allowed to break blocks (i.e. whether the injected left click may target blocks vs entities only) `[inferred from label only]`.
- **Simulate Exhaust** (`ybxcg`, default **false**): behavior not recoverable (Unrecovered #5).

### State fields

| field | init | reading |
|---|---|---|
| `guvrN` / `UjADv` | `re(12,12,ElhZz,null,aLc/aLb,false)` | left/right click schedulers (see above) |
| `AYQUN`, `OIxOu` | `new int[]{-1, -1}` each | per-button 2-slot int state (matches `re`'s 2-column `rc` ring buffer shape); `-1` sentinel. Exact meaning (e.g. last-delay ring / button codes) not recovered (Unrecovered #4) |
| `HzZRg` | `1.0` (double) | a speed/randomization factor defaulting to neutral 1.0; mutation sites virtualized (Unrecovered #4) |
| `bcgit` | (int, no visible init) | unknown |
| `wznPK` | (rf, set from toggles) | selected click pattern |
| `kySvO` (static) | `rf[8]` | the 8 pattern constants, iterated in the ctor |
| `TgvNw`, `hQNGE`, `RazEo`, `EsjGg`, `sQAhp`, `tamEM`, `dTOmd` (static) | decryptor caches | j2cc obfuscation state, not module logic |

### Anti-trace noise

`rdtsc` does **not** appear anywhere in `fn`'s handler bodies or the fn continuation range (lines 991846–999166 of `all-continuations.c`) — unlike `er`. The fn region's noise is instead: 77× `ExceptionCheck` (0x720) guard splits, 20× `IsInstanceOf` (0x100) type checks, 13× `ThrowNew` (0x70) / 12× `ExceptionOccurred` (0x78) / 4× `Throw` (0x68) / 3× `ExceptionClear` (0x88) error paths, 8× `GetArrayLength` (0x558) bounds guards, and giant constant-mixing blocks ending in `func_0x000180001044` VM dispatch (`FUN_18c2c5219`, `FUN_18c2c78ca`) — none of it module logic.

## Per-handler semantics

All `[18xxxxxxx]` addresses are image addresses (handler header form: `runtime 6ffff…`). Every behavior handler: `FUN_190dd72e0(env, pool_base+off, len)` → `JNI->ExceptionCheck` `[+0x720]` → unchecked indirect tail-jump into the VM interpreter.

- **`YO()`** `[18c2a4b70]` — unregister/disable override (base `gg.YO`). Decrypts `POOL[0x3806,0xbf]` (191 bytes) containing `Lsixtwo/gg;`, `baf ()Lsixtwo/gc;`, `aZg ()Lsixtwo/gd;`, `aZi (Lsixtwo/gd;)Lsixtwo/gc;`, `cnP (FFF)Lsixtwo/mG;` — superclass/config method symbols the VM resolves while tearing down (or handing state back to the module manager). Tail `[18c2a4bba]`. The schedulers' event-bus entries are unaffected by registration (they were never registered); disable most plausibly stops the `aKM` gate `[inferred]`.
- **`_37c593e92cb34b419abdcec04633d1c8()`** `[18c306580]` — class static-init trampoline. Decrypts 13-byte blob `POOL[0x226,0xd]` (fragment `ang/String; | <`). Tail `[18c306668]`. Payload runtime.
- **`aKM(gH$th)`** `[18c2a4ed0]` — the per-tick listener; the module's main loop. Decrypts the class pool; tail `[18c2a4f94]`. Continuations reachable: `CallVoidMethodA` + ExceptionCheck `[18c2bbfca]` (the void call into the scheduler/`re` surface — the click-drive call-site candidate) `[inferred]`, `CallBooleanMethodA` `[18c2bc25d]` (boolean gate evaluation — condition toggles or scheduler gate) `[inferred]`, `GetObjectField` + ExceptionCheck `[18c2bcac8]`. Real click-timing math virtualized.
- **`aKN()`** `[18c2e64a0]`, **`aKO()`** `[18c322060]`, **`aKP()`** `[18c3282d0]` — private native void subroutines (pool keeps them grouped with the scheduler fields and settings fields). Same decrypt + tails `[18c2e658b, 18c32214e, 18c328391]`. Most plausibly the per-button click drivers (left tick / right tick / reprogram) invoked from `aKM`'s VM body; individual roles not decidable `[inferred, not verified]`.
- **`aKQ(re, cC, int)`** `[18c32d5f0]` — CPS→scheduler adapter (see Runtime model). Tail `[18c32d6c7]`. Continuations: `GetPrimitiveArrayCritical` → single-byte read → `ReleasePrimitiveArrayCritical` with `NewByteArray`/`GetArrayLength` guard `[18c320932]` (byte-array page decrypt machinery), `GetArrayLength ≤ 2` guard `[18c31329a]`, VM dispatch tails. Conversion math virtualized.
- **`aKR()`** `[18c333e10]` — private native void; tail `[18c333efa]`. Role not decidable (candidate: pattern/toggle re-scan).
- **`aKS(int)` → `int`** `[18c3460a0]` — pure int transform helper; tail `[18c3460ea]`; continuation `GetArrayLength` sign-split jumptable `[18c2bd089]` belongs to the adjacent decryptor family. Semantics not recovered (candidate: CPS↔delay unit conversion) (Unrecovered #1).
- **`aKT()` → `rf`** `[18c3463d0]` — returns the selected click pattern (`wznPK`/toggles → `rf` constant). Tail `[18c346425]`.
- **`aKU()` → `boolean`** `[18c347500]` — tail `[18c3475ca]`. Candidate condition gate (Holding Weapon / Not Using Item) `[inferred, not verified]`.
- **`aKV()` → `boolean`** `[18c2aac60]` — tail `[18c2aad21]`. Same family as `aKU`; exact mapping of these two booleans to the two condition toggles is not decidable `[inferred, not verified]`.
- **`aKW(HandledScreen)`** `[18c2b06b0]` — container-GUI hook for Inventory mode; takes the open screen. Tail `[18c2b07aa]`.
- **`aKX(HandledScreen, Slot)` → `boolean`** `[18c2b7c70]`, **`aKY(HandledScreen, Slot)` → `boolean`** `[18c2bc140]` — per-slot filters used while clicking inside a container (which slots may be auto-clicked, possibly left vs right distinction given the pair). Tails `[18c2b7d34, 18c2bc199]`. Filter logic virtualized.
- **`aKZ()`** `[18c2bc340]`, **`aLa()`** `[18c2bc890]` — native synthetic booleans (invoked from VM code); decrypt 5-byte blob `POOL[0xb1,5]`. Tails `[18c2bc387, 18c2bc8d7]`. Payload runtime.
- **`aLb()`** `[18c2bcde0]`, **`aLc()`** `[18c2bce70]` — literal `return 1`. These are the `BooleanSupplier`s handed to `UjADv` / `guvrN` in the ctor — the schedulers' built-in gate is always-true; all real gating is done in `fn`'s own tick path (or swapped at runtime via pool symbol `deO(BooleanSupplier)I`) `[inferred]`.
- **`aLd(MatchException)` → `MatchException`** `[18c2bcf00]` — identity (`return param_3`); synthetic rethrow trampoline.
- **`aLe(byte[])` → `String`** `[18c2bcf90]` — payload string decryptor: null-check jumptable `[18c2bd033]`; continuation `GetArrayLength` sign-split `[18c2bd089]`. Payload runtime.
- **`aLf(int, long)` → `String`** `[18c2ed0e0]` — the `(I)J`→`String` pool-string engine; ~800 lines of chained constant mixing over `uRam_18334xxxx` state words, with the DES byte-array machinery (`GetPrimitiveArrayCritical`/`ReleasePrimitiveArrayCritical`, `NewByteArray`) in continuations. Payload runtime; anti-trace constants only.
- **`aLg(Lookup, MutableCallSite, String, Object[])` → `Object`** `[18c2f3a20]`, **`aLj(…)` → `int`** `[18c302860]` — invokedynamic call-site fallback bootstraps; single tail-jumps, share the `aLf`/`aLi` continuation blocks. Payload runtime.
- **`aLh(Lookup, String, MethodType)` → `CallSite`** `[18c2f4910]`, **`aLk(…)`** `[18c303870]` — string/int bootstrap tags; decrypt `POOL[0x857,0x26]` (`…odHandle; | iUrOn | Ljava/util/Map; | java/l…`). Payload runtime.
- **`aLi(int, long)` → `int`** `[18c2f73d0]` — the `(I)J`→`I` pool-int engine; ~700 lines of constant mixing. Payload runtime.

## Settings → behavior mapping

All labels/defaults verified verbatim from `payload-decrypted/sixtwo/fn.java` (char-array `mr.clS(int[])` arguments decoded); builder semantics verified from `cC.java` (`Vy`=step, `Vw`=min, `Vx`=max, `VA`=default value, `Vz`=suffix), `cJ.java` (`WE`=default boolean, `WF`=getter), `cw.java` (`Tz()`=boolean toggle child, `TC`=getter), `cv.java` (`Tm(int)`), `cu.java` (toggle under a group), `cB.java` (`Vf(Supplier<Boolean>)` = visibility supplier).

| field | label | type | exact builder chain | gates |
|---|---|---|---|---|
| `WeTaM` | **Mouse Buttons** | group `cv` | `new cv(this, mr.clS([77,111,117,115,101,32,66,117,116,116,111,110,115])).Tm(1)` | parent of the two click toggles |
| `MVcap` | **Left Click** | toggle `cw` under `Mouse Buttons` | `new cw(this.WeTaM, mr.clS([76,101,102,116,32,67,108,105,99,107])).Tz()` | gates `OHuMF` via `OHuMF.Vf(this.MVcap::TC)` |
| `zUyjt` | **Right Click** | toggle `cw` under `Mouse Buttons` | `new cw(this.WeTaM, mr.clS([82,105,103,104,116,32,67,108,105,99,107])).Tz()` | gates `uuTCc` via `uuTCc.Vf(this.zUyjt::TC)` |
| `bunVK` | **Click Pattern** | group `ct` | `new ct(this, mr.clS([67,108,105,99,107,32,80,97,116,116,101,114,110]))` | holds 8 per-pattern `cu` toggles (below) |
| `OHuMF` | **Left CPS** | double `cC` | `.Vy(1.0).Vw(1.0).Vx(20.0).VA(12.0).Vz((String)((Object)" CPS"))` | visible while `Left Click` on |
| `uuTCc` | **Right CPS** | double `cC` | `.Vy(1.0).Vw(1.0).Vx(20.0).VA(12.0).Vz((String)((Object)" CPS"))` | visible while `Right Click` on |
| `YfhNn` | **Randomize** | boolean `cJ` | `new cJ(this, mr.clS([82,97,110,100,111,109,105,122,101])).WE(true)` | — |
| `ybxcg` | **Simulate Exhaust** | boolean `cJ` | `new cJ(this, mr.clS([83,105,109,117,108,97,116,101,32,69,120,104,97,117,115,116])).WE(false)` | — |
| `akhNQ` | **Allow Breaking Blocks** | boolean `cJ` | `new cJ(this, mr.clS([65,108,108,111,119,32,66,114,101,97,107,105,110,103,32,66,108,111,99,107,115])).WE(true)` | — |
| `sxweB` | **Inventory** | boolean `cJ` | `new cJ(this, mr.clS([73,110,118,101,110,116,111,114,121])).WE(false)` | gates `aVMzs` via `aVMzs.Vf(this.sxweB::WF)` |
| `aVMzs` | **Randomize Speed** | boolean `cJ` | `new cJ(this, mr.clS([82,97,110,100,111,109,105,122,101,32,83,112,101,101,100])).WE(true)` | visible only while `Inventory` on |
| `ipOaN` | **Conditions** | group `cv` | `new cv(this, mr.clS([67,111,110,100,105,116,105,111,110,115]))` | parent of the two condition toggles |
| `SWful` | **Holding Weapon** | toggle `cw` under `Conditions` | `new cw(this.ipOaN, mr.clS([72,111,108,100,105,110,103,32,87,101,97,112,111,110]))` | — |
| `LbAPM` | **Not Using Item** | toggle `cw` under `Conditions` | `new cw(this.ipOaN, mr.clS([78,111,116,32,85,115,105,110,103,32,73,116,101,109]))` | — |
| (per-pattern) | *(8× pattern name, native)* | toggle `cu` under `Click Pattern` | `new cu(this.bunVK, mr.clQ(rf2.dft()))` for `rf2` in `kySvO` | select `wznPK` |

Note: `SWful`/`LbAPM` are constructed with **no default call** (unlike every `cJ` above) — their default state is the `cw`/`cv` constructor default, which is not visible in the Java `[uncertain]`.

Behavioral mapping (all `[inferred]`):
- `Left CPS` / `Right CPS` (1.0–20.0, step 1.0, default 12.0) are the per-button click rates; each feeds its scheduler (`guvrN`/`UjADv`) through `aKQ(scheduler, slider, button)` whenever it changes. The displayed suffix is `" CPS"`.
- `Randomize` (default on) perturbs click delays via the shared `java.util.Random` (`nextDouble`); `Randomize Speed` (default on, **only relevant inside Inventory mode** per the visibility wire) randomizes the slot-click pacing there.
- The 8 pattern toggles select the timing profile (`wznPK` → `re.deW(rf)`); the default profile is `rf.ElhZz` (the last enum constant). One of the 8 patterns is named by the pool-adjacent symbol `BfWtc` (first constant) — display strings for all 8 are native-only.
- `Holding Weapon` / `Not Using Item` gate clicks on the player's held item state; `Allow Breaking Blocks` gates block-targeted clicks; `Inventory` extends clicking into `HandledScreen` GUIs with per-slot filters `aKX`/`aKY` and screen hook `aKW`.
- All clicks are injected through `MouseHandlerAccessor.callOnButton` (see Runtime model — attack/use packet flow stays vanilla downstream).

## Unrecovered / uncertain

NEVER GUESSED — the following are explicitly not recovered:

1. **All click-timing math.** The CPS→delay conversion (how `Left CPS`/`Right CPS` 1.0–20.0 becomes `re`'s `(int,int)` delay pair — and what unit that pair is in: ticks, ms, or scheduler units), the `Randomize` jitter distribution, the `Randomize Speed` factor, and every `rb.fill(int[], re)` pattern profile are inside the VM interpreter (constant-blob mixing, `halt_baddata`-truncated jumptables). No formula can be stated numerically. The `(12,12)` ctor pair equaling the 12.0-CPS default is the only numeric anchor.
2. **`aKS(int)→int`** `[18c3460a0]` — pure int transform; likely the CPS↔scheduler-unit conversion helper, but its formula is virtualized.
3. **`AYQUN`/`OIxOu` (`int[]{-1,-1}`)**, **`HzZRg` (=1.0 double)**, **`bcgit`** — mutation sites and exact roles unknown. The 2-element shape matches `re`'s 2-column `rc` ring buffer, suggesting per-button delay/state rings, and `HzZRg = 1.0` a neutral multiplicative factor — inference from shape only.
4. **`aKU()`/`aKV()` ↔ condition-toggle mapping** — which of the two booleans implements `Holding Weapon` vs `Not Using Item` (or the hold-detection gate) is not decidable statically.
5. **`Simulate Exhaust` (`ybxcg`)** — no dependent settings, no pool symbol; behavior entirely virtualized (name suggests mimicking the exhaustion/attack-cooldown state, but that is a name-based reading, not evidence).
6. **Pool attribution**: `POOL[0x1272c,0x2f0]` is shared with `sixtwo.fo` (Anti Bot, key=12) — the entries `class_2684`/`method_11645` (`EntityS2CPacket.getEntity`), the `fo` field names (`xVFMx, YlLcN, PzVPu, ehxwR, SrySj, OiqRK, NErxJ, aLo, aLx, yUbEH`), and possibly `diT` are used by *at least one* member of the pool group; which call-sites belong to `fn` specifically is not decidable statically. `diT` as fn's click path is supported by it being the pool's only click-execution symbol and by fn having no packet classes, but remains `[inferred]`.
7. **`aKN`/`aKO`/`aKP` individual roles**, **`aKR()`**, **`aKW(HandledScreen)`** — private native subroutines; grouping with scheduler/settings fields in the pool suggests per-button drivers and the inventory hook, but no body survives.
8. **Exact activation gate** — registry says clicks fire "when holding attack key"; the state read (which key/action is sampled, and whether `Inventory` mode samples differently via `aKX`/`aKY`) is virtualized.
9. **`SWful`/`LbAPM` default state** — no `WE(...)`-style default call visible; `cw` constructor defaults not recoverable from Java.
10. **Click pattern display names** (all 8 `rf.dft()` strings) — native-only; `kySvO` order confirms `BfWtc` is first and `ElhZz` is the default selection.
11. Jumptable-dependent control flow inside every handler was truncated (`"Jumptable … did not pass sanity check"`, `halt_baddata`); additional branches may exist beyond those reconstructed here.