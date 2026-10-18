# Spear Reach (sixtwo.eF) — handler-derived behavior spec

Class: `sixtwo/eF` · display name **Spear Reach** · registry description
"Increases reach by attribute swapping with spear" · primary key 128, active bind
-999 (unbound) [registry]. Superclass: `gg` (module base). Constructed via
`super(gf.aZL(17, false, gh.xwjCw))` (coverage-matrix module id 17; category
`gh.xwjCw`).

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_eF.c` — **17 native handlers** +
   **181 continuation blocks**, 0 unresolved table targets; **147/181 blocks end in
   `halt_baddata()`**. Behavior bodies live in the embedded bytecode VM.
   - JNI-op census: generic VM opcode glue only. **No `rdtsc`**.
2. `analysis/decompiled/payload-named/sixtwo/eF.java` — complete Java skeleton:
   2 settings, 1 helper (`ol`), native declarations; imports
   `AttackRangeComponent` (a 1.21.11 data component), `Entity`, `Item/ItemStack/Items`.
3. Supporting payload types: `hw`/`hw$tv` (attack event: entity `bdm()`, one-shot
   latch `dps()/dpt()`), `gY` (**mutable-double event**: `Xaiyf`, getter `bcn()`,
   **setter `bco(double)`** — a modifiable-attack-reach event), `gZ`/`gZ$tt` (empty
   marker event subclass), `oI` (player + slot record, eL's `ayw` provider type),
   `ox` (shared entity-search builder: `cGV()`, `cHe(D)`, `cHj(Predicate)`, …),
   `ol` (shared per-module CPS/attack scheduler), `jc.WnbNG` (item-collection
   constant).
4. Yarn mapping — eF's pool window resolves to a precise 1.21.11 spear-reach MC
   surface:
   - `class_12392` = **`AttackRangeComponent`**; `comp_5261` =
     **`AttackRangeComponent.maxRange → float`**
   - `class_9334` = `DataComponentTypes`; `field_64680` =
     **`DataComponentTypes.ATTACK_RANGE`**; `class_9331` = `ComponentType`
   - `method_58694` = **`ComponentMap.get(ComponentType) → Object`**
   - `method_76734` = **`AttackRangeComponent.defaultForEntity(LivingEntity)
     → AttackRangeComponent`**
   - `field_63257` = **`SPEARS`** item tag (`TagKey<Item>`), `field_63420` =
     **`LUNGE`** entity attribute (`RegistryEntry<EntityAttribute>`)
   - `Stream.findAny` — spear search pipeline
5. awJ-window (`POOL[0x9b6d,0x1ba]`) resolutions: `oI.cIE`, `oP.cJm ()oQ`,
   `oQ.cJv(Predicate) → oK` (search-builder family), `KeyBinding.useKey` +
   `method_23481 setPressed(Z)` (**use-key simulation**), `HandledScreen`
   (`class_465`, `(class_465;)Z` — container-screen-open check),
   `SignEditScreen`/`HangingSignEditScreen` (`class_498`, `class_7744`) — plus
   item constants `BUCKET, OBSIDIAN, COBWEB, WATER_BUCKET, LAVA_BUCKET`
   (`field_8550, field_8281, field_8786, field_8705, field_8187`) and modules
   `dH`/`dJ`/`eG` tokens that are NOT eF's (straddled neighbors, see
   §Unrecovered).

## Runtime model

- **Pool windows** (global pool at image `+0x301ee50`):
  - `<clinit>` [18c966ae0]: `POOL[0x226,0xd]` — decrypt-bootstrap infra.
  - **Shared behavior core** `POOL[0xe3a8,0x27d]` — used by **7 handlers**
    (`awE, awF, awG, awH, awI, awK, awO`). Token groups: eF's own fields/methods
    (`sixtwo/eF | vfMSC | awP | mRcox | jymCX | awK-sig | awI | TbGmd | awJ-sig`),
    cross-module call `sixtwo/eG | axm` (**Spear Lunge** — eF calls into the
    sibling spear module), MC spear surface (`field_63257 SPEARS, field_63420
    LUNGE, class_12392 AttackRangeComponent, comp_5261 maxRange, class_9334
    ATTACK_RANGE, method_58694 get, method_76734 defaultForEntity`,
    truncated `cHn ()net/minecraf…`), event surface (`sixtwo/gY | bcn | bco`,
    `hw$tv | dps | bdm | dpt`), search builder (`cGV ()ox | cHe (D)ox | cHg`),
    and `java/util/stream/Stream | findAny`.
  - `awJ` **own window** `POOL[0x9b6d,0x1ba]` — the oI/oP/oQ search-provider +
    use-key neighborhood described above (straddles dH/dJ/eK item predicates).
  - `awL/awM/awN` [18c990690, 18c990890, 18c990a90] — no pool windows (trampolines).
- **Events** (`@hG`): `awH(hw$tv)` [18c981be0] — attack event; `awF(gY)`
  [18c921d60] — **modifiable reach event** (eF writes the computed reach via
  `bco(double)`); `awG(gZ$tt)` [18c981a00] — empty marker event; `awE(gH$th)`
  [18c91eed0] — render marker.
- **State**: `mRcox = new ol(this)` (CPS/attack scheduler), settings. Statics
  `vfMSC` (VM class key: ctor uses `vfMSC ^ 96671845368651L`), `feInP` (static
  String — Return Delay suffix, native-decrypted), `lSAMc/yVnKv/zIGHB` — decryptor
  caches.
- **Reach pipeline** (from the window): read held `ItemStack` →
  `get(ATTACK_RANGE)` → `AttackRangeComponent` (`awK`); obtain the entity-default
  component via `AttackRangeComponent.defaultForEntity(player)`; compare/use
  `maxRange()`; spear identification via the `SPEARS` item tag and/or
  `Allowed Items` (`TbGmd`, default = the 6 swords + 6 axes); when the desired
  attack is out of normal range, swap to a spear (`awJ()` provides player+slot),
  attack, and swap back after `Return Delay` (50–100 ms range, `ol` scheduler).

## Per-handler semantics

- **`awH (Lsixtwo/hw$tv;)V — attack-event entry [18c981be0]**. On each attack
  event: evaluate target distance vs `maxRange`, decide the swap (spear in),
  submit the attack (`ol`), consume the latch (`dpt()`). Sequencing VM-only.
