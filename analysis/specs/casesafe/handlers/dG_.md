# Anti Trap (sixtwo.dG) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/decompiled/payload-decrypted/sixtwo/dG.java` (773 lines, CFR, DES constant-pool literals folded to plain `(int)` char codes — all setting names recoverable verbatim). Companion non-folded decompile: `analysis/decompiled/payload-named/sixtwo/dG.java` (identical shape, literals still encrypted).
- **No native corpus**: `analysis/ghidra/handlers-stitched/sixtwo_dG.c` does not exist; `analysis/specs/coverage-matrix.tsv` row `dG | Anti Trap | 0 | 0 | 0` — the class declares **zero JNI handlers**. It is a pure-Java module: every behavior body is visible in the decompile; only string/int constants were DES-virtualized. There are **no image-address citations available or applicable** for this class; per-handler citations below are java line numbers.
- Registry: `dG | sixtwo.dG | Anti Trap | Cancels rendering of specific entities | key=61 | bind=-999` (`analysis/specs/registry.tsv`); coverage row `0 natives declared` (`coverage-matrix.tsv`).
- Structural spec: `analysis/specs/modules/dG.md` (setting table matches; its "behavior bodies mostly native-blocked" note is stale — the decrypted decompile shows full Java bodies and 5 `@hG` listeners).
- Helper classes read: `hf.java` (BlockEntity render event, `bcy()`), `hl.java` (Entity render event, `bcM()`), `he.java` (second Entity render event, `bcx()`), `gr.java` (BlockState outline event, `bbr()`), `hm.java` (BlockState+BlockPos+VoxelShape collision event, `bcN()/bcS()/bcP()`), `hH.java` (event base: `bdX(boolean)` cancel, `bdW()` cancelled), `cv.java` (collapsible checkbox group: `To(cw)` registers child, `Ts()` children), `cw.java` (checkbox: `TC()` state, `Tz()` registers with parent), `ja.java` (native chunk/block-entity cache utilities), `gg.java` (module base), `gf.java` (`aZL(int,boolean,gh)` module descriptor), `ee.java` (Cape — only for the obfuscation `ee.arS()` tripwire static).

### Recoverability caveat

dG is **not** virtualized. 100% of its behavior logic is plain Java; the only j2cc artifacts are the DES constant pool (`alz`/`alA`/`alB` plumbing, shared with all classes) and the `ee.arS()` null-check tripwire threaded through every method. The runtime values of every setting name were recovered from the folded literals in `payload-decrypted`. Confidence in the description below is correspondingly high; residual unknowns are helper-internal (marked).

## Runtime model

- `dG extends gg` (module base). Constructor: `super(gf.aZL((int)61, false, gh.qBzlZ))` — module id **61**, flag `false`, category `gh.qBzlZ` (same render-category constant as ee Cape, dQ Hit Sounds) [decompiled dG.java:95].
- No keybind setting constructed (registry bind -999 = unbound; toggle via `gg` base machinery, `bab()` enabled-check) [decompiled].
- State: one `cv` group (`gMmLp`) + nine `cw` checkboxes, nothing else — the module is a pure **render-event filter**, no timers, no packets, no world mutation [decompiled].
- Lifecycle overrides: `aaj()` (enable) → `super.aaj(); ja.byJ();` and `YO()` (disable) → `super.YO(); ja.byJ();` — `ja.byJ()` is a native static `void`; `ja` also exposes `byD(WorldChunk)→List<BlockEntity>`, `byG()→List<WorldChunk>`, `byF(Box,BlockPos)`, `byH(Block)`, `byI(BlockPos)`. dG calls it only on enable/disable, most plausibly flushing/refreshing the shared chunk block-entity cache these helpers maintain [decompiled; purpose of `byJ` inferred].
- Cancellation contract: each listener reads the event payload, evaluates a type/setting predicate, and calls `event.bdX(true)` to cancel. `alu` additionally rewrites the event's collision shape to `VoxelShapes.empty()` after cancelling [decompiled dG.java:313-323].

## Per-handler semantics

All handlers `[decompiled]`; no native bodies exist.

| handler | citation | role |
|---|---|---|
| `dG()` ctor | dG.java:93-197 | module id 61, build 1 group + 9 checkboxes |
| `als(hf)` | dG.java:87-91 | `@hG` block-entity render cancel: `hf2.bdX(this.alw(hf2.bcy()))` |
| `alt(hl)` | dG.java:277-282 | `@hG` entity render cancel: `hl2.bdX(this.alv(hl2.bcM()))` |
| `alr(gr)` | dG.java:300-311 | `@hG` block-outline cancel: if `alx(gr2.bbr())` then `gr2.bdX(true)` |
| `alu(hm)` | dG.java:313-323 | `@hG` collision-shape cancel: if `alx(hm2.bcN())` then `hm2.bdX(true); hm2.bcS(VoxelShapes.empty())` |
| `alq(he)` | dG.java:674-682 | `@hG` second entity render cancel: `he2.bdX(this.alv(he2.bcx()))` |
| `aaj()` | dG.java:284-298 | enable → `super.aaj(); ja.byJ();` |
| `YO()` | dG.java:756-760 | disable → `super.YO(); ja.byJ();` |
| `alv(Entity)` private | dG.java:346-500 | entity predicate (see below) |
| `alx(BlockState)` private | dG.java:508-672 | block predicate (see below) |
| `alw(BlockEntity)` private | dG.java:684-754 | block-entity predicate (see below) |
| `alz/alA/alB/aly` private statics | dG.java:560-… | DES int-constant kernel + indy bootstrap + `MatchException` identity — obfuscation machinery, no behavior |

