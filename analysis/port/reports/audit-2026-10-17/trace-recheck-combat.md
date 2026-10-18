# Trace re-check — combat group (wave 2)

Date: 2026-10-17 (evening). Scope: the nine combat modules left with `[N]`
("VM-virtualized → needs runtime trace") gaps by the morning wave-1 audit:
**dX, eM, eY, fi, fL, fC, fA, dS, eF**.

Evidence used (project-canonical copies, verified byte-identical to the D:\WSL
originals by MD5):

- digests: `analysis/traces/2026-10-17/digests/<ENC>.txt`
- per-class raw: `analysis/traces/2026-10-17/by-class-casesafe/<ENC>.jsonl`
- cross-check table: `analysis/traces/2026-10-17/n-evidence.tsv`
- **master trace** `/root/win/trace.jsonl` (738 MB, WSL) for cross-class
  nesting — the per-class split contains only the 162 registry modules, so
  framework calls (`gg`, `hF`, `ol`, `gL`) are only visible there.
- driver: `win/driver.c` + `win/driver.log` (module tour: each module toggled
  on for 4000 ms via `gg.baa(true)`, then off; **no player input actions are
  performed by the driver**).
- statics re-read: verified decompiles (source-map `source` rows), handler
  specs, `analysis/jars/bootstrap-raw/mixin/accessors/MinecraftAccessor.class`,
  yarn tiny, `ol.java`, `cJ_.java`, `gL_.java`.

## Trace-methodology notes (apply to every module below)

1. **Line order in `trace.jsonl` is not event order.** Multiple threads write
   under one lock; timestamps (QPC, ~10.4 MHz) must be used for sequencing.
   Nesting within one thread is exact once timestamp order is respected
   (verified against the fully-decompiled `cQ.YF`, where the trace reproduces
   `cQ.java:225-266` call-for-call).
2. **VM-dispatch artifact getters are not behavior.** Every VM-native handler
   starts with an opaque static getter whose result is only used in
   `!= null`-style dispatch predicates: `ee.arS()[]I` (dX), `eB.avS()[]String`
   (el), `fg.aIW()[]I` (fi/fA), `eP.aBU()[]I` (eM), `eV.aEp()Z` (eY),
   `eG.axm()[]iS` (eF), `fX.aYu()[]I`, `dh.afl()[]iS`. The pattern is visible in
   decompiled payload code (`cQ.java:225`, `eG.java:99`, `ee.java:32`) — the
   calls are executed but semantically dead. None is ported.
3. **`gg.bab()` is real.** The in-game guard (player/world/interactionManager/
   getNetworkHandler non-null, `gg.java:393-459`) runs first in every handler
   that ran. Ported 1:1 as the handlers' first statement (same convention as
   today's Transactions/AirStuck fixes).
4. **The tour never acts.** No attacks, right-clicks, movement, mining or
   knockback — every event-driven `[N]` body is therefore unreachable by
   design; capture conditions below name the needed action.
5. **`ol` semantics recovered from the tour:** `ol.cET()` is the disable
   cleanup (called by the `YO` overrides of dR, eG, eH, eN, eO, eS, fL);
   `ol.cER(cA)` is the per-tick "swap back due?" check (eF.awE, eN.aBb, eO.aBv,
   fh.aJf — always `→ 0` with `cEX()→12`, `cEW()→0` inside). `ol` owns the
   saved-slot (`CMPIc`, init -1) / swapped-latch (`HnMZs`) fields (`ol.java:14-15`).
6. **One environment anomaly:** the client tick loop stalled from t≈171407.1
   to t≈171615.5 (~20 s: the always-on gH$th dispatchers qN.dcs / qL.dbN /
   oU.cKW / qK.dbz / om.cEZ stop and resume) — fL's whole window sits inside it.

---

## dX — No Miss Delay — 85% → **90%** (partial, fixed: yes)

