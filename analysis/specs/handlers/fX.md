# fX — Interface (module id 102, key=102, bind=344)

## Evidence base

- Registry: `fX  sixtwo.fX  Interface  "Allows to change interface settings"
  key=102  bind=344` (`analysis/specs/registry.tsv`); coverage matrix row
  `fX  Interface  0 0 0`.
- `analysis/decompiled/payload-decrypted/sixtwo/fX.java` (437 lines, CFR; all
  setting names/options plaintext in the constructor).
- Runtime interception corpus: 65 `"sixtwo.fX"` records in
  `analysis/decrypted/full-dump.jsonl`, all int resolutions (`bsm:"aYy"`,
  `desc:"(IJ)I"`) — no string records; fX needs none (all its strings are
  plaintext literals).
- Helper sources verified: `payload-named/sixtwo/cD.java` (keybind widget —
  `VP()` returns the bound key code [cD.java:85], `VO(int)` sets the default
  binding), `sixtwo/gA.java` (input event — `bbP()` key code [gA.java:37],
  `bbQ()` action type [gA.java:33], `bbR()` modifier), `sixtwo/bD.java`
  (click-GUI manager — `LD()` static open [bD.java:440], guards
  `rD.dlmvG.world != null`), `sixtwo/rr.java` (input-state helper —
  `diY(int)` GLFW key/button held test [rr.java:568], branch:
  `GLFW.glfwGetKey` for large codes vs `GLFW.glfwGetMouseButton` for small),
  `sixtwo/gf.java` (builder chain — `aZS/aZQ/aZU/aZW` are **native** builder
  methods [gf.java:50-58]), `sixtwo/cW.java` (consumer of `fX.aYh()`).
- Structural predecessor: none beyond the coverage-matrix row.
- **No native corpus**: no `sixtwo_fX.c` in `analysis/ghidra/handlers-stitched/`;
  fX is pure Java. All citations are Java line numbers.

## Runtime model

- Construction [fX.java:54-104]:
  `super(gf.aZL(102, true, gh.KfAlY).aZQ(345).aZS(false).aZU(true).aZW(true))`
  — module id 102, **starts enabled** (unlike every other module in this spec
  set), category `gh.KfAlY` (same family as fS/Name Protect), followed by four
  native builder flags: `aZQ(345)`, `aZS(false)`, `aZU(true)`, `aZW(true)`
  (builder semantics are native; see Unrecovered — note `aZQ`'s argument 345
  vs the registry bind 344).
- fX is the **interface/theme module**: it hosts the click-GUI keybind, the GUI
  background style selector, the theme-editor launcher, and — critically — the
  **client-wide anti-tamper probe channel** used by essentially every other
  class (`fX.aYu()`).
- Singleton pattern: `static fX JUwUO` resolved lazily in `aYl()` via
  `rD.dlJ().aZx(fX.class)` (module-manager lookup) [fX.java:375-403]; all
  static style accessors (`aYe/aYf/aYg/aYh`) resolve through it, so the native
  render layer can read the selected style anywhere without holding a reference.
- Anti-tamper channel: `static int[] CgnEr` set by `aYt(int[])` [fX.java:313-315]
  and initialized to `new int[2]` in `static{}` [fX.java:111]; `aYu()` returns it
  [fX.java:216-218]. Every other payload class branches on `fX.aYu() == null` —
  native code installs/replaces the array at runtime (non-null in a healthy
  client, null/absent under tampering, flipping every guard branch).
- GUI background opacity model: `aYh()` [fX.java:186-219] selects a static float
  by Style: Liquid Glass → `0.2f` (`aYk()` [fX.java:298-299]), Blur → `0.75f`
  (`aYi()` [fS-style constant, fX.java:417-418]), Solid → `0.85f`
  (`aYj()` [fX.java:346-347]). Consumed cross-module — e.g. cW/Trap ESP computes
  overlay alpha as `(255.0f - 100.0f * fX.aYh()) * 0.7f` [cW.java:1197] — so
  `aYh()` is the **background opacity scalar** (higher = more opaque).

## Per-handler semantics

- `@hG public void aYc(gA gA2)` [fX.java:231-287] — **key event handler** (gA =
  keyboard event; `bbQ()` action, `bbP()` key). Flow:
  1. Return unless the module is enabled (`bab() != 0`).
  2. Return unless `gA2.bbQ() == 1` (action type 1 — press/release class of the
     event bus).
  3. Return unless `rD.dlmvG.currentScreen == null` (no screen open).
  4. Return unless `gA2.bbP() == this.jGdAR.VP()` (key matches the current
     "Emote Key" binding, default 66).
  5. Compute `aYd()` = `rr.diY((int)292)` [fX.java:405-407] — GLFW key 292
     (F3) currently held.
  6. Only if `aYd()` is false: `bD.LD()` [fX.java:284] — open the client's
     main GUI screen (bD guards on `rD.dlmvG.world != null` [bD.java:440-444]).
  Net behavior: pressing the Emote Key with no screen open and F3 not held
  toggles/opens the click GUI; holding F3 suppresses it (F3 is the vanilla
  debug-modifier key, so F3+key combos pass through to vanilla).
