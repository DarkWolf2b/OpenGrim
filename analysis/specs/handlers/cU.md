# Trails (sixtwo.cU) — handler-derived behavior spec

Class: `sixtwo/cU` · display name **Trails** (module id 124).
Superclass `gg` (module base: `bab()` enabled gate, `aaj()` on-enable,
`YO()` unregister). **Zero native methods declared** (javap-verified;
coverage matrix `natives_declared=0`) — pure-Java payload class, not
j2cc-virtualized; no image addresses (0x18xxxxxxx) exist to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/cU.java` (723 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cU.java` — fully decompiled;
   tick and render handlers readable.
2. `analysis/decompiled/payload-named/sixtwo/cU$sp.java` — per-player trail
   record (position list + retention timestamps).
3. `analysis/specs/modules/cU.md` structural spec.
4. Registry entry (module id 124) for display name.
5. Yarn mappings: `PlayerEntity`, `Vec3d` trail sampling via
   `yarn-1.21.11+build.6.tiny`.
6. Helpers (one-liners): `cv` multi-group "Show For" (Players / Friends /
   Invisibles / Self); `cw` multi-select (`TC()` active, `Tz()` default-on);
   `cG` color (`mG.cnQ(Wh())`); `cC` numeric (`Vy` step / `Vw` min / `Vx`
   max / `VA` default; `VB()` float); `rk`/`rj` animation values; `kp.bQA/
   bQB` ribbon draw builders; `jk` gradient helpers; `jJ.bIA(Vec3d)`
   visibility; `rD.dlM().dmc().ddy()` friend check; `gg` base; `gb.aYR`
   DES seeds (unrecoverable).

## Runtime model

- State: `Map<PlayerEntity, List<cU$sp>> ERVmZ` [cU.java:61] — one trail
  (list of position samples with timestamps) per tracked player.
- **Tick handler** (`gH.th` path): each tick, for each tracked player
  matching "Show For", append the player's current position to its list;
  drop samples older than the retention window `125 × Length` ms (default
  125 × 3 = **375 ms**); remove map entries for players that are gone.
- **`Zz(go.sX)`** [cU.java:233] — world render: for each player trail, draw
  the ribbon through the camera: `kp.bQA/bQB` line builders with `jk`
  gradient interpolation along the trail ("Gradient Speed" animates the
  gradient phase per sample).
- **`ZA(MatrixStack, PlayerEntity, List<cU$sp>, int, int)`** [cU.java:567] —
  draws one player's ribbon: pairs consecutive samples into line segments
  (`kp.bQA/bQB(...)` builder calls), color lerp between trail Color and
  gradient phase.
- Sample spawn: `list.add(new cU$sp(vec3d, l3))` [cU.java:413] — position +
  timestamp.
- **`YO()`** — unregister + clear `ERVmZ`.

## Per-handler semantics

- Constructor [cU.java:68–141] — builds the settings tree; event
  registrations (`gH.th` tick + `go.sX` render) done via the base class.
- Trail-growth loop [~380–420]: gated by `bab()`; per-player visibility via
  `jJ.bIA`; the "Self" option feeds the local player into the map when
  selected.
- "Friends" resolves through `rD.dlM().dmc().ddy()` friend check;
  "Invisibles" bypasses the `isInvisible` filter.
- Retention prune: timestamp comparison against `125.0 × Length.VB()` ms
  (float literal in decompile).
- Gradient phase: `Gradient Speed` scales the per-sample gradient advance;
  the per-frame phase increment is a literal float (linear in Speed ×
  sample index).

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 68–140):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Show For" (`cv BauFa`) | multi-group, 4 `cw`: Players, Friends, Invisibles, Self | — | default-on set per `Tz()` | [cU.java:68–110] |
| "Color" (`cG gxark`) | color | — | `bjG().bis()` white | [cU.java:112] |
| "Length" (`cC GctAm`) | numeric | step **0.01**, min **2.0**, max **4.0** | **3.0**; retention = **125 × Length** ms | [cU.java:120] |
| "Gradient Speed" (`cC LHxFV`) | numeric | step **1.0**, min **1.0**, max **10.0** | **5.0** | [cU.java:136] |

Note the unusual Length range: min 2.0 and max 4.0 (seconds-equivalent
multiplier), i.e. retention 250–500 ms across the slider.

## Unrecovered

- The ribbon's exact cross-section geometry (billboard vs 3D strip) is
  decided inside `kp.bQA/bQB` (shell helper); the contract only records
  "line segment pairs with gradient color".
- `cU$sp` stores a second float field beyond position+time (decompile shows
  a padding/velocity field) whose exact use (fade factor vs width taper) is
  [uncertain].
- Sampling frequency is once per `gH.th` tick (confirmed), but whether an
  additional render-time interpolation sample is inserted when the player
  moved > 1 block since the last tick is [uncertain] — the branch exists at
  the tail of the tick loop but its guard is folded into DES helpers.
- Whether gradient phase is global (shared clock) or per-player (offset by
  first sample time) — [uncertain].