# Shield Block (sixtwo.fi) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_fi.c` — 14 stitched handlers, 156 continuation blocks, 108 `halt_baddata()`, 0 `rdtsc`.
- Structural: `analysis/specs/modules/fi.md`; registry `sixtwo.fi|Shield Block|Automatically switches to shield when right clicked|key=155|bind=-999`.
- Java: `analysis/decompiled/payload-named/sixtwo/fi.java` — NO settings, NO instance state fields (only static decrypt longs `mrGdR`, `PeXkt`); all behavior native.
- Yarn: class_1799=ItemStack, class_1792=Item, class_1747=BlockItem, class_3965=BlockHitResult, class_1657=PlayerEntity, class_1268=Hand, class_1750=ItemPlacementContext, class_1839=UseAction, class_9331=ComponentType; method_7976=ItemStack.getUseAction(), field_8952=UseAction.NONE, field_56396=DataComponentTypes.BLOCKS_ATTACKS, field_53964=DataComponentTypes.CONSUMABLE, field_54196=DataComponentTypes.EQUIPPABLE, field_63632=DataComponentTypes.KINETIC_WEAPON, method_57826=ComponentHolder.contains(ComponentType).

## Runtime model

Module extends `gg`, key 155. Zero settings (unique in the batch — a fire-and-forget toggle module). All logic in the `$mango$` VM; every functional handler shares ONE pool window POOL[0x11be3,0x2de] (truncated after `(Lnet/minecraft/class_1657;Lnet/minecraft/class_1268;Lnet/minecraft/…`).

Contract: when the player right-clicks (gM event), the module swaps the held item for a shield so the incoming interaction is shielded, then restores. Shield identification is component-based, not class-based: a stack whose components `contains(DataComponentTypes.BLOCKS_ATTACKS)` (`method_57826` + `field_56396`) is treated as the shield. Competing stacks are classified by `CONSUMABLE` (food), `EQUIPPABLE` (wearable), `KINETIC_WEAPON` (modern weapon component) — the module only switches when the current interaction is not one of those protected actions. Gate `ItemStack.getUseAction() == UseAction.NONE` (`method_7976`/`field_8952`) — do not swap while an item is in use (eating/drinking/blocking).

## Per-handler semantics

Trivial (group): `aJx` (MatchException identity rethrow), `_55a4974b…` clinit [18c75e220] over POOL[0x226,0xd].

- `YO()V` [18c752f80] — lifecycle (on-enable); POOL[0x3806,0xbf] shared gg/HUD lifecycle window (same as fr.YO/fG.aaj/fB.YO/dK.YO/fd.YO/eW.aaj/eU.YO); per-group attribution uncertain.
- `aJm(gM)` [18c753270] — main event handler on `gM` (a use/interaction-family event; `gM extends hH` bare event, and sibling modules pair `gM` with `gN` handlers — exact phase "right-click initiated" inferred from the registry wording, unconfirmed).
- `aJn(gH$th)` [18c7685d0] — render-marker frame hook (per-frame restore/monitor loop).
- `aJq()→Z` [18c77b560] — readiness/active predicate (e.g., shield already equipped).
- `aJr(ItemStack)→Z` [18c783ea0] / `aJs(ItemStack)→Z` [18c78aa40] — stack predicates: shield detection via `BLOCKS_ATTACKS` component, and the "is currently-using / protected stack" check (CONSUMABLE/KINETIC_WEAPON/EQUIPPABLE family). Per-handler assignment of the two roles is VM-hidden.
- `aJt(ItemStack, Item)→Z` [18c792e90] / `aJv(ItemStack, Item)→Z` [18c753460] — stack-vs-item comparisons (shield item identity vs held item identity).
- `aJu(ItemStack, BlockItem, BlockHitResult)→Z` [18c797540] — placement/interaction validation: takes the target stack, a BlockItem, and the BlockHitResult; window carries `class_1750` ItemPlacementContext and the truncated signature `(Lnet/minecraft/class_1657;Lnet/minecraft/class_1268;Lnet/minecraft/…` (PlayerEntity, Hand, …) — consistent with `ItemStack.use(…)`/interactBlock-style checks before allowing the switch to consume the click.
- `aJo()V` [18c76d220], `aJp()V` [18c773fe0], `aJw()V` [18c758a40] — internal steps (switch-to-shield, restore-slot, tick maintenance), split VM-hidden.

## Settings → behavior mapping

None — the module constructs no settings (verified in `fi.java`: only static decrypt fields). Behavior is fixed: single-shot swap on right-click, restore afterwards. No CPS/delay/return controls are visible natively either (no ol/mT fields in the class).

## Unrecovered / uncertain

- **gM event phase**: whether `gM` fires on right-click press, on use-item start, or each tick while holding right-click. Sibling modules (di.java `afy(gM)`/`afz(gN)` pairing) suggest a start/stop-use family but are unconfirmed.
- **Restore condition**: when the original item is swapped back (click released? interaction completed? timeout?) — unrecovered.
- **Slot logic**: which slot the shield is taken from (offhand vs hotbar scan) and how the original slot is remembered — `fi.java` has no visible state field, so the slot cache must live behind the natives (possibly one of the two `static long` decrypt fields is not decrypt plumbing — cannot confirm).
- **`aJu` exact role**: could be a can-interact check or a "would the click place a block instead" disambiguation (BlockItem + BlockHitResult + ItemPlacementContext) — unrecovered.
- **`aJo`/`aJp`/`aJw` split** of the swap/restore steps.
- Pool-only tokens: `wouum`, `Iwfrf`, `KDvfW`, `aJj`, `NXMEC`, `aJi`, `JNPbj`, `nMxfO`, `bzI`.