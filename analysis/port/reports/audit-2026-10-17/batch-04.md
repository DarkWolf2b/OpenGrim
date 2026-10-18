# Batch 04 audit — 2026-10-17

Modules: fP, fh, eE, dP, eU, eR, es, fd, fR, eu (10).
Auditor/fixer: single session, surgical edits only; compile verified.

Cross-cutting findings:

- **source-map `handlerSpec` column is case-collapsed for 5/10 rows** (NTFS twin
  overwrite). Resolved case-safe handler specs actually used here:
  | id | map pointed at (wrong) | verified spec used | declared class inside |
  |---|---|---|---|
  | fP | analysis/specs/handlers/fP.md | analysis/specs/casesafe/handlers/fP_.md | Backtrack is fp |
  | fh | analysis/specs/handlers/fh.md | analysis/specs/casesafe/handlers/fh.md | Aim Assist is fH |
  | eE | analysis/specs/handlers/eE.md | analysis/specs/casesafe/handlers/eE_.md | Cape is ee |
  | fd | analysis/specs/handlers/fd.md | analysis/specs/casesafe/handlers/fd.md | Uncharge Block is fD |
  | eu | analysis/specs/handlers/eu.md | analysis/specs/casesafe/handlers/eu.md | Air Anchor is eU |
- **Ghidra corpus traps**: `handlers-full-annotated/sixtwo_fP.c` holds fp;
  `handlers-full-annotated/sixtwo_eR.c` holds er; `handlers-full-annotated/sixtwo_eU.c`
  holds eu (i.e. there is **no** full-annotated eU file — use
  `casesafe/handlers-stitched/sixtwo_eU_.c`). `sixtwo_fh.c`, `sixtwo_eE.c`,
  `sixtwo_dP.c`, `sixtwo_es.c`, `sixtwo_fd.c`, `sixtwo_fR.c`, `sixtwo_eu.c` verified
  with the right `Lsixtwo/<id>;` marker.
- **Runtime trace** (`win/trace.jsonl`, case-sensitive pass over the 10 ids):
  only `{"e":"load","c":"sixtwo/dP"}` — one class-load line for dP, no handler
  execution. All other [N] items below are unexecuted in the boot/HUD coverage.

---

### fP — Anti-Cheat Detector
post-fix parity: 70% | status: partial | fixed: yes

fixed:
- `aaj()` enable reset implemented: clears `swcAS` (samples) and `yNCfW` (latched) — casesafe/handlers/fP_.md line 29, source fP.java:37 vs impl AntiCheatDetector.java:76-81 (was an empty hook).
- high-probability guess: `GameJoinS2CPacket` → reset sample window + latch (fP_.md `aWt`: "join → reset/probe", pool token `class_2678`) — fP.java:43-44 vs impl:100-107.
- Javadoc corrected: the port previously claimed "no handler body or constant for fP is recovered" using the case-collapsed fp corpus — now cites `casesafe/handlers-stitched/sixtwo_fP_.c` (20 handlers) + fP_.md; class shell/fields/ctor citations now point at the case-safe tree (fP.java:12-29, 24-29, 36-80 vs impl:12-62).

remaining gaps:
- [S] chat route `aWr(gN)` (pattern scan vs `vyRDw`/`DnMlW`) has no bus equivalent (no chat-receive event) — only packet + tick routes registered.
- [N] `aWt(gL$tk)` packet body, `aWr(gN)` chat body, `aWt` skin-asset probe (`AssetInfo$TextureAssetInfo.ofVanilla`, `PlayerSkinType` SLIM/WIDE), `aWp`/`aWq`/`aWv` analysis sub-steps, `aWw()String` report builder, `aWx(String)` delivery, `aWv` verdict latch, `aWy(List,Integer)Z` — corpus `casesafe/handlers-stitched/sixtwo_fP_.c`; VM-virtualized → needs runtime trace.
- [U] `swcAS` 5-sample semantics and static pattern tables `vyRDw`/`DnMlW` (runtime-built strings).

