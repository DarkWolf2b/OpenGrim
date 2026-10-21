# Storage ESP (sixtwo.dq) — theme/item-surface fix

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/StorageEsp.java`
Status: ported; recovered theme-default colors applied; item-list widget blocked by the framework.

## Evidence

- `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dq.java`
  - ctor/settings 107–607 (item set line 136; 18 colors 189–580)
  - `ahP` tick 1078–1138, `ahR` scan 881–930, `ahO` 773–825,
    `ahN` 723–771, `ahQ` render 945–1076
  - `irQyF` static DES long at 710–713 (key `oXnOA ^ 13066716436961`,
    `oXnOA = gb.aYR(...)`; native key, not in the pool dump)
- `analysis/specs/handlers/dq.md` — full handler/setting table, §Unrecovered
- `analysis/decrypted/full-dump.jsonl` — 725 `sixtwo.dq` sites (settings strings,
  colors, numbers) but no `irQyF` (it is not a BSM site)
- `analysis/decompiled/payload-cfr/sixtwo/ie.java` 725–745 (`bhF..bhJ`) and
  `analysis/decompiled/payload-named-cfr/sixtwo/ig.java` 238, 383:
  `ig.PtFoz = ie.bhE(text WHITE, accentStrong WHITE, background 12,12,12,
  panel 24,24,27, accent mG.yHyOB = 151,71,255)`; `ig.bis() = bhJ()` = **accent**
- `analysis/decompiled/payload-decrypted/sixtwo/cG.java` 655–730: `Uf(mG)` sets
  the current color (`HYLiK`), not a lazily-read theme color — so the original
  captures the accent value once at construction.
- `analysis/decompiled/payload-named-cfr/sixtwo/cK.java` — item-set setting
  (`NBjNm` universe, `eAose` selection, `WK` seeds, `WQ` selects all):
  dq seeds 9 items and selects all; `WS(false)` is never called, so an empty
  selection is allowed (`nppnu` default true).

## What changed

- All 18 color defaults changed from the previous white stand-ins to the
  recovered theme accent:
  - `Chest/Barrel/Shulker/Ender Chest/Furnace/Trapped Chest/Brewing Stand/
    Spawner/Hopper Outline Color` = `rD.dlM().bjG().bis()` → default theme
    accent `0xFF9747FF`;
  - the matching `... Fill Color` = `bis().cob(0.5f)` → `0x809747FF`
    (alpha 0.5 preserved; `ColorSetting` keeps `allowAlpha`).
- Javadoc updated with the `ie.bhE`/`ig.PtFoz` evidence and the
  capture-once semantics.
- No behavior change: scan, throttle, frustum gate, tracer origin, box draw
  order and item→toggle mapping are untouched.

## Item-list surface

The original "Block Entities" setting is `cK`, a real item-set widget: a
universe of item stacks (`NBjNm`), a selected set (`eAose`), and `WK`/`WQ`
selectors. The settings popup binds it to the native `x` widget handler
`0x1907d0d30` (`ModuleWidgetFactory` class-doc table, row `cz/cF/cK`).

The shared settings stack now ships `ItemListSetting` + `ItemListWidget`
(landed by the GUI work stream during this session). Storage ESP uses it
directly:

- options = the nine `WK` entries in seed order;
- `maxSelections = Integer.MAX_VALUE` (decrypted `cK.Xj("o",32104)` value,
  full-dump.jsonl:22150);
- `allowEmpty = true` (the original `nppnu` stays true; `WS(false)` is never
  called);
- all nine selected at construction, reproducing `WQ()`;
- `ahO`'s colored-shulker collapse is kept in `visibleFor`.
- `ahT`'s per-item color visibility is unchanged and still calls `visibleFor`.

The original widget's native item-icon grid is replaced by the framework's
name+checkbox list (`ItemListWidget` javadoc already labels that as its `[S]`
surface); the setting type, universe, selection set and membership semantics
are the recovered `cK` contract.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[N]` `dq.irQyF` rescan throttle: DES key is `gb.aYR`-derived (native), not
  present in `full-dump.jsonl`; 250 ms remains a labeled estimate. The
  trace-derived constraint is `irQyF ≤ 14.4 s`.
- `[N]` `balhj` executor thread count/daemon flag came from an unrecovered ctor
  branch; port uses one daemon thread.
- `[S]` box/tracer batchers are direct `VertexConsumer` draws
  (`debugFilledBox`/`lines`) with the same geometry/colors/order; `kH.bTJ`'s
  fourth boolean (depth-test flag, constant false) has no equivalent.
- `[S]` the item-list widget draws the recovered name/selected set, not the
  original's native icon grid.
- `[N]` `cK.WQ()` selection semantics are reproduced (all nine selected);
  `cK`'s empty-selection fallback is not relevant because `nppnu` stays true.
