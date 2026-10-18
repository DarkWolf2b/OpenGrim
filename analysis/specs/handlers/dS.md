# Hand No Clip (sixtwo.dS) — handler-derived behavior spec

Class: `sixtwo/dS` · display name **Hand No Clip** · registry description
"Allows to attack through blocks" · primary key 55, active bind -999 (unbound)
[`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`dS | Hand No Clip | 7 | 7 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_dS.c` — **7 native handlers** +
   **70 continuation blocks**; behavior handlers decrypt one class slice and
   tail-dispatch into the j2cc VM. Citations are image addresses.
2. Class slice `POOL[0xb64b,0x1f8]` resolved via
   `analysis/tools/resolve_pool_blob.py`; continuation slice
   `POOL[0x8eb9,0x192]` (shared VM cluster with dA/ee/fr).
3. Java skeleton: `payload-named/sixtwo/dS.java` + decrypted
   `payload-decrypted/sixtwo/dS.java` (all int[] folds resolved to chars).
4. Structural spec `analysis/specs/modules/dS.md`; framework
   `analysis/specs/00-framework.md`; Yarn tiny `1.21.11+build.6`.

## Runtime model

- `super(gf.aZL(55, false, gh.qBzlZ))` — id 55, category `gh.qBzlZ`
  `[decompiled dS.java:27]`.
- Settings tree (all names decrypted verbatim from int[] folds; see Settings):
  group `CFOLa` **Ignore** containing `cu` `CeZar` **All** and `cu` `UeXgv`
  **Specified**; group `gWbBh` **Work On** (`cv`, built `.Tm(1)`) containing
  `cw` `Shkca` **Place** and `cw` `FoNvc` **Break** (both `.Tz()`); item-set
  `xmgVN` **Blocks** (`cK`, defaults `{COBWEB, PAINTING}`, `.WM(jc.GjreY)`,
  change-callback `.Vf(this.UeXgv::SZ)`) `[decompiled dS.java:33-99]`.
- One `@hG` listener `apC(hm)`. `hm` is the block-shape event: fields
  `BlockState LCeGi` / `BlockPos GvLRo` / `VoxelShape nmQxT` with getters
  `bcN()`/`bcO()`/`bcP()` and **setter `bcS(VoxelShape)`**
  `[decompiled hm.java]` — a mutable "shape of this block position" event.
- Private native `apD()Z` — no body recovered; shape of a predicate (likely
  "attack key held / should apply now") `[decompiled stub, uncertain]`.
- dS's own symbol run (between `sixtwo/dS` and `sixtwo/dT` markers):
  `sixtwo/hm`, `bcN`, `apY`-family plumbing, `net/minecraft/class_259` →
  **`VoxelShapes`**, `method_1073` → **`VoxelShapes.empty()`**,
  `()Lnet/minecraft/class_265;` → `VoxelShape` type, `bcS` (shape setter),
  `field_1886` → **`KeyBinding.attackKey`**, plus dS fields/statics
  `[slice, tiny-mapped]`.
- Neighbors in window (NOT dS): `method_1434 isPressed`, `method_2910
  attackBlock`, `method_7261 getAttackCooldownProgress`, `field_7513 fishHook`,
  `class_1536 FishingBobberEntity`, `method_2918 attackEntity`,
  `method_23317 getX` — tail of dS's window is dT (Multi Task) / dU (Auto Fish)
  territory `[window straddle, stub-matched]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_3323b79ccdee7f922ab8849d424294e5()V` | `[18da71250]` | native clinit stub (`POOL[0x226,0xd]`) |
| `apC(Lsixtwo/hm;)V` | `[18da56430]` | the entire behavior: block-shape event listener (virtualized) |
| `apD()Z` | `[18da5afa0]` | private predicate (virtualized) |
| `apE(MatchException)MatchException` | `[18da61ba0]` | identity rethrow (`return param_3;`) |
| `apF(IJ)I` | `[18da61c30]` | int-constant decrypt kernel (register-mixing over `uRam18337exxx`, `func_0x00018da6ae50`-style key helper; same family as eA `avo`) |
| `apG(Lookup;MutableCallSite;String;[Object;)I` | `[18da6d530]` | MutableCallSite re-bootstrap |
| `apH(Lookup;String;MethodType;)CallSite` | `[18da6e540]` | indy bootstrap (`POOL[0x857,0x26]`) |

- **`apC(hm)` [18da56430]** — decrypts `POOL[0xb64b,0x1f8]`, `ExceptionCheck`,
  VM dispatch at `18da56500`. Reconstructable contract: for each block-shape
  event, if the block is relevant to the current action (`Work On` = Place
  and/or Break — the `cv/cw` radio group), and the block is in the `Blocks`
  set (`Specified` mode) or the mode is `All`, replace the event's shape with
  `VoxelShapes.empty()` via `hm.bcS(...)` so the client's attack/use raycast
  passes through the block. `field_1886` (`KeyBinding.attackKey`) indicates
  the attack state participates in the gate; exact combination with `apD()`
  is virtualized `[slice, inferred]`.
- **`apD()` [18da5afa0]** — boolean gate; body virtualized `[uncertain]`.
- Setting callback `xmgVN.Vf(UeXgv::SZ)`: when the Blocks set changes, the
  **Specified** sub-setting's setter runs (keeps Ignore=Specified consistent
  with a non-empty block list) `[inferred from wiring]`.

## Settings → behavior

| field | wrapper | chain (verbatim, decrypted) | meaning |
|---|---|---|---|
| `CFOLa` | `ct` | `new ct(this, mr.clS("Ignore"))` | collapsible group |
| `CeZar` | `cu` | `new cu(this.CFOLa, mr.clS("All"))` | sub-option: ignore all blocks |
| `UeXgv` | `cu` | `new cu(this.CFOLa, mr.clS("Specified"))` | sub-option: only Blocks set |
| `gWbBh` | `cv` | `new cv(this, mr.clS("Work On")).Tm(1)` | sub-group; `.Tm(1)` int arg (default selection/step — meaning unrecovered) |
| `Shkca` | `cw` | `new cw(this.gWbBh, mr.clS("Place")).Tz()` | apply during place |
| `FoNvc` | `cw` | `new cw(this.gWbBh, mr.clS("Break")).Tz()` | apply during attack/break |
| `xmgVN` | `cK` | `new cK(this, mr.clS("Blocks")).WM(jc.GjreY).WN(Items.COBWEB, Items.PAINTING)` | block allow-list, default `{COBWEB, PAINTING}` |

- Decrypted name constants (`full-dump.jsonl`, class `sixtwo.dS`, bsm `apF`):
  "Ignore", "All", "Specified", "Work On", "Place", "Break", "Blocks" — match
  the folds above exactly `[decompiled]`.
- Registry: id 55, bind -999 `[registry]`.

## Unrecovered

1. Bodies of `apC`/`apD` (VM dispatch at `18da56500`/`18da5b080`) — the exact
   predicate (attack key vs. both mouse buttons), and whether Place mode
   nulls shapes only for the crosshair block, are virtualized.
2. Semantics of `cv.Tm(1)` and `cw.Tz()`/`cu.SZ()` builder arguments (native
   builders; inferred radio/enabled-flag roles only).
3. `.WM(jc.GjreY)` constant on the Blocks setting (same token as dP's Allowed
   Blocks — a shared `cK` preset flag).
4. Which vanilla call sites consume the mutated `VoxelShape` (attack raycast
   vs. block collision vs. outline rendering) — the `hm` event is fired by the
   native layer; the firing mixin is not in this corpus `[uncertain]`.
