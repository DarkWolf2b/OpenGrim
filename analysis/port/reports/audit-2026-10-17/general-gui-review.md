# General GUI/UX review — 2026-10-17 (incl. the two live popup/pill regressions)

Scope: `src/main/java/dev/opengrim/gui/**` + `src/main/resources/assets/opengrim/**`.
Follows `clickgui.md` (pass 1) and `clickgui-2.md` (pass 2). It answers the live
bug reports — settings-popup content rendered as unreadable glyph noise, the
white-square logo, a second garbled panel (first session), and then the
"popup no longer appears at all" + accent-pill-blob regressions (second session) —
and continues the checklist items (`c` literals, framework surfaces, sheet
coverage).

Compile: `.\gradlew.bat compileJava -q --offline` → **exit 0**.

---

## 0. Evidence used in this pass

| Source | What it proves |
|---|---|
| `image.png` (user screenshot, 1112x736) | pixel-level ground truth of the bug: window designScale = 2.0 (window 930x612 px = 465x305.5 units, origin px (32,4)), the garbled panel, the logo tile |
| `analysis/decompiled/payload-named-cfr/sixtwo/jH.java` (`jH.bId`, lines 62-86) | the popup transform is **scale about the pivot** `(cx, cy)`: `pushMatrix; translate(x,y); scale(s,s); translate(-x,-y)` (§1.1) |
| `analysis/gui-src/sixtwo_46.java` (`bd`) | the module settings panel: width `BcpIo = 127.0f`, children = module toggle (`cJ`, `WE(module state)`, `Vd(toggle)`) + module row (`bk`) + `jf.bAR(setting, this)` rows + scrollbar (`ah`); `Pblor = 18.0f` |
| `analysis/gui-src/sixtwo_52.java` (`bg`) | the card's settings open/close: `CQ(cB)` creates the panel at `(window.right + 10, window.top)`, re-targets the panel of the same card, hides other panels |
| `analysis/gui-src/sixtwo_33.java` (`az`) | the render entry: `su(lC)` → `fX(lC)` (per-frame update) + `bV(lC)` (draw) — the hook that was missing in the port |
| `analysis/traces/2026-10-17/raw/frame1.jsonl` | the logo tile is ONE texture quad (`lC.cdU(Identifier, rect(5,7.5,30,30), mG)`, lines 988-996) |
| `analysis/decompiled/bootstrap/offline/assets/raster-assets.bin` | the payload's `logo` raster asset (60x60 PNG, grim-reaper artwork) |
| `analysis/decompiled/bootstrap/offline/fonts/bold.{atlas,metadata}` | the fifth MSDF sheet (was missing from the port) |
| `analysis/decrypted/full-dump.jsonl` (153 classes) | per-class DES keys `key = args[1] ^ raw[1]` — used for the `c` recovery attempt (§3) |
| `analysis/tmp/gui-review/{TweenCheck.java,check_transform.py,render_popup*.py}` | offline harnesses: real-class tween convergence (§1.2), popup transform geometry (§1.1), draw-path rendering |

---

## 1. Findings (severity / evidence / fix)

Reading order: §1.1/§1.2 are the **follow-up session's regressions** (popup not
shown after the tween fix; accent-pill blob) and §1.3–§1.8 the first-pass findings
from the original bug report (half-scale popup, logo, `bd`/`bg` geometry, sheets,
interaction model).

### 1.1 **[S, fixed] Settings popup invisible after the tween fix — `GuiDraw.pushTransform` had the wrong pivot**

* **Symptom (user, second session).** Right-clicking a card no longer showed the
  popup at all (before the tween fix the garbled half-scale rows were visible).

* **Root cause.** `GuiDraw.pushTransform(cx, cy, s)` pushed
  `pushMatrix; translate(cx, cy); scale(s, s)` — **without the closing
  `translate(-cx, -cy)`**, so the pivot was the origin, not `(cx, cy)`.
  The original `jH.bId` (plaintext, `sixtwo/jH.java:62-86`) is
  `pushMatrix; translate(x, y); scale(s, s); translate(-x, -y)`
  — scale **about the pivot** — and the port's own
  `WheelDraw.pushScaleAbout` already implements exactly that for the same
  original call.
  Consequence for a widget drawn at its *absolute* rect (the popup draws itself
  at `(x, y, w, h)`): at `s = 1` the panel is displaced by `(cx, cy) =
  (x + w/2, y + h/2)`, i.e. it lands at `(2x + w/2, 2y + h/2)`. With the stuck
  tween (`s = 0.5`) that displacement was only half as large and the old anchor
  (`contentX()+40`) kept it on-screen — which is why the bug was invisible until
  the tween started reaching 1 *and* the recovered anchor (`window.right + 10`)
  moved it further right.

