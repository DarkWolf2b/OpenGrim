# Trace re-check — movement group A (eq, ez, ev, ew, el, ej, ep, eA, ex, ek)

Second-pass re-review after the 2026-10-17 runtime dump session. Wave 1
(`batch-01..03.md`) left these modules with **[N] "needs runtime trace"** gaps;
the trace now exists at `analysis/traces/2026-10-17/` (per-module
`by-class-casesafe/<ENC>.jsonl`, `digests/<ENC>.txt`, `n-evidence.tsv`,
`module-summary.tsv`). Method per module: read the raw enter/exit sequence in the
per-module JSONL, reconstruct per-tick call order / nested calls / exact numeric
returns from the full-session context, and triangulate against the decompile,
handler spec, decrypted pool and Ghidra inventory. Trace-backed behavior is 1:1
evidence and was implemented; everything else is labeled.

**Window mapping.** The driver enabled every module for 4 s in a fixed order
(`gg.baa(true)` → 4 s → `gg.baa(false)` → 300 ms). Module windows below were
mapped from the `gg.baa` event timestamps (driver.log order + anchor: ev's
`aaj` at t=170827.53 runs at enable). All ten modules reported `ok=1`.

**Global facts found while reconstructing (apply across the group).**

- `hc` is a **per-client-tick** event: 1060 constructions in the session, each
  ~40 ms (QPC) after the corresponding `gH$th` tick dispatch. It is produced by
  the native layer (empty Java stack at `<init>`) and dispatched through
  `hH.bdV`; the producer reads the cancel flag (`hH.bdW`) after dispatch. Used
  here as the tick clock (tick stalls show up as `hc` gaps).
