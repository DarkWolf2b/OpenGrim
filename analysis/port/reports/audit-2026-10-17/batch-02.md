# Batch 02 audit report — 2026-10-17 (final)

Modules: eM (Double Tap), el (Water Speed), ej (Air Stuck), ec (Ghost Hand),
en (Anti Ghost), ep (Super Firework), eA (Strafe), fO (Discord Activity),
dN (Slot Lock), fU (Middle Click Friend).

All ten are j2cc-native-blocked classes; every behavior body lives in the
obfuscation VM. Parity is therefore scored against the **recovered surface** =
registry rows + declared-class-verified decompiled constructors/listeners +
handler-spec pool-token runs (`analysis/specs/casesafe/handlers/*`,
`analysis/specs/handlers/{el,eA}.md`). [N] items are excluded from the
denominator and listed per module instead.

Method note: every decompiled file consulted was verified by its declared
`class <id>` line (Windows case-collisions). `win/trace.jsonl` was probed per
module: behavior methods entered the trace only for `sixtwo.ep` (atY, 36×,
boot-time constant decryption) and `sixtwo.fO` (aaj/aWj at boot); all other
behavior handlers never ran at HUD idle (load/clinit only) — no additional
runtime evidence available for them.

## Case-twin landmine (report to orchestrator)

`analysis/specs/handlers/<id>.md` in `source-map.tsv` is a case-collapsed
**wrong twin** for 8 of the 10 ids (only `el` and `eA` are correct). Verified
against the first `public class` line of each file:

| source-map handlerSpec | actually documents | correct spec used |
|---|---|---|
| `handlers/eM.md` | sixtwo.**em** High Jump | `analysis/specs/casesafe/handlers/eM_.md` |
| `handlers/ep.md` | sixtwo.**eP** Mace Aura | `analysis/specs/casesafe/handlers/ep.md` |
| `handlers/ej.md` | sixtwo.**eJ** Auto Trap | `analysis/specs/casesafe/handlers/ej.md` |
| `handlers/ec.md` | sixtwo.**eC** Sprint | `analysis/specs/casesafe/handlers/ec.md` |
| `handlers/en.md` | sixtwo.**eN** Mace Swap | `analysis/specs/casesafe/handlers/en.md` |
| `handlers/fO.md` | sixtwo.**fo** Anti Bot | `analysis/specs/casesafe/handlers/fO_.md` |
| `handlers/dN.md` | sixtwo.**dn** Firework Spots | `analysis/specs/casesafe/handlers/dN_.md` |
| `handlers/fU.md` | sixtwo.**fu** Criticals | `analysis/specs/casesafe/handlers/fU_.md` |

Decompile paths that **lie on this checkout** (declared class ≠ path id) and
were replaced in all impl javadocs with declared-class-verified paths:

- `payload-named{,-cfr}/sixtwo/eM.java`, `payload-decrypted/sixtwo/eM.java` → declare `em` (use `casesafe/payload-named-cfr/sixtwo/eM_.java`)
- `payload-named{,-cfr}/sixtwo/ej.java`, `payload-decrypted/sixtwo/ej.java` → declare `eJ` (use `casesafe/payload-named-cfr/sixtwo/ej.java`)
- `payload-named{,-cfr}/sixtwo/ec.java`, `payload-decrypted/sixtwo/ec.java` → declare `eC` (use `casesafe/payload-named-cfr/sixtwo/ec.java`)
- `payload-named{,-cfr}/sixtwo/en.java`, `payload-decrypted/sixtwo/en.java` → declare `eN` (use `casesafe/payload-decrypted/sixtwo/en.java`)
- `payload-named{,-cfr}/sixtwo/eA.java`, `payload-decrypted/sixtwo/eA.java` → declare `ea` (use `casesafe/payload-decrypted/sixtwo/eA_.java`)
- `payload-named/sixtwo/dN.java`, `payload-named-cfr/sixtwo/dN.java`, `payload-decrypted/sixtwo/dN.java` → declare `dn` (use `casesafe/payload-decrypted/sixtwo/dN_.java`)
- `payload-named/sixtwo/fU.java`, `payload-named-cfr/sixtwo/fU.java`, `payload-decrypted/sixtwo/fU.java` → declare `fu` (use `casesafe/payload-named-cfr/sixtwo/fU_.java`)
- `payload-decrypted/sixtwo/fO.java` and `casesafe/payload-named-cfr/sixtwo/fO.java` → declare `fo` (use `payload-named/sixtwo/fO.java`)

