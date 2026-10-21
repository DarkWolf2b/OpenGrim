# de — Hand Chams: acv hand re-render + recovered shader composites

**Status:** implemented (hand-pass mask + four kj modes + outline) ·
**Remaining native/DES:** `ro.diF` presets, `acw`/`OTglH` literal tables

## Evidence

- Settings/dispatch: `analysis/decompiled/casesafe/payload-decrypted/sixtwo/de.java:120-1017`
  (settings + `Vf` visibility), `:1147-1394` (`acs`, `acr`, `act`, `acu`, `acv`,
  `acq`, `acw`).
- Outline pass: `de.act` calls `ki.bPi` (`de.java:1149`), same Java
  mask/composite as `dl` (`ki.java:206-266`).
- Effect passes: `de.acu` calls `kj.bPr/bPs/bPt/bPu` (`de.java:1318,1341,1364,1381`).
  `ki` and `kj` have **0 natives**; `kR` pipelines are Java; the four
  `chams_*.glsl` stages are imported.
- Hand re-render: `acv` uses the bootstrap `GameRendererAccessor` to re-render
  the hand into the effect target and flush the item/entity consumers.
- Previous port substituted a uniform `HandTintEvent` colour/alpha multiplier on
  the held item (`HandChams.java:250-284`, `ItemRendererMixin`); it was labelled
  `[N] ki.bPi`/`kj.bPr..bPu`, which the audit showed is wrong (0 natives).

## Implementation

- `GameRendererMixin` brackets the private
  `GameRenderer.renderHand(float, boolean, Matrix4f)` at HEAD/RETURN and calls
  `HandChams.beginHandRender()` / `endHandRender()`.
- `HandChamsRenderer` copies the main framebuffer to a background target, clears
  a private hand mask (colour+depth) and redirects all hand draws through
  `RenderSystem.outputColorTextureOverride`/`outputDepthTextureOverride`. This
  reproduces the `acv` re-render boundary: the ordinary hand pass draws the
  arm/item into the mask, then the recovered composite draws the effect over
  the background.
- Non-outline effects call `ChamsRenderer.composite` with the `kj` slot order
  built from the Hand Chams settings (`reflection`, `water_reflection`,
  `liquid_brightness`/`liquid_speed` names preserved).
- The Outline effect calls `OutlineRenderer.composite` with the `de` colour,
  second colour, colour mode and glow/fill/saturation/brightness parameters —
  the same `ki.bPi`/`outlines.glsl` path used by `dl`.
- The old tint is now a **fallback only**: `onHandTint` returns while the shader
  path is rendering or available, so the item is not double-tinted.

## Remaining gaps

- `[N]` `ro.diF` preset value tables (2 behavior natives) — the Preset mode is
  still carried but does not rewrite the liquid-metal settings.
- `[U]` `acw`'s 17 preset value tables and `OTglH` suffix are DES; Light Angle
  has no suffix in the port.
- `[U]` `ki.bPq`/`kj` uniform-name slots are DES; the recovered shader names and
  `kj` argument order determine the mapping.
- The `lT.ciQ().setLineSmoothing` wrapper for outline passes has no equivalent;
  the composite is screen-space and does not use line smoothing.

## Files

- `src/main/java/dev/opengrim/modules/render/HandChams.java`
- `src/main/java/dev/opengrim/modules/render/HandChamsRenderer.java` (new)
- `src/main/java/dev/opengrim/mixin/GameRendererMixin.java` (new)
- `src/main/resources/opengrim.mixins.json`
- Uses the existing `chams_*`, `outlines` shaders and `ItemRendererMixin`
  fallback tint

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava --rerun-tasks`
→ **BUILD SUCCESSFUL**. No new shader stages (reuses validated
`chams_*`/`outlines` stages).

Runtime was not exercised (no display); the hand redirect uses the same
`outputColorTextureOverride` mechanism as `RenderLayer.draw` and the payload's
own GUI entity preview.
