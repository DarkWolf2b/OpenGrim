# Elytra Swapper (sixtwo.ef) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_ef.c` — 24 handlers, 268 continuation blocks (all generic j2cc VM trampolines; `rdtsc` noise).
- Structure/setting names: `analysis/specs/modules/ef.md`, `analysis/decompiled/payload-named/sixtwo/ef.java`.
- Shared class pool window `POOL[0xc4f8,0x21b]` (fully resolved via `resolve_pool_blob`, exact contents quoted below) — used by arX/arY/arZ/asa..asg/asi/ask; NOT shared with sibling classes (ef-exclusive window).
- Registry line: `sixtwo.ef|Elytra Swapper|Swaps chestplate with elytra|key=67|bind=-999` (module-level bind unbound; activation via in-module key setting).

## Runtime model

Swaps the chestplate slot with an elytra (and back), optionally opening the inventory to do the swap through container clicks, optionally firing a firework to (re)start gliding.

- Category `gh.qBzlZ` (utility), superclass `gg`; enabled flag via `gg.baa()`, listener registration in `YO` [18d340cf0].
- Events (only two `@hG` methods, both native):
  - `arX(gA)` input event [18d341050] — activation-key handling.
  - `arY(gH.th)` pre-motion client tick [18d4d0a30] — main state machine.
- Constructor wires setting visibility (CFR lines 236–239):
  - `FVOfM.Vd(this::asn)` — group change → `asn` (inventory-mode rebuild) [18d408130].
  - `mgssu.Vd(this::asm)` — group change → `asm` [18d377430].
  - `vclgk.Vf(LeMPS::WF)` — "Swap Back After Landing" visibility depends on "Auto Fly".
  - `jiBcq.Vf(AVoOt::WF)` — "Activate Firework" visibility depends on "Swap Firework".
- Timer: `VgPzz = mT.cpz()` — swap delay timing.
- State fields: `DBoNw` (swapped flag), `RYmzC`, `kyTFX` (ints), `IrgCI`, `qIawY` (booleans), `hGtSw` `Pair<Integer,Integer>` (pending slot pair for silent swap-back).

Pool-derived MC surface (verbatim from `POOL[0xc4f8,0x21b]`):

- `method_31549 ()Lnet/minecraft/class_1656;` = `getAbilities()` + `field_7477` = `PlayerAbilities.creativeMode` — behavior skipped in creative mode.
- `method_5869` = `isSubmergedInWater`, `method_5799` = `isTouchingWater` — gating check(s) before swap/firework (exact predicate unrecovered).
- `field_6174` = `EquipmentSlot.CHEST` + `method_6118` = `getEquippedStack(EquipmentSlot)` — reads the chest slot.
- `field_8833` = `Items.ELYTRA` — elytra identification.
- `net/minecraft/class_8051` = `EquipmentType`, `field_41935` = `EquipmentType.CHESTPLATE`, plus module helper `cKl (Lnet/minecraft/class_8051;II)I` — maps an equipment type to a container/armor slot index for swap-back targeting.
- Slot plumbing: `cJo`, `cJF`, `(Lsixtwo/oQ;)Lsixtwo/oQ;` (oQ slot-wrapper clone), `cJO ()Lsixtwo/oJ;` (underlying slot accessor).
- Item counting: own `ash (Lnet/minecraft/class_1792;)I` [18d359b80] — count of an item in inventory.
- Tokens `arE` and `bzb` appear in the pool but `arE` has no CFR declaration — synthetic/trampoline-only member (see Uncertain).

## Per-handler semantics

All behavioral handlers share `POOL[0xc4f8,0x21b]`; each body is decrypt-preamble → VM dispatch, so semantics are the token/API contract, not recovered control flow.