Genuine (verified) exceptions where un-prefixed files are correct:
`payload-decrypted/sixtwo/el.java` (class `el`), all three `sixtwo/ep.java`
variants (class `ep`), `payload-named{,-cfr}/sixtwo/fO.java` (class `fO`).

Registry rows verified verbatim from `analysis/jars/bootstrap-raw/offline/features/metadata.txt`:
eM key=121, eA key=35, el key=134, ep key=113, ej key=43 **bind=86** (line 71),
en key=46, dN key=64, ec key=75, fO key=104, fU key=107, all other binds −999.

---

### eM — Double Tap
post-fix parity: 85% | status: partial | fixed: yes
fixed:
- HIGH-priority attack listener present: `@Subscribe(priority = 1)` on
  `onAttackEntity` (DoubleTap.java:48-49) ↔ `@hG(priority=mw.HIGH)` on
  `aAY(hw$tv)` (casesafe/payload-named-cfr/sixtwo/eM_.java:37); our
  `EventBus#post` sorts descending priority, so it runs before NORMAL(0) handlers.
- Javadoc citation repaired: it cited `payload-named-cfr/sixtwo/eM.java:9-12`,
  which declares `sixtwo.em` (High Jump) — now cites
  `casesafe/payload-named-cfr/sixtwo/eM_.java:24-28` (ctor, id 121,
  `Zrjec = mT.cpz()`), `:37-38` aAY, `:40-41` aAZ (DoubleTap.java:19-26).
- Verified: zero settings constructed (eM_.java:24-28); category `gh.xwjCw`
  (Combat) and `boolean XOnBS` + `mT Zrjec` state shape ↔ `phase` /
  `phaseStartMs` (DoubleTap.java:32-33,63-65); combo re-attack goes through the
  same shared mace-cluster helper as MaceAura (`TriggerBot.attack`,
  DoubleTap.java:92 = MaceAura.java:105) ↔ the eQ attack pipeline in eM's run.
remaining gaps:
- [U] Combo decision logic + all timings (trigger gates, wind-charge launch →
  mace hit, 1500 ms window, 5.0-block scan): fully VM-resident; impl values are
  designer reconstruction (spec "Unrecovered" §1-2).
- [U] Whether `aAY` cancels the original attack (`hw$tv.dpt()` flag) — no
  cancel-flag token in the run.
- [N] `aAY(Lsixtwo/hw$tv;)V` (attack listener) and `aAZ(Lsixtwo/gH$th;)V`
  (tick listener) — VM-virtualized → needs runtime trace;
  `analysis/ghidra/handlers-full-annotated/sixtwo_eM.c` is BLOB_DECRYPTOR +
  indirect-jump wrappers only; `win/trace.jsonl` has load/clinit for
  `sixtwo/eM` but zero behavior enters.
- [N] `eP.aBU()`/`LuzRg` shared int[] config semantics (no eM rows in
  `analysis/decrypted/full-dump.jsonl`).
- [U] Attribution of eN's settings tokens inside eM's window (shared cluster).
evidence: casesafe/handlers/eM_.md:1-81, casesafe/payload-named-cfr/sixtwo/eM_.java:16-44 vs src/main/java/dev/opengrim/modules/combat/DoubleTap.java:31-109

### el — Water Speed
post-fix parity: 90% | status: ported (documented reconstruction) | fixed: no
fixed:
- No code change warranted. Verified zero settings (payload-decrypted/sixtwo/el.java:16-19
  constructs none); one `atb(gH$th)` tick listener ↔ onTick
  (WaterSpeed.java:38-69); every pool-proven read/write present:
  EquipmentSlot.FEET boots Depth Strider test via the `jh.bCg(ItemStack,
  RegistryKey<Enchantment>)` boolean contract (WaterSpeed.java:77-90),
  `hasStatusEffect(SPEED)` (WaterSpeed.java:55-57), relative block probes +
  IceBlock compare (WaterSpeed.java:92-99), getVelocity→setVelocity
  read-modify-write with the 3-arg setter (WaterSpeed.java:58-67); no packets,
  no rotations (negative pool evidence).
