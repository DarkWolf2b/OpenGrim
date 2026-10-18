# Inventory Move (sixtwo.ek) — handler-derived behavior spec

Class: `sixtwo/ek` · display name **Inventory Move** · registry description
"Allows to move inside screens" · primary key 47, active bind -999 (unbound)
[`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`ek | Inventory Move | 9 | 9 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_ek.c` — **9 native handlers** +
   continuation blocks. Handlers `asT/asU/asV/asW` decrypt the class slice;
   `asV` additionally decrypts a second slice. Citations are image addresses.
2. Slices `POOL[0xcd0c,0x230]` (main) and `POOL[0x9c5a,0x1bd]` (`asV` only),
   resolved via `analysis/tools/resolve_pool_blob.py`.
3. Java skeleton: `payload-named/sixtwo/ek.java` + decrypted
   `payload-decrypted/sixtwo/ek.java`.
4. Supporting classes: `gB` (screen-click event: `SlotActionType`, slot, button,
   mode ints), `class_304` mapping (`KeyBinding`), `hc` (helper referenced),
   `dH`/`dJ` (No Sign Screen / Mouse Tweaks, referenced).
5. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/ek.md`.

## Runtime model

- `super(gf.aZL(47, false, gh.xgeEn))` — id 47, category `gh.xgeEn` (the
  movement category shared with Strafe/Flight) `[decompiled ek.java:22]`.
- Single setting `FjUNy` — **"Block Clicks"** (`cJ` boolean)
  `.WE(false)` — name from fold
  `[66,108,111,99,107,32,67,108,105,99,107,115]` = "Block Clicks"
  `[decompiled, decrypted ek.java:24-37]`.
- Four `@hG` listeners and one public predicate:
  `asT(gH$th)` (tick), `asU(gB)` (screen click event —
  `SlotActionType`/slot/button), `asW(class_304)` (**KeyBinding** handler —
  present only in the native corpus; declared `native` in no Java stub? — it
  appears in the stitched corpus with descriptor
  `(Lnet/minecraft/class_304;)V`, image `[18d237180]`), and `asV()Z`
  (public boolean query) `[stitched corpus + decompiled stub]`.
- Main-slice (ek's own run, between `sixtwo/ek` and `sixtwo/el` markers):
  - `sixtwo/gB`, `method_1429` → `KeyBinding.getDefaultKey()` (hmm —
    mapped `()Lnet/minecraft/class_3675$class_306;` =
    `InputUtil.getDefaultKey`-shaped; `class_3675$class_306` = `InputUtil.Key`
    with `method_1444` → `InputUtil.Key.getCode()`) — key-code comparison
    machinery `[slice, tiny-mapped]`.
  - `net/minecraft/class_471` (`AnvilScreen`), `net/minecraft/class_477`
    (`CommandBlockScreen`), `net/minecraft/class_497`
    (`StructureBlockScreen`) — screen-type checks `[slice, tiny-mapped]`.
  - ek fields/statics and plumbing natives `[slice]`.
- `asV`-slice (`POOL[0x9c5a,0x1bd]`): `net/minecraft/class_304`
  (`KeyBinding`) + `method_23481` → **`KeyBinding.setPressed(Z)`** —
  movement-key simulation; `class_465` (`HandledScreen`) with predicate
  `(Lnet/minecraft/class_465;)Z` and `(class_465;DD)Lnet/minecraft/class_1735;`
  (slot-at-position over `class_1735` `Slot`); `field_7512` →
  **`ScreenHandler`** (`currentScreenHandler`); `method_34255` →
  `getCursorStack()`; `method_7960` → `isEmpty()`; `class_498`
  (`SignEditScreen`), `class_7744` (`HangingSignEditScreen`); references
  `sixtwo/dH` (No Sign Screen) and `sixtwo/dJ` (Mouse Tweaks)
  `[slice, tiny-mapped]`.
- Window straddle: from `sixtwo/el` onward (`field_6166` FEET,
  `field_9128` DEPTH_STRIDER enchantment, `field_5904` SPEED effect,
  `method_6059 hasStatusEffect`, `class_2386 IceBlock`, `bCg (ItemStack,
  RegistryKey)Z`, `sixtwo/jl bDR (DDD)Block`) belongs to **el (Water Speed)**
  — NOT ek `[window straddle, stub-matched]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_9c9b6f0fd399ea825680701554b84b00()V` | `[18d246e40]` | native clinit stub |
| `asT(Lsixtwo/gH$th;)V` | `[18d21dfb0]` | tick listener (behavior — virtualized) |
| `asU(Lsixtwo/gB;)V` | `[18d228970]` | screen-click listener (behavior — virtualized) |
| `asV()Z` | `[18d22d110]` | public screen-state query (virtualized; uses 0x9c5a slice) |
| `asW(Lnet/minecraft/class_304;)V` | `[18d237180]` | per-`KeyBinding` handler (virtualized) |
| `asX(MatchException)MatchException` | `[18d237710]` | identity rethrow |
| `asY(IJ)I` | `[18d2377a0]` | int-constant decrypt kernel |
| `asZ(Lookup;MutableCallSite;String;[Object;)I` | `[18d243120]` | MutableCallSite re-bootstrap |
| `ata(Lookup;String;MethodType;)CallSite` | `[18d244130]` | indy bootstrap |

- **`asT(gH$th)` [18d21dfb0]** — while a screen is open, poll movement keys
  and drive them via `KeyBinding.setPressed(Z)` so the player walks with an
  inventory open; screen-type exclusions (`AnvilScreen`, `CommandBlockScreen`,
  `StructureBlockScreen`, sign screens) protect text/typing UIs
  `[slice, inferred]`.
- **`asW(KeyBinding)` [18d237180]** — per-key handler consistent with
  forwarding key state into/out of open screens (press/hold bookkeeping)
  `[slice, inferred, uncertain]`.
- **`asU(gB)` [18d228970]** — when **Block Clicks** is enabled, intercept
  screen clicks (`gB` carries `SlotActionType`, slot, button) and cancel them
  under conditions the VM decides (prevents click-through while moving);
  exact predicate virtualized `[slice, inferred, uncertain]`.
- **`asV()` [18d22d110]** — public query consumed by sibling modules (the
  slice's `dJ` Mouse Tweaks reference suggests click-gating reuse): "is the
  current screen a `HandledScreen` with an empty cursor stack /
  movement-safe?" — exact boolean contract unrecovered `[uncertain]`.

## Settings → behavior

- **`FjUNy` — `"Block Clicks"` (`cJ`, `.WE(false)`)** `[decompiled]` —
  enables blocking of screen clicks (typical inventory-move anti-misclick);
  couples with `asU`.
- Registry: id 47, bind -999, description "Allows to move inside screens"
  `[registry]`.
- No numeric settings; movement speed inside screens is vanilla (no speed
  tokens in ek's run) `[negative evidence]`.

## Unrecovered

1. Which movement keybindings are simulated and whether sneak/jump are
   included (`setPressed` targets unrecovered).
2. The `asV()` boolean's exact contract (consumed externally).
3. The `asU` cancel condition (which `SlotActionType`s, which buttons).
4. Why `AnvilScreen`/`CommandBlockScreen`/`StructureBlockScreen` are listed
   (exclusion vs. special-case) — virtualized `[uncertain]`.
