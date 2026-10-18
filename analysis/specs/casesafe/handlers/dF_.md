# Lever Replace (sixtwo.dF) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_dF.c` — 15 stitched handlers, 170 continuation blocks, 148 `halt_baddata()`, 1 `rdtsc` (inside the `aln` decryptor — noise).
- Structural: `analysis/specs/modules/dF.md`; registry `sixtwo.dF|Lever Replace|Automatically replaces levers and buttons|key=112|bind=-999`.
- Java: `analysis/decompiled/payload-decrypted/sixtwo/dF.java` — settings names are plain char-array literals, fully decoded below (no ambiguity).
- Yarn: class_1799=ItemStack, class_1747=BlockItem, class_1661=PlayerInventory, class_3965=BlockHitResult, class_239$class_240=HitResult$Type, class_304=KeyBinding, class_498=SignEditScreen, class_7744=HangingSignEditScreen, class_1802=Items; field_1332=HitResult$Type.BLOCK, field_1904=GameOptions.useKey, field_8281=Items.OBSIDIAN, field_8786=Items.COBWEB, field_8550=Items.BUCKET, field_8705=Items.WATER_BUCKET, field_8187=Items.LAVA_BUCKET; method_6047=LivingEntity.getMainHandStack(), method_31548=PlayerEntity.getInventory(), method_67532=PlayerInventory.getSelectedSlot(), method_31574=ItemStack.isOf(Item), method_23481=KeyBinding.setPressed(Z), method_17777=BlockHitResult.getBlockPos().

## Runtime model

Module extends `gg`, key 112, category `gh.qBzlZ` (same category as dK Auto Lever Replace — the two are siblings; dK is block-change-event driven per its spec, dF is tick-driven). All bodies in the `$mango$` VM; handlers are decrypt-stubs.

State (`dF.java`):
- `mnITY` — int, initialized `-1` (slot cache; consistent with "remember selected slot, restore after swap" idiom). Role VM-hidden.
- Static decrypt plumbing: `Qusuy`, `gWobV`, `ffcdF`, `AlKzG`.

Two pool windows:
- POOL[0x96d7,0x1ab] — tick/render core (`ald`, `ale`, `alf`, `alj`).
- POOL[0x9b3c,0x1b9] — item predicates + interaction builders (`alg`–`all`). NOTE: this window straddles eF's `awJ` window POOL[0x9b6d,0x1ba] — see attribution notes.

## Per-handler semantics

Trivial (group): `alm` (MatchException identity rethrow), `aln(IJ)→I` (seeded constant decryptor, ~4500 decompiled lines of decrypt arithmetic — plumbing), `alo`/`alp` (CallSite relays/bootstraps).

