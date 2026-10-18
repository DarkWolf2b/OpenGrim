# dQ — Hit Sounds (module id 63)

## Evidence base

- Stitched native corpus: `analysis/ghidra/handlers-stitched/sixtwo_dQ.c` (4321 lines, ~100
  continuation blocks). All 12 declared natives present, each with a
  `// ===== Lsixtwo/dQ; <method> (handler @ image 18dbXXXXX)` annotation header.
- Structural spec: `analysis/specs/modules/dQ.md`. Coverage matrix: `dQ|Hit Sounds|12|12|0`
  (12 natives declared, 12 recovered, 0 pure-Java).
- Decompiled Java: `analysis/decompiled/payload-named/sixtwo/dQ.java` (encrypted literals) and
  `analysis/decompiled/payload-decrypted/sixtwo/dQ.java` (DES literals folded to `(int)` char
  codes — source of every setting string below).
- Pool slice resolutions via `analysis/tools/resolve_pool_blob.py` against
  `ghidra/dumps/jna-decrypted-v2.dll` (pool RVA 0x301ee40, IMAGE_BASE 0x180000000):
  - `POOL[0x226, 0xd]` → clinit self-token `sixtwo/dQ`
  - `POOL[0xb040, 0x1ea]` → the main `aoY(gI)` handler slice (full token list below).
- Helper APIs: `gI` (sound-play event), `oc` (loaded audio data), `qI` (client sound playback
  manager), `cC/cJ/ct/cu/cy` settings widgets, `gf.aZL(id, boolean, gh)` module registration.

## Runtime model

Fully j2cc-VIRTUALIZED. Every declared native decrypts a pool preamble
(`FUN_190dd72e0(env, POOL_RVA+off, len)`) and jumps into the bytecode VM whose interpreter
blocks terminate in `halt_baddata`. No handler arithmetic survives statically; the decompiled
Java stubs contain only encrypted-literal scaffolding plus `MatchException` rethrow
boilerplate. What IS recoverable is cited below: registration, event wiring, the full
settings tree, the pool-token API surface of the one sound-matching handler, and the
cross-module call into `qI`.

Event wiring (from the Java stub structure):
- `gf.aZL(63, false, gh.qBzlZ)` — registered disabled at boot under category `qBzlZ`.
- Exactly one event listener: `@hG(mw.LOWEST) void aoY(gI sound)` — subscribes to the
  client `SoundInstance` play event `gI` at LOWEST priority so it runs first and can cancel.
- Instance state: `String FXFhS = ""` (last submitted URL), `CompletableFuture<oc> gxiKQ`
  (in-flight async audio download).
- `MatchException` paths are pure virtualization scaffolding (`apb` returns its argument
  unchanged: identity rethrow kernel).

## Per-handler semantics

All addresses are image addresses (IMAGE_BASE 0x180000000); each entry cites its
`sixtwo_dQ.c` annotation header.

1. `static void _da389a0521be433c8e9e82e9b1ff29fa()` — clinit [18db6d820],
   slice `POOL[0x226,0xd]` (self-token `sixtwo/dQ`). Virtualized; constructs the settings
   tree below (recovered from decrypted Java, not from the VM).