- **`awF (Lsixtwo/gY;)V — reach-modify event [18c921d60]**. Receives the mutable
  reach double (`bcn()`) and writes the effective reach back (`bco(double)`) —
  the only handler whose event type is a mutable value; structurally this is
  where Spear Reach injects its reach bonus. The injected formula is VM-only.
- **`awG (Lsixtwo/gZ$tt;)V [18c981a00]** — empty marker event; no tokens
  distinguish its role (candidate: post-attack / swap-complete notification).
- **`awI (Lnet/minecraft/class_1297;)Z [18c985870]** — entity validity predicate
  (target gate).
- **`awK (Lnet/minecraft/class_1799;)Lnet/minecraft/class_12392; [18c98fd40]** —
  held-stack component reader: `stack.get(DataComponentTypes.ATTACK_RANGE)` —
  the exact return type is in the window.
- **`awO (Lnet/minecraft/class_1799;)Z [18c9293a0]** — held-stack acceptance
  predicate (Allowed Items filter).
- **`awJ ()Lsixtwo/oI; [18c98e690]** — player+slot provider for the swap (same
  type eL.ayw returns); its window shows the use-key simulation
  (`KeyBinding.useKey.setPressed(Z)`), the HandledScreen-open guard
  (`(class_465;)Z`), and the oP/oQ search-builder calls. The bucket/obsidian/
  cobweb/sign-screen tokens in this window are straddled neighbors, not eF's.
