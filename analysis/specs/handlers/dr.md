# Health Indicators (sixtwo.dr) — handler-derived behavior spec

Class `sixtwo.dr` extends `sixtwo.gg`. Registry: `sixtwo.dr|Health Indicators|…` — module id **91**, category `gh.nOCvV` (`analysis/specs/modules/dr.md`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dr.c` | **MISSING** — lowercase `d` classes: 0 natives declared/bound (`coverage-matrix.tsv` row 56); `sixtwo/dr` absent from both runtime jsonl registries; no `native` methods. |
| `analysis/decompiled/payload-decrypted/sixtwo/dr.java` | **PRIMARY** (332 lines; constructor + single handler read in full; setting names re-folded verbatim). |
| Helper `rs` (`payload-named/sixtwo/rs.java`) | `rs.djl(MatrixStack, PlayerLikeEntity, EntityRenderManager, OrderedRenderCommandQueue, int, boolean)` at `rs.java:152` — the heart-row renderer the module defers to (Java shell class, visuals out of scope). |
| Event `gi` | label/nameplate render event: `baL()` entity, `baN()` MatrixStack, `baO()` OrderedRenderCommandQueue (`gi.java`). |
| Guard | `kn.YNOIY` — shared static set by `dl` (Outlines) while its outline batch renders. |

## Runtime model

- `super(gf.aZL(91, false, gh.nOCvV))` (`dr.java:53`).
- Purely a hook adapter: on each player nameplate/label render event it delegates to `rs.djl`, passing the module's two knobs. No state, no caching, no own draw code.

## Per-handler semantics

### `@hG aib(gi)` — label render (`dr.java:235-300`)
Guard chain, in order:
1. `if (kn.YNOIY) return;` — suppress while the Outlines module's batch is rendering (avoids double draws).
2. `entity = gi2.baL()`; require `instanceof AbstractClientPlayerEntity`.
3. Skip the local player (`== rD.dlmvG.player`).
4. Invisible filter: `bl2 = BkqiN.WF()`; if the setting is off and `player.isInvisible()` → return (visible players only, unless "Invisible" is enabled).
5. Delegate: `rs.djl(gi2.baN(), (PlayerLikeEntity) player, rD.dlmvG.getEntityRenderDispatcher(), gi2.baO(), CWkfv.VC(), gKqqU.WF())` — matrix stack, entity, render dispatcher, ordered render queue, **Hearts Per Row** (int), **Visible Through Walls** (boolean).

## Settings→behavior (exact — folded literals verbatim)

| Field | Class | Name (char codes) | Params |
|---|---|---|---|
| `CWkfv` | `cC` number | `"Hearts Per Row"` (72,101,97,114,116,115,32,80,101,114,32,82,111,119) | step `.Vy(1.0)`, min `.Vw(1.0)`, max `.Vx(30.0)`, default `.VA(10.0)`; passed as **int** (`VC()`) |
| `BkqiN` | `cJ` toggle | `"Invisible"` (73,110,118,105,115,105,98,108,101) | `.WE(false)`; when **on**, invisible players also get hearts |
| `gKqqU` | `cJ` toggle | `"Visible Through Walls"` (86,105,115,105,98,108,101,32,84,104,114,111,117,103,104,32,87,97,108,108,115) | `.WE(false)`; passed straight to `rs.djl` |

Registry keybind: **91**.

## Unrecovered

- `rs.djl` internals: heart icon set, row wrapping math, health source (persistent data vs. attribute), and what `Visible Through Walls` changes in the queue — the visual lives in `rs` (out of scope, partially native).
- The `gi` event's injection point (nameplate renderer vs. scoreboard label) — event classes carry no provenance; both `di.afA` and `dr.aib` consume it, and `di` cancels it, so it is the vanilla nameplate/label path.
- `kn.YNOIY` interaction: only `dl` sets it in the recovered corpus; whether other modules also set it is unverified.

## Helper contracts (one line each)

- `rs` — Java shell heart-row renderer; `djl(MatrixStack, PlayerLikeEntity, EntityRenderManager, OrderedRenderCommandQueue, int heartsPerRow, boolean throughWalls)` is the entire render surface `dr` touches; visuals out of scope.
- `gi` — nameplate/label render event: `baL()` entity, `baN()` MatrixStack, `baO()` OrderedRenderCommandQueue; cancellation via inherited `bdX(true)` (`hH` base). Consumed with cancel by `di` (`afA`), read-only here.
- `kn.YNOIY` — static re-entrancy flag set by `dl` (Outlines) while its post-process batch renders; `dr` treats it as a mutual-exclusion signal and skips drawing.
- `cC` — number setting; `VC()` int read (Hearts Per Row is the only number).
- `cJ` — boolean toggle; `WF()` live read.
- `rD.dlmvG.getEntityRenderDispatcher()` — vanilla render dispatcher, passed through unchanged.
- Registry metadata: `bootstrap/offline/features/metadata.txt:142`: `sixtwo.dr|Health Indicators|Displays other players health above their head|key=91|bind=-999` — primary keybind **91**, secondary bind **−999** (unbound).

## Runtime model (expanded)

- The delegation signature fixes the data contract: `dr` supplies only the entity, its render
  state plumbing, and two knobs; the health value, heart count math, row wrapping, and icon
  rendering are entirely inside `rs`. `dr` never reads `getHealth()`, attributes, or scoreboard
  data itself — the health source is invisible at this layer (see Unrecovered).
- The guard order matters for compositing: because `kn.YNOIY` is checked first, an entity being
  outlined by `dl` shows no hearts even if the Outlines selection overlaps the player set; this
  is a deliberate dedup, not an accident of ordering elsewhere.
- The invisible filter is `if (!BkqiN.WF() && player.isInvisible()) return;` — i.e. "Invisible"
  ON is an inclusive override (draw hearts for invisible players too), default OFF means
  invisible players are skipped.
- `dr` has no `YO()` override and no tick handler: rows appear/disappear purely with the vanilla
  label render events, so heart chips vanish the moment a player is out of label range (64 blocks
  nameplate distance is vanilla behavior, not module logic).
- No settings change callbacks are registered — both knobs are read live at each label render.

## Unrecovered (continued)

- Whether `rs.djl` reads health from `LivingEntity.getHealth()` + absorption or from cached
  scoreboard/team data — the method signature carries no health argument, so `rs` must fetch it
  from the entity or a registry; out of scope, unresolved.
- The `PlayerLikeEntity` cast target: `dr` casts `AbstractClientPlayerEntity` to
  `PlayerLikeEntity` (an `rs`-side wrapper type); whether that wrapper re-renders the player model
  or only holds name/health is unknown from this layer.
- Whether `Visible Through Walls` disables depth testing on the queue or switches the queue kind —
  the boolean is forwarded verbatim; the effect is `rs`-internal.
- Whether `CWkfv` ("Hearts Per Row") is clamped inside `rs` for values below 1 (the setting min is
  1.0, so out-of-range values cannot come from the UI, but direct config edits could).