# Attribute Swap (sixtwo.fh) — handler-derived behavior spec

Class: `sixtwo/fh` · display name **Attribute Swap** · registry description
"Automatically performs attribute swap" · primary key 139, active bind -999
(unbound) [`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`fh | Attribute Swap | 8 | 8 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fh.c` — **8 native handlers** +
   continuation blocks; behavior handlers `aJf`/`aJg` decrypt one class slice
   `POOL[0x11b99,0x2dd]`. Citations are image addresses.
2. Java skeleton: `payload-named/sixtwo/fh.java` + decrypted
   `payload-decrypted/sixtwo/fh.java`.
3. Helpers: `ol` (per-module CPS/action scheduler — same helper as eF Spear
   Reach and eO), `hw`/`hw$tv` (attack event: `Entity bdm()`, one-shot latch
   `dps()/dpt()`), `mT` timer semantics.
4. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/fh.md`.

## Runtime model

- `super(gf.aZL(139, false, gh.xwjCw))` — id 139, category `gh.xwjCw`
  `[decompiled fh.java:38]`.
- Settings (names decrypted verbatim):
  - `aYWtO` — **"Target Slot"** (`cC`): `.Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0)` —
    step 1, min 1, max 9, default 1 (hotbar slot 1–9) `[decrypted fh.java:39-52]`;
  - `bQVAY` — **"Return Delay"** (`cA`):
    `.UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(NXMEC)` — step 10, min 0,
    max 1000, default pair (50, 100), suffix `NXMEC` (unrecovered)
    `[decrypted fh.java:53-67]`;
  - `nJGrs = new ol(this)` — action scheduler `[decrypted fh.java:68]`.
- Two `@hG` listeners: `aJf(gH$th)` (tick) and `aJg(hw$tv)` (**attack event**
  with one-shot latch — `hw$tv.dpt()` marks "consumed", the exact pattern eF
  Spear Reach uses to swap-and-attack-once) `[decompiled + eF.md precedent]`.
- fh's own symbol run (between `sixtwo/fh` and the `sixtwo/fi` marker):
  - `method_7976` → `ItemStack.getUseAction()` + `net/minecraft/class_1839`
    (`UseAction`) + `field_8952` → **`UseAction.NONE`** — identifies a
    "do-nothing" filler item `[slice, tiny-mapped]`.
  - `aJt (Lnet/minecraft/class_1799;Lnet/minecraft/class_1792;)Z` —
    stack-is-item test `[slice]`.
  - Data-component probes: `field_53964` → **`ComponentType.CONSUMABLE`**
    (`class_9331` = `ComponentType`) + `method_57826` →
    `ComponentType.contains(...)`-shaped `(Lnet/minecraft/class_9331;)Z`;
    `field_56396` → **`DataComponentTypes.BLOCKS_ATTACKS`**;
    `field_63632` → **`DataComponentTypes.KINETIC_WEAPON`**; `field_54196` →
    **`DataComponentTypes.EQUIPPABLE`** `[slice, tiny-mapped]`.
  - Placement cluster: `net/minecraft/class_1750` (`ItemPlacementContext`) +
    `field_54196`-adjacent plumbing, `aJu (ItemStack, BlockItem, BlockHitResult)Z`,
    `(PlayerEntity, Hand, ItemStack, BlockHitResult)V`, `method_16356` →
    `ItemPlacementContext.getPlacementContext()`-shaped
    `(Lnet/minecraft/class_1750;)Lnet/minecraft/class_1750;`,
    `net/minecraft/class_1747` (`BlockItem`) `[slice, tiny-mapped]`.
  - fh fields/statics + obfuscation `ZCUlU/NXMEC/Iwfrf/wouum/KDvfW` `[slice]`.
- Technique: on attack (`hw$tv`), if the attacking stack carries the relevant
  component (e.g. `KINETIC_WEAPON` — the 1.21.11 spear/mace kinetic family)
  and the other hotbar slot doesn't, swap the two stacks (`Target Slot` ↔
  mainhand), let the attack land with the right attribute set, then swap back
  after **Return Delay** via the `ol` scheduler. `UseAction.NONE` +
  `CONSUMABLE`/`BLOCKS_ATTACKS`/`EQUIPPABLE` probes identify which stack is
  the "attribute" item vs. the filler `[slice, inferred]`.
- The placement cluster (`aJu`/`BlockHitResult`/`getPlacementContext`) sits at
  the window tail — it is **fi's** head (fi = neighbor module) unless fh
  places blocks; attribution uncertain (fh's registry description says only
  "attribute swap") `[window straddle, uncertain]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_b58c3a1e6fcffbd8ed7b7af2a9e6b5d0()V` | `[18c9d22a0]` | native clinit stub |
| `aJf(Lsixtwo/gH$th;)V` | `[18c990c90]` | tick listener: return-swap timer upkeep (virtualized) |
| `aJg(Lsixtwo/hw$tv;)V` | `[18c994c90]` | attack-event listener: pre-attack swap (virtualized) |
| `aJh(MatchException)MatchException` | `[18c99a000]` | identity rethrow |
| `aJi([B)Ljava/lang/String;` | `[18c99a090]` | string decryptor (suffix `NXMEC`) |
| `aJj(IJ)I` | `[18c9c3220]` | int-constant decrypt kernel (decrypts `POOL[0x11b99,0x2dd]`) |
| `aJk(Lookup;MutableCallSite;String;[Object;)I` | `[18c9ce580]` | MutableCallSite re-bootstrap |
| `aJl(Lookup;String;MethodType;)CallSite` | `[18c9cf590]` | indy bootstrap |

- **`aJg(hw$tv)` [18c994c90]** — decrypts `POOL[0x11b99,0x2dd]`,
  `ExceptionCheck`, VM dispatch. Recovered shape: consume the latch
  (`dpt()`), evaluate the held stack's components, perform the hotbar↔Target
  Slot exchange, and re-arm the `ol` scheduler for the return swap
  `[slice, inferred]`.
- **`aJf(gH$th)` [18c990c90]** — after Return Delay, swap back and reset
  `[inferred]`.

## Settings → behavior

| field | wrapper | chain (verbatim) | notes |
|---|---|---|---|
| `aYWtO` | `cC` | `"Target Slot" .Vy(1.0) .Vw(1.0) .Vx(9.0) .VA(1.0)` | step 1 / min 1 / max 9 / default 1 |
| `bQVAY` | `cA` | `"Return Delay" .UG(10.0) .UE(0.0) .UF(1000.0) .UI(50.0, 100.0) .UH(NXMEC)` | step 10 / min 0 / max 1000 / default 50, current 100 |

- Decrypted name constants verified in `full-dump.jsonl` (class `sixtwo.fh`):
  "Target Slot", "Return Delay" `[full-dump]`.
- Registry: id 139, bind -999, description "Automatically performs attribute
  swap" `[registry]`.

## Unrecovered

1. Which components select the "attribute" item (`KINETIC_WEAPON` vs
   `BLOCKS_ATTACKS` vs `EQUIPPABLE`/`CONSUMABLE` probes — likely a priority
   chain, order unrecovered).
2. Whether the swap is a `ClickType.SWAP` window click or a direct
   `PlayerInventory` write (no click tokens in fh's segment).
3. The placement-cluster attribution (fh vs fi) and the suffix literal
   `NXMEC`.
4. Time units of Return Delay (0–1000 step 10 — ms-like) `[uncertain]`.
