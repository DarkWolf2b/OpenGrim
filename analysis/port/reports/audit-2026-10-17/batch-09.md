# Batch 09 audit report — audit 2026-10-17

Modules: dA (Elytra Target), dQ (Hit Sounds), eW (Auto Hit Crystal), fI (Auto Logout),
eQ (Mace Elytra Target), eB (Flight), dY (Anti Invisible), eb (Chest Stealer),
er (Speed), fs (Knockback Displacement).

All ten are j2cc classes: behavior bodies decrypt into the obfuscation VM. Parity is scored
against the recovered surface = settings tree (verbatim constructor chains) + listener
declarations + pool-token API surface + runtime trace. Compile:
`.\gradlew.bat compileJava -q --offline` — clean after all edits.

## Cross-cutting findings

- **Case-twin handler specs (5 of 10 impl javadocs cited a wrong twin):**

| impl javadoc cited | what the file actually documents | correct spec used here | source-map handlerSpec |
|---|---|---|---|
| `handlers/dQ.md` | sixtwo.**dq** Storage ESP | `casesafe/handlers/dQ_.md` | also wrong |
| `handlers/eB.md` | sixtwo.**eb** Chest Stealer | `casesafe/handlers/eB_.md` | casesafe (impl cited wrong) |
| `handlers/eQ.md` | sixtwo.**eq** Null Movement | `casesafe/handlers/eQ_.md` | casesafe (impl cited wrong) |
| `handlers/dY.md` | sixtwo.**dy** Glow | `casesafe/handlers/dY_.md` | also wrong |
| `handlers/fs.md` | sixtwo.**fS** Name Protect | `casesafe/handlers/fs.md` | also wrong |

  The remaining five (`handlers/dA.md`, `handlers/fI.md`, `handlers/eb.md`, plus
  `casesafe/handlers/eW_.md`, `casesafe/handlers/er.md`) were title-verified correct.
  All five wrong-twin citations in impl javadoc were corrected.

