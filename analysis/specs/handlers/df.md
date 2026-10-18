# Aspect Ratio (sixtwo.df) — handler-derived behavior spec

Class: `sixtwo/df` · display name **Aspect Ratio** (module id 92).
Superclass `gg` (module base: `bab()` enabled gate, `YO()` unregister,
`aaj()` on-enable). **Zero native methods declared** (javap-verified;
coverage matrix `natives_declared=0`) — pure-Java payload class, not
j2cc-virtualized; no image addresses (0x18xxxxxxx) exist to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/df.java` (310 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/df.java` — fully decompiled;
   the whole class is ~90 lines of settings + getters, everything readable.
2. `analysis/decompiled/payload-named/sixtwo/df.java` — identifier
   cross-check.
3. `analysis/specs/modules/df.md` structural spec.
4. Registry entry (module id 92) for display name.
5. Helpers (one-liners, shared across this batch): `ct` group setting
   (`ST()` 0-based index, `SQ(i)` child-enabled, `SZ()` selected child,
   `Ve(callback)` change hook); `cu` group child; `cC` numeric setting
   (`Vy` step / `Vw` min / `Vx` max / `VA` default / `Vz` suffix; `VC()`
   int, `VB()` float, `VG()` max); `mr.clS(int[])` char-array→string pool;
   `gb.aYR` DES seed derivation (unrecoverable); `rD` client-context
   singleton.

## Runtime model

- **No `@hG` listeners at all.** df is a pure settings + getter module: the
  Java shell (camera/projection code, out of scope for this spec) polls
  `adV()` each frame and builds the projection matrix with that aspect
  value. df itself performs no rendering, no matrix math, and no event
  handling.
- Static constants, recovered exactly [df.java:38–40]:
  - `AnzBQ = 1.7777777777777777` — 16:9 ratio; also the default of the
    Ratio slider.
  - `fUTAw = 1.6` — 16:10 ratio.
  - `XmhqK = 1.3333333333333333` — 4:3 ratio.
- No persistent state, no lists, no teardown beyond the inherited
  unregister.

## Per-handler semantics

All methods are plain Java; there are no virtualized bodies.

- Constructor [df.java:47–74] — builds "Preset" group + "Ratio" slider
  (table below). No event wiring, no `@hG` registrations.
- **`adV()`** [165] — returns the effective aspect ratio (float):
  - Preset "16:9" (`ZzGuW` branch) → **1.7777777777777777**;
  - Preset "16:10" (`hfdrQ`) → **1.6** (`fUTAw`);
  - Preset "4:3" (`XSYSg`) → **1.3333333333333333** (`XmhqK`);
  - else (Custom, `JRiAq`) → `uvSVP.VB()` — the Ratio slider value.
- `aeb()` [157] — exposes the Ratio `cC` to the shell.
- `aea()` [161] — exposes the Custom child (`cu JRiAq`).
- `adX()` [229] — exposes the 16:9 child (`cu ZzGuW`).
- `adW()` [286] — exposes the Preset group (`ct jtYSu`).
- `adY()` [294] — exposes the 4:3 child (`cu XSYSg`).
- `adZ()` [290] — exposes the 16:10 child (`cu hfdrQ`).
- `aee/aef/aed/aec` [233–284] — DES string/int decode plumbing; feeds only
  display strings, no behavioral constants.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 47–74; `int[]` = ASCII):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Preset" (`ct jtYSu`) | group, 4 `cu` children | Custom (`JRiAq`), "16:9" (`ZzGuW`), "16:10" (`hfdrQ`), "4:3" (`XSYSg`) | first child (Custom) | [df.java:32–68] |
| "Ratio" (`cC uvSVP`) | numeric | step **0.001**, min **0.1**, max **5.0** | **1.7777777777777777** (`VA(AnzBQ)`); visible only when Preset == Custom | [df.java:69] |

Behavioral consequences (contract, shell-side application):

- Selecting a named preset pins the projection aspect to the exact double
  constants above (not the slider).
- Custom hands the slider value to the shell; with step 0.001 and range
  0.1–5.0 the usable band covers ultrawide (≈3.6) down to portrait.
- The module name string itself is the registry display name; the settings
  tree is exactly the two rows above — nothing else exists in the class.

## Unrecovered

- None behavioral: the module is fully recovered; both settings, all three
  static ratio constants, the getter contract, and `adV()`'s branch logic
  are literal in the decompile.
- The only unrecovered bytes are DES display-string ciphertexts for the
  preset labels behind `aee/aef` bootstraps; the visible labels ("Custom",
  "16:9", "16:10", "4:3") are recovered from the folded literals, so
  confidence is high across the board.
- Open (non-behavioral, shell-side): whether the shell clamps `adV()`
  against the monitor's real aspect for HUD-safe rendering, and whether the
  FOV slider elsewhere multiplies before or after this aspect is applied —
  out of scope, not determinable from df alone.