- Citation audit: `analysis/decompiled/payload-decrypted/sixtwo/el.java:10-43`
  declares `class el` (verified); `analysis/specs/handlers/el.md` is genuinely
  Water Speed — both were already correct.
remaining gaps:
- [U] All motion math (multiplier form/axes, Depth Strider gating-vs-scaling,
  Speed-effect amplifies-vs-suppresses, probe geometry): VM-resident; the impl
  constants (1.25 base, +0.2/+0.15/+0.1, 0.4 clamp) are unrecoverable-value
  placeholders (spec "Explicitly not guessed").
- [U] Roles of private VM subroutines `atc()`/`atd()` (impl keeps empty
  mirrors at el.java:26/39 positions).
- [N] `atb(Lsixtwo/gH$th;)V`, `atc()V`, `atd()V` — VM-virtualized → needs
  runtime trace; `analysis/specs/handlers/el.md:22` documents the corpus as
  decrypt + indirect jump only; trace: load only at HUD idle.
evidence: analysis/specs/handlers/el.md:32-56,77-107,121-133 vs src/main/java/dev/opengrim/modules/movement/WaterSpeed.java:32-100

### ej — Air Stuck
post-fix parity: 85% | status: partial | fixed: yes
fixed:
- Registry bind enforced: `setBind(86)` (AirStuck.java:35) ↔
  `metadata.txt:71 sixtwo.ej|Air Stuck|Freezes all movement|key=43|bind=86`.
- Freeze primitive shape matches the fully recovered `iV.bxl(ov)`
  (iV.java:106-117): `PlayerMoveC2SPacket.Full` with the pinned X/Y/Z +
  rotation + real `isOnGround()`/`horizontalCollision` flags
  (AirStuck.java:65-71); rotations routed through our RotationManager.
- Citation repair: impl previously cited bare `ej.java:24-28` / twin-prone
  names; now cites declared-class-verified
  `casesafe/payload-named-cfr/sixtwo/ej.java:24-28,35-42` and flags that the
  un-prefixed payload trees declare `sixtwo.eJ` (Auto Trap).
- Verified: zero settings (ej.java:24-28); `mT.cpz()` timer field ↔ captured
  state (AirStuck.java:39-43).
remaining gaps:
- [U] Freeze-loop structure: which of `asP(gM)`/`asR(hc)` runs per tick vs per
  action, and whether the empty cancelable shells are canceled or observed.
- [S, blocked] Our bus has no `gM`/`hc`/`hv` equivalents (no movement-
  notification or damage events in dev.opengrim.event.impl) — the three
  original listeners are collapsed into onTick; needs a framework event set.
- [U] The `ov` rotation fed to `iV.bxl` (current vs canned iV constant);
  local-side pinning (setPos/velocity/fallDistance) is reconstruction.
- [U] `asQ(hv)` damage-event role (unstuck/cancel/track) — unknown.
- [N] `asP(Lsixtwo/gM;)V`, `asQ(Lsixtwo/hv;)V`, `asR(Lsixtwo/hc;)V` —
  VM-virtualized → needs runtime trace; `casesafe/handlers/ej.md` evidence is
  the stitched wrapper corpus; trace: load only.
evidence: casesafe/handlers/ej.md:17-118,120-135 + payload-named/sixtwo/iV.java:106-117 vs src/main/java/dev/opengrim/modules/movement/AirStuck.java:29-73

### ec — Ghost Hand
post-fix parity: 85% | status: partial | fixed: partial
fixed:
- Citation repair: impl cited un-prefixed `payload-named-cfr/sixtwo/ec.java` and
  `payload-decrypted/sixtwo/ec.java`, which both declare `sixtwo.eC` (Sprint)
  on this checkout — now cites declared-class-verified
  `casesafe/payload-named-cfr/sixtwo/ec.java:19-43`.
