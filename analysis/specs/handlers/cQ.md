# Swing Animations (sixtwo.cQ) — handler-derived behavior spec

Class: `sixtwo/cQ` · display name **Swing Animations** (module id 94).
Superclass `gg`. **Zero native methods declared** — a pure-Java payload class,
not j2cc-virtualized; no image addresses (0x18xxxxxxx) exist to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/cQ.java` (603 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cQ.java` — fully decompiled
   with folded literals; every handler body readable.
2. `analysis/specs/modules/cQ.md` structural spec.
3. Yarn mappings: hand-swing/equip-progression methods
   (`PlayerInventory`, `LivingEntity.updateHandSwing`,
   `PlayerEntityRenderer` first-person paths) via
   `analysis/jars/yarn-1.21.11+build.6.tiny`.
4. Helper classes: `hc` (held-item-change event, payload event bus), `gm`
   (first-person hand-transform render event), `cI` action-button setting,
   `im` swing-profile registry consulted by `YG`.

## Runtime model

- The module exposes two injection points that the Java **shell** (client
  renderer code, out of scope) calls:
  - `YF(hc)` on held-item change → instant-equip.
  - `YG(gm)` on first-person hand transform → applies the swing animation
    transform from the `im` animation profile.
- Gate: `YI()` [cQ.java:170] — module enable check consulted by the shell
  before invoking either path.
- One settings-tree entry: a single `cI` button that opens the animation
  editor (`c::z` runnable — opens the client's swing-animation editor UI).
  Actual animation parameters live in the `im` profile objects, edited by the
  editor, not in module settings.

## Per-handler semantics

- Constructor [68–90]: builds `cI YVeeN = new cI(this, mr.clS(...))` with
  `.Wx(c::z)` — button handler opens the animation editor. No other settings.
- `YI()` [170–212] — public enable-gate (`bab()` wrapper used by shell hooks).
- `YF(hc hc2)` [213–302] — **instant equip**: on the held-item-change event,
  sets `player.equippedProgress = 1.0` directly on both inventory hands
  (equivalent to `in.bkX()/bkY()` accessors) so the equip animation is
  skipped when the module is active.
- `YH(ItemStack)` [316–435] — exclusion predicate: returns true (swing
  transform suppressed / vanilla behavior kept) for items whose use/action
  classifies into the exclusion set recovered as: `AIR`, `FILLED_MAP`,
  `CROSSBOW`, `BOW`, `TRIDENT`, `DRINK`, `EAT` (decrypted literal switch).
- `YG(gm gm2)` [436–546] — first-person swing transform: reads the active
  `im` profile and applies its transform to `gm`'s MatrixStack before the
  vanilla hand render; defers all curve math to the `im` profile object (Java
  shell side, out of scope for this spec).
- `YJ()` [303] — exposes the `cI` button for the settings UI.
- `YO()` — inherited; no per-class state.

## Settings→behavior

The module's settings tree is exactly one element (verbatim from decrypted
literal, constructor line 86):

- **"Edit Animation"** — `cI YVeeN` action button; click → `c::z` (open swing
  animation editor). No min/max/step/default apply to action buttons.

There are **no numeric, color, boolean, or group settings** in this module.
All tunable values (swing curves, durations, rotation) belong to the `im`
animation profile registry, which is edited through the editor UI and stored
client-side — not through module settings.

## Unrecovered

- The `im` profile format (swing curve control points, durations) is a shell
  class concern; only the call contract (`YG` applies it; `YH` filters items)
  is in scope. No guessing of the curve parameters.
- One DES string slot resolved via `YM/YN` bootstraps is used for the button
  label; the visible name is recovered as "Edit Animation" from the folded
  literal, but a second DES-decoded help/tooltip string's plaintext was not
  dumped.
- The exact enum ordinal ↔ `UseAction` mapping inside `YH`'s switch is
  reconstructed from the switch cases (7 constants listed above); the raw DES
  ints behind the case labels were not individually dumped, so treat the list
  as [recovered via literal switch, high confidence] but ordinal order
  [uncertain].