evidence: analysis/decompiled/payload-decrypted/sixtwo/fP.java:12-80 + analysis/specs/casesafe/handlers/fP_.md vs src/main/java/dev/opengrim/modules/utility/AntiCheatDetector.java:12-117.

---

### fh — Attribute Swap
post-fix parity: 60% | status: partial | fixed: yes

fixed:
- high-probability guess: Return Delay suffix `NXMEC` is native-decrypted/unrecovered — cited as " ms" (0–1000 step-10 ms-like range, casesafe/fh.md §Unrecovered 4); fh.java:65 vs impl AttributeSwap.java:49.
- Javadoc source path fixed (`analysis/decompiled/casesafe/payload-decrypted/sixtwo/fh.java`, previous text had the tree order inverted) and dual-default (50,100) handling documented (fh.java:36-67 vs impl:17-36). Verified corpus `sixtwo_fh.c` = declared `Lsixtwo/fh;`.

remaining gaps:
- [N] `aJg(hw$tv)` attack-swap body and `aJf(gH$th)` return-swap body (corpus sixtwo_fh.c) — VM-virtualized → needs runtime trace; which component probe selects the "attribute" item stays native.
- [G] swap mechanics ported as selected-slot switch (`setSelectedSlot`) rather than the spec's "hotbar↔Target Slot stack exchange" (casesafe/fh.md §Unrecovered 2 — no click tokens); the component predicate is the port's natural reading, not decoded (impl:135-146).
- [U] Return Delay time unit (" ms" is a guess); `ol` scheduler shape absorbed into the tick.

evidence: analysis/decompiled/casesafe/payload-decrypted/sixtwo/fh.java:36-67 vs src/main/java/dev/opengrim/modules/utility/AttributeSwap.java:13-148.

---

### eE — Parkour
post-fix parity: 65% | status: partial | fixed: partial

