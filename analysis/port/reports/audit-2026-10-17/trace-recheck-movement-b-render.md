# Trace recheck — movement part 2 + render (wave 2)

Modules: eE, eR, es, eu, fz, em, eO, dB, ed.
Session date: 2026-10-17. Reviewer: trace-evidence parity subagent.

## Evidence base (in-project, canonical)

- Trace digests: `analysis/traces/2026-10-17/digests/<ENC>.txt` (ENC = id with `_` after each uppercase).
- Raw per-class traces: `analysis/traces/2026-10-17/by-class-casesafe/<ENC>.jsonl`.
- Cross-check table: `analysis/traces/2026-10-17/n-evidence.tsv`; summaries `module-summary.tsv`.
- Raw full trace: `analysis/traces/2026-10-17/raw/trace.jsonl` (738 MB, same schema).
- All QPC timestamps are 10 MHz units (~100 ns); the driver enabled each module for a
  ~4 s window at 1.5–6 client ticks/s under trace load.

### Method: merged timeline + synchronous-caller reconstruction

The per-class split hides cross-class nesting, so the review rebuilt one merged QPC
timeline (626,484 enter/exit events) and, for every event of interest, recovered the
enclosing open frames (LIFO stack of enters not yet exited). This separates true nested
calls from same-window background activity (render thread, network thread).

**Key structural finding — VM tripwire probes.** The VM-virtualized bodies call static
array/string getters of *unrelated* modules at the start/middle of their bodies. The
caller reconstruction shows each probe is called by a scattered set of VM bodies
(never by Java code), and the returns are always the "normal" value (null / non-null
per probe polarity):

| probe | callers observed in session | returned |
|---|---|---|
| `fg.aIW()` (Target Lock static int[]) | fp.aLP/aLS/aLL (37/37/36), fo.aLm (17), fC.aSw (14), **fz.aRT (13)**, fr.aNB (6), fs (6), fT.aXy (3), **fz.aRU (3)** | null (275×) |
| `ee.arS()` (Cape tripwire static) | dM.anA (21), dR.apk (3), dF.ale (2), ec.arz (2), dZ.arc (2), dX.aqT (2), dW (3), **dB.aaj (1)**, eb.aro (1), dV.aaj (1), **ed.aaj (1)**, ee.aaj (1) | null |
| `eB.avS()` (Flight static String[]) | ey.ava/avb/avc/avf (25), eD.awu/awt (9), ez.avk (3), ek.asT/asV (6), el.atb (3), ej.asR (2), **em.atj (2)** | null ("always-null in this build", et.md:106) |
| `eP.aBU()` (Mace-suite shared config `LuzRg`) | **eM.aAZ (3)**, **eN.aBb (2)**, **eO.aBu (1)**, **eO.aBv (1)** | null (unseeded) |
| `fX.aYu()` (Interface shared int[] / global VM channel) | constant background (hundreds per window from many VM bodies) | non-null (array replaced periodically) |

These probes are obfuscation plumbing (anti-tamper / shared-state channel), not module
behavior; they are **not** ported, but their call sites prove the VM bodies executed
the normal path and pin cross-module reads that are behaviorally meaningful (eO → eP).

**Key structural finding — S2C packet dispatch.** `fT.aXs(gL$tk)` (Resource Pack
Bypass) is the session's global inbound-packet hook: it fired 4,353× (every other
`gL$tk` handler fired 1–24×), and every call fans out to aXu/aXv/aXw/aXx/aXz/aXA once
each + aXy twice. Packet handlers therefore receive **every** S2C packet and filter
inside the body — the framework has no per-handler type pre-filter. This is used below
to confirm fz's handler shape.

## Per-module results

### eE — Parkour
- **Trace**: `awz` did not run (0 enters; the class logged only its `load` event). No
  client-tick activity was needed for the query; the native movement layer simply never
  polled it in the captured state.
- **Changed**: javadoc only — trace note + capture condition.
- **Parity**: 65% (unchanged; status partial).
- **Remaining gaps + capture condition**: `awz()`'s offset/expand vectors, extra gates
  (on-ground/sneak/using) and caller cadence are VM-only. Capture condition: enable
  Parkour and sprint/walk on ground toward a block edge so the movement patch polls
  `awz()` (log the boolean per tick + the box vectors).

### eR — Wind Hop
- **Trace**: only `YO` ran (1×, 169511145782→169511978929, ~83 ms under trace load — on
  disable). `aCF/aCG/aCH/aCI`: 0 enters. Notably **no client-tick event fired anywhere
  in the whole 20 s context window** (169.4G–169.6G: zero `(Lsixtwo/gH$th;)V` handler
  entries), so the tick listener had no chance to run; aCF needs a key event and the
  Activation Key defaults to -999 (unbound).
- **Changed**: javadoc only — trace note + capture conditions.
- **Parity**: 55% (unchanged; status partial).
- **Remaining gaps + capture conditions**: aCH threshold constant (500 ms stand-in),
  aCG (`gv`) identity, qJ slot arbitration, use-path (`oT` builder + useKey spoof).
  Capture conditions: bind Activation Key and press it while on ground with a wind
  charge in the hotbar; leave the module enabled across live (unpaused) ticks.

