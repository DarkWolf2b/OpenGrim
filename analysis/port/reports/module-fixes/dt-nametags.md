# Nametags (sixtwo.dt) — HUD text/shape path fix

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/Nametags.java`
Status: ported; HUD text now uses the recovered MSDF font and backgrounds use the
recovered shape shader.

## Evidence

- `analysis/decompiled/payload-decrypted/sixtwo/dt.java`
  - settings ctor 137–427 (unchanged port)
  - `aim(gk)` HUD pass 649–878
  - `ain` player tag 1000–1491; `ais` grouped items 591–648; `air` single item
    879–934; `aiq` effects 935–999; `aip` enchants 1583+; `ail` cancel 1492–1546
  - importants call sites: `lC2.cdg(...)` 635/902 (smoothness default),
    `lC2.cdh(..., 2.0f)` 1303/1324, `lC2.cer(...)` 639/903/993/1332/1586
- `analysis/decompiled/payload-cfr/sixtwo/lC.java`
  - `cdg` 310–312 / `cdh` 988–990 → `kd.AhlXN` shape builder `.bOu(radius).bOv(color)`,
    `cdh` additionally `.bOC(f)` (smoothness)
  - `cer` 920–944 → `lG.zXCXX` batch text draw
- `analysis/decompiled/payload-named-cfr/sixtwo/lq.java` / `lj.java`
  - `lq.cao` → `lj.bYC` width, `lq.cat` → `lj.bYG` = `0.7f * size`
  - `lj.bYw`: width `Σ(advance·size + 0.25f)` per char (line 1257+)
  - `kJ.bUe` (kJ.java:426) → glyph pen step `advance·size + 0.025f·size`,
    baseline `y + 0.7f·size`
  - `ll.bZk` (ll.java:119–141): glyph quad from baseline − top, confirms `f4` is
    the **baseline**
- `analysis/decrypted/gui-dump.jsonl` lines 427–431: lE's five font names in
  `cfn` order: `joxgd=regular`, **`WTzbi=medium`**, `SVnNc=semibold`,
  `ePKsc=bold`, `WxpHL=icons-4.4`. Nametags uses `lE.WTzbi` → `medium`.
- `src/main/java/dev/opengrim/gui/ui/MsdfFont.java` — recovered MSDF sheets
  (`assets/opengrim/fonts/medium.*`, `fonts/msdf/medium.png`) and the
  `gui_msdf` pipeline; `src/main/java/dev/opengrim/gui/render/GuiShapePipelines`
  — recovered `shape.glsl` SDF fill.

## What changed

- Added a per-frame `TagRenderer` that wraps `GuiDraw`:
  - `width(String)` = `Σ(msdf.advance(c, 6) + 0.25f)` — exact `lj.bYw` layout
    quirk (the previous port used vanilla `TextRenderer.getWidth * 6/9`, which
    is a different advance metric).
  - `draw(text, x, topY, argb)` draws glyph-by-glyph through
    `MsdfFont.of("medium")` with pen step `advance + 0.025*6` and baseline
    `topY + 0.7*6` — exact `kJ.bUe`/`lj.bYt` draw behavior (including the
    separate layout/draw letter-spacing constants, which differ in the
    original).
  - `rounded(...)` = `GuiDraw.fillRounded` → recovered `shape.glsl` SDF mask
    (`ShapeGuiElementRenderState`) instead of the previous inset-rect
    approximation.
- `renderHud` constructs one `TagRenderer` for the frame (the original opens one
  shared font batch `lG.zXCXX.bUa(font)` for the whole pass); all player,
  item, enchant and effect strings and all tag backgrounds now go through it.
- Vanilla `TextRenderer` remains only as an internal fallback if the MSDF
  sheet/pipeline cannot load.
- Geometry, settings, grouping, visibility, projection, item row, enchant row
  and effect row logic are unchanged.

## Draw path

```
HudElementRegistry (Fabric AFTER? -> addLast)  ==  @hG aim(gk)
  TagRenderer
    fillRounded -> gui_shape fill pipeline (shape.glsl SDF; 3px radius)
    text        -> MsdfFont medium -> gui_msdf pipeline (msdf.glsl)
                   baseline = top + 0.7*6, pen = advance + 0.15
  vanilla drawItem / drawGuiTexture remain for the item and effect icons
```

Both pipelines are `SimpleGuiElementRenderState`s submitted through
`DrawContext.state.addSimpleElement`; the 1.21.11 HUD renderer consumes the same
state list as screens, so no screen-only block exists for text/shape. The
recovered shaders are not re-implemented locally.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[U]` `lC.cdh`'s extra `2.0f` (`kg.bOC` → `DeOtF`, shape smoothness) cannot be
  passed through the shared `GuiDraw.fillRounded` surface without editing the
  GUI renderer, which is out of scope for this module. The recovered default
  0.75 is used; the 2.0 override is the only shape-parameter divergence.
- `[G]` MSDF glyph kerning: the original `lj` has a kerning map; `medium.atlas`
  ships an empty `kerning` array, so the port's sum-of-advances matches the
  recovered data. If a future atlas carries kerning, `MsdfFont` does not read it.
- `[G]` item rendering still uses vanilla `DrawContext.drawItem` instead of the
  original `jv`/`jw` batched item renderers (unchanged from the previous port).
- `[U]` armor slot order (`oP.cJr`, native) remains helmet→chest→legs→boots.
- `[G]` `ji.bCv` tick divisors / format literal and the infinite marker remain
  natural readings (unchanged).
- The vanilla-nameplate cancel still has no mixin hook; the predicate
  `shouldCancelVanillaNameplates` is the wiring point.
