# dI — Nuker: real block-list widget + tick-quantum check

Date: 2026-10-21 · Module: `sixtwo.dI` → `src/main/java/dev/opengrim/modules/world/Nuker.java`
Status: block-list setting/widget wired · 50 ms tick quantum remains `[G]` · `ja.byI` native remains

## Evidence base

- `analysis/decompiled/payload-decrypted/sixtwo/dI.java`
  - Settings 133-374; Blocks `cK fEoGq = new cK(...).WM(jc.GjreY)` (143),
    Range `cC …4.5 " blocks"` (144), Delay `cC …0.0 " ticks"` (145),
    Block To Mine (146-182), Selection Key (183-197), Mining Speed (198-236),
    Options (237-298), Render Block/colors (299-347), Mine In Screens
    (348-364).
  - Handlers: `alE` 541-626, `alK` 632-718, `alM` 720-793, `alH` 798-895,
    `alN` 933-936, `alJ` 942-1115, `alI` 1129-1203, `alF` 1213-1425, `alG`
    1427-1500, `alL` 1540-1647.
- `cK` item-set setting (`analysis/decompiled/payload-named/sixtwo/cK.java`):
  - `NBjNm` = available pool (`WM`, 335-368), `eAose` = selected set (`WP`,
    401-403), `WL` 117-119.
  - Membership: `WY(Block)` 552-554, `WZ(BlockState)` 556-558,
    `WW/WX` 567-573.
  - `WV` 484-550 only removes; the last element is kept when `nppnu` is
    **false**. `WU` 584-620 adds.
  - `Xa` 121-203 intersects a candidate with the pool, caps via `Xb`
    405-435, and only auto-fills the first pool item when the result is empty
    **and `nppnu` is false**.
  - Constructor defaults 54-60: `nppnu = true`, `mnYah = Integer.MAX_VALUE`.
    The DES value is recovered: `analysis/decrypted/full-dump.jsonl:22150`
    (`sixtwo.cK / Xj / o` → `2147483647`).
  - Serialization: `SR` stores raw item ids (642-646), `SS` resolves by raw id
    (294-330).
- Default pool `jc.GjreY` = `jc.bzN()` (jc.java:1335-1352): every declared
  `Blocks` field whose `asItem() != Items.AIR`, in reflection order.
- Consequence (corrects the previous audit note): `WM(jc.GjreY)` fills only
  the pool. With `nppnu = true` the initial selected set is **empty**; From
  List mines nothing until the user picks blocks. The earlier port's
  "default = every block item" conflated the pool with the selection.
- `mT.cpD(long)` (`mT.java:130-160`) = `cpF() > ticks * fCqJQ`; `fCqJQ` is
  DES-CBC-decrypted in `<clinit>` (mT.java:29-54) from block
  `-5376001920620031636L` with key `StDmr ^ 0x676A8E58E963L`. `StDmr` comes
  from `gb.aYR(1886939362979048446L, 7818008554207186013L, …).a(58514490112402L)`
  (mT.java:57-58); `gb.aYR`/`gb.a` are native (`gb.java` declares them
  `native`), so the quantum is **not statically recoverable**.

## Changes

- `ItemListSetting` (new, `src/main/java/dev/opengrim/settings/`):
  - pool + ordered selected set, `toggle`/`select`/`deselect`, `contains`
    overloads, `maxSelections`, `allowEmpty` (`nppnu`), raw-id JSON
    serialization (`cK.SR/SS`), and the `Xa` cap/auto-fill rules.
- `ItemListWidget` (new, `src/main/java/dev/opengrim/gui/ui/widgets/`):
  - collapsible scrollable list with a name filter, check squares and
    selected count; one click toggles one item. The original's item-icon grid
    geometry is native and unrecovered, so the port draws the recovered
    name/selected-state surface instead (`[S]`, documented in its javadoc).
  - Registered under `case ItemListSetting` in `ModuleWidgetFactory`.
- `Nuker`:
  - `blocks` is now a real `ItemListSetting` bound to the `jc.GjreY` pool with
    `allowEmpty = true`, `maxSelections = Integer.MAX_VALUE` and no default
    selection — reproducing `WM(jc.GjreY)` → `Xa(empty, true)`.
  - `getBlocks()/addBlock()/removeBlock()` delegate to the setting; the
    From List branch uses `blocks.contains(block)` (`cK.WY`).
  - Removed the placeholder `GroupSetting blocksGroup` and the separate
    programmatic `Set<Item>`.
- `50 ms/tick`: kept as `MS_PER_TICK = 50L` but re-documented as `[G]` with
  the exact DES/native-key evidence above. It is the vanilla tick quantum, not
  a guessed private value; no attempt was made to fake `fCqJQ`.
- `ja.byI` (Avoid Lava, dI.java:1027/1371) is untouched: still the labelled
  3×3×3 lava-fluid heuristic.

## Remaining

- `[N]` `ja.byI(BlockPos)` — native method with no Java body and no ghidra
  handler; the 3×3×3 lava test remains a labelled guess.
- `[G]` `mT.fCqJQ` — native-key DES value, unrecovered; 50 ms used.
- `[U]` `gv` pre-rotation tick and `gV` block-state events are folded into
  the tick/observed-dig paths (unchanged); `gA` selection key is polled.
- `[U]` `of.ahXwo`-style scanner order is not part of `dI`; target order is
  `BlockPos.iterateOutwards` as before.

## Build

```
JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava
```

Result: **PASS** (forced full recompile with `--rerun-tasks`:
`BUILD SUCCESSFUL`, only the pre-existing `WorldRenderEvent` deprecation
warning).

## Files

- `src/main/java/dev/opengrim/settings/ItemListSetting.java` (new)
- `src/main/java/dev/opengrim/gui/ui/widgets/ItemListWidget.java` (new)
- `src/main/java/dev/opengrim/gui/ui/ModuleWidgetFactory.java` (item-list binding)
- `src/main/java/dev/opengrim/modules/world/Nuker.java`

Not modified: `PARITY.md`, `PROGRESS.md`, `privacy.md`, `.gitignore`, git
state; no other module and no GUI render pipeline file.
