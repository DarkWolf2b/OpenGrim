# Pop Chams (sixtwo.cT) — handler-derived behavior spec

Class: `sixtwo/cT` · display name **Pop Chams** (module id 129).
Superclass `gg`. **Zero native methods declared** — pure-Java payload class,
not j2cc-virtualized; no image addresses (0x18xxxxxxx) exist to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/cT.java` (777 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cT.java` — fully decompiled
   with folded literals; tick/packet/render handlers readable.
2. `analysis/decompiled/payload-named/sixtwo/cT$so.java` — clone record inner
   class (cloned player + skin texture + fade animation).
3. `analysis/specs/modules/cT.md` structural spec.
4. Yarn mappings: `OtherClientPlayerEntity`, `PlayerEntityModel`,
   `PlayerSkin.texturePath()` via `yarn-1.21.11+build.6.tiny`.
5. Helpers: `ct/cu` group tree, `cG` color, `cC` numeric, `rk` fade animation
   (`dhd` target / `dhj()` value / `dhs(rj)` mode / `dhc(!done)`), `rj.XzDkv`
   forward / `rj.AYqck` reverse animation modes, `ob.cBv` texture,
   `kM` batched renderer (`startBatch`/`bUH`/`endBatch`/`defaultState()`),
   `kS` pipeline state (`bVG` DepthTestFunction), `mT`/`jm` model-part
   accessors.

## Runtime model

- **`Zk(gL.tk)`** [cT.java:660] — packet handler: on the totem-pop status
  packet for a player, **clones** the `OtherClientPlayerEntity` into a
  `cT$so` record (`iJyDI.add(new cT$so(this, player, player.getSkin().body()
  .texturePath()))`) [740] with its real skin texture path, and starts the
  clone's fade animation.
- **`Zi(gH.th)`** [633] — pre-motion tick: advances clone lifetimes, removes
  expired clones (`Time To Disappear`).
- **`Zj(go.sX)`** [617] — world render: for each clone `cT$so` → `Zl(...)`
  [629] with stored model/texture/tick-delta.
- **`Zl(MatrixStack, AbstractClientPlayerEntity, PlayerEntityModel, Identifier,
  float, float)`** [329] — per-clone draw: applies the recovered transform
  (below) and binds `"Sampler0"` to the skin texture; body drawn textured per
  "Mode" (Simple = flat color pass, Textured = skin pass).
- **`Zm(MatrixStack)`** [531] — transform helper (scale/translate below).
- **`YO()`** — unregister + clear `iJyDI`.
- State: `CopyOnWriteArrayList<cT$so> iJyDI`.

## Per-handler semantics

- `cT$so` (inner): fields `VwpaT` (cloned player), `ugYAv` (model), `UvTDM`
  (skin texture), `dnx()` (animation value accessor); fade driven by `rk`
  with reverse mode at expiry.
- `Zm` transform [531–536 contract, executed inside `Zl`]: scale
  **(−1, −1, 1)** × **(1.6, 1.8, 1.6)**, then **translate(0, −1.501, 0)** —
  mirrored + enlarged ghost of the player, sunk to leg base.
- Texture bind: `"Sampler0"` string literal.
- `Zj` start/end batches with `kS` = `XSRvt.defaultState()`-derived state with
  `LEQUAL_DEPTH_TEST`, culling off (`bVH(false)`), consistent with other
  render modules in this batch.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 117–174):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Mode" (`ct IOXoW`) | group, 2 `cu` children | Simple, Textured | first child (`Simple`) | [cT.java:117–137] |
| "Color" (`cG cxjIy`) | color | — | `bjG().bis()` white | [cT.java:139] |
| "Time To Disappear" (`cC CeLKq`) | numeric | step **1.0**, min **1.0**, max **10.0** | **3.0**, suffix **" s"** | [cT.java:158] |
| "Fly Speed" (`cC LesoJ`) | numeric | step **0.01**, min **−2.0**, max **2.0** | **0.4**, Y-offset applied as value **/50** per tick | [cT.java:169] |

## Unrecovered

- The totem-packet **status constant** compared inside `Zk` is a DES int, dump
  offset ~**30938** — not recovered, so "totem pop" identification is
  [inferred from behavior] (clones appear when a player pops a totem).
- DES string/int slots not dumped (used only for labels/format strings):
  ~**12751**, ~**14940**, ~**18015**, ~**2303**.
- Whether the cloned entity is rendered with the live player's pose each frame
  or with the pose captured at pop time is resolved in `Zl`'s shell-side model
  copy, which uses `mT/jm` accessors whose semantics (copy vs alias) are
  [uncertain] without the shell render code.
- Exact Simple-mode shading (whether "Color" multiplies the skin or replaces
  it) is decided inside `Zl`'s draw pipeline; the color pass argument order
  supports "replace with alpha", flagged [uncertain].