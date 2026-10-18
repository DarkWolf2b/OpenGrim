# Auto Drain (sixtwo.fw) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fw.c` — 12 JNI handlers, 132 continuation blocks, 0 unresolved table targets, **20+ jump tables missing from tables.json** (`0x101c98`, `0x11faff8`, `0x1574b58`, `0x1b8e4d8`–`0x1b8e528`, `0x1b97160`, `0x1b98188`–`0x1b981a8`, `0x1b9eca0`–`0x1b9ecd0`, …) → all native behavior bodies are VM-internal.
- Java skeleton: `analysis/decompiled/payload-decrypted/sixtwo/fw.java` — **one behavior method is NOT virtualized**: `private BlockHitResult aRb()` decompiles to a full CFR body (fluid-search raycast loop). All event handlers are native.
- Structural spec: `analysis/specs/modules/fw.md`; framework: `analysis/specs/00-framework.md`.
- Pool slice re-resolved byte-exact with `analysis/tools/resolve_pool_blob.py`: main `[0x13c42,0x31e]`, clinit `[0x226,0xd]`, bootstrap `[0x857,0x26]`.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` — 195 `(IJ)I` ints for `sixtwo.fw`; **no `(IJ)Ljava/lang/String;` entries**, so the `zAhcx` suffix literal is not statically recovered.
- Yarn: `analysis/jars/yarn-1.21.11+build.6.tiny`.

Tags: `[decompiled]`, `[slice]`, `[inferred]`, `[uncertain]`.

## Runtime model

### Identity and lifecycle

- Registry: `sixtwo.fw|Auto Drain|Automatically pickups liquid from cobweb|key=14|bind=-999` `[registry]`; id **14**; category `gh.xwjCw` = **Combat** `[decompiled]`.
- Key-mix seed: `QmxeW ^ 0x33442C7C60BBL` `[decompiled]`.
- State: `mT AOeRT` stopwatch, `List<BlockPos> NrVzh = new ArrayList<>()` (visited/cooldown list of drained positions), `oj WJJbs = new oj()` block-interaction planner `[decompiled]`.

### Settings tree (byte-exact)

- **`Mode`** (`ct` `sGDWO`) with options: **"Blatant"** (`cu` `aRvvg`), **"Legit"** (`cu` `Qksff`) `[decompiled]`.
- **`Switch Mode`** (`ct` `YBVgI`): **"Auto"** (`cu` `pJxNC`), **"Manual"** (`cu` `wbUnO`) `[decompiled]`.
- **`Auto Switch Delay`** (`cA` `KzsPl`): `.UG(1.0).UE(0.0).UF(20.0).UI(1.0, 1.0).UH(zAhcx)` — step 1.0, min 0.0, max 20.0, default 1.0; suffix string `zAhcx` **not in full-dump** (semantics of the 20.0 range ⇒ almost certainly `" ticks"`, unverified) `[decompiled, uncertain]`.
- **`Steal Mode`** (`ct` `tYcBL`) with 5 options: **"Water Cobweb"** (`ZtDkv`), **"Lava Cobweb"** (`UFdMN`), **"Water"** (`NnigP`), **"Lava"** (`vyhuq`), **"All"** (`KuKPX`) `[decompiled]`.
- **`Cancel For`** (`ct` `cuIXt`): **"Own"** (`SzYmi`), **"Friends"** (`qzZfU`) `[decompiled]`.
- **`Cancel In Screens`** (`cJ` `FbvPk`): `.WE(false)` `[decompiled]`.

### Shared helpers (one line each)

- `oj` — native block-interaction planner: `cED()` BlockPos, `cEB()/cEw()` BlockHitResult get/set, `cEC()`/`cEv()` `oz(BlockPos, BlockHitResult)` record, `cEr(oD,oB,boolean)`/`cEs(…)` plan executors, `cEu(double)` distance check, `cEA(float)`, `cEt()` status `[decompiled contract]`.
- `fx`/`fx$sT` — inventory slot manager; `fx$sT` carries `slot` / `interactionSlot` (string tokens in fw's slice); getters `()Lsixtwo/fx$sT;`, apply `(Lsixtwo/fx$sT;)V`, scoring `(Lsixtwo/fx$sT;)I` `[slice]`.
- `oH` — hotbar-slot object `(Lsixtwo/oH;)V` constructor token in slice `[slice]`.
- `oP`/`oQ` — inventory-slot scanners (`oP.cJm() → oQ<oI>`; `oQ.cJv(Predicate) → oK` item search) `[decompiled contract]`.
- `qJ` — shared use/attack engine; fw calls **`qJ.dbp(int slot, boolean, mw priority, boolean, gg)Z`** (desc `(IZLsixtwo/mw;ZLsixtwo/gg;)Z` verbatim in slice) `[slice]`.
- `fg` (Target Lock module) — `fg.aIW()` static `int[]`; fw treats non-null as "lock engaged" and relaxes candidate filtering (`aRb` decompile) `[decompiled, inferred]`.
- `mT` — ms stopwatch (as in `fL.md`) `[decompiled]`.

## Per-handler semantics

### Machinery

- **`_961434ad71bdf72b01d088a497663a38()V` [18b640b60]** `[slice 0x226,0xd]` — clinit stub (`"ang/String;" + "<"`) `[decompiled]`.
- **`aRe(MatchException)MatchException` [18b675710]** — identity rethrow `[decompiled]`.
- **`aRg(IJ)I` [18b6a0140]** — int-constant decrypt kernel (full-dump `aRi` entries) `[decompiled machinery]`.
- **`aRf([B)Ljava/lang/String;` [18b6757a0]** — byte-array decrypt trampoline `[decompiled stub]`.
- **`aRh(Lookup;MutableCallSite;String;[Object;)I` [18b6ab8a0]** — MutableCallSite re-bootstrap `[decompiled stub]`.
- **`aRi(Lookup;String;MethodType;)CallSite` [18b63de50]** `[slice 0x857,0x26]` — indy bootstrap `[decompiled machinery]`.

### Recovered Java body

- **`aRb()BlockHitResult` (Java-visible, not a handler)** — the liquid-finder. Exact behavior `[decompiled]`:
  1. `range = rD.dlmvG.player.getBlockInteractionRange()` (`Player.getBlockInteractionRange()`).
  2. Iterate `BlockPos.iterateOutwards(BlockPos.ofFloored(player.getEntityPos()).up(), range, range, range)`.
  3. Skip positions already in `NrVzh` (unless Target Lock engaged, `fg.aIW() != null`).
  4. Require `world.getFluidState(pos).isStill()` (`method_15771` in slice ✓), `block == Blocks.WATER` or `Blocks.LAVA` (field_10382/field_10164 ✓), `block.down() == Blocks.COBWEB` (field_10343 ✓), `aRc(isWater, isLava, isCobweb)` mode filter, fluid `getShape(world,pos)` non-empty (`method_15769` ✓).
  5. Sample points: for each `Box` of the fluid shape, project the eye→center direction onto the 6 axis faces, sample each face at a 4×4 grid (`min + (max-min) * i/3.0`, i∈0..3); plus `N` random points per box (`Random(pos.hashCode())`, choosing a random box and per-axis min/max/lerp; **N = `aRi(5843, 3469466251136560424L ^ seed)` indy — value unrecovered**; the axis-direction array length is also an indy (`aRi(23221, …)`) with 6 assignments, i.e. 6 `[decompiled]`).
  6. For each sample: `world.raycast(new RaycastContext(eyePos, sample, ShapeType.OUTLINE, FluidHandling.SOURCE_ONLY, player))` (field_1345 SOURCE_ONLY ✓); return the hit if `HitResult.Type.BLOCK` and `hit.getBlockPos().equals(candidate)`; else `null` `[decompiled]`.

### Behavior handlers (native; roles from descriptor + wiring)

- **`aQY(gH$th)V [18b62ec60]`** — `@hG` client-tick listener. Natural role: run `aRb()` search → feed hit to `oj WJJbs` planner → in `Switch Mode=Auto` swap to a bucket via `fx$sT` + `qJ.dbp(slot,…)` after `Auto Switch Delay` (gated by `AOeRT` stopwatch), and manage `NrVzh` expiry `[inferred]`.
- **`aQX(gv)V [18b629740]`** — `@hG` **pre-rotation event** listener (`gv` = bare `hH`, managed-yaw/pitch window from `LocalPlayerEventBridgeMixin`). Role: rotation management for the drain use (aim at the fluid sample point before use) `[inferred, uncertain]`.
- **`aQZ(gW$tq)V [18b65b530]`** — `@hG` **block-use-result event** listener: `gW` carries `ItemUsageContext` (`bcm()`), `gW$tq` adds `ActionResult` (`dpr()`); slice tokens `net/minecraft/class_1269 ActionResult | field_5811 PASS | Lnet/minecraft/class_1269$class_9859;` ✓. Role: inspect/cancel use results — the `Cancel For: Own/Friends` and `Cancel In Screens` logic, and/or feed-back for the drain action `[inferred, uncertain]` (dispatch site of `gW$tq` is native, not in the bootstrap mixins).
- **`aRa()V [18b669d20]`** — parameterless private worker. Slice shows `slot/interactionSlot` + `fx$sT` tokens around it: plausibly the slot-switch executor for `Switch Mode` `[inferred, uncertain]`.
- **`aRc(ZZZ)Z [18b6711d0]`** — native filter `(boolean isWater, boolean isLava, boolean isCobweb) → boolean` implementing the 5-way `Steal Mode` (Water Cobweb / Lava Cobweb / Water / Lava / All). Argument order matches `aRb`'s call site order `[decompiled call site, inferred arg order]`.
- **`aRd(BlockPos)Z [18b675130]`** — declared `private static native /* synthetic */ boolean aRd(BlockPos)`; decompiler marks it synthetic. No pool decrypt of its own. Role unrecovered (likely a validity memo helper) `[uncertain]`.

## Settings → behavior mapping

| setting | wrapper | decrypted name | default(s) | behavior link |
|---|---|---|---|---|
| mode group | `ct` `sGDWO` | **"Mode"** | — | parent of Blatant/Legit; selects execution strictness in VM `[decompiled wiring, inferred semantics]` |
| switch group | `ct` `YBVgI` | **"Switch Mode"** | — | Auto = module swaps slots itself; Manual = only uses already-held bucket `[inferred, uncertain]` |
| delay | `cA` `KzsPl` | **"Auto Switch Delay"** | step 1.0, 0–20, default **1.0**, suffix unrecovered (likely `" ticks"`) | delay between switch and use; paired with `AOeRT` stopwatch `[inferred, uncertain]` |
| steal group | `ct` `tYcBL` | **"Steal Mode"** | — | selects which liquids/cobwebs qualify → `aRc(ZZZ)` filter `[decompiled wiring, inferred semantics]` |
| cancel group | `ct` `cuIXt` | **"Cancel For"** | — | Own/Friends scope for use-cancel in `aQZ(gW$tq)` `[inferred, uncertain]` |
| toggle | `cJ` `FbvPk` | **"Cancel In Screens"** | **false** | gate for the cancel path while a Screen is open `[inferred, uncertain]` |

## Unrecovered / uncertain

1. **All native handler bytecode** (12 handlers → VM; 132 fragments unstitchable). In particular the actual bucket pickup execution (`qJ.dbp` arguments, priority, slot search) and any rotation/aim arithmetic.
2. **`zAhcx` literal** (Auto Switch Delay suffix) and the **random-sample count** `aRi(5843,…)` in `aRb` — both not statically decrypted.
3. **`NrVzh` lifecycle** — whether it is a permanent "already drained" memory or a timed cooldown, and its cap/ordering (ArrayList, no expiry visible).
4. **`aQZ(gW$tq)` exact semantics** — which uses are cancelled for "Own" vs "Friends", and how `Cancel In Screens` interacts.
5. **`aRa()`/`aRd(BlockPos)` roles** — described above only via adjacency of slot tokens.
6. **gA/`gv` interplay** — whether the pre-rotation listener aims a fake rotation or just reads the managed rotation.
7. **Blatant vs Legit behavioral difference** — nothing in the slice distinguishes the two modes beyond the option tokens.