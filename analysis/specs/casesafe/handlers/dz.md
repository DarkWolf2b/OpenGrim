# dz — Target ESP (module id 83)

## Evidence base

- No native handler corpus exists for `dz`: `analysis/specs/coverage-matrix.tsv` lists 0 natives
  declared / 0 bound, there is no `analysis/ghidra/handlers-stitched/sixtwo_dz.c`, and the class
  declares no `native` methods. Image-address citations `[18xxxxxxx]` are therefore unavailable by
  construction; all line citations below refer to the CFR-decompiled sources.
- Primary evidence: `analysis/decompiled/payload-decrypted/sixtwo/dz.java` (post-DESD fold; string
  and numeric literal tables partially resolved, DES-encrypted call sites left as
  `dz.ajS("u", id, key)` / `dz.ajP("z", id, key)` stubs) and
  `analysis/decompiled/payload-named/sixtwo/dz.java` (pre-decryption).
- `ajB(go.sX)` (the world-render handler) failed CFR structuring
  (`ConfusedCFRException ... top level block is 9[SWITCH]`, payload-decrypted line 630–650); it was
  recovered from bytecode via `javap -c` on `analysis/jars/payload-raw/sixtwo/dz.class`
  (dump retained at `/tmp/dz_javap.txt`, method `ajB` at lines 2203–2314).
- Registration metadata: `super(gf.aZL((int)83, false, gh.nOCvV))` (line 105); the identifier string
  `"Target ESP|key=83"` is recovered in the named variant. Implements `lG` (render-listener marker).
- Module config / settings-class contracts (`cC`, `cJ`, `ct`, `cu`, `cG`), the `gg` module base,
  `rk`/`rh`/`rj` animators, `kM`/`kK` batchers, `kS` render states, `kG`/`kE`/`jI`/`jk`/`mG`/`ob`
  draw helpers are summarized under Helper contracts (one line each) and match the contracts
  documented in `analysis/specs/handlers/d*.md` for the sibling render modules.

## Runtime model

`dz` draws animated billboard effects around a single currently-targeted entity. It is not a
per-entity overlay: exactly one target is resolved per frame, and one of four particle styles is
rendered around that entity in world space.

- Module lifecycle: `gg` base (`bab()` gate = module enabled ∧ client player ∧ client world;
  `bag()` = enabled flag; `YO()` = disable callback). Event wiring:
  - `@hG public void ajA(gM)` — **world-disconnect hook** (corrected 2026-10-17, batch 22:
    `gM` = `ClientWorld.disconnect`, bootstrap mixin `method_8525` — not an end-of-tick hook;
    line 368).
  - `@hG public void ajB(go.sX)` — world render hook (CFR-failed, javap-recovered). Draws via
    `go.sX.bbh()` MatrixStack and `bbi()` partial-tick; actual draw calls are emitted through the
    shared static batchers inherited from the module base (`dz.XSRvt` of type `kM`,
    `AswNN` of type `kK`) — the billboard geometry ultimately lives in the Java shell classes,
    out of scope here.
- Target state (two fields):
  - `hGhYF` — this frame's candidate `LivingEntity`, recomputed every render frame.
  - `Eupjj` — latched last-known target. `ajB` copies `Eupjj = hGhYF` only when the candidate is
    non-null (javap block), so `Eupjj` stays pinned to the previous target while it fades out; all
    four draw modes render around `Eupjj`, never `hGhYF` directly.
- Animators:
  - `IffVm = rk(300).dhs(rj.kcXTJ)` — target fade animator, 300 ms, easing constant `rj.kcXTJ`
    (formula unrecovered). `ajB` drives `IffVm.dhc(hGhYF != null)`; the draw modes early-return
    while `IffVm.dhj() == 0.0f`. Exception: Mode=Circle sets `IffVm.dhq(700)` (700 ms) instead of
    300 (line 399–401); the other three modes re-issue `dhq(300)`/`dhs(rj.kcXTJ)` every frame.
  - `ckqFG = rk(100).dhs(rj.UPXqT)` — hurt-flash animator, 100 ms, easing `rj.UPXqT` (unrecovered).
  - `tYcox = rh()` — rotation-angle accumulator; read with `dfH()`, advanced+wrapped with
    `dfF(newValue, cap)` (wrap semantics of the cap argument unrecovered).
- Mode switch callback: `rPpMG.Vd(() -> ...)` (line 190–211) resets `IffVm.dhg()` when the mode
  changes while a candidate target exists (`hGhYF != null`), or unconditionally under the panic
  probe `dh.afl() != null` — i.e. switching style restarts the fade-in.