* **Proof (geometry harness `analysis/tmp/gui-review/check_transform.py`,
  modelling the exact matrix composition + recovered anchor + `[G]` clamp):**

  | viewport | panel rect | buggy pivot (origin) | fixed pivot `(cx,cy)` |
  |---|---|---|---|
  | 556x368 (user's screenshot session) | `429..556 x 31.2..229.2` | drawn `921.5..1048.5` → **OFF-SCREEN** | drawn `429..556` → on-screen |
  | 960x540 (1920x1080 @ GUI scale 2) | `722.5..849.5 x 117.2..315.2` | drawn `1508.5..1635.5` → **OFF-SCREEN** | drawn `722.5..849.5` → on-screen |
  | 824x470 | `654.5..781.5 x 82.2..280.2` | drawn `1372.5..1499.5` → **OFF-SCREEN** | drawn `654.5..781.5` → on-screen |

  (same table at `t = 0.5`: buggy `814..909` / `1328..1423` / `1209..1304` — also
  off-screen, which is why the *new* anchor alone was already fatal.)

* **Fix.** `gui/ui/GuiDraw.java` — `pushTransform` now closes with
  `m.translate(-cx, -cy)` (javadoc cites `jH.bId` and `WheelDraw.pushScaleAbout`).
  At `t = 1` the popup transform is the identity, so the panel, its content, its
  scissor and its hit-tests all coincide with the recovered rect again.
  Post-fix layout preview (offline sketch of the panel at the recovered 127-unit
  width / designScale 2): `analysis/tmp/gui-review/popup-fixed-full.png`
  (harness `render_popup_full.py`).

* Side effect checked: the container's `enableScissor` rect is transformed by the
  current matrix in vanilla (`ScreenRect.transform(matrices)`), so the popup's
  content scissor follows the popup transform correctly in both states.

### 1.2 **[S, verified] Accent-pill "purple blob" — `Tween.update` lazy-init (orchestrator's fix verified)**

The blob was the sidebar pill drawn at `pill.current() ≈ 0` (top of the screen,
`TAB_W` wide, accent colour). Cause: `Tween.update(float)` never set
`initialized = true` in its lazy-init branch, so every per-frame call re-entered
that branch and restarted the tween (`start = current`, `startAt = now`) — it
could never advance past its start value. `snap()` set the flag, which is why the
screen tween and the popup tween still worked while `pill`/`hover` (never snapped)
stayed at 0.

Verified with the **real port classes** (`analysis/tmp/gui-review/TweenCheck.java`,
compiled against `src/main/java/dev/opengrim/gui/anim/{Tween,Easing}.java`,
`win/jdk-21.0.12.1+1`):

```
pill Tween(150,0)            target=60.00  final=60.00000  convergedAt=15 frame(s) (150ms)
hover Tween(120,0,HOVER)     target=1.00   final=1.00000   convergedAt=12 frame(s) (120ms)
popup openAnim  after snap: current=0.000
popup Tween(150,0,OPEN)      target=1.00   final=1.00000   convergedAt=15 frame(s) (150ms)
screen Tween(200,0,OPEN)     target=1.00   final=1.00000   convergedAt=20 frame(s) (200ms)
easing LINEAR apply(0)=0.0000 apply(0.5)=0.5000 apply(1)=1.0000
easing OPEN   apply(0)=0.0000 apply(0.5)=1.0877 apply(1)=1.0000
easing CLOSE  apply(0)=0.0000 apply(0.5)=-0.0877 apply(1)=1.0000
easing HOVER  apply(0)=0.0000 apply(0.5)=0.8750 apply(1)=1.0000
```

So the pill slides to `tabY(indexOfSelected())` in 150 ms, hover tweens advance in
120 ms, and the popup's `setOpen(true)` → `snap(0)` → per-frame sequence reaches
`t = 1` (150 ms). `Easing.OPEN` is the recovered ease-out-back (overshoot 1.0877 at
the midpoint, no NaN, exact endpoints); `SettingsWindow` clamps `t` to 1 for its
alphas/scales (`[G]`, the `bd` scale formula is native — the `bl` paint path uses
the unclamped `sf()`).

### 1.3 **[S, fixed] Settings popup was drawn at half scale with invisible chrome — the "garbled rows"**


* **Root cause.** `Popup.openAnim` (the `ap` open/close tween) was only touched by
  `Popup.setOpen()`; `SettingsWindow.openFor()` calls `setOpen(true)` and then
  `openAnim.snap(0.0f)`, and **nothing advanced the tween per frame**. So
  `t = openAnim.current()` stayed `0` forever:
  * `SettingsWindow.drawWidget` pushes `pushTransform(x + w/2, y + h/2, 0.5 + 0.5*t)`
    → **0.5** for every element of the panel (background, header, rows);
  * every themed colour in that method is `withAlphaScale(t)` → **alpha 0**, so the
    panel fill, border, header title/subtitle and separator dot were invisible;
  * the widget rows (`ToggleWidget`/`SliderWidget`/…) do **not** use `t`, so they
    drew at full alpha — at half scale, inside an invisible panel.
  The result is exactly what the user saw: a block of dense 3.5-unit (7 px at
  designScale 2) MSDF text with no panel behind it.

* **Pixel proof from `image.png`** (all in design units, scale 2.0, window origin px (32,4)):
  * garbled block px `908..1089 x 546..707` = design `438..528.5 x 271..351.5`;
  * the block's fill is *exactly* `Theme.panelColor` (24,24,27) — i.e. the stack of
    row fills, **not** the popup background (which would be
    `background.lerp(panelColor, 0.3)` = (15,15,16) at t=1 and alpha 0 at t=0);
  * row pitch measured **12.1 px = 6.05 design = half of `TOGGLE_H` (12)**;
  * text ink height 5 px = 2.5 design = half of a 7-unit em's cap height
    (0.7·7·0.5 = 2.45);
  * the visible row labels are the port's own `BoolSetting` ids at half scale
    (`wooden_sword`, `stone_sword`, `iron_sword`, `golden_sword`, `diamond_sword`,
    `netherite_sword`, `wooden_axe`, …) and the header title ink (47 px = 23.5
    design) matches "Mace Swap" at size 8 — i.e. **the data is clean, the draw
    path was wrong**, exactly as the recon suspected;
  * the only chrome element visible in the block is the close "×" (px ~(1080,524)),
    because `CloseButton` does not scale its alpha by `t`.

* **Fix.** Added the missing per-frame update hook and drove the tween from it:
  * `gui/ui/Widget.java` — new `protected void updateAnimations() {}`, called from
    `render()` between the hover tween and `drawWidget` (the `az.su` = `fX` + `bV`
    contract);
  * `gui/ui/Popup.java` — `updateAnimations()` → `openAnim.update(open ? 1 : 0)`.

  With that, `t → 1`: the panel draws at scale 1.0 with its background, border,
  header and close button, and the rows at their true size (7-unit labels = 14 px
  at designScale 2, identical to the main window's card text path — same
  `MsdfFont` → `GuiDraw.texturedQuad` code, no vanilla-`TextRenderer` involvement).

  Verification: the same row stack rendered through an offline reproduction of the
  draw path (baked sheets + `texturedQuad` rounding) at `t=0` (mush, matches the
  screenshot) and `t=1` (crisp):
  `analysis/tmp/gui-review/{popup-stuck-t0.png,popup-fixed-t1.png}`
  (harness: `analysis/tmp/gui-review/render_popup.py`).

### 1.4 **[S, fixed] The "second garbled panel" is the same popup**

The screenshot contains **one** garbled panel (px `908..1089 x 546..707`). It is
the settings popup itself (its rows at half scale, §1.3) — not a second instance,
not notifications (the port has no notification UI), not the HUD overlay (the HUD
is not rendered while a screen is open; the vanilla `InGameHud` path is not ours).
The area the report described as the "first block" (px ~620-820) is clean in the
image — it holds the crisp `Spear Lunge` / `Mace Elytra Target` cards (crop:
`analysis/tmp/gui-review/crop-region620.png`), i.e. both descriptions refer to the
same half-scaled popup. No duplicated popup exists in the code either:
`ClickGuiScreen` owns one `SettingsWindow`, `openSettings()` does `remove + add`
(no duplicate in `Manager`). It is fixed by the §1.3 change (and its visibility by the §1.1 transform fix).

Not ours, for completeness: the row of 11 identical shadowed glyphs at the bottom
centre of the screenshot (px `320..465 x 715..733`) is **vanilla text with a
shadow** (our GUI text path always passes `shadow = false`) and sits outside every
port draw surface; it is in-world/HUD content of the running client. Evidence
needed to name it: a screenshot with the GUI closed, or a trace of that frame.

### 1.5 **[S, fixed] Logo tile was a placeholder white square**

* **Evidence.** `image.png` tile px `38..96 x 10..68` is pure `(255,255,255)`.
  The trace draws the tile as a *single texture quad*
  (`frame1.jsonl:988-996`, `lC.cdU(Identifier, lc(5, 7.5, 30, 30), mG)`), and the
  payload ships exactly one logo artwork: the `logo` raster asset (60x60 PNG,
  grim reaper, transparent background) inside `raster-assets.bin`.
* **Fix.** Shipped it as `src/main/resources/assets/opengrim/icons/logo.png` and
  replaced the white `fillRect` with `drawIcon(ICON_LOGO, windowX + 5, windowY + 7.5,
  30, 60, text)` (`ClickGuiScreen.drawSidebar`). Composite check over the panel
  colour: `analysis/tmp/gui-review/logo-on-panel.png`.
* **Note on the reference frames.** `page-*.png` show a plain white tile in all six
  frames (measured: 1936/2209 pure-white px), i.e. that capture build shipped a
  white logo asset — the payload build we port ships the reaper, and the trace
  proves the tile is one texture draw. The port now follows the trace + asset
  (user directive); if the white-tile look is ever preferred it is a one-line
  revert.

### 1.6 **[M, fixed] Settings panel geometry/interaction did not match `bd`/`bg`**

Recovered from the plaintext parts of the original and now ported:

| Fact | Evidence | Port before | Port now |
|---|---|---|---|
| Panel width **127.0f** | `bd` ctor `this.BcpIo = 127.0f` (`sixtwo_46.java:69`) | 200.0f | `POPUP_W = 127.0f` |
| Open position **(window.right + 10, window.top)** | `bg.CQ` (`sixtwo_52.java:495-497, 540`) | `(contentX()+40, contentY()+20)` — over the window content | same formula as the original (+ a documented `[G]` viewport clamp so the panel stays reachable on small design viewports) |
| First row = **module toggle** (`cJ`, seeded with the module state, callback toggles the module) | `bd` ctor (`sixtwo_46.java:86-88`) | missing | `ToggleWidget(module.getName(), module.isEnabled())` + `onChange(module::toggle)` |
| Re-target the panel of the same card; other panels hide | `bg.CQ` (`sixtwo_52.java:498-539`) | re-target kept, position kept | unchanged (already correct) |

The header (title + `·` + subtitle + `×` close) remains a `[G]` reconstruction —
`bd`'s chrome is native and its field list shows only the toggle row, the module
row (`bk`), the setting rows and a scrollbar (`ah`); the subtitle/dot are now drawn
only when ≥ 24 units remain left of the close button (127-unit panel).

### 1.7 **[S, fixed] Fifth MSDF sheet (`bold`) was missing**

`MsdfFont.of(MsdfFont.BOLD)` returned `null` (fallback to the vanilla font). The
bootstrap ships `bold.atlas` + `bold.metadata`; the sheet was baked with the exact
shipped recipe — verified first by re-baking `semibold` and comparing to the
shipped sheet (**alpha match 1.000 over 51,984 samples**) — and added as
`assets/opengrim/fonts/bold.{atlas,png}` (660x660, 160 glyphs). All five sheets
now load and are atlas/PNG-consistent (checked programmatically).

### 1.8 **[S, verified] Remaining interaction model**

* Open (right-click a card) → `openSettings` → `openFor` (visible, tween reset,
  rebuild) ✓; re-target ✓; drag (header band, `Popup.onMouseDrag`) ✓; close button
  (`lf.PqdjL` CROSS) ✓; scroll (container, `SettingsWindow.onScroll` →
  `ContainerWidget`) ✓; all setting kinds render (`ModuleWidgetFactory`:
  bool → `ToggleWidget`, double/int → `SliderWidget`, mode → `ModeWidget`
  (LMB cycles / RMB back), string → `TextFieldWidget` (focus, caret, backspace,
  arrows, enter), colour → swatch row + R/G/B/A sliders, group → `ActionWidget`
  header + indented children) ✓.
* **Outside-click close: not implemented — no evidence found.** The recovered
  handlers only hide panels when *another* card's panel opens (`bg.CQ`
  `Cg(false)`); `bl.Ew()` removes all `bd` panels when the GUI closes; no
  click-outside path exists in `bl`/`g`/`bg` plaintext. Closing affordances in the
  port: the `×` button, ESC (vanilla screen close) and RSHIFT. Evidence that would
  settle it: a trace with the panel open plus an outside click, or the native
  `bd`/`bl` handler bodies.