2. `void aoY(gI)` [18db50610], `@hG(mw.LOWEST)`; slice `POOL[0xb040,0x1ea]`. The only event
   handler. Pool token trace of the slice, in order of appearance:
   `sixtwo/dQ`, `AFdCl` (slot/self token), `apb`, `sixtwo/gI`, `bcc` (the wrapped
   `SoundInstance` accessor on `gI`), `()Lnet/minecraft/class_1113;` (`SoundInstance`),
   `method_4775` = `SoundInstance#getId()` (yarn class_1113=SoundInstance),
   `method_12832` = `Identifier#getPath()`, `(Ljava/lang/CharSequence;)Z` (a `String.contains`
   match against the path), `sfyvC` (Cancel Original Sound), `rccnf` (Hit Sound mode),
   `gkxvg` (Sound URL text field), `aoZ`, `()Lsixtwo/oc;`, `gxiKQ`,
   `java/util/concurrent/CompletableFuture`, `FXFhS`, `sixtwo/oc`, `cBJ(String)oc`
   (synchronous lookup), `cBN()[B` (raw bytes), `cBL(String)CompletableFuture<oc>`
   (async fetch), `LOyUV` (Volume=Synchronized — corrected 2026-10-17, batch 19; was mislabeled Custom), `net/minecraft/class_3419`, `field_15248`
   (= `SoundCategory.PLAYERS`), `method_1630` =
   `class_3419#getCategorySoundVolume(class_3419)F` (category-scaled volume),
   `getNow` (on the `CompletableFuture`), `INtkR` (Sound Volume),
   `VqRlJ` (slot token), `dmd()Lsixtwo/qI;`, `sixtwo/qI`, `daR` (playback entry on `qI`).
   Reconstructed contract (structure only; the VM hides the arithmetic):
   - Obtain `SoundInstance` via `sound.bcc()`; take `getId().getPath()` and test a
     `CharSequence` containment against the hit-sound match pattern.
   - On match: if `sfyvC` (Cancel Original Sound) is on, cancel the original `gI` event.
   - Sound selection by `rccnf` (Hit Sound mode): built-in presets `One` (default),
     `Two`, `Three`, `Four`, `Five`, `Six`, or `Custom` (uses `gkxvg` Sound URL).
   - Resolve the audio payload: `aoZ()` returns cached `oc`;
     `gxiKQ.getNow(...)` for the async download; fallback `oc.cBJ(String)` and
     `oc.cBN()[B` for raw bytes; `gxiKQ` is (re)populated via `oc.cBL(String)`.
   - Volume: if `wWQPU` (Volume=Custom, index 1 — corrected 2026-10-17, batch 19: `LOyUV` is Synchronized/index 0) mode selected, use `INtkR` Sound Volume;
     the token `method_1630` (`getCategorySoundVolume(PLAYERS)`) shows the final gain is
     combined with the PLAYERS category volume. Playback goes through
     `rD...dmd()` → `qI.daR(...)`.
   - `FXFhS` is compared against the current `gkxvg` text to avoid re-submitting an
     identical URL; on change a new `CompletableFuture` is stored in `gxiKQ`.
3. `oc aoZ()` [18db63b10], same slice `POOL[0xb040,0x1ea]`. Virtualized accessor: returns
   the cached `oc` payload for the currently selected hit sound (used by `aoY`).
4. `Boolean apa()` [18db88360]. No pool-blob decrypt (control jumps directly on
   `param_2 == 0`). This is the visibility predicate wired as `gkxvg.Vf(this::apa)` —
   gates the Sound URL text field on the Hit Sound mode being `Custom`
   (`rccnf.SQ(<Custom index>)`).
5. `MatchException apb(MatchException)` [18db887b0]. Identity kernel: `return param_3;`
   (pure virtualization scaffolding, no behavior).
6. `String apc([B)` [18db88840]. Jump on `param_3 == 0`; byte[]→String conversion kernel
   used by the VM glue. No client behavior.
7. `String apd(IJ)` [18dbb12f0]. ~500-line string kernel ending in a class-slice decrypt;
   VM-internal string materialization. No recoverable client semantics.
8. `Object ape(Lookup, MutableCallSite, String, Object[])` [18dbb78d0]. invokedynamic
   bootstrap fallback stub (VM plumbing).
9. `CallSite apf(Lookup, String, MethodType)` [18dbb87c0], slice `POOL[0x857,0x26]`.
   invokedynamic bootstrap (string concat kernel).
10. `int apg(IJ)` [18dbbb280]. Int kernel ending in a class-slice decrypt; VM-internal.
11. `int aph(...)` [18dbc6c10]. VM dispatch stub.
12. `CallSite api(Lookup, String, MethodType)` [18db6ab10], slice `POOL[0x857,0x26]`.
    invokedynamic bootstrap (string concat kernel), same blob as `apf`.