- Target resolution order (see `ajC`/`ajD` below): combat Target module → secondary targeting
  module → optional vanilla crosshair entity fallback.

## Per-handler semantics

Every declared handler and private method, in declaration/bytecode order:

- `ajI()` [payload-decrypted 340–365] — hurt-flash sampling: `ckqFG.dhc(this.Eupjj.hurtTime > 0)`
  (LivingEntity.hurtTime, yarn `field_6235`) then `return ckqFG.dhj()`. Each draw mode calls this
  once per frame; the hurt animator runs only while the target shows a vanilla hurt tick.
- `@hG ajA(gM)` [368–371] — world-disconnect handler (corrected 2026-10-17, batch 22: `gM` = `ClientWorld.disconnect`; not end-of-tick): `IffVm.dhg(); Eupjj = null;`. Note `ckqFG` is NOT
  reset here; the tick handler does not sample targeting at all — targeting happens purely in the
  render frame.
- `ajE(MatrixStack, float)` [386–549] — Mode 0 "Circle" render. Full semantics under
  Settings→behavior / Mode geometry below.
- `ajJ(int cap, float hurt)` [552–565] — angle advance shared by all modes:
  `adv = (10.0f + Speed.VB()) * (HurtAnimation.WF() ? 1.0f + 0.5f * hurt : 1.0f)`, then
  `tYcox.dfF(tYcox.dfH() + adv, cap)`. The cap argument is a per-mode DES-encrypted int
  (Circle/Crystals share one value, Soul and Ghosts have their own; all unrecovered).
- `ajD()` [568–621] — crosshair fallback: `if (!zfESg.WF()) return;` then reads
  `rD.dlmvG.targetedEntity` (yarn `field_1692`, MinecraftClient.targetedEntity) and assigns it to
  `hGhYF` only if `hGhYF == null`, it is non-null, and it `instanceof LivingEntity`.
- `@hG ajB(go.sX)` [CFR-failed 628–650; javap 2203–2314] — world render handler:
  1. gate on `bab()`; pull MatrixStack and partial-tick delta;
  2. `hGhYF = null; ajC(); ajD(); if (hGhYF != null) Eupjj = hGhYF;`
  3. if `Eupjj != null`, `switch (rPpMG.ST())`: case 0 → `ajE`, 1 → `ajF`, 2 → `ajG`, 3 → `ajH`
     (same MatrixStack + delta passed through).
- `ajF(MatrixStack, float)` [654–846] — Mode 1 "Soul" render (below).
- `ajG(MatrixStack, float)` [850–1010] — Mode 2 "Ghosts" render (below).
- `ajH(MatrixStack, float)` [1028–1206] — Mode 3 "Crystals" render (below).
- `ajC()` [1314–1381] — primary target resolution, strictly ordered:
  1. `fr fr2 = rD.dlJ().aZx(fr.class)` — the combat Target module (id 5). If `fr2.bag()`
     (module enabled) and `fr2.aOQ() != null` (its cached target LivingEntity), assign to
     `hGhYF` and return. `fr.aOQ()` internals live in the `fr` native class — out of scope.
  2. else `eP eP3 = (eP) rD.dlJ().aZx(eP.class)` — module id 120, registration constant
     `gh.xwjCw`. If `eP3.bag()` and `eP3.aBS() != null`, assign to `hGhYF`. `eP.aBS()` is a
     native-virtualized accessor — internals unrecovered.
- `YO()` override [1386–1390] — `super.YO(); IffVm.dhg(); Eupjj = null;` (disable also clears the
  latched target and fade).
- Static plumbing (`ajM`, `ajN`, `ajO`, `ajQ`, `ajR`, `ajS`, `ajP`, `ajL`, `cfr_ldc_0/1`,
  static initializer) — string/integer DES literal-decryption machinery only; no behavior.
- Shared helper contracts (one line each):
  `rk` — ms fade animator (`dhq(int)` duration, `dhc(bool)` active, `dhj()` 0..1, `dhg()` reset,
  `dhs(rj)` easing); `rh` — wrap-around angle accumulator (`dfH()` get, `dfF(v, cap)` advance);
  `kG.bTv(stack,x,y,z,w,h).dtF(mG).dtG()` — world-space quad emitter; `kE.bTf(stack,x,y,z,size)`
  `.dti(mG).dtj()` — billboard particle; `jI.bIs/bIu/bIq` — MatrixStack billboard orientation
  helpers; `jk.bDn(int, mG, int)` — per-index color variation; `mG.coc(mG,t)` color mix,
  `cob(f)` alpha/value scale; `ob.cBv(String)` — texture fetch; `kM`/`kK` — texture/geometry
  batchers (`startBatch`, `bUH`, `bUp`, `endBatch`, `defaultState()`); `kS` — render-state builder
  (`bVE()`, `duk(tex)`, `duo/dul/dun` boolean flags, `dup()`); `dh.afl()` — panic probe.

