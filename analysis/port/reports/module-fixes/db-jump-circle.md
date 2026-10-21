# db — Jump Circle: recovered texture + real kR.Dmmsd/kz.bSh pass

**Status:** implemented · **Remaining DES gap:** `db$sw.yqWBV` animation duration

## Evidence

- Settings/collect/render: `analysis/decompiled/casesafe/payload-decrypted/sixtwo/db.java:96-198`
  (settings), `:548-636` (`abG` texture), `:638-824` (`abF` tracking),
  `:844-971` (`abE` render), `:974-999` (`abD` tick).
- Textures: `ob.cBv("circle")` / `ob.cBv("circle_glow")` (decrypted call sites
  27709/11427); recovered pixels in
  `analysis/decompiled/bootstrap/offline/assets/raster-assets.bin` and shipped at
  `src/main/resources/assets/opengrim/textures/circle.png` (1024²) and
  `circle_glow.png` (1424²).
- Draw: `kz.bSh` (`kz.java:458-480`) uses
  `kR.Dmmsd.bUZ(kz.aKqGY)` (`kR.java:271`, `kz.java:193`) —
  `POSITION_COLOR_TEXTURE_LIGHT`, quads, blend `lh.aApMr`
  (SRC_ALPHA, ONE_MINUS_SRC_ALPHA, ONE, ONE), `NO_DEPTH_TEST`, depth write
  true, cull false — and binds the texture with
  `AbstractTexture.getGlTextureView()/getSampler()` (`kz.bSj`, `kz.java:205-217`).
- The previous port used `RenderLayers.entityTranslucent(texture)`, which is
  depth-tested/culled and not the recovered pipeline.

## Fix

- `CircleTextures` already loads the recovered PNGs (previous working-tree
  fix); this pass keeps that loader and removes the remaining layer stand-in.
- `JumpCircle.onWorldRender` now builds a `POSITION_COLOR_TEXTURE_LIGHT` quad per
  circle in a `BufferAllocator`/`BufferBuilder` and calls
  `EffectDraw.drawTextured` (`EffectDraw.java`), which creates the recovered
  `RenderPass` against the main framebuffer with the main depth attachment,
  `DynamicTransforms`/`Projection` from the default uniforms, the texture's own
  sampler, `lh.aApMr` blending, `NO_DEPTH_TEST`, depth write true and cull off.
- Geometry is unchanged from `kz.bSh`: translate by `pos − camera`, X-90,
  `−radius..+radius` quad with UV (0,1)/(1,1)/(1,0)/(0,0), colour ARGB.
- The visual box/consumer layer stand-in is gone.

## Remaining gaps

- `[G]` `db$sw` duration `yqWBV` is DES (class key is native `gb.aYR`), absent
  from the runtime dump; `ANIM_MS = 400` remains the high-probability guess.
- `[G]` `kz.bSh`'s lightmap values `kz.bSr("a",4097/28672)` are DES; the
  textured stage is full-bright (the original lightmap attribute is carried in
  the vertex format but ignored by the custom fragment stage).
- `[G]` `jd.bAm` URL validation is approximated by an http(s) prefix test.

## Files

- `src/main/java/dev/opengrim/modules/render/JumpCircle.java`
- `src/main/java/dev/opengrim/modules/render/EffectDraw.java` (new shared immediate draw)
- `src/main/resources/assets/opengrim/shaders/circle_textured.vsh` / `.fsh` (new)
- `src/main/java/dev/opengrim/modules/render/CircleTextures.java` (unchanged in this pass;
  loads the recovered PNGs)

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava --rerun-tasks`
→ **BUILD SUCCESSFUL**. `circle_textured` vertex/fragment stages pass
`glslangValidator`.