All jump tables referenced by these handlers (`UNK_182349a60`, `18234f7b8`, `1823558e0`,
`182355c30`, `18235b0a8`, …) "did not pass sanity check" during stitching; interpreter
blocks cannot be linearized.

## Settings→behavior

Decrypted verbatim from `analysis/decompiled/payload-decrypted/sixtwo/dQ.java`
(DES literals folded to `(int)` char codes; strings reassembled from char codes):

- `ct rccnf` = mode list **"Hit Sound"** with `cu` options:
  - `qeNwl` = **"Custom"**
  - `LokgE` = **"One"** — `.SY()` ⇒ default selected
  - `DVJLX` = **"Two"**
  - `gRGas` = **"Three"**
  - `sNObT` = **"Four"**
  - `ulolB` = **"Five"**
  - `MEkaw` = **"Six"**
- `ct imJSo` = mode list **"Volume"**, `.SO(1)` ⇒ initial selection index 1, with options:
  - `LOyUV` = **"Synchronized"** (index 0 — scale volume with the PLAYERS category,
    per pool token `method_1630`/`field_15248`)
  - `wWQPU` = **"Custom"** (index 1 — use the fixed slider below)
- `cC INtkR` = **"Sound Volume"**: `.Vy(1.0).Vw(0.0).Vx(100.0).VA(70.0).Vz(" %")`
  ⇒ step 1.0, min 0.0, max 100.0, default 70.0, unit " %". Visibility gated by
  `INtkR.Vf(this.wWQPU::SZ)` (shown only when Volume = Custom).
- `cJ sfyvC` = **"Cancel Original Sound"**: `.WE(true)` ⇒ default on; cancels the vanilla
  hit `SoundInstance` when a hit sound fires.
- `cy gkxvg` = **"Sound URL"**: `.Un(2048).Up("")` ⇒ max length 2048 chars, default empty
  string; visibility gated by `gkxvg.Vf(this::apa)` (shown only when Hit Sound = Custom).
- No keybind (`cD`) is declared; the module toggles only through the GUI.
- Module registration: `gf.aZL(63, false, gh.qBzlZ)` — id 63, starts disabled, category
  `qBzlZ`.

Behavior summary: every qualifying hit event (matched via `SoundInstance#getId()#getPath()`
containment) is silenced (if Cancel Original Sound) and re-played as the chosen preset
One..Six or a user-supplied URL (≤2048 chars) through the client-side `qI` playback manager
(`dmd() → daR`), at 70 % volume by default (Custom volume) or category-synchronized gain.

## Unrecovered

- The match pattern tested against `SoundInstance#getId()#getPath()` — the containment
  needle(s) are VM bytecode; only `(Ljava/lang/CharSequence;)Z` is visible. Which sound IDs
  (e.g. which damage/hit identifiers) trigger a hit sound is an open question.
- The mapping preset One..Six → concrete audio assets / URLs / resource names (`oc`
  payloads). `aoZ()`'s cache key derivation is virtualized.
- The exact `qI.daR` argument list (order of bytes/volume/category parameters) and any
  pitch/pan processing.
- The precise volume math: how `INtkR`'s 0–100 % slider combines with
  `method_1630` (PLAYERS category volume) — the float arithmetic is VM-only.
- Any retry/debounce logic around `gxiKQ` (`CompletableFuture` state machine: which
  `getNow` default is used while a download is in flight, and the `FXFhS` equality check
  branch order).
- `apd(IJ)`/`apg(IJ)` string/int kernel semantics and the meaning of `afp`-family slot
  tokens (`AFdCl`, `VqRlJ`) — VM glue, presumed behavior-free.
- The native `qI` methods themselves (`daT`, `daU`, `daW`, `daR`) are outside this class's
  corpus and are specified in their own module.