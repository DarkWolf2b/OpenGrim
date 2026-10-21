# Target ESP (sixtwo.dz) — textured bloom / Ghosts pass

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/TargetEsp.java`
Status: ported; all textured quads now bind the recovered particle sprites.

## Evidence

- `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dz.java`
  - `ajE` Circle 387–550: `ob.cBv(22338)` at 450, one batch for bloom + core at 474;
    quads 533 (bloom) and 539 (core).
  - `ajF` Soul 658–847: `ob.cBv(28705)` at 732, batch 756; quads 830/836.
  - `ajG` Ghosts 853–1012: `ob.cBv(22932)` at 931, batch 955; quads 989/991.
  - `ajH` Crystals 1031–1206: core pass `AswNN`/`kE.bTf` 1136–1167; glow pass
    `ob.cBv(22338)` 1175–1176, `jI.bIq` 1190, quad 1191.
  - `jI.bIu` (Y(-yaw)·X(pitch)) for Circle/Soul/Ghosts; `jI.bIq`
    (`Camera#getRotation`) for the Crystals glow.
- `analysis/port/reports/module-divergences/avoidable-audit-2026-10-21.md` §3.1
  and `batch-22.md:50`: recovered textures `glow` (Circle/Soul/Crystals bloom)
  and `ghosts` (Ghosts).
- Assets on disk: `src/main/resources/assets/opengrim/textures/particles/glow.png`
  (128²) and `ghosts.png` (256²), both pure-white/soft-alpha masks.

## What changed

- New shared loader `src/main/java/dev/opengrim/modules/render/ParticleTextures.java`
  (the `ob.cBv(String)` equivalent): lazy `NativeImageBackedTexture` registration
  from `assets/opengrim/textures/particles/<key>.png`, cached by key, procedural
  disc fallback, `preload(...)` for the client tick. `HitParticles` now delegates
  to it (no duplicate loader).
- `TargetEsp.onTick` preloads `glow`/`ghosts` so no GPU texture is created inside
  the world-render pass.
- `onWorldRender` requests one textured `RenderLayers.entityTranslucent` buffer in
  draw order:
  - Circle → `glow`
  - Soul → `glow`
  - Ghosts → `ghosts`
  - Crystals → `debugFilledBox` core first, then `glow` bloom
- `quad(...)` split into `texturedQuad(...)` (full-sprite UV, V=0 top,
  full-bright, overlay 0, normal) for the blob modes and the old untextured
  `quad(...)` for the Crystals core (`AswNN`/`kE.bTf` in the original).
- Billboard orientation corrected: Circle/Soul/Ghosts now use the original
  `jI.bIu` = `Y(-cameraYaw)·X(cameraPitch)`; the Crystals bloom keeps
  `Camera#getRotation` (`jI.bIq`).
- Geometry, sizes, counts, alpha envelopes, fade/scale animators, colour mixing
  and the `Bloom`/`Bloom Amount` gates are unchanged.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[G]` The texture call-site plaintexts are DES; `glow`/`ghosts` are the
  recovered asset names and the audit's proven mapping, but `ob.cBv` cannot be
  decrypted literally.
- `[S]` Crystals core stays on the untextured batch (original `AswNN`/`kE.bTf`
  3D cuboid; this port keeps the existing 0.1-size quad approximation).
- `[U]` `Ignore Walls` (`kS cHVCf`/`MRndq`) still has no layer equivalent; the
  setting is carried but inert.
- `[G]` Crystals bloom alpha uses the recovered `0.1f · BloomAmount · fade`
  formula; the original's `SfkMU.VC()`/`VB()` slider reads are already mirrored
  by `bloomAmount`.