**Trace** (`dX_.jsonl`, window [167479.4,167495.2]): `aqT` entered 2× (once per
tick). Per call, in timestamp order:
`aqT` → `ee.arS()` (artifact, §2) → `gg.bab()` → 1 → exit. No strings, no
numeric returns, no other sixtwo call.

**Static re-check:** the original's own accessor mixin
`analysis/jars/bootstrap-raw/mixin/accessors/MinecraftAccessor.class` carries
`@Accessor("field_1771") setMissTime(I)V`; yarn maps `field_1771` →
`MinecraftClient.attackCooldown` (yarn-1.21.11+build.6.tiny:95105) and has no
`missTime` name at all. The impl's reflection target was already correct.

**Changed:** added the `gg.bab()` guard 1:1 (player/world/interactionManager/
getNetworkHandler); javadoc now carries the trace + accessor verification.

**Remaining gap:** the written constant (0) and whether the write is
unconditional per tick or miss-gated. Capture condition: extend TRACE_CLASSES to
`mixin/accessors/` and miss a swing inside the window — JVMTI MethodEntry
captures no int argument, so the value itself is not trace-capturable and the
0/unconditional reading stays a documented reconstruction.

## eM — Double Tap — 85% → **87%** (partial, fixed: yes)

**Trace** (`eM_.jsonl`, window [169249.6,169283.5]): `aAZ` entered 3× (once per
tick); body = artifact `eP.aBU()` → `gg.bab()` → 1 → exit. **No `mT` timer call
and no eQ/eN/eP pipeline call in any tick** — the tick-side state machine
returned before touching the timer (matches the port's `if (!phase) return`
gate). `aAY` (HIGH-priority attack listener) did not run.

**Changed:** guard extension (adds networkHandler); javadoc records the trace,
the early-return finding, and labels every combo constant (1500 ms window,
5.0-block scan, airborne/wind-charge gates) as designer reconstruction. Fixed a
stale citation (`payload-named-cfr/sixtwo/eM.java:37` → casesafe `eM_.java:37`).

**Remaining gaps:** combo decision logic, all timings, `eP.aBU()` (`LuzRg`)
slot semantics, whether `aAY` cancels the original attack — all VM-resident
(eM_.md "Unrecovered" 2-4). Capture condition for `aAY`: attack an entity while
airborne holding a mace with a wind charge in the hotbar.

## eY — Crystal Optimizer — 65% → **70%** (partial, fixed: yes)

**Trace** (`eY_.jsonl`, window [169777.3,169781.3]): `aFE` entered 1× (the
window's single outbound packet; the listener wraps the general send event,
`gL$tj`, `gL_.java:44-56`). Body order pinned: artifact `eV.aEp()` → `gg.bab()`
→ 1 → `gL.bcf()` (packet getter) → exit. `aFF`/`aFG`/`aFH`/`aFI`/`aFJ` did not
run — the packet was not an attack interact.

**Changed:** guard moved to the first statement (adds interactionManager/
networkHandler) and the `instanceof` filter after it, matching the trace order;
javadoc records the trace + capture condition.

**Remaining gaps:** crystal-step logic (`aFI`), `aFF` gate, `aFH` damage
formula (labeled designer arithmetic over the proven inputs), `aFJ` modifier
consumer, attack-selection/cancel semantics (eY.md "Unrecovered"). Capture
condition: left-click an entity (send a `PlayerInteractEntityC2SPacket`) inside
the window — then aFF/aFH/aFI run and the arithmetic becomes observable.

## fi — Shield Block — 70% → **78%** (partial, fixed: yes)

**Trace** (`fi.jsonl`, window [172425.2,172456.1]): `aJn` entered 3× (once per
tick). Each tick: artifact `fg.aIW()` → `gg.bab()` → 1 → `aJq()` → **0** →
`aJp()` → exit; `aJo` never ran (the use key was never pressed). Disable:
`YO` → `aJw()` (t=172456056843, 1.16 ms, no nested sixtwo calls).

