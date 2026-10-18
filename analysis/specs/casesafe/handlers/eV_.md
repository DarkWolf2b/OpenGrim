# Auto Crystal (sixtwo.eV) — handler-derived behavior spec

Derived from `analysis/ghidra/handlers-stitched/sixtwo_eV.c` (38 native handlers +
415 continuation blocks), cross-checked against `analysis/decompiled/payload-named/sixtwo/eV.java`
(CFR), `analysis/specs/modules/eV.md`, `analysis/specs/00-framework.md`, the Yarn tiny
map (`yarn-1.21.11+build.6.tiny`) and `analysis/decrypted/full-dump.jsonl`.

## Evidence base

| Source | Quality | Notes |
|---|---|---|
| Native handlers (38) | trampolines | Every module handler decompiles to: `BLOB_DECRYPTOR` call decrypting the class constant-pool blob, one `JNI->ExceptionCheck` guard, then an indirect jump through a jumptable (`WARNING: Jumptable ... did not pass sanity check`). The real bytecode of every method is emitted by the j2cc payload runtime — **no placement math, damage math, or packet-sequencing code survives statically** for this class. |
| Continuation blocks (415) | three kinds | (a) CP-decrypt arithmetic on the `_DAT_1832baXXX` global scratch area via mixing fn `func_0x...eef50` (e.g. `[18b8c5414]`, `[18b8c55c0]` — 300+ lines each, pure obfuscated constant derivation); (b) loader/VM bootstrap blocks around `FUN_190ddce00` / `FUN_190dd72e0` / `FUN_190dd9df0` / `FUN_190de6cb0` (payload runtime, not analyzed); (c) truncated tails ending in `halt_baddata` / `(*_DAT_xxx)()` after `unaff_RSI`-based JNI vtable calls. |
| `aEt(IJ)Ljava/lang/String;` `[18b8eefe0]`, `aEw(IJ)I` `[18b8f96e0]` | decryptors | The per-class invokedynamic constant decryptors (bsm names `"a"` = string, `"l"` = int). Bodies are mango-style rolling-arithmetic key derivation plus `rdtsc` anti-trace noise (`FUN_18b90d9fa` ≈ 190 `rdtsc` calls + `NewLongArray`/`NewString` — cache priming over static `oMAUs long[]` / `fCNWh Integer[]`). Anti-trace noise only; not behavior. |
| CFR Java source | structural only | All 11 settings + 3 `mT` timers + state fields visible; all bodies native. |

Behavior below is therefore **contract-level**: it reconstructs the module's observable
surface (settings, timers, Minecraft symbols touched, event wiring) and explicitly marks
everything else unrecovered. Per `00-framework.md`, the shared blob `POOL[0xfbfb,0x2ab]`
is a constant-pool region shared by the combat-module cluster (`sixtwo/eQ`, `sixtwo/eV`,
`sixtwo/eX` Anchor Macro, `sixtwo/eW` Auto Hit Crystal all appear in it), so symbol
attribution to eV specifically is approximate.

## Runtime model

What can be stated from the CP blob + Java fields:

1. **Place action** — the blob references `net/minecraft/class_2885` =
   `PlayerInteractBlockC2SPacket` with constructor signature
   `(Lnet/minecraft/class_1268;Lnet/minecraft/class_3965;I)V` =
   `new PlayerInteractBlockC2SPacket(Hand, BlockHitResult, int sequence)`.
   Crystal **placement** is therefore sent as a vanilla use-block packet carrying a
   `Hand` (item-dependent, cf. `Items.END_CRYSTAL`, `field_8301`), a `BlockHitResult`
   targeting a `BlockPos` (`class_2338` also in blob), and the vanilla anti-desync
   `sequence` int.
2. **Break action** — blob references `net/minecraft/class_1511` =
   `EndCrystalEntity`. Crystal **attack** targets spawned `EndCrystalEntity` instances
   (the attack packet class itself is *not* in the recovered blob region).
3. **Dimension-change reset** — blob references `method_8597` = `WorldView#getDimension()`
   returning `class_2874` = `DimensionType`, and eV stores `DimensionType DcPJe`
   (`eV.java:47`). The runtime keeps the last-seen dimension type and (the reset
   routines `aDR`/`aDS` being blob-adjacent to `DcPJe`/`MuaJV`) reinitializes per-world
   state — placed-position cache, timers, tracked crystal id — when the dimension changes.
