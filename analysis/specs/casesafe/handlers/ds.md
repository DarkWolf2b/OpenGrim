# Entity ESP (sixtwo.ds) — handler-derived behavior spec

Class `sixtwo.ds` extends `sixtwo.gg`, implements `sixtwo.lG` (world-render participant marker). Registry: module id **80**, category `gh.nOCvV` (`analysis/specs/modules/ds.md`; `ds.java` decrypted constructor: `super(gf.aZL((int)80, false, gh.nOCvV))`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_ds.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv` row 56); `sixtwo/ds` absent from `native-handlers-runtime-full.jsonl` and `native-handlers-final.jsonl`; no `native` methods. So no image addresses exist to cite; all recovery is from CFR output. |
| `analysis/decompiled/payload-decrypted/sixtwo/ds.java` | **PRIMARY** (462 lines, fully recovered: constructor + single `@hG` handler; every setting name and default visible as folded int arrays). |
| `analysis/decompiled/payload-named/sixtwo/ds.java` | Same content pre-decryption (literals behind DES call-site indirection `ds.aik`); used only to cross-check. |
| Helpers | `jJ.bIB(Entity)` — `frustum.isVisible(entity.getBoundingBox())` where the frustum is `worldRenderer`'s captured frustum (repositioned) or culling frustum, `false` if null (`jJ.java:59-79`); `jg.bBA(Entity)` entity bounding box; `kH.bTJ(MatrixStack, Box, boolean filled, boolean)` outline builder (`.dtN(outline)` / `.dtO(fill)` / `.dtS()`); `MMuss` box batcher (`startBatch` / `bUS` / `endBatch`); `rD.dlJ().aZx(fJ.class)` module lookup; `fJ` = Hitbox-Size module (see below). |

## Runtime model

- One world-render handler (`aig`, event `go.sX`, `.bbh()` = MatrixStack) redraws, each frame, a filled+outline box around every world entity matching the "Entities" set.
- **No persistent state at all**: no caches, no fade animators, no executors; the module is a pure per-frame transform of world entity list → box batch.
- Box geometry is the entity's own `Box` (`jg.bBA`), **optionally inflated by the Hitbox-Size module** (`fJ`) when ds runs in the "Hitbox" mode and that module is enabled, then translated by `camera.getCameraPos().negate()` into the world-render space shared by all `go.sX` consumers.
- Two color pairs: normal (`"Outline Color"`/`"Fill Color"`, default theme) and friend (`"Friend Outline Color"`/`"Friend Fill Color"`, default the shared friend-color constant `jk.jEkxo`). Friends are resolved only for `PlayerEntity` via the `qQ` name registry (`rD.dmc().ddy(player)`).
- Panic/tamper switch: `dh.afl()` returning non-null makes the handler bail before any iteration (`if (iSArray != null) break block29;` — block29 encloses the whole method body).

## Per-handler semantics

### `@hG aig(go.sX)` — world render (`ds.java:315-443`, decrypted)
1. Guard `bab()` (module enabled && client player && world non-null) → return otherwise.
2. `MatrixStack stack = sX2.bbh()`; `fJ hitboxModule = rD.dlJ().aZx(fJ.class)` (direct module-instance lookup, no event).
3. `MMuss.startBatch()`; `Vec3d cameraNeg = rD.dlmvG.gameRenderer.getCamera().getCameraPos().negate()` (computed **once**, outside the loop).
4. Per `Entity entity` in `rD.dlmvG.world.getEntities()`:
   - Skip `entity == rD.dlmvG.player` (self).
   - Require frustum visibility: `jJ.bIB(entity)` must be **true** (its result routes the entity; false → `continue`).
   - Require set membership: `this.RIxRc.VX(entity)` (cF entity-set test) must be **true**, else `continue`.
   - `Box box = jg.bBA(entity)`.
   - If mode `Tkevx.SQ(1)` (i.e. option index 1 = `"Hitbox"`) **and** `hitboxModule.bag()` (the fJ module's enabled flag `RliRe`): `box = box.expand((double) hitboxModule.aUP(entity))`. In `"Model"` mode, or with fJ disabled, the raw bounding box is used — ds never reads any model/cuboid data itself (unlike `di`, which does its own model projection).
   - `box = box.offset(cameraNeg)`.
   - Friend branch: `entity instanceof PlayerEntity` **and** `rD.dmc().ddy((PlayerEntity) entity)` → emit `MMuss.bUS(kH.bTJ(stack, box, NgLhx.WF(), false).dtN(zwpWs.Wf()).dtO(MFFfX.Wf()).dtS())` (friend colors). All other entities → same builder with `VLjNm.Wf()` / `BDwzq.Wf()` (normal colors). The `kH.bTJ` 3rd argument is the live `"Filled"` toggle; the 4th is the constant `false` (same helper flag as in `dq`/`di`).
5. `finally MMuss.endBatch()` — flush even on exception.
6. Panic path (`dh.afl() != null`): nothing is drawn at all (no degraded render).

Note on the friend test: it uses the `qQ` **name-registry membership** (`ddy`), the same predicate other modules route through the "friend" profile group (`dm` Friend Indicator, `fJ` "Ignore Friends"). It does **not** consult `rD.dlM().aLp` (the `fo` friends-enabled + friend-set check).

### API contract of the expansion source `fJ` (module id **6**, category `gh.xwjCw`)
- `fJ.aUP(Entity)` → float: `0.0f` for the client player; `0.0f` when its `"Disable If Holding Cobweb"` toggle is on **and** the client player `isHolding(Items.COBWEB)` **and** `jg.bBs((LivingEntity) player)` (self-in-cobweb helper) holds; `0.0f` for a `PlayerEntity` when `"Ignore Friends"` is on and the player is in the `qQ` registry; otherwise the cached size `QAlRd`.
- `QAlRd` is refreshed each tick by `@hG aUN(hw.tv)` → `KbVJm.UN()` (the "Size" number setting).
- Separately `@hG aUO(hr)` intercepts the hitbox-size mixin callback (`hr` wraps `CallbackInfoReturnable<Float>` + entity) and does `hr2.bdc().setReturnValue(aUP(entity))` when enabled — i.e. fJ not only reports a value to ds but *actually rewrites* server-visible hitbox size; ds's "Hitbox" mode renders boxes matching those inflated hitboxes.

## Settings→behavior (exact — decrypted constructor, names re-folded verbatim from char arrays)

| Field | Class | Name | Value |
|---|---|---|---|
| `RIxRc` | `cF` entity set | `"Entities"` (69,110,116,105,116,105,101,115) | `.VS(jg$tJ.OCdZM)` preset binding; seeded `.VT(EntityType.ITEM, EntityType.TNT_MINECART)`; tested with `VX(entity)` |
| `NgLhx` | `cJ` toggle | `"Filled"` (70,105,108,108,101,100) | `.WE(false)`; read live per draw as the `kH.bTJ` filled flag |
| `VLjNm` | `cG` color | `"Outline Color"` (79,117,116,108,105,110,101,32,67,111,108,111,114) | `.Uf(rD.dlM().bjG().bis())` — theme color |
| `BDwzq` | `cG` color | `"Fill Color"` (70,105,108,108,32,67,111,108,111,114) | `.Uf(theme.cob(0.5f))` — theme at half value |
| `zwpWs` | `cG` color | `"Friend Outline Color"` (70,114,105,101,110,100,32,79,117,116,108,105,110,101,32,67,111,108,111,114) | `.Uf(jk.jEkxo)` — shared friend-color constant (native-decrypted, value unrecovered) |
| `MFFfX` | `cG` color | `"Friend Fill Color"` (…,70,105,108,108,32,67,111,108,111,114) | `.Uf(jk.jEkxo.cob(0.5f))` |
| `Tkevx` | `ct` mode | `"Mode"` (77,111,100,101) | `.SO(1)` — default option index **1** |
| `Bcsfp` | `cu` option | `"Model"` (77,111,100,101,108) | option 0 of `Tkevx` |
| `omxYT` | `cu` option | `"Hitbox"` (72,105,116,98,111,120) | option 1 of `Tkevx` — the factory default |

Mode wiring: `Tkevx.SQ(1)` selects "Hitbox" (and only "Hitbox") as the expansion trigger. Notably the `"Model"` option appears **only** as an option entry — no recovered code branch reads `SQ(0)`; with "Model" selected the handler behaves identically to Hitbox-with-fJ-disabled (plain bounding box). Either the "Model" branch is dead in the handler (mode may feed something else, e.g. the settings UI) or its effect is drawn in a Java shell class — unresolved (see Unrecovered).

Registry keybind: **80**. Category `gh.nOCvV` (the render/ESP category shared by all of `di`–`dz`).

## Unrecovered

- `jk.jEkxo` — the shared friend color `mG` constant (static DES-decrypted field, initialized in `jk`'s static block). RGB/alpha value not folded anywhere; affects both Friend color defaults (also used by `dm`, `dq`, `di`).
- The exact default RGBA of theme colors: `.bis()`/`.cob(0.5f)` resolve at runtime from the `pI` theme registry — no static value.
- Semantics of the `"Model"` option (`Bcsfp`): no recovered branch keys on `SQ(0)`. Open question: does Model mode feed a Java-shell model renderer (as `di` does internally) that was not decompiled, or is the option vestigial?
- `cF` preset constant `jg$tJ.OCdZM` — which preset the "Entities" set is bound to (the other value-classes use `VS(...)` to link an enum of preset groups; `jg$tJ` enum constants are not folded).
- The 4th `kH.bTJ` argument (constant `false` in every consumer) — helper-internal flag, presumably depth/culling related; `kH` is a named-helper contract, not in scope.
- `fJ`'s `"Size"` suffix string `lMLXr` (4th `UH` arg of `cA`) and its `"Only For Slots"` / `"Slots"` (`cz`) settings are unused by `aUP` — their consumer lives elsewhere in `fJ` (slot-specific expansion), out of ds scope.

## Helper contracts (one line each)

- `jJ.bIB(Entity)` — frustum visibility predicate (`worldRenderer`-captured frustum; false when frustum null); shared with `dl` Outlines.
- `jg.bBA(Entity)` — entity bounding box accessor (vs. `jg.bBB(entity, pos)` used by `di`'s fallback with an explicit position).
- `kH.bTJ(MatrixStack, Box, boolean, boolean)` — shared outline+fill box builder (also `dq`); `.dtN`/`.dtO`/`.dtS`.
- `MMuss` — static box batcher (also `dq`); `startBatch()` here uses the no-arg overload with no explicit layer.
- `fJ` — Hitbox-Size module (id 6, category `gh.xwjCw`): `bag()` enabled flag, `aUP(Entity)` cached expansion; its `hr` mixin callback actively rewrites hitbox size (see API contract above).
- `qQ` / `rD.dmc().ddy` — persistent name registry membership; same friend predicate as `dm`/`du`/`do`.
- `cF` — entity-type set (`VX` membership, `VS` preset scope, `VT` seed).
- `dh.afl()` — panic probe; non-null → handler draws nothing.
- Registry metadata: `bootstrap/offline/features/metadata.txt:115`: `sixtwo.ds|Entity ESP|Draws box around entities|key=80|bind=-999` — primary keybind **80**, secondary bind **−999** (unbound). Description "Draws box around entities" matches the recovered `kH.bTJ` path exactly.