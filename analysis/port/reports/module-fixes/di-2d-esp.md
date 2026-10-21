# 2D ESP (sixtwo.di) — implementation plan (not implemented)

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/Esp2D.java`
Status: **plan only** — the profile-registry work exceeds this queue and two registry
classes are native, so a 1:1 implementation cannot be finished from the recovered corpus
without inventing data. No code changed.

## Why this stops at a plan

`di` itself is fully recovered Java (908 lines, `analysis/decompiled/casesafe/payload-decrypted/sixtwo/di.java`),
but it never draws: it computes one screen-space `lc` rectangle per player and hands it to
the profile system. The profile system is a separate application-sized surface:

| Class | Lines | Status | Role |
|---|---:|---|---|
| `pI` | 81 | **all behavior native** (`Loader.doInit`, 24 natives incl. `cTa()`, `cSP`, `cSS`, `cSW`, `cSX`) | global profile registry `rD.dlS()` |
| `pI$vA` | — | — | per-group record: `(List<py> profiles, float scale, boolean enabled)` |
| `pF` | 2 constants | display names native | profile groups `JMCCO` / `bnwqC` |
| `pG` | — | Java/JSON | serialized profile document (import/export) |
| `pH` | — | — | per-group state |
| `py` | 1286 | Java | base profile: ~40 settings/animators (position, order, scale, colors, text, items, …) |
| `pA` | 547 | Java | box profile: color, font/position groups, `drawBox` |
| `pD` | — | — | box style renderer used by `pA.cRI` |
| `po` | 594 | Java | box profile with name text, `cOt()` nametag-hide flag |
| `pq` | 922 | Java | profile subtype |
| `ps` | 925 | Java | profile subtype |
| `pp` | 185 | Java | profile subtype |
| `pt` | 145 | Java | profile subtype |
| `pj` | 711 | Java | screen layout of the element list around the box |
| `pN` | 53 | **render native** (`pN.render(lC, lc, lc, Entity, boolean)`) | per-element draw wrapper |
| `pM` / `pK` | enums | display names native | position / alignment enums |
| `pC`, `px`, `pi`, `pz`, `pE`, `lc` | small | Java | layout/bounds helpers |

The module settings are only two objects:
`cI "Edit ESP"` (action button → editor callback `aR::yc`) and
`cE "ESP Profiles"` (profile list, serialized through `pG`/`pI`). There are no module
knobs; every visual knob lives in the profile objects.

Native blockers: `pI`'s registry/default list (`cTa()` creates the initial profiles),
`pN.render`, and the display names of `pF`/`pM`/`pK`. The number, order and subtype mix of
the default profiles are therefore unrecoverable; seeding them would be a guess.

## Recovered module-side behavior (ready to use)

From `di.java` and `analysis/specs/casesafe/handlers/di.md`:

- **Event surface**: packet (`gL.tk`), two tick events (`gM`/`gN`), vanilla nameplate
  (`gi`), HUD/world draw (`gk`). The rebuild has packet, tick and world-render events; the
  HUD path is `HudElementRegistry` (Nametags pattern).
- **Draw pass `afB` (di.java:314–407)**: for every `PlayerEntity` in `world.getEntities()`,
  skip self and friends (`rD.dml().aLp`), compute `afC(player, tickDelta)`, skip null,
  choose group `rD.dmc().ddy(player) ? pF.bnwqC : pF.JMCCO`, fetch `rD.dlS().cSP(group)`,
  call `pj.cNs(lC, box, player, profiles, false)`.
- **Box `afJ` (di.java:409–492)**: `getLerpedPos(delta)`, `jg.bBB` box (width/height of the
  entity), project all 8 corners with `jI.bIw`, reject if any projection is null or the
  screen box is `≤ 1×1 px`; otherwise `lc(minX, minY, width, height)`.
- **Box `afC/afD` model path (769–827)**: exact vanilla `PlayerEntityModel` pose
  replication (`afG`, 514–611) and cuboid-corner projection (`afH/afI`, 686–712). This is
  reproducible with 1.21.11's `PlayerEntityRenderer`/`PlayerEntityRenderState`; the port
  currently uses the `afJ` axis-aligned fallback.
- **Nametag suppression `afK` (615–684)**: true iff an active `po` profile for the player's
  group has `cOt()`; `di` does not otherwise suppress plates. The port currently uses
  tracked-set membership (documented divergence).
- **No distance cap**: the decompile has no 64-block (or any) distance filter. The audit
  note "add 64-block cap" is not supported by `di.java`; do not add one without new evidence.

## Staged plan

### Phase A — module-side HUD path (low risk, no registry)

1. Add `HudElementRegistry.addLast` on enable / remove on disable (Nametags pattern).
2. In the HUD pass, compute the `afJ` screen box for each selected player using the
   recovered `jI.bIw` projection (camera rotation ∘ projection, camera-relative position,
   `w <= 0 → null`), reject boxes `≤ 1.0f` wide/high.
3. Draw through `GuiDraw` (`fillRounded`/`strokeRounded` or the recovered `shape` pipeline)
   with a single built-in profile style. The only recovered default is `pA`'s box color
   `rD.dlM().bjb()` (theme text = white) and the default name format (`po.cNC`: profile
   name, or display name when `pA$vy.preview()`); all other style fields need Phase B.
4. Replace the current world-space `RenderLayers.lines()` box pass; keep the tick target
   list and API (`getTargets`, `shouldSuppressNametag`) intact.

This makes the layer and geometry correct but still uses one implicit profile, so label it
`[G] default profile` until Phase B lands.

### Phase B — profile model (Java-only subset)

Port, in dependency order, using the repo settings equivalents:

1. `lc` bounds (169 lines) and `jf.bAW`/`jf.bAH` layout helpers.
2. `py` (base profile) and its settings: position/order, 4 animators (`rk`/`rj`), `cC`
   scale (0.5–2.0, step 0.01, default 1.0), booleans, colors, font selection.
3. `pA` + `pD` (box fill/outline/glow style) and `po` (name text + `cOt`).
4. Remaining subtypes `pq`/`ps`/`pp`/`pt` only after their specs exist; they are 2k+ lines.
5. Replace `Esp2D`'s placeholder `GroupSetting`s with a Java profile store exposing
   `List<py> profiles(pF)`; `pI`'s native map is replaced by an `EnumMap<pF, GroupState>`.
6. Seed defaults as a single `po` (white box, name text) — explicitly `[G]`, because
   `pI.cTa()` is native and the real default list is unknown.

### Phase C — profile editor (blocked by the GUI surface)

`cE`/`cI` require an item/profile list widget and an editor popup; the rebuild has neither
(`ModuleWidgetFactory` has no `cE`/`cI` case). This is the same GUI-surface blocker as
Storage ESP's `cK` item list. Do not fake it.

### Phase D — native render wrapper

`pN.render` only wraps element layout+draw (`pj` already computes `pN` records); once `py`'s
`drawBox`/draw methods are ported, call them directly from `pj` and skip `pN`. This is a
mechanical replacement, not a behavioral one.

## Current port state (unchanged by this task)

- `Esp2D` keeps the recovered selection (players, self/friend skip), the package-private
  `drawBoxOutline`/`line` helpers, `shouldSuppressNametag`, `getTargets`, and the inert
  `edit_esp`/`esp_profiles` groups.
- It still draws a world-space 3D line box instead of the HUD profile pass; this is the
  documented divergence in the class javadoc and PARITY.

## Build

No source change in this step; the module still compiles in the current tree.

## Remaining gaps

- `[N]` `pI` registry + default profile list (`cTa` native).
- `[N]` `pN.render` native wrapper (bypassable once Phase B is done).
- `[N]` `pF`/`pM`/`pK` display names.
- `[S]` profile editor (`cE`/`cI`) has no GUI widget surface.
- `[G]` `qQ.ddy` tracked-player registry: available as a name predicate, but the profile
  grouping cannot be completed without `pI`.
- No distance cap exists in the original; the audit's "64-block cap" is not evidence-backed.
