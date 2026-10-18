# Arrows (sixtwo.do) — handler-derived behavior spec

Class `sixtwo.do` extends `sixtwo.gg`. Registry: `sixtwo.do|Arrows|…` — module id **88**, category `gh.nOCvV` (`analysis/specs/modules/do.md`). Note: class name `do` is a Java keyword; the decompiler keeps the obfuscated name.

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_do.c` | **MISSING** — lowercase `d` classes: 0 natives declared/bound (`coverage-matrix.tsv` row 53); `sixtwo/do` absent from both runtime jsonl registries; no `native` methods. |
| `analysis/decompiled/payload-decrypted/sixtwo/do.java` | **PRIMARY** (627 lines; constructor, all three `@hG` handlers, `ahk`, `YO` read in full; `ahh` is CFR-partial "Could not resolve type clashes" but the scan logic is legible). |
| Inner class `do$sG` (`payload-named/sixtwo/do$sG.java`) | read in full — per-tracked-entity record: `Entity ZaYMC`, `boolean hkzUL` (marked-for-removal), `rk zzzOY` fade animator; `doM(lC,x,y,w,color)` draw, `doN()` expired check. |
| Helpers | `lG.XSRvt` (static batcher: `startBatch(RenderLayer)` / `bUH(builder)` / `endBatch()`), `kG.bTw(Matrix4f?, x, y, z, w, h)` primitive builder with `.dtF(mG)` color / `.dtG()` finalize, `ob.cBv(String)` render-layer-by-name, `rm.diq()` screen size (`Vec2f`), `gJ` screen-event (`.bcd()` → `Screen`), `rk` fade animator + easing `rj.XzDkv`(in)/`rj.AYqck`(out), `jk.jEkxo` shared friend-color constant, `cF.VX(entity)` type-set membership. |

## Runtime model

- `super(gf.aZL(88, false, gh.nOCvV))`; state `Gfvqi : List<do$sG>` and a screen-attached fade `lgSYH = new rk(400).dhs(rj.XzDkv)` with float target `YXgYB` (`do.java:constructor`).
- On each tick (`gH.th`) the module refreshes the tracked set from the world: keep entities matching `LHfSj` ("Entities" set); for players additionally exclude friends (`rD.dml().aLp`); new entities get a `do$sG` (fade-in); entities no longer present are marked `hkzUL = true` (fade-out) and dropped by `doN()` once faded.
- On HUD render (`gk`) each tracked entity is drawn as an on-screen marker orbiting the crosshair: the stack is rotated by the entity's bearing minus the player's yaw (`ahk` returns `-atan2(dx, dz) * 57.29577951308232` degrees, i.e. `-180/π`), radius = `Radius` setting from screen center, marker size = `Size setting * 5.0f`, plus a screen-close offset animated by `lgSYH` when a `HandledScreen` is open.
- Friend coloring: marker color is `OTssl` ("Friend Color", default `jk.jEkxo`) when the entity is a player present in the `qQ` registry (`rD.dmc().ddy(player)`); otherwise `HnmDa` ("Color", default theme `rD.dlM().bjG().bis()`).

## Per-handler semantics

### `@hG ahh(gH.th)` — tick rescan (`do.java:~430-530`, CFR-partial)
1. Guard `bab()`.
2. Build `HashSet<Entity>` from `world.getEntities()`: keep `LHfSj.VX(entity)`; if `instanceof PlayerEntity` also require `!rD.dml().aLp(player)` (exclude friends).
3. For each kept entity not already tracked (`Gfvqi.stream().noneMatch(e -> e.ZaYMC == entity)` via synthetic `ahl`) → `Gfvqi.add(new do$sG(entity))`.
4. For each tracked `do$sG` whose `ZaYMC` is no longer in the set → mark removed (`hkzUL = true`); removal from the list happens in the draw pass (`doN()`).

### `@hG ahi(gJ)` — screen open/close (`do.java:~350-420`)
`screen = gJ2.bcd()`. If `screen instanceof HandledScreen` (container/GUI open): `YXgYB = <int literal 1> + guiScale * <int literal 2>` (both literals runtime-decrypted — the "push markers away while a GUI is open" offset) and `lgSYH.dhs(rj.XzDkv)` (animate to the offset). Otherwise `YXgYB = 0.0f`; both branches end with `lgSYH.dhs(rj.AYqck)` easing toward the target.

### `@hG ahj(gk)` — HUD draw (`do.java:293-425`)
1. Guard `bab()`.
2. `lC2 = gk2.baT()`; `Vec2f screen = rm.diq()`; center `f2 = screen.x/2`, `f3 = screen.y/2`; `f4 = tickDelta`; `f5 = Size.VB()`; `f6 = Radius.VB()`; `f7 = lgSYH.dhd(YXgYB)` (animated GUI offset).
3. `XSRvt.startBatch(ob.cBv(eLTLf))` — render layer resolved from a decrypted layer-name string (`do.eLTLf`, unrecovered).
4. Per tracked entry: color = friend/test logic (above); `lC2.ceV()` (state setup); `f8 = ahk(entity, delta) - rD.dlmvG.player.getYaw()`; `lC2.cfb(f2, f3, f8)` (rotate about crosshair); `f9 = f5 * 5.0f` (marker size px); `f10 = f3 - f6 - f7` (radial distance above center minus radius minus GUI offset); `do$sG.doM(lC2, f2, f10, f9, color)`; `lC2.ceW()`; remove when `doN()`.
5. `XSRvt.endBatch()`.

### `do$sG.doM(lC, x, y, w, mG)` (`do$sG.java`)
`zzzOY.dhc(!hkzUL)` (fade-in while alive, fade-out when marked); `alpha = color.cob(dhj())`; vertical rise `f6 = 30.0f - 30.0f * fade` (marker slides toward its slot as it fades in); emit `XSRvt.bUH(kG.bTw(lC.cfc(), x - w/2, y - f6, 0.0, w, w).dtF(tinted).dtG())` — a **square marker of side `w`**.
`doN()` = `hkzUL && dhj() == 0`.

### `YO()` override
`super.YO(); Gfvqi.clear();`

### `ahk(Entity, float)` (`do.java:601-608`)
Bearing in degrees: `-(atan2(entityPos.x - playerPos.x, entityPos.z - playerPos.z) * 57.29577951308232)` using lerped positions at tick delta; the caller subtracts `player.getYaw()` and rotates the HUD stack.

## Settings→behavior (exact — folded literals verbatim)

| Field | Class | Name | Params |
|---|---|---|---|
| `LHfSj` | `cF` entity set | `"Entities"` (E,n,t,i,t,i,e,s) | `.VS(jg$tJ.OCdZM)` preset scope; **no `VT(...)` seed — starts empty** |
| `ylItw` | `cC` number | `"Size"` (83,105,122,101) | step `.Vy(0.1)`, min `.Vw(1.0)`, max `.Vx(10.0)`, default `.VA(3.0)`; drawn size = value × **5.0f** px |
| `UCwZL` | `cC` number | `"Radius"` (82,97,100,105,117,115) | step `.Vy(0.5)`, min `.Vw(20.0)`, max `.Vx(100.0)`, default `.VA(50.0)`; radial distance from screen center |
| `HnmDa` | `cG` color | `"Color"` | default `rD.dlM().bjG().bis()` (theme color) |
| `OTssl` | `cG` color | `"Friend Color"` (70,114,105,101,110,100,32,67,111,108,111,114) | default `jk.jEkxo` (shared friend-color constant) |

Registry keybind: **88**. Internal fade animator `lgSYH = new rk(400).dhs(rj.XzDkv)` — init literal **400**.

## Unrecovered

- The two GUI-offset literals in `ahi` (`do.ahq("c", 15311, …)` and `do.ahq("c", 3999, …)`) — runtime int-decrypts; base offset and per-GUI-scale increment unknown.
- `do.eLTLf` — the render-layer name string passed to `ob.cBv` (DES-decrypted at clinit, not folded).
- `ahh` full control flow — CFR type-clash failure; the rescan semantics above are reconstructed from legible fragments (set build, `noneMatch` add, absence → mark removed); no numeric formulas involved.
- `doN()` threshold semantics for the fade (`dhj() == 0` exactly) is recovered; the `rk` easing curves themselves are native.

## Helper contracts (one line each)

- `do$sG` — per-entity record: `ZaYMC` Entity ref, `hkzUL` removal flag, `zzzOY` fade animator; `doM(lC, x, y, w, mG)` draw, `doN()` expiry.
- `gH.th` — tick event variant consumed by `dp`/`dq` as well; fires regardless of GUI state.
- `gJ` — screen open/close event; `bcd()` returns the current `Screen`; the `HandledScreen` instanceof test is what distinguishes container GUIs from chat/other screens.
- `lG.XSRvt` — static `kM` batcher (same instance `dz` uses); here driven with an explicit `ob.cBv`-resolved render layer.
- `kG.bTw(...)` — quad primitive builder with `.dtF(mG)` / `.dtG()`; contrast `kG.bTv` used by `dz` (different arity — matrix source differs).
- `ob.cBv(String)` — render-layer-by-name resolver; argument here is the decrypted `do.eLTLf` string.
- `rm.diq()` — live screen size (`Vec2f`); center is recomputed every frame, so resolution/GUI-scale changes need no handling.
- `lC.cfb(x, y, angle)` — rotate-about-point on the HUD stack; `lC.cfc()` returns the current Matrix4f for primitive emission.
- `jk.jEkxo` — shared friend color default (same constant as `ds`/`dm`/`du`).
- Registry metadata: `bootstrap/offline/features/metadata.txt:133`: `sixtwo.do|Arrows|Draws arrows to entities|key=88|bind=-999`. Despite the display name "Arrows", the recovered draw call emits a **square** marker (`kG.bTw` with equal w/h sides, side = `Size * 5.0f` px); any arrowhead shaping must live inside the batcher/layer, not in `do`'s code — do not assume a triangle primitive from the name.
- Tick-vs-draw split: `ahh(gH.th)` maintains the tracked set but removal is deferred to `ahj` (draw pass, via `doN()`), so a vanished entity still renders one fading frame minimum; the reverse (draw without rescan) cannot happen since both run per frame/tick pair.
- The radial position `f10 = f3 - f6 - f7` places markers *above* screen center by the Radius value minus the GUI offset — the orbit arc is a half-circle of entities in front of the player; entities behind contribute bearings > 180° and land below center (pure trig consequence, not special-cased anywhere).