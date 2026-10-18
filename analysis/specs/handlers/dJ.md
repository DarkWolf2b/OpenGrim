# Mouse Tweaks (sixtwo.dJ) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/dJ` ("Mouse Tweaks" — registry: "Enhances
inventory management"), derived from native handler decompiles, decrypted tokens and
decompiled signatures. Companion to `analysis/specs/modules/dJ.md`. This is a
utility-category module (`gh.qBzlZ`, same category constant as dW Freecam).

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dJ.c` | PRIMARY: 32 native handler decompiles |
| `analysis/decompiled/payload-named/sixtwo/dJ.java` | full constructor: settings tree, state fields, typed method signatures |
| `analysis/specs/modules/dJ.md` + `analysis/decrypted/full-dump.jsonl` | setting display names (15 settings, all decrypted) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | MC surface mapping (below) |

Handler → pool-blob usage map (POOL base rva `0x301ee40`):

| Blob (off,len) | Handlers |
|---|---|
| `0x9cc4,0x1c1` | 23 behavior handlers — dJ's own field/method pool (`wZqCT`, `MfpDd`, `UGWve`, `aLgGR`, `hRuUo`, `kshzP`, `AkIWJ`, …) |
| `0xa21e,0x1c6` | `amK` `[18ddadfd0]`, `amM` `[18ddafd90]` — mixin-accessor window |

MC surface recovered verbatim from the pool windows:
- `PlayerEntity.currentScreenHandler` (field_7512, class_1703 `ScreenHandler`)
- `MinecraftClient.interactionManager` (field_1761, class_636
  `ClientPlayerInteractionManager`) with `clickSlot(syncId, slot, button, SlotActionType,
  PlayerEntity)` (method_2906)
- `ScreenHandler.syncId` (field_7763), `ScreenHandler.getCursorStack()` (method_34255)
- `SlotActionType.PICKUP` (field_7790), `SlotActionType.QUICK_MOVE` (field_7794)
- `Slot.id` (field_7874), `Slot.getStack()` (method_7677), `ItemStack.isEmpty()` (method_7960)
- Special slot types: `CraftingResultSlot` (class_1734), `FurnaceOutputSlot` (class_1719)
- `BundleItem` (class_5537) — bundle special-case
- `SignEditScreen` (class_498) — screen exclusion candidate (token `'744'`+`'alD'` precede
  it; unresolved, see uncertain)
- Mixin: `mixin/accessors/AbstractContainerScreenAccessor.invokeGetHoveredSlot(DD) → Slot`
  and `setSkipNextRelease` — dJ ships with (or pairs with) an accessor mixin on
  `AbstractContainerScreen` and a skip-next-release flag on the screen.

## Runtime model

dJ is a screen-space inventory helper (MouseTweaks-mod-style). No network packets of its
own; it issues vanilla `clickSlot` calls with `PICKUP`/`QUICK_MOVE` action types through
`MinecraftClient.interactionManager`.

State fields (`dJ.java`):
- `bGfmG : Screen` — currently watched screen (set by `amI`).
- `wZqCT : Slot` — the slot under the cursor (last hovered slot, set by `amK`).
- `AoTLF : double` — scroll accumulator (raw wheel deltas summed before thresholding).
- `MfpDd`, `UGWve`, `aLgGR : boolean` — interaction phase flags (LMB drag active / release
  pending / wheel step in progress).

Public input surface (called by the client's input hooks / mixin):
- `amy(HandledScreen, x, y, button)` `[18ddba7f0]` — mouse clicked.
- `amz(HandledScreen, x, y, button)` `[18ddf3750]` — mouse released.
- `amx(HandledScreen, x, y, button)` `[18dd9ecc0]` — mouse drag (move while held).
- `amA(HandledScreen, x, y, wheelDelta) → Z` `[18de18610]` — mouse scrolled; returns true
  when the wheel tweak consumed the event.
- `amI(Screen)` `[18dda9b70]` — screen open/close hook (clears `wZqCT`/flags when the
  screen leaves a `HandledScreen`; pairs with the `SignEditScreen`/`class_498` token).

## Per-handler semantics

All bodies are dispatcher stubs over the two pool slices (behavior bytecode virtualized);
signatures are fully recoverable and give the contract:

- Slot acquisition: `amK(HandledScreen, x, y) → Slot` `[18ddadfd0]` — hovered-slot lookup
  via the mixin accessor (`invokeGetHoveredSlot(DD)`); stores into `wZqCT`.
  `amM(HandledScreen)` `[18ddafd90]` — per-tick/per-frame screen maintenance (same mixin
  window; refreshes hovered slot / cursor state).
- Eligibility filters: `amG(HandledScreen) → Z` `[18dda53e0]` (screen usable — compares
  against `PlayerEntity.currentScreenHandler`), `amN(Slot) → Z` `[18ddb0030]` (slot
  eligible — excludes `CraftingResultSlot`/`FurnaceOutputSlot`-style output slots),
  `amO(Slot, HandledScreen) → Z` `[18ddb4420]` (slot vs handler combination check),
  `amH(int) → Z` `[18dda98c0]` (button/slot-id check), `amV() → Z` `[18dde0f70]` (module
  active gate).
- Item matching: `amP(ItemStack, ItemStack) → Z` `[18ddb5e40]` — "same item" comparison
  driving the LMB drag-transfer merge rule.
- Ordering: `amR(List<Slot>, Slot, int, boolean) → List<Slot>` `[18ddc8c90]` — builds the
  transfer order from the anchor slot ("First To Last"/"Last To First" setting); 
  `amQ(List<Slot>, Slot) → Slot` `[18ddbf610]` — next-slot iterator;
  `amS(Slot, List<Slot>) → Z` `[18ddd4fb0]` — membership/position check ("Position
  Aware" modes).
- Transfer workers: `amF(HandledScreen, Slot, ItemStack)` `[18de46cd0]` (LMB tweak step),
  `amB(HandledScreen, Slot, ItemStack)` `[18de25df0]` (RMB tweak step), and the drag
  fillers `amD`/`amE(HandledScreen, Slot, ItemStack, ItemStack, List<Slot>, int)`
  `[18de34dc0, 18de3e1a0]`, `amC(…, int, boolean)` `[18de2dd60]` (same + flag).
- Wheel: `amT(double) → D` `[18dddb720]` — wheel scaling ("Scroll Item Scaling": delta →
  item count multiplier); `amL(HandledScreen, Slot, int, boolean)` `[18ddae2b0]` — one
  wheel-tweak step (move N items in the chosen order/direction).
- Misc: `amJ()V` `[18ddad850]` — state reset; `amU() → Z` `[18dddc470]` — status probe.
- Infra: `amW/amX/amY/amZ`, class-init `_f6f055b5…` `[18ddfd4d0]`, `YO` `[18dd9e9d0]`.

## Settings → behavior mapping

Constructor chains verbatim (names all decrypted in `modules/dJ.md`):

| Field | Widget | Chain | Setting |
|---|---|---|---|
| `hRuUo` | `cJ` | `.WE(true)` | **"RMB Tweak"** |
| `Twcyd` | `cJ` | `.WE(true)` | **"LMB Tweak Without Item"** |
| `AkIWJ` | `cJ` | `.WE(true)` | **"LMB Tweak With Item"** |
| `kshzP` | `cJ` | `.WE(true)` | **"Wheel Tweak"** |
| `MjLVq` | `ct` | group, no `.SO()` | **"Wheel Search Order"** |
| `GndWc` | `cu` child | — | **"First To Last"** option |
| `lULpb` | `cu` child | `.SY()` default marker | **"Last To First"** — default |
| `XujOg` | `ct` | group | **"Wheel Scroll Direction"** |
| `BEFfA` | `cu` child | `.SY()` default | **"Normal"** — default |
| `FkJRf` | `cu` child | — | **"Inverted"** |
| `RCVzG` | `cu` child | — | **"Position Aware"** |
| `iUlIH` | `cu` child | — | **"Position Aware Inverted"** |
| `cnoHj` | `ct` | group | **"Scroll Item Scaling"** |
| `YdPTn` | `cu` child | `.SY()` default | **"Proportional"** — default |
| `QgNbo` | `cu` child | — | **"Always One"** |

Defaults: `lULpb` "Last To First" is the default wheel search order; `BEFfA` "Normal" the
default wheel scroll direction; `YdPTn` "Proportional" the default scroll-item scaling;
the four tweak toggles all default **on**.

Behavior mapping (all exact-mode logic native-blocked): LMB drag over slots moves items
into/out of the held stack (`amF`/`amD`/`amE`/`amC` with `PICKUP`, merge rule `amP`),
RMB distributes one item per click (`amB`), the wheel moves items between the hovered
slot and the cursor stack in configurable order/direction with scaling
(`amT`/`amL`/`amR`/`amQ`).

## Unrecovered / uncertain

- All clickSlot sequences (slot ids, buttons, action-type choices per tweak) are in the
  j2cc VM — the call `method_2906`/`PICKUP`/`QUICK_MOVE` are present but the exact
  invocation patterns are not.
- Role split of the three public click handlers (`amy`/`amz`/`amx`) vs vanilla behavior
  (which one sets `setSkipNextRelease`) is inferred from MouseTweaks semantics, not proven.
- Token `'744'`/`'alD'` before `class_498` (SignEditScreen) in the `0x9cc4` window —
  possibly a screen blacklist check or a straddled token from a neighbor; unresolved.
- `amH(int)`, `amU()`, `amV()` exact predicates and the boolean flag meanings
  (`MfpDd`/`UGWve`/`aLgGR`) are native-blocked.
- `BundleItem` special-casing (class_5537) is present but its exact rule (one item per
  scroll step? skip?) is unknown.
