# Soul Effects (sixtwo.cZ) — handler-derived behavior spec

Class: `sixtwo/cZ` · display name **Soul Effects** (module id 162).
Superclass `gg`. **Zero native methods declared** — pure-Java payload class,
not j2cc-virtualized; no image addresses (0x18xxxxxxx) exist to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/cZ.java` (1476 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cZ.java` — fully decompiled.
2. Inner class `cZ$su` (one effect instance: entity, particle count, radius,
   deadline, colors) and geometry helpers `abi/abg/abh/abk`.
3. `analysis/specs/modules/cZ.md` structural spec.
4. Yarn mappings: `ModelPart`, `LivingEntityRenderer.getModel()`,
   `EntityTrackerUpdateS2CPacket`, `EntityStatusS2CPacket`, framebuffer APIs.
5. Helpers: `kl` post-processing (`bQa` capture / `bQb` mark / `bQd`
   composite), `lF.cfH(pipeline draw)`, `kR.bHqVE` / `kR.HUQWl` render
   pipelines, `jL.uHvyh.bJl()` uniform bind, `mU.cpP/cpQ` random, `rk`/`rj`
   animation, `jk.bDu` gradient.

## Runtime model

- Spawn triggers (`abb(LivingEntity)` family, three entry points):
  - **`aaY(EntityStatusS2CPacket)`** [cZ.java:937] — status == 3 (death)
    → trigger.
  - **`aaZ(EntityTrackerUpdateS2CPacket)`** [835] — health float ≤ 0 →
    trigger.
  - **`aba(hp)`** [998] — entity-removal event, reason KILLED / isDead →
    trigger.
  - Deduplication by `Set<UUID> eWrHR`; effect added as
    `cZ$su(entity, count, radius, Duration × 1000 ms, Primary color,
    Dispersion)`.
- **`aaW(go.sX)`** → `abc(stack, tickDelta)` [780] — render: tick all
  effects (`dnV` inside `cZ$su`), capture framebuffer via
  `kl.bQa(UUyNm, fb, !Behind Walls)`, draw particle quads `abd`, composite
  glow via `kl.bQd(UUyNm, target, fb, Glow Radius.VB(), Glow color)`;
  shader mark `kl.bQb(UUyNm)` at setup.
- **`abd`** — per-effect: builds `POSITION_TEXTURE_COLOR` QUADS
  `BufferBuilder`; pipeline `kR.bHqVE` when **Behind Walls**, else
  `kR.HUQWl`; pass lambda → `jL.uHvyh.bJl()` uniform bind.
- **`abe`** — cleanup: removes finished effects (`nYGDp` expiry check).
- **`YO()`** — unregister + clear `TIWnG`/`eWrHR`.

## Per-handler semantics

Geometry (all literal float math, recovered):
- **`abg(ModelPart, Matrix4f, List<float[]>)`** [466] — recursion over the
  `LivingEntityRenderer` model root part, collecting every cube of
  `ModelPartAccessor` children as 8 transformed corners.
- **`abf`** — top-level: collects model AABBs from the dying entity's
  rendered model.
- **`abi(float...6)`** [320] — uniform random point in an AABB with a
  **0.4** face bias toward the surface.
- **`abh`** — dispersion-blended random direction vector.
- **`abk(float,float)`** [692] — random via `mU.cpP`.
- Particle motion: positions drift with dispersion blend; per-particle
  deadline = spawn time + Duration.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 122–214):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Primary" (`cG pRslV`) | color | — | `bjf()` (accent color) | [cZ.java:133] |
| "Glow" (`cG STwyB`) | color | — | `bjf()`, with `.We()` (glow flag on the color) | [cZ.java:134] |
| "Behind Walls" (`cJ pxIjY`) | boolean | — | `false` — corrected 2026-10-17, batch 21 (the `cJ` default is false and cZ.java:148 has no `.WE` call; was "true") | [cZ.java:148] |
| "Particle Count" (`cC RvFwK`) | numeric | step **1.0**, min **100.0**, max **3000.0** | **1500.0** | [cZ.java:164] |
| "Duration" (`cC LMxtE`) | numeric | step **0.1**, min **0.5**, max **5.0** | **2.5**, suffix DES `"s"` (likely `" s"`) | [cZ.java:174] |
| "Dispersion" (`cC szQUj`) | numeric | step **0.01**, min **0.0**, max **1.0** | **1.0** | [cZ.java:186] |
| "Radius" (`cC BzSYi`) | numeric | step **0.01**, min **0.02**, max **0.5** | **0.08** | [cZ.java:194] |
| "Glow Radius" (`cC ZbKTw`) | numeric | step **0.01**, min **0.0**, max **0.75** | **0.5** | [cZ.java:207] |

## Unrecovered

- **Duration suffix string** `ZBgUJ` [declared cZ.java:116] is DES-encoded;
  presumed `" s"` — open.
- Glow composite blend equation inside `kl.bQd` (how Glow Radius maps to the
  blur kernel) is shell/native — contract only.
- Whether `status == 3` also fires for totem-pop prevention cases (vanilla
  sends 3 on death; totem revives may re-send) — the dedup set suppresses
  repeats, but the exact packet ordering is [uncertain].
- `cZ$su.dnV` tick math (drift velocity per particle) partially inlined into
  `abi/abh` callers; the per-frame velocity constant besides the **0.4** face
  bias and damping factors is [uncertain].