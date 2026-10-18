# Batch 11 audit — fu, eX, fB, dE, fn, fx, eV, dC, dm, df

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-11 subagent.
Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (after a transient
concurrent-session break in `AutoDoubleHand`/`SpearDash` cleared).

Sources used per id from `analysis/tools/audit/source-map.tsv`; all decompiles
verified by declared class before use. Trace evidence folded from
`analysis/traces/2026-10-17/` (ENC names). Constants from
`analysis/decrypted/full-dump.jsonl` where applicable.

---

## fu — Criticals (`combat/Criticals.java`)

- **Post-fix parity: ~58% · status: ported (native-blocked) · fixed: yes**
- Settings: 21/21 exact — Mode ct (Vanilla/Custom/Packet/Web Lag, default
  first child), Lag Delay `UG(5.0).UE(0.0).UF(2000.0).UI(100,150).UH(" ms")`
  → step 5.0 / 0..2000 / default 100.0, five Packet N groups (Send/Ground/Full
  defaults TTTFF / TFFFF / TTFFF; Offset 0.01, −1..1, defaults
  0.0/0.0625/0.04535/0.0/0.0 " blocks"), visibility Lag Delay ← Web Lag,
  Packet N ← Custom (fu.java:142-426; handlers/fu.md §Settings tree).
- Fix (this session): Web-Lag hold queue wired — `PacketSendEvent` now holds
  outbound packets while a Web-Lag window (opened by `AttackEntityEvent`) is
  pending and re-sends them FIFO once Lag Delay elapses; `onDisable`/mode-switch
  flush. Labeled **high-probability guess** in javadoc: the original
  `Queue<Packet<?>>` + `gL$tj` listener (fu.java:45, 66) prove interception;
  which packets are held and the release order are unrecovered
  (handlers/fu.md §Unrecovered 6).
- Remaining gaps: all mode arithmetic VM-blocked [N] (aQp(DZZ) parameter
  assignment, spoofed packet contents, profile selection — handlers/fu.md
  §Unrecovered 1-5, 9). `class_2813` (ClickSlotC2SPacket) role unresolved [U].
- Evidence: trace 2026-10-17 fu — only `aaj`/`YO`/`aQq` entered (2× each, no
  numeric exits); no additional behavior claims.

## eX — Anchor Macro (`world/AnchorMacro.java`)

- **Post-fix parity: ~52% · status: ported (native-blocked) · fixed: yes (partial)**
- Settings: 20/20 exact incl. recovered names beyond the stale spec
  (Mode=Press/Hold, Detonate Item " slot" cC 1/1-9/1, When=Before Charge/
  After Charge, Safe Anchor Blocks obsidian+glowstone, Hold Key −999) and
  visibility wiring (eX.java:349-354).
- Fix (this session): "When" was modeled as a GroupSetting with two
  BoolSettings; the original is a `ct`/`cu` radio group (`KUvew`/`EYjJv`/
  `lxmFM`, eX.java:292-333) → converted to a ModeSetting
  (before_charge/after_charge, default first child), matching the repo's
  ct/cu convention (cf. fu Mode, fB Disable Mode).
- Remaining gaps: When/Diagonal registered but unread — semantics VM-blocked
  [U] (spec §Unrecovered 1/3); phase machine is a documented designer
  approximation; the original gW$tq/gO$tm use-event entry points are not
  mirrored (poll-based activation) [U].
- Evidence: trace 2026-10-17 eX — `aEN`/`aEM` 6× each (both tick listeners
  exercised, no numeric exits).

## fB — Auto Shield Break (`combat/AutoShieldBreak.java`)

- **Post-fix parity: ~55% · status: ported (native-blocked) · fixed: yes (partial)**
- Settings: 21/21 exact (Attack/Switch Mode, Auto Switch Delay
  1.0/0-10/1.0-2.0 " ticks", Range 0.1/1-6/2.5-3.0 " blocks", Disable Mode
  .SO(1)=Stun, Stun Chance 1/1-100/100 " %", Spam CPS 1/1-20/4-6 " cps",
  Ignore Walls false, Spoof CPS false, Return Delay 10/0-1000/50-100 " ms",
  Ignore Friends true, Cancel On Use false, Cancel Use Mode; fB.java:71-307).