4. **Sequencing / timings** — three `mT` millisecond timers (`eV.java:218-220`):
   - `tOCyA = mT.cpA()` — timer **not** started at construction (`cpA` = `new mT(false)`).
   - `BjiFk = mT.cpz()`, `qpZMv = mT.cpz()` — timers **started** at construction.
   The natural (behaviorally unverified) assignment is place/break/aux timers fed by
   `Place Delay` / `Break Delay`. `mT.cpD(ticks)` = `elapsedMs >= ticks * fCqJQ`, where
   `fCqJQ` is a DES-decrypted per-class constant — the " ticks"-suffixed delays are
   checked against a ms-per-tick quantum (vanilla is 50 ms/tick; `fCqJQ`'s value was
   **not** recovered — do not assume). `mT.cpE(ms)` = check-and-reset; `cpB()` = reset.
5. **Target filtering** — five static synthetic predicates
   `aEj/aEk/aEl/aEm/aEn (Lnet/minecraft/class_742;)Z` over `AbstractClientPlayerEntity`
   exist; their virtualized bodies are unrecovered (candidate roles: alive-check,
   self-exclusion, range/friend checks), see §Unrecovered.
6. **Events** — two `@hG` listeners: `aDO(gH.th)` and `aDP(gH.ti)` (`eV.java:254,267`).
   `gH$th`/`gH$ti` are empty marker event classes extending the bus event base `gH`.
   `th` is the near-universal per-tick workhorse event across all modules (e.g. `qL.dbN`
   runs module tick logic from it at `mw.CRITICAL`); `ti` is rarer (eV, dE, cY — in cY
   it drives a per-tick reset of rotation state). The precise th/ti phase split
   (pre-tick vs post-tick vs frame) is not statically recoverable; the bus is
   pull-dispatched by the native layer.
7. **Kill-pause subsystem** — `Stop on Kill` (IXgwi) + `Stop Time` (HYxjn): on kill
   detection the module pauses activity for the `Stop Time` duration;
   `HYxjn.Vf(this.IXgwi::WF)` (`eV.java:222`) makes `Stop Time` visible/enabled only
   while `Stop on Kill` is on.

## Per-handler semantics

All module handlers share the trampoline prologue — decrypt blob
`POOL[0xfbfb,0x2ab]` (the combat-cluster constant pool: BlockPos / Hand /
BlockHitResult / PlayerInteractBlockC2SPacket / EndCrystalEntity / Items.END_CRYSTAL /
Items.RESPAWN_ANCHOR / WorldView#getDimension plus the field & method names listed
below), then `JNI->ExceptionCheck`, then indirect dispatch. The exception-check result
selects between two jumptable slots — exception-CF hardening, not behavior. Only deltas
per handler are listed.

### Lifecycle / events

- `_074e36ec2dda231f1c0ea02d763eb3cf()V` `[18b908ee0]` — class-init native; decrypts
  `POOL[0x226,0xd]` (`...ang/String; | <` — string-pool patch), ExceptionCheck, dispatch.
  Bootstrap noise only.
