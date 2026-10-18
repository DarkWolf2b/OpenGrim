# Outlines (sixtwo.dl) — handler-derived behavior spec

Class `sixtwo.dl` extends `sixtwo.gg`. Registry: `sixtwo.dl|Outlines|…|key=?|bind=-999` — description from `modules/dl.md`; module id **131**, category `gh.nOCvV`.

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dl.c` | **MISSING** — lowercase `d` classes: 0 natives declared/bound (`coverage-matrix.tsv` row 50); `sixtwo/dl` absent from both runtime jsonl registries; no `native` methods. |
| `analysis/decompiled/payload-decrypted/sixtwo/dl.java` | **PRIMARY** (588 lines, read in full; both handlers + full constructor). All setting names below were re-folded from the char arrays by hand where the tool left `dl.agT("k", …)` calls; the recurring decrypted char is the same single literal at all positions in each name (verified by pattern, see notes). |
| `analysis/specs/modules/dl.md` | read — registry + names, consistent. |
| Helpers | `kn` (outline state: `static boolean YNOIY`, `static lI bQt(Entity, float, MatrixStack)` — builds per-entity outline geometry), `lH` (batch: `cgm(lI)` add, `cgp()` flush), `ki.bPi(Runnable, mG colorA, mG colorB, int mode, int quality, float…×6)` (static post-process dispatcher), `jJ.bIB(Entity)` (frustum/visibility check), `cF` (entity-type multi-select, `VS(jg$tJ)` preset + `VT(EntityType...)` seed), `cG.Wf()` color fetch. |

## Runtime model

- `super(gf.aZL(131, false, gh.nOCvV))` (`dl.java:constructor`).
- The module collects visible entities each world render, builds outline geometry (`kn.bQt` per entity, accumulated in `lH`), and hands the batch to `ki.bPi` together with all shader knobs. The actual outline drawing lives in `ki`/`kn` (Java shell classes, out of scope); `dl` is parameter plumbing.
- **Re-entrancy guard:** the shared static `kn.YNOIY` is set `true` while the outline batch renders; during that window the `gi` handler cancels vanilla entity-label rendering so outlined entities don't double-render nameplates.

## Per-handler semantics

### `@hG agJ(go.sX)` — world render (`dl.java:425-535`)
1. Guard `bab()` (module active).
2. `matrixStack = sX2.bbh()`, `f2 = sX2.bbi()` (tick delta).
3. For each `world.getEntities()` entity: keep when `jJ.bIB(entity)` (visible/should-outline predicate), skip local player (`entity == rD.dlmvG.player`), keep when `Myqqn.VX(entity)` (entity's type ∈ the Entities set).
4. If the list is empty, return.
5. Build a `Runnable`: sets `kn.YNOIY = true`, creates `lH`, for each entity `lH.cgm(kn.bQt(entity, tickDelta, matrixStack))`, `lH.cgp()` flush, `finally kn.YNOIY = false`.
6. Dispatch once: `ki.bPi(runnable, bfmBp.Wf(), aMyMs.Wf(), kHCyC.ST(), yUron.VC(), ZEreL.VB(), UITAz.VB(), tNzOl.VB(), EOBwn.VB(), TYtlY.VB(), DMmsT.VB())` — i.e. primary color, second color, color-mode index, glow quality (int), then floats Glow Radius, Animation Speed, Glow Alpha Multiplier, Fill Alpha Multiplier, Saturation, Brightness.

### `@hG agK(gi)` — nametag suppression during outline pass (`dl.java:537-544`)
`if (kn.YNOIY) gi2.bdX(true);` — cancels label/nameplate events exactly while the outline batch is on screen. Nothing else.

### Visibility gating (settings callbacks)
- `aMyMs` (Second Color), `UITAz` (Animation Speed), `yUron` (Glow Quality), `ZEreL` (Glow Radius) each get `Vf(() -> kHCyC.SQ(1) || SQ(2) || SQ(3))` — shown only when Color Mode is **not** option 0.
- `DMmsT` (Brightness) and `TYtlY` (Saturation) get `Vf(() -> kHCyC.SQ(1))` — shown only when Color Mode is **option 1** (`One`).
- (CU-style mode index accessor: `ct.SQ(int)` = "selected index == int", `ct.ST()` = selected index.)

## Settings→behavior (exact — folded literals; `X` marks the one decrypted char of each name)

| Field | Class | Name | Params |
|---|---|---|---|
| `Myqqn` | `cF` entity set | `"Entities"` (E,n,t,i,t,i,e,s) | `.VS(jg$tJ.OCdZM)` preset scope; `.VT(EntityType.END_CRYSTAL)` — **default selection: End Crystal only** |
| `bfmBp` | `cG` color | `"Color"` | default `rD.dlM().bjG().bis()` = client **theme color** |
| `kHCyC` | `ct` mode | `"CoXor Mode"` → **"Color Mode"** | options: `"Zero"` (90,101,114,111), `"One"` (O,n,e), `"Two"` (T,w,o), `"Three"` (T,h,r,e,e) — literally named; default index 0 (`ct` ctor) |
| `ySLzi` | `cu` option | `"Zero"` | of kHCyC |
| `TJfWG` | `cu` option | `"One"` | of kHCyC |
| `rjOTp` | `cu` option | `"Two"` | of kHCyC |
| `bFjPw` | `cu` option | `"Three"` | of kHCyC |
| `aMyMs` | `cG` color | `"Second CoXor"` → **"Second Color"** | default = theme color `rD.dlM().bjG().bis()` |
| `yUron` | `cC` number | `"Glow QuaXity"` → **"Glow Quality"** | step `.Vy(1.0)`, min `.Vw(1.0)`, max `.Vx(4.0)`, default `.VA(2.0)`; passed as **int** (`VC()`) to `ki.bPi` |
| `ZEreL` | `cC` number | `"Glow Radius"` (71,l,111,119,32,82,97,100,105,117,115) | step `.Vy(0.1)`, min `.Vw(1.0)`, max `.Vx(16.0)`, default `.VA(4.3)` |
| `UITAz` | `cC` number | `"Animation Speed"` (15 chars) | step `.Vy(0.1)`, min `.Vw(0.0)`, max `.Vx(3.0)`, default `.VA(1.5)` |
| `tNzOl` | `cC` number | `"GXow AXpha MuXtiXlier"` → **"Glow Alpha Multiplier"** (21 chars, decrypted chars = `l` at idx 1,6,12,16) | step `.Vy(0.1)`, min `.Vw(0.0)`, max `.Vx(4.0)`, default `.VA(1.0)` |
| `EOBwn` | `cC` number | `"FiXX AXpha MuXtiXlier"` → **"Fill Alpha Multiplier"** (21 chars, `l` at idx 2,3,6,12,17) | step `.Vy(0.01)`, min `.Vw(0.0)`, max `.Vx(1.0)`, default `.VA(0.3)` |
| `TYtlY` | `cC` number | `"Saturation"` (10 chars) | step `.Vy(0.1)`, min `.Vw(0.0)`, max `.Vx(5.0)`, default `.VA(0.7)` |
| `DMmsT` | `cC` number | `"Brightness"` (10 chars) | step `.Vy(0.1)`, min `.Vw(0.0)`, max `.Vx(50.0)`, default `.VA(2.0)` |

Keybind: module id **131** (registry key value from `modules/dl.md`).

## Unrecovered

- The single decrypted character in names like `CoXor Mode` is produced by the runtime int-decrypt call `dl.agT("k", (int)Short.MAX_VALUE, …)`; every position in a given name yields the same char, and the surrounding text pins each name uniquely (Color/Glow/Fill/Alpha/Multiplier/Radius). The mapping is pattern-verified, not byte-verified.
- `ki.bPi` internals (post-process shader path, how mode index 0-3 and quality 1-4 select techniques), `kn.bQt` geometry, `lH` batching — Java shell code out of scope; the meaning of Color Mode values `Zero/One/Two/Three` (presumably fill+glow variants) is **not** recoverable from `dl`.
- `jg$tJ.OCdZM` preset constant (entity-classifier scope name) is an obfuscated enum on `jg`; its label is native.
- `jJ.bIB(Entity)` exact criterion (in-frustum vs. line-of-sight) lives in `jg`-adjacent helper code not speced here.

## Helper contracts (one line each)

- `kn` — outline state holder; static `YNOIY` boolean marks "outline batch rendering", static `bQt(Entity, float, MatrixStack)` builds one entity's outline geometry (`lI`).
- `lH` — per-pass outline geometry collector; `cgm(lI)` add, `cgp()` flush.
- `ki.bPi(Runnable, mG, mG, int, int, float×6)` — static post-process dispatcher: runnable, color A, color B, mode index, quality int, six float knobs (radius / animation speed / glow alpha / fill alpha / saturation / brightness in the call order above).
- `jJ.bIB(Entity)` — boolean visibility predicate shared with `ds` (Entity ESP); the only other consumer in the render family.
- `cF` — entity-type multi-select; `VS(jg$tJ)` preset scope, `VT(EntityType...)` seed, `VX(Entity)` live membership test.
- `ct`/`cu` — mode setting + options; `SQ(int)` = "index == int", `ST()` = selected index (visibility callbacks key on `SQ`).
- `cC` — number setting; `.Vy(step).Vw(min).Vx(max).VA(default)`; `VC()` int / `VB()` float live reads.
- `cG` — color setting; `Wf()` live color; `.Uf(mG)` default.
- Cross-module note: `dl`'s `kn.YNOIY` flag is consumed by `dr` (Health Indicators, `aib` guard 1) and drives `dl`'s own `gi` cancellation — the only cross-module boolean handshake in the render family outside the shared batchers.

## Registry metadata

`bootstrap/offline/features/metadata.txt:126`: `sixtwo.dl|Outlines|Renders outlines around entities|key=131|bind=-999` — primary keybind **131**, secondary bind **−999** (unbound). The 12 settings above (1 entity set, 2 colors, 1 mode with 4 options, 1 quality, 7 numbers) are the module's entire persisted state; the `Vf(...)` visibility callbacks are presentation-only and do not affect the values passed to `ki.bPi`.