- Fix (this session): Auto Switch Delay visibility gate added — recovered
  `vOaqN.Vf(this::aSn)` (fB.java:306); mapped to Switch Mode == Auto
  (labeled high-probability guess; `aSn` body is VM).
- Remaining gaps: decision arithmetic (Single/Stun/Spam, Stun roll, switch-back
  choreography) VM-blocked [N] (spec §Unrecovered 1-2, 4-9); aSm/aSj/aSk
  unassignable [U].

## dE — Spammer (`utility/Spammer.java`)

- **Post-fix parity: ~80% · status: ported · fixed: yes**
- Settings: 16/16 exact (incl. the Delay setting the old module spec missed:
  0.1/0.1-60/1.0 " sec"; message strings 256-cap modeled by StringSetting).
- Fix (this session): visibility wiring was absent — added Split Length/
  Split Delay ← Auto Split Messages and Include Uppercase Characters/Length ←
  Bypass Anti Spam (recovered `NnmHf.Vf(AWqkh)`, `ZtOjo.Vf(AWqkh)`,
  `JoiPl.Vf(odfuN)`, `zJjQa.Vf(odfuN)`, dE.java:296-299), plus Message 2..5 ←
  Message Count ≥ k for the native suppliers akU/akT/akS/akR (dE.java:292-295;
  labeled high-probability guess).
- Behavior matches the recovered contract (akM list builder, akO sequential/
  Randomize pick, akN splitter, akP suffix generator, akQ chat submit;
  handlers/dE.md §Per-handler semantics).
- Evidence: trace 2026-10-17 dE — `akJ`→`akK`→`akK r=20` inside `aaj`/`YO`;
  the ×20 tick conversion of the seconds delay is trace-consistent
  (`akK` returned 20 twice).
- Remaining gaps: exact pacing/cursor math [U]; string constants (default
  message/placeholder) [U] (spec §Unrecovered 4).

## fn — Auto Clicker (`utility/AutoClicker.java`)

- **Post-fix parity: ~55% · status: ported (native-blocked) · fixed: no (verified)**
- Settings: 12/13 top-level — Mouse Buttons (Left/Right Click), Left/Right CPS
  (1/1-20/12 " CPS"), Randomize true, Simulate Exhaust false, Allow Breaking
  Blocks true, Inventory false, Randomize Speed true, Conditions (Holding
  Weapon/Not Using Item); visibility wiring matches
  (`aVMzs.Vf(sxweB)`, `OHuMF.Vf(MVcap)`, `uuTCc.Vf(zUyjt)`, fn.java:290-292).
- Remaining gaps: **Click Pattern ct group (8 `cu` toggles) omitted** — the
  option names come from native `rf.dft()` [U], not implemented (javadoc
  documents it). Click-timing math, pattern profiles, Randomize jitter,
  Randomize Speed factor, aKS conversion, aKU/aKV mapping, Simulate Exhaust —
  all VM [N]/[U] (handlers/fn.md §Unrecovered 1-9).
- Evidence: trace 2026-10-17 fn — only `YO` (2×); no numeric exits.

## fx — Auto Totem (`combat/AutoTotem.java`)

- **Post-fix parity: ~58% · status: ported (native-blocked) · fixed: yes**
- Settings 14/14 — fixes this session (all from fx.java:74-333):
  - Mode default **legit → normal** (`BYSSp` ct `.SO(1)`, children
    Legit(0)/Normal(1)).
  - Inventory Mode default **client → silent** (`XZIWm` `.SO(1)`, children
    Client(0)/Silent(1)).
  - Open Delay default **10.0 → 0.0** (`.UI(0.0,0.0)`); Close Delay default
    **10.0 → 0.0**.
  - Minimal Health % suffix **" %" → "%"** (`.Vz("%")`).
  - Totem Item: ModeSetting → cK-style GroupSetting + `totem_of_undying`
    BoolSetting (repo convention, cf. HandNoClip Blocks / AnchorMacro Safe
    Anchor Blocks); behavior reads the toggle.
  - Visibility wiring added: Minimal Health % ← Health Requirement; Auto Open
    Inventory/Open Delay/Close After Swap/Block Input ← Inventory Mode ==
    Client (fx.java:326-330); Close Delay ← Close After Swap (aRy, labeled
    high-probability guess, fx.java:329).
