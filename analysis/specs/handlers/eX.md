# Anchor Macro (sixtwo.eX) — handler-derived behavior spec

Class: `sixtwo/eX` · display name **Anchor Macro** · registry description "Automatically
charges and explodes an anchor" · key 27, bind -999 [registry]. Superclass `gg`.

## Evidence base

1. PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_eX.c` — 46 handlers, standard
   dispatcher-stub shape (`BLOB_DECRYPTOR` → `JNI->ExceptionCheck` → indirect jump into
   the shared VM interpreter). No behavior bytecode recoverable.
2. Pool slices (pool base rva `0x301ee40`): one shared behavior window
   `POOL[0xfcb9,0x2ad]` (685 bytes) decrypted by 10 handlers (aEM, aEN, aEO, aEP, aEQ,
   aER, aES, aFB, aFv, aFy) + base tick `POOL[0x3806,0xbf]` (YO), clinit
   `POOL[0x226,0xd]`, indy `POOL[0x857,0x26]`, and a tiny machinery fragment
   `POOL[0xb15,0x2c]` (`(J)J`, `java/util/HashMap`, `(I)V`, `java/lang/Ru…` —
   decryptor plumbing).
3. **Shared-window warning**: `POOL[0xfcb9,0x2ad]` is dominated by the neighboring
   **eW "Auto Hit Crystal"** program — its fields (`pyZOh, REuKF, EbZHv, NdPsx, IXgwi,
   tOCyA, HYxjn, BjiFk, nAtgG, XtwRQ, UO, DcPJe, MuaJV, UVCdF, iexlJ, LtwQn, APBzk`),
   methods (`aDK, aDL, aDQ, aDR, aDS, aDT, aEC, aEB, aEp, aEr` — none exist on eX,
   whose method names are `aEQ…aFy`), and its crystal-scan MC surface (below).
   Only `sixtwo/eX`, `aEZ ()Lsixtwo/cA;` and `aFq ()Lsixtwo/mT;` are provably eX's
   own tokens in this window.
4. Java shell `analysis/decompiled/payload-named/sixtwo/eX.java` (constructor fully
   decompiled — settings, timers, state; all 4 event hooks + 3 private natives).
5. Event semantics: `gW$tq` = item-use event (carries `ItemUsageContext`, gW.java);
   `gO$tm` = right-click block-use event (consumers are exactly the block-interaction
   modules dP Block Piercer, dD Item Frame Blocker, dF Lever Replace, dZ Fast Place,
   eW Auto Hit Crystal, eX); `gH$th` = pre-motion tick; `gv` = client tick.
6. Yarn: `class_3965`=`BlockHitResult` (`aES` param), `class_2338`=`BlockPos`,
   `class_1511`=`EndCrystalEntity`, `field_8301`=`Items.END_CRYSTAL`,
   `class_2874`=`DimensionType` (`method_8597 getDimension`),
   `method_18456`=`World.getPlayers`, `method_5838`=`setId`,
   `method_34208`=`PlayerInteractEntityC2SPacket.interactAt`,
   `class_2879`=`HandSwingC2SPacket`, `method_6052/6065`=`getAttacking/getAttacker`,
   `method_5858`=`squaredDistanceTo`, `class_742`=`AbstractClientPlayerEntity` —
   the crystal cluster items are eW's, not eX's.
7. Shared helper consulted from the window: `dlY ()Lsixtwo/qR;` + `ddR (Entity)Z` —
   `rD.dlY()` is the crystal-lifetime tracker (`qR` maps `EndCrystalEntity → Boolean`
   and evicts on crystal removal, qR.java:31-33) `[decompiled helper]`.
8. Decrypted constants: full-dump entries for eX (`aFD("m",…)` ints). Setting units:
   four `" ticks"` strings (Charge/Detonate/Anchor/Switch Delay) visible via
   `aFA<"h">` chains in the constructor.

## Runtime model

- **Purpose**: full respawn-anchor bomb macro on a keypress: place the anchor on a
  clicked obsidian/glowstone face, charge it (glowstone), detonate it — with timed
  delays between each phase and safety checks.
- **Instance state** (eX.java:22-49, decompiled):
  - `iWmfO, lFxwN, ipGCv, UviIK : mT` — **four stopwatches** created via `mT.cpz()`
    (note: `cpz`, not fx's `cpA` — a pre-started variant). They map 1:1 onto the four
    tick-delay settings (Charge Delay / Detonate Delay / Anchor Delay / Switch
    Delay); the assignment is unproven but the count matches exactly.
  - `FfayM : List<BlockPos>` — pending anchor positions (candidate: placements queued
    or "safe anchors held" list; exposed by `aFr()`).
  - `UmOLR : BlockPos` — the current anchor position (exposed by `aFu()`).
  - `qMxUf`, `FjOEe : boolean` — phase latches (candidates: "anchor placed", "anchor
    charged"); roles unrecovered.
- **Event wiring** (all native, default priority):
  - `aEP(gW$tq)` [18b7be7c0] — **item-use event**: candidate phase trigger — the
    player right-clicks with glowstone/anchor; the macro intercepts and sequences the
    full charge/detonate instead `[inferred]`.
  - `aEO(gO$tm)` [18b786490] — **block-use event** (same trigger family, block-side).
  - `aEM(gH$th)` [18b75dca0] — pre-motion tick; `aEN(gv)` [18b780df0] — client tick:
    the phase state machine (advance phases when the corresponding `mT` timer
    exceeds the configured delay in ticks).
  - `aES(BlockHitResult)` [18b80ad00] — private: act on a block hit (place anchor /
    charge / detonate at the hit face).
  - `aEQ ()V` [18b7f9f50] / `aER ()V` [18b8038f0] — private void phase steps.
  - `aFv (BlockPos)Z` [18b78b6a0] — private predicate over a position (candidate:
    "is this a safe anchor position" — block behind/at pos in the Safe Anchor Blocks
    whitelist) `[inferred]`.
- **Phases** implied by settings + registry "Automatically charges and explodes an
  anchor": (1) place anchor (respect "Anchor Delay"), (2) charge with the charge item
  ("Charge Delay"), (3) detonate ("Detonate Delay"); "Switch Delay" gates hotbar
  swaps between anchor/charge item before each phase ("Before Charge"/"After Charge"
  swap modes).

## Per-handler semantics

All behavior handlers decrypt `POOL[0xfcb9,0x2ad]` (shared with eW — see caveat) and
dispatch into the VM; bodies unrecovered. Image addresses cited.

- **`aEM(gH$th)` [18b75dca0] / `aEN(gv)` [18b780df0]** — tick-side phase machine:
  consume `FfayM`/`UmOLR`, gate each phase on its `mT` timer vs the tick-delay
  setting, drive the interactions through `aES`. Unrecovered beyond the wiring.
- **`aEP(gW$tq)` [18b7be7c0] / `aEO(gO$tm)` [18b786490]** — use-event entry points;
  candidate split: `gO$tm` (block use) begins the placement phase on an
  obsidian/glowstone face, `gW$tq` (item use) handles the charge phase `[inferred,
  uncertain]`.
- **`aES(BlockHitResult)` [18b80ad00]** — execute the block-side interaction for the
  current phase at the hit position/face.
- **`aEQ/aER ()V` [18b7f9f50, 18b8038f0]** — phase-advance / reset steps (candidate:
  reset after detonation; `FjOEe`/`qMxUf` latches). Not disambiguated.
- **`aFv (BlockPos)Z` [18b78b6a0]** — position predicate (Safe Anchor check or "is
  the anchor still there").
- **`aFB (IJ)I` [18b7ce870] / `aFy (IJ)String` [18b7b7d80]** — indy int/string decrypt
  kernels (machinery).
- **`YO ()V` [18b75d9e0]** — module-base tick-gate slice `POOL[0x3806,0xbf]`
  (standard gc/gd 2-state enum + `mG.cnP(FFF)`), same as every sibling.
- `_ba55b7ccc8fde006d5a9a6820279775e()V` [18b7dd960] — clinit stub
  (`POOL[0x226,0xd]`).
- `aFD`/`aFA`/`aFC`/`aFz`/`aFw`/`aFx` [indy bootstraps, decrypt kernels, MatchException
  rethrow] — machinery.

### Trivial accessors (grouped)

Pure stub → jumptable, no pool window (eX.java:366-441): `aEV/aEW/aEX/aEY/aEU/aFe/
aFh/aFi/aFf/aFm/aFj/aFd/aFc/aFg/aFl/aFk/aEZ/aFa/aFb/aFt` — setting getters
(`cJ`×7, `cA`×4, `cu`×4, `ct`×2, `cD`, `cK`, `cC`, boolean×2) plus state getters
`aFn/aFo/aFp/aFq` (the four `mT`s), `aFr` (`List<BlockPos>`), `aFu` (`BlockPos`).
Type groups match the field census; per-getter identity inside type groups
unrecovered (unique types unambiguous: `aFi`→`kecKJ` block whitelist, `aFh`→`hPUWA`
Hold Key, `aFb`→`ymWjd`, `aFr`→`FfayM`, `aFu`→`UmOLR`).

## Settings → behavior mapping

| field | setting | chain (verbatim) | behavior link |
|---|---|---|---|
| `tGIRe` | (ct group, 4-char name — not in the decrypted names list) | `ct` | top mode group |
| `ctwjT` | — (cu child, 5-char name, unrecovered) | `cu` child of `tGIRe` | mode alternative |
| `Jtsgl` | — (cu child, 4-char name, unrecovered) | `cu` child of `tGIRe` | mode alternative |
| `ikcZw` | Charge Anchors | `cJ .WE(true)` — default **true** | perform the charging step |
| `qSoHb` | Charge Delay | `cA .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks")` | wait between charge clicks; visibility ← `ikcZw` (`qSoHb.Vf(ikcZw::WF)`, eX.java:349) |
| `mmJaL` | Detonate Anchors | `cJ .WE(true)` — default **true** | perform the detonation step |
| `xdsyS` | Detonate Delay | `cA .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks")` | wait before detonation; visibility ← `mmJaL` (eX.java:350) |
| `GIPFr` | Anchor Delay | `cA .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks")` | wait between place and charge |
| `QJeGA` | Switch Delay | `cA .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks")` | wait during item switches |
| `ymWjd` | (cC, name unrecovered — candidate "Radius"/"Range") | `cC .Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(<unit string>)` — step 1, 1–9, default 1 | candidate block-scan radius |
| `JeboL` | Only For Own | `cJ .WE(false)` — default **false** | only trigger on anchors the player placed (ownership test native) |
| `JCATM` | Cancel On Use | `cJ .WE(true)` — default **true** | cancel the vanilla use (don't also fire the manual interaction) |
| `KfwhF` | Safe Anchor | `cJ .WE(false)` — default **false** | enable safety checks; visibility ← `kecKJ`/`KUvew`/`NZxVb` change callbacks (eX.java:351-353) |
| `RGmUw` | Safe Anchor Hold | `cJ .WE(false)` — default **false** | require holding the "Hold Key" to bypass/apply the safety check; visibility ← `hPUWA` (`hPUWA.Vf(RGmUw::WF)`) |
| `hPUWA` | Hold Key | `cD .VO(-999)` (unbound) | modifier keybind |
| `kecKJ` | Safe Anchor Blocks (cK whitelist; name assignment inferred — see uncertain) | `cK .WM(jc.GjreY).WN(Items.OBSIDIAN, Items.GLOWSTONE)` — whitelist + defaults **OBSIDIAN, GLOWSTONE** | blocks on which anchoring is considered safe (`aFv` predicate candidate); `jc.GjreY` is a native-populated block/item set |
| `KUvew` | (ct group, 4-char name unrecovered — candidate "Swap") | `ct` | item-swap group; visibility ← `KfwhF` |
| `EYjJv` | Before Charge | `cu` child of `KUvew` | what to hold before charging |
| `lxmFM` | After Charge | `cu` child of `KUvew` | what to hold after charging |
| `NZxVb` | Diagonal | `cJ .WE(true)` — default **true** | allow diagonal placement faces (anchor on the block diagonal to the clicked face) |

## Unrecovered / uncertain

1. **All phase-machine logic.** The sequencing (which `mT` ↔ which delay), the actual
   block-place/charge/detonate packet sequence, and the detonation trigger are VM
   bytecode — nothing but the wiring survives.
2. **`kecKJ` name** ("Safe Anchor Blocks" vs "Detonate Item") — the cK whitelist with
   OBSIDIAN/GLOWSTONE defaults is behaviorally "blocks safe for anchoring"; the
   alternative ("Detonate Item" = items that detonate) does not fit the
   two-block defaults. Assignment flagged as inferred.
3. **`ymWjd`, `tGIRe`, `ctwjT`, `Jtsgl`, `KUvew` display names** — absent from the
   decrypted names list (20 fields vs 16 names); candidates marked above are shape
   inferences, not evidence.
4. **Shared-window attribution** — `POOL[0xfcb9,0x2ad]` is dominated by eW's (Auto
   Hit Crystal) crystal-scan program (`EndCrystalEntity`, `Items.END_CRYSTAL`,
   `DimensionType.getDimension`, `World.getPlayers` + `parallelStream`/`anyMatch`,
   `PlayerInteractEntityC2SPacket.interactAt`, `HandSwingC2SPacket`, `setId`,
   `squaredDistanceTo`, `getAttacking/getAttacker`, `qR.ddR` crystal-death map, and
   all `pyZOh…APBzk` fields / `aDK…aEr` methods). None of these may be attributed to
   eX; eX's only provable tokens are `sixtwo/eX`, `aEZ ()Lsixtwo/cA;`, `aFq`.
   eX's own interaction packet surface (PlayerInteractBlockC2SPacket,
   PlayerActionC2SPacket) is **not** in any eX window — it is inside the VM.
5. **Roles of `qMxUf`/`FjOEe`** and the `FfayM` list lifecycle (cleared when? per
   detonation or persistent "held anchors"?) — unrecovered.
6. **`eV.aEq()`** (Auto Crystal static native read in the constructor, eX.java:140,
   feeding a conditional `iS.bwK("T2qMoc")` warning primitive) — what condition it
   guards (a known incompatibility warning?) is unrecovered.