- `aDO(gH.th)V` `[18b89a450]` — **primary tick handler** (`@hG`, default priority).
  Blob-adjacent names: `aDJ`, `aDy`, `aDL`, `aDK`, `aEp`, `aEr`, `aEZ`, `aDS`, `aDT`,
  `aDQ`, `aDR`, `aEB`, `aFq`, `bDI`, `bBq`, `sixtwo/eX`, `sixtwo/eW`, `class_2885`
  ctor, `field_8301`, `field_23141`, `method_8597`, and eV's own fields `EbZHv NdPsx
  IXgwi tOCyA HYxjn BjiFk nAtgG XtwRQ qpZMv SYXBX DcPJe MuaJV`. This is the handler
  that consults every setting, all three timers, and both item constants — i.e. the
  place/break engine. Body unrecovered beyond that symbol set.
- `aDP(gH.ti)V` `[18b8a45e0]` — secondary event handler, identical trampoline +
  identical blob. Role unrecovered (phase-2 tick / render / reset; cf. §Runtime model 6).
- `aDR()V` `[18b8bba00]` — private reset-style routine (blob-adjacent to `aDQ`/`aDS`).
- `aDS()V` `[18b924fa0]` — private reset/init-style routine, same blob.
- `aEo(Z)V` `[18b8bb4c0]` — static setter for a static gate flag; invoked from the
  constructor as `aEo(true)` iff `iS.bwL() == null` (`eV.java:222-240`), i.e. only when
  the client singleton accessor is not yet available. Framework-level.
- `aEp()Z` `[18b8bb640]` — static gate getter, read once in the constructor (`bl3`).
- `aEq()Z` `[18b8bb7d0]` — static gate getter, referenced by name from the shared blob
  (reachable cross-module).

### Setting/state accessors (pure field getters — jumptable on `param_2 == 0`, no blob decrypt)

| Handler | Image | Returns | Field |
|---|---|---|---|
| `aDU` | `[18b93eb40]` | cJ | `NdPsx` Activate On Key |
| `aDV` | `[18b93ed40]` | cD | `EbZHv` Activation Key |
| `aDW` | `[18b93ef40]` | cJ | `UVCdF` Spoof CPS |
| `aDX` | `[18b93f140]` | cA | `nAtgG` Place Delay |
| `aDY` | `[18b8a7b20]` | cA | `SYXBX` Break Delay |
| `aDZ` | `[18b8a7d20]` | cJ | `LtwQn` No Count Glitch |
| `aEa` | `[18b8a7f20]` | cJ | `APBzk` No Bounce |
| `aEb` | `[18b8a8120]` | cJ | `IXgwi` Stop on Kill |
| `aEc` | `[18b8a8320]` | cC | `HYxjn` Stop Time |
| `aEd` | `[18b8a8520]` | cJ | `XtwRQ` Damage Tick |
| `aEe` | `[18b8a8720]` | mT | `tOCyA` timer 1 |
| `aEf` | `[18b8a8920]` | mT | `BjiFk` timer 2 |
| `aEg` | `[18b8a8b20]` | mT | `qpZMv` timer 3 |
| `aEh` | `[18b8a8d20]` | DimensionType | `DcPJe` |
| `aEi` | `[18b8b4ed0]` | int | `MuaJV` (getter; int runtime state — semantics unverified) |

### Target predicates (all static synthetic, `(Lnet/minecraft/class_742;)Z`, bodies virtualized)

- `aEj` `[18b8b50d0]`, `aEk` `[18b8b5c50]`, `aEl` `[18b8b63b0]`, `aEm` `[18b8b6a40]`,
  `aEn` `[18b8baac0]` — five distinct `AbstractClientPlayerEntity` filters. No two
  share a dispatch target (distinct jumptables `UNK_181c16590 / 16a50 / 16d20 / 16fd0 /
  18290`), so five genuinely separate predicates exist; which check each performs is
  **unrecovered**.

### Obfuscation machinery (no module behavior)

- `aEr(MatchException)MatchException` `[18b8bb970]` — returns `param_3` unchanged;
  decompiler-hostile exception-CF trampoline.
- `aEs([B)Ljava/lang/String;` `[18b8c5250]` — byte[]→String decode helper.
- `aEt(IJ)Ljava/lang/String;` `[18b8eefe0]` — string decryptor, bsm `"a"`. Decrypted
  values in `full-dump.jsonl`: index 357 → `" ticks"`, index 966 → `" ticks"`.
- `aEw(IJ)I` `[18b8f96e0]` — int decryptor, bsm `"l"` (202 decrypted ints for eV in
  `full-dump.jsonl`: setting-name char codes, `-999` default bind, array lengths).
- `aEu(Lookup,MutableCallSite,String,Object[])Object` `[18b8f5d30]` and
  `aEx(...)I` `[18b9051c0]` — MutableCallSite relays for the above.
- `aEv(Lookup,String,MethodType)CallSite` `[18b8f6c20]` — invokedynamic bootstrap for
  strings; decrypts `POOL[0x857,0x26]` (`...odHandle; | iUrOn | Ljava/util/Map; | java/l...`
  — MethodHandle/Map machinery names).
- `aEy(...)` — invokedynamic bootstrap for ints (declared native in Java; shares
  machinery with `aEw`).

### Shared-blob symbol census (`POOL[0xfbfb,0x2ab]`, verbatim order)

```
t/class_2338; | KALVf | HyfoP | QgLWU | sixtwo/eV | aEq | uOhjt | QSxPs | CrAYX | aDJ |
aDy | net/minecraft/class_2885 | (Lnet/minecraft/class_1268;Lnet/minecraft/class_3965;I)V |
rKPMZ | oZHIK | field_23141 | ISkoE | bDI | (Lnet/minecraft/class_2338;)Z | aDL |
sixtwo/eX | pyZOh | aDK | REuKF | aFq | aEp | aEr | aEZ | ()Lsixtwo/cA; | UO | EbZHv |
NdPsx | IXgwi | tOCyA | HYxjn | aDS | bBq | BjiFk | nAtgG | XtwRQ | aDT | sixtwo/eW |
qpZMv | SYXBX | aEB | aDQ | aDR | DcPJe | Lnet/minecraft/class_2874; | field_8301 |
method_8597 | ()Lnet/minecraft/class_2874; | net/minecraft/class_1511 | MuaJV | d
```

Translations: `class_2338`=`BlockPos`; `class_1268`=`Hand`; `class_3965`=`BlockHitResult`;
`class_2885`=`PlayerInteractBlockC2SPacket`; `field_23141`=`Items.RESPAWN_ANCHOR`;
`field_8301`=`Items.END_CRYSTAL`; `class_2874`=`DimensionType`;
`method_8597 ()Lnet/minecraft/class_2874;`=`WorldView#getDimension()`;
`class_1511`=`EndCrystalEntity`. `(Lnet/minecraft/class_2338;)Z` is a BlockPos→boolean
check (helper `aDL`; not resolvable to a specific vanilla method from this blob). `UO`
is a zero-arg method near the `cA` numeric-setting names (value getter per
`00-framework.md` builder semantics). `REuKF` is eV's static long class-id, mixed in the
constructor as `REuKF ^ 0x2E936CD62CC3` (`eV.java:63`).

## Settings → behavior mapping

| Field | Name | Type | Verbatim builder | Behavior hook (inferred from wiring/blob, not verified) |
|---|---|---|---|---|
| `NdPsx` | Activate On Key | cJ (bool) | `.WE(false)` | gates `EbZHv`; `NdPsx` read by tick handler per blob |
| `EbZHv` | Activation Key | cD (bind/int) | `.VO((int)-999)` | `EbZHv.Vf(this.NdPsx::WF)` (`eV.java:221`) — keybind-activated mode |
| `UVCdF` | Spoof CPS | cJ | `.WE(false)` | click-rate spoofing of attack/use packets |
| `nAtgG` | Place Delay | cA (double) | `.UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks")` | step 1, min 0, max 10, default 0; gates placement via an `mT` timer (`cpD`-style, ticks × quantum) |
| `SYXBX` | Break Delay | cA | `.UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks")` | step 1, min 0, max 10, default 0; gates crystal attack |
| `LtwQn` | No Count Glitch | cJ | `.WE(false)` | vanilla crystal "count glitch" handling; body unrecovered |
| `APBzk` | No Bounce | cJ | `.WE(false)` | knockback handling; body unrecovered |
| `IXgwi` | Stop on Kill | cJ | `.WE(false)` | kill detection pauses module; visibility-parent of `Stop Time` |
| `HYxjn` | Stop Time | cC (double) | `.Vy(25.0).Vw(0.0).Vx(8000.0).VA(1000.0).Vz(" ticks")` | step 25, min 0, max 8000, default 1000; pause length after a kill (name recovered from decrypt ints: 83,116,111,112,32,84,105,109,101 = "Stop Time") |
| `XtwRQ` | Damage Tick | cJ | `.WE(false)` | per-tick damage re-evaluation; body unrecovered |
| `iexlJ` | Predict Id | cJ | `.WE(false)` | attack crystal by predicted entity id before spawn-confirm; pairs with int state `MuaJV`; body unrecovered |

Default bind = `-999` (unbound), decrypted directly from
`aEy(l, 20799, ...) = -999` (`full-dump.jsonl:8587`); module registry key = 28.

## Unrecovered / uncertain

Never guessed; listed as open items:

1. **All crystal math** — position scan order, damage-estimate function, self-damage
   guard, min-damage threshold, wall/place checks, rotation/face handling, packet
   sequencing, attack packet type. Every byte lives behind the j2cc virtualized
   dispatch; the stitched corpus contains zero arithmetic that is not CP-decryption.
2. **`MuaJV` (int)** — adjacent to `class_1511` in the blob, public getter `aEi`.
   Candidate semantics (tracked crystal id / cooldown / predicted id) are NOT verified.
3. **`gH.th` vs `gH.ti` phase split** — both marker classes are empty; dispatch is
   native. `th`=tick is strongly supported by cross-module usage; `ti` semantics
   (post-tick? frame?) unknown.
4. **The five `AbstractClientPlayerEntity` predicates** — existence and count (5) are
   solid; their individual criteria are not.
5. **`fCqJQ` (mT tick quantum)** — DES-decrypted in `mT.<clinit>`; likely 50 ms but the
   literal was not recovered, so " ticks" delays must be calibrated, not assumed.
6. **Blob symbol attribution** — `POOL[0xfbfb,0x2ab]` is shared with eQ/eX/eW;
   `Items.RESPAWN_ANCHOR` may belong to eX (Anchor Macro) rather than eV. The
   `(BlockPos)Z` helper and the owners of `aDJ/aDy/aDK/aEZ/aEB/aFq/bBq/bDI` are unknown.
7. **Statics `Swkzn`, `REuKF`, `Zznaj`, `LyZTD`, `IMfWo`, `XacZe`, `oMAUs`, `fCNWh`** —
   obfuscator infrastructure (class-id, decrypt caches, string arrays); not behavior.
8. **`aDR` vs `aDS`** — both no-arg private routines invoked from the blob's method-name
   region next to `aDQ/aDT`; likely reset/enable-disable pair, roles unresolved.
