# Tracers (sixtwo.du) — handler-derived behavior spec

Class `sixtwo.du` extends `sixtwo.gg`. Registry: module id **79**, category `gh.nOCvV`, keybind primary 79 / bind −999 (unbound), description "Draws lines to entities" (`analysis/specs/modules/du.md`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_du.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv`); no `native` methods. No image addresses to cite. |
| `analysis/decompiled/payload-decrypted/sixtwo/du.java` | Constructor + all settings fully recovered (folded int arrays / float chains). **The single `@hG` handler `aiD(go.sX)` FAILED CFR in every decompiled variant** (`ConfusedCFRException: Tried to end blocks [12[TRYBLOCK]], but top level block is 23[SWITCH]`). |
| `javap -c` on `analysis/jars/payload-raw/sixtwo/du.class` | **Recovery channel for the handler**: the full 697-instruction bytecode of `aiD` was disassembled and hand-decompiled; every branch, literal and call is known. Method names below resolved via `analysis/jars/yarn-1.21.11+build.6.tiny`. |
| Helpers (one line each) | `kF.bTn(MatrixStack, Vec3d from, Vec3d to, mG)` tracer builder (`.dts(float width)` / `.dtt()`); `dJxyG` static `kL` line batcher (`startBatch` / `bUv(kF)` / `endBatch`); `jJ`/`jg` not used here; `qQ.ddy(PlayerEntity)` friends-registry membership (via `rD.dmc()`); `cC.VB()` live float; `cG.Wf()` live color; `ct.ST()` selected mode index; `cF.VX(entity)` entity-set membership. |

## Runtime model

- One world-render handler per frame draws a straight line batch (`dJxyG`) from the camera eye to each entity matching the "Entities" set.
- **Origin geometry (first person)**: `origin = cameraEntity.getLerpedPos(delta) + (0, getEyeHeight(getPose()), 0) + new Vec3d(0.0, 0.0, 75.0).rotateX(−toRadians(getPitch())).rotateY(−toRadians(getYaw()))` — i.e. the eye position plus **75.0** units along the view direction (bytecode offsets 145-180; `method_36455`=`getPitch`, `method_36454`=`getYaw`, both negated after `Math.toRadians`).
- **Origin geometry (third person)**: `origin = cameraEntity.getLerpedPos(delta) + (0, getEyeHeight(getPose()), 0)` — no forward offset. First-person flag = `MinecraftClient.options.getPerspective().isFirstPerson()`.
- **Target geometry**: `target = entity.getLerpedPos(delta)` (feet). For players (and only players) a vertical offset is added from the "Mode" setting — see below — but **only when `!entity.isInSwimmingPose()` and `!player.isGliding()`** (horizontal poses get the line to the feet). Non-players always get feet.
- Friends: `qQ.ddy` registry drives both an optional skip and a color swap (two independent reads).
- Panic switch `dh.afl()` non-null breaks the entity loop immediately (batch still flushed via the `finally endBatch()`).

## Per-handler semantics

### `@hG aiD(go.sX)` — world render (`du.java:251-273` is the CFR stub; full semantics from bytecode)
1. Guard `bab()` **and** `rD.dlmvG.getCameraEntity() != null`, else return.
2. `stack = sX2.bbh()`; `firstPerson = options.getPerspective().isFirstPerson()`; `width = cKwty.VB()` ("Line Width", live).
3. `dJxyG.startBatch()`; compute origin per the geometry above (camera entity = `rD.dlmvG.getCameraEntity()`; lerped with `sX2.bbi()` delta).
4. Loop `rD.dlmvG.world.getEntities()` (`class_638.method_18112`):
   - panic (`dh.afl() != null`) → exit loop;
   - skip `entity == rD.dlmvG.player` (`field_1724`);
   - skip unless `SqUZV.VX(entity)` ("Entities" set);
   - `double heightOffset = 0.0`; `boolean isPlayer = entity instanceof PlayerEntity`;
   - if isPlayer:
     - if `PNacL.WF()` ("Ignore Friends", default **true**) **and** `rD.dmc().ddy((PlayerEntity) entity)` → **continue** (friend lines not drawn at all when the toggle is on);
     - else `heightOffset = switch (iuknf.ST()) { 0 → 1.6; 1 → 1.2; 2 → 0.5; default → 0.0 }` (bytecode tableswitch, offsets 384-435) — mode index 3 ("Feet") and any out-of-range index land on 0.0;
   - `boolean gliding = isPlayer && ((PlayerEntity) entity).isGliding()` (`LivingEntity.method_6128`);
   - `Vec3d target = entity.getLerpedPos(delta)`;
   - if `!entity.isInSwimmingPose()` (`method_20232`) **and** `!gliding`: `target = target.add(0.0, heightOffset, 0.0)`;
   - if `!firstPerson`: recompute origin as `cameraLerpedPos.add(0.0, eyeHeight, 0.0)` (no 75-forward);
   - color = (`isPlayer` **and** `rD.dmc().ddy(player)`) → `wOZVj.Wf()` ("Friend Color") else `dGHqh.Wf()` ("Color") — note the friend **color** is applied whenever Ignore Friends is off, independent of the skip path;
   - emit `dJxyG.bUv(kF.bTn(stack, origin, target, color).dts(width).dtt())`.
5. `finally dJxyG.endBatch()`.

This module never touches frustum checks, box geometry, or the batcher's per-line state beyond width — visually the lines terminate at a single point per entity (feet or the mode-selected body height), matching the do (Arrows) module's screen-space behavior but in world space.

## Settings→behavior (exact — decrypted constructor, names re-folded verbatim from char arrays)

| Field | Class | Name | Value |
|---|---|---|---|
| `SqUZV` | `cF` entity set | `"Entities"` (69,110,116,105,116,105,101,115) | `.VS(jg$tJ.OCdZM)` preset binding; seeded `.VT(EntityType.ITEM, EntityType.CHEST_MINECART, EntityType.TNT_MINECART)` |
| `cKwty` | `cC` number | `"Line Width"` (76,105,110,101,32,87,105,100,116,104) | step `.Vy(0.1)`, min `.Vw(1.0)`, max `.Vx(3.0)`, default `.VA(1.0)` |
| `dGHqh` | `cG` color | `"Color"` (67,111,108,111,114) | `.Uf(rD.dlM().bjG().bis())` — theme color |
| `wOZVj` | `cG` color | `"Friend Color"` (70,114,105,101,110,100,32,67,111,108,111,114) | `.Uf(jk.jEkxo)` — shared friend-color constant |
| `iuknf` | `ct` mode | `"Mode"` (77,111,100,101) | no explicit `.SO(...)` — default option index **0** |
| `wUMpA` | `cu` option | `"Head"` (72,101,97,100) | option 0 → target offset **1.6** blocks |
| `MmkQv` | `cu` option | `"Chest"` (67,104,101,115,116) | option 1 → **1.2** |
| `rlVJG` | `cu` option | `"Legs"` (76,101,103,115) | option 2 → **0.5** |
| `jJCGV` | `cu` option | `"Feet"` (70,101,101,116) | option 3 → **0.0** |
| `PNacL` | `cJ` toggle | `"Ignore Friends"` (73,103,110,111,114,101,32,70,114,105,101,110,100,115) | `.WE(true)` — **on by default**: friends get no tracer |

Registry keybind: **79**.

## Unrecovered

- `jk.jEkxo` — shared friend color RGB (static DES-decrypted constant in `jk`; not folded; affects "Friend Color" default here and in `ds`, `dm`, `dq`, `dt` contexts).
- `jg$tJ.OCdZM` — the `cF` preset constant bound via `.VS(...)`; enum constants of `jg$tJ` are not folded.
- `kF$un.dtt()` semantics (finalizer on the tracer builder) and the line-batcher render-layer name inside `kL`/`dJxyG` — helper-internal (same open item as `dq`).
- Precise yaw/pitch sign convention of `Vec3d.rotateX/rotateY` relative to Minecraft's `getPitch/getYaw` (the code negates both radians before rotating `(0,0,75)`; the resulting direction equals the view vector, but the module re-implements rotation manually instead of calling `getRotationVector` — noted as a behavioral quirk, no arithmetic invented).
- Whether `ct` "Mode" without `.SO(...)` defaults to index 0 at construction or defers to the `ct` class default (recoverable only from `ct`'s internals; index 0 = "Head" assumed from the switch table, not from a stored default literal).

## Helper contracts (one line each)

- `kF.bTn(MatrixStack, Vec3d, Vec3d, mG)` — line/tracer primitive builder; `.dts(float)` width, `.dtt()` finalize; identical builder `dq` Storage ESP uses for its optional tracers (same first-person 75-forward origin convention there — a shared implementation detail, not module-specific).
- `dJxyG` — static line batcher (`startBatch()` no-arg / `bUv(kF)` / `endBatch()`); same instance `dq` reuses.
- `qQ.ddy` — persistent tracked-name registry; consulted twice per player entity (skip + color), an unusual double read documented above.
- `cF`/`cC`/`cG`/`ct` — standard setting classes; `VB()` float / `Wf()` color / `ST()` index / `VX(entity)` membership.
- `dh.afl()` — panic probe; non-null exits the entity loop but the `finally endBatch()` still flushes whatever was emitted.
- Registry metadata: `bootstrap/offline/features/metadata.txt:114`: `sixtwo.du|Tracers|Draws lines to entities|key=79|bind=-999` — primary keybind **79**, secondary bind **−999** (unbound). Lowest module id in the render family (79); "Entities" seeded with ITEM + both minecart chest/TNT types, matching the "loot/dropped-item tracer" use case.
- The 75.0 forward offset appears in both `du` and `dq` tracer origins — a shared convention likely copied between modules; whether it compensates for a near-plane artifact or centers the line bundle is unresolved (no comment survives, no helper computes it).
- Height offsets are raw float tableswitch constants (1.6/1.2/0.5/0.0), not setting reads — the "Mode" names are the only user-facing abstraction; there is no per-offset slider anywhere in the settings tree.