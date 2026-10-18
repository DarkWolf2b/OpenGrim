# ClickGUI parity audit + fix, pass 2 — 2026-10-17

Scope: `src/main/java/dev/opengrim/gui/**` re-verified against the 2026-10-17
runtime trace, the decrypted literals and the reference frames, and fixed where
the new evidence proves a delta. Follows `clickgui.md` (pass 1).

## 0. Evidence added in this pass

| Source | What it proves |
|---|---|
| `analysis/traces/2026-10-17/raw/trace.jsonl`, first `bl.Ep` frame (lines 165729–199292; tree in `raw/frame1-tree2.txt`) | the exact draw order and, through `lc` rect getters + `lq.caw()/cat()/cap()` returns, the geometry and font sizes: tab icons 13.125 at (11.9375, 62.4375+23k), header icon 13.125 at (106.4375, 14.4375), dot circle 2.75 at y 19.625, title advance 29.296875, cards 175x28 at x 100/280 y 42+33k, fonts 9/6/7/5/7/8/7/7/6, close/search button 20x20 at x 428 |
| `raw/frame2.jsonl` (2nd `bl.Ep`) | frame1 is an **animation frame**: the dot moves 132.625 → 161.921875 (= title x + advance + 6) between frames; the sidebar logo 5/7.5/30 → 4.4375/6.9375/31.125. The reference frames are the rest state |
| `strings-full.tsv` + `strings-values.txt` (166 values) | literals at their use sites: `Version: 4.4`, `FEATURES`/`OTHER`, `jf.bAL` enum→display names (`COMBAT`→`Combat`, … `HUD`→`Hud`), `UID: 1337`, friends empty pair (`aq.<init>`), HUD labels (`jk.bDz`: `FPS`, `BPS`, `TPS`, `UID`, `XYZ`, `Facing`), config titles (`My Configs`, `Public Configs`, `Favourite Configs`), `CONFIGS` in the `aI` enum |
| `analysis/artifacts/gui-reference/page-*.png` | re-measured at **1.5 px per design unit** (window 697.5x458.25 px = 465x305.5 units; the pass-1 "854x480 px" figure included the white chat overlay at x>912 px). The frames are *not* in file-name order: page-combat shows Friends, page-movement shows Visuals, page-friends shows Client |
| `analysis/decompiled/bootstrap/offline/assets/*.bin` + `OfflineClientInit.java:239-406` | the payload's own UI icon assets: `vector-assets.bin`/`vector-frames.bin` (16 animated vector icons incl. `category/combat|movement|player|visuals|client|configs|friends|hud`, `add`, `zoom`) and `raster-assets.bin` (`user_icon`, `logo`, …). Container formats are documented in the bootstrap |

Icon identity is now proven, not guessed: the frame's sidebar shapes (crossed
sword+bow, runner, person, palette, gear, group, monitor) match the first frame
of `category/*` exactly, the header's magnifier is `zoom`, and the Friends/Hud
header button is `add` (grid+plus). The `icons-4.4` glyph font (pass 1's icon
source) contains a *different* icon set — the tab icons were never glyphs; the
trace draws them as textures (`lC.cdW`).

## 1. Per-area verdicts

### 1.1 Window geometry — verified, no change
`bl.Ep` (sixtwo_2.java:869-894) re-checked against trace rects: window
(0,0,465,305.5), backdrop inflate 0.5625, header (100,7,355,28), content
(100,42,355,263.5), close/search button 20x20 at header right-27. Cards:
`az` sizes 175/28, grid x 100/280, y 42/75/108 (pitch 33) — all match the port.

### 1.2 Sidebar — fixed
* Category icons were glyphs at (12, ty+4) size 10 → now the payload
  `category/*` textures at **(11.9375, ty+2.4375) 13.125** (trace rects), which
  also fixes the shapes themselves.
* Logo tile: kept as the measured white 30x30 at (5, 7.5), but drawn as a plain
  rect (trace `cdU` texture quad; the frame shows a sharp-cornered white square,
  not the radius-2 tile of pass 1).
* `FEATURES`/`OTHER` x 10.5 → **12.4**, `OTHER` baseline 185.3 → **186.0**
  (frame glyph extents 12.67/55.33/186.0).
