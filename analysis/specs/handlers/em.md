# High Jump (sixtwo.em) — handler-derived behavior spec

Class: `sixtwo/em` · display name **High Jump** · registry description
"Allows player to jump higher" · primary key 167, active bind -999 (unbound)
[`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`em | High Jump | 8 | 8 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_em.c` — **8 native handlers** +
   continuation blocks; behavior handlers decrypt one class slice
   (`POOL[0xcf35,0x23a]`); a continuation decrypts the eB Flight slice
   `POOL[0xcb21,0x228]` (shared VM cluster, not em's). Citations are image
   addresses.
2. Java skeleton: `payload-named/sixtwo/em.java` + decrypted
   `payload-decrypted/sixtwo/em.java` (imports
   `net.minecraft.block.entity.ShulkerBoxBlockEntity`).
3. Event payload `hs` (attack/jump-family event): `LivingEntity SfqRA`,
   floats `KXEMk`/`daZxT`, getter `bdd()`, getters/setters `bde()/bdg()`,
   `bdf()/bdh()` — a **mutable two-float event** on a living entity
   `[decompiled hs.java]`.
4. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/em.md`.

## Runtime model

- `super(gf.aZL(167, false, gh.xgeEn).aZS(false))` — id 167, category
  `gh.xgeEn` (movement), extra metadata flag `.aZS(false)` (meaning
  unrecovered — hidden/legacy marker; fV Self Destruct chains
  `.aZS(false).aZU(true)`) `[decompiled em.java:25]`.
- Settings tree (names decrypted verbatim):
  - group `hyrdo` **"Mode"** (`ct`);
  - `Mbkzf` **"Vanilla"** (`cu` under Mode);
  - `nszob` **"Grim Shulker"** (`cu` under Mode, built `.SY()`);
  - `qbgVw` **"Jump Height"** (`cC`): `.Vy(0.01).Vw(1.0).Vx(3.0).VA(1.6)`
    + callback `.Vf(this.Mbkzf::SZ)` — step 0.01, min 1.0, max 3.0,
    default 1.6;
  - `eXBkK` **"Vertical Boost"** (`cC`): `.Vy(0.01).Vw(0.1).Vx(3.0).VA(1.91)`
    + callback `.Vf(this.nszob::SZ)` — step 0.01, min 0.1, max 3.0,
    default 1.91 `[decompiled, decrypted em.java:27-89]`.
- Callbacks: changing Jump Height activates the **Vanilla** mode sub-setting
  (`Mbkzf::SZ`), changing Vertical Boost activates **Grim Shulker**
  (`nszob::SZ`) — radio-style coupling `[inferred from wiring]`.
- Two `@hG` listeners + one predicate:
  - `atj(gH$th)` — tick;
  - `ati(hs)` — the mutable two-float entity event (the jump-velocity event:
    floats modified via `bdg`/`bdh` — one of them becomes the jump height);
  - `atk(ShulkerBoxBlockEntity)Z` — "is this shulker a boost platform?"
    predicate `[decompiled stubs]`.
- em's own symbol run (between `sixtwo/em` and the eB/em-statics cluster):
  - `sixtwo/hs`, `bdd`, `bde`, `bdg` — event access `[slice]`.
  - `method_31476` → `World.getChunkPos()`? (mapped `()Lnet/minecraft/class_1923;`
    = `ChunkPos`), `net/minecraft/class_1923` with `field_9181`/`field_9180`
    → **`ChunkPos.x` / `ChunkPos.z`**, `method_8393` →
    `World.isChunkLoaded(II)Z`, `method_8497` →
    `World.getChunk(II)WorldChunk`, `net/minecraft/class_2818` →
    `WorldChunk`, `sixtwo/ja` + `byD (Lnet/minecraft/class_2818;)Ljava/util/List;`
    — helper `ja.byD(WorldChunk)` returning the chunk's block-entity list,
    `net/minecraft/class_2586` → `BlockEntity`, `net/minecraft/class_2627` →
    `ShulkerBoxBlockEntity`, `method_11016` → `BlockEntity.getPos()`
    `[slice, tiny-mapped]`.
- Semantics: **Grim Shulker mode** scans the loaded chunks at the player for
  `ShulkerBoxBlockEntity` (via `atk`) and boosts the jump only in that case —
  a Grim-anticheat-safe shulker hop (vanilla lets entities jump off shulker
  boxes); **Vanilla mode** raises jump height unconditionally. 1.91 (Vertical
  Boost default) and 1.6 (Jump Height default) are block-height-style
  magnitudes `[slice, inferred]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_8b967bade6a5815b769653759123e3a3()V` | `[18d1c6da0]` | native clinit stub |
| `ati(Lsixtwo/hs;)V` | `[18d1a6f20]` | jump-velocity event listener: writes boost floats (virtualized) |
| `atj(Lsixtwo/gH$th;)V` | `[18d1ac2c0]` | tick listener: mode/state upkeep (virtualized) |
| `atk(Lnet/minecraft/class_2627;)Z` | `[18d1b3400]` | shulker-box predicate (virtualized) |
| `atl(MatchException)MatchException` | `[18d1b7a70]` | identity rethrow |
| `atm(IJ)I` | `[18d1b7b00]` | int-constant decrypt kernel |
| `atn(Lookup;MutableCallSite;String;[Object;)I` | `[18d1c3080]` | MutableCallSite re-bootstrap |
| `ato(Lookup;String;MethodType;)CallSite` | `[18d1c4090]` | indy bootstrap |

- **`ati(hs)` [18d1a6f20]** — decrypts `POOL[0xcf35,0x23a]`; modifies the
  event's floats (`bdg`/`bdh` are in the slice) according to mode + Jump
  Height / Vertical Boost. Exact float math (how 1.6/1.91 map onto jump
  velocity) is virtualized — never guessed `[slice, inferred, uncertain]`.
- **`atj(gH$th)` [18d1ac2c0]** — chunk-scan upkeep for Grim Shulker: reads
  `getChunkPos`, `ChunkPos.x/z`, `isChunkLoaded`, `getChunk`, `ja.byD`,
  `BlockEntity.getPos`, feeds `atk` `[slice, inferred]`.
- **`atk(ShulkerBoxBlockEntity)` [18d1b3400]** — validity check (position vs.
  player feet, facing, type) unrecovered `[uncertain]`.

## Settings → behavior

| field | wrapper | chain (verbatim) | notes |
|---|---|---|---|
| `hyrdo` | `ct` | `"Mode"` | group |
| `Mbkzf` | `cu` | `"Vanilla"` | mode A (unconditional) |
| `nszob` | `cu` | `"Grim Shulker" .SY()` | mode B (shulker-gated); `.SY()` builder arg unrecovered |
| `qbgVw` | `cC` | `"Jump Height" .Vy(0.01) .Vw(1.0) .Vx(3.0) .VA(1.6)` → `Vf(Mbkzf::SZ)` | step 0.01 / min 1.0 / max 3.0 / default 1.6 |
| `eXBkK` | `cC` | `"Vertical Boost" .Vy(0.01) .Vw(0.1) .Vx(3.0) .VA(1.91)` → `Vf(nszob::SZ)` | step 0.01 / min 0.1 / max 3.0 / default 1.91 |

- Registry: id 167, bind -999, description "Allows player to jump higher"
  `[registry]`.

## Unrecovered

1. **[RESOLVED 2026-10-17, wave-1 static re-verify B]** `hs`'s two floats are
   **(jump velocity, yaw)** — the bootstrap `LivingEntityJumpEventBridgeMixin`
   replaces `LivingEntity.getJumpVelocity()`/`getYaw()` in `jump()`; em touches
   only `bde`/`bdg`. (Original text: mapping of Jump Height / Vertical Boost onto
   jump velocity and the floats' identity — superseded.)
2. `atk`'s acceptance condition (distance, horizontal alignment, box face).
3. `cu.SY()` argument and `aZS(false)` metadata flag meaning.
4. Whether Vanilla mode edits the same `hs` floats or a different path
   (`method_2920`-style gamemode checks are absent — no creative bypass
   tokens in em's run).
