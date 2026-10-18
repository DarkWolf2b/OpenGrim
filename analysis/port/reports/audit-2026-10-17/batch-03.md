# Batch 03 audit report — audit 2026-10-17

Modules: ex (Safe Walk), dV (Custom FOV), ek (Inventory Move), ea (No Break Delay),
eh (Auto Exp), eg (No Swing), dL (No Entity Clip), eY (Crystal Optimizer),
fi (Shield Block), ed (Custom Camera Distance). All ten are j2cc-native-blocked
classes; parity is scored against the **recovered surface** = registry rows +
decompiled constructors/listeners + the handler-spec pool-token runs.

## Case-twin landmine

The `analysis/specs/handlers/<id>.md` paths returned by `source-map.tsv` are
**case-collapsed wrong twins** for 6 of my 10 ids (verified by reading the
`Class: sixtwo/<id>` header of each file):

| source-map handlerSpec | what the file actually documents | correct spec actually used |
|---|---|---|
| `handlers/ex.md` | sixtwo.**eX** Anchor Macro | `analysis/specs/casesafe/handlers/ex.md` |
| `handlers/dV.md` | sixtwo.**dv** Chams | `analysis/specs/casesafe/handlers/dV_.md` |
| `handlers/ea.md` | sixtwo.**eA** Strafe | `analysis/specs/casesafe/handlers/ea.md` |
| `handlers/eh.md` | sixtwo.**eH** Spear Dash | `analysis/specs/casesafe/handlers/eh.md` |
| `handlers/eg.md` | sixtwo.**eG** Spear Lunge | `analysis/specs/casesafe/handlers/eg.md` |
| `handlers/fi.md` | sixtwo.**fI** Auto Logout | `analysis/specs/casesafe/handlers/fi.md` |

Correct as mapped: `handlers/ek.md` (sixtwo.ek), `handlers/dL.md` (sixtwo.dL),
`handlers/eY.md` (sixtwo.eY), `handlers/ed.md` (sixtwo.ed). Same trap in the
Ghidra annotated tree: `sixtwo_ek.c`/`sixtwo_ea.c`/`sixtwo_eh.c`/`sixtwo_ed.c`
under `handlers-full-annotated` are the uppercase twins (eK/eA/eH/eD); the
lowercase originals are `analysis/ghidra/casesafe/handlers-stitched/sixtwo_<id>.c`.

Registry rows verified from `analysis/jars/bootstrap-raw/offline/features/metadata.txt`
(all ten, verbatim where cited): ex:79 key=51, dV:81 key=53, ek:75 key=47,
ea:85 key=57, **eh:90 key=25 bind=74**, eg:113 key=77, dL:84 key=56,
eY:50 key=33, fi:57 key=155, ed:110 key=74; all other binds -999.

Runtime trace (`win/trace.jsonl`, targeted): all ten classes entered only
`<clinit>`/`<init>` plus their indy/decrypt kernels (auW/auX, aqh/aqi, asY/asZ,
arl/arm, asB/asC, asv/asw, ans/ant, arF/arG, …). **No behavior handler**
(`auV`, `aaj`, `YO`, `asT`, `asU`, `ari`, `asy`, `anq`, `aFE`, `aJm`, `aJn`)
has a single trace entry — the VM bodies never ran in the boot/HUD idle capture.

Category note (batch-wide, framework-level): the original's misc category
`gh.qBzlZ` (dV/ea/eh/eg/dL/ed) has no 1:1 member in our 5-category enum; the
port maps each to the closest semantic name (RENDER/WORLD/UTILITY). Deliberate
port-side divergence, not per-module fixable.

---

### ex — Safe Walk
post-fix parity: 90% | status: ported (documented reconstruction) | fixed: partial
fixed:
- Spec citation corrected: impl now cites `analysis/specs/casesafe/handlers/ex.md`
  as the primary spec (the map's `handlers/ex.md` is the sixtwo.eX Anchor Macro
  twin — verified header; previously only cross-referenced).
