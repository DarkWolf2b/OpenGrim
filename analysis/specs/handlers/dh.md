# Ambience (sixtwo.dh) — handler-derived behavior spec

Class: `sixtwo/dh` · display name **Ambience** (module id 1544-line source,
largest in batch). Superclass `gg`, implements `lG`. **Zero native methods
declared** — pure-Java payload class; no image addresses (0x18xxxxxxx) to
cite. Two methods failed CFR (`aet`, `aeq`) and were recovered from javap
bytecode. Evidence cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/dh.java` (1541 lines), javap
offsets for `aeq`, and inner classes `dh$sy` / `dh$sz`.

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/dh.java` — fully decompiled
   except `aet()` [1110] and `aeq(gH.th)` [1170] (CFR switch failures).
2. javap disassembly of `sixtwo.dh` — `aet` and `aeq` fully recovered from
   bytecode (including the weather tableswitch and spawn constants).
3. Inner classes: `dh$sy` (rain/thunder gradient stash:
   `cmcMI` rain, `eIsxf` thunder; `doy(World)` restores via
   `world.setRainGradient/setThunderGradient` when nonzero; `dow/dov` set;
   `dox` reset; `doz` `>= 0`/`>= 1` predicate — corrected 2026-10-17, batch 23), `dh$sz` (ambient particle: pos/prev
   pos, rot/prev rot, velocity = arg × **0.04**, per-particle interval
   `JoZky`, scale `uTzzU`, done flag `WWClU`, throttle `jYAnc` (`mT.cpz()`),
   fade `JiVPB` (`rk`, duration DES, mode `rj.UPXqT`); `doB()` integrates
   position and damps velocity × **0.98**).
4. `analysis/specs/modules/dh.md` structural spec.

## Runtime model

- **`aes(gL.tk)`** [dh.java:650] — packet handler:
  - `GameStateChangeS2CPacket`: `RAIN_STARTED` → `xPMvL.dov(1.0f)` +
    cancel (`bdX(true)`); `RAIN_STOPPED` → `dov(0.0f)` + cancel;
    `RAIN_GRADIENT_CHANGED` → `dov(value)` + cancel;
    `THUNDER_GRADIENT_CHANGED` → `dow(value)` + cancel.
  - `WorldTimeUpdateS2CPacket` → cancel when **Change Time** enabled.
  - `DisconnectS2CPacket` → `xPMvL.dox()` (reset stash).
- **`aep(gM)`** [1161] — bare tick: `xPMvL.dox()`; `ZlHFA.clear()`.
- **`aeq(gH.th)`** [1170, javap] — pre-motion tick:
  1. gate `bab()` && **Particles** enabled;
  2. `ZlHFA.removeIf(dh::afe)` — expired = `JiVPB.dhj() == 0.0f && WWClU`;
  3. integrate each particle (`dh$sz.doB()`);
  4. if `ZlHFA.size() < DES int (slot ~2577, unrecovered cap)`: spawn
     `dh$sz(pos = playerPos + (cpP(−20, 20), cpP(0, 5), cpP(−20, 20)),
     rot = (cpP(−1, 1), cpP(0, 2), cpP(−1, 1)), vel = (cpP(−1, 1) ×3),
     interval = cpO(DES-int, DES-int) ms, scale = cpQ(0.1, 0.3))`;
  5. weather: if **Change Weather**: Weather `ST()` switch — 0 Clear →
     `setRainGradient(0.0f)`; 1 Rain → `(1.0f, 0.0f)`; 2 Thunder →
     `(1.0f, 1.0f)`; 3 Snow → `(1.0f, 0.0f)` (same as Rain);
  6. restore: if `xPMvL.doz()` (stashed gradients) → `xPMvL.doy(world)` +
     `dox()`;
  7. time: if **Change Time** → `t = aet()`; `world.setTime(t, t, false)`.
- **`aet()`** [1110, javap] — time source: if **Time Mode** == Presets
  (`SQ(0)`): switch **Time** `ST()` 0..5 → DES long constants (Dawn,
  Morning, Day, Evening, Sunset, Night — unrecovered); index 6 (Real Time)
  → `aeu(ZoneId.systemDefault())`; else (Custom) → `Time Value.VC()`.
- **`aeu(ZoneId)`** [977] — real-time mapping:
  `round(minutes-of-day / 1440 × 24000) mod 24000` (+ DES constant if
  negative); three DES longs (~25634 / ~2212 / ~15426) unrecovered.
- **`aer(go.sX)`** [1241] — world render (below).

## Per-handler semantics

