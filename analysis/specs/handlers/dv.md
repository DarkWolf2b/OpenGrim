# Chams (sixtwo.dv) — handler-derived behavior spec

Class `sixtwo.dv` extends `sixtwo.gg`. Registry: module id **101**, category `gh.nOCvV` (decrypted constructor `super(gf.aZL((int)101, false, gh.nOCvV))`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dv.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv`); no `native` methods; no image addresses to cite. |
| `analysis/decompiled/payload-decrypted/sixtwo/dv.java` | **PRIMARY** (1408 lines; constructor with the full 46-setting shader tree + all three `@hG` handlers readable). |
| Helpers (one line each) | `kj.bPr/bPs/bPt/bPu(Runnable, ...)` — **native** shader-uniform launchers (Glass/Water/Chrome/Liquid-Metal passes) taking live floats and `float[]` colors (`mG.Wf().con()` = color as float array); `ro.diF(int presetIdx, cC...)` — **native** preset applier that writes values into the Liquid-Metal settings group; `kn.bQt(entity, delta, stack)` → `new ko(entity, delta, stack)` — wraps an entity into an `lI` render command; `lH` render-command queue (`cgm(lI)` add, `cgp()` flush); `kn.YNOIY` shared static boolean — true during the module's replacement-model batch (set here and by `dl` Outlines, read by `dt`-style nameplate suppressors); `jJ.bIB(entity)` frustum visibility; `gp` event family — living-entity model render mixin `(MatrixStack, EntityModel<?>, LivingEntity, float, int passId, CallbackInfo)`, `.bbl()` entity, `.bbn()` pass id, `.bbo().cancel()` cancels the model draw. |

## Runtime model

- Three events: `aiI(go.sX)` world render — collect matching entities and drive one of four **shader passes** over a re-render of their models; `aiJ(gp.sZ)` per-model render — cancel the original model ("Hide Original") so only the shader pass shows; `aiK(gi)` nameplate render — suppress vanilla nametags while `kn.YNOIY` is set.
- The actual GPU work is entirely in native `kj.*` launchers; the handler supplies a `Runnable` that rebuilds each entity's model via `kn.bQt` into an `lH` queue and executes it under the shader program.
- Entity collection: frustum-visible (`jJ.bIB`) ∧ in "Entities" set (`jWIlg.VX`) ∧ not the client player — unless "Apply To Own Player" (`ZXujq`) is on **and** the perspective is **not** first person (bytecode: self is added only when the second check `entity == player && isFirstPerson()` does not hit).
- Panic switch `dh.afl()` non-null empties/breaks the collection loop (nothing rendered).
- `kn.YNOIY` is set `true` around the replacement-model Runnable and restored in its `finally` — this is the same flag `dl` (Outlines) sets, and `aiK` uses it to hide nameplates over re-rendered models.

## Per-handler semantics

### `@hG aiI(go.sX)` — world render / shader dispatch (`dv.java:938-1173`)
1. Guard `bab()`.
2. `stack = sX2.bbh()`, `delta = sX2.bbi()`; collect `ArrayList<Entity>` per the runtime-model rules above; empty → return.
3. Build `Runnable pass = () -> { kn.YNOIY = true; try { lH q = new lH(); for (entity : list) q.cgm(kn.bQt(entity, delta, stack)); q.cgp(); } finally { kn.YNOIY = false; } }` — captures `delta`/`stack` from the frame.
4. Dispatch on the "Effect" mode:
   - `XdqBo.SZ()` ("Glass", default) → `kj.bPr(pass, zXfLC.VB(), ASroa.VB(), ClbaS.VB(), uMtSN.VB(), EzLNk.Wf().con(), xnzNS.VB(), iEdAT.VB(), AXVpM.Wf().con(), UDqup.VB())` — Refraction, Depth, Frost, Dispersion, Tint Color (float[]), Light Angle, Light Intensity, Bevel Color (float[]), Splay.
   - `zysSC.SZ()` ("Water") → `kj.bPs(pass, OYjhT.Wf().con(), ZTvWj.VB(), tPrjL.VB(), cyXLZ.VB(), JGyvQ.VB(), EADmc.VB(), NBZEF.VB(), GJXHL.VB())` — Water Color (float[]), Flow Speed, Flow Scale, Water Refraction, Water Specular, Wave Height, Choppiness, Wave Freq.
   - `SpKOT.SZ()` ("Chrome") → `kj.bPt(pass, otjWl.Wf().con(), FXkgM.VB(), FQkGY.VB(), EFJph.VB())` — Chrome Tint (float[]), Chrome Rim Sharpness, Chrome Rim Intensity, Chrome Speed.
   - `ezBRY.SZ()` ("Liquid Metal") → `kj.bPu(pass, FlNtk.VB(), rTzGW.VB(), MvQMm.VB(), yzDhD.VB(), XpTXH.VB(), kOSLY.VB(), wrOWy.VB(), EIoNG.Wf().con(), OrbAE.Wf().con(), EMRGt.Wf().con(), YNhsQ.Wf().con(), YsidR.VB(), MzFuh.VB(), KhwEu.VB(), wrqKr.VB(), rnTiy.VB(), lVRRm.VB())` — Scale, Noise Freq X/Y/X2/Y2, Warp Intensity X/Y, Color One–Four (float[] each), Brightness, Speed, Red Shift, Blue Shift, Contour, Softness.
   (argument order above follows the `kj` native signatures `bPr(Runnable, f,f,f,f, float[],f,f, float[],f)` etc. — verified against `kj.java:319-372`.)

### `@hG aiJ(gp.sZ)` — hide original model (`dv.java:1266-1362`)
Cancel gate, evaluated in order (CFR-recovered chain):
1. Cancel iff `NPcDw.WF()` ("Hide Original") **and not** `kn.YNOIY` (batch flag) **and** `bab()` — polarity corrected 2026-10-17 (batch 22) against the bytecode; the earlier OR reading was inverted. The original model is suppressed only while "Hide Original" is on, no shader batch is active, and the module gate passes.
2. `entity = sZ2.bbl()`; bail unless `entity != null && jWIlg.VX(entity)` (in "Entities" set).
3. Self handling: when the entity is the client player — a pass-id comparison `sZ2.bbn() != <unrecovered int constant>` (via `dv.aiS` DES call-site) gates one branch, and the model is hidden only if `ZXujq.WF()` ("Apply To Own Player").
4. Final gate: **never** hide when `entity == clientPlayer && options.getPerspective().isFirstPerson()` (mirrors `aiI`'s self rule).
5. `sZ2.bbo().cancel()`.

### `@hG aiK(gi)` — nameplate suppression (`dv.java:1175-1190`)
`if (kn.YNOIY) gi2.bdX(true);` — cancels the vanilla nameplate for any entity whose model is currently being re-rendered inside the Chams (or Outlines) batch. No other conditions.

### `aiL()` — preset change callback (not an event; bound `yZFow.Ve(this::aiL)`)
`ro.diF(yZFow.ST(), FlNtk, rTzGW, MvQMm, yzDhD, XpTXH, kOSLY, wrOWy, EIoNG, OrbAE, EMRGt, YNhsQ, YsidR, MzFuh, KhwEu, wrqKr, rnTiy, lVRRm)` — native; writes the selected Preset's values into the 18 Liquid-Metal settings (native call, so the preset value tables are unrecovered).

## Settings→behavior (exact — decrypted constructor, names re-folded verbatim from char arrays)

| Field | Class | Name | Value |
|---|---|---|---|
| `jWIlg` | `cF` entity set | `"Entities"` (69,110,116,105,116,105,101,115) | `.VS(jg$tJ.OCdZM)` preset binding; **no `.VT(...)` seed** — empty set by default |
| `NPcDw` | `cJ` toggle | `"Hide Original"` (72,105,100,101,32,79,114,105,103,105,110,97,108) | `.WE(true)` |
| `ZXujq` | `cJ` toggle | `"Apply To Own Player"` (65,112,112,108,121,32,84,111,32,79,119,110,32,80,108,97,121,101,114) | `.WE(false)` |
| `cdTwb` | `ct` mode | `"Effect"` (69,102,102,101,99,116) | no `.SO()`; default selected via `XdqBo.SY()` = Glass |
| `XdqBo` | `cu` option | `"Glass"` (71,108,97,115,115) | `.SY()` — default |
| `zysSC` | `cu` | `"Water"` (87,97,116,101,114) | — |
| `SpKOT` | `cu` | `"Chrome"` (67,104,114,111,109,101) | — |
| `ezBRY` | `cu` | `"Liquid Metal"` | — |
| `zXfLC` | `cC` | `"Refraction"` | `.Vy(1.0).Vw(0.0).Vx(100.0).VA(50.0)` |
| `ASroa` | `cC` | `"Depth"` (68,101,112,116,104) | `.Vy(1.0).Vw(1.0).Vx(100.0).VA(20.0)` |
| `ClbaS` | `cC` | `"Frost"` (70,114,111,115,116) | `.Vy(1.0).Vw(0.0).Vx(100.0).VA(0.0)` |
| `uMtSN` | `cC` | `"Dispersion"` | `.Vy(1.0).Vw(0.0).Vx(100.0).VA(0.0)` |
| `EzLNk` | `cG` | `"Tint Color"` | `.Uf(mG.cnR(0.0f, 0.0f, 0.0f, 0.0f))` — fully transparent |
| `xnzNS` | `cC` | `"Light Angle"` | `.Vy(1.0).Vw(-180.0).Vx(180.0).VA(-45.0).Vz(CRjla)` — `CRjla` = **`" deg"`** (recovered 2026-10-17, batch 22 — not the degree symbol) |
| `iEdAT` | `cC` | `"Light Intensity"` | `.Vy(1.0).Vw(0.0).Vx(100.0).VA(40.0)` |
| `AXVpM` | `cG` | `"Bevel Color"` | `.Uf(mG.cnR(255.0f, 255.0f, 255.0f, 204.0f))` |
| `UDqup` | `cC` | `"Splay"` (83,112,108,97,121) | `.Vy(1.0).Vw(0.0).Vx(100.0).VA(30.0)` |
| `OYjhT` | `cG` | `"Water Color"` | `.Uf(mG.cnR(25.0f, 76.0f, 178.0f, 255.0f))` |
| `ZTvWj` | `cC` | `"Flow Speed"` | `.Vy(0.1).Vw(0.1).Vx(5.0).VA(1.0)` |
| `tPrjL` | `cC` | `"Flow Scale"` | `.Vy(0.5).Vw(1.0).Vx(10.0).VA(3.0)` |
| `EADmc` | `cC` | `"Wave Height"` | `.Vy(0.05).Vw(0.1).Vx(1.5).VA(0.5)` |
| `NBZEF` | `cC` | `"Choppiness"` | `.Vy(0.5).Vw(1.0).Vx(8.0).VA(3.0)` |
| `GJXHL` | `cC` | `"Wave Freq"` | `.Vy(0.01).Vw(0.05).Vx(1.0).VA(0.24)` |
| `cyXLZ` | `cC` | `"Water Refraction"` | `.Vy(1.0).Vw(0.0).Vx(100.0).VA(30.0)` |
| `JGyvQ` | `cC` | `"Water Specular"` | `.Vy(0.1).Vw(0.0).Vx(2.0).VA(0.6)` |
| `otjWl` | `cG` | `"Chrome Tint"` | `.Uf(mG.cnR(216.0f, 216.0f, 230.0f, 255.0f))` |
| `FXkgM` | `cC` | `"Chrome Rim Sharpness"` | `.Vy(0.5).Vw(1.0).Vx(10.0).VA(3.0)` |
| `FQkGY` | `cC` | `"Chrome Rim Intensity"` | `.Vy(0.1).Vw(0.0).Vx(3.0).VA(2.0)` |
| `EFJph` | `cC` | `"Chrome Speed"` | `.Vy(0.1).Vw(0.1).Vx(5.0).VA(1.0)` |
| `yZFow` | `ct` mode | `"Preset"` (80,114,101,115,101,116) | visible only under Liquid Metal; default via `XOcqL.SY()` = Default |
| `XOcqL`/`ixTDC`/`UMvcY`/`LcpZq`/`EMNhW`/`xuMLa` | `cu` ×6 | `"Default"` / `"Neon"` (78,101,111,110) / `"Chrome"` / `"Ocean"` (79,99,101,97,110) / `"Toxic"` (84,111,120,105,99) / `"Fire"` (70,105,114,101) | `XOcqL.SY()` — Default selected |
| `FlNtk` | `cC` | `"Scale"` (83,99,97,108,101) | `.Vy(0.1).Vw(0.5).Vx(20.0).VA(1.02)` |
| `rTzGW` | `cC` | `"Noise Freq X"` | `.Vy(0.1).Vw(0.1).Vx(20.0).VA(1.7)` |
| `MvQMm` | `cC` | `"Noise Freq Y"` | `.Vy(0.1).Vw(0.1).Vx(20.0).VA(7.9)` |
| `yzDhD` | `cC` | `"Noise Freq X2"` | `.Vy(0.1).Vw(0.1).Vx(20.0).VA(5.8)` |
| `XpTXH` | `cC` | `"Noise Freq Y2"` | `.Vy(0.1).Vw(0.1).Vx(20.0).VA(4.5)` |
| `kOSLY` | `cC` | `"Warp Intensity X"` | `.Vy(0.05).Vw(-5.0).Vx(5.0).VA(0.62)` |
| `wrOWy` | `cC` | `"Warp Intensity Y"` | `.Vy(0.05).Vw(-5.0).Vx(5.0).VA(1.0)` |
| `EIoNG` | `cG` | `"Color One"` | `.Uf(mG.cnR(179.0f, 179.0f, 179.0f, 255.0f))` |
| `OrbAE` | `cG` | `"Color Two"` | `.Uf(mG.cnR(32.0f, 32.0f, 32.0f, 255.0f))` |
| `EMRGt` | `cG` | `"Color Three"` | `.Uf(mG.cnR(37.0f, 37.0f, 37.0f, 255.0f))` |
| `YNhsQ` | `cG` | `"Color Four"` | `.Uf(mG.cnR(49.0f, 49.0f, 49.0f, 255.0f))` |
| `YsidR` | `cC` | `"Brightness"` | `.Vy(0.1).Vw(0.1).Vx(10.0).VA(1.0)` |
| `MzFuh` | `cC` | `"Speed"` (83,112,101,101,100) | `.Vy(0.1).Vw(0.0).Vx(5.0).VA(0.0)` |
| `KhwEu` | `cC` | `"Red Shift"` | `.Vy(0.05).Vw(-3.0).Vx(3.0).VA(0.0)` |
| `wrqKr` | `cC` | `"Blue Shift"` | `.Vy(0.05).Vw(-3.0).Vx(3.0).VA(0.0)` |
| `rnTiy` | `cC` | `"Contour"` (67,111,110,116,111,117,114) | `.Vy(0.05).Vw(0.0).Vx(2.0).VA(0.0)` |
| `lVRRm` | `cC` | `"Softness"` (83,111,102,116,110,101,115,115) | `.Vy(0.05).Vw(0.1).Vx(4.0).VA(1.0)` |

Visibility wiring (recovered `.Vf(...)` chains): the 9 Glass settings bound to `XdqBo::SZ`; the 8 Water settings to `zysSC::SZ`; the 4 Chrome settings to `SpKOT::SZ`; the 18 Liquid-Metal settings to `ezBRY::SZ`; `uxHfK`-style cross-bindings: none. Registry keybind: **101**.

## Unrecovered

- The four native shader programs behind `kj.bPr/bPs/bPt/bPu` (uniform semantics, render passes, framebuffer targets) — `kj` is native-decrypted; only the argument order is known.
- `ro.diF` preset value tables for Default/Neon/Chrome/Ocean/Toxic/Fire — native; the numbers written into the 18 Liquid-Metal settings cannot be folded.
- `dv.aiS("z", 13256, 0x894106291CC4F1FL)` — the render-pass id compared against `gp.sZ.bbn()` in `aiJ`'s self branch (DES int call-site; likely a first-person-hand pass ordinal). The `bbn()` int's meaning (pass id vs. packed enum) is likewise unresolved — `gp` stores it as a raw int.
- `CRjla` — "Light Angle" suffix string = **`" deg"`** (recovered 2026-10-17, batch 22; the earlier `"°"` presumption was wrong).
- `mG.cnR/cnP(...).coh()/con()` packing details and `mG.Wf().con()` float-array layout — helper-internal.
- `jg$tJ.OCdZM` preset constant for the empty "Entities" set.
- The `gp` mixin's injection point (which `EntityModel.render` overload / which living-entity renderer method) — `gp` is a payload event fed by a bootstrap mixin outside the payload classes; only its parameter list is recoverable here.