* No click sounds: no `playSound`/`SoundEvent` call site exists anywhere in the
  recovered GUI classes (`analysis/gui-src/**`), so none are added.
* Wheel screen: `openAnim` is advanced per frame (`EmoteWheelScreen:215`), so the
  §1.3 class of bug does not exist there; the wheel's remaining deviations are the
  ones documented in `WheelDraw`/`WheelScreenBase` javadoc (vanilla fills instead
  of custom pipelines, vanilla font instead of `lE` SDF).

---

## 2. Recovered constants / literals (this pass)

| Constant | Value | Source | Used for |
|---|---|---|---|
| `bd.BcpIo` | **127.0f** | `sixtwo_46.java:69` | settings panel width |
| `bg.CQ` placement | `window.x + window.w + 10.0f`, `window.y` | `sixtwo_52.java:495-497` | settings panel open position |
| `bd` first child | `cJ` + `WE(module state)` + `Vd(toggle module)` | `sixtwo_46.java:86-88` | module toggle row |
| `bd.Pblor` | 18.0f (static; **use not provable** — the row heights are native `ak.dn()`) | `sixtwo_46.java:47` | *not applied* (documented gap) |
| `logo` raster asset | 60x60 PNG (grim reaper, transparent bg) | `raster-assets.bin` | sidebar logo tile |
| `bold` sheet | `bold.atlas` (660x660, 160 glyphs) + baked alpha PNG | `bootstrap/offline/fonts` | 5th `MsdfFont` weight |
| **`c`'s DES literals** | **not recoverable** — see §3 | — | — |

