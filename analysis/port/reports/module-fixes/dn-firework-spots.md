# Firework Spots (sixtwo.dn) — HUD card, icon and fade

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/FireworkSpots.java`
Status: ported; the world-space box is replaced by the original HUD card.

## Evidence

- `analysis/decompiled/payload-named-cfr/sixtwo/dn$sF.java`
  - ctor 37–43: `rk(jYWIl)` fade animator, `SAKLk = System.currentTimeMillis()`
  - `doJ` 130–201:
    - `rk.dhc(!uAOSS)` target, easing `rj.XzDkv` while alive / `rj.AYqck` while fading
    - `elapsed > n2 * ZOVgw` → `uAOSS = true`, then `rk.dhd(0.0f)` (instant snap);
      quantity-limit spots skip that snap and animate out
    - `jI.bIw(MZUGo)` projection; `f2 = 25.0f`; `x = screen.x − 12.5`, `y = screen.y`
    - `jH.bId(centre, 0.5+0.5·fade)`
    - `lC.ccW(x, y, 25, 25, fade, 0, ld.all(12.5), 3.0)` (circular backdrop)
    - `lC.cdZ(Items.FIREWORK_ROCKET, x+4.5, y+4.5, 1.0).bGv()` (16×16 icon)
  - `doK` 110–128: dead when fade == 0 and `uAOSS`
- `analysis/decompiled/payload-named-cfr/sixtwo/dn.java` `aha(gk)` 209–235:
  HUD pass iterating `GtFRG`, calling `doJ(ctx, Time.VC())` then removing on `doK`
- `jI.bIw`, `jH.bId`, `lC.ccW`, `lC.cdZ` are plain Java (`jH.java:62-88` only
  pushes a scaled matrix); `MsdfFont`/`GuiDraw`/`HudElementRegistry` already exist
- assets/fonts: none needed here beyond the vanilla item renderer

## What changed

- `onEnable` registers `opengrim:firework_spots_hud`; `onDisable` removes it.
- Replaced the world-space `debugFilledBox`/`lines` marker with the recovered
  HUD card:
  - projection `P · cameraRotation · (pos − camera)`, `w <= 0` skips;
  - 25×25 card at `(screenX − 12.5, screenY)`, radius 12.5;
  - `GuiDraw.blurredBackdrop` (Blur) with the Solid-branch fallback at alpha
    `fade`;
  - `DrawContext.drawItem(new ItemStack(Items.FIREWORK_ROCKET), x+4.5, y+4.5)`;
  - `0.5 + 0.5·fade` scale about the card centre.
- Fade model now matches `dn$sF`:
  - `rk` target 1 while alive, 0 while fading; ease-out-back in, ease-in-back out;
  - deadline branch sets `fading` and snaps the fade to 0 (`rk.dhd(0)`), while
    Quantity Limit removals animate out;
  - `doK` (fade == 0 && fading) removes the spot.
- Add/spawn logic, cap trimming, `ZOVgw = 1000` and the expiry comparison are
  unchanged.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[G]` `dn$sF.jYWIl` fade duration is DES; 300 ms is used (same standard rk
  duration as the other ports). Labeled in code.
- `[G]` `ZOVgw` ms multiplier remains presumed 1000 (unchanged).
- `[G]` `lC.ccW`'s blur smoothness 3.0 is not exposed by `GuiDraw`; the shared
  shape default is used (corner AA only).
- `[U]` `dn.AhEPk` suffix remains empty (DES, not in the dump).
- The card is drawn in the HUD phase; the original `gk` event is also a HUD
  pass, so no phase divergence remains.
