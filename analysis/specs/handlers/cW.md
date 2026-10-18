# Trap ESP (sixtwo.cW) — handler-derived behavior spec

Class: `sixtwo/cW` · display name **Trap ESP** (module id 140).
Superclass `gg`. **Zero native methods declared** — pure-Java payload class,
not j2cc-virtualized; no image addresses (0x18xxxxxxx) exist to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/cW.java` (1258 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cW.java` — fully decompiled
   (tick, scan predicate, HUD handlers readable).
2. Inner classes `cW$sr` (tracked cluster), `cW$sq` (greedy-merge candidate).
3. `analysis/specs/modules/cW.md` structural spec.
4. Shared scanner `rl` (`NkSiv` instance): `dhL(hash, range, blockPred,
   entityPred)`, `dhG()` results, `dhH()` clear, `dhF()`, `dhJ(hash, range,
   pred)`.
5. Helpers: `cv/cw` multi-select tree, `cC` numeric, `jJ.bIA(center)`
   visibility, `jf.bAI(value, 0, max)` clamp, DES strings via `ScVGK`/
   `kXkmN` tables.

## Runtime model

- **`ZU(gM)`** [cW.java:620] — bare tick: `TjXAG.clear(); hUpkY.clear();
  NkSiv.dhH()` (clears scan results).
- **`ZV(gH.th)`** [630] — pre-motion tick, the main scan loop (below).
- **`ZW(gk)`** [1131] — HUD render: per-cluster cards.
- **`ZX(BlockState)`** [802] — block predicate; **`ZY(Entity)`** [989] —
  entity predicate.
- State: `List<cW$sr> TjXAG` (this-scan clusters), `List<cW$sr> hUpkY`
  (displayed, sorted), `rl NkSiv` scanner, `cW$sr` aging fields `dnK`/`dnN`.

## Per-handler semantics

- `ZV(gH.th)` [630–801] —
  1. if `!bab()` → `NkSiv.dhH()` + return;
  2. else `NkSiv.dhL(cW.UBtqj /* DES long scan-hash, unrecovered */,
     inyHV.VC() /* Range */, cW::ZX, cW::ZY)`;
  3. collect matched block positions + entity positions into `List<Vec3d>`;
  4. `ZZ(list)` [543] greedy-merges positions into `cW$sr` clusters: each
     position joins the **nearest** existing cluster within
     `Cluster Radius²` (squared-distance compare), else seeds a new cluster;
  5. clusters with `count < Minimal Count` are skipped;
  6. previously displayed clusters not matched this scan age up (`dnK`) and
     are removed (`dnN`);
  7. `hUpkY` re-sorted by distance to the local player (`aah`/`aaa`
     comparator [463]).
- `ZX(BlockState)` [802–988] — checks in order, each gated by its `cw.TC()`
  toggle: `AbstractSignBlock` (`eomCv`), `ButtonBlock` (`IcGgS`),
  `LeverBlock` (`WtLkJ`), `AbstractBannerBlock` (`YRSFN`),
  `DecoratedPotBlock` (`TkcsS`).
- `ZY(Entity)` [989–1130] — skip self; `AbstractDecorationEntity` (`PEUjg`),
  `ArmorStandEntity` (`dVboG`), `AbstractMinecartEntity` (`sZCWO`),
  `FallingBlockEntity` (`XQhcG`).
- `ZW(gk)` [1131–1226] — HUD cards via `gk.baT()` draw context: per cluster a
  70×40 card with title (DES ~**18913**), distance line `"Xm"`, count bar
  whose progress `= width × jf.bAI(count, 0, Minimal Count.VG())`, player
  coords line; labels from `ScVGK` DES strings (~**29610** etc.).
- `YO()` [1227] — unregister + clear both lists + scanner.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 114–261):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Scan For" (`cv SEHkS`) | multi-group; toggles: Paintings, Signs, Buttons, Levers, Banners, Armor Stands, Minecarts, Falling Blocks, Decoration Pots (each `cw.Tz()` default-on) | — | all on | [cW.java:114–235] |
| "Minimal Count" (`cC RjLgn`) | numeric | step **1.0**, min **1.0**, max **100.0** | **6.0** | [cW.java:237] |
| "Cluster Radius" (`cC BAskS`) | numeric | step **1.0**, min **8.0**, max **32.0** | **16.0** | [cW.java:253] |
| "Range" (`cC inyHV`) | numeric | step **1.0**, min **1.0**, max **128.0** | **100.0**, suffix **" blocks"** | [cW.java:254] |

## Unrecovered

- `cW.UBtqj` — DES **long** scan-hash passed to `NkSiv.dhL` [declared
  cW.java:111]; it is presumably a program id for the scanner's native/VM
  scan kernel; value unrecovered.
- HUD DES strings not dumped: title slot ~**18913**, label family ~**29610**,
  several format strings in `kXkmN` (e.g. the coords format) — plaintexts
  open.
- `cW$sr` aging constants (how many ticks until an unmatched cluster is
  removed: `dnK`/`dnN` thresholds) are literal ints inside inner-class logic
  that was only partially traced — [uncertain], values not confirmed.
- Whether the greedy merge is deterministic under position-order changes is
  [uncertain] (sort order of the input list before `ZZ` not traced).