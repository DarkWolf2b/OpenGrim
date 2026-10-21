# Hit Particles (sixtwo.dc) — visual path fix

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/HitParticles.java`
Status: ported; visual substitute replaced with the recovered textured billboards + glow pass.

## Evidence

- `analysis/decompiled/payload-decrypted/sixtwo/dc.java`
  - ctor/settings tree: lines 75–232 (unchanged port)
  - `abY(gH.th)` spawner and `abZ(go.sX)` render dispatch: CFR failed; recovered from
    javap bytecode per `analysis/specs/casesafe/handlers/dc.md` (abZ 3248–3424,
    abY 3424–3610)
  - `mo` style map in `abZ`: index 0→`TcnVB`, 1→`KePbo`, 2→`Vflfx`, 3→`bkxjV`,
    4→`kbKRO`, 5→`mDCeI`, 6→`KyziQ`, 7→`KyHOi`
- `analysis/decompiled/payload-named-cfr/sixtwo/mm.java`
  - `cls` lines 88–97 (exact transform/angle advance)
  - `clq` 224–230 (core draw)
  - `clr` 212–222 (glow draw: 2× quad, second `cls` call)
- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/mq.java` 87–106
  (`clL` interpolation)
- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/jI_.java`
  - `bIs` 108–113 = translate(pos − camera)
  - `bIt` 53–55 = translate(d, d, d)
  - `bIu` 148–152 = Y(−yaw) then X(pitch)
- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/jJ.java` 91–117
  (`bIA` visibility box ±0.5 over the captured frustum)
- `analysis/decompiled/payload-named-cfr/sixtwo/mo.java` 205–213, 224–226
  (`clD()` texture per enum constant; DES plaintexts still open)
- `analysis/decompiled/bootstrap/offline/assets/raster-assets.bin` — recovered sprites
  (format big-endian `count`, then `[nameLen][name][blobLen][PNG]`)

## Mode → asset map

Asset dimensions and alpha masks were verified by extracting each PNG. All eight
style sprites are pure-white alpha masks (RGB 255,255,255 + alpha), so the Color
setting tints them losslessly. `ghosts` is a 256×256 soft white blob; the rest are
64×64 silhouettes.

| Particles mode (abZ index, mo constant) | Asset key | File |
|---|---|---|
| 0 Stars (`TcnVB`) | `star` | `assets/opengrim/textures/particles/star.png` (64²) |
| 1 Snowflakes (`KePbo`) | `snowflake` | `.../snowflake.png` (64²) |
| 2 Ghost (`Vflfx`) | `ghosts` | `.../ghosts.png` (256²) |
| 3 Hearts (`bkxjV`) | `heart` | `.../heart.png` (64²) |
| 4 Diamonds (`kbKRO`) | `diamond` | `.../diamond.png` (64²) |
| 5 Thunders (`mDCeI`) | `thunder` | `.../thunder.png` (64²) |
| 6 Moons (`KyziQ`) | `moon` | `.../moon.png` (64²) |
| 7 Clouds (`KyHOi`) | `cloud` | `.../cloud.png` (64²) |
| Glow pass (`ob.cBv`) | `glow` | `.../glow.png` (128²) |

The `hearts` 256×256 asset in the bin is the GUI icon sheet, not the particle
texture; the particle heart is the 64×64 `heart` key.

## Draw path (1:1)

`mm.cls` (mm.java:88–97), reproduced per particle and per pass:

```
translate(pos − camera)                 // jI.bIs
scale(0.07, 0.07, 0.07)                 // float f3 = 0.07f
translate(Scale/2, Scale/2, Scale/2)    // jI.bIt
multiply(Y(-cameraYaw))                 // jI.bIu
multiply(X(cameraPitch))
multiply(Z(angle += tickDelta * rotSpeed))
translate(-Scale/2, -Scale/2, -Scale/2) // jI.bIt
quad(0, 0, Scale, Scale)                // mm.clq
```

- Exactly this transform is used (not `camera.getRotation()`, whose pitch sign and
  180° yaw flip differ from `jI.bIu`).
- Core pass: `mm.clq` quad `(0,0,Scale,Scale)`, one `cls` call → one angle advance.
- Glow pass (`mm.clr`): same `cls` transform again, quad offset
  `(Scale−2·Scale)/2 = −Scale/2`, size `2·Scale`, one more angle advance. The angle
  therefore advances twice per frame while Glow is on (original quirk preserved).
- Original batch order: core draw → flush → `swapTexture(ob.cBv(glow))` → glow draw
  → end. Rebuild: core `RenderLayers.entityTranslucent(style)` buffer requested
  first, glow `entityTranslucent(glow)` second; the provider flushes layers in
  creation order, matching the swap. Both layers are translucent, no-cull,
  `LEQUAL_DEPTH_TEST` (original `kM.defaultState().bVG(LEQUAL_DEPTH_TEST)`).
- Vertices: `vertex(entry, x, y, 0).color(argb).texture(u,v).overlay(DEFAULT_UV)
  .light(0xF000F0).normal(entry, 0,0,1)`, full-sprite UV with V=0 at the top
  (vanilla billboard convention: `BillboardParticleSubmittable.drawFace` maps
  `minV` to the +Y edge).
- Visibility gate: `jJ.bIA` box ±0.5 around the interpolated position over
  `worldRenderer.getCapturedFrustum()` (original falls back to `getCullingFrustum()`
  via a mixin accessor that this rebuild does not expose; a null captured frustum
  renders, same as the repo-wide Trails convention).
- Non-visual behavior untouched: physics (`mm.clp`), spawn (`abY`), settings,
  lifetime and interpolation are the previously verified 1:1 port.

## Files

- Modified: `src/main/java/dev/opengrim/modules/render/HitParticles.java`
- Added textures:
  `src/main/resources/assets/opengrim/textures/particles/{star,snowflake,ghosts,heart,diamond,thunder,moon,cloud,glow}.png`
- Report: this file.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[G]` Mode→sprite mapping uses the recovered asset names and abZ index order.
  The `mo` DES plaintexts (`mo.java:205–212`, indices 3/2/6/12/9/1/14/8) remain
  encrypted; no other 8-sprite name set exists in the raster dump, so the mapping
  is effectively unambiguous, but it is not literal ciphertext evidence.
- `[G]` Glow texture name: the asset `glow` is the only glow-like sprite in the
  recovered dump and matches the pass semantics; the `ob.cBv` DES plaintext
  (slot ~6951, `analysis/specs/casesafe/handlers/dc.md` §Unrecovered) is still open.
- `[G]` The original's "flush + swapTexture + post-process" glow is reproduced as
  the original 2× translucent glow quad (the original also draws that 2× quad in
  `clr`); the repository's `bloom_*` shaders are screen-space post effects with no
  world-render hook, so no extra bloom shader is wired.
- `[U]` `ZRQxW` (milliseconds-per-second factor for Time Before Disappear) remains
  inferred as 1000 from the `" s"` suffix (mm.java:79).
- The original `jJ` culling-frustum fallback (`getCullingFrustum`, mixin `mN`) has
  no public accessor in this rebuild; captured-frustum-only is kept and documented.
