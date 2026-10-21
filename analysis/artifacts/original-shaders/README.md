# Original renderer shaders

These are the 31 GLSL resources shipped inside the original client's bootstrap,
extracted from `analysis/decompiled/bootstrap/offline/shaders/shader-map.bin`.
They are imported into the rebuild at `src/main/resources/assets/opengrim/shaders/`
for direct 1:1 use.

Reproduce the extraction with:

```bash
python3 analysis/tools/extract_shader_map.py
```

Container format: big-endian `int count`, then repeated
`[int nameLen][name UTF-8][int sourceLen][source bytes]`; 31 resources, 21
programs. The bootstrap loads it in `OfflineClientInit.initializeShaders`:
`jL.nVHGL` receives the map, `jL.SjBqH`/`jsWRr` receive `shader.bundle` /
`new-shaders.bundle`, and `jL.bIJ()`/`bIK()` create the programs.

## Why this matters

The Click GUI's draw API (`sixtwo.lC`, `analysis/gui-src/sixtwo_22.java`) is
**plain Java** with zero native methods. It builds one quad per primitive and
binds a shader. The real fragment math is in this bundle, including the SDF
rounded rects, gradients, dithering, MSDF text, blur, liquid glass and shadows.

The enum `kd` selects the fragment path:

| `kd` value | Fragment shader | Used by |
|---|---|---|
| `AhlXN` (0) | `shape` with `fillType = FILL_TEXTURE`, `texture_copy` | texture blits, icons, avatars |
| `sQVlR` (1) | `shape` | rounded rects, strokes, gradients, loading stripes, backdrop base |
| `IbNTv` (2) | `liquid_glass` | window `Liquid Glass` style / glass panels |

## Primitive mapping

| Shader | Original use | Port target |
|---|---|---|
| `shape` | `lC.cdm` fill, `lC.cej` stroke, `lC.cdk`/`cek` shape pass, `lC.ccW` backdrop base. Uniforms: `size`, `radius`, `smoothness`, `innerSmoothness`, `cornerSmoothness`, `thickness`, `shapeType`, `maskType`, `fillType`, `topLeft/bottomLeft/topRight/bottomRight`, `gradientType`, `stopCount`, `stopColors[8]`, `stopOffsets[8]`, `gradientAngle`, `loading`, `progress`, `stripeWidth`, `fade` | `GuiDraw.fillRounded`/`strokeRounded`/gradient paths |
| `blur` | `lC.ccW` `Blur` style: separable two-pass blur, `texelSize`, `direction`, `radius`, `weights[256]` | window backdrop, glass pre-pass |
| `liquid_glass` | `lC.ccW` `Liquid Glass` style / `kd.IbNTv`: `blurredTexture`, `refraction`, `depth`, `lightIntensity`, `lightAngle`, `lightSize`, `dispersion`, `tintColor`, `lightColor`, bevel/dispersion model | window background, glass panels |
| `msdf` + `msdf_vertex` | `lC.ceI`/`ceP`/`cez` text: `Sampler0`, `range`, `thickness`, `smoothness`, `outline`, `outlineThickness`, `outlineColor`, `fadeout`, `fadeoutStart`, `fadeoutEnd`, `maxWidth`, `textPosX` | text pass |
| `shadow` + `shadow_vertex` | rounded-rect drop shadows (`cornerRadiusOverBlurRadius`, `halfSizeOverBlurRadius`, `shadowColor`) | popups, cards, window shadow |
| `arc` | circle/arc SDF (`size`, `thickness`, `startAngle`, `endAngle`, `smoothness`) | `lC.cdc` circles, progress rings |
| `annular_sector` | filled ring/sector, textured/gradient variants | radial wheel, ring widgets |
| `bezier` | curved wheel connectors | radial wheel |
| `checker` + `checker_vertex` | checkerboard fill (`cellSize`, `radius`, `smoothness`) | config/thumbnail placeholders |
| `line` + `line_vertex` | screen-space AA lines (`LineWidth`, `ScreenSize`) | separators, outlines |
| `texture_copy` | plain texture blit | icons/images |
| `position_color_vertex`, `position_tex_vertex`, `position_tex_color_vertex` | generic quad vertex shaders; `fragCoord` from `gl_VertexID`, optional `UV0`/`Color` | vertex stages for the above |
| `posteffect_vertex` | fullscreen post-effect pass | blur/glass composite |
| `outlines`, `chams_*`, `bloom_*`, `soul_particle`, `reveal_vertex`, `position_tex_reveal` | module renderers (ESP/chams/particles), not Click GUI | out of GUI scope |

## What is still needed

1. **Pipeline registration.** `jL`/`jN`/`jM`/`kR` define the vertex formats,
   samplers and `RenderPipeline` objects. The GLSL is imported; the pipeline keys
   and uniform names must be replicated in the port's renderer.
2. **Command generation.** `bd.bV` (settings popup), `c` (configs), `ap`
   (popup) are j2cc-transpiled Java. Their draw-call parameters can be recovered
   by resolving the j2cc jump tables (the real body is present; the existing
   Ghidra corpus stopped at the `BLOB_DECRYPTOR` wrapper), or reconstructed
   from the 2026-10-17 trace/reference frames for the first pass.
3. **Uniform values.** The main window's calls are in the recovered Java
   `bl.Ep`; the theme opacities are in `fX`/`Theme`. Blur radius, glass depth,
   light angles and shadow parameters come from the original code and the
   reference frames.
