# Batch 7 audit — fy, fE, fD, ei, dW, dF, eI, ey, dZ, eZ (2026-10-17)

Batch: `analysis/specs/audit20261017/batch7.txt` (10 modules).
Method: per id, source-map `source` read with declared-class verification (collision
trap checked for every id; `dW.java` on disk holds class dW, `dZ.java` holds class dZ,
`eI.java` holds class eI — verified against the `class` declaration and the
`gf.aZL(id, …)` id), spec + handler spec + impl compared, trace evidence folded in.
Compile: `.\gradlew.bat compileJava -q --offline` → BUILD SUCCESSFUL (only a
documented deprecation note in Scaffold).

Repo-wide observations (not fixed here, reported for the orchestrator):

- **Original category constants do not partition the repo's categories.** Ground truth
  (javap on `jar-casesafe`): dW Freecam = `gh.qBzlZ` (repo RENDER), dF Lever Replace =
  `gh.qBzlZ` (repo WORLD), dZ Fast Place = `gh.qBzlZ` (repo WORLD), eI/eZ/fD/fE/fy =
  `gh.xwjCw`, ei/ey = `gh.xgeEn`. A full sweep (162 rows, source-map `source` + regex +
  javap spot checks) shows `qBzlZ` spans combat/movement/render/utility/world and
  `xwjCw` spans combat/movement/render/utility/world; only `KfAlY` (utility:11),
  `nOCvV` (render:36), `xgeEn` (movement:22) are near-consistent. The repo's 5
  categories are its own semantic assignment (ModuleCategory javadoc says so); the
  original's display names are unrecovered, so no per-module fix is warranted, but the
  GUI grouping is a structural divergence.