- Remaining gaps: health-trigger math, SWAP-click button, timer assignment,
  Legit/Normal packet paths, aRy body — VM [N]/[U] (spec §Unrecovered 2-13).
  Block Input has no input hook in this rebuild (`blocksInput()` exposed but
  unused) [S] — needs a mouse/keyboard mixin.
- Evidence: trace 2026-10-17 fx — `aRj`→`aRl`(r=1)→`aRm` per tick (gate true
  then action); no numeric settings evidence.

## eV — Auto Crystal (`combat/AutoCrystal.java`)

- **Post-fix parity: ~52% · status: ported (native-blocked) · fixed: yes (partial)**
- Settings: 11/11 exact (Activate On Key false, Activation Key −999, Spoof CPS
  false, Place/Break Delay 1/0-10/0 " ticks", No Count Glitch false, No Bounce
  false, Stop on Kill false, Stop Time 25/0-8000/1000 " ticks", Damage Tick
  false, Predict Id false; eV.java:61-241).
- Fix (this session): visibility gates moved above the early returns so they
  evaluate whenever the module is enabled (Activation Key ← Activate On Key,
  Stop Time ← Stop on Kill; eV.java:223-224).
- Remaining gaps: all crystal math, MuaJV, th/ti split, five predicates —
  VM [N]/[U] (spec §Unrecovered 1-8). `stopOnKill`/`stopTime`/`noCountGlitch`/
  `noBounce`/`damageTick`/`predictId`/`spoofCps` are registered but not read
  (designer approximation) [U].
- Evidence: trace 2026-10-17 eV — `aDP`→`aEq`(r=0)→`aEp`(r=1)→`aDS`;
  `aDO`→`aEp`(r=1); aEq calls aEp. Static gate values captured; nothing
  contradictory to the impl.

## dC — View Model (`render/ViewModel.java` + mixin bridge)

- **Post-fix parity: ~85% · status: ported · fixed: yes**
- Settings: 21/21 exact (Scale 0.01/0-2/1.0; Main/Off/Arm position 0.01/−3..3/0;
  rotations 1/−180..180/0 " deg"; Work On Items true; Work On Arm false).
- Fixes (this session):
  - Visibility wiring added (13 couplings, dC.java:384-405).
  - **Render hook implemented**: new `HandRenderEvent` + `HeldItemRendererMixin`
    mirroring the original shell's `mixin.accessors.ItemInHandEventBridgeMixin`
    (same injection points: before `HeldItemRenderer.renderItem` inside
    `renderFirstPersonItem` = original `gl`; HEAD of `renderArmHoldingItem` =
    original `gt`). ViewModel's new `@Subscribe onHandRender` applies
    `transformHand`/`transformArm` — the original akr(gl)/aks(gt) listeners.
    Transform order (translate → X → Y → Z → scale) is a designer choice; the
    native bodies are VM-blocked (spec §Blockers).
- Remaining gaps: transform order/frame and Scale application [U]
  (spec §Blockers/unknowns); rotation-axis composition for Y/Z is a
  three-axis approximation [U].

## dm — Friend Indicator (`render/FriendIndicator.java`)

- **Post-fix parity: ~92% · status: ported · fixed: yes**
- Settings: 1/1 exact (Height 0.1/0.4-1.6/1.2; suffix jfMvl DES-unrecovered →
  none, dm.java:56-67).
