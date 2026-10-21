# Logout Spots (sixtwo.dp) — HUD labels ported; hologram remains

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/LogoutSpots.java`
Status: **partial** — HUD name labels now use the recovered path; the `kt` player
hologram is still the box stand-in.

## Evidence

- `analysis/decompiled/payload-named-cfr/sixtwo/dp.java`
  - `ahv(gk)` HUD labels 628–708:
    - medium font `lE.WTzbi.bYM(9.0f)` at 651
    - theme text color `rD.dlM().bjb()` at 652
    - position `entityPos + ClxmS.VB()` (Height) projected with `jI.bIw` at 656–664
    - label = `getGameProfile().name()`; width `lq.cao` at 666
    - box `textW + 8.0f` by `lq.cat() + 4.0f`, text x centered, y = `+jf.bAH(cat, boxH)`
    - optional Background `lC.ccW(x - w/2, y, w, h, 1.0f, 0.0f, ld.all(3.0f), 4.0f)`
    - `lC.cez(medium9, name, ...)` at 704
  - `ahu(go.sX)` hologram 711–799: `kw.bRK()` model bake, `kw.bRP(color, kv.CiCMa/DESOY,
    0.5/0)`, per spot `kt.bQV(kw)` + `kt.bQQ(stack, tickDelta, player)`, frustum gate
    `jJ.bIB`
- `analysis/decompiled/payload-cfr/sixtwo/kt.java` — `kt` has **0 natives** but is a
  1784-line renderer (player model re-render, cape/elytra, held items, pose/walk
  state, texture override; helper classes `kw`/`ku`/`ks`/`jC`/`rg`).
- `src/main/java/dev/opengrim/gui/ui/{MsdfFont,GuiDraw,Theme}` and
  `HudElementRegistry` — now used by TrapEsp/Nametags.
- `gui-dump.jsonl:427-431`: `lE.WTzbi` = **medium**.

## What changed

- Registered a HUD element (`opengrim:logout_spots_hud`) on enable, removed on
  disable.
- `renderHud` reproduces `ahv`:
  - iterates the actual logout-spot snapshots (`JTVMZ`/`spots`, the port's
    equivalent of `FlxVs`) — the same set the world pass draws;
  - projects `spot.pos + Height` with the recovered `jI.bIw` formula
    (`P · cameraRotation · (pos − camera)`);
  - draws the name with the recovered **medium** MSDF sheet at 9.0f:
    width `Σ(advance + 0.25)`, baseline `top + 0.7·size`, pen
    `advance + 0.025·size`;
  - optional Background uses `GuiDraw.blurredBackdrop` (Blur style, radius 3,
    smoothness 4.0) with the Solid-branch fallback, matching `lC.ccW`;
  - text color is the live theme text (`Theme.get().text()`), as the original
    reads `ii.bjb()` per frame.
- The previous "[U] no 2D overlay/projection surface" javadoc/label is removed.

## Hologram (remaining, explicit)

The original `ahu` renders the logged-out player's model through `kt`, not a box.
A faithful port needs:

1. `kw.bRK()` model bake + `kw.bRP(color, mode, tint)` (Simple/Textured; the
   `Position Render Mode` setting currently has no effect on the box).
2. `kt.bQV(kw)` / `kt.bQQ(MatrixStack, tickDelta, PlayerEntity)` — a
   `PlayerEntityRenderer`-style re-render of the cloned model (the same building
   blocks as `PopChams`), including cape/elytra and held-item state.
3. `kt`'s 1784 lines of appearance/pose code (helpers `kw`, `ku`, `ks`, `jC`, `rg`,
   `WalkAnimationStateAccessor`); 0 natives, so it is fully portable, but it is a
   separate medium/large task.

Until that lands, the recovered frustum-gated box at `spot.pos` with `Height`,
`Position Color` and `Background` remains (unchanged from the previous port).

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[U]` `kt`/`kw` hologram port (above); `Position Render Mode` does not yet change
  the visual.
- `[G]` `fCqJQ` tick quantum remains read as 50 ms (unchanged).
- `[U]` `ahs(hu)` entity-add event remains a per-tick transition stand-in
  (unchanged).
- `[U]` `ahr(gM)` bare clear event has no event-bus counterpart (unchanged).
- `[G]` `lC.ccW`'s blur smoothness 4.0 is not exposed by `GuiDraw`; the shared
  shape default is used (corner AA only).
