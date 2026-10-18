# Shield Status (sixtwo.cY) — handler-derived behavior spec

Class: `sixtwo/cY` · display name **Shield Status** (module id 159).
Superclass `gg`. **Mixed backing**: the module declares **zero native
methods** itself, but its behavior core is the native-backed helper class
`on` (`ReCrR`, all `cF*` entry points are `native` — see below); no image
addresses (0x18xxxxxxx) exist for cY's own methods. Evidence cites are
decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/cY.java` (585 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cY.java` — fully decompiled;
   listeners and public color resolver readable.
2. `analysis/decompiled/payload-named/sixtwo/on.java` — native helper
   (`ReCrR`): API contract only, bodies virtualized.
3. `analysis/specs/modules/cY.md` structural spec.
4. Yarn mappings: `EntityStatusS2CPacket`, `PlaySoundS2CPacket`,
   `SoundInstance.getId().getPath()`.

## Runtime model

- State lives in `on ReCrR` (per-player shield state machine), driven by:
  - `cFy(player, byte status)` — entity-status packet push
  - `cFv()` — per-tick update
  - `cFz(player)` — attack event push
  - `cFw(x, y, z)` — sound-position push
  - `cFG()` — clear
  - queries: `cFA(player)` → shield disabled?, `cFC(player)` → actively
    using shield?, `cFB(player)` → float progress 0..1
  - sound matching: `cFt(String, Consumer)`, `cFs`, `cFE/cFD/cFF`; statics
    `cFJ/cFK/cFL`.
- **`aaO(gM)`** [252] — bare tick → `ReCrR.cFG()` (clear).
- **`aaL(gH.ti)`** [372] — post-motion tick → `ReCrR.cFv()`.
- **`aaM(hw.tv)`** [381] — attack event → `ReCrR.cFz(player)` (attacked
  entity).
- **`aaN(gL.tk)`** [409] — packet handler: `EntityStatusS2CPacket` →
  `cFy(player, status)`; `PlaySoundS2CPacket` → if sound id path contains
  DES string `qnaeb` (unrecovered plaintext — shield block/break sound key)
  → `cFw(x, y, z)`.
- **`aaP(go.sX)`** [527] / **`aaQ(go.sY, mw.LOWEST)`** [561] — render
  markers → `jD.bHl()` (defer to shell status renderer; visual draw out of
  scope).
- **`YO()`** [566] — `cFG()` + `jD.bHm()/bHj()` teardown.
- **`aaK(PlayerEntity)`** [267–371] — public color resolver used by the
  shell renderer (below).

## Per-handler semantics

`aaK(PlayerEntity)` color resolution, in order:
1. `null` player → `UhgnI` (fully transparent color).
2. **Only Self** enabled and player ≠ local player → `UhgnI`.
3. `ReCrR.cFC(player)` (actively using shield) → **Using Color**.
4. `!Color Transition` → `cFA(player)` ? **Disabled Color** :
   **Enabled Color**.
5. else `jk.bDu(Enabled Color, Disabled Color, cFB(player))` — gradient lerp
   on the native progress value.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 68–148):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Only Self" (`cJ BDssA`) | boolean | — | `false` | [cY.java:82] |
| "Color Transition" (`cJ SnGMi`) | boolean | — | `true` (cJ default) | [cY.java:100] |
| "Enabled Color" (`cG VBZRj`) | color | — | `mG.rxCUH` | [cY.java:115] |
| "Using Color" (`cG iZEwm`) | color | — | `mG.rxCUH` | [cY.java:128] |
| "Disabled Color" (`cG ykbJL`) | color | — | `mG.vuAhq` | [cY.java:144] |

## Unrecovered

- **`qnaeb`** — DES-encrypted sound-id substring compared in `aaN`
  [declared cY.java:62]; presumably the shield-block/break sound path key;
  plaintext not dumped — open.
- The `on` helper's native body (how `cFB` progress animates, what statuses
  map to enabled/disabled) is virtualized — API contract above only; do not
  guess the state machine internals.
- Whether `aaQ(go.sY, mw.LOWEST)` renders the status HUD or only marks the
  pass order [uncertain] — both render handlers collapse to `jD.bHl()`.