# Trace re-check — utility group, part 1 (fQ, dH, dT, fW, fO, dN, fU, eh, eg, fP)

Date: 2026-10-17 · Reviewer: trace-evidence parity re-review (wave 1 follow-up)
Trace session: singleplayer under Wine, JVMTI `sixtwo/`-class tracer + native module-tour driver
(`gg.baa(boolean)`, one module per ~4.4 s slot: enable → 4 s window → disable; driver log at
`/root/win/driver.log`). Artifacts (project-local copies):
`analysis/traces/2026-10-17/{digests,by-class-casesafe,n-evidence.tsv,module-summary.tsv}`.
Raw trace consulted for nesting: `/root/win/trace.jsonl` (line-precise spans).

Method: for each [N] method — did it enter in the window (n-evidence + raw JSONL)? If yes,
reconstruct the call sequence (enter/exit nesting + return values + string args) and fold the
pinned behavior into the impl. If no, document the precise capture condition. Static evidence
re-checked in parallel (decompile, handler spec, full-dump, Ghidra corpus inventory).

Per-module [N] cross-check (this session's `n-evidence.tsv`):

| id | [N] method(s) | enters | verdict |
|---|---|---|---|
| fQ | `_e4e61cf1cd02b1b2e46e5f297e1a41ef` (native clinit) | 0 | not observable (native) |
| dH | `alC(gJ)` | 0 | not triggered |
| dT | `apI(gH$th)` | 0 | not triggered |
| fW | `aXZ(gL$tk)` | 16 | **ran — behavior pinned** |
| fO | `aaj`, `aWj`, `qn`, `ry`, `YO` | YO 1, rest 0 | disable path pinned |
| dN | `aon(gz)` | 0 | not triggered |
| fU | `aXP(gy)` | 0 | not triggered |
| eh | `asy(gH$th)` | 0 | not triggered |
| eg | (no behavior handler in payload) | — | expected: no entries |
| fP | `aaj`, `aWq`, `aWt`, `aWp`, `YO`, `aWr`, `aWs`… | aaj 1, aWq 1, aWt 2, YO 1, aWp 1, rest 0 | lifecycle + packet route pinned |

---

## fQ — No Protocol Disconnect — parity 80% (unchanged) — fixed: no (documented)

**Trace.** Class loaded at client boot (trace line 829); zero method entries in the whole
session, including the tour slot (registry id 160 toggled `on ok=1` → `off`). The class's only
native is the class-init stub `_e4e61cf1cd02b1b2e46e5f297e1a41ef` — **native methods produce no
JVMTI MethodEntry events**, so its execution is invisible by construction; and fQ declares no
listeners/overrides, so a toggle has no payload-side effect.

**Changed.** Javadoc: added the trace note + capture condition (native-level hook or side-effect
observation at class-init time; not a JVMTI window). No behavior change.

**Remaining gaps.** [U] prevention design (three candidate mechanisms, zero tokens);
[N] class-init guard — capture condition: native-level instrumentation (JVMTI cannot see it).
The receive-side `DisconnectS2CPacket` cancel stays a labeled design-level stand-in.

## dH — No Sign Screen — parity 85% (unchanged) — fixed: no (documented)

**Trace.** `alC(gJ)` did not trigger in the 4 s window (class loaded, zero method entries — no
sign screen was opened in the session). Capture condition: right-click a sign / hanging sign to
open `SignEditScreen` / `HangingSignEditScreen` while the module is enabled.

**Changed.** Javadoc: trace note + capture condition. No behavior change.

**Remaining gaps.** [S] no screen-open/close event on our bus (tick poll stand-in);
[N] `alC` body + close mechanism (no `setScreen`/`close` token in the run).

## dT — Multi Task — parity 85% (unchanged) — fixed: no (documented)

**Trace.** `apI(gH$th)` did not trigger (zero entries in the whole session). `gH$th` tick
dispatches did occur during the session (other modules' pre-motion listeners ran then), so the
absence is a window/registration artifact, not a dead listener. Capture condition: enable the
module and hold the attack key while holding right-click on a use item (food/potion/bow) — the
listener fires on any in-world pre-motion tick while enabled; the attackKey → `attackBlock`
path needs the held use item.

**Changed.** Javadoc: trace note + capture condition. No behavior change.

**Remaining gaps.** [S] phase stand-in (END_CLIENT_TICK vs pre-motion);
[N] `apI` body (target provenance, cooldown gating).

## fW — Transactions — parity 75% → **80%** — fixed: **yes**

**Trace (the richest of the group).** `aXZ` entered 16× — once per inbound S2C packet dispatch
(16 aXZ calls against the window's `gL$tk` dispatches; the module is registered for the general
inbound packet event and filters inside the body). Every call's nesting was identical:

```
aXZ enter
  fX.aYu()        → [I watermark (identity-hash 1195947584)   ← obfuscation watermark
  gg.bab()        → 1  (nested gg.baA())                      ← in-game guard
  gL.bcf()        → class_2596 (Packet)                       ← packet read
aXZ exit
```

`gg.bab()` (gg.java:393-459) = `player != null && world != null && interactionManager != null
&& getNetworkHandler() != null` — the guard is the handler's **first statement** (before any
packet inspection). No `fZ`/`ga`/`gb` state-store calls occurred in any of the 16 spans (their
trace events are all boot-time config activity) — the latency pipeline only runs past the
packet filter.

**Changed (behavioral).** `Transactions.onPacketReceive` now performs the in-game guard
(player/world/interactionManager/networkHandler) **before** the packet-type test — 1:1 with the
trace (was: filter first). Javadoc: trace citation for the per-packet registration, the prelude
order and the negative state-store finding.

**Remaining gaps.** [G] packet type is still a high-probability guess
(`CommonPingS2CPacket`; no packet-class token in the window) — capture condition: a server that
sends the matching transaction packet (the 2026-10-17 singleplayer traffic did not match, or the
math is Java-only — not separable from the trace); [S] fZ/ga/gb state-store layout absent from
our config subsystem; [N] latency math VM-resident.

## fO — Discord Activity — parity 75% → **80%** — fixed: **yes**

**Trace.** The disable override ran once:

```
fO.YO enter
  qq.cXK()          (scheduler stop)
    qn.cXy() → 1    (DTO state query)
    qn.cXx() → 0    (DTO state query)
fO.YO exit
```

No `gg.YO()` nested → fO declares no `@hG` listeners and its override does not chain the base
unregistration. The enable side (`aaj → aWj → qq.cXG(delay, runnable)`) did not re-run in this
session (fO boots enabled — the driver's "on" was a no-op; the boot-phase trace in the wave-1
report captured it).

**Changed (behavioral).** `DiscordActivity.onDisable` now also clears `status` (the
published-activity analog of the trace's "stop the loop / clear the activity"); javadoc cites
the `qq.cXK` + `qn` query sequence and the no-super-call finding.

**Remaining gaps.** [N] `aWj` body + HTTP endpoint (DES literal) — capture condition: an
HTTP-capable session; [U] `qn` setter→field mapping.

## dN — Slot Lock — parity 75% (unchanged) — fixed: no (documented)

**Trace.** `aon(gz)` did not trigger (zero entries — the key-input event `gz` never fired).
Capture condition: while enabled, press the drop key (Q) with a locked slot selected; separately
Ctrl+Q (whole stack) and an inventory-screen throw-click on a locked hotbar slot (36-44).

**Changed.** Javadoc: trace note + capture condition. No behavior change.

**Remaining gaps.** [S] cz action setting → 9 BoolSettings translation (no action primitive);
[N] `aon` body (drop-path branch structure).

## fU — Middle Click Friend — parity 85% (unchanged) — fixed: no (documented)

**Trace.** `aXP(gy)` did not trigger (zero entries — the pick event `gy` never fired). Capture
condition: middle-click while the crosshair is on a player (then a second middle-click to
observe the remove branch).

**Changed.** Javadoc: trace note + capture condition. No behavior change.

**Remaining gaps.** [S] `gy` event absent on our bus (GLFW edge + crosshairTarget poll);
[U] add-vs-remove trigger; notification channel (`qu`/`qt` builders → chat stand-in).

## eh — Auto Exp — parity 85% (unchanged) — fixed: no (documented)

**Trace.** `asy(gH$th)` did not trigger (zero entries). Capture condition: enable the module and
hold the use key with an `EXPERIENCE_BOTTLE` in the main hand (the tick listener fires on any
in-world tick while enabled; the throw path additionally needs the held bottle).

**Changed.** Javadoc: trace note + capture condition. No behavior change.

**Remaining gaps.** [U] bind-74 role (toggle vs hold) + Cooldown unit; [N] `asy` throw
mechanism; [V] suffix `QZqXr`.

## eg — No Swing — parity 85% (unchanged) — fixed: no (documented)

**Trace.** Class loaded, zero method entries — **expected**: the payload declares no behavior
handler (only the two setting getters `ast`/`asu` and decryptors; the swing suppression is a
DLL patch outside the payload, eg.md "Architecture"). No in-payload capture condition exists; a
follow-up must observe the native swing hook (arm-swing animation state), not JVMTI entries.

**Changed.** Javadoc: trace note (zero entries explained). No behavior change.

**Remaining gaps.** [G] "Both" C2S suppression point (name-derived);
[N] DLL swing patch (outside the payload).

## fP — Anti-Cheat Detector — parity 70% → **75%** — fixed: **yes** (documentation-grade)

**Trace.** All three lifecycle methods pinned:

```
aaj enter
  gg.aaj()      ← listener registration: hF.bdI + hF.bdJ + 63× hF.bdK (60× 0, 3× 1) + 3× hF.bdL
                   (3 bound listeners = the three @hG methods aWt/aWr/aWs)
  aWq()         ← enable sub-step, runs LAST (leaf: 21 µs, no nested sixtwo calls)
aaj exit

aWt enter (×2, once per inbound S2C packet — 2/2 gL$tk dispatches)
  fX.aYu()      ← watermark
  gL.bcf()      ← packet read   (no in-game guard — contrast fW.aXZ)
aWt exit        (both dispatches were non-join packets, no visible effect)

YO enter
  gg.YO()       ← unregistration
  aWp()         ← teardown sub-step, runs LAST (leaf: 12.6 µs, body unrecovered)
YO exit
```

**Changed.** Javadoc: trace citations for the lifecycle order (aWq/aWp run after
registration/unregistration — exactly where `onEnable()`/`onDisable()` sit in our lifecycle),
the per-packet `aWt` route (no guard) and the listener count; `onDisable` comment now records
the real `aWp` sub-step. The `GameJoinS2CPacket` reset guess is unchanged (trace-compatible).

**Remaining gaps.** [S] chat route `aWr` not registered (no chat-receive event) — capture
condition: receive a chat message while enabled (`gN` fired 0× in the session, class loaded);
[N] `aWq`/`aWp`/`aWv`/`aWw`/`aWx`/`aWy` bodies — capture condition: join/skin-probe traffic and
the verdict path; [U] `vyRDw`/`DnMlW` pattern tables.

---

## Cross-module trace findings (feed the next conditioned session)

- The tour's per-module enabled window is real: tick events (`gH$th`) and packet events
  (`gL$tk`) both dispatch ~1-5×/s under trace load; module listeners DID run in other windows
  (e.g. `dX.aqT` 2×, `cR.YQ/YR` with the same `gg.bab()` guard visible).
- Listener dispatch is by event type only — handlers filter inside their bodies (proven for
  fW.aXZ and fP.aWt: one entry per inbound packet).
- `gg.bab()` (in-game guard) appears in fW.aXZ and cR.YQ but NOT in fP.aWt — guard presence is
  per-handler, not universal.
- Chat (`gN`) and frame (`gM`) events did not fire at all in the session — any module with those
  routes needs a conditioned capture (send a chat line; check what drives `gM`).

## Compile

- `.\gradlew.bat compileJava -q --offline` → **PASS** (exit 0).

## Changed files (this pass)

- `src/main/java/dev/opengrim/modules/utility/Transactions.java` — **behavioral**: trace-pinned
  in-game guard before the packet filter; javadoc trace citation.
- `src/main/java/dev/opengrim/modules/utility/DiscordActivity.java` — **behavioral**: disable
  clears the published status; javadoc trace citation.
- `src/main/java/dev/opengrim/modules/utility/AntiCheatDetector.java` — javadoc + lifecycle
  comments: aaj/YO/aWt trace pinning.
- `src/main/java/dev/opengrim/modules/utility/NoProtocolDisconnect.java` — javadoc: trace note +
  native-clinit capture condition.
- `src/main/java/dev/opengrim/modules/utility/NoSignScreen.java` — javadoc: capture condition.
- `src/main/java/dev/opengrim/modules/utility/MultiTask.java` — javadoc: capture condition.
- `src/main/java/dev/opengrim/modules/utility/SlotLock.java` — javadoc: capture condition.
- `src/main/java/dev/opengrim/modules/utility/MiddleClickFriend.java` — javadoc: capture
  condition.
- `src/main/java/dev/opengrim/modules/utility/AutoExp.java` — javadoc: capture condition.
- `src/main/java/dev/opengrim/modules/utility/NoSwing.java` — javadoc: zero-entries explanation.
