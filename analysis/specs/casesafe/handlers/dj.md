# Hole ESP (sixtwo.dj) — handler-derived behavior spec

Class `sixtwo.dj` extends `sixtwo.gg`, implements `sixtwo.lG`. Registry: `sixtwo.dj|Hole ESP|Highlights safe holes|key=147|bind=-999` (`analysis/specs/modules/dj.md`). Category `gh.nOCvV`.

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dj.c` | **MISSING** — like all lowercase `d` classes, `sixtwo.dj` has 0 natives declared/bound (`coverage-matrix.tsv` row 48) and never appears in `native-handlers-runtime-full.jsonl` / `native-handlers-final.jsonl`. Class declares no `native` methods. |
| `analysis/decompiled/payload-decrypted/sixtwo/dj.java` | **PRIMARY** (1972 lines; constructor, all `@hG` handlers, hole classifier, geometry and draw code read in full; DES/CallSite boilerplate skipped). All setting names and numeric literals below are folded char codes — verbatim. |
| Inner classes `dj$sB/sC/sD/sE` | `dj$sB` record(hole, fadeFactor); `dj$sC` enum {iiJny, XksfN, vzSwM, WdDaI} = hole shape; `dj$sD` enum {zrNsv, WBAxv, XoavU, btXid} = safety level; `dj$sE` record(List<BlockPos> cells, dj$sD safety, dj$sC shape) with `toBox(double)` / `center()` / `cells()`. Enum display strings native-blocked. |
| Helpers | `mG` (RGBA color; `cnR(r,g,b,a)` ctor, `coa/cob` multiply channels, `cou()`, `coh()` packed ARGB, `cnW()`), `kH.bTJ(MatrixStack, Box, boolean, boolean)` (outline builder), `lF.cfW(kR.oXKXV, BuiltBuffer)` (buffer submission to a render layer), `MMuss.startBatch()/endBatch()` (static batch scope), `jJ.bIA(Vec3d)` (frustum check). |
| `analysis/specs/modules/dj.md` | read — registry row, decrypted setting names, matches this spec. |

Unlike the virtualized classes, `dj`'s Java is largely recovered: full scan/classify/draw pipeline visible. Two methods failed CFR (`agl`, and `agc` partially) — noted under Unrecovered.

## Runtime model

- `super(gf.aZL(147, false, gh.nOCvV))` — module id **147** (`dj.java:123`).
- **Scan:** on the packet/tick event `gH.th` (`afR`) the module re-scans the world into `soBDJ : List<dj$sE>`, and lazily mints one fade keybind-like `rk` per hole in `Dpuot : Map<dj$sE, rk>` (`afW`). `rk.dhd(float)` animates 0→1 (fade in) / →0 (fade out); `afT()` builds the render list `List<dj$sB>` of holes with fade ≠ 0, removes dead entries, and frustum-culls via `jJ.bIA(center())`.
- **Classify:** `afZ(pos)` → `agb(pos)` (2×2 quad hole, needs `iKDmr` "Quad" enabled) else single-cell `iiJny`; if the cell has exactly one solid horizontal neighbor → double hole `aga(pos, dir)` (needs `NUWIx` "Double"). All shapes require: candidate air (`agh` = `world.getBlockState(p).isAir()`), air at +1Y and +2Y, floor solid via `agi` (`agi` accepts **BEDROCK, OBSIDIAN, CRYING_OBSIDIAN, ENDER_CHEST, RESPAWN_ANCHOR** — `dj.java:1330-1346`).
- **Safety:** `agc(List<BlockPos>)` walks floor cells; `agj` = is-BEDROCK; classifies the floor mix into a `dj$sD` value (CFR failed on the switch — exact enum mapping unrecovered; the bedrock-scan path in `afY` tags `btXid` for pure-bedrock floors).
- **Draw:** `@hG afS(go.sX)` (world render, carries MatrixStack + tickDelta). Offset = `camera.getCameraPos().negate()`. Two pipelines selected by mode option `lvORN.SZ()`: **line/outline path** `afU` (per-hole `agd` → `kH.bTJ`, batched via `MMuss.startBatch/endBatch`) and **fill path** `afV` → `age` (BufferBuilder QUADS `VertexFormats.POSITION_COLOR`, submitted with `lF.cfW(kR.oXKXV, …)`).
- Colors: fill quads use `agl(safety)` multiplied by `cob(fadeFactor)` (and `coa(0.0f)` for an extra edge color in `age`); `agf` paints the floor quad at `alpha = cob(0.35f)` and, when `ZnfqN` "Outline" is on, four inset floor strips with thickness `f7 = min(0.04f, min(w,h) * 0.5f)`.
- Bedrock sweep: when option `oBPYh` ("Void"?) is on, `afY` additionally scans from `world.getBottomY()` across ±range for **bedrock-only** floor holes and adds them as `dj$sE(List.of(pos), dj$sD.btXid, dj$sC.WdDaI)`.

## Per-handler semantics

### `@hG afR(gH.th)` — rescan trigger (`dj.java:1475-1504`)
Module active → `soBDJ = afY()` (full rescan). Module inactive → `soBDJ.clear(); Dpuot.clear();`.

### `@hG afS(go.sX)` — world render draw (`dj.java:1854-1937`)
Guards: `bab()` active, `rD.dlmvG.player ≠ null`, camera entity ≠ null. Then: `afW()` (mint fades), bail if `Dpuot` empty; take `matrixStack = sX.bbh()`, `vec3d = camera.getCameraPos().negate()`; `list = afT()`; bail if empty. Choose `lvORN.SZ()` → `afU(stack, offset, list)` else `afV(...)` (= `age`).

### `YO()` override (`dj.java:1942-1946`)
`super.YO(); soBDJ.clear(); Dpuot.clear();` — state reset on module disable/world change (same as the inactive branch of `afR`).

### Scan internals
- `afY` (`dj.java:1638-1817`): iterate `dx ∈ [-range, range]`, `dz ∈ [-range, range]`, `y ∈ [playerY - YRange, playerY + YRange]` (`LEzwX`/`uQNEX` values ceil'ed); skip already-covered cells (`hashSet`), skip cells with `toCenterPos().squaredDistanceTo(player.getEntityPos()) > agk()` where **`agk() = LEzwX.VI() * LEzwX.VI()`** (range², `dj.java:616-623`). For each candidate classify with `afZ`, then `hashSet.addAll(hole.cells())`. With `oBPYh` on, second loop scans the full Y column at `world.getBottomY()` for bedrock floors (`dj$sC.WdDaI`).
- `afZ` (`dj.java:1214-1310`): try quad (`agb`) first; else require air + air.up() + air.up(2) on the cell; collect solid horizontal neighbors — exactly 1 solid neighbor and `NUWIx` on → `aga` (double, shape `XksfN`); 0 solid neighbors → single hole, shape `dj$sC.iiJny`; otherwise null.
- `agb` (2×2, `dj.java:847-968`): requires `iKDmr` on; cells `{pos, pos.east(), pos.south(), pos.south().east()}` each pass air/air+1/+2 + floor `agi`; surrounding 8 blocks (`north, east.north, west, south.west, south.south, south.east.south, east.east, south.east.east`) must be non-solid (`!agi`); floor list → `agc`; shape `dj$sC.vzSwM`.
- `aga` (double, `dj.java:624-767`): neighbor cell + its +1Y/+2Y air, both floors solid, both cells' horizontal wings solid; cells sorted by the static comparator `cMEtP` = `comparingInt(getX).thenComparingInt(getY).thenComparingInt(getZ)` (`dj.java:390-392`); shape `dj$sC.XksfN`.

### Draw internals
- `age` (fill, `dj.java:427-566`): two `BufferAllocator`s sized `vertexSize * holes * <literal>` (literals folded from `agu` — values not decoded, see Unrecovered); per hole `toBox(TYsOV.VI())` (size offset setting) offset by camera-negated origin; body quads color `agl(safety).cob(fade)`, plus a second pass with `.coa(170.0f)` alpha for the outline strips via `agf`. DrawMode **QUADS**, format **POSITION_COLOR**.
- `agf` (`dj.java:1105-1145`): floor quad `alpha = color.cob(0.35f)`; if `ZnfqN` (Outline) on, 4 corner/L-strips of width `min(0.04f, min(dx,dz) * 0.5f)` at full color.
- `agd` (outline path, `dj.java:779-845`): `kH.bTJ(stack, box, depthTest?, false)` with fill color `agl(safety).cob(fade)`; if `ZnfqN` on also outline color `agl(safety).coa(max(color.cou(), 100.0f)).cob(fade)`.
- `afW` (`dj.java:1518-1536`): for each new hole, `new rk(<literal>).dhs(rj.UPXqT)` then `rk.dhg()` — a fade-in animation timer per hole.

## Settings→behavior (exact — folded literals verbatim)

| Field | Setting class | Name (char codes) | Default / range / step | Ties to |
|---|---|---|---|---|
| `jybpu` | `ct` (mode select) | `"Mode"` (77,111,100,101) | `.SO(0)` — index 0 | options below |
| `lvORN` | `cu` (option) | `"Boxes"` (66,111,120,101,115) | — | `SZ()` true → outline pipeline `afU` |
| `qEqID` | `cu` (option) | `"Fade"` (70,97,100,101) | — | second mode option |
| `LEzwX` | `cC` (number) | `"Range"` (82,97,110,103,101) | step `.Vy(0.5)`, min `.Vw(3.0)`, max `.Vx(25.0)`, default `.VA(5.0)`, suffix `.Vz(" blocks")` | horizontal scan radius; `agk() = value²` |
| `uQNEX` | `cC` (number) | `"Range Y"` (82,97,110,103,101,32,89) | step `.Vy(0.5)`, min `.Vw(0.0)`, max `.Vx(16.0)`, default `.VA(3.0)`, suffix `.Vz(" blocks")` | vertical scan half-height |
| `ZnfqN` | `cJ` (toggle) | `"Outline"` (79,117,116,108,105,110,101) | `.WE(true)` | inset floor strips / outline color |
| `TYsOV` | `cC` (number) | `"Size"` (83,105,122,101) | step `.Vy(0.01)`, min `.Vw(-1.0)`, max `.Vx(1.0)`, default `.VA(1.0)` | passed to `dj$sE.toBox()` |
| `ObAdu` | `cJ` (toggle) | `"Ignore Self"` (73,103,110,111,114,101,32,83,101,108,102) | `.WE(false)` | **declared but never read in recovered code** |
| `AMAdS` | `cJ` (toggle) | `"Obsidian"` (79,98,115,105,100,105,97,110) | `.WE(true)` | gates `JMRnw` color (`Vf(AMAdS::WF)`) |
| `vupnD` | `cJ` (toggle) | `"Obsidian-Bedrock"` (79,98,115,105,100,105,97,110,45,66,101,100,114,111,99,107) | `.WE(true)` | gates `QfgSU` color |
| `NUWIx` | `cJ` (toggle) | `"Double"` (68,111,117,98,108,101) | `.WE(false)` | enables 1×2 hole shape |
| `iKDmr` | `cJ` (toggle) | `"Quad"` (81,117,97,100) | `.WE(false)` | enables 2×2 hole shape |
| `oBPYh` | `cJ` (toggle) | `"Void"` (86,111,105,100) | `.WE(false)` | enables bedrock/void sweep in `afY` |
| `JMRnw` | `cG` (color) | `"Obsidian Color"` (79,98,115,105,100,105,97,110,32,67,111,108,111,114) | `.Uf(mG.cnR(255.0f, 0.0f, 0.0f, 80.0f))` — RGBA 255,0,0,**80** | visibility bound to `AMAdS` |
| `QfgSU` | `cG` (color) | `"Obsidian-Bedrock Color"` (…,32,67,111,108,111,114) | `.Uf(mG.cnR(255.0f, 255.0f, 0.0f, 80.0f))` — 255,255,0,**80** | visibility bound to `vupnD` |
| `vJCDp` | `cG` (color) | `"Bedrock Color"` (66,101,100,114,111,99,107,32,67,111,108,111,114) | `.Uf(mG.cnR(0.0f, 255.0f, 0.0f, 80.0f))` — 0,255,0,**80** | no visibility gate |
| `JaDoR` | `cG` (color) | `"Void Color"` (86,111,105,100,32,67,111,108,111,114) | `.Uf(mG.cnR(255.0f, 0.0f, 0.0f, 140.0f))` — 255,0,0,**140** | visibility bound to `oBPYh` |

Registry keybind: **147**.

## Unrecovered

- **`agl(dj$sD)` decompilation failed** (switch). It maps a safety enum → `mG` color, almost certainly to the four `cG` settings above, but the exact enum→setting pairing is not statically proven. Do not assume.
- **`agc(List<BlockPos>)` partially decompiled** — the `dj$sD` assignment logic (which mixes of bedrock/obsidian produce `zrNsv`/`WBAxv`/`XoavU`/`btXid`) is tangled across `** GOTO` labels; only "floor block accepted by `agi` else null" and a boolean pair (`agj`-bedrock tracking) are certain. `btXid` = pure bedrock is evidenced by the `afY` void sweep.
- **`dj$sC`/`dj$sD` display names** are DES-decrypted in their static blocks but the resulting strings were not folded by the tool — enum names `iiJny/XksfN/vzSwM/WdDaI` and `zrNsv/WBAxv/XoavU/btXid` are the only handles available.
- **`afX(dj$sE)` decompilation failed** (called from `afT` as the "hole still valid" check — signature/returns boolean, body unknown).
- Two BufferAllocator size literals (`agu("w", 29385, …)` and `agu("w", 23746, …)`) and the `rk` name literal (`agu("w", 15599, …)`) are runtime string/int decrypts whose plaintexts are not in the folded file.
- `gh.nOCvV` category display name; `cG` color-class semantics (`cou()` base alpha vs `coa/cob` multipliers) are helper-internal.