- Verified no swing is emitted after `interactBlock` (GhostHand.java:81-84) —
  matches negative evidence: no swing token in the own run POOL[0xc311,0x76)
  nor the attributed interaction cluster.
- Verified the recovered pipeline in the impl: yaw/pitch → `Math.toRadians` →
  `Vec3d.rotateX/rotateY` (GhostHand.java:107-112), origin
  `getCameraPosVec(1.0F)` (GhostHand.java:88), `multiply` reach scaling
  (GhostHand.java:90-94), `hasBlockEntity()` candidate filter
  (GhostHand.java:96), fabricated `BlockHitResult(center, Direction.UP,
  pos, false)` (GhostHand.java:84), `interactBlock` (GhostHand.java:83);
  `Set<BlockPos> SRuur` dedupe (GhostHand.java:49,76).
remaining gaps:
- [U] Through-wall target selection, reach constant (impl 4.5 + 0.25 step is
  reconstruction), `SRuur` insert/clear lifecycle.
- [U] `isInSneakingPose` (method_18276) gate direction — unproven; impl
  instead gates on the use key held (no useKey token exists in the run, so
  this trigger is a designer choice).
- [S, blocked] `Hand` for `interactBlock` (no class_1268 token) — MAIN_HAND
  constant used.
- [N] `arz(Lsixtwo/gH$th;)V` (whole behavior) — VM-virtualized → needs runtime
  trace; corpus is Ghidra stitched wrappers; trace: load only.
evidence: casesafe/handlers/ec.md:16-41,45-49,63-73 vs src/main/java/dev/opengrim/modules/world/GhostHand.java:46-113

### en — Anti Ghost
post-fix parity: 85% | status: partial | fixed: partial
fixed:
- Citation repair: impl cited `payload-decrypted/sixtwo/en.java`, which declares
  `sixtwo.eN` (Mace Swap) — now cites declared-class-verified
  `casesafe/payload-decrypted/sixtwo/en.java:20-43`.
- Verified recovered token set present in impl: ABORT_DESTROY_BLOCK packet via
  `new PlayerActionC2SPacket(Action, BlockPos, Direction)`
  (AntiGhost.java:102-103 ↔ casesafe/handlers/en.md token table
  class_2846/field_12971/ctor desc), `fallDistance` gate
  (AntiGhost.java:92 ↔ field_6017), `ShulkerBoxBlockEntity.getAnimationProgress`
  gate (AntiGhost.java:97 ↔ method_11312), `mT.cpA()` no-reset debounce
  semantics ↔ `lastActionMs = 0` on enable (AntiGhost.java:50).
- Verified zero settings (en.java:20-24) and category `gh.xgeEn` Movement.
remaining gaps:
- [U] Trigger/structure: original declares **zero @hG handlers** — behavior is
  driven from the virtualized `aaj()` enable hook + private native `atp()`;
  impl's per-tick breaking-tracker (currentBreakingPos reflection, 2-tick
  idle, 50 ms debounce) is reconstruction (spec "Unrecovered" §1, §4-5).
- [U] Gate directions of fallDistance / shulker animation are unproven
  readings of the two en-only tokens.
- [S, blocked] Sequenced send path `jd.bAo(SequencedPacketCreator)` sits in the
  en/eo-shared tail; no ClientLevel accessor mixin exists in our repo — impl
  sends the ABORT packet directly (spec says the choice is unrecovered).
- [N] `aaj()V` (enable override) and `atp()V` (private helper) —
  VM-virtualized → needs runtime trace; handlers-stitched/sixtwo_en.c wrappers;
  trace: en/aaj never entered at HUD idle.
evidence: casesafe/handlers/en.md:56-128 vs src/main/java/dev/opengrim/modules/world/AntiGhost.java:37-119

