# dw — Circle ESP: real textured/solid kR pipelines

**Status:** implemented · **Remaining DES gaps:** `kz.bSr` segment/alpha/light

## Evidence

- Settings/selection/render: `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dw.java:96-225`
  (settings), `:391-467` (`aiV`), `:548-683` (`aiT`), `:689-789` (`aiU`),
  `:791-811` (`aiX`), `:871-873` (`aiW`).
- Textured draw: `kz.bSh` (`kz.java:458-480`), pipeline
  `kR.Dmmsd.bUZ(kz.aKqGY)` (`kR.java:271`, `kz.java:193`), state:
  `POSITION_COLOR_TEXTURE_LIGHT`, quads, `lh.aApMr` blend, `NO_DEPTH_TEST`,
  depth write true, cull false, texture bound from its own sampler
  (`kz.bSj`, `kz.java:205-217`).
- Solid draw: `kz.bSi` (`kz.java:344-452`), pipeline `kR.PMnQE`
  (`kR.java:208`, `kS7` at `kR.java:196`) — `POSITION_COLOR`, `TRIANGLE_STRIP`,
  `lh.aApMr`, `NO_DEPTH_TEST`, depth write true, cull false.
- Previous port used `RenderLayers.entityTranslucent` (textured) and
  `RenderLayers.debugFilledBox` quads (solid); both are depth-tested/culled and
  the solid pass had the wrong draw mode.

## Fix

- Textured style (`aiX`): build the `kz.bSh` quad in
  `POSITION_COLOR_TEXTURE_LIGHT` and call `EffectDraw.drawTextured` — recovered
  `kh.aApMr` blend, no depth test, no cull, texture sampler from the texture.
- Solid style (`aiW`): build the `kz.bSi` ring as `POSITION_COLOR`
  `TRIANGLE_STRIP` with `RING_SEGMENTS + 1` bottom/top pairs and the closing
  bottom/top vertex, then `EffectDraw.drawSolid` — recovered `kR.PMnQE` state.
- The ring now uses the original vertical band geometry (bottom plane alpha
  `RIM_ALPHA`, top vertex alpha 0) and the original gradient/phase math; the
  previous quad emulation is gone.
- Sprite loading still uses `CircleTextures` (recovered `circle` PNG; Custom URL
  path unchanged).

## Remaining gaps

- `[G]` `kz.bSr("a",18164)` segment count and `kz.bSr("a",28421)` rim alpha are
  DES (kz class key is native); `64`/`170` remain high-probability guesses.
- `[G]` lightmap values `kz.bSr("a",4097/28672)` are DES; the custom stages are
  full-bright.
- `[G]` `jd.bAm` URL validation approximated; `ob.cBv` assets are now the
  recovered PNGs.
- `[U]` the original `cF` entity picker widget remains a plain set API.

## Files

- `src/main/java/dev/opengrim/modules/render/CircleEsp.java`
- `src/main/java/dev/opengrim/modules/render/EffectDraw.java` (new)
- `src/main/resources/assets/opengrim/shaders/circle_solid.vsh` / `.fsh` (new)

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava --rerun-tasks`
→ **BUILD SUCCESSFUL**. `circle_solid` vertex/fragment stages pass
`glslangValidator`.
