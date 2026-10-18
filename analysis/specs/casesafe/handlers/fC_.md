# Velocity (sixtwo.fC) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_fC.c` — 12 native handler stubs + 134 continuation blocks (`sixtwo_fC.c`, header: `handlers: 12 continuation blocks: 134 unresolved table targets: 0`).
- Structural: `analysis/specs/modules/fC.md` (3 settings, keybind 24, registry text "Changes player knockback").
- Java shell: `analysis/decompiled/payload-named/sixtwo/fC.java` (CFR; all behavior bodies declared `native`).
- Yarn mapping: `analysis/jars/yarn-1.21.11+build.6.tiny` — `method_5771` = `Entity.isInLava()Z` (line 46990), `method_73085` = `EntityVelocityUpdateS2CPacket.getVelocity()Lnet/minecraft/class_243;` (line 151923), `class_2743` = `net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket` with field `field_61887` = `velocity` (`Vec3d`).
- Event type: `analysis/decompiled/payload-named/sixtwo/gL$tk.java` — `gL$tk extends gL` wraps a received `Packet<?>` plus its `PacketListener` (client packet-receive event). `gL extends hH` (event base, Java bus per `00-framework.md`).
- Scheduler: `analysis/decompiled/payload-named/sixtwo/iU.java:30` — `iU.bwT(Runnable, long, long, int, TimeUnit, Predicate<T>, T) → CompletableFuture<Void>` (static native; `ScheduledExecutorService WeddI` backing field).

**Runtime architecture constraint (governs everything below).** Every behavior handler is VM-interpreted: the stub performs `BLOB_DECRYPTOR` on a shared constant-pool window, `ExceptionCheck`, then dispatches through an indirect jumptable into the payload runtime loop (`FUN_190ddce00`, `FUN_190ddfc90`, `FUN_190dd72e0` — runtime helpers, not analyzed per instructions). The "continuation blocks" are (a) single-JNI-op micro-trampolines that tail-jump back via `(*_DAT_xxx)()`, and (b) opaque-constant decryptor noise (`func_0x00018af81ea0` / `func_0x00018af7ae20` mixing over `_DAT_18327fxxx` state). Control flow between blocks is lost (`halt_baddata` jumptable fragments). Consequently: *which JVM operations each handler performs* is recoverable (pool window + trampoline inventory); *exact arithmetic and branch order* is not, except where a concrete double op survived (one `dadd` — see aSy).

## Runtime model

- **Intercepted packets: `EntityVelocityUpdateS2CPacket` (class_2743) only.** The class pool references exactly one MC packet type: `sixtwo/fC.java` imports it, both pool windows carry `method_73085` (`getVelocity`) and the accessor string `mixin/accessors/ClientboundSetEntityMotionPacketAccessor` (Mojang name of class_2743; accessor mutates `velocity`/`field_61887` via `setMovement`). **No `ExplosionS2CPacket` reference exists anywhere in the pool or imports** — this module has no explosion path; "explosion vs knockback" branching of other Velocity clones does not apply here.
- **Event entry:** `@hG public native void aSw(gL$tk)` `fC.java:88` — the Java packet-receive event dispatches into `aSw` for every received packet. An `IsInstanceOf` trampoline `[18af318d3]` in `aSw`'s reachable region performs the packet-type filter (consistent with `event.packet() instanceof EntityVelocityUpdateS2CPacket`).
- **Disable In Fluid:** `aSw`'s pool window (POOL[0x14179,0x326]) lists, in order: `pltDm` (the `cJ` boolean setting field) → `method_5771` (`Entity.isInLava`) → `bwT` (+ its descriptor `(Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture;`). Interpretation: the fluid guard evaluates the `pltDm` setting against `isInLava()` **before** any delayed handling; only `isInLava` is referenced — no `isInWater`-equivalent intermediary appears, so "Fluid" is implemented as lava (at least; nothing else is provable).
- **Packet delay/holding:** `aSw` references `iU.bwT` — a scheduled delayed task `bwT(Runnable task, long, long, int, TimeUnit, Predicate<T> cancel-predicate, T)` returning `CompletableFuture<Void>`. The delay quantities (the two `long`s / `int` / `TimeUnit`) and the predicate's cancel condition live in VM bytecode — unrecovered (see Uncertain). The `Runnable` side of the delay leads back into `aSy`, which performs the actual velocity rewrite.
- **Rewrite path (aSy):** reads the two numeric settings' double values (`GetDoubleField` trampolines ×2 `[18af54e0f]`, `[18af54f45]`), calls `packet.getVelocity()` (`method_73085`) to obtain the `Vec3d`, computes modified components through the helper `aSx(DDI)D`, and writes the result back into the packet object via the mixin accessor `setMovement` (`CallVoidMethodA` trampoline `[18af34841]` in the handler region). The packet is mutated **in place**; there is no packet re-creation (`AllocObject` trampoline `[18af3561c]` exists in the region but is equally consistent with `Double` boxing during the math; attribution to packet construction is NOT claimed).
- **Percentage semantics:** `Horizontal`/`Vertical` are percentage sliders (0–100, default 100, suffix " %"). Default 100/100 = identity (vanilla knockback passes through). Exact reduction formula is inside VM bytecode; only one concrete double operation survived anywhere in the corpus: a single `dadd` in `aSy`'s region `[18af54f88]`: `dStack_68 = unaff_XMM6_Qa + in_stack_128` followed by the VM-step `FUN_190ddfc90`. No `dmul`/`ddiv` block is statically visible — the percentage math is executed inside the interpreter.

