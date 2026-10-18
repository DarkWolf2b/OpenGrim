# Friend Indicator (sixtwo.dm) — handler-derived behavior spec

Class `sixtwo.dm` extends `sixtwo.gg`, implements `sixtwo.lG` (marker interface shared with `dj`, `dl` — render-module tag, no methods). Registry: `sixtwo.dm|Friend Indicator|…` — module id **137**, category `gh.nOCvV` (`analysis/specs/modules/dm.md`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dm.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv` row 51); `sixtwo/dm` absent from both runtime jsonl registries; class declares no `native` methods. |
| `analysis/decompiled/payload-decrypted/sixtwo/dm.java` | **PRIMARY** (327 lines, read in full). One handler, one setting. |
| `analysis/specs/modules/dm.md` | read — registry row, matches. |
| Helpers | `AswNN` (static geometry batcher: `startBatch()` / `bUp(kE$um)` push / `endBatch()`), `kE.bTf(MatrixStack, double x, double y, double z, float size)` → `kE$um` primitive builder with `.dti(mG color)` / `.dtj()` finalize, `jk.jEkxo` (static `mG` constant color, initialized in `jk`'s static block from a native-decrypted literal — `jk.java:160`), `jI.bIs(MatrixStack, Vec3d)` (billboard/camera-facing transform), `qQ.ddy(PlayerEntity)` (tracked-player registry membership, `qQ.java:34`), `rD.dmc()` (returns that `qQ`). |

## Runtime model

- `super(gf.aZL(137, false, gh.nOCvV))` (`dm.java:constructor`).
- Single-purpose billboard marker above the head of every tracked player. "Tracked" = present in the same `qQ` name registry (`mE` name + timestamp entries) that `di` uses to route players into the second profile group — i.e. the friend/target list, **not** the `fo` friends-module live set (`rD.dml().aLp` is not consulted here).
- Drawing is entirely delegated: `dm` positions a camera-facing anchor and submits a fixed-size, fixed-color primitive built by `kE` into the `AswNN` batch.
- Event payload consumed: `go.sX` world render — `.bbh()` MatrixStack and `.bbi()` tick delta; the delta feeds `getLerpedPos` so the anchor tracks interpolated player motion.
- Contrast with `di`/`du`: those modules read the same `qQ` registry but gate on `fo.aLp` (friends module) as well; `dm` deliberately uses only the registry membership, so a player tracked in `qQ` gets the marker even if the friends module is disabled.

## Helper contracts (one line each)

- `AswNN` — static `kK`-type geometry batcher (inherited static, same instance `dz` uses for Crystals mode); `startBatch()` (no-arg overload), `bUp(kE$um)` submit, `endBatch()` flush; no explicit render-layer argument on this path.
- `kE.bTf(MatrixStack, double x, double y, double z, float size)` — billboard primitive builder returning `kE$um`; `.dti(mG)` colors, `.dtj()` finalizes.
- `jk.jEkxo` — static `mG` client-wide friend color; DES-decrypted in `jk`'s static block (`jk.java:160`); shared default of `dm`, `ds` (Friend colors), `du` ("Friend Color"), `do` ("Friend Color").
- `jI.bIs(MatrixStack, Vec3d)` — camera-facing (billboard) transform helper; same helper used by `dt`, `dw`, `dz`.
- `qQ` / `rD.dmc()` — persistent tracked-player name registry (`mE` name + timestamp); `ddy(PlayerEntity)` membership; serialized via `qQ.ddD()`, mutated via `ddz/ddB/ddC`.
- `cC` — number setting; `.Vy(step).Vw(min).Vx(max).VA(default).Vz(suffix)`; `VB()` live float read.
- `go.sX` — world render event carrying the shared MatrixStack and partial-tick delta consumed by all world-space render modules (`dl`, `ds`, `dq`, `du`, `dw`, `dp`, `dz`).

## Per-handler semantics

### `@hG agU(go.sX)` — world render (`dm.java:250-320`)
1. Guard `bab()` (module active).
2. `AswNN.startBatch()` … `finally AswNN.endBatch()`.
3. For each `AbstractClientPlayerEntity` in `rD.dlmvG.world.getPlayers()`:
   - skip unless `rD.dmc().ddy(player)` (tracked in the name registry);
   - `matrixStack.push()`;
   - anchor: `player.getLerpedPos(sX2.bbi()).add(0.0, player.getHeight() + VCZOE.VB(), 0.0)` — head height plus the Height setting;
   - `jI.bIs(matrixStack, vec3d)` — rotate the stack to face the camera;
   - `AswNN.bUp(kE.bTf(matrixStack, 0.0, 0.0, 0.0, 0.1f).dti(jk.jEkxo).dtj())` — emit one primitive of **size 0.1** at the local origin, colored with the **constant** `jk.jEkxo`;
   - `matrixStack.pop()`.
4. No tick state, no caches — stateless per frame.

## Settings→behavior (exact — folded literals verbatim)

| Field | Class | Name (char codes) | Params |
|---|---|---|---|
| `VCZOE` | `cC` number | `"Height"` (72,101,105,103,104,116) | step `.Vy(0.1f)`, min `.Vw(0.4f)`, max `.Vx(1.6f)`, default `.VA(1.2f)`, suffix `.Vz(jfMvl)` — suffix is a runtime-decrypted string (`dm.jfMvl`, DES in the static block), almost certainly `" blocks"` but **not** byte-verified |

Registry keybind: **137**.

### Anchor math recap (constants cited)

The anchor is `getLerpedPos(delta) + (0.0, getHeight() + Height.VB(), 0.0)` — height above the
feet is the entity's own `getHeight()` plus the user knob (default **1.2**, range **0.4–1.6**,
step **0.1**). The primitive is submitted at the local origin (0,0,0) with **size 0.1** — the size
is a compile-time literal, not a setting, so the marker's on-screen scale is fixed regardless of
distance (billboard orientation makes it a fixed world-space size, not a screen-space chip).

### Draw-call inventory (full)

Exactly one primitive is emitted per tracked player per frame:

1. `matrixStack.push()`
2. `jI.bIs(matrixStack, anchorVec3d)` — orient to camera
3. `AswNN.bUp(kE.bTf(matrixStack, 0.0, 0.0, 0.0, 0.1f).dti(jk.jEkxo).dtj())`
4. `matrixStack.pop()`

No other batches, no text, no fade animators, no per-frame caches. The batch opens before the
player loop and closes in a `finally`, so an exception mid-loop still flushes.

## Unrecovered

- **`jk.jEkxo` RGBA value** — the indicator's color is a client-wide static constant decrypted natively in `jk`'s static block (`jk.java:160`, `mG.cnQ(int)`); its literal value is not in the folded decompile. Whether other modules share the same `jk.jEkxo` color (e.g. a "friend color" system constant) is plausible but unproven.
- The suffix string `dm.jfMvl` (`" blocks"` presumed).
- What `kE.bTf(..., 0.1f)` draws geometrically (dot / triangle / quad) — the primitive shape lives in `kE`/`kE$um` builder code out of scope; only the size constant 0.1 and the anchor math are certain.
- Exact difference between `qQ` (name registry, used here) and `fo` (friends module live set) — the qQ list is serialized to config (`qQ.ddD()`) and populated via `ddz/ddB/ddC`, so it is the persistent "friends/targets" list; the two checks can disagree while the list is being edited at runtime.

## Registry metadata

`bootstrap/offline/features/metadata.txt:129`: `sixtwo.dm|Friend Indicator|Visually marks friends|key=137|bind=-999` — primary keybind **137**, secondary bind **−999** (unbound). One number setting, no toggles — the smallest settings tree of any drawing module in the render family (`dy` has fewer settings but draws nothing itself).

## Unrecovered (continued)

- Whether `AswNN`'s no-arg `startBatch()` selects a default render layer inside `kK` (the `kM` batcher used by `dz`/`du` takes an explicit layer/texture) — batcher-internal, not visible from `dm`.
- Whether the marker is depth-tested (visible through walls) — determined by the batcher's default state, not by any `dm` code; no `kS` render-state object is constructed in this class (contrast `dz`, which builds `cHVCf`/`MRndq` explicitly).
- Interaction with `dh.afl()` (panic array): the single handler's decompiled guard is `bab()` only; no panic branch is visible, unlike `di`/`ds`/`du`/`dy` which all branch on it.