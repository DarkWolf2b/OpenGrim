# Recovered native GUI surfaces — `sixtwo.bd` settings panel (2026-10-21)

Target: `binaries/native/jna1.21.11` (image base `0x180000000`, runtime delta
`0x6ffe67c10000`), decrypted overlay
`analysis/ghidra/dumps/jna-decrypted-v2.dll` (constant pool + relocated
pointers).  Recovery tool: `analysis/tools/j2cc/{pe,j2cc_cfg,j2cc_lift}.py`.

All addresses below are **image** addresses.  Function bounds come from
`.pdata`, so they are exact.

## Recovered functions

| function | image range | blocks / insns | evidence |
|---|---|---|---|
| `bd.BO(lC,float,float,float)` | `0x18f15c990..0x18f15ceac` | 30 / 311 | `bd.BO.cfg.txt`, `bd.BO.pseudo.txt` |
| `bd.BR(lC,lf,float,float,float,mG)` | `0x18f122fd0..0x18f1237da` | 49 / 508 | `bd.BR.cfg.txt`, `bd.BR.pseudo.txt` |
| `bd.dn()` | `0x18f122150..0x18f122e86` | 87 / 893 | `bd.dn.cfg.txt`, `bd.dn.pseudo.txt` |
| `bd.bV(lC)` | `0x18f124290..0x18f146d4c` (142 KB) | 2880 / 33619 | `bd.bV.drawcalls.txt`, `bd.bV.linear.txt` |
| `bk.bV(lC)` | `0x18ef9aa70..0x18ef9b82c` | 94 / 889 | `bk.bV.keyblocks.txt` |
| `bk.dY()` | `0x18ef9a5e0..0x18ef9a9b9` | 28 / 259 | `bk.bV.keyblocks.txt` |
| `ah.bV(lC)` | Java (`sixtwo.ah`) | — | `ah.bV.javap.txt` |

`bd.bV` is huge because j2cc inlines the lazy class-key/hash setup
(`gb.aYR`-style ChaCha mixing at `0x18f1243xx..0x18f1272xx`) before the draw
code.  The draw section starts at `0x18f12726e` (first `sixtwo/bg` class
resolution) and is fully mapped in `bd.bV.drawcalls.txt`.

## bd.BO — close glyph (recovered exactly)

`BO(lC lC, float f1, float f2, float f3)`:

```
lC.ceo(lf.PqdjL,
       (f1 + f3 - 19.5f) + jf.bAH(8.0f, 12.0f),   // = f1+f3-17.5
       (f2 + 7.5f)      + jf.bAH(8.0f, 12.0f),    // = f2+9.5
       8.0f, 8.0f, 6.0f,
       mG.hoGuU)
```

* `jf.bAH(a,b) = (b-a)*0.5f` (payload `jf.java:753`) → both calls return `2.0f`.
* `lf.PqdjL` = the close/CROSS glyph (`lf` is a glyph enum, `bXR()` char).
* `lC.ceo` = draw cent*ered glyph in a box (sixtwo_22.java:761);
  `mG.hoGuU` = pure white (`mG.java:183`).
* bV calls it as `BO(lC, panelX, panelY, panelWidth)` (`0x18f13d2d9`), so the
  glyph lands at `(panelX + panelWidth - 17.5, panelY + 9.5)`, 8×8 box,
  font size 6.

## bd.BR — glyph button with tinted background (recovered; unused by bV)

```
BR(lC lC, lf glyph, float x, float y, float size, mG color):
    ld stroke = ld.all(2.0f);
    mG tint   = this.CtPwV.bjd().cob(0.3f);       // theme colour @ 30 %
    lC.cdg(x - 1, y - 1, size + 2, size + 2, stroke, tint);
    lC.cem(glyph, x, y, size, color);
```

* `lC.cdg` = rounded-rect fill with stroke (`lC.java:310`);
  `lC.cem` = centred glyph (`lC.java:368`).
* **No call site**: `bd`'s constant-pool class descriptor (`pool+0x701c`)
  lists `BO`, `ceX`, `BP` but not `BR`, and no `Call*MethodA` in `bV`
  resolves `BR`.  It is an unused helper in this build.

## bd.dn() — panel height (recovered exactly)

```
float h = 18.0f;
for (ak child : this.iWGks)
    h += child.oH() * child.dn();
return Math.min(200.0f, h + 51.0f);
```