- **Name-order technique:** the decrypted constant dump (`analysis/decrypted/full-dump.jsonl`)
  lists per-class string materializations in *constructor call order*. Verified against the
  ctor field order for dA/eW/fI/eB/er/fs, then used to **resolve eQ's ambiguous numeric
  attribution** (see eQ below) and to confirm all 13 fs setting names (spec uncertainty 5).
  Note: the dump merges case-colliding classes (sixtwo.dQ contains dq's Storage ESP names;
  sixtwo.fs contains fS's strings) — do not attribute by class key alone.

- **`ct`+`cu` group semantics (settled by reading ct.java/cu.java):** `ct` holds a single
  selected index (`kErPl`, default 0; `.SO(n)` sets it, `cu.SY()` selects a child) and
  `cu.SZ() = IopEl && parent.index == this` where `IopEl` is initialized `true` and has
  **no setter** — so `ct`+`cu` is an exclusive radio group in every module of this batch.
  The er spec's [inferred] "modes are toggle groups" reading and the er impl's old
  javadoc/PARITY note are contradicted by this; er's dropdown representation is correct.
  `cv`+`cw` (`.Tz()` default-on checkboxes) is the true multi-toggle family (fI, eb).

- **New framework pieces for dQ:** `event/impl/SoundPlayEvent.java` (cancellable) +
  `mixin/SoundManagerMixin.java` (HEAD of `SoundManager.play(SoundInstance)`, cancel →
  `PlayResult.NOT_STARTED`), registered in `opengrim.mixins.json`. This is the port of the
  original's `gI` sound-play event (sixtwo.dQ#aoY consumes it at `mw.LOWEST`).

- **Out-of-batch observation:** `render/XRay.java:42` calls `setBind(96)` while registry dk
  XRay is `key=96 bind=-999` (the `key=` column is the module id, `bind=` the keybind) —
  likely a stray bind; flagged for its owning batch.

---

### dA — Elytra Target
post-fix parity: 70% | status: partial | fixed: yes

fixed:
- **Missing default bind added**: `setBind(82)` (registry `sixtwo.dA|…|key=59|bind=82`,
  metadata.txt:88 — the only batch module with a bound bind; AirStuck precedent).
- **Visibility wiring** verified against `pWbaz.Vf(thWij::SZ)` / `mFDgP.Vf(QVTVw::SZ)`
  (dA.java:185-186) — impl already gates Firework Key/Cooldown correctly.
- **Token-evidenced eye-raycast gate implemented [G]**: `hasLineOfSight` (COLLIDER/NONE
  raycast eye→aim point) from the dA-attributable cluster (`method_33571` getEyePos,
  `class_3959` RaycastContext, FluidHandling NONE — handlers/dA.md "Evidence base" 4).
- Javadoc rewritten: settings cited per field (dA.java:55-183, suffixes " blocks"/" ticks"
  are plaintext in the decrypted source — spec uncertainty 5 stale), listener set
  (ajT/ajU/ajV/akh/YO), trace (dA_.jsonl: load + one YO call only), and all stand-ins
  labeled [G].

remaining gaps:
- [N] All firework math (aim/overshoot/follow-distance band/cooldown conversion) — VM;
  capture condition: enable the module and glide with a target while the native trace is
  attached (aTj/ajU bodies never entered in the 2026-10-17 session).
- [G] Target acquisition (crosshair entity, else nearest living ≤64 blocks), the cooldown
  as `player.age` ticks, and the hotbar firework use — labeled reconstruction.

### dQ — Hit Sounds
post-fix parity: 75% | status: partial | fixed: yes

fixed:
- **Mechanism rewritten to the recovered event path**: new `SoundPlayEvent` +
  `SoundManagerMixin` (all client-side sound starts, cancellable) replacing the old
  left-click/crosshair poll. Original: `@hG(mw.LOWEST) aoY(gI)` with
  `SoundInstance#getId()#getPath()` + one `String.contains` call, cancel-on-match,
  replay via the sound manager (casesafe/handlers/dQ_.md "Per-handler semantics" 2, pool
  slice POOL[0xb040,0x1ea]).
- **Cancel Original Sound** now implemented as event cancellation (framework equivalent of
  the original's event cancel).
- **Volume branch corrected**: Synchronized → category gain (vanilla pipeline applies
  `getCategorySoundVolume(PLAYERS)` itself; 1.0 passed) / Custom → slider fraction
  (dQ.java:127,164; token `method_1630`).
- **Invented GroupSetting removed** — the original tree is flat (dQ.java:69-161; no
  `cv`/`cw`); settings re-registered in ctor order.
- Visibility gates kept per `gkxvg.Vf(this::apa)` / `INtkR.Vf(this.wWQPU::SZ)`
  (dQ.java:163-164). Spec citation fixed (was the dq Storage ESP twin).

remaining gaps:
- [G] Match needle `entity.player.attack` (the VM needle is unrecovered — only the
  `contains(CharSequence)` call is visible; the player-attack family is the high-probability
  hit-sound target).
- [U] Preset One..Six audio assets (oc payloads) — mapped to a pitch-stepped vanilla sound
  as a labeled stand-in; Custom-mode URL audio (`oc.cBL` async fetch + `qI.daR` raw-bytes
  playback, dQ.java:178) has no rebuild equivalent, so Custom mode leaves the original
  sound untouched.
- [N] `aoY` body arithmetic (volume combine order, `FXFhS`/`gxiKQ` state machine) — VM.

### eW — Auto Hit Crystal
post-fix parity: 65% | status: partial | fixed: yes

fixed:
- **Work With Items** re-mapped from a lone boolean to the cK-convention group of six sword
  toggles (pool `jc.WnbNG` + preselected NETHERITE/DIAMOND/IRON/STONE/GOLDEN/WOODEN_SWORD,
  eW.java:112-120; AutoTrap.java:53-54 precedent) and the **held-item gate implemented [G]**
  (spec "Settings → behavior": stand down when the held stack is outside the selection).
- **Activation Key wired [G]** (`cD .VO(1)` = key code 1, mouse-aware keyDown per
  ClickAction.java:155-163 convention; the old impl never read it).
- Settings order/defaults re-verified verbatim (eW.java:54-200; Limit Crystal `.SO(2)` →
  Infinite default confirmed).
- Javadoc rewritten with per-field citations, trace note (eW_.jsonl: aaj → aED once,
  aEz twice), and the ghost-crystal/interactAt divergence documented.

remaining gaps:
- [U] Ghost-crystal prediction (`qR.ddR` registry, `setId`) and the recovered
  `PlayerInteractEntityC2SPacket.interactAt` + `HandSwingC2SPacket` submission — the
  rebuild attacks the real crystal via TriggerBot.attack.
- [U] Dimension gate (which dimensions unrecovered — do not guess), the aEz player-scan
  predicate, the `ol` CPS scheduler (Spoof CPS), and the slot-switch step behind
  Switch Delay/Switch Back To Slot (target slot unrecovered; the setting gates a second
  cooldown here).
- [N] aEA place/hit cycle arithmetic — VM.

### fI — Auto Logout
post-fix parity: 75% | status: partial | fixed: yes

fixed:
- **Missing visibility gate added**: `logoutKey.setVisible(logoutOnKey.getValue())`
  (fI.java:206 `CLGoi.Vf(this.yfLPs::WF)`).
- **Disconnect Message cap**: truncate to 32 chars (`.Un(32)`, fI.java:159) instead of
  falling back to "Disconnected"; StringSetting has no max-length support (documented
  framework limitation).
- Javadoc rewritten: settings cited (fI.java:47-205), handlers (aUB tick scan, aUC input,
  aUD projectile predicate, aUE executor), trace (fI_.jsonl: one aUB call), stand-ins
  labeled.

remaining gaps:
- [G] Logout on Key as a per-tick held-key poll (original consumes it in the `gA` input
  event; framework has no general input event), class-based projectile classification
  (pearls/fish rods plausibly via `FlyingItemEntity.getStack()` item identity per the
  window), Invisible polarity (spec "Unrecovered" 4).
- [U] Projectile threat criteria (velocity/owner), window tail.
- [N] aUD/aUB bodies — VM.

### eQ — Mace Elytra Target
post-fix parity: 70% | status: partial | fixed: yes

fixed:
- **Numeric settings re-attributed (was wrong)**: decrypted name order in full-dump.jsonl
  (Hit Mode, Armor Swap, Force Smash, **Fly Up For**, **Follow Distance**, Firework Use
  Mode, None, On Bind, Auto, **Firework Cooldown**, Firework Key) matches the ctor call
  order exactly (eQ.java:106/120/134/146/163/182/…/236/250), so:
  Fly Up For = eQ.java:146 `0.1/7.0-25.0/12.0` (was mapped as Follow Distance),
  Follow Distance = eQ.java:163 `1.0/0.0-100.0/15.0 " blocks"` (was mapped as Cooldown),
  Firework Cooldown = eQ.java:236 `1.0/0.0-60.0/10.0 " ticks"` (was mapped as Fly Up For).
  This also fixes the boost cooldown semantics (ticks, dA-shaped 0-60).
- **Hit Mode converted to a radio group**: `ct` with no `.SO()`/`.SY()` → default index 0
  = Armor Swap (ct.java:34, cu.java:174-198); the old GroupSetting+2 booleans was not the
  original tree. Force Smash is now the alternative branch, not an add-on flag.
- **Visibility gate corrected**: Firework Cooldown iff Auto (`maIlI.Vf(acbMp::SZ)`,
  eQ.java:253 — was wrongly on Fly Up For); Firework Key iff On Bind kept (eQ.java:252).
- Javadoc rewritten (spec path was missing/wrong-twin), trace note (eQ_.jsonl: one YO call).

remaining gaps:
- [U] eP/oW/oY orchestrator + `pe` point-engine movement solve, Armor Swap variant,
  aCf/aCg target-event pairing.
- [G] Target = nearest player ≤32 blocks, rotation submission, tick-based climb, smash
  trigger (above target or Force Smash, mace held, ≤ Follow Distance+2).
- [N] Follow/boost/dive math — VM.

### eB — Flight
post-fix parity: 70% | status: partial | fixed: yes

fixed:
- **Mode default corrected**: `ct` has no `.SY()` → default index 0 = **Abilities**
  (eB.java:118-151, ct.java:34); impl had "velocity".
- Settings re-verified verbatim against the decrypted names (Anti Kick, Vertical Speed
  Match, Off Time 1.0/1-20/1 " ticks", Delay 1.0/1-200/20 " ticks", Speed
  0.01/0.01-3.0/0.05, Anti Kick Mode Normal/Packet/None default Normal).
- Javadoc rewritten: corrected line citations (previous ones pointed at another tree),
  trace evidence (eB_.jsonl: aaj → avS (static String[] getter, 63 calls) → YO with avw()
  inside), `.aZS(false)` metadata flag and the unrecovered predicate roles documented.

remaining gaps:
- [G] Velocity composition (yaw/strafe/jump/sneak from Speed + Vertical Speed Match), the
  anti-kick Normal dip (−0.04/tick) and Delay/Off Time cycle, packet rewrite as
  `y = min(y, baseline)` + onGround=true.
- [U] `.aZS(false)` flag (eB.java:41), avv/avy roles, shared-window tokens.
- [N] avr/avs/avu/avt bodies — VM. Trace capture condition: enable Flight and move/sneak
  (the 2026-10-17 session only caught lifecycle + avS).

### dY — Anti Invisible
post-fix parity: 60% | status: partial | fixed: partial

fixed:
- Javadoc rewritten: spec path corrected (source-map pointed at the dy Glow twin),
  filter contract (cF.VX: non-empty selection ∧ type in the OCdZM universe ∧ selected)
  cited (cF.java:230-268), the cF-set-as-plain-field framework limitation and the [U]
  enforcement point documented; trace note (no dY entries beyond class load).

remaining gaps:
- [U] **The enforcement point** — which central/native component forces rendering of
  invisible entities for enabled modules is unrecovered (spec "Unrecovered" 1-3); the
  module is inert in-game until a renderer consumer is wired to `matches`.
- [G] cF widget persistence (display-name keyed config) not representable — the set is
  exposed via get/setEntityTypes.

### eb — Chest Stealer
post-fix parity: 75% | status: partial | fixed: yes

fixed:
- **Hover implemented [G]**: previously a no-op condition (`currentScreen == null` inside a
  container); now restricts theft to the hovered slot via the focused-slot accessor
  (HandledScreenAccessor, AutoMarket.java:100-108 precedent) — spec "steal only the
  hovered slot when on".
- Settings re-verified verbatim (Check Storage Title default Disabled, Storage Title
  "Chest" cap 64 — plaintext in the decrypted source, spec stale; Minimum Durability
  1.0/1-100/30 " %"; Items To Steal default All; visibility gates eb.java:204-206).
- Javadoc rewritten with per-field citations, trace note (eb.jsonl: one aro call), and the
  transfer-mechanics/Hover/Items gaps labeled.

remaining gaps:
- [U] The "Items" cK multi-select (all-items pool) has no settings-API equivalent — Items
  To Steal = Selected currently steals nothing; Storage Title 64-char cap unenforceable;
  title normalization (case/strip) unrecovered.
- [G] Transfer as QUICK_MOVE clickSlot with 2-tick pacing (mechanics VM-hidden).
- [N] aro body — VM.

### er — Speed
post-fix parity: 65% | status: partial | fixed: yes

fixed:
- **Yaw Offset Mode default corrected**: `.SO(1)` → default index 1 = **Air** (er.java:119,
  children Ground/Air/Constant er.java:128/130/146); impl had "ground".
- **Suffixes corrected to verbatim**: " blocks" / " ticks" (leading space; er.java:156/217/226).
- Javadoc rewritten: per-field citations, the exclusive-radio reading of `ct`+`cu` (with
  the ct/cu evidence), trace note (er.jsonl: one auc + one aub), labeled stand-ins.

remaining gaps:
- [G] Velocity multiplier branch (state-selected On Ground/On Jump/On Fall), Matrix branch
  as directional Power increment, yaw-offset lateral push.
- [U] Collision Target loop (Boost Range/Predict/hurtTime gates), `ou UGcHq` rotation
  context, `tmlzg`, gw event booleans.
- [N] Motion math — VM (spec "Unrecovered" 1: explicitly not recoverable).
- Note: the old javadoc/PARITY claim that the original used independent toggles is
  contradicted by ct.java/cu.java (see cross-cutting) — orchestrator should fold this into
  PARITY's divergence log.

### fs — Knockback Displacement
post-fix parity: 60% | status: partial | fixed: partial

fixed:
- Javadoc rewritten: spec path corrected (source-map pointed at fS Name Protect); all 13
  setting names confirmed via the dump order (resolving spec uncertainty 5: IcLmm = "Mode");
  settings cited per field (fs.java:144-328) with gates (fs.java:324-327); handlers and
  the outbound-packet mechanism documented (aPg at `mw.CRUCIAL`, aPp filter, bapCK queue,
  `dpm()`/`callSendPosition` raw sends); trace evidence recorded (fs.jsonl: three aPg
  calls each with aPp→false, aPe+aPf ×2, YO→aPr→aPq on disable).

remaining gaps:
- [U] All displacement math (spec "Unrecovered" 1-2,4: do not guess), latch roles,
  aPk/aPq/aPr split, trigger chain.
- **Mechanism divergence (labeled in javadoc)**: the rebuild rewrites the inbound
  `EntityVelocityUpdateS2CPacket` (0.35 horizontal magnitude [G]) instead of the original's
  outbound movement-packet rewrite; the original has no inbound listener (spec
  "Unrecovered" 3). Orchestrator: record in PARITY's divergence log.
- [G] Dynamic direction as yaw + working angle (Change Angle Key rotates it by Angle Step
  per press), With Knockback Only as `getRecentDamageSource() != null`, " deg" suffix
  (aRvFo unresolved in the dump).
- [N] aPg/aPp/aPn bodies — VM.

---

## Evidence summary

- Decompiles: `payload-decrypted` sources for all ten (class declarations verified inside
  each file); case-safe variants read for dA/dY/eb/er/fs (plus ct.java/cu.java for the
  group semantics).
- Specs: module + handler specs, with five handler-spec case-twin corrections (table above).
- Constant pool: `analysis/decrypted/full-dump.jsonl` — per-class string order used for
  eQ attribution, dA/eW/fI/eB/er/fs tree confirmation; string values (dQ " %", fI
  "Disconnected", fs no suffix) cross-checked.
- Traces `analysis/traces/2026-10-17/`: digests + raw JSONL for all ten (per-module notes
  above); numeric exits only for fs (`aPp`→0 ×3).
- Yarn 1.21.11+build.6 for signature checks (PlayerInteractEntityC2SPacket.interactAt =
  method_34208, GameOptions.getCategorySoundVolume = method_1630, SoundManager.stop =
  method_4870, SoundInstanceListener/onSoundPlayed, GLFW mouse codes).
- Vanilla 1.21.11 named jar (loom cache) for SoundSystem.play order and SoundManager.play
  signature (mixins for dQ).
