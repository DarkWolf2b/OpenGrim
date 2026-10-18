# Auto Trap (sixtwo.eJ)

- Registry: `sixtwo.eJ|Auto Trap|Automatically traps enemy|key=11|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eJ.java` (CFR, literals folded)
- Superclass: `eL` [structure]
- Keybind: primary key 11, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~59 native tokens vs ~42 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically traps enemy

## Setting names (decrypted)

- `Alternative Block` → **Alternative Block**
- `Alternative Block Through Walls` → **Alternative Block Through Walls**
- `Blocks` → **Blocks**
- `Blocks Per Tick` → **Blocks Per Tick**
- `Double Place` → **Double Place**
- `Place Mode` → **Place Mode**
- `Single` → **Single**
- `Trap Mode` → **Trap Mode**

## Structural findings

### Settings (11 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.CuJCC | ct | `this, mr.clS(nArray2) /* "Trap Mode" */`  | 86 | see 00-framework.md [inferred] |
| this.LcoZx | cu | `this.CuJCC, mr.clS(new int[]{(int)66, (i…`  | 87 | see 00-framework.md [inferred] |
| this.zRRku | cu | `this.CuJCC, mr.clS(new int[]{(int)72, (i…`  | 88 | see 00-framework.md [inferred] |
| this.dsMoQ | cu | `this.CuJCC, mr.clS(new int[]{(int)76, (i…`  | 89 | see 00-framework.md [inferred] |
| this.MIXlE | cJ | `this, mr.clS(nArray4) /* "Alternative Bl…` → .WE(false) | 130 | see 00-framework.md [inferred] |
| this.fzDSC | cv | `this, mr.clS(nArray6) /* "Double Place" …`  | 163 | see 00-framework.md [inferred] |
| this.TorvG | cw | `this.fzDSC, mr.clS(new int[]{(int)65, (i…`  | 164 | see 00-framework.md [inferred] |
| this.ifPTd | cw | `this.fzDSC, mr.clS(new int[]{(int)66, (i…`  | 165 | see 00-framework.md [inferred] |
| this.KtDjx | ct | `this, mr.clS(nArray7) /* "Place Mode" */`  | 177 | see 00-framework.md [inferred] |
| this.JNLoj | cu | `this.KtDjx, mr.clS(nArray8) /* "Single" …`  | 185 | see 00-framework.md [inferred] |
| this.pAkkC | cu | `this.KtDjx, mr.clS(new int[]{(int)77, (i…`  | 188 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (6 refs)

- `net.minecraft.block.BlockState`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`
- `net.minecraft.util.math.BlockPos`

### Other imports of interest

- `java.util.Comparator`
- `java.util.List`
- `java.util.Map`
- `java.util.Set`
- `java.util.function.Predicate`
- `net.minecraft.block.BlockState`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`
- `net.minecraft.util.math.BlockPos`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Trap" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eJ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.

## Native handler findings

Source: `../../../analysis/ghidra/handlers/sixtwo_eJ.c` (58 handler stubs). **Every handler in this
file failed to decompile** — each stub reads `/* exception: Java Virtual Machine is not
running */`, so no native body content was recoverable. All findings below come from the
decompiled Java (`sixtwo/eJ.java`): the decrypted setting tree, the wired predicates/
comparator, and the method signatures.

### Structure revealed by the Java source
- Extends `eL` (shared block-placement base); hooks `ayq (Lsixtwo/gv;)V` as the only
  `@hG` event (tick).
- `ayC (Lnet/minecraft/class_1657;)Ljava/util/List;` — candidate positions are computed
  **for a `PlayerEntity` target** (players-only targeting).
- Field predicates: `Ajpit = this::azq` (`Predicate<BlockPos>` — position filter),
  `kMQwW = this::azp` (`Predicate<BlockState>` — state filter), and
  `ldzYZ = Comparator.comparing(eJ::azo)` where `azo (BlockPos)Double` — candidates are
  **sorted by a numeric score** (distance-like) before placement.
- `ayI (List)List` — post-filter of the candidate list; `ayG/ayl (oz)Z` — placement-plan
  validity checks; `ayF/ayv (ItemStack)Z` — held-item acceptance checks.
- The `azd/azk/azg/azi/aze (int, BlockPos)BlockPos` family and `azf/azj/azh (List[, int],
  BlockPos)V` adders are the offset helpers that build the trap shape per layer.

### What the decrypted settings reveal
- `Trap Mode` = `Box` | `Head` | `Legs` (default first option = Box).
- `Blocks` selector: default `Items.OBSIDIAN` (`.WM(jc.GjreY).WN(Items.OBSIDIAN)`).
- `Alternative Block` selector: seeded from the static set `ayH()` plus
  `Items.CRYING_OBSIDIAN, Items.OAK_PLANKS` (`.WT()`); visibility gated by
  `Alternative Block Through Walls` (bool, default false).
- `Double Place` group = `Above` | `Below` toggles (not a single bool).
- `Place Mode` = `Single` | `Multi` (default Single); `Blocks Per Tick` = step 1,
  **min 2.0, max 12.0, default 8.0**, visibility-gated to Multi.

### Upgraded in rebuild (`modules/world/AutoTrap.java`)
- Trap modes renamed/aligned to `box`/`head`/`legs` (default box; head ring placed at
  feet+1 layer).
- `blocks_per_tick` corrected to the decrypted range 2–12 with default 8 (was 1–16
  default 1).
- `double_place` split into `double_place_above` / `double_place_below` toggles in a
  `double_place` group.
- `alternative_block` upgraded from a bare bool to bool + `alternative_block_item`
  selector (`crying_obsidian` / `oak_planks`).
- Targeting narrowed to players only (matches `ayC` signature); candidates are now sorted
  by squared distance to the target's center before spending the per-tick budget.
- Not recoverable: the exact block acceptance predicate (`azp`), the position filter
  (`azq`), and the trap-shape offsets themselves — native stubs failed.
