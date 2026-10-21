# Soul Effects (sixtwo.cZ) — textured soul/glow pass

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/SoulEffects.java`
Status: ported; untextured `debugFilledBox` quads replaced by the recovered glow
sprite for both the core and glow passes.

## Evidence

- `analysis/decompiled/payload-decrypted/sixtwo/cZ.java` `abc`/`abd`
  780–833, 1305–1425: core BUFFER `POSITION_TEXTURE_COLOR`, per-effect
  `cZ$su.dnU` → `ml.clh`; pipeline `kR.bHqVE` when Behind Walls else
  `kR.HUQWl`; then `kl.bQd(framebuffer, framebuffer2, …, Glow)` composite
- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/ml.java` `clh`
  156–184: `matrixStack.multiply(camera.getRotation())`, full-sprite UV
  `(0,0)…(1,1)`, color `udGdm.coa(255·alpha)`, size `PgeQF`
- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/kl.java` `bQd`
  388–390: `bQe(..., 0.25f)`; `bQe` uses the recovered bloom/blur shader chain
- `assets/opengrim/shaders/soul_particle.glsl` — procedural soft disc
  (`exp(-d²·3.5)`, no texture sampler)
- `assets/opengrim/shaders/bloom_blur.glsl`, `bloom_composite.glsl` — imported
- `glow.png` (128²) recovered raster; `ParticleTextures` loader already shared
  with Hit Particles / Target ESP / Particles

## What changed

- `onTick` preloads `glow` via `ParticleTextures`.
- `onWorldRender` obtains a `RenderLayers.entityTranslucent(glow)` consumer
  instead of `debugFilledBox`.
- `drawQuad` now writes full-sprite UVs plus overlay/light/normal (the
  `ml.clh` vertex shape), keeping the camera-rotation billboard, size, color
  alpha and the 0.005 alpha cutoff.
- Glow pass uses the same glow sprite at the existing Glow Radius halo size and
  Glow color alpha; the existing per-particle core→glow order is preserved.
- Geometry, spawn/model-box sampling, dispersion, particle motion, fade
  constants and the effect lifecycle are unchanged.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[G]` The original's core particle texture is bound inside the custom
  `kR.bHqVE`/`kR.HUQWl` pipelines, with `soul_particle.glsl` as a procedural
  disc; `glow.png` is used as the recovered soft-disc equivalent. The exact
  sampler binding is not proven.
- `[G]` `kl.bQd`'s framebuffer/bloom composite is not wired: the audit labels
  its uniform mapping unproven, and the bloom shaders are screen-space post
  effects with no world-render hook. The glow is the same sprite at the
  recovered Glow Radius/alpha instead.
- `[U]` the four DES fade longs (`cZ$su#dob`, `ml#clj`) remain the existing
  labeled 100 ms / divisor-2 estimates.
- `[S]` `Behind Walls` cannot select a different pipeline (the two original
  pipelines are not rebuilt); the setting is carried but both states use the
  translucent layer.
- `[U]` the entity-removal trigger remains a per-tick `isDead()` scan (no
  removal hook).