---

## 3. `c` (configs screen) DES literals — recovery attempt and why it fails statically

Attempted the matured technique (reimplement the class's own decryptor, derive the
class key from `full-dump.jsonl` `args`/`raw` pairs, validate against the dump):

1. **Key formula validated on classes that *are* in the dump.** For a site record
   `{"args":[id, l2], "raw":[id, rawLdc], "value":v}` the class key is
   `key = args[1] ^ raw[1]` (the CFR literal `(0x…L ^ l2)` carries the same
   constant). This reproduces the two keys already published by the audit
   (`dz = 48869455257838`, `dv = 135552457227801`) and yields single-valued keys
   for **140 of the 153** dumped classes (13 have mixed values because their
   static init derives more than one long per class).
2. **`c` is absent from every dump.** `full-dump.jsonl` has no `sixtwo.c` record
   (153 classes, exact-case compared), `gui-dump.jsonl` has none, and the runtime
   trace contains no `sixtwo.c` reference at all — the hooked run never opened the
   configs screen, so no `args`/`raw` pair exists to derive `aEFGH` from.
3. **The class file cannot supply it either.** `c.class`'s `<clinit>` is the
   mango/j2cc-transformed stub `Loader.doInit(c.class); c._4f84036bfae9883b4cc5c5a67d6c2a06()`;
   the key-derivation constants (`gb.aYR(k1, k2, lookupClass()).a(k3)`) that
   survive in the 223 untransformed classes are simply not present in `c`'s class
   file (its constant pool holds only the site `raw` literals).