`aer(go.sX)` particle rendering:
1. gate **Particles** (`mfkLN.WF()`); MatrixStack + tick delta + camera;
   color `mG.cnQ(GGEeK.Wh())`;
2. billboard pass: `XSRvt.startBatch(ob.cBv(DES "m"-slot ~3717), XRoTS)`
   (XRoTS = `XSRvt.defaultState().bVG(LEQUAL_DEPTH_TEST).bVH(false)`);
   per particle: size = **4.0 × uTzzU**; translate (`jI.bIs`), multiply by
   `camera.getRotation()` (billboard); quad `kG.bTv(stack, −s/2, −s/2, 0,
   s, s).dtF(color.coa(255 × alpha × 0.4)).dtG()`; `endBatch()`;
3. geometry pass: **Triangles** (`GBNpt.SZ()`) → `dh.xQDww` batch with
   `kC.bSK` (filled triangles, outline `coa(255×α×0.4)`, fill
   `coa(205×α)`); else **Cubes** → `dh.MMuss` batch with `kH.bTJ`
   (same colors) over `UEYnO = Box(−0.5..0.5)` [UEYnO, line 109];
   per particle: rotate by `Quaternionf().rotationXYZ(zgdiH/euQyK)` and
   scale by `uTzzU`; a particle's `WWClU` (fading) flips true when its
   throttle `jYAnc.cpC(JoZky)` fires.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 122–446):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Particles" (`cJ mfkLN`) | boolean | — | `false` | [dh.java:138] |
| "Particle Type" (`ct jabvB`) | group | Triangles (`GBNpt`), Cubes (`CqmWf`) | — | [dh.java:140–166] |
| "Particles Color" (`cG GGEeK`) | color | — | white; visible when Particles | [dh.java:182] |
| "Change Time" (`cJ yFtsJ`) | boolean | — | `true` | [dh.java:195] |
| "Time Mode" (`ct qpOXm`) | group | Presets (`BoBPt`), Custom (`aZAwH`) | —; visible when Change Time | [dh.java:197–222] |
| "Time" (`ct JQMui`) | group, 7 `cu` children | Dawn, Morning, Day, Evening, Sunset, Night, Real Time | —; visible when Change Time && Presets | [dh.java:224–267] |
| "Time Value" (`cC WEVIb`) | numeric | step **100.0**, min **0.0**, max **24000.0** | **0.0**, suffix **" ticks"**; visible when Change Time && Custom | [dh.java:276] |
| "Change Weather" (`cJ YdEwv`) | boolean | — | `true` | [dh.java:292] |
| "Weather" (`ct pJzyP`) | group, 4 children | Clear, Rain, Thunder, Snow | —; visible when Change Weather | [dh.java:294–317] |
| "Fog" (`ct tOEQJ`) | group, 3 children | None (`vkaUD`), Clear (`vNlIZ`), Override (`uxQGU`, default `.SY()`) | Override | [dh.java:319–329] |
| "Fog Color" (`cG UipTW`) | color | — | white; visible when Fog == Override | [dh.java:337] |
| "Fog Range" (`cA MbiQi`) | slider | step **1.0**, min **0.0**, max **256.0**, default `UI(64.0, 128.0)` (dual-anchor 64/128), suffix **" blocks"**; visible when Fog == Override | [dh.java:348] |
| "Sync With Sky" (`cJ VkfWt`) | boolean | — | `true`; visible when Fog == Override | [dh.java:363] |

## Unrecovered

- **Preset tick times** — six DES longs behind `aet`'s tableswitch (Dawn,
  Morning, Day, Evening, Sunset, Night): **Dawn = 23000 recovered** (trace-backed,
  2026-10-17, batch 23); the other five — open.
- **Particle cap** (DES int slot ~**2577** in `aeq`) and the two DES ints
  feeding `cpO` for the per-particle interval range (~**15922**, ~**12446**)
  — open.
- **Real-time DES longs** (~**25634**, ~**2212**, ~**15426** in `aeu`) —
  open (only the 1440→24000 mapping formula is recovered).
- **Billboard texture** name (DES string slot ~**3717** in `aer`) — open.
- `dh$sy.doz()` exact predicate — corrected 2026-10-17, batch 23: it is a
  `>= 0` / `>= 1` comparison pair, not a plain captured-weather flag;
  boolean-combination order [uncertain].
- Fade duration of `dh$sz.JiVPB` (DES long) and mode `rj.UPXqT` meaning —
  open.
- Fog pipeline: `aer` shows particle rendering only; fog color/range
  application happens in the shell (`kS`-family pipeline consumers) — the
  Fog Color/Range/Sync With Sky settings are consumed there; exact fog
  pipeline contract [uncertain] from this class alone.