## Per-handler semantics

### `_fa31f22af70cbdf56e21b1052cda26bc()V` — static init `[18af382a0]`
Infra. Decrypts pool entry POOL[0x226,0xd] (`"...ng/String; | <"` fragment of `java/lang/String`) and branches on `ExceptionCheck` via jumptable. Initializes the class's VM state (seeds the static caches used by `aSA/aSB/aSE`; Java shell shows clinit seed `sLnpv ^ 106381621914446L`, `fC.java:22`). No module behavior.

### `aSA([B)String` — byte-array string decoder `[18af55340]`
Infra. Single guarded branch (`param_3 == 0` jumptable `[18af553e3]`); body is trampoline-dispatched. Byte-array → String decryption helper for the constant pool. No module behavior.

### `aSB(IJ)String` — pool string decryptor `[18af7aeb0]`
Infra. ~500 lines of opaque-constant arithmetic (mixing via `func_0x00018af81ea0`, popcount-via-SWAR sequences, state at `_DAT_18328xxxx`). Resolves pool offset+key → decrypted `String`. No module behavior.

### `aSC(Lookup;MutableCallSite;String;[Object;)Object` — indy bootstrap (Object) `[18af81f30]`
Bootstrap for encrypted string/constant invokedynamic call sites. Infra.

### `aSD(Lookup;String;MethodType;)CallSite` — indy bootstrap (CallSite) `[18af82e20]`
Same family as `aSC`; produces `CallSite`s used by the Java shell for folded literals (`aSD<"p">(...)` at `fC.java:39/49`). Infra.

### `aSE(IJ)I` — pool int decryptor `[18af858e0]`
`aSB`'s int counterpart (array-length / constant decryptor used by `fC.java:29-67` builders). Infra. Region blocks `0xaf7d477`–`0xaf8577d` are decryptor continuation tails (`SetByteArrayRegion`, `GetArrayLength`, `ThrowNew`) — payload runtime, not behavior.

### `aSF(Lookup;MutableCallSite;String;[Object;)I` — indy bootstrap (int) `[18af90a80]`
Bootstrap twin of `aSC` returning `int`. Infra.

### `aSG(Lookup;String;MethodType;)CallSite` — indy bootstrap `[18af35590]`
Bootstrap used by the superclass construction call `gf.aZL(aSG<"v">(28172, 6153077312428651445L ^ sLnpv…), false, gh.xwjCw)` (`fC.java:24`) — resolves the module-name literal during `fC()` construction. Infra.