* User block: avatar glyph → `user_icon` texture 12px at **(11.5, 282)**
  (frame artwork 11.33..23.33 x 282..294; trace box 6.9375/277.4375/21.125 is
  the click box), name baseline 288 → **286**, name/UID x 29.5 → **32.3**,
  `UID: n` size 6 → **7** (trace `lq.caw()` = 7 for the `UID: 1337` draw).
* Tab label size 7 / baseline ty+11.5 verified (frame baseline 71.33 vs 71.5).

### 1.3 Header — fixed
* Icon 11px at +8/+8.5 → **13.125 at +6.4375/+7.4375** (trace rect
  106.4375/14.4375) with the page's `category/*` texture.
* Title x +22 → **+26.2** (frame: title glyphs start at 126.7; title size 8 and
  baseline 16.3 verified).
* Separator was a `·` glyph → now the **drawn circle 2.75** at
  title-advance + 6, y 12.625 (trace `lC.cdc`; frame dot at 160.7..162 for the
  Friends title).
* Subtitle size 6 → **7** (trace `lq.cat()` 4.9/`caw()` 7 for the subtitle draw),
  x = dot + 2.75 + 6.3.
* Search was a 9px glyph at the right edge → now the **zoom button 20x20 at
  hw-27** (trace `az.tc()-kN()-7` = 428) with the `zoom` icon 13.125 inset
  3.4375; the inline search field (port G) was moved left of it and the hit box
  follows the 20x20 button. **Correction to pass 1**: that 20x20 header element
  is not a close button — the frames show the magnifier there, the trace draws
  the `zoom` texture and its handler opens the `bc` component (sixtwo_2.java:
  853-863); no close button exists in the recovered header.
* **New: the add button** (`add` icon 10x10 at +306.33/+8.67) drawn on the
  Friends and Hud pages only — it is exactly the ⊞-with-plus seen on those two
  frames (pass 1 recorded it as unexplained).

### 1.4 Content — verified, no change
Card geometry, name/desc sizes (7/6), accent-when-enabled and truncation all
re-checked against trace + frames. The frames' card name/desc baselines
(12.7/20.0) hold.