**Static re-check:** `fi.java:27` declares `ol nMxfO` + `boolean JNPbj` (the
"no state fields" reading in the old spec was wrong — it came from the
payload-named twin). `aJw` is the only callee of the `YO` override.

**Changed:** the `YO → aJw` restore-on-disable is now implemented (was
"left unimplemented per policy" in wave 1) — `onDisable` restores the latched
slot; the guard is the full `gg.bab()` set; javadoc records the tick order and
the disable evidence.

**Remaining gaps:** `aJq`'s exact predicate (readiness — false while idle),
`aJp`/`aJo` split internals, the release-restore condition, `aJm(gM)` phase
(gM fires on right-click; never triggered). Capture conditions: right-click with
a shield in the hotbar (aJm/aJo/aJq-true), release mid-hold (aJp restore).

## fL — Auto Tool — 70% → **75%** (partial, fixed: yes)

**Trace** (`fL_.jsonl`, window [171531.4,171572.4]): `aVf`/`aVg` did **not** run
— the window sits inside the ~20 s tick stall (§6), so this is an environment
gap, not module behavior. The window's only fL event is the disable chain
`YO` → `ol.cET()` (t=171572801399; same cleanup call as dR/eG/eH/eN/eO/eS
disables).

**Changed:** `onDisable` now restores the latched pre-swap slot before clearing
state (was a state-only reset) — `ol` owns the saved-slot/latch (`ol.java:14-15`),
making restore the consistent reading of `cET`; javadoc records the stall and
the capture condition.

**Remaining gaps:** all of `aVf`/`aVg` (bodies VM-only). Capture condition:
re-run with live ticks and hold attack on a block (mining) — then aVf runs per
tick and aVg receives the mined BlockState; swap trigger source / scan scope /
tie-breaking stay fL.md "Unrecovered" 2-3.

## fC — Velocity — 75% → **80%** (partial, fixed: yes)

**Trace** (`fC_.jsonl`, window [171164.2,171174.9]): `aSw` entered **14×** (once
per received packet). All 14 spans contain, in timestamp order: artifact
`fg.aIW()` → `gg.bab()` → 1 → `cJ.WF()` → **0** (the Disable-In-Fluid setting
getter — exactly one read per span, outside-span controls = 5 stray reads of
other modules) → `gL.bcf()` (packet getter) → exit. **`aSx`/`aSy` never ran**:
the local-entity filter demonstrably exists and rejects before the transform
(fC_.md "Unrecovered" 6 now resolved: a filter exists; its exact vanilla-side
form stays invisible).

**Changed:** reordered to the pinned 1:1 order — full `gg.bab()` guard → read
`disableInFluid` → packet type filter → entity filter → lava check → transform;
javadoc records the 14-call evidence and the filter confirmation.

**Remaining gaps:** `aSx` formula (still the labeled `v * pct / 100` guess —
no numeric evidence), `aSx` int-arg role, `iU.bwT` delayed path, in-place
mutation substitute (accessor mixin not in stack). Capture condition: take
knockback (hit by a mob / damage) during the window — then aSx's returns pin the
formula and aSy becomes observable.

## fA — Potion Refill — 70% → **72%** (partial, fixed: partial)

**Trace** (`fA_.jsonl`, window [171059.1,171074.2]): `aSa` entered 2× (once per
tick). Both bodies: artifact `fg.aIW()` → `gg.bab()` → 1 → exit. **No `mT`
timer call, no setting getter, no `clickSlot`** — the early return precedes the
delay gate (the player had no potions and no screen open).

**Changed:** guard extension (adds world/networkHandler); javadoc records the
trace, notes that the early-return branch is not distinguishable (hover/screen
vs no-refill-target), and gives the capture condition. Twin cross-check: fc's
`CartRefill.java` uses the identical empty/non-target scan, so the technique is
kept.