## Settings→behavior

All names verbatim from the decrypted constructor (payload-decrypted lines 105–189); values are the
folded literals, cited exactly.

| Field | Class | Name | Config (exact) | Effect |
|---|---|---|---|---|
| `zblzB` | `cG` | `Color` | `.Uf(rD.dlM().bjG().bis())` — default = client theme color | Base color of every particle; fed to `jk.bDn` variation and hurt mix |
| `rPpMG` | `ct` | `Mode` | no `.SO(...)` → default index 0 | Selects draw mode 0–3 (see below). Change callback resets the fade animator |
| `daQhQ` | `cu` | `Circle` | option index 0 | `ajE` |
| `elvSh` | `cu` | `Soul` | option index 1 | `ajF` |
| `VIkzT` | `cu` | `Ghosts` | option index 2 | `ajG` |
| `APstA` | `cu` | `Crystals` | option index 3 | `ajH` |
| `cYGLG` | `cC` | `Speed` | `.Vy(1.0).Vw(1.0).Vx(20.0).VA(10.0)` (step 1.0, min 1.0, max 20.0, default 10.0) | Rotation advance is `10.0f + Speed` deg/frame (ajJ); Ghosts ring phase `% (Speed * 360.0f)` (ajG line 969) |
| `zfESg` | `cJ` | `Look` | `.WE(true)` — default on | Enables the `targetedEntity` (field_1692) fallback in `ajD` |
| `fGOOi` | `cJ` | `Ignore Walls` | `.WE(false)` — default off | NOT a geometry filter: selects the batch render state — ON → custom state (`cHVCf` in ajE/ajF/ajG, `MRndq` in ajH), OFF → `batcher.defaultState()` (ajE 453–470, ajF 735–752, ajG 935–951, ajH 1116–1132). Flag semantics of `duo/dul/dun` unrecovered |
| `slRcN` | `cJ` | `Bloom` | `.WE(true)` — default on | Gates the extra bloom quad pass in all four modes; in ajG the gate is explicit per particle (`n3 = slRcN.WF() ? 1 : 0`, line 980); in ajH the whole second batch is skipped with `if (!slRcN.WF()) return;` (line 1164) |
| `SfkMU` | `cC` | `Bloom Amount` | `.Vy(1.0).Vw(1.0).Vx(5.0).VA(5.0)` (step 1.0, min 1.0, max 5.0, default 5.0) | Bloom quad alpha factor; visibility gated on `slRcN::WF` via `.Vf(...)` (line 188). Used as `color.cob(fade * (SfkMU.VC() / 100.0f))` |
| `ewNLk` | `cJ` | `Hurt Animation` | `.WE(false)` — default off | When on: hurt-flash mixes `bDGta` (red) into colors via `ajI()`, rotation advance ×(1+0.5·hurt) in `ajJ`; when off hurt contribution is forced to 0.0f |

Mode geometry (all coordinates relative to `Eupjj.getLerpedPos(delta)` after `jI.bIs` billboard
orientation):

- **ajE Circle** — fade `dhq(700)`; `ajJ(cap, hurt)`; texture `ob.cBv("z" 22338)`; particle count =
  bound `ajS("u" 27020)` with per-iteration normalize `i / 45.0f` (line 482), i.e. the decrypted
  bound is 45; radius = `getWidth() * 1.5f`; per-particle scale =
  `max(0.5f, 0.7f - 0.2f * ckqFG.dhj() + 0.2f - 0.2f * IffVm.dhj())`; offsets
  `x = sin(toRadians(i + angle)) * radius * scale`,
  `y = height/2 + height/2 * sin(toRadians(angle))`, `z = cos(toRadians(i + angle)) * radius * scale`;
  color `jk.bDn(i * 3, Color.Wf(), "u" 10995).coc(bDGta, hurt)`; bloom quad
  `kG.bTv(stack, -0.5, -0.5, -0.15, 1, 1)` with alpha `fade * (BloomAmount / 100)`; core quad
  `kG.bTv(stack, -0.15, -0.15, -0.15, 0.3, 0.3)` with alpha `fade`; batch
  `dz.XSRvt.startBatch(texture, state)` + `endBatch()` in finally.
