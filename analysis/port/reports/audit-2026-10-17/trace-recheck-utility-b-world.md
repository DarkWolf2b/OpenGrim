# Trace re-check — utility part 2 + world (fh, fR, dD, ec, en, ea, dL, dP, eU, fd, dK)

Date: 2026-10-17 (evening re-check after the runtime trace session).
Trace artifacts (canonical): `analysis/traces/2026-10-17/` — `raw/trace.jsonl`
(full JVMTI stream), `by-class-casesafe/<ENC>.jsonl`, `digests/<ENC>.txt`,
`n-evidence.tsv`, `module-summary.tsv`. Method: per module, pull the module's
own `enter/exit` frames from `raw/trace.jsonl` by exact QPC, then read every
callee that nests inside the frame (module + framework classes, since the raw
stream traces all of `sixtwo/*`). Window/tick counts are exact; nested calls
are same-thread unless noted.

Driver-session shape: each module was toggled on (and off) once or a few times
(the ClickGUI path is visible around several toggles: `cN/cO/rk/mT.cpz` widget
builds then `gg.baa`). Tick handlers fired only 1-3 times per module — the
tracer load suppressed ticks, so "0 enters" means the window was too short or
the trigger was absent, not that the handler is dead code.

Global pattern discovered (used throughout): the payload has a family of
**static sentry/broadcast reads** — `gg.baA()`, `mT.cpK()`, `fg.aIW()`,
`ee.arS()`, `eB.avS()` — which almost every behavior method calls at its start
(the decompiled bodies branch on the read being `null`). They are
anti-tamper/cross-module broadcast plumbing, not module behavior. Also
`gg.bab()` = the in-game gate: `player != null && world != null &&
interactionManager != null && networkHandler != null` (gg.java:393-459).

---

## fh — Attribute Swap

**Trace showed** (`raw/trace.jsonl`, `aJf` 3× — one tick per enable window,
QPC 172374047752 / 172392335000 / 172411587666, all identical):

```
fh.aJf(gH$th) {
  fg.aIW() → 0                 (sentry/broadcast read; fK.aUW precedent)
  gg.bab() → 1                 (in-game gate; nested gg.baA sentry)
  ol.cER(returnDelay : cA) → 0 (scheduler poll: no armed return swap)
    ol.cEX() → 12, ol.cEW() → 0
}
```

`aJg(hw$tv)` (attack swap) never entered.

**Changed** (`AttributeSwap.java`):
- `onTick` now mirrors the pinned structure: in-game gate (`bab` =
  player/world/interactionManager/networkHandler) then the return-swap poll
  (`ol.cER(returnDelay) → 0` ≡ the `!armed` early-out), with the sentry read
  documented. Previously the tick returned before any gate.
- Javadoc: trace paragraph with the exact call order and the `aJg` capture
  condition.

**Parity: 70%** (was 60). Settings 2/2 exact, tick handler now trace-pinned,
swap pipeline still reconstruction.

**Remaining gaps / capture conditions:**
- `aJg` swap mechanics (component priority chain, slot exchange) — capture:
  attack a mob with the module enabled; with Target Lock engaged to exercise
  the `fg.aIW() != null` branch.
- `NXMEC` suffix still unrecovered (native-decrypt); `ol` scheduler shape.

---

## fR — Client Sounds

**Trace showed**: class load only — the module was never enabled in the
capture (`module-summary.tsv` fR: 1 line, 0 enters). No method ran.

**Changed** (`ClientSounds.java`): javadoc capture condition only. The
`aWH/aWI/aWJ/aWK` accessors are pure field reads (no behavior bodies exist in
fR.java), so there is nothing VM-hidden left to recover in-class.

**Parity: 75%** (was 70). Settings 2/2 exact, boot-enabled metadata flag
exact, accessor contract complete.

**Remaining gaps / capture conditions:**
- Consumer wiring (dQ Hit Sounds does not consult the profile) — [S] stack
  item; capture: play a sound with the module enabled (hit a mob) to watch the
  sound-event consumer query the profile.
