# Circle ESP (sixtwo.dw) — handler-derived behavior spec

Class `sixtwo.dw` extends `sixtwo.gg`. Registry: module id **84**, category `gh.nOCvV` (decrypted constructor `super(gf.aZL((int)84, false, gh.nOCvV))`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dw.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv`); no `native` methods; no image addresses to cite. |
| `analysis/decompiled/payload-decrypted/sixtwo/dw.java` | **PRIMARY** (963 lines; constructor, tick handler, render handler and both draw helpers readable; the solid-circle vertex math survives in `kz.bSi`). |
| Helpers (one line each) | `kz.bSh(Vec3d, MatrixStack, float scale, int packedColor, AbstractTexture)` — textured-circle billboard draw (push, `jI.bIs` billboard orientation, quad, texture bind); `kz.bSi(MatrixStack, Entity, int packedColor, float scale, float delta)` — solid translucent ring built as a `TRIANGLE_STRIP` in `VertexFormats.POSITION_COLOR` (full vertex math recovered, see below), flushed via `lF.cfW(kR.PMnQE, buffer)`; `kA.bSs(float)` advances the module-global animation phase accumulator (`oYWsU = BBpyW; BBpyW += f`), `kA.bSt(delta)` reads it, `kA.bSv()` panic-array getter; `jk.bDv(packedColor, alpha)` color+alpha repack; `fr` = combat **Target** module (id **5**, category `gh.xwjCw`), `.aOQ()` returns its cached `LivingEntity` target; `jJ.bIB(entity)` frustum visibility; `ob.cBv(Identifier)` texture-manager fetch → `AbstractTexture`; `oe.cCd(String url)` async texture download → `CompletableFuture<lv>`; `jd.bAm(String)` URL sanity check; `mT.cpA()` timer, `.cpC(long)` elapsed, `.cpB()` reset; `cy` text setting (`.Us()` value, `.Un(2048)` max length). |

## Runtime model

- Draws a flat circle under each tracked entity: either a **textured** billboard (custom or built-in image) or a **solid** translucent ring whose rim bobs vertically.
- Two-frame state: `pjPhF : AbstractTexture` (current texture) and `GViCt : String` (URL it was loaded from); `WHKNh = mT.cpA()` throttles texture (re)loads on the tick handler.
- Solid-style animation shares a **module-global phase accumulator** (`kA` static): the tick handler adds `Speed / 100.0f` to it every tick while the style is Solid, and `kz.bSi` samples it with the tick delta — so the ring bob is time-continuous across style/mode changes and even while the module is toggled (the accumulator never resets).
- Entity selection is centralised in `aiV()`; panic switch `dh.afl()` inside it prunes the world-entity loop.

## Per-handler semantics

### `@hG aiT(gH.th)` — tick (`dw.java:548-687`)
1. Guard `bab()`.
2. If style `JxSnN.SQ(1)` ("Solid"): `kA.bSs(zqiDq.VB() / 100.0f)` and return — the phase advances by Speed/100 per tick.
3. Otherwise (Textured style):
   - If texture mode `OrinU.SQ(0)` ("Default"): when `WHKNh.cpC(<unrecovered throttle long #1, DES "j",25394>)` elapses → `pjPhF = ob.cBv(<built-in texture identifier, DES "j",32507>)` and `WHKNh.cpB()`.
   - Else ("Custom"): when `WHKNh.cpC(<unrecovered throttle long #2, DES "j",23465>)` elapses → `url = DRApN.Us()` ("Texture URL"); if `jd.bAm(url)` accepts and `url != GViCt` → `oe.cCd(url).thenAccept(lv -> { pjPhF = lv; GViCt = url; })` (the callback `aiY`, `dw.java:896-897`) and `WHKNh.cpB()`.
   Net effect: textures are (re)loaded at most once per throttle interval; changing the URL re-downloads it.

### `aiV()` — entity selection (`dw.java:390-467`, bytecode-verified)
1. `fr targetModule = rD.dlJ().aZx(fr.class)` (fetched unconditionally).
2. If `CIvYl.WF()` ("Only For Target", default **false**): `target = targetModule.aOQ()`; if non-null, **add it first** (bytecode offsets 35-74: the toggle only gates this prepend — the toggle does *not* restrict the list to the target alone).
3. Loop all `rD.dlmvG.world.getEntities()`: skip self; require `jJ.bIB(entity)` (frustum); require `ZIRir.VX(entity)` ("Entities" set); append.
4. Panic (`dh.afl() != null`) → entities failing the branch are skipped (loop-shortened); the target prepend is not panic-gated.

### `@hG aiU(go.sX)` — world render (`dw.java:688-815`)
1. Guard `bab()`.
2. `textured = JxSnN.SQ(0)` ("Textured"; note the constructor sets `.SO(1)` so **Solid is the factory default**).
3. If textured and `pjPhF == null` (tick handler hasn't loaded it yet): `pjPhF = ob.cBv(<built-in identifier, DES "j",7901>)` and **return** — one frame is skipped while the texture resolves.
4. `stack = sX2.bbh()`, `delta = sX2.bbi()`, `scale = RPJuT.VB()`, `period = zqiDq.VC() * <unrecovered int constant, DES "s",25621>` (Speed × constant = animation period in ms).
5. `for (entity : aiV())`: textured → `aiX(entity, stack, delta, scale, period)`; solid → `aiW(entity, stack, delta, scale)`.

### `aiX` — textured circle (`dw.java:816-830`)
`pos = entity.getLerpedPos(delta)`; `d = currentTimeMillis() % period`; `pos += (0, sin(d / period × π) × entity.getHeight(), 0)` — a half-period sine bob of up to one body height; `kz.bSh(pos, stack, scale, xeAup.Wh(), pjPhF)`.

### `aiW` — solid circle (`dw.java:840-843`)
`kz.bSi(stack, entity, xeAup.Wh(), scale, delta)` — helper math (recovered in `kz.java:344-458`):
- `phase = kA.bSt(delta)`; `top = abs(1 + sin(phase − 0.45)) / 2`, `bottom = abs(1 + sin(phase)) / 2`;
- top point = `lerpedPos + (0, top × height, 0)`; bottom plane y = `lastRenderY + (y − lastRenderY) × delta + bottom × height` (camera-relative);
- `segments = <unrecovered int constant, DES "a",18164>`; for `i` in `0..segments`: `angle = i × 6.2831855f / segments`, `radius = entity.getWidth() × scale`; strip vertices `(x + cos(angle)·radius, topY, z + sin(angle)·radius)` colored `jk.bDv(packed, <unrecovered alpha int, DES "a",28421>)` and `(…, bottomY, …)` colored with alpha **0** — a vertical translucent band ring;
- flush through `lF.cfW(kR.PMnQE, buffer)` (render layer constant unrecovered).

## Settings→behavior (exact — decrypted constructor, names re-folded verbatim from char arrays)

| Field | Class | Name | Value |
|---|---|---|---|
| `ZIRir` | `cF` entity set | `"Entities"` (69,110,116,105,116,105,101,115) | `.VS(jg$tJ.OCdZM)` preset binding; seeded `.VT(EntityType.ITEM)` |
| `DVJWE` | `cJ` toggle | `"Animated"` (65,110,105,109,97,116,101,100) | `.WE(true)` — **declared but never read in recovered code** (both draw paths animate unconditionally); open question |
| `RPJuT` | `cC` number | `"Circle Scale"` (67,105,114,99,108,101,32,83,99,97,108,101) | step `.Vy(0.1)`, min `.Vw(0.5)`, max `.Vx(5.0)`, default `.VA(1.0)` |
| `zqiDq` | `cC` | `"Speed"` (83,112,101,101,100) | `.Vy(1.0).Vw(10.0).Vx(40.0).VA(20.0)`; read as float `.VB()` (phase increment ÷100) and as int `.VC()` (× period constant) |
| `xeAup` | `cG` color | `"Color"` (67,111,108,111,114) | `.Uf(rD.dlM().bjG().bis())` — theme color; read via `.Wh()` (packed-int getter) |
| `OrinU` | `ct` mode | `"Circle Texture"` (67,105,114,99,108,101,32,84,101,120,116,117,114,101) | no `.SO()`; options below |
| `CkUcI` | `cu` option | `"Default"` (68,101,102,97,117,108,116) | option 0 — built-in texture |
| `ZTyjv` | `cu` option | `"Custom"` (67,117,115,116,111,109) | option 1 — URL texture |
| `DRApN` | `cy` text | `"Texture URL"` (84,101,120,116,117,114,101,32,85,82,76) | `.Un(2048)` max length, `.Up("")` default empty |
| `JxSnN` | `ct` mode | `"Circle Style"` (67,105,114,99,108,101,32,83,116,121,108,101) | `.SO(1)` — default **Solid** |
| `GLHXM` | `cu` option | `"Textured"` (84,101,120,116,117,114,101,100) | option 0 |
| `eSXTX` | `cu` option | `"Solid"` (83,111,108,105,100) | option 1 |
| `CIvYl` | `cJ` toggle | `"Only For Target"` (79,110,108,121,32,70,111,114,32,84,97,114,103,101,116) | `.WE(false)`; when on, the `fr` Target module's current target (`fr.aOQ()`) is prepended to the draw list |

Registry keybind: **84**.

## Unrecovered

- `dw.ajg("s", 25621, 0x8729047806992414727L)` — the textured-style bob **period** int multiplied by "Speed" (DES int call-site; from `aiX`'s `%` usage it is a millisecond period, magnitude unrecovered).
- `kz.bSr("a", 18164, …)` — solid-ring **segment count**; `kz.bSr("a", 28421, …)` — the rim **alpha** int fed to `jk.bDv`.
- `kR.PMnQE` — the render layer used to flush the solid ring buffer.
- The three DES string literals: built-in texture identifiers in `aiT` (`"j",32507`) and `aiU` (`"j",7901`) — likely the same asset; not folded.
- The two tick-throttle longs (`"j",25394` and `"j",23465`) — texture reload intervals; do not assume values.
- `kz.bSh` internals beyond the signature (billboard quad construction, texture wrap/filtering) — helper-internal.
- `fr.aOQ()` target-cache update site (the `fr` module is native-decrypted; its `@hG(priority=mw.HIGH) aNs(gH.th)` tick writes `cslIX`, unrecovered).
- `jd.bAm` acceptance criteria for URLs and `oe.cCd` download limits (helper-internal).
- `"Animated"` (`DVJWE`) consumer — see settings table; either dead or read by a Java shell class not in scope.