* `0x18f122667` loads `18.0f`; `0x18f1229f0` does `oH*dn + h`;
  `0x18f122a79` computes `h + 51.0f` and `Math.min(200.f, …)`
  (`0x190dea2a0` disassembles to `minss xmm1, xmm2`).
* At rest `oH()==1` → `height = min(200, 69 + Σ dn())`.
  Cross-check: the reference screenshot's "Mace Swap" panel is 198 units tall
  for a 7-row module (69+7·18 = 195, plus the two header rows ⇒ capped 200).
* `bd.Cc()` returns `fNXMn`, `bd.Cd()` returns `LaFgq`
  (`0x18f147990`, `0x18f147ba0`); the open tween `t = min(x, rk.dhj())` is
  computed at `0x18f134316` and stored in `xmm6`
  (`movss xmm6,[rsp+0x50]` at `0x18f134365`).

## bd.bV — draw order and geometry

Order (image addresses of the call sites):

1. **Shadow** `lC.cej(x, y, w, h, 7.0f, ld.all(7.0f), alpha)`
   (`0x18f138ba8`).  Setup at `0x18f137831`: s58=x, s60=y, s68=w, s70=h,
   s78=7.0f, then `ld.all(7.0f)` → s80; alpha from a direct theme call at
   `0x18f138600`.
2. **Panel fill** `lC.cdm(x, y, w, h, 7.0f, ld.all(3t+4), colour)`
   (`0x18f13a1d2`).  Setup at `0x18f139c1b`: same rect, s78=7.0f,
   s80=`ld.all(3·t+4)` (`0x18f139c5f..0x18f139c7c`), s88=colour object.
   Colour = `themeA.cob(...).coc(themeB, t)` (mG.coc is a lerp, `mG.java:520`).
3. **Title #1** `ceI(gg.bad(), x+7+2t, y+8+2t, colour, 0.3, 1.0, a)`
   (`0x18f13c216`).  Font = `lE.WxpHL.bYM(7+2t)` (`0x18f13a415`/`0x18f13a576`),
   glyphs = `gg.bad()` (module name), colour = `ii.bjb()` — the same colour
   the row labels use (`ak.oF`) and the card descriptions in `bg.java:416`,
   i.e. the text colour (`Theme.text()`).
4. **Title #2** same glyph array/font/colour at `(x+9, y+10)`
   (`0x18f13d19d`).  At `t=1` both passes coincide; for `t<1` the first is
   offset by `2t-2` ⇒ a sliding drop-shadow pass, not a subtitle.
5. **Close glyph** `jF.bHz(1,1,1,t)` then `BO(lC, x, y, w)` (`0x18f13d1f3`,
   `0x18f13d41a`).  `jF.bHz` writes the global RGBA tint (`jF` is the tint
   stack, `jF.java`).  Glyph position from §BO.
6. **Children** (`0x18f13ee70..0x18f13fbb4`): iterate `bd.iWGks`; for each
   `ak`: `if (!row.oG()) continue; h = row.dn(); a = row.oH();
   row.sW(x, y); push clip; row.su(lC); pop; y += a*h`.
   Row label (plaintext `ak.oF`, sixtwo_35.java:159-167):
   `x = row.MCnYt+9`, `y = row.pNyTQ + jf.bAH(font.cat(),18)`,
   colour = theme colour with `0.75+0.25*hover`, `ceI(...,0.7,0.99,alpha)`.
7. **Scrollbar** (`0x18f1444d4`, `0x18f144ed4`): `bd.WmfRJ` (`ah`) gets
   `nQ(contentHeight)` and is rendered after the rows.  `ah` is pure Java
   (sixtwo_48.java): thumb height `max(24, h·h/content)`, y from
   `scroll/max·(h-thumb)`, wheel step `sZwZd = 20`.

Panel rect/position: `bg.CQ` (`sixtwo_52.java:488-544`) opens the panel at
`(window.x + window.w + 10, window.y)`; width `bd.BcpIo = 127`; height from
§bd.dn.


## bd.bk module row (image 0x18ef9aa70, 94 blocks / 889 insns)

`bk extends ak<cJ>`; the row is 18 units (`bk.dn()`, image `0x18efa30a0`).
`bk.bV` draws only the label and the right-hand icon; it has no background
fill of its own:

```
bk.bV(lC):
    tDliG.dhc(ti(lC));                       // hover tween; ti = az hit test
    this.oF(lC, BcpIo - 21.0f);              // inherited ak row label,
                                             // max width 106 (BcpIo = 127)
    lC.cel(lf.cuxpa,
           MCnYt + BcpIo - 16.0f,
           pNyTQ + 2.5f,                     // jf.bAH(7,12)
           7.0f);                            // white glyph (cel uses hoGuU)
```

* `ak.oF` (plaintext, sixtwo_35.java:159-167) puts the label at
  `(MCnYt+9, pNyTQ + jf.bAH(font.cat(),18))`, colour `ii.bjb().coa(255 *
  (0.75 + 0.25*tDliG.dhj()))` — i.e. the text colour brightened on hover.
* `lf.cuxpa` = **EDIT** pencil (`IconGlyph.EDIT`, parity id 59927), so the
  row is the module's "edit" row.  `bk.dk` constructs a `bh` popup —
  `bh.<init>(float,float,float,gg)` = 110×80, two `ab` toggles over
  `gg.bai()`/`gg.baj()` (the module's two flags) — and routes the mouse event
  to it (`HjHnW`, `Rt`).  That popup is out of this slice.
* **Label:** native glyph array `[75,101,121,98,105,110,100]` = **"Keybind"**
  (see the decoding section below).  The toggle row's label is
  **"Enabled"** (`[69,110,97,98,108,101,100]`).

## bd.bV panel fill colour (resolved)

`ii`/`ig`/`ie` give the palette mapping: `bio`=bhF white (text),
`bip`=bhG accent, `biq`=bhH (5,5,8) background, `bir`=bhI (8,10,20) panel,
`bis`=bhJ accent2.  `bd.bV` computes the fill as

```
bjd().cob(…).coc(bje(), 0.3f)   // [rsp+0x60] = 0.3f at 0x18f139585
```

i.e. **background lerped to panel at 0.3** (same formula the port already
used for the bl surfaces); `bjd` is also the card hover fill
(`bg.java:286`).  The port now uses
`theme.background().lerp(theme.panelColor(), 0.3f)` scaled by the open tween.

## bd scrollbar: `ah` is a controller, not a painted bar

`sixtwo.ah` is pure Java (no native handlers).  `javap -c` of its `bV`
(`ah.bV.javap.txt`, method body 0..133) computes only the thumb geometry —
`ratio = WjISQ/UUSmJ`, `thumb = max(24, WjISQ*ratio)`, `scrollRatio =
scroll/jHuGT` — and returns; **there is no `lC` call in the whole class**.
`bd.bV` only calls `WmfRJ.nQ(max)`, `nH()` and `nG()` on the scroll model, so
the original panel has **no visible scrollbar**.  Do not add one; wheel
scrolling remains.


## Native label glyph arrays (recovered 2026-10-21)

Decoded by running the classes' own int resolver in a JVM sandbox (Wine +
payload jar + native Loader, no Minecraft client):

`analysis/tools/decryptor/LabelDump.java` →
`analysis/artifacts/gui-native/labels-decrypt.txt`.

* `bd` ctor (`v`/`cJ` toggle row): class key `aAWpI = 96992212900949`,
  `l2 = key ^ 0x26D3D2F10863`.  `Co(20856, const^l2) = 7` (length);
  `Co` for the six explicit entries = `69,110,97,98,108,101` (`E n a b l e`);
  the indexed entry (`idx = 29404 → 6`, value `31284 → 100`) fills index 6:
  **`[69,110,97,98,108,101,100]` = "Enabled"**.
* `bk` ctor (`bk` module row): class key `KbsrP = 37233083650712`,
  `l2 = key ^ 0x113C1EBEC7C7`.  Length `21192 → 7`; six explicit entries =
  `75,101,121,98,105,110` (`K e y b i n`); indexed entry (`7453 → 6`,
  `12618 → 100`) fills index 6:
  **`[75,101,121,98,105,110,100]` = "Keybind"**.

The resolver accepts exactly `longArg = rawConst ^ classKey ^ seed`; all other
argument derivations throw `ArrayIndexOutOfBoundsException` (recorded in the
dump).  Both labels are 7 chars; no glyph-enum mapping is involved — `mr.clS`
takes Unicode codepoints.

## `bk.dk` -> `bh` keybind popup (spec only, not implemented)

