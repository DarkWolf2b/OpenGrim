# Batch 01 audit report — audit 2026-10-17

Modules: eq (Null Movement), fQ (No Protocol Disconnect), dH (No Sign Screen), ez (No Fall),
dX (No Miss Delay), dB (Full Bright), dT (Multi Task), fW (Transactions), ev (Collision Long
Jump), ew (No Jump Delay).

All ten are j2cc classes: every behavior body decrypts into the obfuscation VM. Parity is
therefore scored against the **recovered surface** = registry rows + decompiled
constructors/listener declarations + the handler-spec pool-token runs.
Runtime trace (`win/trace.jsonl`): each of the ten appears only in `load`/`<clinit>`/`<init>`
entries (init-registry under the HUD idle); a targeted grep for the behavior entrypoints
(`aXZ|avk|aqT|apI|auR|auT|alC` under `"c":"sixtwo/(...)"`, and `aaj|YO` for dB/ev) returns
**zero matches** — no [N] body could be observed at runtime.

## Case-twin landmine (affects this batch)

The `handlerSpec` paths in `source-map.tsv` were case-collapsed **wrong twins** for 2 of 10 ids:

| source-map handlerSpec | what the file actually documents | correct spec used here |
|---|---|---|
| `handlers/dH.md` | sixtwo.**dh** Ambience | `analysis/specs/casesafe/handlers/dH_.md` |
| `handlers/ez.md` | sixtwo.**eZ** Auto Double Hand | `analysis/specs/casesafe/handlers/ez.md` |