### es — No Push
- **Trace**: `aup`/`auq`: 0 enters (class logged only `load`) — no block/entity push
  occurred in the window.
- **Changed**: javadoc only — trace note + capture conditions.
- **Parity**: 70% (unchanged; status partial).
- **Remaining gaps + capture conditions**: unconditional-vs-gated cancellation (the
  riptide exemption is the spec's reading 1 of the shared es/eu window; still
  unproven). Capture conditions: collide with an entity while moving (auq); get pushed
  out of a block (aup, e.g. closing piston). Record whether the cancel flag is set
  while riptiding.

### eu — Trident Boost
- **Trace**: `auJ` did not run (0 enters). No other events.
- **Fixed (behavior, evidence-backed)**:
  1. **Trigger made functional.** The original listener is `auJ(gD)` — a cancelable
     item-use shell event. The previous port polled `player.isUsingItem()`, which can
     **never** be true for a dry spin-attack trident: vanilla `TridentItem.use` returns
     `ActionResult.FAIL` when `getTridentSpinAttackStrength > 0 && !isTouchingWaterOrRain`
     (verified byte-exact in the yarn 1.21.11+build.6 named jar), so the module was dead
     outside water/rain. Now wired to a new `UseItemEvent` (Fabric `UseItemCallback`,
     fired by `MultiPlayerGameMode.interactItem` before vanilla processing) — the bus
     analog of the native `gD` event (empty `hH` shell, eu.java:79; firing site is
     native/unrecovered).
  2. **Launch math corrected to the vanilla body** (`TridentItem.onStoppedUsing`, named
     jar): direction `(-sin(yaw)cos(pitch), -sin(pitch), cos(yaw)cos(pitch))`,
     normalized and scaled by `spinStrength` itself (1.5/2.25/3.0 from the enchantment
     data) — the previous `3.0f * (1.0f + spinStrength)` double-counted and was ~4–5×
     too strong.
  3. `useRiptide(20, 8.0F, stack)` — vanilla passes the fixed 8.0F attack damage, not
     the spin strength.
  4. Ground hop `move(MovementType.SELF, (0, 1.1999999284744263, 0))` only when
     `isOnGround()` — replaces the invented `velocity*0.05` move.
  - Sound switch on `(int) spinStrength` (1/2/3) reproduces vanilla's level-indexed
    RIPTIDE_1/2/3 choice for Riptide I/II/III; documented as the original's VM-hidden
    selection formula.
- **Parity**: 65% → **80%** (status partial).
- **Remaining gaps + capture condition**: checkbox exact role (widen conditions vs gate
  cooldown), cooldown unit (suffix `yJtAG` undecrypted; " s" is the recorded guess),
  gD firing site/timing (press vs release — this port boosts on the use attempt).
  Capture condition: hold right-click with a Riptide trident while dry (Allow Outside
  Water Or Rain checked) with the item-use/launch calls traced.

### fz — Auto Jump Reset
- **Trace**: `aRT` 13× (per inbound packet), `aRU` 3× (hurt), `YO` 1× on disable.
  `aRT` is invoked for **every** S2C packet: in its window it fired 13× paired 1:1 with
  the global packet hook `fT.aXs` (13/13, each fz call ~3.4–12.1K units after the fT exit,
  which itself takes ~16 ms under trace load) — so the packet-type test lives inside
  the VM body and the port's `PacketReceiveEvent` + type-filter shape matches. Hurt
  events trail velocity packets by ~one stalled server tick (e.g. aRT 173134030855 →
  aRU 173134252022), supporting packet-then-reset. Every `aRT`/`aRU` synchronously
  called the `fg.aIW()` tripwire (null); no constants/strings surfaced.
- **Changed**: javadoc only (no behavior constant pinned by the trace).
- **Parity**: 80% (unchanged; status partial).
- **Remaining gaps + capture condition**: exact packet type (EntityVelocityUpdateS2CPacket
  remains the recorded guess), latch reset site (`aRU` vs per-packet), jump mechanism,
  Chance suffix (`ddesD` undecrypted → " %" guess). Capture condition: take
  player-sourced knockback with the module enabled and compare roll counts across the
  hurt + velocity-packet pair.

### em — High Jump
- **Trace**: `atj` ran 2× (170403335529, 170417750615 — once per client tick;
  ~25 ms/16 ms under trace load, consistent with the recovered chunk scan). Each call
  synchronously invoked the `eB.avS()` tripwire (both session calls of that probe are
  inside atj windows). `ati` did not run.
- **Fixed (behavior, evidence-backed)**: the Grim Shulker upkeep now runs **per tick**
  (`atj` = the tick listener whose slice contains the chunk scan) and caches the
  platform flag; the jump boost reads the cached result. Previously the chunk scan ran
  only at jump-off time.
