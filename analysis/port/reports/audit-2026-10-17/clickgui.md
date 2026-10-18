# ClickGUI parity audit + fix — audit 2026-10-17

Scope: `src/main/java/dev/opengrim/gui/**` (screen/ClickGuiScreen, screen/SettingsWindow,
ui/* + widgets, anim/*, GuiTheme) compared against the recovered original material.

## 0. Evidence base (survey first)

| Source | What it gives |
|---|---|
| `analysis/gui-src/sixtwo_2.java` (= `sixtwo.bl`, runtime decompile) | the FULL render body `bl.Ep` + constructor + input/key handling of the Click GUI window: window **465.0 x 305.5** centered on `rm.diq()`, radius 5.0, background padding `ld.all(11.0f)`, sidebar `f5 = 100.0f`, header pad `f3 = 7.0f` / header height `f4 = 28.0f`, content `bi cjnmJ` at `(x+100, y+42)` size `(w-110, h-42)`, close button `R` 20x20 at `right-7`, drag clamp `bl.Et`, open/close easing `bl.m` (**XzDkv while opening, AYqck while closing**) |
| `analysis/artifacts/gui-reference/page-{client,combat,friends,hud,movement,player}.png` | six reference frames of the original GUI (1280x720 captures at **1.5 image px per design unit**, verified: window 854x480 px = 465x305.5 units, sidebar 150 px = 100 units, header 7/28, content y 42, tab pitch 23, `+15` section gap — all exact) |
| `analysis/gui-src/sixtwo_4.java` (= `sixtwo.c`) | ClickGuiScreen popup inventory (5 `ap`, 2 `iS` panels, 2 `d` panels, 4 `cJ`, 1 `cC`, 1 `cL`, search `Q`) |
| `analysis/decrypted/gui-dump.jsonl` | runtime-decrypted GUI constants (`bl` z-order 50/100/1000, `lE` font names incl. **icons-4.4**, `ig` theme keys, `d` slider chains, `lf` glyph indices) |
| `analysis/decompiled/bootstrap/offline/fonts/` | **the original MSDF font sheets + msdfgen layout JSON** (`icons-4.4`, `regular`, `medium`, `semibold`, `bold`) — `*.atlas` = metrics JSON, `*.metadata` = the sheet PNG |
| `analysis/decompiled/bootstrap/offline/features/metadata.txt` | module names/descriptions shown on the cards (e.g. `sixtwo.eN|Mace Swap|Automatically performs breach and windburst swap` — the string seen as the header subtitle in all six frames) |
| `analysis/docs/RUNTIME-TRACE.md` | HUD watermark format, and confirmation that the hooked run never opened the Click GUI |

## 1. Ranked visual deltas (before → after)

1. **[S, fixed] The whole window model was wrong.** The port rendered five floating
   category panels in a row plus a separate settings dialog. The original is ONE window
   (465x305.5, centered, draggable, clamped) with a sidebar, a header bar, and a two-column
   module-card grid — proven by `bl.Ep` geometry AND the six reference frames (same numbers).
   → `ClickGuiScreen` rewritten to that window.
2. **[S, fixed] Typography and icons.** The port used the vanilla pixel font and text
   stand-ins ("x" for the close glyph). The original font stack (regular/medium/semibold/
   bold + the `icons-4.4` glyph font, codepoints 59905-59971 = the `lf` enum) is recoverable
   and is now rendered 1:1 through `MsdfFont` (shapes, advances, plane placement from the
   msdfgen JSON). Icon shapes match the frames exactly (magnifier 59944, gear 59932,
   crossed sword+arrow 59951, palette 59928, person 59949).
3. **[S, fixed] Sidebar.** Was absent (the port had 5 panels). Now: 30x30 logo tile at (5, 7.5),
   "Grim Client" / "Version: 4.4" stacked pair (the WpzHJ title+subtitle style), `FEATURES` /
   `OTHER` section labels, nav tabs **80x18 at x 7.5, first at y 60, step 23, +15 section gap**
   (this confirms the pre-existing `aJ` notes), a purple pill highlight (accent 151,71,255),
   and the user block (avatar + name + "UID: n").
4. **[S, fixed] Module cards.** Was: a row list with bind labels. Now: **175x28** cards,
   5.0 gap, radius 3.5, two columns; name size 7 semibold (accent when enabled), description
   size 6 regular at 50% white, single-line with `…` truncation (visible in page-movement.png).
   Bind labels removed (the original frames show none).
5. **[S, fixed] Header bar.** Was: a centered category title inside each panel. Now:
   `(x+100, y+7, 355, 28)` bar with the category icon (11px), title (size 8), `·` separator and
   the hovered module's description as subtitle (all six frames show Mace Swap's description),
   plus the search magnifier at the right edge and a **borderless** search field (the frames
   show no field chrome).
6. **[S, fixed] Open/close easing was inverted.** `bl.m` uses `rj.XzDkv` (ease-out-back) while
   opening and `rj.AYqck` (ease-in-back) while closing; `Easing.OPEN`/`CLOSE` were swapped.
7. **[S, fixed] Palette outside the Click GUI.** `GuiTheme` still carried an invented
   "Liquid Glass" palette (per-category accent colors, 124px panels, 0x5A05060A backdrop).
   It now carries the recovered theme (bg 12,12,12; panel 24,24,27; ONE accent 151,71,255;
   fX opacities 0.2/0.75/0.85) and the recovered metrics; HUD + wheel consumers pick it up.
8. **[S, fixed] No full-screen dim.** The port painted a 50%-alpha full-screen rect; the
   original draws only the translucent window (the world and hotbar stay visible through it).
9. **[S, fixed] Settings widget visuals** now follow the recovered card surface (panel fill,
   radius 3.5, semibold 7 label / regular 6 muted value, accent when on) instead of the
   invented `background.lerp(panel, 0.4 + 0.2*hover)` rows; container rows keep their natural
   heights and the scrolled hit-test was off by `scroll` (fixed).
10. **[G, fixed] Interaction details**: the pill slides between tabs (the `cL` element with its
    start/end pair), card hover lifts the fill by 5% white, empty *category* pages stay blank
    (page-player.png) while the Friends page shows the recovered empty-state pair
    ("You haven't got any friends." / "Add new friends using Middle Click Friend module!").
11. **[N, recorded] Backdrop blur / liquid glass** — still not reproducible (window drawn as a
    translucent themed fill at the style opacity). **[N] the ~135 DES-encrypted literals of
    `c`** (popup titles/subtitles, toggle labels) — a hooked run with the Click GUI *opened*
    would decrypt them (the sidebar/header/card strings used here come from the frames instead).

## 2. Changes

- `gui/screen/ClickGuiScreen.java` — full rewrite as the `bl` window (see §1; citations in the
  class javadoc).
- `gui/ui/MsdfFont.java` — NEW: MSDF sheet loader + glyph layout/draw + truncation.
- `gui/ui/GuiDraw.java` — `texturedQuad` (tinted `GUI_TEXTURED` blit) + MSDF text/icon helpers.
- `gui/anim/Easing.java` — OPEN/CLOSE curves corrected to XzDkv/AYqck.
- `gui/GuiTheme.java` — recovered palette + metrics.
- `gui/screen/SettingsWindow.java` — rewritten as the `ap` popup: radius 5, themed fill,
  inline title + `·` + description header, `lf.PqdjL` (CROSS) close button 20x20, header drag,
  content pane at `y+42`, size from the measured setting list.
- `gui/ui/widgets/{ToggleWidget,SliderWidget,ModeWidget,ActionWidget,TextFieldWidget}.java` —
  card-surface row styling; `bare` search mode.
- `gui/ui/widgets/ContainerWidget.java` — natural child heights; scroll hit-test fix.
- `gui/ui/ModuleWidgetFactory.java` — colour row restyle.
- `src/main/resources/assets/opengrim/fonts/{icons-4.4,regular,medium,semibold}.{atlas,png}` —
  NEW: the recovered sheets with a baked alpha conversion
  (alpha = clamp((median(r,g,b)-0.5)*10+0.5); the raw MSDF sheets cannot be sampled without a
  distance shader).

## 3. Remaining gaps

- **[N]** `c`'s ~135 encrypted literals (popup titles/subtitles, toggle labels) — needs a
  hooked run with the Click GUI open. The `d` "Swing Anchor/Move/Rotate X/Y/Z" panels and the
  search popup of `c` are not wired into this window (their layout is native).
- **[N]** backdrop blur / liquid-glass refraction; the icon *font asset* limitation is now
  solved, but the MSDF shader path is replaced by a baked alpha sheet (crispness at very large
  sizes is lower than the original's distance shader).
- **[U]** the `d` panel role (3 slider triples + 3 `cH` colour pickers, `gui-dump` sixtwo.d):
  a Swing-animation settings surface; not placed in any frame → not implemented.
- **[U]** the header's `⊞` icon seen on two frames (Friends/Client) — purpose unknown
  (view toggle?); not drawn.
- **[G]** header subtitle = last hovered module's description (all six frames show Mace Swap's
  description while hovering nothing — most likely a persisted last-hover value);
  Friends page subtitle = "Total friends N" (frames show "Total friends 0").
- **[G]** `UID: n` = 16-bit hash of the player UUID (the original's UID is its own account id).
- **[U]** `bl`'s tween duration (DES literal in `av`'s static init) — 200 ms retained.
- **[U]** widget internals for settings rows (cJ switch shape, cC track geometry, cH picker) —
  native draw bodies; styled with the recovered card surface instead.
- **[U]** the wheel (`EmoteWheelScreen`/`WheelDraw`/`WheelGeometry`) inline constants were not
  re-derived in this pass; only the shared palette (`GuiTheme`) was corrected.

## 4. Compile

- `.\gradlew.bat compileJava -q --offline` → **PASS** (no output; two intermediate failures
  fixed: `DrawContext.drawTexturedQuad` is private → switched to the 13-arg tinted
  `drawTexture`; `Popup.close()` override removed).

## 5. Visual-parity estimate

Weights: geometry 30%, widget visuals 30%, styling/colours/typography 20%, animation/interaction 20%.

| Area | Before | After |
|---|---|---|
| Geometry (window/sidebar/header/grid) | 15% (5 floating panels, invented sizes) | 90% (bl.Ep exact + frame-verified integers) |
| Widget visuals (cards, nav, icons, rows) | 10% (rows + text stand-ins) | 80% (cards 175x28 exact, real icon glyphs, row styling G) |
| Styling/colours/typography | 20% (right theme constants, wrong font, stale GuiTheme) | 80% (original font sheets + recovered palette) |
| Animation/interaction | 30% (easing inverted, no pill, no clamp) | 70% (curves corrected, pill slide G, drag clamp, scroll) |
| **Weighted total** | **≈18%** | **≈81%** |