`handlers/dT.md` (cited by MultiTask) does not exist on disk — it resolves to the collapsed
`dt` (Nametags) file; dT's correct spec is `casesafe/handlers/dT_.md` (javadoc corrected).
The remaining seven handler specs (eq, fQ, dX, dB, ev, ew, fW) were **title-verified correct**
(`# <Name> (sixtwo.<id>)` matches the resolved source's declared class) before use.

Registry rows re-verified from `analysis/jars/bootstrap-raw/offline/features/metadata.txt`:
eq key=41, fQ key=160, dH key=138, ez key=36, dX key=69, dB key=71, dT key=65, fW key=109,
ev key=48, ew key=49 — all `bind=-999` (our `Module` default bind is −999 ✓). All ten have
**zero settings** in the original; all ten ports construct zero settings.

---

### eq — Null Movement
post-fix parity: 75% | status: partial | fixed: partial
fixed:
- Verified zero settings / no Java listener / category Movement (`gh.xgeEn`): eq.java:11-28,
  ctor eq.java:17-20 — impl constructs no settings (NullMovement.java:27-29).
- Javadoc honesty: eq declares **no `@hG` listener, no `aaj()/YO()`**, and has no
  `sixtwo/eq` token run (handlers/eq.md "Runtime model"/"Unrecovered"); the tick heuristic is
  now explicitly labeled a discretionary stand-in instead of reading as recovered
  (NullMovement.java:18-26).
remaining gaps:
- [N] `_95f35cd333be09af769faf93936605a8()V` (class-init + 9 continuation blocks; no
  listener method exists in the class) — VM-virtualized → needs runtime trace. The listener
  registration path itself is inside the VM (handlers/eq.md "Unrecovered" 2/3).
- [U] Mechanism of "prevents movement blocking" (input rewrite vs velocity patch vs keybind
  forcing) — zero pool tokens; the impl's thresholds (0.05/0.02/1.05/4.0) and slow-block set
  are unevidenced reconstruction.
evidence: analysis/decompiled/payload-named-cfr/sixtwo/eq.java:11-28 + handlers/eq.md:23-31,62-69
vs src/main/java/dev/opengrim/modules/movement/NullMovement.java:14-63

### fQ — No Protocol Disconnect
post-fix parity: 80% | status: partial | fixed: yes
fixed:
- **Boot-enabled flag implemented**: `super(gf.aZL((int)AXCPX, true, gh.KfAlY))` (fQ.java:19 —
  the only `true` among its batch's constructors, handlers/fQ.md "Runtime model") →
  `bootEnabled()` override → `true` (NoProtocolDisconnect.java:34-43), consumed by
  OpenGrimClient.java:18-24. Flag meaning follows the established port convention
  (Module.java:85-93; Discord Activity precedent, fO.java:30).
- Javadoc corrected: original has **no `@hG` listener and no lifecycle overrides**; the
  `DisconnectS2CPacket` cancel is now labeled a design-level stand-in, and the decode-path
  exception guard (fQ.md "Rebuild guidance" 1) is explicitly not implemented.
remaining gaps:
- [N] `_e4e61cf1cd02b1b2e46e5f297e1a41ef()V` (the class's only native; clinit) —
  VM-virtualized → needs runtime trace; hook point + "invalid packet" predicate unrecovered
  (handlers/fQ.md "Unrecovered" 2-4).
- [U] Whether invalid-packet disconnects were prevented by exception swallow, packet
  substitution, or channel keep-alive — three plausible designs, zero evidence (fQ.md 4).
evidence: analysis/decompiled/payload-named-cfr/sixtwo/fQ.java:11-28 + handlers/fQ.md:16-21,54-63
vs src/main/java/dev/opengrim/modules/utility/NoProtocolDisconnect.java:9-51

### dH — No Sign Screen
post-fix parity: 85% | status: partial | fixed: no
fixed:
- Verified: zero settings ✓; listener `alC(gJ)` screen event (dH.java:33-34) ↔ our per-tick
  screen poll; the pool run carries exactly `class_498 SignEditScreen` + `class_7744
  HangingSignEditScreen` (casesafe/handlers/dH_.md token table) ↔ the two `instanceof` checks
  (NoSignScreen.java:37-38) — exact class set, no invented third type.
- Registry row 138/bind −999 ✓.
remaining gaps:
- [N] `alC(Lsixtwo/gJ;)V` [18de4c9a0] — VM-virtualized → needs runtime trace; the close
  mechanism has no token (no setScreen/close in the run, dH_.md "Unrecovered" 2).
- [S, blocked] no screen-open/close event on our bus (`gJ` counterpart absent); the tick poll
  closes the sign screen as soon as it is open.
- [U] close mechanism choice (`setScreen(null)` vs `screen.close()`) is discretionary; `gJ`
  carries no cancel flag (dH_.md 4).
evidence: analysis/specs/casesafe/handlers/dH_.md:23-36,46-49,63-70
vs src/main/java/dev/opengrim/modules/utility/NoSignScreen.java:29-42

### ez — No Fall
post-fix parity: 85% | status: partial | fixed: no
fixed:
- Verified: zero settings ✓; listener `avk(gL$tj)` = **outbound** (C2S) packet event
  (ez.java:31-32; direction proof in ey.md) ↔ `PacketSendEvent` ✓; the pool-proven mechanic
  `ServerboundMovePlayerPacketAccessor#setOnGround` is mirrored by rewriting the wire flag on
  **all four** movement subtypes — subtype set and ctor shapes verified against
  yarn-1.21.11+build.6.tiny:143904-143959 (`Full (Vec3d,FFZZ)`, `PositionAndOnGround (DDDZZ)`,
  `LookAndOnGround (FFZZ)`, `OnGroundOnly (ZZ)`) and all match NoFall.java:52-64.
remaining gaps:
- [N] `avk(Lsixtwo/gL$tj;)V` [18cd02f60] — VM-virtualized → needs runtime trace; spoof
  condition + damage arithmetic VM-resident (ez.md "Unrecovered" 2).
- [U] The falling gate (isOnGround/velocity.y/water) is discretionary (labeled in javadoc);
  local `fallDistance` zeroing not implemented (unrecovered, ez.md 7).
- [S] in-place accessor write replaced by packet replacement — our stack has no
  `ServerboundMovePlayerPacketAccessor` (stack-required; idempotent per javadoc).
evidence: analysis/decompiled/payload-named-cfr/sixtwo/ez.java:13-36 + casesafe/handlers/ez.md:17-30,36-41
vs src/main/java/dev/opengrim/modules/movement/NoFall.java:34-66

### dX — No Miss Delay
post-fix parity: 85% | status: partial | fixed: partial
fixed:
- Verified the accessor target mapping: yarn `MinecraftClient.attackCooldown` =
  intermediary `field_1771` (yarn-1.21.11+build.6.tiny:95045 `class_310` MinecraftClient,
  :95105) ↔ reflection primary/fallback in NoMissDelay.java:48-55 — correct field, no
  unrelated write.
- Javadoc: added the stack-required and phase notes — accessor mixin →
  reflection, END_CLIENT_TICK vs the `gH$th` pre-motion listener (dX.md:21), "reset to 0
  every tick" reading labeled.
remaining gaps:
- [N] `aqT(Lsixtwo/gH$th;)V` [18d82e2c0] — VM-virtualized → needs runtime trace; the written
  constant and any conditional are VM-resident (dX.md "Unrecovered" 2/3).
- [S] no `MinecraftAccessor` mixin in our framework (reflection instead); END_CLIENT_TICK
  substitutes the pre-motion phase.
evidence: analysis/decompiled/payload-named-cfr/sixtwo/dX.java:13-36 + handlers/dX.md:16-51
vs src/main/java/dev/opengrim/modules/combat/NoMissDelay.java:26-61

### dB — Full Bright
post-fix parity: 90% | status: ported (documented reconstruction) | fixed: no
fixed:
- Verified: zero settings ✓; lifecycle split `aaj()` (dB.java:28-29, enable) / `YO()`
  (dB.java:35-36, disable) ↔ `onEnable`/`onDisable` ✓; the full 12-token API surface
  (`field_1690` GameOptions, `method_42473` getGamma, `class_7172` SimpleOption,
  `method_41753` getValue → `oxuOm`, `method_41748` setValue; dB.md token table) ↔
  FullBright.java:31-52. Enable order matches the original (base registers listeners, then
  override body — Module.java:59-71).
- Registry row 71/bind −999 ✓; negative evidence confirmed: no other module touches
  `getGamma` (dB.md "Cross-module").
remaining gaps:
- [N] `aaj()V` [18e0006c0] + `YO()V` [18e005f20] — VM-virtualized → needs runtime trace; the
  boost gamma value/any curve is VM-hidden (dB.md "Unrecovered" 2).
- [U] boost value 16.0 is a discretionary stand-in (labeled in javadoc); save/restore
  protocol nuances (mid-session re-capture) unrecovered (dB.md 3).
evidence: analysis/decompiled/payload-named-cfr/sixtwo/dB.java:11-38 + handlers/dB.md:23-61
vs src/main/java/dev/opengrim/modules/render/FullBright.java:23-53

### dT — Multi Task
post-fix parity: 85% | status: partial | fixed: partial
fixed:
- Citation fix: javadoc cited `analysis/specs/handlers/dT.md`, which on Windows is the
  collapsed **dt (Nametags) twin**; now cites `casesafe/handlers/dT_.md` + the casesafe
  source path (MultiTask.java:13-15).
- Verified: zero settings ✓; listener `apI(gH$th)` (dT_.java:31-32) ↔ `onTick` stand-in;
  `attackKey.isPressed()` (`method_1434`, `field_1886`) ↔ `client.options.attackKey.isPressed()`;
  `attackBlock(BlockPos, Direction)` (`method_2910`) ↔ `interactionManager.attackBlock` on the
  crosshair block (MultiTask.java:42-47).
remaining gaps:
- [N] `apI(Lsixtwo/gH$th;)V` [18da3dea0] — VM-virtualized → needs runtime trace; target
  provenance and any cooldown gating VM-resident (dT_.md "Unrecovered" 2).
- [U] `isUsingItem()` gate is a stand-in (no token); the `field_1886` attribution is flagged
  in the spec (its window prefix belongs to the ds Entity ESP run) — the attackKey →
  attackBlock chain is the supported reading only.
- [S] END_CLIENT_TICK substitutes the `gH$th` pre-motion phase.
evidence: analysis/decompiled/casesafe/payload-named-cfr/sixtwo/dT_.java:13-36 + casesafe/handlers/dT_.md:18-36
vs src/main/java/dev/opengrim/modules/utility/MultiTask.java:10-49

### fW — Transactions
post-fix parity: 75% | status: partial | fixed: no
fixed:
- Verified: zero settings ✓; listener `aXZ(gL$tk)` = **inbound** (S2C) (fW.java:32-33;
  direction proof ① in ey.md) ↔ `PacketReceiveEvent` ✓; `.aZS(false)` metadata builder noted
  (meaning unrecovered, fW_.md "Unrecovered" 8).
- Packet filter: **high-probability guess: `CommonPingS2CPacket`** — the original's S2C type
  test has zero tokens (fW_.md 2; no `class_2848` ConfirmTransaction anywhere and it does not
  exist in 1.21.11). `CommonPingS2CPacket.getParameter()` verified
  (yarn-1.21.11+build.6.tiny:158461-158473). Keep-alive/sync-id tracking correctly absent.
remaining gaps:
- [N] `aXZ(Lsixtwo/gL$tk;)V` [18a73dad0] — VM-virtualized → needs runtime trace; latency math,
  `HDivr` contents and `aYb([B)String` callers VM-resident (fW_.md 3-5).
- [S, blocked on framework] the `fZ`/`ga`/`gb` shared state-store writes (long-keyed tree,
  paired-ArrayList codecs) have no counterpart in our config subsystem; impl keeps local
  counters only (fW_.md 9).
evidence: analysis/decompiled/payload-named-cfr/sixtwo/fW.java:13-39 + casesafe/handlers/fW_.md:24-47
vs src/main/java/dev/opengrim/modules/utility/Transactions.java:37-81

### ev — Collision Long Jump
post-fix parity: 80% | status: partial | fixed: partial
fixed:
- Javadoc honesty: previous "parity: full / 1:1 reconstruction" replaced with the recovered
  contract (BoatEntity test + `distanceTo` are pool-proven; the jump has no token) and
  explicit stand-in labels (CollisionLongJump.java:17-24).
- Verified: zero settings ✓; `aaj()` (ev.java:31-32) + `auR(hq)` collision listener
  (ev.java:34-35) ↔ `onTick`; `class_1690` BoatEntity + `method_5739 distanceTo` in the own
  run ✓; `.aZS(false)` noted.
remaining gaps:
- [N] `auR(Lsixtwo/hq;)V` [18ce21500] + `aaj()V` [18ce1e230] — VM-virtualized → needs
  runtime trace; the jump mechanism is the module's core open question (ev.md "Unrecovered" 2).
- [U] Discretionary constants: 0.6 AABB expansion, 2.0f distance threshold, PlayerInput-jump +
  `player.jump()` trigger; which `hq` member is the boat and repeat-jump gating also
  unresolvable.
- [S] the `hq` entity-collision event has no bus counterpart — tick scan instead.
evidence: analysis/decompiled/payload-named-cfr/sixtwo/ev.java:13-39 + handlers/ev.md:19-46
vs src/main/java/dev/opengrim/modules/movement/CollisionLongJump.java:14-55

### ew — No Jump Delay
post-fix parity: 90% | status: ported (documented reconstruction) | fixed: yes
fixed:
- **Bug fix**: the reflection intermediary fallback was `field_6243` — yarn shows
  `field_6243` = `LivingEntity.leaningPitch` (**float**; yarn-1.21.11+build.6.tiny:25057;
  `setInt` on it would throw an uncaught `IllegalArgumentException` at runtime).
  Corrected to `field_6228` = `LivingEntity.jumpingCooldown` (int; tiny:25131, class
  `class_1309` LivingEntity at :25037) — NoJumpDelay.java:56-63.
- Javadoc: added the field mapping citation, the phase note (END_CLIENT_TICK vs `gH$th`
  pre-motion, ew.md:21) and the [N] method name.
- Verified: zero settings ✓; listener `auT(gH$th)` (ew.java:33-34) ✓;
  `LivingEntityAccessor.setJumpDelay` ↔ `jumpingCooldown` write (accessor → reflection,
  stack-required).
remaining gaps:
- [N] `auT(Lsixtwo/gH$th;)V` [18ce0eee0] — VM-virtualized → needs runtime trace; the written
  constant 0 is the ew.md "reset" reading (immediate VM-resident, ew.md "Unrecovered" 2).
- [S] no `LivingEntityAccessor` mixin in our framework (reflection instead); END_CLIENT_TICK
  substitutes the pre-motion phase.
evidence: analysis/decompiled/casesafe/payload-named-cfr/sixtwo/ew.java:13-36 + handlers/ew.md:16-42
vs src/main/java/dev/opengrim/modules/movement/NoJumpDelay.java:11-70

---

## Compile result

- `.\gradlew.bat compileJava -q --offline` (repo root, after all edits): **PASS** (exit 0,
  no output). Ran twice (before and after the final citation edit) — both clean.

## Changed files

- `src/main/java/dev/opengrim/modules/movement/NoJumpDelay.java` — fallback `field_6243` →
  `field_6228` (real runtime bug: float field with `setInt`) + javadoc citations/phase note
- `src/main/java/dev/opengrim/modules/utility/NoProtocolDisconnect.java` — `bootEnabled()`
  override (`true`, fQ.java:19) + javadoc honesty (stand-in labeled, [N] named)
- `src/main/java/dev/opengrim/modules/utility/MultiTask.java` — twin citation corrected to
  `casesafe/handlers/dT_.md` + stand-in phase/gate notes
- `src/main/java/dev/opengrim/modules/movement/NullMovement.java` — javadoc honesty (body is
  VM-resident [N]; heuristic labeled discretionary)
- `src/main/java/dev/opengrim/modules/movement/CollisionLongJump.java` — javadoc honesty
  (removed false "parity: full" claim; stand-in labels)
- `src/main/java/dev/opengrim/modules/combat/NoMissDelay.java` — javadoc stack-required
  (reflection vs accessor) + phase notes
- Unchanged, verified clean: `NoSignScreen.java`, `NoFall.java`, `FullBright.java`,
  `Transactions.java` (already labeled correctly)