- `ymMTJ` suffix unrecovered.

---

## dD — Item Frame Blocker

**Trace showed**: class load only — never enabled (1 line, 0 enters).
`akB(gO$tm)` (the use-event pipeline) did not run.

**Changed** (`ItemFrameBlocker.java`): javadoc capture condition only. The
recovered pipeline (crosshairTarget → ENTITY → ItemFrameEntity → mode filter →
cancel) is already implemented.

**Parity: 80%** (unchanged).

**Remaining gaps / capture conditions:**
- `akB` cancel scope + GlowItemFrame coverage — capture: right-click an item
  frame (normal and glow) with an item in hand, module enabled.
- Mode default "All Items" and the nine slot toggles remain high-probability
  guesses.

---

## ec — Ghost Hand

**Trace showed** (`arz(gH$th)` 2× — QPC 169966955849, 169983970718, identical):

```
ec.arz(gH$th) {
  ee.arS() → 0      (sentry read — same broadcast called by dB.aaj,
                     dF.ale, dI.alE/alF/alI, dM.anD/anA, dP.YO)
  gg.bab() → 1      (in-game gate; nested gg.baA sentry)
}
```

No interact/raycast calls — the use action was never present.

**Changed** (`GhostHand.java`):
- Tick gate extended to the full `bab()` contract: `client.getNetworkHandler()
  != null` added (the original checks all four; the trace shows `bab() → 1`).
- Javadoc: trace paragraph (sentry + gate), interactBlock capture condition.

**Parity: 88%** (was 85). Recovered pipeline implemented; the trigger
(use-key) and reach constant remain reconstruction.

**Remaining gaps / capture conditions:**
- `interactBlock` path — capture: hold the use key on a container behind a
  wall (block entity) so `arz` runs its raycast + fabricated `BlockHitResult`.
- Through-wall selection/reach and the `SRuur` lifecycle are untraced.

---

## en — Anti Ghost

**Trace showed** (`aaj()` 1×, QPC 170437602071 → 170463785614; `atp` 0×):

```
en.aaj() {
  eB.avS() → (sentry read)
  mT.cpC(J) → true          (cPtuD = mT.cpA(), created without reset →
                             first debounce check passes)
  ... VM decrypts a 101-char constant:
      '5' (=53, message length) + "You are on cooldown wait a moment
      before trying again" with integrity markers 6..52 interleaved
      before every message char after the first six
}
```

This is the biggest recovery of the batch: the module's enable hook references
the exact user-facing cooldown message, and the debounce gate is confirmed as
the hook's first action.

**Changed** (`AntiGhost.java`):
- `onEnable` now mirrors the trace-pinned order: debounce gate first (the
  `mT.cpA()` no-reset semantics — the first enable always passes), cooldown
  path emits the recovered message; then the state reset. Threshold argument
  of `cpC(J)` is not visible in the trace → labeled 500 ms placeholder.
- Javadoc: trace paragraph incl. the message reconstruction and the `atp`
  capture condition. Message display uses the repo chat convention (no
  chat/Text token exists in en's pool window — output path is stack
  adaptation, the string itself is trace-recovered).

**Parity: 88%** (was 85). The resync body (ABORT_DESTROY_BLOCK +
fallDistance/shulker gates + sequenced send) remains a per-tick reconstruction
(the original drives it from the enable hook + native hooks).

**Remaining gaps / capture conditions:**
- `atp()` — capture: break a block so the client's breaking state goes stale
  with the module enabled.
- The true cooldown threshold — capture: toggle the module off/on rapidly
  and record when the message appears.
- `jd.bAo` sequenced send (no ClientLevel accessor mixin in the repo).

---

## ea — No Break Delay

**Trace showed**: class load only — the module was never enabled in the
capture (1 line, 0 enters). `ari(gH$th)` did not run; the wave-1 audit note
"only the ark/arl/arm decryptors entered" refers to an earlier trace, the
split trace shows no ea events at all.

**Changed** (`NoBreakDelay.java`): javadoc capture condition only. Setting
exact (incl. default 0), accessor reflection with intermediary fallback is
the recovered surface.