- Verified recovered surface, no divergence: single toggle "Release On Forward"
  `.WE(false)` default off (payload-decrypted/sixtwo/ex.java:41) ⇒
  `BoolSetting("release_on_forward", false)` (SafeWalk.java:33); public getter
  `auV()` (ex.java:55) ⇒ `auV()` (SafeWalk.java:42-44); registry key 51 / desc /
  category `gh.xgeEn` = MOVEMENT ✓; original declares zero `@hG` handlers and no
  behavior method (spec "Architecture — config-only Java surface (exact)", the
  class's only handlers are clinit + the auV getter + decryptors, per
  handlers-full-annotated/sixtwo_ex.c inventory).
remaining gaps:
- [N] No behavior handler exists in the class — the safe-walk patch lives in the
  DLL movement layer (casesafe/handlers/ex.md "Architecture"/"Per-handler
  semantics"); ex's own handler set is `auV` getter + decryptors only.
  VM-virtualized → needs runtime trace.
- [U] Edge geometry and "Release On Forward" exact polarity/edge cases (spec
  "Unrecovered" #1-2). The tick velocity-zeroing stand-in differs from the
  spec's sneak-actuation reading (casesafe/handlers/ex.md:65-68); kept and
  documented rather than replaced by another guess.
evidence: casesafe/handlers/ex.md:51-68,105-122 vs src/main/java/dev/opengrim/modules/movement/SafeWalk.java:33,42-44,46-71

### dV — Custom FOV
post-fix parity: 95% | status: ported | fixed: no
fixed:
- No code change warranted. FOV slider chain `.Vy(1.0).Vw(30.0).Vx(150.0).VA(90.0).Vz(HnRzm)`
  (dV.java:26-38) ⇒ `DoubleSetting("fov", 1.0, 30.0, 150.0, 90.0, null)`
  (CustomFov.java:23) — exact; suffix undecrypted → null (spec forbids guessing).
- `gShhH = 70` (dV.java:37) ⇒ `storedFov = 70` (CustomFov.java:25);
  aaj/YO contract (stash live FOV, write slider on enable; restore stored on
  disable — spec "Per-handler semantics" 2-3) implemented in that order
  (CustomFov.java:31-46); getters aqd/aqe (dV.java:45,50) ⇒ getFovValue /
  getStoredFov; zero `@hG` listeners ✓.
remaining gaps:
- [N] `aaj()V` / `YO()V` bodies VM-virtualized (trace: only aqg/aqh/aqi/aqj
  entered) → needs runtime trace.
- [U] Rounding/clamping applied when writing `SimpleOption<Integer>` is
  indy-resolved (spec "Blockers"); impl rounds (Math.round) — unrecovered.
- [U] Whether aaj snapshots `gShhH` on every enable (impl does; spec "strongly
  suggest a snapshot + restore design").
- [V] suffix string `HnRzm` undecrypted (left null).
evidence: casesafe/handlers/dV_.md:52-66,74-80 vs src/main/java/dev/opengrim/modules/render/CustomFov.java:23-56

### ek — Inventory Move
post-fix parity: 80% | status: partial | fixed: no
fixed:
- Verified recovered surface: "Block Clicks" `.WE(false)` (ek.java:35) ⇒
  `BoolSetting("block_clicks", false)` (InventoryMove.java:36); tick listener
  `asT(gH$th)` (ek.java:44) ⇒ onTick; screen exclusions exactly the asV-slice
  tokens — Anvil / CommandBlock / StructureBlock (handlers/ek.md:43-45) and
  SignEdit / HangingSignEdit (handlers/ek.md:53-54) (InventoryMove.java:76-94);
  `asV()` public query (ek.java:57) ⇒ `isScreenSafe()` (HandledScreen + empty
  cursor + movement-safe — handlers/ek.md:89-92); movement keys mirrored via
  `KeyBinding.setPressed` (handlers/ek.md:47-49).
remaining gaps:
- [S] "Block Clicks" is inert (registered, never read): its consumer is
  `asU(Lsixtwo/gB;)V`, the screen-click interception (handlers/ek.md:85-88).
  Our bus has no slot-click/screen-click event and the mixin set has no
  HandledScreen click hook — nontrivial framework addition (new event +
  cancellable mixin), recorded per policy instead of bolted on.
- [N] `asT(Lsixtwo/gH$th;)V`, `asU(Lsixtwo/gB;)V`, `asV()Z`,
  `asW(Lnet/minecraft/class_304;)V` VM-virtualized (trace: only asY/asZ/ata)
  → needs runtime trace. Which keybindings are simulated, the asU cancel
  predicate and the asV exact contract are unrecovered (handlers/ek.md:104-112).
- [U] `asW` per-KeyBinding bookkeeping collapsed into the mirror loop.
evidence: handlers/ek.md:24-59,77-99 vs src/main/java/dev/opengrim/modules/movement/InventoryMove.java:36,42-109

### ea — No Break Delay
post-fix parity: 90% | status: ported | fixed: no
fixed:
- Verified: "Destroy Delay" `cC .Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0).Vz(ENAXX)`
  (ea.java:37) ⇒ `DoubleSetting("destroy_delay", 1.0, 0.0, 10.0, 0.0, null)`
  (NoBreakDelay.java:37) — exact incl. default 0; suffix undecrypted → null.
- `ari(gH$th)` (ea.java:53-54) ⇒ onTick; the recovered
  MultiPlayerGameModeAccessor get/setDestroyDelay contract over
  `blockBreakingCooldown` (casesafe/handlers/ea.md:38-53,67-79) is implemented
  via reflection with yarn + **intermediary fallback** `field_3716`
  (NoBreakDelay.java:66-80; `field_3716` = `blockBreakingCooldown` verified in
  yarn-1.21.11+build.6.tiny).
remaining gaps:
- [N] `ari(Lsixtwo/gH$th;)V` body VM-virtualized (trace: only the ark/arl/arm
  decryptors entered) → needs runtime trace.
- [U] cap-vs-override direction and every-tick vs non-zero-only write
  (casesafe/handlers/ea.md:92-98); impl writes the slider value every tick
  (documented designer reading; 0 default zeroes the delay either way).
- [V] suffix `ENAXX` runtime-decrypted (ark), value unrecovered (left empty).
evidence: casesafe/handlers/ea.md:24-53,67-99 vs src/main/java/dev/opengrim/modules/world/NoBreakDelay.java:36-80

### eh — Auto Exp
post-fix parity: 85% | status: ported (documented reconstruction) | fixed: yes
fixed:
- **Bind wired**: the module was silently unbound. Registry row
  metadata.txt:90 `sixtwo.eh|Auto Exp|Throws exp bottles faster|key=25|bind=74`
  ⇒ `setBind(74)` added in the constructor (AutoExp.java:47); our KeybindManager
  consumes `getBind()` as the raw KEYSYM code (established repo convention).
- Spec citation corrected from the map's `handlers/eh.md` (sixtwo.eH Spear Dash
  twin — verified header) to `analysis/specs/casesafe/handlers/eh.md`.
- Verified: "Cooldown" `cA .UG(1.0).UE(0.0).UF(10.0).UI(0.0,0.0).UH(QZqXr)`
  (eh.java:33) ⇒ `DoubleSetting("cooldown", 1.0, 0.0, 10.0, 0.0, null)`;
  `mT.cpz()` timer (eh.java:34) ⇒ lastThrowAt; `asy(gH$th)` (eh.java:50-51) ⇒
  onTick; EXPERIENCE_BOTTLE gate (pool token field_8287).
remaining gaps:
- [N] `asy(Lsixtwo/gH$th;)V` VM-virtualized (trace: only asA/asB/asC/asD)
  → needs runtime trace; the slice has no use/throw tokens (casesafe/handlers/eh.md:90-99).
- [U] Throw mechanism and trigger source: bind 74's exact role (toggle vs hold)
  is unrecovered; the use-key poll + interactItem + swing is the documented
  designer stand-in. Cooldown unit (seconds vs ticks) unrecovered — impl reads
  seconds.
- [V] suffix `QZqXr` runtime-decrypted (left null).
evidence: casesafe/handlers/eh.md:24-52,66-99; metadata.txt:90 vs src/main/java/dev/opengrim/modules/utility/AutoExp.java:41-72

### eg — No Swing
post-fix parity: 85% | status: ported (documented reconstruction) | fixed: no
fixed:
- Verified: "Client" `.WE(true)` (eg.java:28) ⇒ `BoolSetting("client", true)`;
  "Both" `.WE(false)` (eg.java:29-40) ⇒ `BoolSetting("both", false)`; getters
  `ast()`/`asu()` (eg.java:50,52) ⇒ ast/asu (NoSwing.java:68-74); zero `@hG`
  handlers ✓ (config-only class, casesafe/handlers/eg.md:49-58).
- Gating matches the spec's name-derived reading: client-side swing reset gated
  on `client || both`; HandSwingC2SPacket cancel gated on `both` only.
remaining gaps:
- [G] high-probability guess: the "Both" C2S suppression point
  (PacketSendEvent cancel) is name-derived, NOT token-cited
  (casesafe/handlers/eg.md:66-75,112-119) — kept and labeled.
- [N] No behavior handler in eg — swing cancellation is a DLL patch outside the
  payload (casesafe/handlers/eg.md:49-64); the tick reset of
  handSwinging/handSwingTicks is a stack stand-in. VM-virtualized → needs
  runtime trace.
- [U] Whether extra hard gates exist (isUsingItem/isSneaking) cannot be ruled
  in or out (spec "Unrecovered" #1).
evidence: casesafe/handlers/eg.md:46-75,101-126 vs src/main/java/dev/opengrim/modules/utility/NoSwing.java:41-82

### dL — No Entity Clip
post-fix parity: 70% | status: partial | fixed: no
fixed:
- Verified: "Only With Pickaxe" `.WE(true)` (dL.java:40) ⇒
  `BoolSetting("only_with_pickaxe", true)` (NoEntityClip.java:49); pickaxe gate
  via `ItemStack.isIn(ItemTags.PICKAXES)` (pool: method_31573/field_42614) and
  OUTLINE raycast from `getCameraEntity` with `getBlockInteractionRange` reach
  (handlers/dL.md:73-82) mirrored; `anq(hh)` is dL's only listener (dL.java:50-51).
remaining gaps:
- [S] No `hh`-analogue in our bus: the original is purely reactive to the
  cancelable `hh(float)` query shared by dL + dW Freecam (handlers/dL.md:58-66);
  the producer is the native interaction patch, outside the decompiled payload.
  The tick-based mining loop (incl. RotationManager aim) is a designer stand-in.
- [N] `anq(Lsixtwo/hh;)V` VM-virtualized (trace: only ans/ant/anu entered)
  → needs runtime trace.
- [U] Meaning of `hh.bcA()`, cancel semantics, raycast order/roles
  (handlers/dL.md:124-138); rotation aim has no dL token (negative evidence).
evidence: handlers/dL.md:52-89,113-122 vs src/main/java/dev/opengrim/modules/world/NoEntityClip.java:49-123

### eY — Crystal Optimizer
post-fix parity: 65% | status: partial | fixed: partial
fixed:
- Reflection fallback added: `entityIdField()` now tries `"entityId"` then the
  intermediary `field_12870` (verified in yarn-1.21.11+build.6.tiny) — without
  it the packet id read is a silent no-op in a production (intermediary) run
  (CrystalOptimizer.java:152-166).
- Verified: zero settings (eY_.java:31-35 — only the DoubleAdder) ✓; C2S
  listener `aFE(gL$tj)` (eY_.java:48-49) ⇒ PacketSendEvent subscription (the
  recovered ServerboundInteractPacket entityId read is reflected); DoubleAdder
  ⇒ damage; `aFG()D` sum getter (eY_.java:53) ⇒ aFG().
remaining gaps:
- [G] high-probability guess: `stackDamage()` arithmetic over the proven inputs
  (STRENGTH/WEAKNESS amplifiers + ATTACK_DAMAGE + mainhand
  applyAttributeModifiers) — the actual formula is explicitly unrecovered
  (handlers/eY.md:90-92); kept and labeled.
- [N] `aFE(Lsixtwo/gL$tj;)V`, `aFF()Z`, `aFG()D`,
  `aFH(Lnet/minecraft/class_1799;)D`, `aFI(Lnet/minecraft/class_1511;)V`,
  `aFJ(Lnet/minecraft/class_6880;Lnet/minecraft/class_1322;)V` VM-virtualized
  (trace: clinit/init only) → needs runtime trace. The aFF gate + aFI
  crystal-step ("optimizer") logic is not ported beyond the accumulator.
- [U] Attack-selection/optimize decision and whether suboptimal attacks are
  cancelled (handlers/eY.md:101-112).
evidence: handlers/eY.md:19-75,77-112 vs src/main/java/dev/opengrim/modules/combat/CrystalOptimizer.java:49-166

### fi — Shield Block
post-fix parity: 70% | status: partial | fixed: no
fixed:
- Verified: zero settings (fi.java:33-37 — only the `ol` swap helper) ✓;
  `aJm(gM)` right-click interception + `aJn(gH$th)` frame hook (fi.java:46-50)
  collapsed into the use-key poll + onTick; component predicates mirrored from
  the recovered yarn surface: shield = `contains(DataComponentTypes.BLOCKS_ATTACKS)`,
  protected = CONSUMABLE/EQUIPPABLE/KINETIC_WEAPON, gate =
  `getUseAction() == UseAction.NONE` (casesafe/handlers/fi.md:14); `ol` helper
  shape (saved-slot latch init -1) ⇒ `savedSlot = NO_MEMBER_SLOT`
  (ShieldBlock.java:50-52,103-106).
remaining gaps:
- [U] `gM` event phase (press/use-start/while-held), restore condition
  (released/completed/timeout), slot picker and the aJo/aJp/aJw split
  (casesafe/handlers/fi.md:33-40) — impl restores on use-key release
  (documented designer reading).
- [N] `aJm(Lsixtwo/gM;)V`, `aJn(Lsixtwo/gH$th;)V`, `aJq()Z`, `aJr(ItemStack)Z`,
  `aJs(ItemStack)Z`, `aJt(ItemStack,Item)Z`, `aJu(ItemStack,BlockItem,BlockHitResult)Z`,
  `aJv(ItemStack,Item)Z`, `aJo()V`, `aJp()V`, `aJw()V` VM-virtualized (trace:
  clinit/init only) → needs runtime trace; our bus has no gM analogue.
- [U] No restore-on-disable: the `YO()V` override exists in the original
  (fi.java:72-73) but its role is unrecovered ("lifecycle"; casesafe/handlers/fi.md:20)
  — left unimplemented per policy.
evidence: casesafe/handlers/fi.md:10-40 vs src/main/java/dev/opengrim/modules/combat/ShieldBlock.java:49-117

### ed — Custom Camera Distance
post-fix parity: 85% | status: ported (documented reconstruction) | fixed: partial
fixed:
- Reflection fallback added: `cameraPosField()` now tries `"pos"` then the
  intermediary `field_18712` (verified in yarn-1.21.11+build.6.tiny; CameraMixin
  exposes the Camera object but no setter) — without it the module is a silent
  no-op in a production (intermediary) run (CustomCameraDistance.java:118-132).
- Verified: "Distance" `cC .Vy(1.0).Vw(4.0).Vx(100.0).VA(4.0).Vz(XgLBB)`
  (ed.java:31) ⇒ `DoubleSetting("distance", 1.0, 4.0, 100.0, 4.0, null)`;
  "No Clip" `.WE(false)` (ed.java:40) ⇒ `BoolSetting("no_clip", false)`;
  getters arB/arC (ed.java:51,53) ⇒ getDistance/isNoClip; zero `@hG` listeners
  and the aaj() on-enable hook (ed.java:48-49) ✓.
remaining gaps:
- [G] high-probability guess: the camera application itself (CameraUpdateEvent
  handler + visual-shape clip ray) — ed's window holds no camera API token and
  no listener (handlers/ed.md:96-101); kept labeled. First-person handling
  unrecovered — impl only touches the detached camera.
- [N] `aaj()V` VM-virtualized (trace: only arE/arF/arG/arH) → needs runtime
  trace.
- [V] suffix `XgLBB` undecrypted (left null).
evidence: handlers/ed.md:47-94,96-110 vs src/main/java/dev/opengrim/modules/render/CustomCameraDistance.java:47-142

---

## Compile

`.\gradlew.bat compileJava -q --offline` from the repo root → exit 0 (clean).

## Changed files

- `src/main/java/dev/opengrim/modules/utility/AutoExp.java` — `setBind(74)`
  (registry bind, metadata.txt:90) + corrected spec citation (casesafe twin).
- `src/main/java/dev/opengrim/modules/movement/SafeWalk.java` — corrected spec
  citation (casesafe twin).
- `src/main/java/dev/opengrim/modules/combat/CrystalOptimizer.java` — packet
  entityId reflection gains the intermediary fallback `field_12870`.
- `src/main/java/dev/opengrim/modules/render/CustomCameraDistance.java` — Camera
  pos reflection gains the intermediary fallback `field_18712`.
