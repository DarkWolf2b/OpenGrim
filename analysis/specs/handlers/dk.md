# XRay (sixtwo.dk) — handler-derived behavior spec

Class `sixtwo.dk` extends `sixtwo.gg`. Registry: `sixtwo.dk|XRay|Allows to see ores through walls|key=96|bind=-999` (`analysis/specs/modules/dk.md`). Category `gh.nOCvV`.

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dk.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv` row 49); `sixtwo/dk` absent from `native-handlers-runtime-full.jsonl` / `native-handlers-final.jsonl`; no `native` methods in the class. |
| `analysis/decompiled/payload-decrypted/sixtwo/dk.java` | **PRIMARY** (414 lines, read in full). Setting names and item list folded and verbatim. |
| `analysis/specs/modules/dk.md` | read — registry row; its decrypted setting names ("Ores", "Water", "Lava") match. |
| Event classes `ha`, `gs`, `gr`, `gn`, `gT` | read (`payload-named/sixtwo/*.java`): `ha` = float-carrier event (`bcp(float)`/`bcq()`), `gs`/`gr` = BlockState-carrier events (`bbs()`/`bbr()`), `gn` = FluidState-carrier event (`bbg()`), `gT` = bare event. |
| Helpers | `cK` (item multi-select setting; `WZ(BlockState)` = `eAose.contains(block.getBlock().asItem())`, `WK(Item...)` seed), `ja.byJ()` (static **native** chunk-rebuild call), `rD.dlmvG.chunkCullingEnabled` (public MinecraftClient field). |

## Runtime model

- `super(gf.aZL(96, false, gh.nOCvV).aZS(false))` — module id **96** with the chained descriptor flag `.aZS(false)` (`dk.java:constructor`; which of `gg`'s four descriptor booleans `aZS` feeds is not statically resolvable — see Unrecovered).
- XRay works purely by **cancelling render events** (`hH.bdX(true)`) for everything not on the item whitelist and by disabling chunk culling while enabled. No own draw calls; no world scan.
- Every settings change calls the change-callback `Vd(ja::byJ)` for **all** settings (`bwI().forEach(cB -> cB.Vd(ja::byJ))`) — `ja.byJ()` is the native "rebuild/render distance reload" hook, so toggling any setting re-renders chunks immediately.

## Per-handler semantics

### `aaj()` override — module enabled (`dk.java`)
`super.aaj(); rD.dlmvG.chunkCullingEnabled = false; ja.byJ();`

### `YO()` override — module disabled / tick-off (`dk.java`)
`super.YO(); rD.dlmvG.chunkCullingEnabled = true; ja.byJ();`

### `@hG agz(ha)` — fog/ambient-opacity event (`dk.java`)
Unconditional: `ha2.bdX(true)` (cancel vanilla behavior) and `ha2.bcp(1.0f)` (set the event's float to **1.0**). Given the float setter and the XRay context this is the fog-density/fade event pinned to full visibility; the exact Minecraft hook it proxies is not named in the event class.

### `@hG agv(gs)` — block-render filter (first stage)
`if (!agA(gs2.bbs())) gs2.bdX(true);` — cancel the block render unless the block passes the whitelist. `agA(state) = emDeH.WZ(state)` = block's `.asItem()` ∈ item set.

### `@hG agw(gr)` — block-render filter (second stage)
Identical shape: `if (!agA(gr2.bbr())) gr2.bdX(true);`. `gs` vs `gr` are two distinct BlockState events (two different vanilla render paths, e.g. cutout vs. solid layers — the injector mapping is not in the corpus).

### `@hG agy(gT)` — bare cancel
`gT2.bdX(true);` unconditionally. The event carries no data; by elimination with the remaining events it is the "hide everything else" hook (clouds/borders/overlay-class renderer).

### `@hG agx(gn)` — fluid render filter (**decompile failed**, `IllegalStateException` from CFR)
`gn` carries a `FluidState`. The recovered fragments show multiple `bdX(true)` cancel branches gated by boolean tests; semantically this must be "cancel fluid render unless Water/Lava settings allow it", but the exact condition ordering and the mapping of `AwjXZ`/`JTZwR` onto `Fluids.WATER`/`Fluids.LAVA` (both imported at `dk.java` top) is **not statically provable** — do not guess.

### State / accessors
`emDeH` (`cK`, ores list — exposed via `agB()`), `AwjXZ` (`cJ` — via `agC()`), `JTZwR` (`cJ` — via `agD()`); the public getters exist so other modules (e.g. a block-ESP consumer) can reuse the whitelist.

## Settings→behavior (exact — folded literals verbatim)

| Field | Class | Name (char codes) | Value |
|---|---|---|---|
| `emDeH` | `cK` item multi-select | `"Ores"` (79,114,101,115) | seeded via `.WK(...)` with **19 items**: `ANCIENT_DEBRIS, DIAMOND_ORE, GOLD_ORE, IRON_ORE, EMERALD_ORE, REDSTONE_ORE, LAPIS_ORE, COAL_ORE, NETHER_QUARTZ_ORE, DEEPSLATE_DIAMOND_ORE, DEEPSLATE_GOLD_ORE, DEEPSLATE_IRON_ORE, DEEPSLATE_EMERALD_ORE, DEEPSLATE_REDSTONE_ORE, DEEPSLATE_LAPIS_ORE, NETHER_GOLD_ORE, COPPER_ORE, DEEPSLATE_COPPER_ORE, BEDROCK` |
| `AwjXZ` | `cJ` toggle | `"Water"` (87,97,116,101,114) | `.WE(false)` — default **off** |
| `JTZwR` | `cJ` toggle | `"Lava"` (76,97,118,97) | `.WE(false)` — default **off** |

All three settings: change-callback `Vd(ja::byJ)`. Registry keybind: **96**.

## Unrecovered

- `agx(gn)` fluid handler body — CFR failure; only "cancel branches exist" is provable. The Water/Lava setting→fluid mapping is the open question.
- Which vanilla event each of `ha/gs/gr/gn/gT` is injected at — the injection side lives in the native agent layer (`analysis/ghidra` corpora bind events for other classes; no lowercase `dk` entry exists). The 1.0f target of `ha.bcp` (fog value vs. opacity) is likewise unproven.
- The `.aZS(false)` descriptor flag semantics (`gf.aZS` is native; `gg` copies four booleans `aZN/aZR/aZT/aZV` — the wiring is not visible).
- `ja.byJ()` internals (native; presumably `world.reloadChunks`-equivalent).

## Helper contracts (one line each)

- `cK` — item multi-select setting; `WK(Item...)` seeds, `WZ(BlockState)` tests `block.getBlock().asItem()` membership, `WW(Item)` direct item test (used by `dq`).
- `cJ` — boolean toggle setting; `WE(bool)` sets default, `WF()` live value.
- `ha` — float-carrier render event; `bcp(float)` writes, `bcq()` reads; cancellation via `hH.bdX(true)`.
- `gs` / `gr` — two distinct BlockState-carrier render events (`bbs()` / `bbr()`); the vanilla render paths they proxy are unnamed.
- `gn` — FluidState-carrier render event (`bbg()`).
- `gT` — bare event, no payload; used here purely as a cancel target.
- `ja.byJ()` — static **native** chunk-rebuild/reload hook; called from every settings change callback and from the enable/disable overrides.
- `rD.dlmvG` — `MinecraftClient` singleton; `chunkCullingEnabled` is a public field written directly by `aaj()`/`YO()`.
- `mr.clS(int[])` — char-array → setting-name decoder used by all settings constructors.
- Cross-module note: `dk` is the only render-category module that mutates `MinecraftClient` state fields (`chunkCullingEnabled`) instead of only consuming events; `dq` (Storage ESP) shares the item-set + render-cancel philosophy but draws boxes rather than cancelling.

## Registry metadata

`bootstrap/offline/features/metadata.txt:147`: `sixtwo.dk|XRay|Allows to see ores through walls|key=96|bind=-999` — primary keybind **96**, secondary bind **−999** (unbound). The 19-item ore whitelist ships as the default `Ores` set listed above; it is serialized with the module config through the `cK` setting persistence.
- The four `@hG` filters plus `aaj()`/`YO()` make six event/stub touchpoints total; `agz(ha)` is the only handler that cancels *unconditionally* regardless of module state — even with XRay disabled (`bab()` false), fog is pinned to 1.0 while the class is loaded.
- `emDeH.WZ(state)` whitelists by *item identity* of the block, not by block: an ore variant without a dedicated item entry cannot be added via the UI, so deepslate coverage depends entirely on the seeded 19-item list.