- **`alv(Entity)` — which entities vanish.** Checked in order, each gated by its checkbox `TC()`:
  - `DsCRe` "Paintings" → `entity instanceof AbstractDecorationEntity` → true
  - `WygqV` "Armor Stands" → `instanceof ArmorStandEntity` → true
  - `lejDU` "Minecarts" → `instanceof AbstractMinecartEntity` → true
  - `LGsCc` "Falling Blocks" → `instanceof FallingBlockEntity` → true
  - else false [decompiled dG.java:346-500]. (Order and exact pairing verified against line offsets 370/399/428/457.)
- **`alx(BlockState)` — which blocks lose their outline/collision rendering.** Order:
  - `gpExe` "Signs" → `block instanceof AbstractSignBlock`
  - `IJUZj` "Banners" → `instanceof AbstractBannerBlock`
  - `tXJgP` "Levers" → `instanceof LeverBlock`
  - `ZJUtT` "Buttons" → `instanceof ButtonBlock`
  - `TNPUn` "Decoration Pots" → `instanceof DecoratedPotBlock`
  [decompiled dG.java:508-672, targets at 536/565/594/623/652].
- **`alw(BlockEntity)`**: `gpExe` "Signs" → `SignBlockEntity`; `IJUZj` "Banners" → `BannerBlockEntity` [decompiled dG.java:684-754, targets at 704/733].
- Net effect: an "anti-trap" filter — signs/buttons/levers/banners/pots stop rendering their outlines and collisions, paintings/armor stands/minecarts/falling blocks stop rendering entirely, so a trapper cannot hide the trap geometry from the user. Note **both** `hl` and `he` fire `alv` (two entity render hooks get the same answer) and **both** `gr` (outline) and `hm` (collision shape) fire `alx` — coverage of every vanilla draw/collision path for the block side [decompiled].

## Settings → behavior mapping

Group: `gMmLp = new cv(this, mr.clS("Hide"))` — group name decrypted from `(int)72,105,100,101` = `'H','i','d','e'` [decompiled dG.java:96].

| field | name (char codes → literal) | chain | line |
|---|---|---|---|
| DsCRe | `Paintings` | `.Tz()` | 107 |
| gpExe | `Signs` (83,105,103,110,115) | `.Tz()` | 108 |
| ZJUtT | `Buttons` | — | 117 |
| tXJgP | `Levers` | — | 125 |
| IJUZj | `Banners` | `.Tz()` | 134 |
| WygqV | `Armor Stands` | `.Tz()` | 148 |
| lejDU | `Minecarts` | `.Tz()` | 159 |
| LGsCc | `Falling Blocks` | `.Tz()` | 175 |
| TNPUn | `Decoration Pots` | — | 192 |

- Every value is a `cw` checkbox; predicate gate is `cw.TC()`. No numeric, mode, keybind, or text settings exist in this class [decompiled].
- `.Tz()` = `parent.To(this)` — registers the checkbox into the parent `cv`'s child list `jjOKZ` (returned by `cv.Ts()`). Its exact consequence (default-checked state vs. always-visible row) lives in `cv`/render code and is **not** fully recovered; the unchecked siblings (`Buttons`, `Levers`, `Decoration Pots`) get no `To` registration [decompiled cw.java:152-155, cv.java:40-…, uncertain].

## Unrecovered / uncertain

1. **`ja.byJ()` semantics** — native static void on the chunk/block-entity cache helper; called only on enable/disable. Flush-invalidate is the plausible reading; not proven [inferred].
2. **`cw.Tz()` / `cv.To` default-state semantics** — registration into the group child list only; whether it implies default-`true` is unrecovered [uncertain].
3. **`hf` vs `he` distinction** — both wrap a single `Entity` with a cancel flag (`bcy`/`bcx`, `bcM`); which vanilla render pass each corresponds to (main model vs. label/outline pass) is not determinable from the stubs [uncertain].
4. **`hm` shape rewrite timing** — `bcS(VoxelShapes.empty())` replaces the collision shape only after `bdX(true)`; whether the client or the event consumer wins is decided by the (unnamed) event dispatcher [uncertain].
5. The `false` flag in `gf.aZL(61, false, gh.qBzlZ)` — meaning unrecovered (same across all sibling modules) [uncertain].