### 1.5 Literals — folded
| Literal | Where it now lives |
|---|---|
| `Version: 4.4` | sidebar subtitle (verified against trace `lC.cez`) |
| `FEATURES` / `OTHER` | section labels (trace `cez`) |
| `Combat/Movement/Player/Visuals/Client/Friends/Hud` | page titles; the trace shows the original converts enum names via `jf.bAL` (`COMBAT`→`Combat`), so display vs enum capitalisation is now documented |
| `You haven't got any friends.` / `Add new friends using Middle Click Friend module!` | Friends empty state (trace `aq.<init>`); sizes corrected to 11/8 (`aq.java:28-30`), title baseline 150 → 147.3 |
| `UID: 1337` | `GuiTheme.UID_FORMAT` = `"UID: %d"`, used by the sidebar |
| `FPS`, `BPS`, `TPS`, `UID`, `XYZ`, `Facing` | `GuiTheme.HUD_*` constants (trace `jk.bDz`) |
| `My Configs` / `Public Configs` / `Favourite Configs`, `CONFIGS` | belong to the native configs screen `c` (its 5 `ap` popups + `Q` search field, sixtwo_4.java:88-96,196) — the port has no configs screen; recorded, not wired. Enum evidence: `jf` = the 7 sidebar pages in draw order (COMBAT, MOVEMENT, PLAYER, VISUALS, CLIENT, FRIENDS, HUD — the port's order), `aI` = an 8-value page enum that inserts CONFIGS before HUD |
| `Grim Client`, search placeholder, notification title, settings-popup strings | still holes (see §3) |

### 1.6 Typography — verified
Trace `lq.caw()` per draw, in order: sidebar title 9, `Version` 6, user name 7,
UID 7 (fixed), FEATURES/OTHER 5, tab labels 7 (x7), header title 8, header
subtitle 7 (fixed), card name 7 / description 6 (x12). Pass-1 sizes hold except
the two fixed.

### 1.7 Colours / theme — verified, radii fixed
Palette re-checked (window fill 11,11,13 / panel 21,21,25 / accent 151,71,255 in
the frames; theme constants unchanged). Corner radii re-measured from the
frames: tab pill was a full stadium (h/2 = 9) → **5** (top-row inset 3–4 px);
header bar 4 → **6** (squircle corner, ~11 px top-row inset).

### 1.8 SettingsWindow — aligned
Subtitle size 6 → 7, `·` glyph → drawn dot 2.75, title/subtitle baselines moved
to the shared +16.3/+12.625 header style. Still a G-reconstruction (`ap` is
native).

### 1.9 HUD — out of scope (documented)
The HUD renderer is `dev/opengrim/hud/HudOverlay.java` (outside `gui/**`); it
still draws an invented "OpenGrim | N fps | N ms" watermark. The captured HUD
labels are now in `GuiTheme` for it to consume; wiring it is a HUD-track change
(see §3).

## 2. Changes (files)

* `gui/screen/ClickGuiScreen.java` — texture icons (`drawIcon` + `Identifier`
  constants), Page enum icon assets, sidebar/header geometry and typography
  fixes above, dot circle, add button, zoom button, empty-state sizes,
  `GuiTheme.UID_FORMAT`.
* `gui/screen/SettingsWindow.java` — header typography aligned (size 7, dot).
* `gui/GuiTheme.java` — `UID_FORMAT` + `HUD_*` label constants (trace literals).
* `src/main/resources/assets/opengrim/icons/*.png` — NEW (11 files): the
  payload's first animation frame of `category/combat|movement|player|visuals|
  client|configs|friends|hud`, `add`, `zoom`, `user_icon` (extracted from
  bootstrap/offline/assets; the `configs` icon is shipped although the configs
  screen is not wired).

## 3. Remaining gaps

* **[S] backdrop blur / liquid glass** — unchanged (translucent themed fill).
* **[M] open animations**: the trace shows frame1 ≠ frame2 — the header dot
  slides by the title advance and the sidebar logo animates
  (5/7.5/30 → 4.4375/6.9375/31.125) while the window opens; the port draws the
  rest state (the window itself still fades/scales via `AnimatedScreen`). The
  `aq` empty state also has an `rj.UPXqT` open tween (aq.java:31).
* **[M] the `c` configs screen** (5 `ap` popups, `Q` search field, `cJ/cC/cL`
  rows, `aI` page enum incl. `CONFIGS`): native bodies + ~135 DES-encrypted
  literals; the captured config titles exist but their screens are not wired.
* **[S] icon animation** — the payload icons are 60–301 frame animations at
  60 fps; the port ships/draws frame 1.
* **[S] search popup `bc`** — the magnifier opens a priority-1000 `bc`
  component (sixtwo_2.java:853-863); the port keeps its inline field.
* **[U] the add button's action** (Friends/Hud) — not recoverable; drawn, no-op.
* **[U] the window close button** — none found in the trace/frames; RSHIFT
  close retained.
* **[N] holes** (runtime capture closed): `Grim Client` watermark text, search
  placeholder, notification title, settings-popup strings. `Grim Client` is
  drawn as a glyph-index array (`lC.ceA`), so it never appears as a string.

## 4. Compile

`.\gradlew.bat compileJava -q --offline` → **PASS** (verified after the
parallel module track settled; a transient failure during this pass was in
`modules/combat/TriggerBot.java` + `modules/combat/AutoPotion.java`, i.e. other
agents' in-flight edits — zero errors in `gui/**` throughout).

## 5. Visual-parity estimate

Weights: geometry 30%, widget visuals 30%, styling/colours/typography 20%,
animation/interaction 20%.

| Area | Pass 1 | Now |
|---|---|---|
| Geometry (window/sidebar/header/grid) | 90% | **96%** (icons/dot/add/zoom/UID x/baselines now trace-exact) |
| Widget visuals (cards, nav, icons, rows) | 80% | **92%** (real payload icon artwork incl. add/zoom/user; icon animation missing) |
| Styling/colours/typography | 80% | **90%** (all sizes trace-verified; radii re-measured; blur still absent) |
| Animation/interaction | 70% | **72%** (unchanged surfaces; open-animation and aq tween gaps now documented with evidence) |
| **Weighted total** | **≈81%** | **≈89%** |
