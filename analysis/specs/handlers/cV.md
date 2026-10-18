# Skeleton ESP (sixtwo.cV) — handler-derived behavior spec

Class: `sixtwo/cV` · display name **Skeleton ESP** (module id 126).
Superclass `gg` (module base: `bab()` enabled gate, `YO()` unregister). 
**Zero native methods declared** (javap-verified; coverage matrix
`natives_declared=0`) — pure-Java payload class, not j2cc-virtualized; no
image addresses (0x18xxxxxxx) exist to cite. Evidence cites are decompile
line numbers of `analysis/decompiled/payload-decrypted/sixtwo/cV.java`
(486 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cV.java` — fully decompiled;
   render handler readable.
2. `analysis/decompiled/payload-named/sixtwo/cV.java` — identifier
   cross-check.
3. `analysis/specs/modules/cV.md` structural spec.
4. Registry entry (module id 126) for display name.
5. Shared line pipeline: custom `kS` line-render-pipeline state (this module
   builds its own `qIziY` state distinct from the shared
   `lG.XSRvt.defaultState()`); bone definitions live in shell class `kq`
   (`kq.bQG` renders the skeleton bones for a player model) — out of scope.
6. Helpers (one-liners): `cG` color setting (`Wh()` int → `mG.cnQ`); `cC`
   numeric (`Vy` step / `Vw` min / `Vx` max / `VA` default); `kS`
   RenderPipeline state with `bVG(DepthTestFunction)` / `bVH(boolean)`
   culling flag; `jF` shared uniform helper (`jF.bHw()`); `gg` base; `mr`
   string pool (`clS(int[])`); `gb.aYR` DES seeds (unrecoverable).

## Runtime model

- Single `@hG` listener: **`ZK(go.sX)`** [cV.java:218] — world render
  (`go.sX` = MatrixStack `bbh()` + tick delta `bbi()`).
- Per frame: gather visible players, for each obtain its `PlayerEntityModel`
  and the bone-joint list computed by shell class `kq`, then draw straight
  LINES segments between joints through the custom pipeline.
- No tick/packet handlers and no persistent state fields beyond settings —
  fully stateless per-frame renderer.
- Uniforms: `bJr("ScreenSize")` line-width/screen-size shader uniform; a
  second uniform set via `jF.bHw()` (DES slot ~**32237**, plaintext
  unrecovered — likely a line-width or viewport-size helper).

## Per-handler semantics

- Constructor [cV.java:71–91] — settings only (below); builds `qIziY`
  pipeline state with `LEQUAL_DEPTH_TEST` and culling disabled
  (`bVH(false)`), consistent with the other render modules in this batch.
- `ZK(go.sX)` [218–323] —
  1. gate `bab()`;
  2. iterate `world.getPlayers()` filtered by visibility `jJ.bIA`;
  3. for each player request the bone segment list from `kq.bQG` (shell);
  4. push MatrixStack, translate to interpolated player position
     (`mZ.csk(prevPos, pos, tickDelta)` family), draw each bone as a
     `kF.bTn(stack, a, b, color).dts(Line Width).dtt()`-family LINES call
     through `qIziY`;
  5. pop; end batch.
- Color application: `mG.cnQ(RJTEl.Wh())` — single flat color for all bones;
  no per-bone gradient, no distance fade.
- `ZL(RenderPass)` [328] — synthetic lambda for pass setup.
- `ZN/ZO/ZP/ZQ/ZR/ZS` [357–463] — DES string/int decode plumbing; the
  plaintexts they feed are only label/format strings.
- `YO()` — inherited unregister (no lists, nothing to clear).

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 71–90; `int[]` = ASCII "Color" and the line-width name):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Color" (`cG RJTEl`) | color | — | `bjG().bis()` white | [cV.java:74] |
| "Line Width" (`cC GYMnk`) | numeric | step **0.1**, min **1.0**, max **3.0** | **1.0** | [cV.java:86] |

Only two settings; no groups, no booleans, no sliders.

## Unrecovered

- **Bone table**: which joints `kq` connects (head/spine/limbs topology and
  per-bone widths) is entirely in the shell class `kq` — out of scope; cV
  only supplies color + width + visibility.
- DES int slot ~**707** (label/format) plaintext not dumped.
- The second uniform's name (via `jF.bHw()`, DES ~**32237**) is unresolved;
  open question: viewport size, dither seed, or line-width scale?
  [uncertain].
- Whether players behind walls are skipped purely by `jJ.bIA` frustum+
  occlusion or an extra raycast exists [uncertain] — `ZK` shows only the
  `bIA` gate; `bIA` itself may internally raycast.
- Whether armor-layer joints are included (kq model-part selection) —
  shell-side, open.