**Parity: 90%** (unchanged). The only open question is the write direction
(cap vs override) and every-tick vs non-zero-only.

**Remaining gaps / capture conditions:**
- `ari` body — capture: enable the module in-game and tick while breaking a
  block so the `get/setDestroyDelay` pair executes; compare the resulting
  `blockBreakingCooldown` against the slider value (e.g. set 5 and observe).

---

## dL — No Entity Clip

**Trace showed**: class load only — never enabled (1 line, 0 enters).
`anq(hh)` did not run.

**Changed** (`NoEntityClip.java`): javadoc capture condition only. The
original is purely reactive to the native `hh` query, which has no repo
analog; the tick loop remains the labeled stand-in.

**Parity: 70%** (unchanged).

**Remaining gaps / capture conditions:**
- `anq(hh)` — capture: with a pickaxe, aim at a block with an entity in front
  and left-click (mine) so the native entity-clip query fires; record
  `hh.bcA()` and whether the cancel applies to the whole query or per-hit.
- Rotation aim has negative evidence in dL's window (kept as stand-in).

---

## dP — Block Piercer

**Trace showed** (`YO()` 1×, QPC 167154390914 → 167154442377):

```
dP.YO() {
  ee.arS() → 0    (sentry read)
  gg.YO()         (super — hF.bdM deregistration)
}
```

`aoR(gO$tm)` / `aoS(gO$tn)` (use/tick listeners) and `aoT()` never entered.

**Changed** (`BlockPiercer.java`):
- Javadoc: trace paragraph (YO pin: the override adds nothing beyond the base
  deregistration + sentry) and the `aoR/aoS/aoT` capture condition.
- `onDisable` comment citing the pin.

**Parity: 50%** (was 45). Settings are substitutes (no entity-type-set /
item-set widget in the framework), behavior is the recorded raycast
approximation with the recovered MISS sentinel.

**Remaining gaps / capture conditions:**
- `aoR/aoS/aoT` — capture: right-click with a placeable stack while an entity
  blocks the crosshair (use event), then place through it; the MISS path fires
  when no block qualifies.
- Entity-type set + allowed-blocks set widgets (framework addition still
  pending).

---

## eU — Air Anchor

**Trace showed** (`aDC(gH$th)` 2× — QPC 169611069959, 169626932534; `YO()` 1×,
QPC 169642677556):

```
eU.aDC(gH$th) {                 eU.YO() {
  eV.aEq() → 0                    gg.YO()        (super)
    eV.aEp() → 1                  mW.crA()       (HyfoP one-shot gate reset)
  gg.bab() → 1
  mW.crA()                      }
}
```

- `eV.aEq()` = Auto Crystal cross-module gate (also read by eX Anchor Macro,
  where the true branch prints an incompatibility warning; `aEq` is always
  `aEp() && …` with the second term false in this capture).
- `mW.crA()` = clears the `HyfoP` one-shot action gate (mW.java:24-27:
  `VEfPX = false; ISQse = false`) — pinned at the tick prologue and at
  disable.
- `aDI` (the PlayerInteractBlockC2SPacket factory) never ran.

**Changed** (`AirAnchor.java`):
- Tick gate extended to the full `bab()` contract (networkHandler added).
- `gateClaimed` field mirroring the mW gate state: reset at the tick prologue
  (trace-pinned `crA`) and in `onDisable` (trace-pinned `YO = super.YO() +
  crA`), claimed on successful placement (inferred arm point); exposed via
  `actionGateClaimed()` (aDH analog).
- Javadoc: trace paragraph incl. the `eV.aEq()` note and capture conditions.

**Parity: 65%** (was 60). Settings exact; the placement math, chance roll,
Double Anchor loop and `eV.aEq()` polarity remain unrecovered.

**Remaining gaps / capture conditions:**
- `aDI` / placement — capture: hold a respawn anchor, module enabled, look at
  a spot with no support geometry (place attempt).
