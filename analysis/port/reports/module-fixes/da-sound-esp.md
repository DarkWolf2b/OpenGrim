# Sound ESP (sixtwo.da) — HUD card + medium MSDF

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/SoundEsp.java`
Status: ported; projected HUD card replaces the world-space marker.

## Evidence

- `analysis/decompiled/payload-named-cfr/sixtwo/da$sv.java` `doj` 140–221:
  - `rk.dhc(!zUbCd)`, easing `rj.XzDkv` alive / `rj.AYqck` evicted
  - `elapsed > Time.VC() * YpDrW` → `zUbCd = true` then `rk.dhd(0.0f)` (snap);
    Quantity-Limit evictions only set `zUbCd` and animate out
  - `jI.bIw(izVKY)` projection
  - medium font `lE.WTzbi.bYM(7.0f)`; label =
    `capitalize(path.replaceAll(ySNLn, " ").replace("_", " "))`
  - card `width = cao(name) + 10`, `height = cat() + 10`
  - `jH.bId(centre, 0.5+0.5·fade)`
  - `lC.ccU(x, y, w, h, fade, 0)` — definition `lC.ccU` 1004–1006:
    `ccW(..., ld.all(7.0f), 7.0f)` (radius 7)
  - text `lC.cez(medium7, name, x + (w − cao)/2, y + (h − cat)/2, ii.bjb())`
- `analysis/decompiled/payload-named-cfr/sixtwo/da.java` `abt` HUD pass /
  `abs` sound-add / `dok` removal (`fade == 0 && zUbCd`)
- `MsdfFont`/`GuiDraw`/`Theme`/`HudElementRegistry` already in the repo;
  `gui-dump.jsonl:427-431` maps `lE.WTzbi` = medium

## What changed

- Registered `opengrim:sound_esp_hud` on enable, removed on disable.
- `onWorldRender` marker boxes/`debugFilledBox`/`lines` replaced by the recovered
  HUD card:
  - projection `P · cameraRotation · (pos − camera)`, `w <= 0` skips;
  - card width/height, radius 7, `0.5+0.5·fade` scale about the centre;
  - `GuiDraw.blurredBackdrop` (Blur) with the Solid-branch fallback at alpha
    `fade`;
  - label through the recovered **medium** MSDF sheet at 7.0f:
    `Σ(advance + 0.25)` width, baseline `top + 0.7·size`, pen
    `advance + 0.025·size`;
  - text color from the live theme (`Theme.get().text()`).
- Replaced the per-tick `0.1` fade ramp with the original `rk` model:
  ease-out-back in, ease-in-back out, 300 ms; deadline expires snap to 0 and
  remove, Quantity-Limit evictions animate out.
- Spawn/distance/quantity/time settings and the name formatting are unchanged.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[G]` `da$sv.xwXDE` fade duration is DES; 300 ms is used and labeled.
- `[U]` `ySNLn` regex remains substituted by `'.'` (plain `_` replacement is
  byte-verified).
- `[G]` `lC.ccU`'s blur smoothness 7.0 is not exposed by `GuiDraw`; the shared
  shape default is used (corner AA only).
- The sound-name capitalization uses `Character.toUpperCase` (same as
  `StringUtils.capitalize` for the first char).