4. **Fitting the key from the 20 recoverable `(k1, k2, k3, key)` tuples failed.**
   For those classes (java-init, key known) `key ^ k3` matches **no** hash of the
   class name (dotted/slashed/plain/`L…;`/upper; md5, sha1, sha256, sha512,
   blake2b, blake2s at every 8-byte offset and both endiannesses, crc32, adler32)
   and **no** hash of the class file bytes; no shift/rotate/xor/add/sub/mul
   combination of `k1`/`k2` reproduces it either.
5. **The keys are not literals in the native image.** Searching the decrypted
   native image (`analysis/ghidra/dumps/jna-decrypted-v2.dll`) for `k1`, `k2`,
   `k3` and `key` of all 20 classes (LE and BE qwords) returns **zero** hits, so
   the keys are computed, not stored.

**Conclusion:** `c`'s ~135 DES literals (configs popup titles/subtitles, toggle
labels) cannot be recovered from the current evidence. **What would close it:** a
hooked run in which the configs screen is actually opened — that emits `sixtwo.c`
records into the dump, from which `aEFGH = args[1] ^ raw[1]` and then, with the
class's own decryptor (as reconstructed for `dz`/`dv`), all sites decrypt
offline. Secondary evidence that would help: the `gb.aYR`/`ga.a` native bodies
(the key derivation), which are in the DLL but not decompiled.

