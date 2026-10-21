# Arrows (sixtwo.do) — recovered `arrow` raster

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/Arrows.java`
Status: ported; the placeholder `DrawContext.fill` square is now the textured
arrow sprite.

## Evidence

- `analysis/decompiled/payload-decrypted/sixtwo/do.java` 293–383 (`ahj`):
  `XSRvt.startBatch(ob.cBv(eLTLf))` for the entry batch
- `analysis/decompiled/payload-named-cfr/sixtwo/do$sG.java` 85–100 (`doM`):
  `kG.bTw(lC2.cfc(), x − size/2, y − (30 − 30·fade), 0, size, size)`
  — a full-sprite textured square; colour `mG.cob(fade)`
- `analysis/decompiled/bootstrap/offline/assets/raster-assets.bin`:
  key `arrow`, 256×256 PNG (the only arrow-named raster)
- `analysis/port/reports/module-divergences/avoidable-audit-2026-10-21.md` §3.7
  — asset identity inferred because `eLTLf` is DES
- `CircleTextures.builtin` (same package) already loads a root
  `assets/opengrim/textures/<name>.png` and registers it on the client thread

## What changed

- Extracted the raster to
  `src/main/resources/assets/opengrim/textures/arrow.png` (256×256).
- `onTick` registers it through `CircleTextures.builtin("arrow")`
  (`opengrim:arrow`), avoiding a GPU texture creation inside the HUD pass.
- `renderHud` replaces `ctx.fill(...)` with
  `ctx.drawTexture(RenderPipelines.GUI_TEXTURED, arrowTexture, x, y, 0, 0,
  markerSize, markerSize, 256, 256, scaleAlpha(argb, fade))` — the same
  full-sprite square, tinted by the entry color and faded by the `rk` value.
- Rotation (`rotateAbout(bearing, centre)`), rise (`30 − 30·fade`), marker size
  (`Size·5`), radius, entity selection/AntiBot/friend colors and the fade
  animator are unchanged.
- Javadoc updated; the stale "plain filled quad" gap is removed.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[G]` `do.eLTLf` plaintext is DES; `arrow` is the only arrow-named recovered
  raster and matches the appearance. If the key ever decrypts to another name,
  this mapping must be revisited.
- `[U]` `do$sG.dEIfC` fade duration is DES → 400 ms (unchanged).
- `[U]` `do.ahq("c", 15311/3999)` GUI offsets are unrecovered → 0 (unchanged).
- `[U]` the original `getEntityTypes`-equivalent `cF` picker is still the
  `getTrackedTypes()`/`addTrackedType` API (the generic `cF` widget is queued
  separately for Tracers).
