# Pearl Prediction (sixtwo.dg) — recovered simulator + HUD card

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/PearlPrediction.java`
Status: ported; simulator is now the recovered `mh`/`me.cjZ` model and the card
uses the original HUD path.

## Evidence

- `analysis/decompiled/payload-named-cfr/sixtwo/dg.java` 341–375:
  `me.cjZ(mh.ckg(pearl).ckD(md.HIkeq).ckF(hasNoGravity).ckx(velocity)
  .cky(maxSteps).ckz(-128.0))`; accepts `mf.juSGK` **or** `mf.RlLKW`, then adds
  `dg$sx(finalPosition, id, max(simulatedSteps - 1, 0))`
- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/mh.java`
  - fields: `minY = -128`, `airDrag = 0.99`, `waterDrag = 0.8`,
    `gravity = 0.03`, collider shape, no fluids, clamp-to-hit `KfLbf = true`
  - `ckD(mj)`: `Owetf = airDrag`, `xbQRr = waterDrag`, `nnkxA = gravity`,
    `gifiq = noGravity`, `RGkqd = isArrow`
- `analysis/decompiled/payload-named-cfr/sixtwo/me.java` `cjZ`:
  per step: move by velocity → block raycast → clamp to hit / min-Y check →
  water test at the new position (`FluidTags.WATER`) → drag (`waterDrag` or
  `airDrag`) → gravity unless noGravity; termination `juSGK` (block) or
  `RlLKW` (min-Y); `mi.CkcQW.modify` returns velocity unchanged
- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/md.java`: `HIkeq =
  mj(1.5, 0.03, 0.99, 0.8, false, false, ...)` — pearl parameters
- `analysis/decompiled/payload-named-cfr/sixtwo/mf.java`: three enum constants
  `juSGK` / `RlLKW` / `ZkAFI` (the last = no termination)
- `analysis/decompiled/payload-named-cfr/sixtwo/dg$sx.java` 270–315:
  25-wide card; with Show Time Left `35` high (radius 8) with
  `lC.cdZ(Items.ENDER_PEARL, x+4.5, y+4.5, 1.0).bGv()`, time text at
  `iconY + 18`; without it a 25×25 circle (radius 12.5); scale
  `0.5+0.5·fade`; medium font 7.0; theme text color; seconds =
  `remainingTicks * 50 / 1000`
- `MsdfFont`/`GuiDraw`/`Theme`/`HudElementRegistry` already exist

## What changed

- Simulator rewritten to the `mh`/`me.cjZ` model:
  - move, block raycast with `COLLIDER` / no fluids, clamp to the hit;
  - min-Y `-128` check;
  - water drag `0.8`, otherwise air drag `0.99`;
  - gravity `0.03` unless the pearl has no gravity;
  - accepts **both** `mf.juSGK` (block) and `mf.RlLKW` (min-Y) terminations;
    max-steps still `600` (DES argument).
- Tracking stays in the world-render pass (`dg#aei`).
- Replaced the world-space box + nametag text with the recovered HUD card:
  - `HudElementRegistry.addLast` on enable / remove on disable;
  - `jI.bIw` projection, 25×25 circle or 25×35 rounded card (radius 8);
  - pearl item icon via `DrawContext.drawItem`;
  - `String.format("%.1fs", remaining * 50 / 1000)` below the icon;
  - medium MSDF 7.0 with the original width/baseline/pen quirks;
  - live theme text color; `GuiDraw.blurredBackdrop` (Blur) with the
    Solid-branch fallback.
- Fade model is the `rk` pair: ease-out-back in, ease-in-back out, 300 ms;
  the "pearl left the world" path snaps the fade to 0 (`iAudN.dhd(0)`), and
  `dop` removes only at `fade == 0 && done`.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-open-grim bash gradlew compileJava` → BUILD SUCCESSFUL
(command actually run: `JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava`).

## Remaining gaps

- `[G]` `cky` max-steps argument is DES → 600.
- `[G]` `NkcQX` format string is unrecovered → `"%.1fs"` (the `*50/1000`
  conversion is the natural reading of dg$sx.java:293-295).
- `[G]` `dou("z", 28533)` tick-ms factor is presumed 50 (used for the seconds
  readout, matching the repo's tick convention).
- `[G]` `rk` fade duration (`dou("z", ...)`) is DES → 300 ms.
- `[G]` `mi.CkcQW` is the identity modifier; no other modifier is used by dg.