- Fix (this session): rendering replaced with the **recovered geometry** —
  dm.java:250-320 agU is fully decompiled: per tracked player, anchor =
  `getLerpedPos(tickDelta) + (0, getHeight() + Height, 0)`, camera-relative
  translate (jI.bIs), then one primitive: `kE.bTf(0,0,0, 0.1f)` → `kK.bUp`
  octahedron (vertices (0,±1.5,0), (±1,0,0), (0,0,±1); 8 triangles; per-face
  brightness 1.0/0.8/0.6/0.9/0.7/0.5/0.4/0.6; kK.java:136-163, 376-417),
  vertex color = base × brightness (kK.bUq). Drawn via
  `RenderLayers.debugFilledBox()` (POSITION_COLOR QUADS, degenerate-padded
  triangles). The previous box outline + non-lerped position are gone.
- Remaining gaps: `jk.jEkxo` RGBA is a native-decrypted int (jk.java:160, not
  in full-dump) → placeholder color [U]; blend mode approximated
  (original additive lh.aApMr vs repo layer) [U]; friend set uses the repo
  FriendsManager rather than the original qQ name registry (PARITY correction)
  [S].
- Evidence: trace 2026-10-17 dm — load only (pure-Java module, no native
  entries).

## df — Aspect Ratio (`render/AspectRatio.java`)

- **Post-fix parity: ~75% · status: ported (module code fully recovered) · fixed: no (verified)**
- Settings: 2/2 exact (Preset ct Custom/16:9/16:10/4:3 default first child;
  Ratio cC 0.001/0.1-5.0/1.7777777777777777, visible iff Custom, df.java:47-74).
- `getAspectRatio()` reproduces adV() branch-for-branch (df.java:165-227):
  16:9 → 1.7777777777777777, 16:10 → 1.6, 4:3 → 1.3333333333333333, else
  slider value.
- Remaining gap [S]: the projection/framebuffer hook that consumes
  `getAspectRatio()` does not exist in this rebuild (the original applies it in
  shell camera/projection code, explicitly out of df's recovered scope —
  handlers/df.md §Runtime model/Unrecovered). Module code itself is 1:1.

---

## Summary table

| id | status | parity | fixed |
|---|---|---|---|
| fu | ported (native-blocked) | ~58% | yes |
| eX | ported (native-blocked) | ~52% | partial |
| fB | ported (native-blocked) | ~55% | partial |
| dE | ported | ~80% | yes |
| fn | ported (native-blocked) | ~55% | no (verified) |
| fx | ported (native-blocked) | ~58% | yes |
| eV | ported (native-blocked) | ~52% | partial |
| dC | ported | ~85% | yes |
| dm | ported | ~92% | yes |
| df | ported (module code 1:1) | ~75% | no (verified) |

## Changed files

- `src/main/java/dev/opengrim/modules/combat/Criticals.java` (fu: web-lag queue)
- `src/main/java/dev/opengrim/modules/world/AnchorMacro.java` (eX: When → ModeSetting)
- `src/main/java/dev/opengrim/modules/combat/AutoShieldBreak.java` (fB: autoSwitchDelay visibility)
- `src/main/java/dev/opengrim/modules/utility/Spammer.java` (dE: visibility)
- `src/main/java/dev/opengrim/modules/combat/AutoTotem.java` (fx: defaults, suffix, item group, visibility)
- `src/main/java/dev/opengrim/modules/combat/AutoCrystal.java` (eV: visibility ordering)
- `src/main/java/dev/opengrim/modules/render/ViewModel.java` (dC: visibility + HandRenderEvent listener)
- `src/main/java/dev/opengrim/modules/render/FriendIndicator.java` (dm: octahedron geometry)
- `src/main/java/dev/opengrim/event/impl/HandRenderEvent.java` (new)
- `src/main/java/dev/opengrim/mixin/HeldItemRendererMixin.java` (new)
- `src/main/resources/opengrim.mixins.json` (register HeldItemRendererMixin)

Not edited (verified 1:1, gaps documented): `AutoClicker.java` (fn),
`AspectRatio.java` (df).
