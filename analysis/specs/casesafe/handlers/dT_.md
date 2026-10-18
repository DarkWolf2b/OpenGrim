# Multi Task (sixtwo.dT) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_dT.c` — 3 handlers (class-init `_77aa5432bb3ebd62ae45d690edcfb2e3`, `apI(gH$th)`, `apJ`) + 20 continuation blocks, 0 unresolved table targets. Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff565xxxxx`/`6ffff564xxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/dT.java` — static seeds `HYicB`/`QxDnA`; natives: class-init, `apI(gH$th)` `@hG`, `apJ(MatchException)`.
- Structural spec: `analysis/specs/modules/dT.md`; registry row: `sixtwo.dT|Multi Task|Allows to use two items at same time|key=65|bind=-999`; category `gh.qBzlZ` = **Misc** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny` (verified below); pool re-resolution via `analysis/tools/resolve_pool_blob.py` + per-token dump, pool base RVA `0x301ee50`, image base `0x180000000` for `stitch_class.py` tables.
- Decrypted constants: **no `sixtwo.dT` entries in `analysis/decrypted/full-dump.jsonl`**.
- Neighbor specs: `analysis/specs/handlers/dU.md` (Auto Fish) — dT's decrypt window over-covers dU's token run; the boundary between the two runs is pinned by the `sixtwo/dU` class token at `[0xb76e]`.

### Recoverability caveat

`apI`'s body is decrypt → VM dispatch. dT's own run is 6 tokens; one adjacent token (`field_1886`) is attributed by semantic fit and flagged. No float/step arithmetic survives.

## Runtime model

- `dT extends gg`. Constructor `[decompiled dT.java:9-12]`:
  - `long var1 = HYicB ^ 25186411416648L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)QxDnA, false, gh.qBzlZ))` — module id runtime-decrypted (registry: **65**), flag `false`, category **Misc** `[decompiled + registry]`.
- One `@hG` listener: `apI(gH$th)` — the **pre-motion client-tick event** (dispatch order verified in `er.md`: all `gH$th` listeners run before `gv` pre-rotation and `qL` motion processing) `[decompiled + er.md]`.
- No settings, no `aaj()`/`YO()` overrides; `hF` bus registration via the inherited base hook `[decompiled]`.
- **Own pool run** `POOL[0xb73c,0x32)` (window `[0xb71c,0x1fb]` starts at `class_token − 0x20`; per-token offsets):

| offset | token | resolution |
|---|---|---|
| `[0xb73c]` | `sixtwo/dT` | self class name |
| `[0xb746]` | `HYicB` | seed field (stub-matched) |
| `[0xb74c]` | `apJ` | rethrow name (stub-matched) |
| `[0xb750]` | `method_1434` | `KeyBinding.isPressed()` — `m ()Z` |
| `[0xb75c]` | `QxDnA` | seed 2 (stub-matched) |
| `[0xb762]` | `method_2910` | `ClientPlayerInteractionManager.attackBlock(BlockPos, Direction)Z` — `m (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Z` |

  - Window prefix `[0xb71c,0xb73c)`: `necraft/class_265;)V` (tail of a `Box`-typed ctor desc — ds Entity ESP run), `FoNvc` `[0xb715]`, `MVuFv` `[0xb71b]`, **`field_1886` `[0xb721]`**, `MuwUi` `[0xb72c]`, `kpzZC` `[0xb732]`, `apF` `[0xb738]`. `field_1886` = `KeyBinding.attackKey` (tiny: `f Lnet/minecraft/class_304; field_1886 attackKey`). **Attribution flag**: it sits in the window prefix (previous-class region, ds = Entity ESP per registry), but the `attackKey + isPressed + attackBlock` triple only makes sense together for dT's registry behavior; the obfuscator demonstrably scatters members across class-token boundaries (cf. `vtEAj` in ex's region, `PkbYQ` in ew's region, `kPBXI` in ey's region — all stub-matched). dT is therefore attributed `field_1886` `[inferred, flagged]`.
  - Window tail from `sixtwo/dU` `[0xb76e]` (`dneZD`, `kzZLu`, `gipBo`, `BxkdK`, `method_7261` = `getAttackCooldownProgress(F)F`, `apS`, `field_7513` = `fishHook` (`class_1536 FishingBobberEntity`), `method_2918` = `attackEntity(PlayerEntity, Entity)`, `eKQLo`, `method_23317/23318/23321` + `method_4784/4779/4778` = two `getX/getY/getZ` triplets, `OZKKQ`, `(DDDDDD)D` (six-double distance metric per dU.md), `field_8378` = `Items.FISHING_ROD`, `method_7919/7936` = `getDamage/getMaxDamage`, `jqbGc`, `DMhNd`, `TcAon`, `ytUYv`, `apU`, `LBRwP`, `diS`, `HZHUw`, `apT`, `java/util/concurrent/Ti…` = `TimeUnit`) = **dU (Auto Fish)** run — cited fully in dU.md, not dT behavior `[stub match + registry order]`.
- Contract: on each pre-motion tick, read the attack keybind state (`attackKey.isPressed()`) and drive attack input through `interactionManager.attackBlock(BlockPos, Direction)` regardless of the vanilla "using item" input lock — the "use two items at the same time" registry semantics (vanilla blocks `attackBlock`/mining while a use action like eating holds the mouse) `[inferred]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_77aa5432bb3ebd62ae45d690edcfb2e3()V` | `[18da4be50]` | `[0x226,0xd]` | class-init stub |
| `apI(Lsixtwo/gH$th;)V` | `[18da3dea0]` | `[0xb71c,0x1fb]` | pre-motion tick listener (whole behavior) |
| `apJ(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18da4bdc0]` | — | identity rethrow |

- **class-init [18da4be50]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck`, dispatch `UNK_182318a20[(cVar1=='\0')*8]` at `18da4bed6`. No module behavior `[decompiled]`.
- **`apI(Lsixtwo/gH$th;)V` [18da3dea0]** — decrypts `POOL[0xb71c,0x1fb]`, `ExceptionCheck`, dispatch `UNK_182314000` at `18da3df6a`. Virtualized body. Determinable surface: key-state read (`isPressed`), `attackBlock(BlockPos, Direction)` call — i.e. the module re-issues attack-block actions while normal input is blocked (e.g. while the player is using/eating an item), enabling simultaneous use of two items `[slice + registry, inferred]`. Unrecovered: the target BlockPos/Direction selection (the VM must track the crosshair block or reuse the last mining target), any cooldown gating, and whether `attackEntity`/swing are also driven (those tokens belong to dU's run) `[uncertain]`.
- **`apJ(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18da4bdc0]** — `return param_3;` identity rethrow `[decompiled]`.
- Continuation blocks (20): generic `ExceptionCheck`/`IsInstanceOf` (`0x100`) 2-way dispatchers; `ExceptionOccurred` (`0x78`) + decrypt re-entry (`FUN_190dd72e0`, one with key cookie `0x3b191667cdbb` at `18da4c183`); `NewString` (`0x518`) + decrypt block at `18da4daa0` (string decode with stack cookie `0x530045`); `ThrowNew` thunks; `swi(3)` trampolines; bare `return`s. `FUN_18da4bc2c` does `ExceptionOccurred` + decrypt `(*plRam… + 0x98, 4)` — plumbing, no module behavior `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `dT.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)QxDnA, false, gh.qBzlZ))` `[decompiled dT.java:9-12]`.
- No `full-dump.jsonl` entries for dT (0 indy sites) — no hidden setting names recoverable `[decompiled absence]`.
- Consequence: fixed behavior; any "which item, which target" policy is VM-hard-wired `[inferred]`.

## Cross-module interplay

- Category peers (Misc, `gh.qBzlZ`): dU Auto Fish (immediate next; shares this window), dV Custom FOV, dW Freecam, dX No Miss Delay, ec Ghost Hand, dH No Sign Screen, dB Full Bright.
- Mining/attack overlap: dX (No Miss Delay) and dI (Nuker) also drive `attackBlock`-family paths; ordering between their `gH$th` listeners is not determinable from this class `[inferred]`.
- The vanilla conflict dT resolves (attack blocked during item use) is the same gate dU's reel path must bypass — dU.md notes `attackBlock`/`attackEntity` usage there too, but the two modules hold separate listener registrations `[dU.md]`.

## Unrecovered

1. **Module id 65** — registry-sourced; `(int)QxDnA` has no dump verification.
2. **Attack-target selection for `attackBlock`** — the `(BlockPos, Direction)` arguments' provenance (crosshair raycast vs cached mining target) is VM-resident; no raycast tokens in dT's run.
3. **`field_1886` attribution** — sits in the window prefix (ds's region); attributed to dT on semantic fit with `method_1434`/`method_2910` and the scatter precedent. If it actually belongs to ds (Entity ESP), dT's key-gating model needs revision.
4. **Whether attacking while item-use also drives `attackEntity`/swing** — those tokens are dU's in this window; a dT-internal attack path would need tokens absent here.
5. **Phase nuance**: `apI` runs pre-motion; whether the module also needs a post-tick pass (`gH$ti`) is unevidenced (no such handler declared).
6. **Flag `false` in `gf.aZL(65, false, gh.qBzlZ)`** — meaning unrecovered.
7. **Bind-change edge cases** — if `field_1886` is read live each tick, a mid-session rebind (KeyBinding API supports it) changes dT's trigger with no module restart; whether the VM re-resolves the keybind id or caches it is unrecovered.

## Shared helpers cited (one line each)

- `gg`/`iS` — module base; `hF` bus registration on enable via base `aaj()`.
- `gH$th` — pre-motion tick event (phase verified `er.md`).
- `gf`/`gh` — metadata + category enum (`qBzlZ` = Misc).
- Neighbor: dU (Auto Fish) shares the window; its full surface is specified in `handlers/dU.md`.

---
Confidence: MEDIUM on the surface (6 own tokens + 1 flagged; attack-key → attackBlock chain), LOW on the target-selection policy and any gating arithmetic (fully VM-resident).