**Remaining gaps:** refill cadence (one slot per Delay vs all per pass), the
ClickType (inferred from fc), Hover semantics, Delay units. Capture condition:
hold a depleted potion in a selected hotbar slot with a replacement potion in
the inventory (open the screen when Hover is on) — then aSa should consult the
`mT` timer and run the SWAP click.

## dS — Hand No Clip — **70%** (partial, fixed: no code change)

**Trace** (`dS_.jsonl`): only the class-load line. `apC(hm)`/`apD()` did not run
(no block-shape query of a relevant block in a standing tour). Nothing
provable; body stays as wave-1 reconstructed.

**Changed:** javadoc capture condition only.

**Remaining gaps:** `apD()` predicate (attack-key participation, dS.md
"Unrecovered" 1), `hm` firing-site semantics. Capture condition: walk into /
attack through a cobweb (or a Blocks-listed block) with the module enabled so
the `hm` shape event fires.

## eF — Spear Reach — 70% → **78%** (partial, fixed: yes)

**Trace** (`eF_.jsonl`, window [168994.1,169008.0]): `awE` entered 2× (once per
tick). Body: artifact (`eG.axm()`/`fX.aYu()`) → `gg.bab()` → 1 → **`ol.cER(jymCX)`
→ 0** (inside: `ol.cEX()` → 12, `ol.cEW()` → 0) → exit. `awF`/`awH`/`awG` did
not run.

**Static re-check:** the wave-1 note "cross-module call eF → eG.axm is certain"
is **superseded** — `eG.axm()[]iS` is the same iS[]-typed opaque artifact getter
as `dh.afl()` (it is also used inside eG's own decompiled dispatch predicates,
`eG.java:99`), not behavior; not ported. `ol.cER(cA)` is the shared per-tick
swap-back check (§5). eF declares no `YO` override (`eF.java:59-114`) → no
disable cleanup.

**Changed:**
- `onTick` (awE) reworked to the pinned surface: full `gg.bab()` guard +
  timer-only restore (`previousSlot >= 0 && elapsed ≥ Return Delay`) — the
  previous `client.targetedEntity` condition had no trace support and was
  dropped.
- removed the safety restore-on-disable (no `YO` in the original → 1:1).
- javadoc records the trace, the ol semantics and the artifact
  re-interpretation.

**Remaining gaps:** the reach write formula (`awF`/`bco`, VM-only), `awH` swap
choreography (`awJ` use-key simulation/HandledScreen guard, VM-only), `awI`
entity predicate, `awG`/`gZ$tt` semantics, `feInP` suffix. Capture conditions:
aim at an entity (awF), attack an out-of-range entity with a spear in the
hotbar (awH/awJ), trigger the gZ$tt marker (awG).

---

## Summary

| id | module | parity before | parity after | status | fixed |
|---|---|---|---|---|---|
| dX | No Miss Delay | 85% | 90% | partial | yes |
| eM | Double Tap | 85% | 87% | partial | yes |
| eY | Crystal Optimizer | 65% | 70% | partial | yes |
| fi | Shield Block | 70% | 78% | partial | yes |
| fL | Auto Tool | 70% | 75% | partial | yes |
| fC | Velocity | 75% | 80% | partial | yes |
| fA | Potion Refill | 70% | 72% | partial | partial |
| dS | Hand No Clip | 70% | 70% | partial | no |
| eF | Spear Reach | 70% | 78% | partial | yes |

Changed files: `NoMissDelay.java`, `DoubleTap.java`, `CrystalOptimizer.java`,
`ShieldBlock.java`, `AutoTool.java`, `Velocity.java`, `PotionRefill.java`,
`HandNoClip.java`, `SpearReach.java` (all under
`src/main/java/dev/opengrim/modules/combat/`).
Compile: `.\gradlew.bat compileJava -q --offline` — clean.