### ep — Super Firework
post-fix parity: 90% | status: ported (documented reconstruction) | fixed: partial
fixed:
- Setting verified exact against the fully decrypted constructor and
  `analysis/decrypted/full-dump.jsonl` (`sixtwo.ep` aua entries:
  66,111,111,115,116,32,86,97,108,117,101 = "Boost Value"):
  `.Vy(0.01).Vw(1.5).Vx(3.0).VA(1.5)`, no `.Vz` suffix
  (payload-decrypted/sixtwo/ep.java:20-32) ↔
  `DoubleSetting("boost_value", 0.01, 1.5, 3.0, 1.5, null)`
  (SuperFirework.java:41-42) — step/min/max/default exact; public getter
  `atX() → cC` ↔ `getBoostValue()` (SuperFirework.java:127-129).
- Javadoc line-range corrected (`ep.java:27-33` → `:20-32`).
- Verified: id 113, category `gh.xgeEn`, bind −999, zero @hG listeners in
  Java (config-only shape; trigger arming is the reconstruction).
remaining gaps:
- [U] Trigger event (packet vs use-key vs tick) and boost math (multiplier vs
  minimum-speed clamp); 40-tick window + itemUseCooldown reflection are batch6
  reconstruction, not native evidence.
- [N] `atX()Lsixtwo/cC;` (getter body) and `atY(IJ)I` (VM engine entry; 36
  trace enters at boot are constant decryption) — VM-virtualized → needs
  runtime trace; `(IFF)V` descriptor owner at window head matches no member.
evidence: casesafe/handlers/ep.md:36-111 + full-dump.jsonl sixtwo.ep rows vs src/main/java/dev/opengrim/modules/movement/SuperFirework.java:38-134

### eA — Strafe
post-fix parity: 85% | status: partial | fixed: partial
fixed:
- Citation repair: impl cited `analysis/decompiled/payload-decrypted/sixtwo/eA.java`,
  which declares `sixtwo.ea` (No Break Delay) — now cites
  `casesafe/payload-decrypted/sixtwo/eA_.java` + named-cfr twin note.
- Setting verified exact: "Speed" `.Vy(0.05).Vw(0.25).Vx(2.0).VA(0.25)`
  (eA spec "Settings→behavior", full-dump.jsonl:10392-10397 → 83,112,101,101,100)
  ↔ `DoubleSetting("speed", 0.05, 0.25, 2.0, 0.25, null)` (Strafe.java:39).