fixed:
- Javadoc corrected/expanded: case-safe spec citations (casesafe/handlers/eE_.md — the map's handlers/eE.md is ee "Cape"), verified corpus `sixtwo_eE.c` (`Lsixtwo/eE;`), recovered token pipeline recorded (`Box.offset`/`Box.expand`, `World.getBlockCollisions` + Guava `Streams.findAny`), and the extra gates labeled as guesses (Parkour.java:16-50 vs eE_.java:18-55, 70).

remaining gaps:
- [N] `awz()Z` — the module's entire behavior query (corpus sixtwo_eE.c, handler `[18cafbc00]`) — VM-virtualized → needs runtime trace; exact offset/expand vectors unrecovered (eE_.md §Unrecovered 1).
- [S] caller contract: the native movement layer polls `awz()`; no mixin exists here, so the port polls via `onTick` and applies `PlayerInput` + `jump()` (stack wiring, labeled).
- [G] on-ground/sneaking/using-item gates have no exclusive token in eE's run (eE_.md §Unrecovered 4).

evidence: analysis/decompiled/casesafe/payload-decrypted/sixtwo/eE_.java:18-73 + analysis/specs/casesafe/handlers/eE_.md vs src/main/java/dev/opengrim/modules/movement/Parkour.java:16-119.

---

### dP — Block Piercer
post-fix parity: 45% | status: partial | fixed: yes

fixed:
- Recovered MISS sentinel ported: when the pierce raycast finds no block, the working HitResult now stores `BlockHitResult.createMissed(rayEnd, Direction.getFacing(look), BlockPos.ofFloored(rayEnd))` — slice token `field_1333` = `HitResult$Type.MISS` ("HitResult.MISS is the sentinel stored when no block target qualifies", handlers/dP.md) — dP.java:16 vs impl BlockPiercer.java:58, 126-129 (was `null`).
- Javadoc: source citation switched to the case-safe decompile (`casesafe/payload-decrypted/sixtwo/dP_.java`) + verified corpus `sixtwo_dP.c`; state/hand names and reuse documented (dP.java:16, 60-68 vs impl:23-60).

remaining gaps:
- [S]/[G] entity-type-set (`cF .VS(jg$tJ.OCdZM)`, default {PLAYER}) and item/block-set (`cK .WM(jc.GjreY).WN(Items.COBWEB)`, default {COBWEB}) widgets do not exist in our settings framework — substituted by boolean-child groups with high-probability-guess member defaults (impl:58-74); needs EntityTypeSetSetting/ItemSetSetting (recorded, not implemented).
- [N] `aoR(gO$tm)`/`aoS(gO$tn)` tick bodies and `aoT() : Hand` selector (corpus sixtwo_dP.c) — VM-virtualized → needs runtime trace; the virtualized raycast/rebuild math is approximated by the use-key edge + block raycast (recorded in the javadoc).
- [U] `.VS(jg$tJ.OCdZM)`/`.WM(jc.GjreY)` builder meanings and the `VX(Entity)Z` predicate owner.

evidence: analysis/decompiled/casesafe/payload-decrypted/sixtwo/dP_.java:13-78 + analysis/specs/handlers/dP.md vs src/main/java/dev/opengrim/modules/world/BlockPiercer.java:23-178.

---

### eU — Air Anchor
post-fix parity: 60% | status: partial | fixed: yes

fixed:
- high-probability guess: Chance suffix `pyZOh` unrecovered — cited as " %" (1–100 slider; eU.java:48 vs impl AirAnchor.java:24-25, 53).
- Chance roll made consistent with the slider: uniform `[0,100)` compared against Chance so default 100 always places (previous `*100+1` never reached 100 → 1% silent skip). Roll formula is VM-hidden → labeled high-probability guess (impl:118-122).
- Javadoc: corpus trap documented (handlers-full-annotated/sixtwo_eU.c holds **eu**; true eU corpus is casesafe/handlers-stitched/sixtwo_eU_.c — 14 handlers aDC/aDI/aDD-aDH) and rotation submission marked as stack wiring (no rotation tokens in eU's window).

remaining gaps:
- [N] `aDC(gH$th)` placement body, `aDI(BlockHitResult,I) → Packet` factory (`PlayerInteractBlockC2SPacket(Hand, BlockHitResult, sequence)`, class_2885), state getters `aDD/aDE/aDF/aDG/aDH` (corpus sixtwo_eU_.c) — VM-virtualized → needs runtime trace.
- [S] `mW HyfoP` one-shot action gate (aDH, read by eX Anchor Macro) has no framework analog — exposed as `isReady()` latch only.
- [G] placement math (BlockPos derivation, face fabrication, Double Anchor loop, cooldown 5 ticks) approximated; `interactionManager.interactBlock` substituted for the direct packet fabricator — same packet, real sequence.

evidence: analysis/decompiled/payload-decrypted/sixtwo/eU.java:23-83 + analysis/specs/handlers/eU.md vs src/main/java/dev/opengrim/modules/world/AirAnchor.java:18-164.

---

### eR — Wind Hop
post-fix parity: 55% | status: partial | fixed: partial

fixed:
- Javadoc/corpus trap documented: `handlers-full-annotated/sixtwo_eR.c` holds **er (Speed)**; the verified corpus is `casesafe/handlers-stitched/sixtwo_eR_.c` (`Lsixtwo/eR;`, handlers aCF/aCG/aCH/aCI) — WindHop.java:22-32.

remaining gaps:
- [N] `aCF(gA)` input arm, `aCG(gv)` secondary trigger, `aCH(gH$th)` tick body, `aCI(ItemStack)Z` predicate (corpus sixtwo_eR_.c) — VM-virtualized → needs runtime trace; the wind-charge identity rests on the registry description only (eR.md §Blockers).
- [S] `cD` "Activation Key" keybind widget has no framework analog — ported as `IntSetting` (-999 unbound) polled with InputUtil (recorded).
- [G] fixed 500 ms internal cooldown (mT threshold is VM-hidden); use executed via `interactItem` + swing instead of the original `oT` builder + `KeyBinding.useKey.setPressed` spoof; `qJ.dbm` slot arbitration missing (no analog).

evidence: analysis/decompiled/payload-decrypted/sixtwo/eR.java:21-85 + analysis/specs/handlers/eR.md vs src/main/java/dev/opengrim/modules/movement/WindHop.java:17-152.

---

### es — No Push
post-fix parity: 70% | status: partial | fixed: partial

fixed:
- Javadoc: verified corpus `sixtwo_es.c` (`Lsixtwo/es;`) and the exact bus wiring cross-referenced (PushOutOfBlocksMixin, EntityPushMixin — both verified posting to the EventBus) — es.java:71-84 vs NoPush.java:30-38.

remaining gaps:
- [N] `aup(hd)` block-push body and `auq(hq)` entity-push body (corpus sixtwo_es.c) — VM-virtualized → needs runtime trace; whether cancellation is unconditional or gated (pistons, slime, riptide…) is only known at contract level (es.md §Unrecovered 1).
- [G] riptide exemption (`isUsingRiptide()`) applied to both handlers — reading 1 of the shared es/eu window ("skip cancel while riptide spin", es.md), scope unrecovered.
- [U] `cw.Tz()` builder effect on "Block Push" (both toggles default true from the `cw` ctor) — ported as plain bool children.

evidence: analysis/decompiled/payload-decrypted/sixtwo/es.java:19-84 + analysis/specs/handlers/es.md + src/main/java/dev/opengrim/mixin/PushOutOfBlocksMixin.java, EntityPushMixin.java vs src/main/java/dev/opengrim/modules/movement/NoPush.java:12-73.

---

### fd — Auto Dripstone
post-fix parity: 55% | status: partial | fixed: yes

fixed:
- Cooldown timing aligned to the recovered `mT.cpA()` ms timer family (per the eR `mT` contract): wall-clock ms deadline `nextActionTime` replaces the tick counter (fd.java:39 vs impl AutoDripstone.java:56, 100-105, 130-132); suffix `eVFHp` unrecovered — cited as " s" (high-probability guess, fd.java:38 vs impl:41, 70).
- Trapdoor detection narrowed to the recovered token: only `TrapdoorBlock` (`class_2533`) counts (previous `|| state.contains(Properties.OPEN)` also matched doors/fence gates) — casesafe/fd.md token list vs impl:141-146.
- Javadoc: wrong spec citation replaced (map's handlers/fd.md is fD "Uncharge Block"; used casesafe/handlers/fd.md + casesafe/modules/fd.md); recovered surface now documented (`field_28048` POINTED_DRIPSTONE, `method_24953 ofCenter`, `method_1107 getBoundingBox` + six Box components, `fd$sO` plan record, qN arbitration, verified corpus sixtwo_fd.c).

remaining gaps:
- [N] `aHU(gv)` tick body, `aHV(gH$th)` marker, plan builders/geometry `aHW/aHX/aHY/aHZ/aIa/aIc/aIb` (corpus sixtwo_fd.c, 17 handlers) — VM-virtualized → needs runtime trace.
- [S] qN module-action arbitration (`dcC`/`dcB`) has no analog; `mT.cpA()` sync-vs-scheduled distinction unrecovered.
- [G] target scan (players within 4.5 on a closed trapdoor), plan sequencing (dripstone below → else open trapdoor) and the " s" unit are natural readings, not decoded (fd.md §Unrecovered 1-3).

evidence: analysis/decompiled/payload-decrypted/sixtwo/fd.java:26-83 + analysis/specs/casesafe/handlers/fd.md vs src/main/java/dev/opengrim/modules/world/AutoDripstone.java:23-171.

---

### fR — Client Sounds
post-fix parity: 70% | status: ported | fixed: yes

fixed:
- Boot-enabled metadata restored: `super(gf.aZL(103, true, gh.KfAlY))` (fR.java:23) — `bootEnabled() → true` override added, following the fO Discord Activity precedent where the same `true` flag is direct evidence of "registered enabled at boot" (fO.java:22, casesafe/handlers/fO_.md) — impl ClientSounds.java:39-52.
- high-probability guess: Sound Volume suffix `ymMTJ` unrecovered — cited as " %" (0–100 slider identical to dQ's recovered " %" volume slider; fR.java:67 vs impl:43; labeled in javadoc impl:30-32).
- Javadoc/evidence refreshed (accessor contract aWH/aWI/aWJ/aWK, verified corpus `sixtwo_fR.c` = `Lsixtwo/fR;`).

remaining gaps:
- [N] getter trampolines `aWH/aWI/aWJ/aWK` are VM-virtualized (corpus sixtwo_fR.c) but contract-pinned to field reads — ported as accessors; no behavior bodies exist in this class.
- [G] "Sound Type" is a `ct` group + `cu` radio pair in the original, ported as `ModeSetting(normal,bubble)`; no visibility gates recovered.
- [S] consumer integration: HitSounds (dQ) does not yet consult the ClientSounds profile (original consumers query aWH/aWI/aWJ/aWK from native gI path) — accessors exist for that wiring.

evidence: analysis/decompiled/payload-decrypted/sixtwo/fR.java:10-92 + analysis/specs/handlers/fR.md vs src/main/java/dev/opengrim/modules/utility/ClientSounds.java:10-80.

---

### eu — Trident Boost
post-fix parity: 65% | status: partial | fixed: yes

fixed:
- Cooldown unit corrected to the spec's seconds reading ("seconds assumed, not confirmed", casesafe/handlers/eu.md §Blockers): wall-clock ms gate (`value * 1000`, previous code used ticks, capping the 0–20 slider at 1 s); suffix `yJtAG` unrecovered — cited as " s" (high-probability guess) — eu.java:37 vs impl TridentBoost.java:35, 56, 109, 158-162.
- Javadoc: the previous citation `analysis/specs/handlers/eu.md` actually documents the case-twin eU "Air Anchor" — replaced with casesafe/handlers/eu.md; recovered riptide token cluster (spin gate, wet check, sin/cos/sqrt, addVelocity+useRiptide+move, playSoundFromEntity RIPTIDE_1/2/3) documented (impl:21-50). Verified corpus sixtwo_eu.c = `Lsixtwo/eu;` (note: same NTFS file as sixtwo_eU.c).

remaining gaps:
- [N] `auJ(gD)` boost body (corpus sixtwo_eu.c, handler `[0x18ce32b20]`) — VM-virtualized → needs runtime trace.
- [S] `gD` empty cancelable shell event (item-use/trident-use, identity unrecovered) has no bus equivalent — body polled from `onTick()` while `isUsingItem` (recorded in javadoc).
- [G] `SDRyJ` gate reading (inert when wet; boost only when dry + checked) is the primary reading of two in eu.md; boost math mirrors vanilla; cooldown seconds unit is a labeled guess.

evidence: analysis/decompiled/casesafe/payload-decrypted/sixtwo/eu.java:19-92 + analysis/specs/casesafe/handlers/eu.md vs src/main/java/dev/opengrim/modules/movement/TridentBoost.java:20-162.

---

## compile

`.\gradlew.bat compileJava -q --offline` → **EXIT=0** (first attempt failed on 9 javadoc errors in AirStuck/Strafe/MiddleClickFriend — `payload-*/` glob patterns prematurely closing block comments, written by parallel agents; those were fixed externally before my retry, none of my files were involved).

## changed files

- src/main/java/dev/opengrim/modules/utility/AntiCheatDetector.java
- src/main/java/dev/opengrim/modules/utility/AttributeSwap.java
- src/main/java/dev/opengrim/modules/movement/Parkour.java
- src/main/java/dev/opengrim/modules/world/BlockPiercer.java
- src/main/java/dev/opengrim/modules/world/AirAnchor.java
- src/main/java/dev/opengrim/modules/movement/WindHop.java
- src/main/java/dev/opengrim/modules/movement/NoPush.java
- src/main/java/dev/opengrim/modules/world/AutoDripstone.java
- src/main/java/dev/opengrim/modules/utility/ClientSounds.java
- src/main/java/dev/opengrim/modules/movement/TridentBoost.java
