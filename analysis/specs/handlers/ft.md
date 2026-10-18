# Auto GApple (sixtwo.ft) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_ft.c` — 18 handlers, continuation blocks all generic VM trampolines.
- Structure/setting names: `analysis/specs/modules/ft.md`, `analysis/decompiled/payload-named/sixtwo/ft.java` (constructor fully decompiled; `%` suffixes and item list are plain Java).
- Class pool windows: `POOL[0x136fb,0x316]` (ft main, ft-exclusive), `POOL[0x9b6d,0x1ba]` (shared oT/oI/oK/oQ slot cluster straddling dR/eJ/eK).
- Registry: `sixtwo.ft|Auto GApple|Automatically eats golden apples|key=144|bind=-999`, category `gh.xwjCw` (combat).

## Runtime model

Health-triggered golden-apple eating: when health drops below a threshold, switches the held slot to a golden (or enchanted golden) apple, presses use until eaten, then restores the original held item via the `ol` controller.

Pool-derived MC surface (verbatim from `POOL[0x136fb,0x316]`):

- `field_8463` = `Items.GOLDEN_APPLE`, `field_8367` = `Items.ENCHANTED_GOLDEN_APPLE` — the two eatable items ("Eat Enchanted" gates the second).
- Slot engine (shared cluster): `cJR ()Lsixtwo/oG;`, `cIV`, `cKg (Lsixtwo/oK;)V`, `cJK (I)Lsixtwo/oI;` — hotbar query returning an `oI` slot wrapper (`aQa()` is the public slot getter); `aQf (Z)Lnet/minecraft/class_1799;` = find apple stack (boolean flag ↔ enchanted allowed).
- Use simulation: `POOL[0x9b6d,0x1ba]` tail carries `field_1904` = `KeyBinding.useKey` + `method_23481` = `setPressed(Z)` (same use-key simulation as dR), plus the shared-window straddle tokens (`oT`, `oP`, field_8550/8281/8786/8705/8187, class_7744, dH/dJ) which belong to the cluster, not ft's item logic — flagged.
- Neighbor tokens: `sixtwo/fu` group (`aQs`, `aQq`, `HWcZh`, `aQp (DZZ)V`, `qmOOk`, `bvNPi`, `LaROb`, `zHVGe`, `BKGTH`) — fu is a sibling module (in this batch fu.md exists separately); attribution per-group only.
- State: `dYjds`, `cDIyq`, `YmGIh` (booleans — eating in progress / restored), `bxQEh = -1`, `ZpJKG = -1` (original slot / apple slot, -1 = none), `gyalZ` (Item — original held item), `xQcjf = new ol(this)` (armor/step controller for swap+restore).

## Per-handler semantics

All bodies are decrypt-preamble → VM dispatch.

- `YO()` [18bc1abf0] — listener registration (`gH.th` pre-motion tick only).
- `aPU(gH.th)` [18bc1b080] — pre-motion tick: main loop — health checks (`aPY`/`aPZ`), slot search (`aQf`), switch (`aPV`), eat-hold, restore (`ol`).
- `aPY(F) Z` [18bc73bb0], `aPZ(F) Z` [18bc79980] — health-threshold predicates taking a float (health fraction vs "Eat Below"/"Eat Threshold" sliders; which is which unrecovered).
- `aQd(F) V` [18bc26a30] — feeds current health into the state machine (float setter).
- `aPV(boolean)` [18bc61620] — start/stop eating (boolean ↔ begin-eat / abort; presses use key via `setPressed`).
- `aQf(boolean) ItemStack` [18bc2fca0] — finds the apple stack (flag gates enchanted apple per "Eat Enchanted").
- `aQb(ItemStack) Z` [18bc854b0], `aQg(ItemStack) Z` [18bc344e0] — apple predicates (golden-apple check / enchanted check).
- `aQa() oI` [18bc83d60] — apple slot wrapper getter.
- `aPW()` [18bc6a070], `aPX()` [18bc6fe30], `aQc()` [18bc87290], `aQe()` [18bc2f760] — state-machine steps (reset, slot switch, restore, finish; grouping inferred).
- `aQh` (MatchException trap) [18bc39030], `aQi/aQj/aQk` — j2cc decrypt boilerplate.

## Settings → behavior mapping

| setting (decoded) | field | wrapper / chain (verbatim) | behavior role |
|---|---|---|---|
| Eat Below | VLpcw | `cC .Vy(0.1).Vw(1.0).Vx(100.0).VA(40.0).Vz("%")` | health % (1–100, default 40) to start eating |
| Eat Until (group) | elFbq | `ct` | container group |
| Eat One | wztVz | `cu` child of elFbq | eat a single apple per trigger |
| Reaches Threshold | uaqBp | `cu` child of elFbq, `.SY()` (default option) | eat until health reaches the second threshold |
| Full Health | DExMY | `cu` child of elFbq | eat until health bar full |
| Eat Threshold | jOgPB | `cC .Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%")`; `.Vf(uaqBp::SZ)` (visible only for Reaches Threshold) | target health % (1–100, default 60) |
| Eat Enchanted | ZEypD | `cJ .WE(true)` | allow ENCHANTED_GOLDEN_APPLE (field_8367) |
| When Player Away | CcIwq | `cJ .WE(false)` | only eat when no player is nearby; Distance Threshold visible under it (`.Vf(CcIwq::WF)`) |
| Distance Threshold | ZskBX | `cC .Vy(0.1).Vw(1.0).Vx(30.0).VA(6.0)` | proximity radius 1–30, default 6 (no suffix; blocks assumed, unproven) |

## Unrecovered / uncertain

- All bodies virtualized; the eat loop (use-key hold timing, hunger/saturation gating, abort conditions) and the exact mapping of `aPY`/`aPZ` to the two % sliders are unrecovered — do not guess.
- `aQf` boolean ↔ "Eat Enchanted" correspondence, and the role split of `aPW`/`aPX`/`aQc`/`aQe`, are inferred from signatures/adjacency only.
- `POOL[0x9b6d,0x1ba]` is a straddle window (same cluster as dR's `POOL[0x9b3c,0x1b9]`); `useKey`/`setPressed` tokens are attributed to ft's eat action with medium confidence, while the obsidian/cobweb/sword-cluster tokens are excluded.
- `sixtwo/fu` tail tokens are attributed to the sibling fu group, not ft.
- `Distance Threshold` unit (blocks) and whether "When Player Away" checks all players or only enemies are unrecovered.