### `aSw(gL$tk)V` — packet-receive event handler `[18af2bc60]` **(behavior)**
- Stub decrypts POOL[0x14179,0x326]; relevant strings for this class, in pool order: `sixtwo/fC | sLnpv | aSz | pltDm | method_5771 | bwT | (Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture; | oUOJc | hXcoz | mixin/accessors/ClientboundSetEntityMotionPacketAccessor | method_73085 | setMovement | aSx | (DDI)D | aSy | (Lnet/minecraft/class_2743;DDD)V | rFUaB | jqBCR | aSB | LKrNn | aSA | MZPLF | rcPcu | LCHwy | aSE`. Strings after `aSE` (`sixtwo/fD … fF` + their field/method hashes) belong to the sequentially-adjacent VM programs of fD ("Uncharge Block"), fE ("No Miss"), fF ("Trigger Bot") — shared pool table, **not** fC behavior.
- Operations reachable in its block region `0xaf2bd35`–`0xaf349c0`: `ThrowNew` `[18af2f2ae, 18af300a1]`, `ExceptionOccurred` `[18af2f79f]`, `IsInstanceOf` `[18af318d3]`, `CallDoubleMethodA` `[18af346cb]`, `CallVoidMethodA`+`ExceptionCheck` `[18af34841]`, VM-loop tails (`FUN_190ddce00`, `(*_DAT_*)()`).
- Reconstructed contract: for each received packet event → filter to `EntityVelocityUpdateS2CPacket` (`IsInstanceOf`) → if `pltDm` (Disable In Fluid) enabled and `player.isInLava()` (`method_5771`) → leave packet untouched (pass-through) → otherwise obtain the three velocity components and either call `aSy(packet, dx, dy, dz)` immediately (`CallVoidMethodA`) or hand the invocation to the delayed scheduler `iU.bwT(...)` with a cancellation predicate; `CallDoubleMethodA` is consistent with a numeric-setting getter or a `Vec3d` component fetch in the delay path.
- Event cancellation flag: not observable in the recovered blocks; whether vanilla application of the (mutated) packet is additionally suppressed through the event object is unproven (see Uncertain).

### `aSx(DDI)D` — per-axis percentage transform `[18af349c0]` **(behavior)**
- Stub decrypts the same POOL[0x14179,0x326] window (shared with `aSw`).
- Pure-function helper: two doubles + int in, double out. Region blocks `0xaf34a37`–`0xaf37a24` contain only guards/VM tails (`ThrowNew` `[18af34c49]`, `ExceptionCheck` `[18af34d99, 18af34e2f, 18af36e76]`, `AllocObject` `[18af3561c]`, `CallObjectMethodA` `[18af3706c]`, `swi(3)` int3 traps). **No arithmetic block is recoverable** — the formula executes in the VM interpreter.
- Signature interpretation (constrained, not proven): called from `aSy` per velocity component; the `int` most plausibly discriminates axis (horizontal vs vertical, selecting `oUOJc` vs `hXcoz`) or entity/state id. The percentage applied is one of 0.0–100.0 read from the settings. Identity at 100.0 is implied by the default settings and the module's purpose, not by recovered code.

### `aSy(EntityVelocityUpdateS2CPacket, D, D, D)V` — velocity rewrite `[18af54690]` **(behavior)**
- Stub decrypts POOL[0x14240,0x327]; strings: `/CompletableFuture;`(tail of bwT descriptor) `| oUOJc | hXcoz | mixin/accessors/ClientboundSetEntityMotionPacketAccessor | method_73085 | setMovement | aSx | (DDI)D | aSy | …`. Notably `pltDm`/`method_5771`/`bwT` are *outside* this window — the fluid check and scheduling belong to `aSw` only; `aSy` is the pure rewrite stage.
- Operations in region `0xaf54417`–`0xaf56xxx`: `IsInstanceOf` `[18af54707]`, `ExceptionCheck` guards `[18af54738, 18af5478a, 18af54deb, 18af553e6]`, `ThrowNew` `[18af548d7]`, **`GetDoubleField` ×2** `[18af54e0f, 18af54f45]`, **one `dadd`** `[18af54f88]` (`dStack_68 = unaff_XMM6_Qa + in_stack_128` → `FUN_190ddfc90` VM step), `GetArrayLength` with signed jumptable `[18af55439]`. Blocks `0xaf5623e`+ are decryptor noise.
- Reconstructed contract: read `Horizontal` (oUOJc) and `Vertical` (hXcoz) raw double values (the two `GetDoubleField`s; direct field access on the `cA` wrappers rather than a getter call), fetch `packet.getVelocity()` (`method_73085` → `Vec3d`), pass each component through `aSx(D,D,I)D` (the surviving `dadd` is consistent with a `value + delta`-style combination step of that transform), and store the resulting `Vec3d` back via `setMovement` on the accessor mixin (`CallVoidMethodA` family of trampolines; `setMovement` sets `field_61887 velocity`). `IsInstanceOf` here most plausibly re-validates packet/argument type in the delayed path. `ThrowNew` guards signal failure paths for missing field/method resolution (obfuscator-injected, not user-visible behavior).

