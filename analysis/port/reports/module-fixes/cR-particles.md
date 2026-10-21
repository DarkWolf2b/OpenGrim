# Particles (sixtwo.cR) — textured style + glow batches

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/Particles.java`
Status: ported; textured `mo` bills and textured glow pass.

## Evidence

- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/mn.java`
  - `cls` 93–101: `jI.bIs`, scale 0.07, `±hMiLh/2` pivot, `jI.bIu`
    (`Y(-yaw)·X(pitch)`), **no Z rotation** (cR has no rotation settings)
  - `clq` 261–287: quad `(0,0,0,hMiLh,hMiLh)`, alpha `255·fade·0.4`, fade target
    `!tyKgU`
  - `clr` 248–258: 2× quad offset `-hMiLh/2`, same alpha (this is the original glow
    geometry, so the audit's "2× approximation" is actually exact — only the
    texture was missing)
- `analysis/decompiled/payload-decrypted/sixtwo/cR.java` `YT` 737–799:
  `XSRvt.startBatch(mo2.clD(), state)`; core pass `mq.clq`; if Glow:
  `flush()`, `swapTexture(ob.cBv(ZDept))`, `mq.clr` over the same visible list,
  `endBatch()`
- `mo.clD()` (mo.java:224) and the recovered raster asset set: `star`,
  `snowflake`, `ghosts`, `heart`, `diamond`, `thunder`, `moon`, `cloud`, plus
  `glow` — same keys/order as `HitParticles.SPRITE_KEYS`
  (`analysis/port/reports/module-divergences/avoidable-audit-2026-10-21.md` §3.2)
- Assets: `src/main/resources/assets/opengrim/textures/particles/*.png`

## What changed

- `onTick` preloads the eight sprites + `glow` via the new shared
  `ParticleTextures` loader (`ob.cBv` equivalent) so no texture is created during
  the world pass.
- Draw replaced `RenderLayers.debugFilledBox()` with
  `RenderLayers.entityTranslucent(styleTexture)` and a second
  `entityTranslucent(glowTexture)` batch, matching the original startBatch →
  flush/swapTexture → endBatch order.
- Core pass: `mo.clD()` style texture; transparent full-sprite UV; alpha
  `255·fade·0.4`.
- Glow pass: same visible list, `glow` texture, 2× size, same alpha.
  The 2× geometry itself is unchanged (it was already the original `clr` shape).
- Billboard corrected to `jI.bIu` = `Y(-cameraYaw)·X(cameraPitch)`; the previous
  `Camera#getRotation` had the opposite pitch sign and a 180° yaw flip.
- `.color(r,g,b,a)` now carries the float channels on the textured vertex format;
  full-bright/overlay/normal match the other particle paths.
- Physics, spawn, fade timer, lifetime guesses, amount/idle/movement logic and
  the visibility gate are unchanged.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[G]` Mode→sprite mapping is inferred from the recovered asset names/order; the
  `mo` DES plaintexts are unrecovered (same caveat as Hit Particles).
- `[G]` Glow texture `ob.cBv(ZDept)` plaintext is unrecovered; `glow` is the only
  glow-named recovered raster and matches the pass.
- `[G]` Burst count (slot 7599), lifetime (45/31570) and fade duration (15236)
  remain labeled estimates (unchanged).
- `[S]` `AFTER_ENTITIES` stands in for the original post-sky render phase
  (unchanged).