- `YO()V` [18de5c490] — lifecycle (on-enable). POOL[0x3806,0xbf] — shared gg/HUD lifecycle window (same as fr.YO/fG.aaj/fB.YO/dK.YO/fd.YO/eW.aaj); per-group attribution uncertain.
- `_d241af5c…()V` [18de81060] — static clinit; POOL[0x226,0xd] (clinit infra).
- `ald(gO$tm)` [18de5c760] — main tick handler (gO$tm = tick-family event; exact phase unrecovered). Window vocabulary: `field_1332` (`HitResult$Type.BLOCK`) — crosshair hit must be a block; `method_17777` (`BlockHitResult.getBlockPos()`) — target position; `method_6047` (`getMainHandStack()`), `method_31548` (`PlayerEntity.getInventory()`), `method_67532` (`PlayerInventory.getSelectedSlot()`), `class_1747` (BlockItem) and a helper signature `(Lnet/minecraft/class_1799;Ljava/lang/Class;)Z` (alias `bzd`) — stack-vs-class check used to verify a stack is a BlockItem. So: on tick, when the crosshair is on a block, resolve which replacement block is configured, find a matching stack in the inventory, switch to it, and place into the crosshair-targeted position.
- `ale(gH$th)` [18de9b2f0] — render-marker frame hook, same window (per-frame re-evaluation of the same pipeline).
- `alf(Predicate<ItemStack>)→I` [18deac770] — inventory slot scanner: takes a stack predicate, returns an int (slot index or -1). This is the "find matching item" primitive that `ald`/`ale` feed each item predicate into.
- Item predicates `alg`/`alh`/`ali`/`alk`/`all` `(ItemStack)→Z` [18deace90, 18dead180, 18dead470, 18deb12e0, 18deb15d0] — five predicates over POOL[0x9b3c,0x1b9], matching the five selectable checks: `Items.OBSIDIAN` (`field_8281`), `Items.COBWEB` (`field_8786`), Held Block (held-stack identity), BlockItem/Allowed-Items membership (`method_31574` `ItemStack.isOf(Item)`). Per-handler mapping of the five to the five settings is VM-hidden (below).
- Interaction side of the window: `sixtwo/oT` block-interaction attempt builder — `dwN`, `(Z)Lsixtwo/oT$vo;` (boolean variant builder), `cKF (Lnet/minecraft/class_3965;)V` (BlockHitResult setter), `sixtwo/oP`/`oQ` (`cJm ()Lsixtwo/oQ;`), `cJv (Ljava/util/function/Predicate;)Lsixtwo/oK;` (oK builder taking a stack predicate — the slot-selection builder), `sixtwo/oI` (`cIE` player+slot). Use-key spoofing: `field_1904` (GameOptions.useKey), `method_23481` (`KeyBinding.setPressed(Z)`), `class_304` — the "Instant" mode presses the use key rather than sending a manual interaction. Screen guards: `sixtwo/dH` (`stgmn`), `net/minecraft/class_498` (SignEditScreen), `net/minecraft/class_7744` (HangingSignEditScreen), `sixtwo/dJ` (`amJ`) — suppress while a sign-edit screen is open.

## Settings → behavior mapping

All names decoded from the decrypted constructor char arrays:

- `iqrsx` = "Mode" (`ct` group) with children `SMlWc` = "Instant", `QJtRA` = "Legit" — Instant uses the use-key press spoof (`useKey.setPressed`), Legit goes through the `oT` interaction-attempt builder.
- `UBzDb` = "Allowed Items" (`cK .WM(jc.WnbNG)` pool = ALL Items, preselected `.WN([WOODEN_SWORD, STONE_SWORD, IRON_SWORD, GOLDEN_SWORD, DIAMOND_SWORD, NETHERITE_SWORD])` in that order).
- `FjyNN` = "Block To Replace" (`ct` group) with children `nZWdG` = "Cobweb", `MIMsQ` = "Obsidian", `WOZWS` = "Held Block" — which block item gets placed into the lever/button position (Held Block = use whatever is currently held).

## Unrecovered / uncertain

- **Predicate→setting mapping**: which of `alg`/`alh`/`ali`/`alk`/`all` implements Cobweb / Obsidian / Held Block / Allowed Items / BlockItem check is VM-hidden; only the token sets are proven.
- **Window straddle POOL[0x9b3c,0x1b9]**: it overlaps eF's `awJ` window POOL[0x9b6d,0x1ba]. `Items.BUCKET` (`field_8550`), `Items.WATER_BUCKET` (`field_8705`), `Items.LAVA_BUCKET` (`field_8187`) have no dF setting and are attributed to a sibling bucket module sharing the window. `OBSIDIAN`/`COBWEB`/`useKey.setPressed`/`oT`/`oI`/sign-screen tokens are attributed to dF (they match its settings/behavior); this refines eF's spec, which flagged these tokens as straddled.
- **Trigger condition**: what exactly starts a replacement (crosshair on a broken lever/button? on any block?) beyond the `HitResult$Type.BLOCK` gate is unrecovered; the "replaces levers and buttons" wording comes from the registry, not the native code.
- **`mnITY` slot-cache lifecycle** (when -1 is set/cleared).
- **gO$tm tick phase** (pre/post-tick) and the render-marker vs tick split of duties.
- Pool-only tokens not attributable per-group: `kCHAg`, `xpFMz`, `kpIhH`, `LQDTU`, `akW`, `SQ`, `UBzDb`(=Allowed Items field alias), `ffcdF`, `gWobV`, `AlKzG`, `stgmn`, `amJ`, `BBS`.