# Trajectories (sixtwo.cP) — handler-derived behavior spec

Class: `sixtwo/cP` · display name **Trajectories** (module id 87, registry).
Superclass `gg` (module base), category per constructor `gf.aZL(...)`.
**Zero native methods declared** (javap: 0 `native` modifiers; coverage matrix
`natives_declared=0`). This class is *not* j2cc-virtualized: the payload is a
pure-Java class with decryptable string/int literals, so all behavior below is
recovered from the decompile, not from native pool descriptors. Consequently
there are **no image addresses (0x18xxxxxxx) to cite**; evidence cites are
decompile line numbers of `analysis/decompiled/payload-decrypted/sixtwo/cP.java`.

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cP.java` (1041 lines, CFR with
   folded literals). All arithmetic in `Yr` survives statically — this class is
   the one genuine exception to the "zero float arithmetic survives" rule in
   this batch.
2. `analysis/decompiled/payload-named/sixtwo/cP.java` for identifier
   cross-check.
3. `analysis/specs/modules/cP.md` structural spec.
4. Yarn mappings `analysis/jars/yarn-1.21.11+build.6.tiny` for the referenced
   Minecraft item/entity methods (`BowItem.getPullProgress`,
   `CrossbowItem.getPullProgress` family, `Item.getProjectileType`).
5. Shared-helper API: `gg` (module base, `bab()` enabled check), `cG/cC/cJ`
   settings, `mr.clS(int[])` char-array→setting-name pool, `mU` random.

## Runtime model

- One render hook: `@hG void Yr(go.sX)` [cP.java:549] — the 3D world-render
  event (`go.sX` = MatrixStack `bbh()` + tick delta `bbi()`).
- Purely observational: draws the projectile flight line and target hit box for
  the item currently in the **main hand** (with an off-hand branch when the
  main hand has no projectile item — see `Yt(Item)` [cP.java:393]).
- No tick/packet listeners, no state lists: everything is recomputed each
  frame from held item + player state.
- Helper gates: `Yw(Item)` [cP.java:238] (DES int decoder, projectile
  classification), `Yv(Item)` [cP.java:300] (per-item velocity multiplier),
  `Yu(Item)` [cP.java:381] (gravity selector), `Yt(Item)` (hand-eligibility).

## Per-handler semantics

All handlers are plain Java (no j2cc VM); addresses given as decompile lines.

- `Yr(go.sX)` [549–802] — full trajectory math, recovered exactly:
  - Bow charge `t = item.useTime / 20` (pull progress), clamped to 1;
    charge factor `= (t*t + 2*t) / 3` (matches vanilla `getPullProgress`).
  - Velocity multiplier: Bow ×2; Crossbow 2.2; then multiplied by `Yv(item)`:
    potions **0.4**, XP bottle **0.59**, trident **2.0**, everything else
    **1.5**.
  - Gravity: **0.05** per tick when the item is a bow or the main hand is a
    crossbow (arrow family), **0.03** otherwise (potions/XP/trident).
  - Origin: eye position minus `0.1` from eye height, offset ±`0.16` sideways
    along the hand side (main/off hand flip).
  - BobView (view-bobbing) is explicitly disabled for the raycast/draw path.
  - Crossbow with multishot enchant: draws **3** lines, side lines offset by
    yaw ±**10** degrees.
  - Hit-test box: ±`0.3` around sampled entities/blocks along the ray.
  - `Ys(MatrixStack, Item, float, float)` [803] — draws the filled/outline box
    via the shared `kH.bTJ` box builder, honoring Filled Box/outline/fill
    color settings.
- `Yw(Item)` [238] — DES-decoded projectile classification switch (potion /
  XP / trident / generic) feeding `Yv`/`Yu`.
- `Yv(Item)` [300] — velocity multipliers listed above (literal floats).
- `Yu(Item)` [381] — gravity values listed above (literal floats).
- `Yt(Item)` [393] — chooses main vs off hand as the trajectory source.
- `YO()` — inherited unregister (no per-class teardown; no lists to clear).

## Settings→behavior

Exact names from `mr.clS(int[])` decrypted literals (constructor lines 93–158):

| Setting | Kind | Range / step | Default | Citation |
|---|---|---|---|---|
| Line Color | `cG TaCDX` | color | `rD.dlM().bjG().bis()` (white) | [cP.java:107] |
| Box Outline Color | `cG rHwiT` | color | white | [cP.java:126] |
| Box Fill Color | `cG QyPao` | color | white `.cob(0.5f)` (alpha **0.5**) | [cP.java:142] |
| Filled Box | `cJ ZVcly` | boolean | `true` (`WE(true)`) | [cP.java:154] |

No numeric sliders exist in this module; all numbers above are code constants.

## Unrecovered

- Two DES-int string slots inside `Yr`'s string table resolve through
  `YC(int,long)` [504] — slot keys **21567** and **14295**; these are internal
  label/format strings only (the math does not depend on them). All other
  strings are plain `int[]` literals and recovered.
- The `woehX`/`Qajnw` thread-local DES caches (`Map`, `Integer[]`) are
  mechanism, not behavior — values are the decrypted constants above.
- Vanilla-side constants (drag, projectile item velocity table) are delegated
  to Minecraft's own item code via pool descriptors; Grim only supplies the
  charge/velocity/gravity multipliers listed in `Yr`.