- `public void YO()` override [fX.java:226-229] — on module disable, calls
  `this.baa(true)` (gg base flag setter [gg.java:187]; exact effect native —
  see Unrecovered).
- `private boolean aYd()` [fX.java:404-407] — F3-held probe (above).
- Static style accessors (API for the whole client/native layer):
  - `aYe()` = Style option index 0 selected ("Liquid Glass") [fX.java:293-295]
    — implemented as `aYl().aYn().SQ(0)` (ct enum widget index test).
  - `aYf()` = option 1 ("Blur") [fX.java:414-416]; `aYg()` = option 2 ("Solid")
    [fX.java:348-350].
  - `aYh()` = opacity resolver combining the three [fX.java:186-219].
  - `aYk()/aYi()/aYj()` = the constants 0.2f / 0.75f / 0.85f.
- `cI HevkM` "Edit Theme" action (`Wx(...)` [fX.java:96-103]) — opens the theme
  editor screen: `aZ(2.0f)` (editor screen with scale/parameter 2.0f),
  positioned using the parent screen dims `lc lc2 = bl.Ex().Ey()` at
  `x = lc2.bXF() - aZ2.kN() - 10.0f` (right edge minus editor width minus 10 px)
  and `y = lc2.bXG()`, then `aZ2.sW(x, y); aw.route(aZ2)` (screen router).
- Static helpers are obfuscation infrastructure: `aYw` DES int table (51
  entries, index `idx = seed ^ (key & 0x7FFF) ^ 0x4FCD` [fX.java:317-347]),
  `aYx`/`aYy` indy bootstrap, `aYv` identity rethrow, `aYl` singleton getter,
  `aYu`/`aYt` probe channel.
- Getters exported for the native render layer: `aYm()`→jGdAR (Emote Key),
  `aYn()`→nJAFn (Style ct), `aYo()`→hltCm, `aYp()`→OzuKt, `aYq()`→seKrG,
  `aYr()`→HevkM [fX.java:301-310, 365-367, 409-421].

## Settings→behavior

All names from plain int char arrays in the constructor [fX.java:55-103].

- `cD jGdAR` — `"Emote Key"` (69 109 111 116 101 32 75 101 121) [fX.java:67]
  `.VO(66)` — keybind widget, **default key 66** (`'B'`). Drives the GUI-open
  trigger in `aYc`; note the widget is named "Emote Key" — the same binding is
  what the interface module uses to open the client GUI.
- `ct nJAFn` — `"Style"` (83 116 121 108 101) [fX.java:68] — enum select, three
  `cu` options:
  - `hltCm` = `"Liquid Glass"` (76 105 113 117 105 100 32 71 108 97 115 115)
    [fX.java:69-82] — option index 0.
  - `OzuKt` = `"Blur"` (66 108 117 114) `.SY()` [fX.java:83] — **default**
    (option index 1).
  - `seKrG` = `"Solid"` (83 111 108 105 100) [fX.java:84] — option index 2.
  Selection is read globally via `aYe()/aYf()/aYg()` and drives the GUI
  background opacity through `aYh()` (0.2 / 0.75 / 0.85 respectively).
- `cI HevkM` — `"Edit Theme"` (69 100 105 116 32 84 104 101 109 101) [fX.java:89]
  — action/button widget (no on/off state); fires the theme-editor screen open
  described above.

## Unrecovered

- **Native builder semantics**: `gf.aZQ(int)` / `aZS(boolean)` / `aZU(boolean)` /
  `aZW(boolean)` are native `gf` methods [gf.java:50-58]. For fX they are called
  with `(345, false, true, true)`; the registry separately records `bind=344`.
  Whether `aZQ(345)` is a secondary keybind (GLFW 345 = right control?), a
  screen-id, or something else is not recoverable from the payload.
- **`baa(true)` effect on disable** (`YO()` override): `gg.baa(boolean)`
  [gg.java:187] manipulates shared module state whose consumer is native; the
  exact consequence of disabling Interface (e.g. closing the GUI, resetting the
  theme screen) is unknown.
- **The `aZ(2.0f)` theme-editor screen internals** (`aZ`, `bl.Ex().Ey()`,
  `bXF/bXG/kN/sW`, `aw.route`): the editor screen class itself lives outside
  this module; its layout math is visible here but the editor's own behavior is
  a separate component not in scope of this class.
- **DES int-table contents** (`mKhNu`): statically undecryptable (per-class key
  `vDBBc` from native `gb.aYR`); behaviorally irrelevant — every int fX needs is
  plaintext (66, 1, 0/1/2 style indices, 292, 0.2f/0.75f/0.85f as float
  literals).
- **Probe-channel protocol**: `aYt(int[])` is only ever called with
  `new int[2]` from `static{}`; the runtime writer is native. The meaning of the
  two int slots and the update cadence are unknown (documented as the shared
  framework channel all other classes test via `fX.aYu()`).