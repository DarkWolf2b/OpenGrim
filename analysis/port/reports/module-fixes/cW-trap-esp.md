# Trap ESP (sixtwo.cW) — HUD font/icon/corners fix

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/TrapEsp.java`
Status: ported; HUD cards now use the recovered MSDF font, the real U+EA26 icon,
the shape-SDF corners and the live theme channels.

## Evidence

- `analysis/decompiled/payload-decrypted/sixtwo/cW.java`
  - `ZW(gk)` HUD pass 1131–1224 (the whole card layout/order)
  - fonts at 1162–1164: `lE.WTzbi.bYM(7.0f)`, `6.0f`, `5.0f`
  - card `lC2.ccW(f7,f8,f5,f6,f2,0.0f,ld.all(4.0f),5.0f)` 1193
  - colors 1194–1197: `ii2.bjb().coa(255*fade)`, `ii2.bjb().cob(0.5f)`,
    `ii2.bjf().coa(220*fade)`, `ii2.bje().coa((255-100*fX.aYh())*0.7).cob(fade)`
  - texts 1200–1210 (`cez`/`ceP`), bars 1211/1213 (`cdg` radius `ld.all(0.25f)`)
  - icon 1216: `lC2.cem(lf.GHxLj, f11, f21, 6.0f, mG3)`
- `analysis/decrypted/gui-dump.jsonl` lines 427–431: `lE.WTzbi` = **medium**
- `analysis/decompiled/payload-cfr/sixtwo/lC.java`
  - `cez` 364, `ceP` 360 (right align via `lj.bYC` width)
  - `cem` → `ceo` 368–377: icon font `lE.WxpHL` (icons-4.4), glyph ink centered in a
    `size × size` box
  - `ccW` 314–360: Blur branch = `kd.sQVlR` blur fill, radius `ld`, smoothness 5.0,
    white tint at alpha `fade`; Solid branch = `ii.bjd()` at `fX.aYh()*fade`
  - `cdg` 310–312: shape rounded fill
- `analysis/decompiled/payload-named-cfr/sixtwo/lj.java` 1140–1207 and `ln.java`
  238–252/417: width `Σ(advance + 0.25)`, baseline `y + 0.7·size`, pen
  `advance + 0.025·size` — unchanged conventions from Nametags
- `src/main/java/dev/opengrim/gui/ui/IconGlyph.java`: `lf.GHxLj` =
  `LOCATION` = **U+EA26** (59942)
- `src/main/resources/assets/opengrim/fonts/msdf/medium.png` and
  `icons-4.4.png`; `gui_msdf`/`gui_shape` pipelines.

## What changed

- `renderHud` creates a `GuiDraw` and a `CardText` per frame:
  - `CardText` uses `MsdfFont.of("medium")` (the `lE.WTzbi` sheet). Width is
    `Σ(advance + 0.25)` per char, draw baseline is `top + 0.7·size`, pen step is
    `advance + 0.025·size` — identical to the original `lj.bYw`/`kJ.bUe` path,
    including the different layout/draw spacing constants.
  - Vanilla `TextRenderer` remains only as the fallback.
- Icon: the placeholder square is replaced by
  `draw.icon(MsdfFont.icons(), IconGlyph.LOCATION, x, y, 6.0f, color)` — the
  recovered `icons-4.4` sheet and the exact `lf.GHxLj` codepoint.
- Corners: card/bar fills now go through `GuiDraw.fillRounded`
  (recovered `shape.glsl` SDF). Card radius 4.0, bar radius 0.25.
- Card background: `GuiDraw.blurredBackdrop(x, y, 80, 40, 4, white, 0, fade)` —
  the shape-masked backdrop blur (Blur style, the original default). If the blur
  pipeline is unavailable, the recovered Solid branch is used:
  `Theme.background()` at `style.opacity * fade`. The previous flat
  `PANEL_HEADER` fill + invented 1 px border is gone.
- Theme colors are read live per frame from `Theme.get()`
  (`text()`, `accent()`, `background()`) instead of the static `GuiTheme`
  constants, matching the original's `ii2.bjb()/bjf()/bje()` reads.
- Text sizes, layout constants, bar proportions, fade/scale animation, cluster
  scan/merge/sort logic and card offsets are unchanged.

## Draw path

```
HudElementRegistry (Fabric) == @hG ZW(gk)
  GuiDraw
    card  -> blurredBackdrop -> gui_blur_backdrop (shape SDF mask)
             fallback: fillRounded -> gui_shape
    bars  -> fillRounded      -> gui_shape (radius 0.25)
    text  -> MsdfFont medium  -> gui_msdf (sizes 7/6/5)
    icon  -> MsdfFont icons   -> gui_msdf (U+EA26, size 6)
    scale -> Matrix3x2f push about card centre, 0.5 + 0.5*fade
```

All are `DrawContext.state` simple elements, so the HUD renderer consumes them
exactly like the screen path; nothing here required a screen-only hook.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps / labeled details

- `[G]` `cem` centres the icon's **ink** inside its 6×6 box; `MsdfFont.drawIcon`
  anchors the em box. For `LOCATION` the difference is sub-pixel at 6 px
  (plane top 1.05 em, left −0.047 em). The glyph itself, font sheet and size are
  exact.
- `[U]` `lC.cdh`'s second shape scalar is unrecovered for this module; the shared
  `GuiDraw` surface exposes the recovered 0.75 smoothness default, while `ccW`
  passes 5.0 as its own blur smoothness. `blurredBackdrop` uses the shape state's
  0.75 smoothness; the visual difference is corner AA only.
- `[G]` `ccW` Blur branch maps the original's white tint/alpha to
  `blurredBackdrop(..., white, tintMix 0, opacity = fade)`; the recovered
  `gui_blur_backdrop` shader mixes blurred.color with tint by `tintMix`.
- `[S]` scan remains synchronous (original `rl#dhL` off-thread); unchanged.
- `[N]` `cW.UBtqj` scanner hash remains unused (port scans in Java).
- `[G]` HUD title/label strings (`"Trap Detected"`, `"OBJECTS"`) are the
  previously probed DES values; format strings remain as reconstructed.