- **Out-of-batch bug spotted:** `modules/render/XRay.java:42` calls `setBind(96)` but
  registry `dk` has `bind=-999` (96 is the module id) — dk is not in this batch; flagging
  for whoever owns it. (dW's bind=71 in this batch was fixed.)
- Registry column semantics verified: `key=N` is the module id (`gf.aZL` first arg),
  `bind=M` is the default keybind (setBind convention: ElytraTarget 82, AirStuck 86,
  Interface 344 all match).

---

## fy — Totem Refill

post-fix parity: 60% | status: partial | fixed: partial (docs only)

fixed:
- Citation repair + honest gap list: source now cites declared-class-verified
  `payload-decrypted/sixtwo/fy.java:29-128` (ctor) and `:149-152` (aRK/aRJ); javadoc
  labels the reconstruction and the trace: `aRJ` ran 2× with no numeric exits
  (trace 2026-10-17: 173087948648-173104352216).
- Verified settings byte-exact (30% settings surface): Totem Item cK default
  TOTEM_OF_UNDYING (fy.java:43, neighbor fx/eZ single-option translation),
  Totem Slot step1/min1/max9/default1 " slot" (fy.java:55), Mode group
  Normal→Legit order (fy.java:56-95; ModeSetting order/default = first child),
  Replace Current Item false (fy.java:109), Delay step1/min0/max20/default0
  " ticks" (fy.java:110-126) — all ↔ TotemRefill.java:27-33.

remaining gaps:
- [N] `aRJ(gH$th)` (the only behavior entry) and `aRK()Item` — VM-internal
  (fy.md "Per-handler semantics": 121 continuation blocks, missing jump tables).
  Capture condition: refill a totem from inventory with a low/empty offhand while
  logging inventory interactions.
- [U] Refill trigger (count audit vs pop event), interaction mechanism
  (window clicks vs direct), Normal/Legit difference, Replace Current Item
  semantics, Delay-vs-`mT hSWnq` unit relation (fy.md "Unrecovered" #2-#6).
- [U] Totem Slot (destination hotbar slot, fy.md "Settings → behavior mapping")
  left unwired — the spec's inferred role is not proven; the impl's offhand
  refill path uses `Items.TOTEM_OF_UNDYING` directly.
evidence: payload-decrypted/sixtwo/fy.java:29-157; specs/modules/fy.md; specs/handlers/fy.md:23-73;
traces/2026-10-17/by-class-casesafe/fy.jsonl vs src/main/java/dev/opengrim/modules/combat/TotemRefill.java:24-92

## fE — No Miss

post-fix parity: 80% | status: partial | fixed: yes

fixed:
- **Settings tree rebuilt to the recovered fD–fH family shape** (was: three independent
  BoolSettings + an empty Slots group). Now mirrors the accepted fD port
  (UnchargeBlock): Items To Use ct radio pair emulation with All Items default and
  one-always-selected semantics (fE.java:53-95), Slots cz translated to nine hotbar
  toggles gated visible on Specified Slots via `zeyXv.Vf(this::aSO)` (fE.java:96,113),
  Ignore Friends `.WE(false)` (fE.java:112) — NoMiss.java:39-120.
- **Behavior gap closed:** `appliesToHeldItem` now implements the Specified Slots
  branch (`isSlotSelected(selected)`, mirroring sixtwo.cz#Uz as in UnchargeBlock) —
  previously the mode silently disabled the module (NoMiss.java:143-155).
- Attack-press pipeline kept and documented: miss test = crosshair not on a live
  entity within the family reach 3.0 (`ox.rnYFy = 3.0`, fE.md "Shared support
  classes"); Ignore Friends cancels when the aimed player is a friend (repo-wide
  friend convention: TriggerBot/TargetMargin/AimAssist) — labeled high-probability
  guesses in javadoc.

remaining gaps:
- [N] `aSN(gz)` (the only behavior entry, image 18aec8da0) — VM-virtualized; the
  exact miss test and the aSO slot-picker internals are unrecovered
  (handlers/fE.md "Unrecovered" #1/#3). Trace: load only (never enabled).
  Capture condition: swing at air/out-of-reach while logging the cancel.
- [G] default radio index 0 = All Items (no `.SY()` marker recovered; same
  assumption as fD/dD audits).
- [U] `cu` radio-vs-toggle semantics (fE.md #5) — repo convention applied.
evidence: payload-decrypted/sixtwo/fE.java:23-135; specs/handlers/fE.md:93-109; javap eY_/eI_ spot
checks; traces/2026-10-17/by-class-casesafe/fE_.jsonl vs src/main/java/dev/opengrim/modules/combat/NoMiss.java

## fD — Uncharge Block

post-fix parity: 85% | status: partial | fixed: partial (labels)

fixed:
- Verified settings byte-exact: Items To Use radio pair (fD_.java:53-95), Slots cz +
  `Fdfgt.Vf(this::aSI)` visibility (fD_.java:96,108), Threshold
  `.UG(0.01).UE(0.25).UF(1.0).UI(0.9,0.9)` → 0.01/0.25-1.0/0.9
  (UnchargeBlock.java:37) — all ↔ fD_.java:53-107.
- Javadoc now labels the two high-probability guesses per fD.md "Unrecovered" #1:
  the charge source (`getAttackCooldownProgress`) and the Only Weapons check
  (`DataComponentTypes.WEAPON`).

remaining gaps:
- [N] `aSH(gz)` (the only behavior entry, image 18aefa9c0) — VM-virtualized; exact
  charge source, filter evaluation and cancel path unrecovered (handlers/fD.md
  "Unrecovered" #1). Trace: load only. Capture condition: attack below 90 % charge.
- [G] default radio index 0 = All Items; Slots toggles default false (unrecovered).
- [U] `aSI()` picker internals (fD.md #3); `cu` radio-vs-toggle (#4).
evidence: casesafe/payload-decrypted/sixtwo/fD_.java:23-131; specs/handlers/fD.md:92-109 vs
src/main/java/dev/opengrim/modules/combat/UnchargeBlock.java

## ei — Scaffold

post-fix parity: 70% | status: partial | fixed: partial

fixed:
- **Citation repair:** the javadoc pointed at `analysis/specs/handlers/ei.md`, which
  declares sixtwo.**eI** (Spear Double Tap) — now cites the declared-class-verified
  source `casesafe/payload-decrypted/sixtwo/ei.java:25-126` and the Scaffold handler
  spec `analysis/specs/casesafe/handlers/ei.md`; stale `analysis/PARITY-DIVERGENCES.md`
  reference replaced with `analysis/docs/PARITY.md`.
- **1:1 support predicate:** `findSupportFace` now uses `BlockState.isSolid()` — the
  recovered `oC.cIf` call (oC.java via ei.md "Support enumeration") — instead of
  `isSolidBlock(world,pos)` (a different solidBlockPredicate); deprecation in yarn
  noted in the comment (Scaffold.java:98-115).
- Verified settings byte-exact: Hand To Use Main/Off/Both default first
  (ei.java:28-74), Hand Swing Client/Server (ei.java:75-104), Only When Crouching
  false (ei.java:105-125) — no numeric settings, no timers (ei.md "Settings").

remaining gaps:
- [U] Face sampling grid + counts N₁/N₂ (DES-encrypted, ei.md #4) → the impl clicks
  the support-face centre (legal under the recovered cId bounds [0.15,0.85],
  oC.java:501-539) instead of cIa best-pick look-ray scoring (oC.java:442-475).
- [U] cHY reach+raycast validation (oC.java:1137-1211) and cHU previous-target reuse
  (oC.java:793-905) not implemented; silent-aim submit (qL.dbI) not implemented.
- [U] `oU.Xrdom` already-planned guard (cHT step 2) / cIf second clause omitted —
  entry lifetime unrecovered (ei.md #11), module places 1 block/tick.
- [U] exact `asG` boolean formula (ei.md #2), Both-hands semantics (ei.md #8).
- [N] asJ()/asE(gv)/asF(gH$th) bodies — machine-code fragments traced, per-handler
  attribution soft (ei.md #1/#3). Trace: load only. Capture condition: bridge over a
  gap while logging the click point per placement.
evidence: casesafe/payload-decrypted/sixtwo/ei.java; specs/casesafe/handlers/ei.md:81-167 vs
src/main/java/dev/opengrim/modules/movement/Scaffold.java

## dW — Freecam

post-fix parity: 75% | status: partial | fixed: yes

fixed:
- **Bind wired:** `setBind(71)` from the registry (dW.md:4-7 "key 76, bind 71 — the
  only module in this batch with an active bind"); module id 76 ↔ `gf.aZL(76, …)`
  (dW.java:37). Previously -999.
- **Camera rotation applied:** the detached yaw/pitch (seeded on enable, tracked from
  the player while Rotate is on) are now written to the camera via the protected
  `Camera.setRotation(float,float)` reflection surface, alongside the existing
  `setPos` — the recovered `aqx(float) → ov` lerped camera rotation (dW.md "Public
  getters"); Freecam.java:95-100,120-140.
- Citation repair (payload-decrypted/sixtwo/dW.java:35-96/:103-194) + labels for the
  three high-probability guesses (Speed name, THIRD_PERSON_BACK perspective, movement
  basis) and the trace: aaj→aqn on enable, aqt ×2 per tick, aqk post-motion (14.5 µs),
  YO on disable (trace 2026-10-17: 167419925702-167464825881).

remaining gaps:
- [N] aql(gA) LOWEST input grab — the real player keeps moving; our bus has no
  pre-movement input event (dW.md "Event wiring").
- [U] kr spoof-player panel (`kw.bRK().bRN(true)`, ghost render of the real player)
  and Render Hand's render effect (dW.md "Unrecovered" #2, "Event wiring" aqs).
- [U] exact camera math (dW.md #1), 7 boolean latch roles (#3), aqp(hv) disable path
  approximated by `hurtTime > 0` polling (no damage event on our bus).
evidence: payload-decrypted/sixtwo/dW.java:12-194; specs/handlers/dW.md:45-123; registry.tsv:35;
traces/2026-10-17/by-class-casesafe/dW_.jsonl vs src/main/java/dev/opengrim/modules/render/Freecam.java

## dF — Lever Replace

post-fix parity: 70% | status: partial | fixed: yes

fixed:
- **Mode radio semantics:** Instant/Legit translated as a ct radio pair with
  one-always-selected (Instant default, first child) — same convention as the fD/fE
  sibling ports; previously two independent toggles could both be on or both off
  (LeverReplace.java:66-133). Labeled high-probability guess (radio-vs-toggle native,
  dF_.md "Unrecovered").
- **Use-key spoof release:** Instant presses the recovered useKey spoof
  (`field_1904` + `method_23481 setPressed`, dF_.md:32) and now releases it on the
  next tick / on disable — a held press would place continuously (LeverReplace.java:135-140,
  163-168,258-266). The release half is labeled a stack-required guess.
- Citation repair: spec now cites `casesafe/handlers/dF_.md` (the old
  `handlers/dF.md` path is the eF/… family directory); Allowed Items six-sword
  default verified (dF.java:81-89 ↔ LeverReplace.java:70-75,102-107); sign-screen
  guards kept (dF_.md:32 class_498/class_7744).
- Trace: ale(gH$th) ran 2×, YO 1× (366 µs cleanup); ald(gO$tm) never fired in the
  capture (trace 2026-10-17: 166672034787-166705986220).

remaining gaps:
- [N] ald(gO$tm) main handler + alf(Predicate) scanner + five item predicates —
  VM-internal (dF_.md:28-31,44). Capture condition: right-click-place a block at a
  broken lever while logging the slot switch.
- [U] Predicate→setting mapping (which of alg–all is Cobweb/Obsidian/Held
  Block/Allowed Items, dF_.md:44); mnITY slot-cache lifecycle (:47); trigger
  condition beyond the BLOCK crosshair gate (:46).
- [G] trigger = crosshair lever/button else nearest within 4 blocks; mining-then-place
  sequence (labeled in javadoc).
evidence: payload-decrypted/sixtwo/dF.java:31-167; specs/casesafe/handlers/dF_.md; traces dF_ vs
src/main/java/dev/opengrim/modules/world/LeverReplace.java

## eI — Spear Double Tap

post-fix parity: 65% | status: partial | fixed: partial

fixed:
- Citation repair: source now `payload-decrypted/sixtwo/eI.java:68-172` (declares class
  eI, id 150 — the un-prefixed `handlers/eI.md` file also holds this class's spec);
  settings ↔ eI.java:84 (Change Armor, no `.WE` → default off per eI.md), :105-141
  (Armor Change Timing group), :154 (Return Back true), :168 (Return Delay
  10/0-1000/50, suffix GGWXd unrecovered — " ms" labeled unproven), visibility wiring
  :170-171.
- Return Back made live: the previous slot is captured whenever a second hit is about
  to run and Return Back is on (was: only under Change Armor + Before Mace Hit, so the
  default-on toggle was dead); labeled a documented interpretation — the spec's
  "restore armor after the cycle" reading and the `ol` controller steps are
  unrecovered (SpearDoubleTap.java:109-116).

remaining gaps:
- [N] axZ(gH$th)/axX(gM)/axY(gL$tk) + aya/ayb steps — VM-virtualized (eI.md
  "Unrecovered"). Trace: none (module never enabled in the capture).
  Capture condition: land a spear hit then the mace follow-up while logging packet
  order and slot/armor changes.
- [U] `ol` armor/step controller not implemented (which steps run is unrecovered);
  exact hit timing/tick offsets; second-hit weapon handling (no mace token in the
  pool); Return Delay UI(50,100) randomized-range reading (impl uses fixed 50).
evidence: payload-decrypted/sixtwo/eI.java:11-183; specs/handlers/eI.md:10-54 vs
src/main/java/dev/opengrim/modules/combat/SpearDoubleTap.java

## ey — Blink

post-fix parity: 90% | status: partial | fixed: yes

fixed:
- Citation repair: the javadoc line numbers pointed at a different variant; now
  `payload-decrypted/sixtwo/ey.java` with verified ranges (ctor :39-142, settings
  :62/:63-75/:90/:104/:121/:133, visibility wiring :140-141, handlers :36-37/:154-155/
  :157/:159-160/:164-165/:167/:169-170/:149-150/:178-179) and the correct spec path
  `analysis/specs/casesafe/handlers/ey.md`.
- Removed the unreachable `LookAndOnGround` entry from `isControlPacket` — all
  `PlayerMoveC2SPacket` subtypes are already held by the motion check (ey.md
  "Packet queueing" #1: class_2828 + class_2831 near-certainly held), so the entry
  implied a pass-through that cannot happen.
- Overclaimed "parity: full / 1:1" replaced by the recovered contract + unrecovered
  list (queue-vs-pass-through assignment, cancel-key flush/revert, pulse cadence,
  `cN.XF` message, aaj/YO clear-vs-flush).
- Trace cross-check (strongest in the batch): avb (send) 6×, ava (receive) 32×,
  avc (tick) 6×, and **YO drained the held queue via avf ×6** (one re-send per held
  packet, 170999608658-170999740583) — matches the impl's hold-on-send /
  flush-on-disable model and the two default-17 windows.
- Settings verified byte-exact incl. both `.Vf` visibility gates (Pulse Packets under
  Pulse, Disable Packets under Auto Disable) and the cD Cancel Key −999 default.

remaining gaps:
- [N] ava/avb/avc/ave/avf bodies VM-internal (ey.md "Unrecovered" #1) — the queue
  math is inferred from pool + trace only.
- [U] per-class queue-vs-pass-through assignment (#2), cancel-key semantics (#5,
  impl = revert-then-disable), pulse cadence (#8), `cN.XF` message text (#6, not
  posted), aaj/YO clear-vs-flush (#10, impl clears/flushes).
evidence: payload-decrypted/sixtwo/ey.java:16-180; specs/casesafe/handlers/ey.md:48-115;
traces/2026-10-17/by-class-casesafe/ey.jsonl vs src/main/java/dev/opengrim/modules/movement/Blink.java

## dZ — Fast Place

post-fix parity: 85% | status: partial | fixed: yes

fixed:
- **Removed an invented visibility gate:** `slots.setVisible(onlyForSlots)` had no
  counterpart in the original — the only recovered predicate is
  `tfzyX.Vf(this.whhdh::WF)` (Valid Blocks under Only For Valid Blocks, dZ.java:160);
  the cz Slots picker is always visible (FastPlace.java:82).
- Citation repair: dropped the unverified `payload-named-cfr/sixtwo/dZ.java` cite
  (the on-disk `dZ.java` declares class dZ, id 62 — verified); suffix MCipD labeled
  unrecovered (dZ.md #2; null kept); Valid Blocks group documented as intentionally
  empty (jc.WnbNG native-built, unrecovered); Slots toggles' initial selection labeled
  unrecovered (left true).
- Verified mechanism 1:1: `Minecraft.field_1752 rightClickDelay` — yarn name
  `itemUseCooldown` confirmed in yarn-1.21.11+build.6 — written via the
  MinecraftAccessor get/setRightClickDelay pair (dZ.md "Pool surface"); reflection
  candidates verified (FastPlace.java:123-160).
- Trace: arc ×2, YO ×2; no use-event hits in the capture (dZ.jsonl:
  167563293669-167594623631).

remaining gaps:
- [N] arc(gH$th)/aqZ(gO$tm)/ara(gO$tl) bodies — VM-internal (dZ.md #1); the
  per-tick-vs-per-use write policy is a stack adaptation (tick clamp at END_CLIENT_TICK
  is one tick behind the vanilla delay check).
- [U] `class_1811 RangedWeaponItem` special case (#3), setMissTime/destroyDelay
  touches (#4), Only If You Can Place check method (#7 — impl uses a crosshair BLOCK
  hit, labeled [G]).
- [U] jc.WnbNG contents (Valid Blocks universe) — group left empty.
evidence: payload-decrypted/sixtwo/dZ.java:11-191; specs/handlers/dZ.md:24-95; traces dZ vs
src/main/java/dev/opengrim/modules/world/FastPlace.java

## eZ — Auto Double Hand

post-fix parity: 75% | status: partial | fixed: yes

fixed:
- **Totem Slot wired** per the spec's inferred role (eZ.md "Settings → behavior
  mapping"): with Totem On Inventory off the totem is taken from the fixed hotbar
  slot (1-9 → screen-handler 36-44); with it on, the whole inventory is searched
  (findFirst/orElse pipeline token evidence). Previously the setting was dead and the
  off-case scanned the whole hotbar (AutoDoubleHand.java:157-172).
- **Pop status constant guarded** — `EntityStatuses.USE_TOTEM_OF_UNDYING` (35):
  previously any entity status on the local player set the pop latch (false positives
  on hurt/death statuses). Labeled a high-probability guess per eZ.md "Unrecovered" #1
  (the compared constant is VM-internal).
- Citation repair (payload-decrypted/sixtwo/eZ.java:29-151/:160-184) + labels for the
  crystal/sword prediction formulas (eZ.md #3/#6; aFV always-true accept noted) and
  the two-tick PICKUP swap adaptation (eZ.md #2 equip action unrecovered); Totem Slot
  suffix AMrtH labeled unrecovered (null kept).
- Settings verified byte-exact (all 7 incl. defaults true/true/true/false/false and
  Totem Slot 1.0/1.0-9.0/1.0).

remaining gaps:
- [N] aFL(gH$th)/aFN(gL$tk) + aFO/aFP steps + aFQ/aFR predicates — VM-virtualized
  (eZ.md "Per-handler semantics"). Trace: load only. Capture condition: take a totem
  pop with Double Hand After Pop on while logging the swap.
- [G] prediction formulas (8-block crystal vanish latch, 6-block looking-player test).
- [U] jj.bCL/jj.bBt semantics (eZ.md #4), Cetgu role (#7), aFL role (#8).
evidence: payload-decrypted/sixtwo/eZ.java:14-185; specs/handlers/eZ.md:42-157 vs
src/main/java/dev/opengrim/modules/combat/AutoDoubleHand.java

---

## Changed files

- src/main/java/dev/opengrim/modules/combat/NoMiss.java (rebuild: radio group, slots, visibility, specified-slots branch, labeled guesses)
- src/main/java/dev/opengrim/modules/render/Freecam.java (setBind(71), camera rotation applied, javadoc)
- src/main/java/dev/opengrim/modules/world/LeverReplace.java (Mode radio, useKey release, javadoc)
- src/main/java/dev/opengrim/modules/world/FastPlace.java (invented slots gate removed, javadoc)
- src/main/java/dev/opengrim/modules/combat/AutoDoubleHand.java (Totem Slot wired, pop status 35, javadoc)
- src/main/java/dev/opengrim/modules/combat/SpearDoubleTap.java (Return Back capture, javadoc)
- src/main/java/dev/opengrim/modules/movement/Blink.java (citation repair, dead control entry removed, javadoc)
- src/main/java/dev/opengrim/modules/movement/Scaffold.java (citation repair, isSolid 1:1, gap documentation)
- src/main/java/dev/opengrim/modules/combat/TotemRefill.java (javadoc: citations, trace, gaps)
- src/main/java/dev/opengrim/modules/combat/UnchargeBlock.java (javadoc: labeled guesses)
