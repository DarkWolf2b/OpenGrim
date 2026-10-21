# dl — Outlines: recovered ki.bPi mask + outlines.glsl composite

**Status:** implemented (world-render output live) · **Remaining gaps:** none data-blocking; binding order inferred

## Evidence

| Piece | Evidence |
|---|---|
| Settings/collection/render | `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dl.java:55-230` (settings), `:425-535` (`agJ`), `:537-544` (`agK`) |
| Default selection | `cF.java:33-36` seeds `PLAYER`; `dl.java:85` `.VS(jg$tJ.OCdZM).VT(EntityType.END_CRYSTAL)`; `VT` adds to the universe (`cF.java:181-185`) and `VX` requires the selected set (`cF.java:230-268`) |
| Mask/composite | `ki.java:206-266` (`bPk`): `ZtWVe.caK/caM`, target swap + `kn.bQo(runnable)`, then `kn.bQr(kR.MNKWu, framebuffer, uniforms)` |
| Entity mask queue | `kn.java:299-371` (`bQu`/`bQr`/`bQt`), `lH.cgm/cgp`, `kn.YNOIY` |
| Composite shader | `src/main/resources/assets/opengrim/shaders/outlines.glsl` |
| Pipeline | `kR.MNKWu` (`kR.java:255-258`), `POSITION` QUADS, `NO_DEPTH_TEST`, blend, output target main |

## Previous state

`Outlines` had no `WorldRenderEvent` subscription at all: `onTick` only collected
entities and `ki.bPi` was never executed, so the module was visually inert.
The audit (`avoidable-audit-2026-10-21.md` §3.3) confirmed all helpers are Java.

## Implementation

- `Outlines.onWorldRender` (AFTER_ENTITIES) now performs the exact `agJ`
  collection: `world.getEntities()` → captured-frustum gate → skip self →
  `Myqqn.VX` (universe ∩ selected set), then calls `OutlineRenderer`.
- `OutlineRenderer.draw` calls the shared `ChamsRenderer.renderMask` (the same
  `kn.bQt`/`lH` entity re-render with the shared `kn.YNOIY` window; labels,
  shadows, fire and leashes are filtered out by the `kn$uh` queue) and then
  composites with `outlines.glsl`.
- The recovered `ki.bPk` uniform order is packed into a std140 `Outlines` block:
  `halfTexelSize = 0.5 / target size`, `time = GLFW time * animationSpeed`,
  `firstColor`/`secondColor`, `colorMode`, `glowQuality`, `glowThinOutline = 1`,
  `glowRadius`, `glowAlphaMult`, `fillAlphaMult`, `saturation`, `brightness`.
- `Outlines.isOutliningActive` is true exactly during the mask batch (the
  original `kn.YNOIY`); the Health Indicators suppression is live again and
  `shouldCancelNameplate()` remains meaningful.
- Default selection corrected: the selected set is `{PLAYER}` (cF ctor);
  `VT(END_CRYSTAL)` only adds the crystal to the **universe**. The previous
  END_CRYSTAL default was a misread and would have outlined nothing.
- The `outlines.glsl` body is unchanged; only the loose uniforms were moved into
  a std140 block (`outlines.fsh`), because `RenderPass` has no per-uniform API.

## Remaining gaps

- `[U]` `ki.bPq` uniform-name slots are DES; the mapping above is inferred from
  the unique names in `outlines.glsl` and the `bPk` call order. No data blocker.
- `[U]` `kR.MNKWu`'s vertex/fragment shader identifiers are DES; the imported
  `outlines.glsl` is used directly (the only outline composite in the corpus).
- `[G]` `ki.bPk`'s `glowThinOutline` is a hard-coded `1` for `bPi` (the `bPj`
  hand variant differs only by the depth copy and is used by Hand Chams, not
  this module).
- `[U]` the original `cF` entity-picker widget remains a plain set API.

## Files

- `src/main/java/dev/opengrim/modules/render/Outlines.java`
- `src/main/java/dev/opengrim/modules/render/OutlineRenderer.java` (new)
- `src/main/resources/assets/opengrim/shaders/outlines.fsh` / `outlines.vsh` (new)
- `src/main/java/dev/opengrim/modules/render/ChamsRenderer.java`
  (`renderMask`/`maskTarget` shared with dv)

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava --rerun-tasks`
→ **BUILD SUCCESSFUL**. `outlines.vsh`/`outlines.fsh` pass `glslangValidator`.

Runtime was not exercised (no display); the mask/composite primitives are the
same ones used by the already-compiled Chams pass.