- `eV.aEq()` polarity — capture: enable Auto Crystal alongside Air Anchor and
  observe whether placement is suppressed while `aEq() → true`.
- `pyZOh` suffix unrecovered.

---

## fd — Auto Dripstone

**Trace showed** (`YO()` 1×, QPC 172280907599; `aId()` nested at
172281392153):

```
fd.YO() {
  gg.YO()             (super)
  aId() {
    rD.dma() → qN     (module-action registry singleton)
    qN.dcB(this)      (unregister; nested qL.dcb() → 1)
  }
}
```

`aHU(gv)` (tick), `aHV(gH$th)` (marker) and the plan builders never entered.

**Changed** (`AutoDripstone.java`):
- Javadoc: trace paragraph — `aId` is the qN action cancel (supersedes
  fd.md's "state reset candidate"), capture condition for the tick/plan path.
- `onDisable` comment citing the `super.YO() + aId` order.

**Parity: 60%** (was 55). Settings/cooldown timer recovered; geometry and
plan sequencing remain reconstruction.

**Remaining gaps / capture conditions:**
- `aHU`/plan builders — capture: enable the module in-game on a client tick
  with a player standing on a closed trapdoor and pointed dripstone in the
  hotbar; watch `qN.dcC/dcw` claim and the interact sequence.
- qN arbitration analog (no repo equivalent), `eVFHp` suffix.

---

## dK — Auto Lever Replace

**Trace showed** (`YO()` 1×, QPC 166930901955 → 166932497369 — a full
enable→disable cycle): the only visible callee is `gg.YO()` (base
deregistration). `and(Z)/ane()/anf()` never entered. The tick `ana(gv)`,
block-change `anc(gV)` and render marker `anb(gH$th)` never entered (the
window was GUI/toggle-dominated — `cv/cw` widget reads around the toggle are
ClickGUI traffic, not dK behavior).

**Changed** (`AutoLeverReplace.java`): javadoc trace paragraph + `onDisable`
comment; capture conditions for ana/anc/anb. No code change — nothing else
was pinned.

**Parity: 65%** (unchanged).

**Remaining gaps / capture conditions:**
- `ana(gv)` — capture: client tick with the module enabled in-game.
- `anc(gV)` — capture: a block update inside the watched radius.
- `anb(gH$th)` — capture: a rendered frame with a lever target (render marker
  role unknown).
- `Work With` cooperation semantics, `jcQsa` meaning, target acquisition
  (`vuasL`) remain unrecovered.

---

## Summary table

| id | module | parity before | parity now | trace activity | code changed |
|---|---|---|---|---|---|
| fh | Attribute Swap | 60% | 70% | aJf 3× (sentry + bab + ol poll) | yes |
| fR | Client Sounds | 70% | 75% | none (load only) | docs only |
| dD | Item Frame Blocker | 80% | 80% | none (load only) | docs only |
| ec | Ghost Hand | 85% | 88% | arz 2× (sentry + bab) | yes |
| en | Anti Ghost | 85% | 88% | aaj 1× (debounce + message) | yes |
| ea | No Break Delay | 90% | 90% | none (load only) | docs only |
| dL | No Entity Clip | 70% | 70% | none (load only) | docs only |
| dP | Block Piercer | 45% | 50% | YO 1× (sentry + super) | docs only |
| eU | Air Anchor | 60% | 65% | aDC 2×, YO 1× (bab + crA) | yes |
| fd | Auto Dripstone | 55% | 60% | YO 1×, aId 1× (qN.dcB) | docs only |
| dK | Auto Lever Replace | 65% | 65% | YO 1× (super only) | docs only |

Compile: `.\gradlew.bat compileJava -q --offline` — clean (exit 0).

Follow-up conditioned-session wishlist (one line each): attack a mob (fh),
play a sound (fR), right-click an item frame (dD), use-key a wall container
(ec), break a block (en/ea), mine through an entity with a pickaxe (dL),
place through an entity (dP), place an anchor in air with/without Auto Crystal
(eU), stand a player on a closed trapdoor with dripstone (fd), tick + block
update + render a lever target (dK).
