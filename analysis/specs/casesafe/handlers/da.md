# Sound ESP (sixtwo.da) — handler-derived behavior spec

Class: `sixtwo/da` · display name **Sound ESP** (module id 85).
Superclass `gg`, implements `lA` (HUD-contributor contract). **Zero native
methods declared** (javap-verified; coverage matrix `natives_declared=0`) —
pure-Java payload class, fully decompilable; the named-variant decompile has
literals visible. No image addresses (0x18xxxxxxx) exist to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-named/sixtwo/da.java` (folded literals visible).

## Evidence base

1. `analysis/decompiled/payload-named/sixtwo/da.java` — fully decompiled
   (folded-literal variant available for this class; no decrypted-literal
   variant needed).
2. Inner class `da$sv` (one tracked sound entry — fully read, all fields and
   draw logic recovered).
3. `analysis/specs/modules/da.md` structural spec.
4. Registry entry (module id 85) for display name.
5. Helpers (one-liners): `gI` sound event (`bcc()` → `SoundInstance` with
   `getX/getY/getZ` world position); `gk` HUD render event (`baT()` → `lC`
   DrawContext wrapper); `hp` entity-removal event (not used here); `rk`
   fade animation (`dhd(target)` / `dhj()` value / `dhs(rj)` mode /
   `dhc(!done)` / `dhF` reset); `rj.XzDkv` forward / `rj.AYqck` reverse
   animation modes; `jI.bIw(Vec3d)` world→screen projection; `jH.bId/bIf`
   zoom helpers; `ccU` rounded-rect draw; `cez` text draw with color;
   `lE.WTzbi.bYM(7.0f)` font accessor; `rD.dlM().bjb()` theme text color;
   `Taibw.dhd` animation/throttle; `mU` random helpers.

## Runtime model

- **`abs(gI)`** — sound-played event:
  1. gate `bab()`;
  2. position from `SoundInstance.getX()/getY()/getZ()`;
  3. skip if distance to local player > `Max Distance`;
  4. append `da$sv(sound, pos)` to the entry list;
  5. evict oldest beyond `Quantity Limit` (`Taibw.dhd(0.0F)` starts the
     forced fade; `zUbCd=true` marks the evicted entry).
- **`abt(gk)`** — HUD render: for each entry call
  `doj(lC, Time Before Disappear.VC())`; drop the entry when `dok()` is
  true.
- `da$sv` (fully recovered): fade animation `rk Taibw` with duration DES
  string `xwXDE` and ms-per-unit `YpDrW` (likely **1000**);
  - `doj`: `dhc(!done)`, `dhs(rj.XzDkv | rj.AYqck)`; expiry when age >
    `n × YpDrW` → start reverse fade;
  - draws a world-projected card via `jI.bIw(pos)`:
    - sound name = capitalized id path (DES regex `ySNLn` → `" "`,
      `"_"` → `" "` replacement);
    - font `lE.WTzbi.bYM(7.0f)`, **+10** px padding, scale `rk.dhj()`;
    - zoom `jH.bId/bIf`; rounded rect `ccU`; text color
      `rD.dlM().bjb()`;
  - `dok()` true when done && `dhj() ≤ 0`.
- **`YO()`** — unregister + clear entry list.

## Per-handler semantics

- Entry lifecycle: visible → age past `Time Before Disappear` seconds →
  reverse fade → removed (`dok()`).
- The card always renders at the captured world position projected through
  `jI.bIw`; off-screen entries are skipped (projection guard).
- List bound: `Quantity Limit`; when exceeded, the oldest entry is
  force-faded immediately (`dhd(0.0F)`) rather than popped, so it animates
  out.
- Distance gate uses the sound's captured position, not the live entity —
  moving sound sources do not update the card position.

## Settings→behavior

Exact names/steps/mins/maxes/defaults (constructor):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Time Before Disappear" | `cC` numeric | step **1.0**, min **1.0**, max **15.0** | **8.0**, suffix **" s"** | [da.java constructor] |
| "Quantity Limit" | `cC` numeric | step **1.0**, min **1.0**, max **100.0** | **10.0** | [da.java constructor] |
| "Max Distance" | `cC` numeric | step **1.0**, min **1.0**, max **128.0** | **32.0**, suffix **" blocks"** | [da.java constructor] |

## Unrecovered

- DES constants in `da$sv`: `xwXDE` (fade duration string), `YpDrW`
  (ms-per-unit, likely 1000), `ySNLn` (regex/char for name spacing) —
  plaintexts not dumped; behavior described contractually above.
- Whether the sound-name capitalization splits on every word boundary or
  only the first — [uncertain]; the regex constant is unrecovered.
- Exact HUD card layout metrics beyond the 7.0 font / +10 padding are
  inside `ccU`/`jH` shell helpers — contract only.
- Whether `gk`-based cards render above or below other `lA` HUD modules is
  decided by the shared HUD orderer, not by da — [uncertain].