- **`awL ()cK` / `awM ()cA` / `awN ()ol` [18c990690, 18c990890, 18c990a90]** —
  setting/helper getters, null-check trampolines (TbGmd / jymCX / mRcox
  respectively, order unproven but type-unique: awL→cK Allowed Items, awM→cA
  Return Delay, awN→ol scheduler).

### Infrastructure

- `_8f9f6c718a455f7122cb8b6addc832cb ()V` [18c966ae0] — clinit stub.
- `awP (MatchException) → MatchException` [18c92d620] — identity rethrow stub.
- `awQ ([B) → String` [18c92d6b0] — string decoder stub; `awR (IJ) → I`
  [18c957d40] — int decryptor primitive (~470 lines whitening PRNG — noise);
  `awS` [18c962dc0] — MutableCallSite relink; `awT` [18c963dd0] — invokedynamic
  bootstrap for `awT("m",…)`.

## Settings → behavior mapping

| field | setting | type / chain (verbatim) | behavior role (handler evidence) |
|---|---|---|---|
| `TbGmd` | Allowed Items | `cK` `.WM(jc.WnbNG).WN(new Item[]{WOODEN_SWORD, STONE_SWORD, IRON_SWORD, GOLDEN_SWORD, DIAMOND_SWORD, NETHERITE_SWORD, WOODEN_AXE, STONE_AXE, IRON_AXE, GOLDEN_AXE, DIAMOND_AXE, NETHERITE_AXE})` — 12-item multiselect, default **all swords + axes** | accepted main-hand items (`awO` filter); the swap-out items the reach is measured from |
| `jymCX` | Return Delay | `cA`: `.UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(feInP)` — step 10, bounds 0–1000, default **50–100 ms** (range); suffix native-decrypted (unrecovered) | delay before swapping back from the spear |

Helper: `mRcox = new ol(this)` — the shared CPS/attack scheduler consumed the
attack through (same helper fB uses; `ol.cER(cA)` takes a CPS range setting, but
eF wires no CPS setting — its use of `ol` is scheduler-only).

## Unrecovered / uncertain

1. **The reach math.** How the reach bonus is computed (from
   `AttackRangeComponent.maxRange`, the `LUNGE` attribute, or a constant) and
   what eF writes into the `gY` event (`bco`) — VM-only. **Never guess.**
2. **Swap mechanics.** The exact swap (which slot, click-window vs packet, whether
   `useKey.setPressed` is used for the lunge or for the attack) — the awJ window
   shows the primitives but not the choreography; whether `Return Delay` gates the
   swap-back or the next attack is unrecovered.
3. **`SPEARS` tag / `LUNGE` attribute attribution.** Both are in eF's token span,
   but the sibling module **eG "Spear Lunge"** (`sixtwo/eG | axm` is called from
   eF's window and owns its own group immediately after) plausibly shares them;
   per-owner attribution is not possible from this corpus. The cross-module call
   direction (eF → eG.axm) is, however, certain.
4. **`gZ$tt` event semantics.** `gZ` is an empty base; the `tt` subclass's
   meaning and firing site are not in any decompiled Java.
5. **`gY` firing site.** Which payload system fires the mutable-reach event
   (presumably the attack pipeline between hit selection and submission) is
   native and unlocated; eF is a consumer, not the producer.
6. **awJ-window straddle.** `BUCKET/OBSIDIAN/COBWEB/WATER_BUCKET/LAVA_BUCKET`,
   `dH`/`dJ` module tokens and the sign-screen refs belong to the shared
   search-builder neighborhood (oP/oQ) or neighboring programs (eK Auto Web uses
   COBWEB; dJ-like tool modules use OBSIDIAN); none is attributable to eF itself.
7. **`feInP` suffix** (Return Delay unit) — native-decrypted static; not in the
   dump; likely `" ms"` by analogy with fB.bApwx (same UI 50–100), not evidenced.
8. **`awG`/`awE` roles** — marker events with no distinguishing tokens.