---

## 4. Changes (files)

* `gui/ui/Widget.java` — `updateAnimations()` per-frame hook (`az.fX`), called from
  the render entry.
* `gui/ui/GuiDraw.java` — `pushTransform` scales about the pivot `(cx, cy)`
  (`jH.bId` order, §1.1).
* `gui/ui/Popup.java` — `openAnim` advanced per frame (the §1.3 fix).
* `gui/screen/SettingsWindow.java` — panel width 127 (`bd.BcpIo`), module toggle
  row (`bd` ctor), conditional dot/subtitle (narrow panel), `clampInto(...)`
  `[G]` viewport guard, javadoc with the `bd`/`bg` citations.
* `gui/screen/ClickGuiScreen.java` — settings open position from `bg.CQ`
  (`window.right + 10`, window top); logo tile drawn from the payload's `logo`
  asset (single texture quad at (5, 7.5, 30, 30) per the trace); class doc updated.
* `src/main/resources/assets/opengrim/icons/logo.png` — NEW (payload `logo` asset).
* `src/main/resources/assets/opengrim/fonts/bold.{atlas,png}` — NEW (5th sheet).
* Scratch/verification only (not part of the build): `analysis/tmp/gui-review/`
  (`render_popup.py`, `bake_sheet.py`, `popup-*.png`, screenshot crops,
  `TweenCheck.java` — real-class tween harness, `check_transform.py` — popup
  transform geometry harness).

## 5. Remaining gaps

* **[N] `c`'s DES literals + the whole configs screen** — §3 (needs a hooked run
  with the configs screen open).
* **[M] `bd`'s native chrome / row metrics** — the panel's exact row heights
  (`ak.dn()` native; `bd.Pblor = 18.0f` is the only candidate), the scrollbar
  (`ah`, not drawn in the port), the `bk` module row's pool label, and the close
  affordance (the `×` is a port `[G]` reconstruction) — native bodies.
* **[U] Outside-click close** — no evidence (§1.8).
* **[N] Notification UI** (`bz` + `ap` notification popups) is absent from the
  port; **[N] the HUD overlay** (`hud/HudOverlay.java`, outside this scope) still
  draws the invented "OpenGrim | fps | ms" watermark instead of the recovered
  `jk.bDz` labels (already in `GuiTheme.HUD_*`).
* **[U] the bottom-centre shadowed glyph row in the screenshot** — not a port
  surface (§1.4).
* **[S] `bl` tween duration (200 ms)**, **search placeholder**, **notification
  title**, **`d` panels**, **search popup `bc`**, **the Friends/Hud `add` button
  action**, **icon animation (frame 1 only)**, **backdrop blur/liquid glass** —
  unchanged from `clickgui-2.md` §3.