`bk.dk` (`0x18ef9b8b0..0x18efa2fa4`, 529 blocks / 6940 insns) constructs
`bh.<init>(float x, float y, float z, gg module)` at the row position and
routes subsequent events to it (`HjHnW` field, `Rt(aj)`).  `bh` (`extends aj`)
is `110.0f × 80.0f` with `IzFhM = z`, holds two `ab` toggles built from
`gg.bai()` (`dktTQ`) and `gg.baj()` (`EDndy`), two `rk` values
(`bh.Du("s", 11925/26729)`), label/value strings via `bh.Dr("y",
16278/21931)` and `jb.byM(n2)`, and a `gc` header value from `gg.baf()`.  Its `bV`/`dk` are native
(`0x6ffff6bdcc10`, `0x6ffff6c06970`); the popup's paint and key capture are a
separate recovery job.  Not guessed/not ported.

## Row heights (`ak.dn()` handlers)

| widget | setting | dn() | handler |
|---|---|---|---|
| `v` | bool `cJ` | 18 | `0x1907f1c80` |
| `x` | `cz`/`cF`/`cK` | 18 | `0x1907d0d30` |
| `y` | `cD` | 18 | `0x1907c61b0` |
| `u` | `cx` | 18 | `0x19085c750` |
| `A` | `cG` | 18 | `0x19077b3e0` |
| `B` | `cH` | 18 | `0x19072ce40` |
| `w` | `cy` | 18 | `0x1907defa0` |
| `bk` | module row | 18 | `0x18efa30a0` |
| `o` | numeric `cC` | 28 | `0x190b26880` |
| `p` | `cA` | 28 | `0x190a6e120` |
| `D` | colour `cL` | 122 | `0x1906b6210` |
| `q` | `ct` | computed (`12·x`, `0.5·x+30`) | `0x190989670` |

## Implemented in the port

* `gui/screen/SettingsWindow.java` rewritten to the recovered spec:
  width 127, height `min(200, 69 + Σ dn)`, radius 7, title at
  `(x+7+2t, y+8+2t)` and `(x+9, y+10)` with size `7+2t`, close glyph at
  `(x+w-17.5, y+9.5)` 8×8/font 6, child order toggle → `bk` module row →
  settings, row stack at `y+18` with exact per-row heights, fill
  `background.lerp(panel, 0.3)` and no invented subtitle/dot/scrollbar.
  `ModuleRow` draws the recovered `bk` row ("Keybind", `x+9`, EDIT icon at
  `x+w-16, y+2.5`, size 7, hover `0.75+0.25·t`); the toggle row uses the
  recovered "Enabled" label.
* `gui/ui/ModuleWidgetFactory.java`: recovered row heights 18/28/122 and a
  list-based `populateRows` used by the panel.
* `ToggleWidget` label inset `+9.0f` (ak.oF).

## Gaps (genuinely not recovered)

1. **`bk.dk` popup** — `bh` 110×80 keybind editor (two `ab` toggles,
   native `bV`/`dk`); spec only, not ported.
2. **Title font family** — `lE.WxpHL` is one of five `lj` families
   (`joxgd/WTzbi/SVnNc/ePKsc/WxpHL`); the DES literals of `lE` were not
   decrypted in this pass.  Port uses `MsdfFont.SEMIBOLD`.
3. **Labels** — recovered: "Enabled" (`v`) and "Keybind" (`bk`); see the
   decoded arrays above.
4. **Scrollbar paint** — none exists in the original (`ah.bV` has no `lC`
   call; see the section above).  Documented, not a gap.
5. **Shadow pipeline** — `cej`/`cek` use `kd.sQVlR` + `bPb` (shadow
   pipeline).  The port approximates it with one `strokeRounded`
   (renderer pipeline owned elsewhere).
6. **`bd` input natives** (`dk/dl/dm/dB/fC/eK`) are not recovered; the port's
   hit boxes follow the recovered rects (close glyph 20×20, rows, header).
7. **Row open animation** — the original advances each row by
   `oH()·dn()` (`0x18f13fb70`); the port lays rows out at full `dn()` height
   (the rest state) and does not animate the per-row slide.
8. **Stroke widths** — `cej`/`cdm` pass `ld.all(7)` / `ld.all(3t+4)`; the
   port's `GuiDraw` surface has no stroke-width parameter (renderer-owned), so
   both are drawn as 1 px outline/stroke.