### `aSz(MatchException)MatchException` — exception passthrough `[18af552b0]`
Returns `param_3` verbatim. Synthetic `MatchException` rethrow helper from switch-on-string desugaring. Infra.

## Settings → behavior mapping

| field | setting | type / builder chain (verbatim from module spec) | behavior role |
|---|---|---|---|
| `oUOJc` | `Horizontal` | `cA`: `.UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %")` — step 1.0, min 0.0, max 100.0, default 100.0, suffix `%` | Percentage applied to the **horizontal** (x/z) components of the intercepted `EntityVelocityUpdateS2CPacket` velocity, via `aSx`; read in `aSy` region (`GetDoubleField` `[18af54e0f]`/`[18af54f45]`). 100.0 default ⇒ knockback untouched. |
| `hXcoz` | `Vertical` | `cA`: identical chain — step 1.0, min 0.0, max 100.0, default 100.0, suffix `%` | Percentage applied to the **vertical** (y) component, via `aSx`. |
| `pltDm` | `Disable In Fluid` | `cJ`: `.WE(false)` — default false | When enabled, skip modification while `player.isInLava()` (`method_5771`) — evaluated in `aSw` ahead of the delay/rewrite path. Only lava is referenced; no other fluid predicate exists in the pool. |

Static VM-state fields (no user-facing behavior): `sLnpv` (long seed), `LKrNn`/`rFUaB` (`String[]` cache), `jqBCR`/`LCHwy` (`Map` caches), `rcPcu` (`long[]`), `MZPLF` (`Integer[]`) — backing stores for the `aSA/aSB/aSE` constant decryptors and `aSC/aSD/aSF/aSG` bootstraps.

## Unrecovered / uncertain

1. **Exact `aSx` formula.** The horizontal/vertical percentage math runs inside the VM interpreter; no `dmul`/`ddiv`/`dsub` block is statically visible. The only recovered double op is one `dadd` `[18af54f88]`. Do NOT guess `(v * pct / 100)` — the multiplication is not evidenced.
   **2026-10-17 (wave-1 static re-verify B):** the `UI(100.0, 100.0)` pair is
   degenerate — the default draw is exactly 100.0 (identity); the formula itself
   remains unevidenced.
2. **`aSx` argument roles.** Which of `(double,double,int)` is the input component vs a secondary operand, and what the `int` selects (axis id vs entity/mode id), is unrecovered.
3. **Delay amounts.** `iU.bwT`'s `long, long, int, TimeUnit` arguments (delay, period/offset, ...) are in VM bytecode. Packet-hold duration is unknown; a zero-delay identity use cannot be excluded.
4. **Cancellation predicate of `bwT`.** What `Predicate<T>` tests (e.g., module toggled off, player state changed, newer packet arrived) and what `T` is — unrecovered.
5. **Event cancellation vs in-place mutation.** Whether the packet event is additionally cancelled (suppressing vanilla handling of the original values) or the mutated packet alone is applied is not observable in the recovered blocks (`CallVoidMethodA` `[18af34841]` could be either the `aSy` call or an event-flag setter).
6. **Entity filter.** Whether the packet's `entityId` is checked against the local player (or any filter at all) before rewriting is not evidenced; the `IsInstanceOf` trampolines prove only type checks.
7. **Fluid coverage.** Only `isInLava` appears; whether "Disable In Fluid" also covers water through a path that never names its method (e.g., a shared predicate object) is unprovable from this corpus.
8. **Ordering of fluid check vs scheduling.** Pool order (`pltDm`, `method_5771`, `bwT`) suggests check-before-schedule, but block-level control flow is lost.
9. **`AllocObject` `[18af3561c]`** may be `Double` boxing inside the math, `Vec3d` construction, or infra; not attributable.