- The **ClickGUI (`sixtwo.bl`) was open for the whole tour**: exactly one `gJ`
  screen event in the session (t=165576.6M, the GUI's creation) and `bl`
  `method_25393`/`method_25419` tick once per client tick in every window
  checked. GUI-thread noise (`eB.avS` = Flight status text, `jN`/`mG`/`rk`
  rendering) interleaves in handler windows and is not handler behavior.
- **Tick stalls under trace load**: two multi-second stretches with zero
  `hc`/`gH$th` dispatches — t≈168.69G→168.88G (~19 s) and t≈170.75G→170.95G
  (~20 s). The windows of **eA** and **ew/ex** fall inside them, which is why
  their tick listeners never ran (no wiring gap, no disable race).
- Events **never constructed** in the whole session: `gM` (0), `hv` (0),
  `hq` (0) — ej's `asP`/`asQ` and ev's `auR` could not fire. Only 2 `gJ`.

---

### ej — Air Stuck — trace-recovered body, impl updated — parity 85% → 90%

Trace (`ej.jsonl`, window [170263.55, 170304.13]): `asR(hc)` entered **2×** —
once per tick (hc at 170280.69, 170297.57). Recovered body order (identical on
both calls; strict nesting):

1. `gg.bab()` → 1 — in-world guard (gg.java:393-459);
2. `UqlCk.cpC(l2)` → 1 — mT timer "elapsed > l2" gate (mT.java:60-81), nested
   `mT.cpK()` static read; `l2` is VM-resident, **both observed ticks passed**;
3. `rD.dlX()` → `qL.dbC()` — current rotation: `player.getRotationClient()`
   via `ov.cGw(Vec2f)`; the stored silent override (`qkMAI`) was null
   (qL.java:145-176). Trace: `ov.cGI()` → 0, `ov.cGJ()` → 0 (fresh-join yaw);
4. `iV.bxl(ov)` — sends `PlayerMoveC2SPacket.Full` with the player's **live**
   X/Y/Z at call time + rotation + real `isOnGround()`/`horizontalCollision`
   (iV.java:106-117; the gL$tj send dispatch nests inside bxl);
5. `UqlCk.cpB()` — timer reset;
6. `var1.bdX(true)` — the hc event is **canceled**; the producer's post-dispatch
   `bdW()` read returned 1 (hH.java:14-16).

Fixed:
- packet position: `frozenPos` → `player.getEntityPos()` (live at send time,
  exactly iV.bxl; under the local pin both are equal, but this is the recovered
  form) — AirStuck.java:98-100;
- javadoc rewritten to the trace-recovered order + adaptations (AirStuck.java:11-56).

Remaining gaps (labeled): the `l2` timer constant (port sends every tick —
equivalent for any l2 ≤ tick interval); the native hc-cancel is approximated by
the local pin (setPos/zero velocity/fallDistance — no hc counterpart on our
bus); asP(gM)/asQ(hv) bodies unobserved. Capture conditions: gM — movement/
action notification, producer unknown (never fired in-session); hv — **take
damage while Air Stuck is enabled**.

### ez — No Fall — trace confirms listener + no-cancel — parity 85% → 88%

Trace (`ez.jsonl`, window [171002.74, 171045.92]): `avk(gL$tj)` entered **3×**,
once per outbound packet (two movement-packet sends in the first tick, one in
the second). Body: `gg.bab()` → 1, then invisible MC work (the accessor
rewrite); **the gL$tj event was NOT canceled** (post-dispatch `bdW()` → 0).

Fixed: javadoc — trace citations + the no-cancel confirmation (NoFall.java:33-42).

Remaining gaps: the spoof gate (falling condition) is VM-resident — the port's
falling gate stays labeled. Capture condition: be airborne (onGround false,
velocity.y < 0) while the client sends movement packets; a `str`-capturing run
cannot see the accessor write (mixin accessor, not traced).

### ev — Collision Long Jump — enable path traced, auR never fired — parity 80% → 82%

Trace (`ev.jsonl`, window [170827.21, 170868.12]): `aaj()` entered **1×** on
enable; its body called base `gg.aaj()` → `hF.bdI(this)` (listener registration;
gg.java:375-376) — matches our base setEnabled registration. `auR(hq)` did NOT
fire: **zero `hq` events in the entire session** (no boat collision).

Fixed: javadoc — trace citations (CollisionLongJump.java:17-29).

Remaining gaps: the jump mechanism, distance threshold, pair member choice,
repeat gating — all VM-resident. Capture condition: enable ev and walk/sprint
into a BoatEntity so `hq` fires with a boat in the pair.

### ew — No Jump Delay — window had zero ticks — parity 90% (unchanged)

Trace (`ew.jsonl`, window [170871.64, 170912.63]): **only the class load** —
`auT` never ran because the window sits inside the ~20 s tick stall (hc gap
170751.4 → 170951.1). Not a wiring failure.

Fixed: javadoc — trace citation + capture condition (NoJumpDelay.java:24-37).

Remaining gaps: the written immediate (0 inferred from "removes jump delay") and
the receiver scope. Capture condition: enable during normal ticking and jump
twice quickly (hold space) — the second jump must skip the vanilla cooldown.

### el — Water Speed — atb traced, water branch not entered — parity 90% (unchanged)

Trace (`el.jsonl`, window [170350.87, 170391.01]): `atb(gH$th)` entered **3×**,
once per tick; each body ran `gg.bab()` → 1 and returned **without any nested
sixtwo call** — neither `atc()`/`atd()` nor any helper ran (the player stood on
dry land; the water branch never executed).

Fixed: javadoc — trace citation + capture condition (WaterSpeed.java:31-44).

Remaining gaps: all motion math (multiplier form/axes, Depth Strider
gating-vs-scaling, Speed-effect role, probe geometry) and the atc/atd roles.
Capture condition: be in water moving forward with Depth Strider boots equipped
(optionally Speed effect / adjacent ice) — atb should then reach the
atc()/atd()/jl.bDR surface.

### eq — Null Movement — zero runtime surface (confirmed) — parity 75% (unchanged)

Trace: zero entries for `sixtwo.eq` in the whole session (`eq.jsonl` = class
load only). The class has no listener to invoke; its class-init stub ran at boot
(before method-entry capture). This strengthens the wave-1 negative: there is
no Java-side surface at all.

Fixed: javadoc — trace citation + explicit "no capture condition can reveal
more through Java-side tracing" (NullMovement.java:18-30).

Remaining gaps: the entire behavior mechanism (native-side, like ex), id
verification. The tick heuristic in the port stays a labeled stand-in.

### ep — Super Firework — atX/atY never ran — parity 90% (unchanged)

Trace: `ep.jsonl` = class load only; neither the `atX()` getter nor the
`atY(IJ)I` VM entry ran in-session (the boot-time decrypt calls seen in the
earlier capture did not recur).

Fixed: javadoc — trace citation + capture conditions (SuperFirework.java:34-44).

Remaining gaps: trigger event, boost math, window constants. Capture
conditions: (a) open the ClickGUI with the Movement tab showing ep — the
setting widget reads `atX()`; (b) glide with an elytra and use a firework
rocket to arm the trigger path.

### eA — Strafe — window had zero ticks — parity 85% (unchanged)

Trace (`eA_.jsonl`, window ~[168.79G, 168.83G]): **only the class load** —
`avm` never ran because the window sits inside the ~19 s tick stall (hc gap
168689.7 → 168883.8).

Fixed: javadoc — trace citation + capture condition (Strafe.java:37-49).

Remaining gaps: the entire `avm` arithmetic (Speed placement, vector choice,
camera alignment, ground/air branching) and the `sixtwo.eC` interaction form.
Capture condition: enable during normal ticking and move (forward + strafe)
while airborne.

### ex — Safe Walk — config-only surface confirmed — parity 90% (unchanged)

Trace: zero entries for `sixtwo.ex` in the whole session (`ex.jsonl` = class
load only) — consistent with the config-only Java surface (no handler method
exists). The edge patch runs in the native layer (ex's pool run has zero MC
tokens, ew.md:27).

Fixed: javadoc — trace citation + explicit "no Java-side capture condition"
(SafeWalk.java:32-42).

Remaining gaps: edge geometry, "Release On Forward" polarity/edge cases. The
tick clamp stays a labeled designer approximation.

### ek — Inventory Move — asV contract corrected from trace — parity 80% → 85%

Trace (`ek.jsonl`, window [170307.19, 170347.66]): `asT(gH$th)` entered **3×**
(once per tick; the ClickGUI was open and ticking per tick in the same window);
each `asT` called `asV()` exactly **once** and `asV` returned **1** all three
times. A non-HandledScreen screen (the ClickGUI) therefore yields `asV == true`
— the wave-1 reading "asV requires a HandledScreen" is disproven. `asU(gB)`
never fired (no screen clicks); `asW(KeyBinding)` has no separate entry.

Fixed:
- `isScreenSafe()` (the asV port): non-HandledScreen non-excluded screens now
  return true; the HandledScreen path keeps the cursor-stack check; exclusions
  checked first (InventoryMove.java:53-72);
- `onTick` now gates through `isScreenSafe()` — asT's per-tick call is asV
  itself (InventoryMove.java:74-83);
- javadoc — trace citations (InventoryMove.java:18-36).

Remaining gaps: `asU` cancel predicate (no slot-click event on our bus;
"Block Clicks" stays registered/unread), which keybindings asW covers, and the
null-screen asV outcome (kept false, unobserved). Capture condition: click a
slot in a handled screen with ek enabled (asU); show a chest screen with an
item on the cursor (asV false path).

---

## Summary

| id | parity | status | trace result |
|---|---|---|---|
| eq | 75% | partial | zero Java surface (class-init only) |
| ez | 88% | partial | avk 3×, no cancel — gate still VM-resident |
| ev | 82% | partial | aaj enable path ✓; auR unobserved (no `hq` event) |
| ew | 90% | ported (documented) | not triggered — tickless window |
| el | 90% | ported (documented) | atb 3×; water branch not entered |
| ej | 90% | partial | asR body reconstructed 1:1 (2×) — packet now live-position |
| ep | 90% | ported (documented) | atX/atY not triggered |
| eA | 85% | partial | not triggered — tickless window |
| ex | 90% | ported (documented) | config-only confirmed |
| ek | 85% | partial | asT→asV 3×, asV→1 — contract fixed |

Changed files:
- `src/main/java/dev/opengrim/modules/movement/AirStuck.java` — live-position
  packet (iV.bxl exact), full trace javadoc.
- `src/main/java/dev/opengrim/modules/movement/InventoryMove.java` —
  `isScreenSafe()` asV contract fix + onTick gate via asV + javadoc.
- `src/main/java/dev/opengrim/modules/movement/NoFall.java`,
  `CollisionLongJump.java`, `NoJumpDelay.java`, `WaterSpeed.java`,
  `NullMovement.java`, `SuperFirework.java`, `Strafe.java`, `SafeWalk.java` —
  trace citations + capture conditions in javadoc.

Compile: `.\gradlew.bat compileJava -q --offline` — **PASS** (exit 0).