- **Parity**: 75% → **80%** (status partial).
- **Remaining gaps + capture condition**: `ati` (jump-velocity event `hs`) float mapping,
  `atk` acceptance condition, mode-callback semantics. Capture condition: jump while
  the module is enabled (especially off a shulker box) with the `hs` event traced.

### eO — Auto Pearl Catch
- **Trace**: `aBu` (pre-rotation) 1×, `aBv` (tick) 1×, `YO` 1× on disable. **Both
  `aBu` and `aBv` synchronously read `eP.aBU()`** — the Mace-suite shared config array
  `LuzRg` (also read by eM.aAZ 3× and eN.aBb 2× in the same session; returned null).
  This confirms the technique's mace-suite integration at runtime; `aBt` (mouse
  activation) did not trigger.
- **Changed**: javadoc only (the mace-phase body remains unrecovered — no guessing).
- **Parity**: 65% (unchanged; status partial).
- **Remaining gaps + capture conditions**: pearl prediction/wind-charge aim math
  (`eQ.aBF`), mace phase, return-slot mechanics, delay units. Capture conditions:
  move the mouse/click with the Activation Key bound while a pearl is in flight (aBt);
  hold a mace with a pearl in flight and trace the aBu/aBv item reads + packet sends.

### dB — Full Bright
- **Trace**: `aaj` 1× on enable (166487634008, ~17 ms), `YO` 1× on disable
  (166528020659, ~8 ms). `aaj`'s only nested sixtwo call is the `ee.arS()` tripwire
  (null → normal path). No numeric/string constants surfaced.
- **Fixed (behavior, evidence-backed)**: boost gamma **16.0 → 1.0**. The gamma option
  is built with `SimpleOption.DoubleSliderCallbacks` in the named jar
  (`GameOptions.<init>`, "options.gamma", default 0.5), whose `validate` accepts only
  `[0.0, 1.0]`; `SimpleOption.setValue` keeps the old value on a failed validation, so
  the previous 16.0 stand-in was silently rejected and the module was a no-op. 1.0
  (vanilla maximum) is the high-probability reading of the VM-hidden constant.
- **Parity**: 90% → **92%** (status ported, documented reconstruction).
- **Remaining gaps**: exact written value (constrained to [0,1]), save/restore protocol
  nuances (mid-session re-capture) — VM-only.

### ed — Custom Camera Distance
- **Trace**: `aaj` 1× on enable (169997260635, ~123 ms under trace load); its only
  nested sixtwo call is the `ee.arS()` tripwire (null). No camera/render API token
  surfaced.
- **Changed**: javadoc only.
- **Parity**: 85% (unchanged; status ported, documented reconstruction).
- **Remaining gaps + capture condition**: the camera application/consumer contract
  (no listener in the original; port uses `CameraUpdateEvent` + `Camera.pos` reflection
  — field verified `private Vec3d pos` in the named jar), first-person handling, `No
  Clip` clip semantics, suffix `XgLBB` undecrypted. Capture condition: enable the
  module in third-person and log camera pos/distance per frame to pin the consumer
  contract.

## Compile

`.\gradlew.bat compileJava -q --offline` → **EXIT=0** (clean, first attempt).

## Changed files

- `src/main/java/dev/opengrim/event/impl/UseItemEvent.java` (new — item-use event,
  Fabric `UseItemCallback` bridge analog of the native `gD` event)
- `src/main/java/dev/opengrim/event/EventBridge.java` (register `UseItemCallback`)
- `src/main/java/dev/opengrim/modules/movement/TridentBoost.java` (trigger + vanilla
  launch math)
- `src/main/java/dev/opengrim/modules/render/FullBright.java` (gamma boost 1.0)
- `src/main/java/dev/opengrim/modules/movement/HighJump.java` (per-tick atj scan)
- `src/main/java/dev/opengrim/modules/movement/AutoJumpReset.java` (javadoc)
- `src/main/java/dev/opengrim/modules/movement/Parkour.java` (javadoc)
- `src/main/java/dev/opengrim/modules/movement/WindHop.java` (javadoc)
- `src/main/java/dev/opengrim/modules/movement/NoPush.java` (javadoc)
- `src/main/java/dev/opengrim/modules/movement/AutoPearlCatch.java` (javadoc)
- `src/main/java/dev/opengrim/modules/render/CustomCameraDistance.java` (javadoc)

## Follow-up trace capture requests (conditioned sessions)

| module | method(s) | condition |
|---|---|---|
| eE | `awz` | walk/sprint on ground toward a block edge with Parkour enabled |
| eR | `aCF`/`aCH` | bind Activation Key, press it on ground with a wind charge in the hotbar; unpaused ticks |
| eR | `aCG` | identity of `gv` unrecovered — no known trigger |
| es | `auq`/`aup` | entity collision while moving; block push-out (piston) |
| eu | `auJ` | dry Riptide use attempt with the checkbox on (item-use + launch calls) |
| em | `ati` | jump (off a shulker) with the `hs` event traced |
| eO | `aBt` + mace phase | mouse/click with Activation Key bound + mace held while a pearl is in flight |
| fz | latch reset | player-sourced knockback; compare roll counts per hurt window |
