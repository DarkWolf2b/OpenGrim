# 2D ESP (sixtwo.di) — handler-derived behavior spec

Class `sixtwo.di` extends `sixtwo.gg` (module base). Registry: `sixtwo.di|2D ESP|Allows you to see targets through walls|key=158|bind=-999` (`analysis/specs/modules/di.md`). Category `gh.nOCvV` (5th of 5 gh enum constants; display strings native-blocked in `gh`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_di.c` | **MISSING — does not exist for any lowercase `d` class.** Verified: `sixtwo/da..dz` have **0 natives declared / 0 bound** in `analysis/specs/coverage-matrix.tsv` (rows 47–64), and `sixtwo/di` never appears in `native-handlers-runtime-full.jsonl` / `native-handlers-final.jsonl` (which list only uppercase `dA–dZ`). These classes declare **no `native` methods at all** (`grep 'native '` on all 18 decrypted files: empty). |
| `analysis/decompiled/payload-decrypted/sixtwo/di.java` | **PRIMARY evidence** (908 lines, read in full). All DES/CallSite literal-decryption boilerplate (`afO`/`afP`/`afQ`/`cfr_ldc_0`) folded; every setting name and numeric literal below is byte-verified from the folded char arrays. |
| `analysis/decompiled/payload-named/sixtwo/di.java` | read — identical except literals still `afQ(...)`-encrypted; diffed to confirm the decrypted variant covers 100 % of the class. |
| `analysis/specs/modules/di.md` | read — registry row + setting names; its "0 settings constructed" claim is wrong (char-array settings aren't folded there). |
| Shared helpers | `cI`, `cE`, `cB`, `iS`, `gg`, `gf`, `gh`, `mr`, `pl`, `pv`, `pj`, `lc`, `pF`, `py`, `po`, `pI`, `qQ`, `mE`, `fo`, `jg`, `jI`, `dh`, `rD`, events `gL/gM/gN/gi/gk`, `hH` — read (see Runtime model). |

**Consequence:** unlike the j2cc-virtualized classes, every handler body of `di` is **fully recovered Java** (CFR output + folded literals). No VM hides arithmetic here. Image-address citations `[18xxxxxxx]` are unavailable for this class by construction — citations below are Java method names + line references into `di.java` (decrypted variant).

## Runtime model

- **Registration:** `super(gf.aZL(158, false, gh.nOCvV))` — module id **158**, not visible-by-default flag `false`, category `nOCvV` (`di.java:103`). Base `gg(gf)` then builds the toggle keybind `rk` (`rj.UPXqT` mode) and secondary bind `rk`/`ri` from literals decrypted inside `gg` (`gg.java:59-77`).
- **Settings container:** module extends `iS` (settings group; `bwH` add / `bwI` list, native-virtualized helper). Two settings are attached in the constructor (`di.java:104-127`).
- **Panic/anti-tamper gate:** every handler opens with `iS[] iSArray = dh.afl()` (`dh.afl()` returns static `Bzwgh`, settable via `dh.afk`). On the normal path it is **null**; the decompiled control flow shows that when it is **non-null** the handlers take degraded paths (skip instance-of checks, skip friend filtering, skip drawing). All `iSArray != null → break blockX` jumps below are this switch, not behavior.
- **Event wiring** (all `@hG`): `gL.tk` (packet event sub-type), `gM`, `gN` (empty tick events — start/end of a phase), `gi` (entity label render: Entity + Text + MatrixStack + OrderedRenderCommandQueue, `gi.java`), `gk` (world/HUD render: carries `lC` = the client's `DrawContext` wrapper, `gk.baT()`).
- **Rendering contract:** `di` itself never issues draw calls. It computes a screen-space `lc` rectangle per player and defers to:
  - `pj.cNs(lC, lc rect, Entity, List<py> profiles, boolean)` — profile-driven 2D box renderer (`pj.java:33`, final class);
  - `pl.cNJ/pv.cPH/cPI/cPJ/cNN` — shared per-frame setup/teardown helpers (decompiled, packet/status tracking; `pl` imports EntityStatusS2CPacket + Items, `pv` imports EnderPearlEntity + Items);
  - profile objects `py` (abstract: `order()`, `active()`, `ti(lC)` hit-test) and `po` (`po.active()`, `po.cOt()` = "hide vanilla nametag" flag) from the profile registry `rD.dlS()` (`pI.cSP(pF)`).
- **Profile group selection:** `pF` enum `{JMCCO, bnwqC}` (display strings are native, `pF.cSu()/cSv()` — **unrecovered**). `rD.dmc()` returns `qQ`, a name→`mE`(name + long timestamp) tracked-player registry; `qQ.ddy(PlayerEntity)` = name membership. Players in that registry render under group `bnwqC`, everyone else under `JMCCO` (`di.java:399-403, 619-621`). `fo` (Friends module, `rD.dml()`) is a *separate* filter: `fo.aLp(player)` = friends-enabled AND player ∈ friend set (`fo.java:118-134`).

## Per-handler semantics

### `@hG afx(gL.tk)` — packet event (`di.java:213-233`)
Normal path: if module active (`bab()`) call `pv.cPH(tk)`; always call `pl.cNJ(tk)` afterwards. Panic path (`afl()≠null`): only `pl.cNJ(tk)`. (Status/pearl trackers tick on packet traffic.)

### `@hG afy(gM)` / `@hG afz(gN)` — tick pair (`di.java:238-244`)
Unconditionally `pv.cPJ(); pl.cNN();`. No module-state logic.

### `@hG afA(gi)` — vanilla nametag suppression (`di.java:249-311`)
Guard chain, in order: module active (`bab()`) → event entity `gi.baL()` → `instanceof PlayerEntity` → player ≠ `rD.dlmvG.player` (local player) → **not** friend (`rD.dml().aLp(player)` false) → `afK(player)` true → `gi.bdX(true)` (cancel/suppress on `hH` event base, `hH.java:8`).
`afK(player)` (`di.java:615-684`): resolve profile group via `rD.dmc().ddy(player)`; for each `py` of `rD.dlS().cSP(group)`: if `py instanceof po` and `po.active()` and `po.cOt()` → **true**. I.e. vanilla nameplates are hidden exactly when an active 2D-ESP profile requests it.

### `@hG afB(gk)` — the draw pass (`di.java:314-407`)
1. Guard: module active (`bab()`), else return (after `pv.cPI()` — see block layout: normal path calls `pv.cPI()` first).
2. `lC lC2 = gk2.baT()` (DrawContext wrapper); `float f2 = lC2.cfh()` = tick delta.
3. For every entity in `rD.dlmvG.world.getEntities()`: keep only `PlayerEntity`; skip local player; skip friends (`rD.dml().aLp`) — panic path instead uses `pl.cNK(player)` as the keep/drop predicate.
4. `lc box = afC(player, tickDelta)`; skip if null (off-screen).
5. Profile group by `qQ.ddy`; fetch profiles `rD.dlS().cSP(group)`; `pj.cNs(lC2, box, player, profiles, false)` — last arg constant `false`.

### Box computation — `afC`/`afD`/`afE`/`afF`/`afG`/`afH`/`afI`/`afJ`
- `afC(player, delta)` (`di.java:769-801`): if `player instanceof AbstractClientPlayerEntity` → `afD(...)`, and if that returns non-null use it; else fall back to `afJ`.
- `afD` (`di.java:803-827`): get the vanilla `PlayerEntityRenderer` from `rD.dlmvG.getEntityRenderDispatcher().getPlayerRenderer(player)`; pick model via `afE`; build a fresh `PlayerEntityRenderState`, `updateRenderState(player, state, delta)`, then `afF(model, state, player, delta, renderer.getPositionOffset(state))`.
- `afE` (`di.java:715-767`): skin model from `player.getSkin().model()`; `PlayerSkinType.SLIM` → lazily-built `new PlayerEntityModel(rD.dlmvG.getLoadedEntityModels().getModelPart(EntityModelLayers.PLAYER_SLIM), true)`, else `EntityModelLayers.PLAYER` + `false` (arms-crossed flag `false` = classic arms).
- `afF` (`di.java:497-512`): `model.resetTransforms()`; new `MatrixStack`; translate to `getLerpedPos(delta) + positionOffset`; uniform scale `state.baseScale` ×3; pose via `afG`; then `scale(-1,-1,1)`, `scale(0.9375, 0.9375, 0.9375)` (vanilla 0.9375 model shrink), `translate(0, -1.501, 0)` (vanilla model-space offset); walk all cuboids: `getRootPart().forEachCuboid(stack, (entry,name,i,cuboid) -> afH(acc, entry.getPositionMatrix(), cuboid))`; collect into `di$sA` (accumulator inner class, `doC(Vec2f)` add / `doD()` result).
- `afG` (`di.java:514-611`) — pose replication of vanilla LivingEntityRenderer setup: `rotate Y by 180 - bodyYaw`; if `state.isGliding != 0` and not `state.usingRiptide` → `rotate X by getGlidingProgress() * (-90 - pitch)`; if `state.applyFlyingRotation` → `rotate Y by state.flyingRotation`; else if `leaningPitch > 0`: rotate X by `lerp(leaningPitch, 0, touchingWater ? -90 - pitch : -90)`; if `state.isSwimming` → `translate(0, -1, 0.3)`.
- `afH` (`di.java:686-696`): project all 8 cuboid corners via `afI`.
- `afI` (`di.java:698-712`): corner `(x/16, y/16, z/16)` transformed by the cuboid's `Matrix4f` (`m30 + m00*x + m10*y + m20*z` etc.), projected with `jI.bIw(Vec3d) → Vec2f`; accumulate.
- `afJ` (`di.java:409-492`) — axis-aligned fallback: `Vec3d pos = getLerpedPos(delta)`; `Box box = jg.bBB(entity, pos)`; project the 8 box corners with `jI.bIw`; **any** null projection → return null; accumulate `minX, minY, maxX, maxY`; reject when `width ≤ 1.0f` or `height ≤ 1.0f`; result `new lc(minX, minY, width, height)`.

### State fields
`cI TLppV` (Edit ESP button), `cE ewpSI` (ESP Profiles), `PlayerEntityModel VPirC` (classic model cache), `PlayerEntityModel pwusN` (slim model cache). No counters, no per-player maps.

## Settings→behavior (exact, from folded literals)

Constructor literals folded from char arrays (`di.java:104-127`):

| Object | Type | Name (folded char codes) | Extra |
|---|---|---|---|
| `TLppV` | `cI` (action button, holds `Runnable` via `Wx`) | `"Edit ESP"` (69,100,105,116,32,69,83,80 — 8 chars) | callback `aR::yc` |
| `ewpSI` | `cE` (profile-list setting; `SS(JsonElement)` → `pG.fromJson` → `rD.dlS().cSS(pG)`; `SR` → `rD.dlS().cSQ().toJson()`) | `"ESP Profiles"` (69,83,80,32,80,114,111,102,105,108,101,115 — 12 chars) | disabled-callback `Vf(() -> false)` |

There are **no numeric settings** on the module itself: every knob lives inside the `pG`/`py`/`po` profile objects managed by `cE`/`pI`. The registry keybind is **158**.

## Unrecovered

- `pF` enum display strings: `pF.cSu()/cSv()` are native (`pF.java`); which of `JMCCO`/`bnwqC` prints as "Friend"/"Target"/"Tracked" is **not** statically decidable. Semantics inferred: `bnwqC` = group for players tracked in `qQ`, `JMCCO` = everyone else.
- `po.cOt()` flag's display name and `py` profile subtypes' exact visual modes (box fill/outline variants live in `po`/`pq`/`ps`/`pp`/`pt`, partially native). `di` only consumes the boolean `cOt()`.
- `pl.cNJ/cNK/...`, `pv.cPH/cPI/cPJ`, `pj.cNs(..., boolean)` last parameter meaning, `jI.bIw` projection formula, `jg.bBB` box-padding constants: bodies are decompiled but sit in shared helper classes out of scope here; the **last-arg `false` of `pj.cNs` in `di` is constant** — whether any caller passes `true` elsewhere is unknown.
- `gh.nOCvV` category display name (native, `gh.baG()`).
- `dh.afl()` panic-switch trigger (`dh.afk` caller) — who sets it and when is not visible in this corpus.
- Registry metadata (`bootstrap/offline/features/metadata.txt:123`): `sixtwo.di|2D ESP|Allows you to see targets through walls|key=158|bind=-999` — primary keybind **158**, secondary bind **−999** (unbound). The `bind=-999` sentinel is shared by every lowercase `d` render module.
- Cross-module note: the `qQ` name registry (`rD.dmc().ddy`) used for the `bnwqC` profile group here is the same predicate `ds` (Friend colors), `dm` (indicator eligibility) and `du` (friend tracers) consume; `di` is the only consumer that routes on it for profile selection rather than a boolean feature.
- Event-inventory note: `di` consumes five distinct event types (`gL.tk`, `gM`, `gN`, `gi`, `gk`) — the widest event surface in the render family; `gL.tk` (packet) is shared only with `dp`'s neighbor classes outside the render category.