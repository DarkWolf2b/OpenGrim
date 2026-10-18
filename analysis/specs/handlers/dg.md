# Pearl Prediction (sixtwo.dg) — handler-derived behavior spec

Class: `sixtwo/dg` · display name **Pearl Prediction** (module id 93).
Superclass `gg`, implements `lA` (HUD contributor). **Zero native methods
declared** — pure-Java payload class; no image addresses (0x18xxxxxxx) to
cite. Evidence cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/dg.java` (529 lines) plus
`analysis/decompiled/payload-named/sixtwo/dg$sx.java` (marker inner class).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/dg.java` — fully decompiled.
2. Inner class `dg$sx.java` (payload-named) — marker record; `doo()` is
   partially decompiled (draw section past line ~260 truncated in the
   payload-named file; body readable up to the fade/draw preamble).
3. `analysis/specs/modules/dg.md` structural spec.
4. Simulation helpers: `mh.ckg(entity)` trajectory-sim builder,
   `.ckD(md.HIkeq)` projectile type (pearl), `.ckF(hasNoGravity())`,
   `.ckx(velocity)`, `.cky(DES int ~12849 = max steps, unrecovered)`,
   `.ckz(−128.0)` (min Y), `me.cjZ(sim)` result with `termination()`,
   `simulatedSteps()`, `finalPosition()`; `mf.juSGK`/`mf.RlLKW` termination
   enum kinds.
5. Helpers: `cJ` boolean, `gk` HUD render, `hp` entity-removal event,
   `rk`/`rj` fade animation, `jI.bIw` world→screen.

## Runtime model

- State: `List<dg$sx> ChEiM` — one marker per tracked pearl.
- **`aei(go.sX)`** [dg.java:191] — world render (also the tracking tick):
  1. `ChEiM.removeIf(dg$sx::dop)` (expired);
  2. collect live pearl entity ids into a `HashSet`;
  3. tracked entries whose pearl id is gone → fade
     (`iAudN.dhd(0.0f)`, `sDPfY = true`);
  4. untracked pearls: simulate —
     `mh.ckg(pearl).ckD(md.HIkeq).ckF(pearl.hasNoGravity())
     .ckx(pearl velocity).cky(DES int ~12849 max steps).ckz(−128.0)` →
     `me.cjZ(sim)`;
     accept the prediction only if
     `termination == mf.juSGK or mf.RlLKW`;
     `steps = max(simulatedSteps() − 1, 0)`;
     add `dg$sx(finalPosition, pearlId, steps)`.
- **`aeh(hp)`** [387] — entity-removal event: pearl removed → fade matching
  marker.
- **`aeg(gk)`** [168] — HUD render: for each marker `dg$sx.doo(lC, Show Time
  Left.VOBNu)`.
- **`YO()`** [512] — unregister + clear `ChEiM`.

## Per-handler semantics

`dg$sx` fields: `SDjuQ` (pearl entity id), `EVltR` (predicted steps),
`rSDHs` (player.age at creation), `sDPfY` (done flag), `iAudN` (`rk` fade
animation, duration DES ~**4745**); `dop()` expired `= done &&
dhj() ≤ 0`; `doo()` draw: `dhc(!done)`, `dhs(rj.XzDkv | rj.AYqck)`, then
project `finalPosition` via `jI.bIw` and draw the landing marker; the
optional "time left" text uses the steps value (`EVltR`) — the draw tail
beyond the fade preamble sits in the truncated region of the inner-class
decompile (see Unrecovered).

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
line 82):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Show Time Left" (`cJ VOBNu`) | boolean | — | `false` (`WE(false)`) | [dg.java:82] |

Single setting module.

## Unrecovered

- `cky(DES int ~12849)` — max simulation steps constant, plaintext not
  dumped; only that the value is decoded via DES — open.
- `mf.juSGK` / `mf.RlLKW` termination-kind meanings (presumably
  "hit-block"/"hit-entity" or "landed"/"despawned") — enum constant
  identities hidden by the VM — open; do not guess.
- `dg$sx.doo()` draw tail (marker shape/color, exact time-left text format)
  — inner-class decompile truncated after the fade preamble (~line 260 of
  `dg$sx.java`); javap recovery not yet performed — open.
- Fade duration plaintext (DES ~**4745**) — open.
- Whether `ckz(−128.0)` is min-Y or bounce threshold — [uncertain]
  (parameter name unrecovered; value literal certain).