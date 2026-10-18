# Auto MLG (sixtwo.fM) — handler-derived behavior spec

Class: `sixtwo/fM` · display name **Auto MLG** · registry description "Places
block underneath to avoid fall damage" · primary key 21, active bind -999
(unbound) [`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`fM | Auto MLG | 8 | 8 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fM.c` — **8 native handlers** +
   continuation blocks; behavior handlers `aVp`/`aVq` decrypt one class slice
   `POOL[0x148f8,0x336]`. Citations are image addresses.
2. Java skeleton: `payload-named/sixtwo/fM.java` + decrypted
   `payload-decrypted/sixtwo/fM.java`.
3. Neighbor in window: `fN` (Skin Protect) + `fN$sU` record
   (`comp_1627/1628/1630`, `class_7920 PlayerSkinType`, `class_12079
   AssetInfo`, `class_8685 SkinTextures`, `method_4648 getSkinTextures(UUID)`)
   — NOT fM `[window straddle, stub-matched]`.
4. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/fM.md`.

## Runtime model

- `super(gf.aZL(21, false, gh.xwjCw))` — id 21, category `gh.xwjCw`
  `[decompiled fM.java:31]`.
- Settings (names decrypted verbatim):
  - `dGwjW` — **"Threshold"** (`cC`): `.Vy(0.1).Vw(3.0).Vx(15.0).VA(4.0).Vz(GgimX)`
    — step 0.1, min 3.0, max 15.0, default 4.0, suffix `GgimX` (unrecovered —
    damage-hearts unit) `[decrypted fM.java:33-49]`;
  - `YSNTj` — **"Anchor Player"** (`cJ`): `.WE(false)`
    `[decrypted fM.java:50-58]`;
  - group `Btadw` — **"Mode"** (`ct`) with six `cu` options, all plain
    booleans: `tKkYu` **"Bucket"**, `AleCL` **"Slime"**, `rDsyy` **"Honey"**,
    `ZBrrX` **"Cobweb"**, `fFjCr` **"HayBale"**, `EDXTP` **"Cherry"**
    `[decrypted fM.java:59-129]`.
- Two `@hG` listeners: `aVp(gv)` — **pre-rotation event** (dispatched before
  the `qL` rotation manager applies rotations, per `er.md` order) and
  `aVq(gH$th)` — tick `[decompiled]`.
- fM's own symbol run (before the `fN$sU` cluster):
  - `method_2920` → `ClientPlayerInteractionManager.getCurrentGameMode()`? —
    mapped `()Lnet/minecraft/class_1934;` (`GameType`), `method_8386` →
    **`GameType.isCreative()`** `[slice, tiny-mapped]`.
  - `method_29503` → **`hurtByWater()`** (entity predicate — bucket-mode
    safety: don't water-MLG entities hurt by water) `[slice, tiny-mapped]`.
  - Item constants: `field_8828` → **`Blocks/items SLIME_BLOCK`**,
    `field_21086` → **`HONEY_BLOCK`**, `field_17528` → **`HAY_BLOCK`**,
    `field_16998` → **`SWEET_BERRIES`** (all `class_1792` `Item` fields) —
    the per-mode MLG materials `[slice, tiny-mapped]`.
  - fM fields/statics + `bBy`/`bBr` helpers `[slice]`.
- Mode→material mapping recovered by the constants: Slime→SLIME_BLOCK,
  Honey→HONEY_BLOCK, HayBale→HAY_BLOCK, Cherry→SWEET_BERRIES (cherry
  berries/leaf landing), Cobweb→(web placement; `Items.COBWEB` constant is
  not in fM's segment — VM-side), Bucket→water bucket (no bucket constant in
  the segment either — VM-side) `[slice, inferred]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_29ee64b3edc59393a3bb896a1fd427c8()V` | `[18ac054e0]` | native clinit stub |
| `aVp(Lsixtwo/gv;)V` | `[18abb6960]` | pre-rotation listener: place/aim during fall (virtualized) |
| `aVq(Lsixtwo/gH$th;)V` | `[18abbf950]` | tick listener: fall-damage watch + trigger (virtualized) |
| `aVr(MatchException)MatchException` | `[18abcc870]` | identity rethrow |
| `aVs([B)Ljava/lang/String;` | `[18abcc900]` | string decryptor (suffix `GgimX`) |
| `aVt(IJ)I` | `[18abf67e0]` | int-constant decrypt kernel (decrypts `POOL[0x148f8,0x336]`) |
| `aVu(Lookup;MutableCallSite;String;[Object;)I` | `[18ac017c0]` | MutableCallSite re-bootstrap |
| `aVv(Lookup;String;MethodType;)CallSite` | `[18ac027d0]` | indy bootstrap |

- **`aVq(gH$th)` [18abbf950]** — decrypts `POOL[0x148f8,0x336]`,
  `ExceptionCheck` (`+0x720`), VM dispatch. Recovered shape: while falling,
  estimate upcoming fall damage; when it exceeds **Threshold** (default 4.0)
  and the active mode's material is available, trigger the placement routine;
  creative mode skips the damage check (`isCreative` token). Bucket mode
  checks `hurtByWater` first. **Anchor Player** keeps the MLG placement
  anchored to the player's position (vs. velocity-projected landing spot) —
  exact distinction virtualized `[slice, inferred, uncertain]`.
- **`aVp(gv)` [18abb6960]** — pre-rotation phase of the same routine
  (rotation/aim before `qL` processes; pitch/yaw target selection unrecovered)
  `[inferred]`.

## Settings → behavior

| field | wrapper | chain (verbatim) | notes |
|---|---|---|---|
| `dGwjW` | `cC` | `"Threshold" .Vy(0.1) .Vw(3.0) .Vx(15.0) .VA(4.0) .Vz(GgimX)` | step 0.1 / min 3 / max 15 / default 4 |
| `YSNTj` | `cJ` | `"Anchor Player" .WE(false)` | default false |
| `Btadw` | `ct` | `"Mode"` | group |
| `tKkYu/AleCL/rDsyy/ZBrrX/fFjCr/EDXTP` | `cu` | `"Bucket" / "Slime" / "Honey" / "Cobweb" / "HayBale" / "Cherry"` | mode toggles (plain `cu`, no builder call) |

- Decrypted name constants verified in `full-dump.jsonl` (class `sixtwo.fM`):
  "Threshold", "Anchor Player", "Mode", "Bucket", "Slime", "Honey", "Cobweb",
  "HayBale", "Cherry" `[full-dump]`.
- Registry: id 21, bind -999, description above `[registry]`.

## Unrecovered

1. Fall-damage estimation and the exact trigger condition (distance vs.
   computed damage vs. velocity — Threshold unit likely hearts/damage but
   unrecovered).
2. The block/bucket placement mechanism (no `BlockItem`/`PlacementContext`
   tokens in fM's own segment; `gv`-driven rotation target unrecovered).
3. `Items.COBWEB` / bucket constants and multi-mode fallback order
   (which mode wins when several are on).
4. Suffix literal `GgimX`.
