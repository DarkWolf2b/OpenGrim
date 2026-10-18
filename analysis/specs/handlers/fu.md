# Criticals (sixtwo.fu) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fu.c` — 18 JNI handlers, 213 continuation blocks, 0 unresolved table targets but **20 jump tables missing from tables.json** (`0x1ca4740`, `0x1ca5c18`–`0x1ca5ca8`, `0x1ca5f78`–`0x1ca5fb8`, `0x1caba60`–`0x1caba78`). Same fragments, pre-stitch: `analysis/ghidra/continuations/sixtwo_fu_cont.c` (4821 lines).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/fu.java` (CFR) — every behavior body is `private native`; the constructor and all settings wiring are fully visible.
- Structural spec: `analysis/specs/modules/fu.md`; framework: `analysis/specs/00-framework.md`.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` — 34 `(IJ)I` ints + 6 `(IJ)Ljava/lang/String;` strings for `sixtwo.fu` (bsm `aQz`/`aQw`).
- Symbol translation: `analysis/jars/yarn-1.21.11+build.6.tiny` (tiny v2); pool slices re-resolved byte-exact with `analysis/tools/resolve_pool_blob.py`.
- Cross-references: `analysis/decompiled/payload-named/sixtwo/gg.java` (lifecycle), `sixtwo/mT.java` (stopwatch), `sixtwo/gM.java`, `sixtwo/hw.java`, `sixtwo/hw$tv.java`, `sixtwo/gH.java`, `sixtwo/gH$th.java`, `sixtwo/gL.java`, `sixtwo/gL$tj.java` (event carriers), `analysis/decompiled/bootstrap/mixin/accessors/LocalPlayerAccessor.java` (accessor mixin for `ClientPlayerEntity` internals).

### Recoverability caveat (read first)

Exactly like the sibling module `fa` (see `fa.md`), every behavior handler here is a *dispatcher stub*: it decrypts one constant-pool blob slice with `BLOB_DECRYPTOR(image-addr,resolved-ptr,len)`, calls `JNI->ExceptionCheck`, and tail-dispatches through a jump table into tiny continuation fragments that each perform a single JNI vtable call with `unaff_*` register state and end in `halt_baddata`-truncated indirect jumps ("Jumptable … did not pass sanity check"). The 20 unresolved tables mean **no Java-level bytecode body of any `fu` behavior method is linearly recoverable from this corpus**. All semantics below are tagged:

- `[decompiled]` — logic visible directly in the Java decompile or trivial decompile (identity return).
- `[slice]` — verifiable from the pool slice the handler decrypts (address-checked).
- `[inferred]` — inferred from descriptor + slice contents + framework contract; NOT from a recovered body.
- `[uncertain]` — cannot be attributed with confidence; do not encode as fact in the rebuild.

## Runtime model

### Identity and lifecycle

- Registry: `sixtwo.fu|Criticals|Makes it easier to crit|key=135|bind=-999` `[registry]`. The `key=135` value is the **module id**: the constructor calls `super(gf.aZL(aQz(15999, 2821600971313299072L ^ var1), false, gh.xwjCw))` and full-dump decrypts `aQz(15999,…)` = **135**; category `gh.xwjCw` = **Combat** (`analysis/port/reports/batch6.md`: `xwjCw=Combat`) — same category as fa (Auto X-Bow) and fv (Auto Armor) `[decompiled]`.
- Key-mix seed: `long var1 = BKGTH ^ 75494749283425L` (static long `BKGTH` = payload-decryptor state) `[decompiled]`.
- Enable = `aaj()` → base `gg.aaj()` is `hF.bdI(this)` (register listeners); disable = `YO()` → base `gg.YO()` is `hF.bdM(this)` (unregister) `[decompiled]`. Both overrides are native here, so any extra enable/disable side effects are VM-internal `[uncertain]`.

### Settings tree (all names byte-exact)

Decoded from the constructor int arrays via `full-dump.jsonl` (each `mr.clS(int[])` arg decrypts to ASCII code points):

- `Mode` (`ct` group, field `OZwTl`) with 4 exclusive options (`cu`, field → name):
  - `HWcZh` = **"Vanilla"** `[decompiled]`
  - `hWgcS` = **"Custom"**
  - `nImvb` = **"Packet"**
  - `oExgz` = **"Web Lag"** — built with the extra `.SY()` call `[decompiled]` (builder semantics unrecovered; plausibly a display/visibility flag `[uncertain]`)
- `Lag Delay` (`cA` numeric, field `LaROb`): `.UG(5.0)` step, `.UE(0.0)` min, `.UF(2000.0)` max, `.UI(100.0, 150.0)` default pair, `.UH(" ms")` suffix (string verified in full-dump: `aQw(29498,…)` = `' ms'`) `[decompiled]`. Per `00-framework.md`, `cA` holds a `MutablePair<Double,Double>`; `UI(100.0,150.0)` is most plausibly a **randomized default range 100–150 ms** `[inferred, uncertain]`.
- Five sub-groups **"Packet 1" … "Packet 5"** (`cH`, fields `pGiTh`, `GTOqc`, `fsosg`, `dCnGA`, `ASVuR`; names decoded: `pGiTh`="Packet 1", `GTOqc`="Packet 2", `fsosg`="Packet 3", `dCnGA`="Packet 4", `ASVuR`="Packet 5"), each via `.Wu(SendPacketN, GroundN, FullN, OffsetN)`:
  - `Send Packet N` (`cJ` boolean): defaults **true, true, true, false, false** (`PmsBY, cKQhx, FxYCf, TnuIy, NGzOC`)
  - `Ground N` (`cJ` boolean): defaults **true, false, false, false, false** (`BkSRE, KnAho, iIlaN, yYAVi, IiAXY`)
  - `Full N` (`cJ` boolean): defaults **true, true, false, false, false** (`RLDCA, TOKrl, LWIOL, Vzyof, xaWdH`)
  - `Offset N` (`cC` numeric slider, " blocks" suffix — full-dump `aQw(9087,…)`/`aQw(27949,…)` = `' blocks'`): `.Vy(0.01)` step, `.Vw(-1.0)` min, `.Vx(1.0)` max; defaults `kUuPI`=**0.0**, `TKJLd`=**0.0625**, `DfcnL`=**0.04535**, `yUhFU`=**0.0**, `IlDeC`=**0.0** `[decompiled]`.

### Visibility wiring (mode → settings)

- `this.LaROb.Vf(this.oExgz::SZ)` — **Lag Delay is shown/hidden by the "Web Lag" option** `[decompiled, inferred: Vf wires the value-change callback; SZ = option-selected accessor]`.
- `pGiTh/GTOqc/fsosg/dCnGA/ASVuR .Vf(this.hWgcS::SZ)` — **all five "Packet N" groups are shown/hidden by the "Custom" option** `[decompiled, inferred]`.

So the user-facing model is: `Mode=Vanilla|Custom|Packet|Web Lag`; Custom exposes 5 configurable sub-packets; Web Lag exposes the delay.

### Instance state

- `Queue<Packet<?>> bvNPi` = `new ConcurrentLinkedQueue<>()` — an outbound packet queue, filled/drained by native code `[decompiled]`.
- `mT qmOOk` = `mT.cpz()` — a **millisecond stopwatch, started at construction** (`mT` = `System.currentTimeMillis` stopwatch: `cpF()` elapsed, `cpC(ms)` = elapsed ≥ ms, `cpB()` reset) `[decompiled]`. With exactly one ms-denominated setting ("Lag Delay"), this stopwatch is almost certainly the Web-Lag hold timer `[inferred]`.
- `boolean HiBun`, `int zHVGe` — private flags/counters, roles unrecovered `[decompiled, uncertain]`.
- Statics `OPeMM`/`EsiEj` (`String[]`), `oYwxV`/`pFjbu` (`Map`), `wkefr` (`long[]`), `fJTkl` (`Integer[]`), `BKGTH` (`long`) — obfuscation/decryptor runtime, not module state `[decompiled]`.

### Events (payload bus `hH`; all 4 listeners bare `@hG` = priority `mw.NORMAL` default)

| handler | event type | event carrier contents |
|---|---|---|
| `aQl` | `gM` | empty marker event (per-frame/tick-ish; role shared by ~100 modules) `[inferred]` |
| `aQm` | `hw$tv` | **attack event**: `hw` carries the target `Entity` (`bdm()`); `hw$tv` adds a boolean flag defaulting to `oX.cLK()` with `dps()`/`dpt()` (read / set-true — a once/cancel latch) `[decompiled]` |
| `aQn` | `gH$th` | empty marker event (player-tick-ish; the most common listener type) `[inferred]` |
| `aQo` | `gL$tj` | **packet event**: `gL` carries `Packet<?>` (`bcf()`); `gL$tj` adds `ClientConnection` (`dpm()`) `[decompiled]` |

### Packet path (what can and cannot be claimed)

- The only Minecraft class in `fu`'s own pool region is `net/minecraft/class_2813` = **`ClickSlotC2SPacket`** (at heap offset `0x138fc`, interleaved between fu's own fields `DfcnL` and `iIlaN`) `[slice]`. **No `PlayerMoveC2SPacket` (`class_2828`) or any other packet class appears in the slice** — so packet construction, if present, goes through helper/reflective paths whose symbols are not in this window `[uncertain]`.
- `getYRotLast` [0x138c6] and `getXRotLast` [0x138de] are also interleaved inside runs of fu's own field names. They are the accessor-mixin methods on `ClientPlayerEntity` (`class_746`) exposing **`lastYawClient` (`field_3941`)** and **`lastPitchClient` (`field_3925`)** — the last *sent* rotation values (see `analysis/decompiled/bootstrap/mixin/accessors/LocalPlayerAccessor.java`) `[slice + decompiled]`. Rotation-spoof consumers (packet-mode crits need a yaw/pitch pair) fit this surface, but no construction site is recoverable `[inferred, uncertain]`.
- The `Queue<Packet<?>>` + `gL$tj` listener combination implies the module can intercept and re-inject/hold outbound packets (classic "lag" hold), but **which packets are held, for how long, and what is spoofed is not recoverable** `[inferred, uncertain]`.

## Per-handler semantics

Handler addresses (image base `0x180000000`); each behavior handler decrypts the class slice **`[0x13827, 0x318]`** unless noted.

### Framework / obfuscation machinery (no module behavior)

- **`_9a119123c9a8e162a81dc5f2c5ec9c0f()V` [18bbc64f0]** `[slice 0x226,0xd]` — native clinit stub; slice = `"ang/String;"` + `"<"` (resolves `java/lang/String` / `<init>` for the `Loader.doInit(fu.class)` path) `[decompiled]`.
- **`aQs(MatchException)MatchException` [18bc1ab60]** — decompiled body is `return param_3;` — identity rethrow for the Vineflower `MatchException` pattern `[decompiled]`.
- **`aQu(IJ)Ljava/lang/String;` [18bbad660] / `aQx(IJ)I` [18bbb7920]** — the invokedynamic **string/int constant-decrypt kernels** (descs match full-dump `aQw`/`aQz` entries). ~520/~540 lines of key-mixing over globals `uRam1832c7xxx`/`uRam1832c7dxx` with constants copied verbatim (e.g. `0xf3e7eb47ed9df771`, `0xa341eb4768b27455`, `0x52e6e305e11de121`, `0x84222325`, `0x7fff`, rotate pairs `<<0x2f|>>0x11`, popcount/`clz`-style bit tricks) and calls to the payload PRNG `func_0x18bbb3ee0`/`func_0x18bbc2740` (runtime machinery — do not analyze). Observable contract: `aQu(int off, long key) → String`, `aQx(int off, long key) → int` `[decompiled machinery]`.
- **`aQt([B)Ljava/lang/String;` [18bb834d0]** — byte-array→String decrypt trampoline (null-guard jump only; body in VM) `[decompiled stub]`.
- **`aQv(Lookup;MutableCallSite;String;[Object;)Object` [18bbb3f70] / `aQy(… )I` [18bbc27d0]** — empty decompiles; `MutableCallSite` re-bootstraps (indy cache invalidation) `[decompiled stub]`.
- **`aQw(Lookup;String;MethodType;)CallSite` [18bbb4e60] / `aQz(… )CallSite` [18bbc37e0]** `[slice 0x857,0x26]` — indy bootstraps; slice tokens `"odHandle;"` (tail of `Ljava/lang/invoke/MethodHandle;`), `"iUrOn"`, `"Ljava/util/Map;"`, `"java/l…"` — standard bootstrap plumbing `[decompiled machinery]`.

### Lifecycle

- **`aaj()V` [18bb7d990]** `[slice 0x13827]` — enable override (base = `hF.bdI(this)`). Slice additionally carries the module-base tick tokens (`Lsixtwo/gg;`, `baf ()Lsixtwo/gc;`, `aZg ()Lsixtwo/gd;`, `aZi (Lsixtwo/gd;)Lsixtwo/gc;`, `cnP (FFF)Lsixtwo/mG;` — shared with `YO`'s slice `[0x3806,0xbf]`, same tokens; cf. `fa.md` YO analysis). The `gc`/`gd` 2-state tick-gate and `mG` color construction are framework contract; any `fu`-specific enable behavior is VM-internal `[inferred, uncertain]`.
- **`YO()V` [18bb7e470]** `[slice 0x13827]` — disable/tick override (base = `hF.bdM(this)`). Same shared slice; behavior beyond listener removal is VM-internal `[uncertain]`.

### Behavior handlers (bodies VM-internal; role assignment from descriptor + wiring)

- **`aQm(hw$tv)V` [18bbe3960]** — `@hG` **attack-event listener**. Given the registry intent ("Makes it easier to crit") and the sibling evidence (Double Tap `eM` uses the same `hw$tv` event to re-attack its target), this is the crit trigger on attack of `var1.bdm()`; the `dpt()` latch (`hw$tv.VibZH`) is the mechanism by which an attack is consumed/modified. **Trigger conditions, which profile is fired, and whether the attack is modified, are inside the VM** `[inferred, uncertain]`.
- **`aQo(gL$tj)V` [18bbfb7b0]** — `@hG` **packet-event listener** (packet + `ClientConnection`). Combined with `Queue<Packet<?>> bvNPi`, `mT qmOOk`, and "Web Lag"/"Lag Delay", the natural role is outbound-packet interception/holding (and/or enqueueing spoofed packets). The only packet class in the slice is `class_2813` (`ClickSlotC2SPacket`) `[slice]` — either an instanceof filter target or an emitted packet type; **assignment not recoverable** `[uncertain]`.
- **`aQn(gH$th)V` [18bbf5a20]** — `@hG` player-tick-ish listener; natural roles: Web-Lag queue flush (when `qmOOk.cpC(Lag Delay)` elapses) and/or per-tick crit maintenance `[inferred, uncertain]`.
- **`aQl(gM)V` [18bbe3600]** — `@hG` bare per-frame/tick-ish listener; role unrecovered (its decompile is a two-way null-guard jump with no blob decrypt of its own) `[decompiled stub, uncertain]`.
- **`aQp(DZZ)V` [18bc04d80]** — the **per-profile crit executor**: `(double offset, boolean, boolean)`. The double is almost certainly the profile's `Offset N` (units: **blocks**, slider −1.0…1.0); the two booleans are two of the three profile toggles (`Send Packet N`, `Ground N`, `Full N`) — the third, if used, is read directly from the field inside the VM. **Exact parameter assignment, spoofed packet contents, and Y-offset arithmetic are not recovered** `[inferred, uncertain]`.
- **`aQq()V [18bc114e0]` / `aQr()V [18bc16ec0]`** — parameterless private workers. Continuation fragments around them (e.g. `[18bc04c03]`, `[18bc11274]`: `CallVoidMethodA(0x1f8)` + `ExceptionCheck(0x720)` then table dispatch; `[18bc093b5]`: `FUN_190ddfc90(env, …, 0xb809, 0x1b7a, 0xaa6)` string fetch + table dispatch) show only JNI-call tails. Roles unrecovered; plausible pair = flush-queue / apply-next-profile `[inferred, uncertain]`.

### Anti-trace noise

Exactly one `rdtsc` in the entire continuation corpus (`sixtwo_fu_cont.c` line 474 area), not adjacent to any state-dependent branch — anti-trace noise, as in sibling modules.

## Settings → behavior mapping

| setting | wrapper | decrypted name | default(s) | behavior link |
|---|---|---|---|---|
| mode group | `ct` `OZwTl` | **"Mode"** | — | parent of the 4 `cu` options `[decompiled]` |
| mode options | `cu` `HWcZh`/`hWgcS`/`nImvb`/`oExgz` | **"Vanilla" / "Custom" / "Packet" / "Web Lag"** | — | option selection drives visibility (`oExgz::SZ` → Lag Delay; `hWgcS::SZ` → the five "Packet N" groups) and selects the crit strategy in the VM `[decompiled wiring, inferred semantics]` |
| lag hold | `cA` `LaROb` | **"Lag Delay"** | step 5.0, min 0.0, max 2000.0, `UI(100.0, 150.0)`, suffix `" ms"` | paired with stopwatch `qmOOk`; consumed in Web Lag mode `[inferred, uncertain]` |
| profile toggles ×5 | `cJ` | **"Send Packet 1..5"** | T,T,T,F,F | per-profile gate in `aQp(DZZ)` `[inferred, uncertain]` |
| profile toggles ×5 | `cJ` | **"Ground 1..5"** | T,F,F,F,F | per-profile gate in `aQp(DZZ)` `[inferred, uncertain]` |
| profile toggles ×5 | `cJ` | **"Full 1..5"** | T,T,F,F,F | per-profile gate in `aQp(DZZ)` `[inferred, uncertain]` |
| profile offsets ×5 | `cC` | **"Offset 1..5"** | step 0.01, −1.0…1.0, defaults **0.0 / 0.0625 / 0.04535 / 0.0 / 0.0**, suffix `" blocks"` | the `D` argument of `aQp(DZZ)V` — a Y (vertical) offset in blocks applied to the spoofed position `[inferred, uncertain]` |

Note the default 0.0625 = **1/16 block** (the vanilla critical-hit Y requirement) and 0.04535 — copied verbatim from the constructor `[decompiled]`.

## Unrecovered / uncertain

The following are explicitly NOT recoverable from this corpus. Do not guess them in the clean-room rebuild; pick documented designer choices and record divergence in PARITY.md:

1. **All behavior-method bytecode bodies.** 18 handlers are dispatcher stubs into the thread-code VM; 213 continuation fragments could not be stitched (20 jump tables unresolved).
2. **What each mode actually emits.** Vanilla / Custom / Packet / Web Lag crit strategies, and the exact C2S packets (types, coordinates, onGround flags, rotation source) — no packet-construction symbols survive in `fu`'s slice beyond `class_2813` (`ClickSlotC2SPacket`) and the `ClientPlayerEntity` rotation accessors.
3. **Role of `class_2813` (`ClickSlotC2SPacket`)**: instanceof filter in `aQo(gL$tj)` vs. emitted packet vs. shared-heap neighbor token — unresolved.
4. **`aQp(DZZ)V` parameter assignment** — which two of {Send Packet N, Ground N, Full N} map to the two booleans, and whether the third is read inside.
5. **Semantics of "Ground N" and "Full N"** (names decoded; effect unrecovered).
6. **Web Lag mechanics** — which packets are held, in what order they are released, whether `Lag Delay` is a fixed wait (100–150 ms default range) or a per-packet delay, and how `qmOOk` is reset.
7. **Roles of `HiBun` (boolean) and `zHVGe` (int)** and the division of work between `aQq`/`aQr`/`aQn`/`aQl`.
8. **The `.SY()` builder on the "Web Lag" option** and the exact semantics of the `cA.UI(100.0, 150.0)` pair (fixed default vs. randomized range).
9. **Which profile is selected when** (all five on attack? first enabled? rotation over profiles?) and any interaction between profiles 1–5.
10. **Tokens `Vv`, `jqCWG`, `cJK`, `(I)Lsixtwo/oI;`, `aQi`, `bBs`, `cpQ`** at the edges of `fu`'s slice window — they belong to neighboring classes' regions (`oG` window starts at `0x137c5`; `fv`'s windows start at `0x13965`/`0x139a4`); none is attributable to `fu`.