- `YO ()V` [18d340cf0] — listener registration + `gg` plumbing (`POOL[0x3806,0xbf]` is shared superclass window: `gg.baf/aZg/aZi`, `cnP (FFF)Lsixtwo/mG;` etc.).
- `_ab5b...` [18d4f2bc0] — class-init decrypt bootstrap (`POOL[0x226,0xd]`, JVM plumbing only).
- `arX(gA)` [18d341050] — input event: reads `lKUBn` (Activation Key) and toggles the swap state machine; also touches `qIawY`, `AVoOt`, `ash`.
- `arY(gH.th)` [18d4d0a30] — pre-motion tick state machine: creative-mode check (`getAbilities().creativeMode`), water checks, chest-slot read, elytra detection, `mT` timer vs Swap Delay, firework activation, swap-back on landing.
- `arZ(ItemStack)` [18d517750] — operates on a picked-up stack (elytra or chestplate side of the swap).
- `asa()` [18d523870] — step in swap/restore sequence (touches `qIawY`, `AVoOt`).
- `asb(ItemStack,int) Optional<Hand>` [18d535d10] — resolves the hand to use (firework activation path); returns empty when no action.
- `asc(Hand)` [18d542060] — performs the hand interaction (swing/use) for the firework.
- `asd()` [18d542a90], `ase()` [18d549170], `asf()` [18d557a90], `asg()` [18d34f580] — sub-steps of swap / inventory-mode / swap-back sequences (no distinct API tokens attributable per step).
- `ash(Item) int` [18d359b80] — inventory count of given item.
- `asi(int,int) void` [18d35df90] — two-int operation; almost certainly the slot-pair swap (`hGtSw`/`Pair<Integer,Integer>` matches).
- `ask()` [18d3688d0], `asl()` [18d36ee70], `asj()` [18d368480] — synthetic helpers (string decode `asp` [18d4a7c10], `aso` MatchException trap [18d4a7b80], static init `asj`).
- `asm()` [18d377430], `asn()` [18d408130] — group-visibility recomputation callbacks (from constructor wiring).
- `asq/asr/ass` [18d4e3b30/18d4eeea0/18d4efeb0] — j2cc string-decrypt bootstrap (boilerplate).

## Settings → behavior mapping

| setting (decoded) | field | wrapper / chain (verbatim) | behavior role |
|---|---|---|---|
| Activation Key | lKUBn | `cD ... .VO((int)-999)` | key that triggers swap [pool: `lKUBn` in arX window] |
| Swap | FVOfM | `ct` group | main group; rebuild hook `asn` |
| InventorySwap(? "Normal"-group label) | edpdA | `cu` child of FVOfM | child option (exact decoded label per module md: see below) |
| Normal | UVlxx | `cu` child of FVOfM | child option |
| Inventory Mode | mgssu | `ct` group | mode group; rebuild hook `asm` |
| Client | GyyLJ | `cu` child of mgssu | mode: client-side swap |
| Silent | uilnT | `cu` child of mgssu | mode: silent swap |
| Auto Open Inventory | RXyTe | `cJ ... .WE(true)` | opens inventory for swap (default on) |
| Swap Delay | KsVgs | `cC .Vy(5.0).Vw(0.0).Vx(500.0).VA(50.0).Vz(QXbWi)` | delay between swap steps: step 5, min 0, max 500, default 50; suffix = static `QXbWi` (decrypted at class init, value unrecovered — likely "ms") |
| Auto Fly | LeMPS | `cJ ... .WE(false)` | start flying after swap; gates Swap Back After Landing visibility |
| Swap Back After Landing | vclgk | `cJ ... .WE(false)` | swap chestplate back after landing |
| Swap Firework | AVoOt | `cJ ... .WE(false)` | fire firework to (re)start glide |
| Activate Firework | jiBcq | `cJ ... .WE(false)` | bind/button variant; visibility depends on Swap Firework |

Note: module md's name list also contains `Activate Firework` etc. — the two `cu` children of FVOfM (fields edpdA, UVlxx) carry labels "…"/"Normal"; the first label is not in the md name list under a distinct heading and its exact text is unrecovered from the pool (int-array decode happens via `asq` bootstrap only).

## Unrecovered / uncertain

- All handler bodies are j2cc-virtualized (decrypt → jumptable into VM interpreter); no arithmetic, comparisons, or branch structure recovered. Every semantic above is from the pool token contract + CFR shell.
- Exact swap state-machine order (which of `asd/ase/asf/asg` runs when), the water-check predicate (`isSubmergedInWater`/`isTouchingWater` are in-pool but their branch condition is not), and firework hand-selection logic in `asb` are unrecovered.
- `Swap Delay` suffix string `QXbWi` is decrypted at class init (`asp` [18d4a7c10]); unit ("ms" assumed from 0–500 range) not proven.
- Pool tokens `arE` and `bzb` have no CFR declaration (`arE` is invoked from the shared window) — likely a synthetic lambda/trampoline; attribution uncertain.
- Whether the swap uses `oI`/`qJ` manager flows or direct `oQ` clones (pool shows `(Lsixtwo/oQ;)Lsixtwo/oQ;` + `cJO ()Lsixtwo/oJ;`) cannot be determined beyond the token set.
- `key=67` in the registry line vs `Activation Key` default -999: relationship (legacy default bind vs unbound) unresolved.
