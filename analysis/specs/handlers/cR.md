# Particles (sixtwo.cR) — handler-derived behavior spec

Class: `sixtwo/cR` · display name **Particles** (module id 125).
Superclass `gg`, implements the render contract via `kM` batched renderer.
**Zero native methods declared** — pure-Java payload class, not
j2cc-virtualized; no image addresses (0x18xxxxxxx) exist to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/cR.java` (886 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cR.java` — fully decompiled;
   setting tree, tick, packet and render handlers all readable.
2. `analysis/specs/modules/cR.md` structural spec.
3. Shared particle classes: `mq` (abstract particle: pos/vel/physics `mp`,
   scale, expire `clp`, interpolate `clL`, draw `clq`/`clr`), `mm` (with `cA`
   rotation params), `mo` (style enum with texture `clD()`), `mp` (physics
   enum). `kM`/`kS` batched-texture renderer + pipeline state.
4. Helpers (one-liners): `cC` numeric setting (`Vy` step / `Vw` min / `Vx` max
   / `VA` default / `Vz` suffix; `VC()` int, `VB()` float), `cG` color
   (`Wh()` int → `mG.cnQ`), `cJ` boolean, `ct/cu` group tree, `cw`
   multi-select, `cv` multi-group, `ob.cBv(String)` texture lookup, `mU.cpQ`
   random float range, `jJ.bIA(Vec3d)` visibility.

## Runtime model

- **`YQ(gH.th)`** [cR.java:506] — pre-motion tick spawner: walks the spawn
  triggers selected in the "Add" multi-select and pushes new `mq` particles
  into `ImFtb` (List<mq>).
- **`YS(go.sX)`** [845] — 3D world render: `XSRvt.startBatch(...)` +
  `YT`-pipeline draw + optional Glow pass with `swapTexture`, `endBatch`.
- **`YR(gL.tk)`** [385] — packet handler: totem-packet spawner (see below).
- **`YP(gM)`** [472] — bare tick: cleanup.
- **`YO()`** [869] — unregister/clear.
- State: `List<mq> ImFtb` (live particles), `kS wccSb` pipeline state
  (`DepthTestFunction.LEQUAL_DEPTH_TEST`, culling off).

## Per-handler semantics

- `YU()` [380] — random world position helper for spawn triggers.
- `YR(gL.tk)` [385–461] — totem pop trigger: on the appropriate entity status
  packet path, spawns a totem burst at the entity. The status constant it
  compares against is a DES int (**not dumped** — see Unrecovered); the
  decoded behavior is "on totem pop, spawn the configured style burst".
- `YP(gM)` [472–475] — empty-ish tick (no-op cleanup).
- `YQ(gH.th)` [506–736] — main spawner: for each enabled trigger in the `cw`
  multi-selects (`Idle`, `Movement`, `Pearl Throw`, `Arrow Shot`,
  `Trident Throw`, `Totem Pop`) spawn `mq`-family particles with random
  velocity via `mU`, physics `mp` from "Physics", scale `Scale.VB()`,
  lifetime from settings; particles only spawn around valid targets
  (self/other players per trigger semantics).
- `YT(MatrixStack, float, mG, mo)` [737–800] — draws one particle: billboard
  quad via `kG.bTv(...).dtF(color).dtG()`, texture = `mo2.clD()` style
  texture, through `XSRvt.bUH`.
- `YS(go.sX)` [845–868] — render loop: gate `bab()`; startBatch with style
  texture + `wccSb`; iterate `ImFtb`, interpolate with tick delta (`mq.clL`),
  call `mq.clq(stack,tick,color)`; if **Glow** enabled → `XSRvt.flush()`,
  `swapTexture(ob.cBv(ZDept))` and glow pass `mq.clr`; `endBatch()`.
- `YW(byte[])` [812] — UTF-8 decode helper for DES strings.
- `YO()` [869–876] — unregister + clear `ImFtb`.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 111–274, `int[]` = ASCII):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Style" (`ct imXIw`) | group with 8 `cu` children | Stars, Snowflakes, Ghost, Hearts, Diamonds, Thunders, Moons, Clouds | first child `.SY()` style selection | [cR.java:113–175] |
| "Color" (`cG mNCfB`) | color | — | `bjG().bis()` white | [cR.java:176] |
| "Physics" (`ct ywNJH`) | group (Fly/Drop) | — | first child | [cR.java:179+] |
| "Scale" (`cC lyHys`) | numeric | step **0.01**, min **1.0**, max **10.0** | **3.0** | [cR.java:188] |
| "Amount" (`cC mNkAv`) | numeric | step **10.0**, min **20.0**, max **800.0** | **200.0** | [cR.java:196] |
| "Add" (`cv pEdgo`) | multi-group of 6 `cw`: Idle, Movement, Pearl Throw, Arrow Shot, Trident Throw, **Totem Pop** (`hQcMD`) | default-on per `cw.Tz()` | — | [cR.java:198+] |
| "Glow" (`cJ aTbJe`) | boolean | — | `true` | [cR.java:267] |

## Unrecovered

- **"Totem Pop" (`hQcMD`) is orphaned**: declared at [cR.java:100] and built
  in the constructor, but no other code path in the decompile references it —
  the packet trigger `YR` appears wired to totem logic without reading this
  setting, i.e. the setting may be dead UI or consulted from a native-side
  path that does not exist (zero natives). Flag: open question, do not guess.
- DES constants not dumped: totem **status int** (slot ~**14841**) compared in
  `YR`; the `ZDept` glow texture name is DES-encoded (`static final String
  ZDept` at [cR.java:105], decoded in `static{}` — recovered plaintext
  "ZDept" but that is the *encrypted-token* spelling, the resolved texture
  identifier goes through `ob.cBv`); secondary DES int slot ~**7599** unused
  label. Exact numeric packet-status constant remains open.
- Per-trigger spawn-frequency table inside `YQ` (which trigger spawns how
  often per tick) is expressed through switch tables whose plaintext keys are
  recovered but whose rates [uncertain] — the arithmetic is literal, but the
  mapping trigger→rate is only partially traced.