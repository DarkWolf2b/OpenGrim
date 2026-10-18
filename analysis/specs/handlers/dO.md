# Hotbar Restorer (sixtwo.dO) — handler-derived behavior spec

Class: `sixtwo/dO` · display name **Hotbar Restorer** · registry description
"Restores hotbar to saved state" · primary key 141, active bind -999 [registry].
Superclass: `gg` (module base, `extends iS`); category constant `gh.qBzlZ`
(different category from fr's `gh.xwjCw`). Constructor key constant decoded =
141 ✓. Unlike the placement family, dO keeps a fully-named state surface in the
Java shell (`vASOe`, `lIFPa`, `fPfGt`, `CISmK`, `pWzHb`).

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_dO.c` — **27 native handlers + N
   continuation blocks**, 0 unresolved table targets.
2. Structural: `analysis/specs/modules/dO.md`, Java shell
   `analysis/decompiled/payload-named/sixtwo/dO.java` (CFR; constructor fully
   decompiled, all behavior methods `native`).
3. Imports prove the mechanism: `mixin.accessors.AbstractContainerScreenAccessor`,
   `HandledScreen`, `PlayerInventory`, `ItemStack`, `java.util.Arrays` — hotbar
   snapshot + restoration through container clicks on an open screen.
4. **Pool windows** (global pool at image `+0x18301ee50`):
   - `YO ()V` [18dc082c0]: `POOL[0x3806,0xbf]` — the HUD-widget (`sixtwo/J`)
     neighborhood window also seen in fr (tokens `gc|aZg/aZi`, `gd` state
     `ipLAD`, `cnP (FFF)Lsixtwo/mG;` color factory, plus `J.java` members) —
     shared, attribution flagged.
   - **Shared behavior core** — `aoA, aoB, aoC, aoD, aoE, aoG, aoH, aos, aot,
     aou, aov, aow, aox, aoy, aoz` all decrypt the same `POOL[0xab5d,0x1e4]`
     (484 bytes).
   - `aoF (Lnet/minecraft/class_1661;Lnet/minecraft/class_1799;I)I`
     [18dc1c0d0]: `POOL[0x9711,0x1ac]` (428 bytes) — slot-search cluster.
   - `aoN`/`aoQ` indy bootstraps [18dc722a0, 18dc80710]: `POOL[0x857,0x26]`
     (`odHandle` — shared with neighbors).
   - `_de547…` clinit [18dc83420]: `POOL[0x226,0xd]` (infra).
5. Yarn mapping: `method_7368`=`PlayerInventory.getHotbarSize()` (as static via
   `class_1661`), `method_5438`=`PlayerInventory.getStack(int)`,
   `method_7972`=`ItemStack.copy()`, `method_6047`=`LivingEntity
   .getMainHandStack()`, `method_31548`=`PlayerEntity.getInventory()`,
   `method_67532`=`PlayerInventory.getSelectedSlot()`, `method_17777`=
   `BlockHitResult.getBlockPos()`, `method_17780`=`BlockHitResult.getSide()`;
   classes `class_1661`=PlayerInventory, `class_465`=HandledScreen,
   `class_490`=`InventoryScreen`, `class_304`=KeyBinding (`[Lnet/minecraft/
   class_304;` = `iX.HpSlL`, the static KeyBinding[] array in the `iX` helper),
   `class_1747`=BlockItem, `class_3965`=BlockHitResult.
6. Decrypted constants: **none for dO in `analysis/decrypted/full-dump.jsonl`**
   (dump covers neighbors like dP but not dO's `aoQ`/`aoN` tables) — all setting
   display names, int defaults and the `FvAmO` unit string are unrecovered.

## Runtime model

- **Events** (all `@hG`, registered through `gg.YO()` → `hF.bdM`):
  - `aou(gz)` [18dcab7f0] — **key event** (`gz` = Key event: `Key` + `Map<Key,
    List<KeyBinding>>`, with `bbK(KeyBinding)` membership test) — the
    save/restore trigger on the bound key.
  - `aos(gA)` [18dc087e0] — **input event** (`gA` wraps `MouseInput` +
    `KeyInput` + 3 ints — pre-input hook; candidate extra trigger or
    cancelation path; role unrecovered).
  - `aov(gq)` [18dcb1160] — **screen-open event** (`gq` carries `lC` screen
    wrapper `bbp()` + `HandledScreen<?> bbq()`); window tokens `sixtwo/gq`,
    `bbq`, `field_8037` confirm it consumes this event. This is the entry that
    runs the *restore through the open inventory screen* (pairs with `aoA`).
  - `aot(gH$th)` [18dc640b0] — render event (2-D stage): renders the saved/
    pending slot overlay using `pWzHb` (`kW` 2-color render style built from
    `mG.UhgnI` + `jk.jEkxo.cob(0.8f)` — 0.8-alpha outline/fill).
- **State fields** (typed in Java, lifecycle native):
  `vASOe = new ItemStack[PlayerInventory.getHotbarSize()]`,
  `Arrays.fill(vASOe, ItemStack.EMPTY)` (dO.java:126-128) — the hotbar
  snapshot; `lIFPa` boolean — snapshot-valid/"restoring" latch (in-window
  token `lIFPa` right after `sixtwo/dO`); `fPfGt` int — cursor/index state
  (slot being restored or remaining-count); `CISmK = mT.cpz()` — mT timer
  gating the restore cadence (pairs with the `FvAmO` delay setting).
- **Arbitration**: `dcw` token in the core window — `qN.dcw(gg)` is the
  module-action claim registry also referenced by fr; dO claims the inventory
  interaction while restoring.
- **Inventory action stack**: `iX.HpSlL` (`[Lclass_304;`) — vanilla keybinding
  array used to synthesize swap-key presses (`method_23481 setPressed` family —
  same surface as eK's window); `sixtwo/iX|HpSlL` tokens confirm. Restoration is
  done either by picking destination slots directly (`aoF`/`aoG`/`aoH`) or by
  simulating the vanilla hotbar-swap keybindings (both surfaces present; split
  unrecovered).

## Per-handler semantics

- **`aou (Lsixtwo/gz;)V` — key event [18dcab7f0]**. Core window. Contract: on
  the module key (or configured trigger) — first press snapshots the hotbar
  (`vASOe` ← `getStack(i).copy()` for i in `[0, getHotbarSize())` + selected
  slot `method_67532`), sets `lIFPa`; next press restores. Save vs restore
  branch is VM bytecode — unrecovered.
- **`aov (Lsixtwo/gq;)V` — screen-open event [18dcb1160]**. Core window.
  Contract: while an inventory-family screen (`class_490` InventoryScreen /
  `class_465` HandledScreen) is open, run the restore through container clicks:
  `aoA((AbstractContainerScreenAccessor) screen, screen, lC)` — the accessor
  gives the `handledScreen`'s `getScreenHandler()` for `ClickSlot`-style moves.
- **`aoA (Lmixin/accessors/AbstractContainerScreenAccessor;Lnet/minecraft/
  class_465;Lsixtwo/lC;)V` — screen-driven restore [18dce7790]**. Core window;
  the full descriptor is an in-window token. Performs the actual slot swaps on
  the open screen. Details unrecovered.
- **`aoF (Lnet/minecraft/class_1661;Lnet/minecraft/class_1799;I)I`
  [18dc1c0d0]** — slot search, own window `POOL[0x9711,0x1ac]`: `method_31548`
  (`getInventory`), `method_67532` (`getSelectedSlot`), `method_5438`
  (`getStack`), `WX (Lnet/minecraft/class_1799;)Z` (stack-matching helper,
  `jg.WX`-style, owner unproven), `alf (Ljava/util/function/Predicate;)I`,
  `bzd (Lnet/minecraft/class_1799;Ljava/lang/Class;)Z` (item-type test),
  `class_1747` (BlockItem), `method_6047` (`getMainHandStack`), `field_1332`,
  `class_3965`+`method_17777`/`method_17780` (crosshair block-hit context).
  Contract: find the inventory index holding `stack` at/after index —
  i.e. locate where an item should be restored *from* or *to*.
- **`aoG (…same signature…)I` [18dc27f10]** — second-pass slot search over the
  core window (fallback strategy: swap-any/different match mode). Exact
  difference from `aoF` unrecovered.
- **`aoH (Lnet/minecraft/class_1661;)I` [18dc33200]** — core window; returns an
  int for the inventory (first free hotbar slot / restore cursor). Unrecovered.
- **`aoD (Lnet/minecraft/class_1799;Lnet/minecraft/class_1799;)Z`
  [18dc17290]** / **`aoE (same)Z` [18dc1bbb0]** — stack-equality comparators
  (strict copy-equality vs item-only match). Core window; distinction
  unrecovered.
- **`aoB ()Z` [18dc0dbe0]** / **`aoC ()Z` [18dc12590]** — core-window gates
  (snapshot-valid / can-restore / in-inventory-screen style predicates).
  Unrecovered.
- **`aoI ()Ljava/lang/Boolean;` [18dc3a600]** — private `Boolean` supplier wired
  as the `FvAmO` visibility gate (`FvAmO…Vf(this::aoI)`, dO.java:122) — three-
  state visibility condition. Comparison body unrecovered.
- **`aow ()V` [18dcb62c0] / `aox ()V` [18dcbf7e0] / `aoy ()V` [18dcd2890] /
  `aoz ()V` [18dcdb8b0]** — four private void workers over the core window
  (snapshot-apply / tick pump / restore-step / cleanup candidates). Which is
  which is unrecovered; `aox`/`aoz` follow `NTcLD`/`LjWLs` tokens respectively in
  window order (weak ordering hint, not proof).
- **`aos (Lsixtwo/gA;)V` — input event [18dc087e0]** and **`aot (Lsixtwo/gH$th;)V
  — render [18dc640b0]** — core window; see runtime model. Render body
  unrecovered.
- **`YO ()V` [18dc082c0]** — overrides `gg.YO()`; window `POOL[0x3806,0xbf]`
  (HUD-widget neighborhood; fr-attribution notes in fr.md apply verbatim).
  Probably initializes the module's `gd` state / color; unproven.
- **Trivial**: `aoJ (MatchException)MatchException` [18dc3ab70] identity rethrow;
  `aoK ([B)String` [18dc3ac00] string decoder; `aoL (IJ)String` [18dc6a1a0] /
  `aoO (IJ)I` [18dc74d60] pool string/int decryptors (~560/~430 lines MBA
  arithmetic — anti-analysis noise); `aoM`/`aoP` indy transition helpers;
  `aoQ`/`aoN` [18dc80710, 18dc722a0] indy bootstraps; `_de547…` clinit.

## Settings → behavior mapping

Six+1 settings; **display names and defaults unrecovered** (dO absent from
`full-dump.jsonl` — the `aoQ("o",…)` indy tables were never reconstructed).
Field/type/chain facts verbatim from the decompiled constructor:

| field | type | chain (verbatim) | behavior role |
|---|---|---|---|
| `ERHWx` | `cD` (int) | `.VO((int)dO.aoQ("o", 13004, …))` | int option (default = decrypted const, unrecovered); candidate "Save Slot"/mode |
| `LjWLs` | `cD` (int) | `.VO((int)dO.aoQ("o", 6077, …))` | second int option |
| `RPJPb` | `ct` group | `new ct(this, …4 ints…)` | mode group |
| `NTcLD` | `cu` child | `new cu(RPJPb, …)` | mode child 1 (named in window order near `aow`/`NTcLD`) |
| `byQPn` | `cu` child | `new cu(RPJPb, …)` | mode child 2 (token `byQPn` sits next to `ERHWx` in window order) |
| `OMKFJ` | `cJ` | `.WE(false)` (default off) | toggle (name unrecovered; 23-char label) |
| `FvAmO` | `cC` | `.Vy(10.0).Vw(0.0).Vx(500.0).VA(0.0).Vz(aoN("m",17797,…)).Vf(this::aoI)` — step 10, min 0, max 500, default **0**, unit suffix string, visibility supplier `aoI` | delay (ms-scale range ⇒ per-mT-timer delay between restore clicks); unit string most likely `" ms"` — unproven |

Behavior-relevant wiring (Java, exact): `pWzHb = new kW(mG.UhgnI,
jk.jEkxo.cob(0.8f))` render style; `vASOe` snapshot buffer sized
`PlayerInventory.getHotbarSize()`; `CISmK` mT timer.

## Unrecovered / uncertain

1. **All setting names/defaults** for dO (absent from the decrypted dump) — the
   two `cD` int defaults, group/mode labels, `OMKFJ` and `FvAmO` suffix strings.
2. **Save vs restore trigger split** (`aou`/`aos`/`aov` roles): which event
   saves, which restores, and whether restore also triggers without a screen
   (direct `aoF/aoG/aoH` path) is VM bytecode.
3. **`aoF` vs `aoG`** search-strategy difference; **`aoD` vs `aoE`** comparator
   difference.
4. **Which worker is which** (`aow/aox/aoy/aoz`) — only weak window-order
   adjacency to setting tokens; no proof.
5. **`fPfGt` int semantics** (restore cursor vs selected-slot save) unrecovered.
6. **`sixtwo/iX|HpSlL` key-synthesis path**: whether restoration goes through
   simulated vanilla swap keybindings (`method_23481 setPressed` surface shared
   with the eK/dH/dJ window family) or via `ClickSlot` on the open screen, or
   both, is unresolved.
7. **`YO`/`gd` initialization** — same HUD-window ambiguity as fr (shared
   `POOL[0x3806,0xbf]`).