- **ajF Soul** — fade `dhq(300)`, `dhs(rj.kcXTJ)` re-applied each frame; texture `"z" 28705`;
  loop `i += 2` over bound `"u" 7001` with a size accumulator `n3` that also steps by 2 and resets
  when it exceeds `"u" 22141`; particle inner size `0.2f + 0.005f * n3`, outer size
  `1.0f + 0.005f * n3`; scale `max(0.5f, 1.2f - 0.5f * fade)`; radius `width * 1.5f`;
  `y = height/1.5 + height/3 * sin(toRadians(i/2 + angle/5))`; color `"u" 12144` via
  `jk.bDn(i * 3, ...)`.
- **ajG Ghosts** — fade `dhq(300)`; texture `"z" 22932`; 3 rings × 16 points (`f4 = 15.0f`,
  condition `n4 <= f4`); ring angle
  `toRadians(((i / 1.5f + angle) * Speed + ring * "u" 28266) % (Speed * 360.0f))`; vertical bob
  `sin(toRadians(angle * 2.5f + i * (ring + 1)) * 3.0f) / 2.0` added to fixed `y = 1.0`; radius
  `width * 1.2f`; size `max(0.24f * (i / 15.0f), 0.2f)`; bloom quad is 2.4× the size
  (`f15 = f13 * 2.4f`, quad `(-f15, -f15, -0.001, f15*2, f15*2)`); hurt color mix applied once
  outside the ring loop.
- **ajH Crystals** — fade `dhq(300)`; uses the `kK AswNN` batcher with state `MRndq` (Ignore Walls
  on) or `defaultState()`; 3 crystals (loop `i += 20` over bound `"u" 27020`); radius
  `width * 1.5f * (1.2f - 0.5f * fade)`; `x/z = sin/cos(toRadians(i + angle * 0.3f)) * radius`,
  `y = 0.1f + height * |sin(i)|`; orientation quaternion
  `new Quaternionf().rotationTo((0,1,0), normalize(entityCenter - crystalPos))` where
  `entityCenter = getEntityPos() + (0, height/2, 0)`; particle `kE.bTf(stack, 0,0,0, 0.1f)`
  with alpha `fade`; then, only if `Bloom` on: second batch on texture `"z" 22338` (same as
  Circle), 1.0f quads via `jI.bIq`, alpha `0.1f * BloomAmount * fade`.

## Unrecovered

- **[RECOVERED 2026-10-17, batch 22]** All DES ints below were recovered by re-implementing the
  class's own decryptor (key `Adunk = 48869455257838`, validation 120/120 against
  `full-dump.jsonl`): fade 300/700/100 ms; caps 70/70/800 ms; bounds 360/360/360; Soul
  threshold 50, reset 100; ring phase 120; seeds 10/10. (Provenance: `dz.ajS("u", id, key)`
  call sites 23441/18896/26563/27020/10995/7001/22141/173/12144/28266 — the VM decrypts them
  lazily via `ajQ`/`ajR` MethodHandles.)
- **[RECOVERED 2026-10-17, batch 22]** The texture identifiers (`dz.ajP("z", id, key)` call
  sites 22338/28705/22932) are `glow` / `ghosts`.
- `rj.kcXTJ` / `rj.UPXqT` easing formulas and `rh.dfF` wrap semantics (what the `cap` argument
  wraps against — likely modulo, but the operator is inside the VM).
- `kS` boolean flag meanings: `duk(lh.aApMr)`, `duo`, `dul`, `dun` — presumably blend/cull/depth
  combinations, but the mapping is not disambiguated; only the observable fact that
  `fGOOi` selects between `cHVCf`/`MRndq` and `defaultState()` is proven.
- `fr.aOQ()` and `eP.aBS()` target-acquisition internals (`fr` id 5 is native-backed; `eP` id 120
  is virtualized) — only their null/non-null contract is recoverable here.
- Whether `Ignore Walls` was ever intended to do occlusion filtering at draw time: in this build it
  demonstrably only switches render states; if a depth-test flag among `duo/dul/dun` encodes
  "no depth test", the name is consistent, but that is inference, not evidence.
- Per-frame ordering inside `ajB` (exact position of the `Eupjj = hGhYF` latch relative to the
  fade tick) comes from bytecode, not from structured source; confidence high but not
  line-citable.