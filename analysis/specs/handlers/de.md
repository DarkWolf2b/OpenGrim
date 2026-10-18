# Hand Chams (sixtwo.de) — handler-derived behavior spec

Class: `sixtwo/de` · display name **Hand Chams** (module id 132).
Superclass `gg`. **API-provider module**: de itself declares **zero native
methods**, but the effect implementations it calls — `ki.bPi/bPr/bPs/bPt/bPu`
and `ro.diF` — are **native** (documented as API contract only). No image
addresses (0x18xxxxxxx) exist for de's own methods. Evidence cites are
decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/de.java` (1713 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/de.java` — fully decompiled;
   the ~50-setting tree and the dispatch handlers are readable.
2. `analysis/specs/modules/de.md` structural spec.
3. Yarn mappings: `GameRenderer.renderItemInHand` (via accessor), Matrix4f
   peek.
4. Helpers: `ct/cu` group tree, `cG` color, `cC` numeric, `cA` slider, `kj`
   native facade class (`bPr` glass / `bPs` water / `bPt` chrome / `bPu`
   liquid metal), `ki.bPi` online-effect entry, `ro.diF(preset index, 17
   params)` preset applier, `go.sY` post-world render event
   (`bbi()` tickDelta, `bbh()` MatrixStack peek).

## Runtime model

- Public entry used by the shell first-person hand renderer:
  **`acs(float, boolean, Matrix4f)`** — if Effect == Outline (corrected 2026-10-17, batch 23; was "Online")
  (`GAQfN.SZ()`) → `act(...)` → `ki.bPi(runnable = acv, effect params...)`;
  else → `acu` → per-sub-effect `kj.bPr` (glass) / `bPs` (water) / `bPt`
  (chrome) / `bPu` (liquid metal, **17 args**).
- **`acv`** — the render payload handed to the native pass:
  `GameRendererAccessor.callRenderItemInHand(tickDelta, boolean, matrix)` +
  flush of the immediate vertex consumers (the hand is re-rendered inside
  the effect's shader pass).
- **`acr()`** — gate: `bab()` && first-person (camera check).
- **`acq(go.sY)`** `@hG` [de.java constructor-registered]: if `acr()` &&
  Outline → `act(sY.bbi() /* tickDelta */, false,
  sY.bbh().peek().getPositionMatrix())`.
- **`YO()`** — unregister; no per-class state.
- Getters (`acX` and siblings) expose every setting to the shell — the shell
  reads parameters per frame; de holds no render state.

## Per-handler semantics

- `acs(f, bool, Matrix4f)` — dispatch (contract above).
- `act/acu` — argument marshalling into the native facades; all arithmetic
  (shader parameters) lives behind the native calls; de itself performs **no
  float math** on the parameters beyond getter reads.
- Preset callback: **`acw`** wired via `Ve(this::acw)` on the liquid-metal
  Preset group → `ro.diF(preset index, all 17 params)` — writing preset
  values into the 17 liquid-metal sliders.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines ~48–360; largest tree in this batch — representative rows, all values
verbatim):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Effect" (`ct RgAHq`) | group | Outline (`GAQfN`, default `.SY()`; corrected 2026-10-17, batch 23 — decrypted pool slots 6625/32573/11169/31475/23135/552/2481; was "Online"), Glass (`ALxVB`), Water (`ydMpG`), Chrome (`DwUUB`), Liquid Metal (`iFVsF`) | Outline | [de.java:48+] |
| "Color" (`cG fSbyu`) | color | — | theme accent (151,71,255) — corrected 2026-10-17, batch 23 (was "white") | [de.java:50] |
| "Color Mode" (`ct zRrqK`) | group | Zero, One, Two, Three | Zero | [de.java:51] |
| "Second Color" | color | — | theme accent (151,71,255) — corrected 2026-10-17, batch 23 (was "white"); visible when Mode ∈ {Two, Three} | [de.java] |
| "Animation Speed" | `cC` | step **0.1**, min **0.0**, max **3.0** | **1.5** | [de.java] |
| "Glow Quality" | `cC` | step **1**, min **1**, max **4** | **2** | [de.java] |
| "Glow Radius" | `cC` | step **0.1**, min **1**, max **16** | **4.3** | [de.java] |
| "Glow Alpha Multiplier" | `cC` | step **0.1**, min **0**, max **4** | **1** | [de.java] |
| "Fill Alpha Multiplier" | `cC` | step **0.01**, min **0**, max **1** | **0.3** | [de.java] |
| "Saturation" | `cC` | step **0.1**, min **0**, max **5** | **0.7** | [de.java] |
| "Brightness" | `cC` | step **0.1**, min **0**, max **50** | **2** (Mode==One only) | [de.java] |
| Glass group | 9 settings | Reflection **0–100/50**, Depth **1–100/20**, Frost **0–100/0**, Dispersion **0–100/0**, Tint Color (transparent `cnR(0,0,0,0)`), Light Angle step **1**, −180–180 def **−45** suffix **" deg"**, Light Intensity **0–100/40**, Bevel Color (255,255,255,204), Splay **0–100/30** | | [de.java] |
| Water group | 8 settings | Water Color (25,76,178,255), Flow Speed step **0.1**, 0.1–5 def **1**, Flow Scale step **0.5**, 1–10 def **3**, Wave Height step **0.05**, 0.1–1.5 def **0.5**, Choppiness step **0.5**, 1–8 def **3**, Wave Freq step **0.01**, 0.05–1 def **0.24**, Water Reflection **0–100/30**, Water Specular step **0.1**, 0–2 def **0.6** | | [de.java] |
| Chrome group | 4 settings | Chrome Tint (216,216,230,255), Rim Sharpness step **0.5**, 1–10 def **3**, Rim Intensity step **0.1**, 0–3 def **2**, Chrome Speed step **0.1**, 0.1–5 def **1** | | [de.java] |
| Liquid Metal group | 17 sliders + Preset | Preset ct (Default `.SY()`, Neon, Chrome, Ocean, Toxic, Fire) with `Ve(this::acw)`; Scale step **0.1**, 0.5–20 def **1.02**; Noise Freq X **0.1–20/1.7**, Y **/7.9**, X2 **/5.8**, Y2 **/4.5**; Warp Intensity X step **0.05**, −5–5 def **0.62**, Y def **1.0**; Color One (179,179,179,255), Two (32,32,32,255), Three (37,37,37,255), Four (49,49,49,255); Brightness step **0.1**, 0.1–10 def **1**; Speed step **0.1**, 0–5 def **0**; Red Shift step **0.05**, −3–3 def **0**; Blue Shift def **0**; Contour step **0.05**, 0–2 def **0**; Softness step **0.05**, 0.1–4 def **1** | | [de.java] |

## Unrecovered

- The native shader parameter mapping behind `ki.bPi` and `kj.bPr/bPs/bPt/
  bPu` — entirely virtualized; only the argument shapes (17 liquid-metal
  params, glass/water/chrome groups) are contract.
- `ro.diF`'s per-preset value tables (what each of Default/Neon/Chrome/Ocean/
  Toxic/Fire writes into the 17 sliders) — native; open.
- One DES suffix string (`OTglH`, " deg" family) plaintext not dumped.
- Whether Outline mode (`GAQfN`, corrected 2026-10-17, batch 23; was "Online") equals the Glass pipeline with online
  uniform sync or a separate effect — [uncertain]; both collapse into
  `ki.bPi`.