- Verified id 35, `gh.xgeEn` Movement, bind −999, single NORMAL tick handler
  ↔ onTick (Strafe.java:46); the run's ONLY MC surfaces are present in spirit:
  `sixtwo/eC` (Sprint) reference ↔ `ModuleManager.get().byId("sprint")` +
  `setSprinting` (Strafe.java:61-64, verified resolvable); no outgoing packets
  (PlayerMoveC2SPacket tokens in the window belong to eB Flight's run).
remaining gaps:
- [U] The entire arithmetic of `avm` (which Vec3d, where Speed enters,
  ground/air branching, camera alignment): VM-resident; impl's water/lava/
  climb/on-ground gates and camera-yaw re-derivation are reconstruction.
- [U] `sixtwo.eC` interaction form (read state vs force sprint) and how
  `uYjwj` is read inside the VM.
- [S, blocked] `Entity.updateVelocity(F, Vec3d)` and
  `LivingEntity.forwardSpeed`/`sidewaysSpeed` are not on our stack surface;
  impl approximates via getVelocity/setVelocity (stack-required wiring).
- [N] `avm(Lsixtwo/gH$th;)V` (whole behavior) — VM-virtualized → needs runtime
  trace; corpus handlers-full/sixtwo_eA.c is decrypt+indirect-jump; trace:
  load only.
evidence: analysis/specs/handlers/eA.md:23-38,71-82,84-88 vs src/main/java/dev/opengrim/modules/movement/Strafe.java:38-81

### fO — Discord Activity
post-fix parity: 75% | status: partial | fixed: yes
fixed:
- Boot-enabled flag enforced: `bootEnabled()` override
  (DiscordActivity.java:48-50) ↔ `super(gf.aZL((int)JLbAF, true, gh.KfAlY))`
  (payload-named/sixtwo/fO.java:21); applied by OpenGrimClient.java:18-24
  before config load (a saved config still wins) — hook present in
  Module.java:91-93 (default false).
- Runtime trace confirms the recovered enable path: `fO.aaj` →
  `fO.aWj` → `qq.cXG(J, Runnable)Z` returning 0 (win/trace.jsonl:8411253,
  8411409, 8413216, 8419210) — our onEnable→push and per-tick cadence map the
  worker to the scheduler-driven publish (stack adaptation).
- Citation repair: impl cited `casesafe/payload-named-cfr/sixtwo/fO.java`,
  which declares `sixtwo.fo` (Anti Bot) — now cites declared-class-verified
  `payload-named/sixtwo/fO.java:19-22,29-30,40,46-47`.
- Verified: zero settings ("Settings: None"), enable/disable overrides
  (DiscordActivity.java:53-64), Instant epoch seconds timestamps
  (DiscordActivity.java:52,60,76), static DTO publication state shape.
remaining gaps:
- [N] `aWj()V` (activity build/publish worker) and `aaj()V`/`YO()V` overrides —
  VM-virtualized → needs runtime trace; handlers-full/sixtwo_fO.c wrappers;
  trace shows the enable-side call shape only.
- [N] HTTP transport layer: `ry` POSTs the `qn` DTO to a remote endpoint whose
  URL is a DES-encrypted literal — unrecovered; impl performs no network I/O
  (recorded, no invented URL).
- [U] `qn` setter→semantic-field mapping; whether aWj runs per change, per
  interval, or both; `dkI()I`/`dkJ()` response semantics.
evidence: casesafe/handlers/fO_.md:55-119 + win/trace.jsonl:8411253-8419212 vs src/main/java/dev/opengrim/modules/utility/DiscordActivity.java:30-92

### dN — Slot Lock
post-fix parity: 75% | status: partial | fixed: partial
fixed:
- Citation repair: impl cited `payload-decrypted/sixtwo/dN.java` and
  `payload-named-cfr/sixtwo/dN.java`, which declare `sixtwo.dn` (Firework
  Spots) — now cites declared-class-verified
  `casesafe/payload-decrypted/sixtwo/dN_.java:19-36` and
  `casesafe/payload-named-cfr/sixtwo/dN_.java:43-52`.
- Verified recovered surface in the impl: "Locked Slots" name
  (chars 76,111,99,107,101,100,32,83,108,111,116,115, dN_.java:22-34) ↔
  `GroupSetting("locked_slots")` + 9 slot toggles (SlotLock.java:39-47);
  hotbar size via `PlayerInventory.getHotbarSize()` (SlotLock.java:40 ↔
  method_7368); drop-key contract: selected-slot suppression
  (SlotLock.java:54-63 ↔ `gz.bbK(KeyBinding.dropKey)`/field_1869) plus
  in-world DROP* packet cancel and inventory-screen THROW clicks for hotbar
  slots 36-44 (SlotLock.java:70-97 ↔ InventoryScreen/HandledScreen tokens).
remaining gaps:
- [S, blocked] The recovered setting is a `cz` action ("name only, no builder
  args", spec "Settings→behavior mapping") opening a slot-picker overlay; our
  settings API has no action primitive, so it maps to a Group of 9 BoolSettings
  (same documented translation as ItemFrameBlocker's cz). Needs a framework
  addition to be 1:1.
- [U] Drop-path branch structure (Q / ctrl-Q whole-stack / screen paths) and
  the `ItemStack.copy()` snapshot's purpose.
- [U] Picker-UI opening (sixtwo/lC click GUI) and shared-tail attribution
  (tokens after sixtwo/dO).
- [N] `aon(Lsixtwo/gz;)V` (the only behavior entry) — key-input handler,
  VM-virtualized → needs runtime trace; handlers-stitched/sixtwo_dN.c wrapper;
  our bus has no key-input event, so the impl suppresses via tick + packet
  cancel (stack adaptation).
evidence: casesafe/handlers/dN_.md:51-120,121-135 vs src/main/java/dev/opengrim/modules/utility/SlotLock.java:38-109

### fU — Middle Click Friend
post-fix parity: 85% | status: partial | fixed: yes
fixed:
- **Friend-store integration fixed**: the add/remove now writes the shared
  `dev.opengrim.util.FriendsManager` (MiddleClickFriend.java:81-87) and
  `friends()`/`isFriend()` delegate to it (MiddleClickFriend.java:95-101) —
  the original's `String[] KrrAc/qvWvL` statics are the store consumed by dm
  Friend Indicator and the other friend-aware modules
  (casesafe/handlers/fU_.md "Consumers", "Runtime model"). Previously the
  module kept a private set: no consumer (FriendIndicator/EntityEsp/Arrows/
  KillAura/…, all on FriendsManager) could see middle-click friends. NameProtect
  (NameProtect.java:135-136) still resolves via `MiddleClickFriend.friends()`.
- Citation repair: stale absolute temp-dir spec path replaced with
  `analysis/specs/casesafe/handlers/fU_.md`; source now cites
  `casesafe/payload-named-cfr/sixtwo/fU_.java:18-51` and flags that the
  un-prefixed fU.java files declare `sixtwo.fu` (Criticals).
- Verified: zero settings (fU_.java:27-30), id 107, `gh.KfAlY`, bind −999;
  middle-click → player identity → toggle + notification flow shape
  (MiddleClickFriend.java:53-88).
remaining gaps:
- [S, blocked] The `gy` middle-click/pick event has no equivalent on our event
  bus; the impl polls GLFW middle-button edge + `crosshairTarget`
  EntityHitResult (registry-description-true, mechanics approximated).
- [U] Add-vs-remove trigger logic (single click? repeat? sneak+click?) —
  `aXP(gy)` body virtualized; toggle is the natural reading (designer choice).
- [U] Notification channel: original builds `qu`/`qt` notifications;
  chat `addMessage` is the repo convention (no notification primitive).
- [N] `aXP(Lsixtwo/gy;)V` (the whole behavior) — VM-virtualized → needs runtime
  trace; string kernels aXR/aXS; trace: load only.
evidence: casesafe/handlers/fU_.md:29-64,66-108 vs src/main/java/dev/opengrim/modules/utility/MiddleClickFriend.java:43-102

---

## Compile result

- Baseline `.\gradlew.bat compileJava -q --offline` (before edits): **PASS** (exit 0).
- One intermediate **FAIL** during this pass: a `*/` inside javadoc text
  ("payload-*/sixtwo/…") terminated three comment blocks
  (AirStuck/Strafe/MiddleClickFriend) — reworded; final run **PASS** (exit 0),
  no errors from any batch-02 file.

## Changed files (this pass)

- `src/main/java/dev/opengrim/modules/combat/DoubleTap.java` — javadoc citations → declared-class-verified eM_.java; twin warning (eM.java declares em)
- `src/main/java/dev/opengrim/modules/movement/AirStuck.java` — javadoc citations → casesafe ej.java; twin warning
- `src/main/java/dev/opengrim/modules/movement/Strafe.java` — javadoc citations → casesafe eA_.java; twin warning
- `src/main/java/dev/opengrim/modules/movement/SuperFirework.java` — javadoc line-range fix (ep.java:20-32)
- `src/main/java/dev/opengrim/modules/world/GhostHand.java` — javadoc citations → casesafe ec.java; twin warning
- `src/main/java/dev/opengrim/modules/world/AntiGhost.java` — javadoc citations → casesafe en.java; twin warning
- `src/main/java/dev/opengrim/modules/utility/DiscordActivity.java` — javadoc citations → payload-named fO.java; twin warning
- `src/main/java/dev/opengrim/modules/utility/SlotLock.java` — javadoc citations → casesafe dN_.java; twin warning
- `src/main/java/dev/opengrim/modules/utility/MiddleClickFriend.java` — **behavioral**: friend store retargeted to shared `FriendsManager` (drop private set); javadoc citations/temp-path fix
- (Already landed earlier in this audit and re-verified here: `@Subscribe(priority = 1)` DoubleTap.java:48; `setBind(86)` AirStuck.java:35; no-swing GhostHand.java:81-84; `bootEnabled()` DiscordActivity.java:48 + `Module.bootEnabled()` + `OpenGrimClient.java:18-24`.)
