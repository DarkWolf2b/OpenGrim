# No Jump Delay (sixtwo.ew) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_ew.c` — 3 handlers (class-init `_75777046eebd2db35ae90258c9fc0f1c`, `auT(gH$th)`, `auU`) + 20 continuation blocks, 0 unresolved table targets. Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff4a2xxxxx`/`6ffff4a23xxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/ew.java` — static seeds `ffKNT`/`vtEAj`; natives: class-init, `auT(gH$th)` `@hG`, `auU(MatchException)`.
- Structural spec: `analysis/specs/modules/ew.md`; registry row: `sixtwo.ew|No Jump Delay|Removes jump delay|key=49|bind=-999`; category `gh.xgeEn` = **Movement** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny`; pool re-resolution via `analysis/tools/resolve_pool_blob.py` (pool base RVA `0x301ee50`).
- Decrypted constants: **no `sixtwo.ew` entries in `analysis/decrypted/full-dump.jsonl`**.
- Neighbor runs pinned by class tokens: `sixtwo/ex` `[0xd9ef]`, `sixtwo/ey` `[0xda1b]` (registry: ex Safe Walk, ey Blink). ev's run ends at `[0xd99b]` (see ev spec).

### Recoverability caveat

`auT`'s body is decrypt → VM dispatch; the run is 6 tokens and the contract is a single-field reset. No float arithmetic involved.

## Runtime model

- `ew extends gg`. Constructor `[decompiled ew.java:9-12]`:
  - `long var1 = ffKNT ^ 7789950813451L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)vtEAj, false, gh.xgeEn))` — module id runtime-decrypted (registry: **49**), flag `false`, category **Movement** `[decompiled + registry]`.
- One `@hG` listener: `auT(gH$th)` — **pre-motion client-tick** (phase verified `er.md`: `gH$th` listeners run before `gv` pre-rotation and `qL` motion processing — i.e. before the vanilla travel step consumes the flag) `[decompiled + er.md]`.
- No settings, no `aaj()`/`YO()` overrides `[decompiled]`.
- **Own pool run** `POOL[0xd9a3,0x4c)` (window `[0xd983,0x25c]` starts at `class_token − 0x20` = `0xd983`; per-token offsets):
  - `sixtwo/ew` `[0xd9a3]`, `ffKNT` `[0xd9ad]` (seed), `auU` `[0xd9b3]` (rethrow name), `mixin/accessors/LivingEntityAccessor` `[0xd9b7]`, `setJumpDelay` `[0xd9dc]`, `PkbYQ` `[0xd9e9]` (this token is **ev's** second seed — a demonstrable cross-boundary scatter; stub-matched to ev.java, not ew behavior) `[slice + stub match]`.
  - Tiny-adjacent: `mixin/accessors/LivingEntityAccessor#setJumpDelay` writes `LivingEntity`'s jump-cooldown field (`jumpingCooldown`-family counter that vanilla decrements each tick after a jump, blocking consecutive jumps).
  - Window prefix `[0xd983,0xd9a3)`: `minecraft/class_1297;)F` (tail of a `(Lnet/minecraft/class_1297;)F` desc — ev's `distanceTo` desc), `bxN` `[0xd99b]`, `auN` `[0xd99f]` — ev/obfuscation tail tokens `[slice]`.
  - **ex (Safe Walk) run** `[0xd9ef,0xda1b)`: `sixtwo/ex`, `pyxZq` (`cJ` boolean setting — stub-matched), `OqVLr` (`Integer[]`), `jBHTq` (`long[]`), `xLPDH` (`Map`), `vtEAj` `[0xda11]` (ew's second seed — scatter), `auW` (ex's indy kernel name, stub-matched `auW(int,long)I`). Notably ex has **zero MC tokens** — Safe Walk's body touches no mapped API through the pool `[slice + stub match]`.
  - **ey (Blink) run** from `sixtwo/ey` `[0xda1b)`: `rLHZE`, `avg`, `kPBXI` `[0xda2f]` (ex's seed — scatter), `AOxxs`/`UMfxq` (`Vec3d` fields), `OpYvN` (`float`), `method_5624` = `isSprinting()`, `TYnKu` (`boolean`), `bBA`, `(Lnet/minecraft/class_1297;)Lnet/minecraft/class_238;` = `Entity.getBoundingBox()`, `kYSPP` (`Box`), `qXoKw` (`kr`), `FTaWP` (`AtomicBoolean`), `BeDJP` (`Queue<Packet<?>>`), `Ljava/util/Queue;` + `poll`, `avf`, `sTmtd` (`cJ` "Disable on Velocity"), `sixtwo/gL$tk`, `bcf`, `()Lnet/minecraft/class_2596;` — Blink's queue/velocity-disable surface, fully consistent with `ey`-family specs `[slice + stub match]`.
- Contract: every pre-motion tick while enabled, write `LivingEntity`'s jump-delay field to 0 via the accessor, so vanilla's jump cooldown (the `noJumpDelay`-style counter) never blocks consecutive jumps `[slice + registry "Removes jump delay", inferred]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_75777046eebd2db35ae90258c9fc0f1c()V` | `[18ce139a0]` | `[0x226,0xd]` | class-init stub |
| `auT(Lsixtwo/gH$th;)V` | `[18ce0eee0]` | `[0xd983,0x25c]` | pre-motion tick listener (whole behavior) |
| `auU(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18ce13910]` | — | identity rethrow |

- **class-init [18ce139a0]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck` (vtable `0x720`), dispatch `UNK_1820aa070[(cVar1=='\0')*8]` at `18ce13a26`. No module behavior `[decompiled]`.
- **`auT(Lsixtwo/gH$th;)V` [18ce0eee0]** — decrypts `POOL[0xd983,0x25c]`, `ExceptionCheck`, dispatch `UNK_1820a8b10` at `18ce0efa1`. Virtualized body; only determinable action: `LivingEntityAccessor.setJumpDelay(...)` on the local player each tick `[slice, inferred]`. The written constant (0) and receiver (local player vs any living entity) are VM-resident but the registry description pins the intent `[uncertain on constant only]`.
- **`auU(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18ce13910]** — `return param_3;` identity rethrow `[decompiled]`.
- Continuation blocks (20): generic `ExceptionCheck` 2-way dispatchers; `FUN_190ddce00`/`FUN_190de3220` decrypt-reentry variants; `swi(3)` trampolines; bare `return`. No module-specific logic `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `ew.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)vtEAj, false, gh.xgeEn))` `[decompiled ew.java:9-12]`.
- No `full-dump.jsonl` entries for ew (0 indy sites) — no hidden setting names recoverable `[decompiled absence]`.
- Consequence: unconditional fixed behavior while enabled `[inferred]`.

## Cross-module interplay

| peer | relationship | evidence |
|---|---|---|
| ev (Collision Long Jump) | run ends `[0xd99b]`; ev's `distanceTo` desc tail bleeds into ew's window prefix | `[slice]` |
| ex (Safe Walk) | next run in window `[0xd9ef,0xda1b)`; ex's window prefix carries ew's `vtEAj` seed (scatter) | `[0xda11]` |
| ey (Blink) | run `[0xda1b,…)`; ey's prefix carries ex's `kPBXI` seed (scatter); ey's `PkbYQ` sits in ew's run at `[0xd9e9]` | `[0xda2f]` |
| scatter law | three seeds (`vtEAj`, `kPBXI`, `PkbYQ`) each appear in a *neighbor's* window, not their owner's — token attribution must be semantic, never positional | proven by stub-matching all three to their owning classes |

- The three Movement modules ew/ex/ey share window `[0xd983, …)` contiguously; ew is the only one of the three that touches a mapped MC accessor (LivingEntity/setJumpDelay). ex has zero MC tokens; ey carries the packet-queue surface (Queue/poll/class_2596) for its outbound hold.
- If ew's tick listener and ex's Safe Walk both mutate movement state in the same pre-motion phase (`gH$th`), their relative listener order is the module-enable order in `hF`'s bus (not recoverable from the native layer) `[inferred]`.

## Unrecovered

1. **Module id 49** — registry-sourced; `(int)vtEAj` has no dump verification.
2. **Written constant** — "0" is inferred from semantics (a nonzero reset would be meaningless for "removes jump delay"); the actual immediate is VM-resident.
3. **Receiver scope** — local player only, or every living entity processed that tick; no entity-iteration tokens exist in the run, so local-player-only is the parsimonious reading but not proven.
4. **`jumpingCooldown` field id** — only the accessor name is attested; no `field_XXXX` token in the run.
5. **Flag `false` in `gf.aZL(49, false, gh.xgeEn)`** — meaning unrecovered.
6. **Tick-event argument use** — `auT` receives `gH$th` but the run contains no `gH`/`gv` accessor tokens; whether the event object's fields (motion deltas) inform a conditional reset is VM-resident. A pure unconditional set-every-tick and a conditional reset are both consistent with the evidence.
7. **Seed arithmetic** — `ffKNT ^ 7789950813451L` feeds key derivation for the id decrypt; the derived key schedule lives in the VM and was not dumped.

## Shared helpers cited

- `gg`/`iS` — module base; `hF` bus registration on enable via base `aaj()`.
- `gH$th` — pre-motion tick event (phase verified `er.md`).
- `mixin/accessors/LivingEntityAccessor` — generated accessor pair (`setJumpDelay`).
- `gf`/`gh` — metadata + category enum (`xgeEn` = Movement).
- Neighbors in window: ev (Collision Long Jump), ex (Safe Walk), ey (Blink) — surfaces above.

---
Confidence: HIGH on the API contract (clean 6-token run, exact accessor pair, stub-matched seeds, no neighbor confusion beyond the documented scatter) and MEDIUM on the numeric behavior (written constant unproven).