# Avoidable 1:1 gaps — full module sweep (2026-10-21)

Baseline: the 12-row section **"Avoidable 1:1 gaps — module audit (2026-10-21)"** in
`analysis/docs/PARITY.md:1355-1389`.
Audit HEAD: `e79b194` (Circle ESP/Jump Circle recovered textures). The working tree is
**dirty**: uncommitted fixes are present for `dc`, `cQ`, `dv`, `ff`, `dt`, the sprite
half of `db`/`dw`, and for shared framework pieces (`ChamsRenderer`,
`RangeSetting`, `HeldItemChangeEvent`, `AttackEntityPostEvent`,
`textures/particles/`, and an in-flight `EffectDraw` for `db`/`dw`). Those are
cited as *working tree* below and are **not** re-added as new findings.

This report is evidence-only. No source, `PARITY.md`, `PROGRESS.md`, `privacy.md`,
`.gitignore`, or git state was modified.

---

## 1. Method

1. Mapped all 162 registry entries (`analysis/specs/registry.tsv`) to the module
   files under `src/main/java/dev/opengrim/modules` via the `registry sixtwo.<id>`
   javadoc (162/162 matched; `Modules.java`, `CapeTextureManager.java` and
   `CircleTextures.java` are not modules).
2. Resolved each id to its original class in this order:
   `payload-decrypted/sixtwo/<id>.java` → `payload-named-cfr/sixtwo/<id>.java` →
   `casesafe/payload-decrypted/sixtwo/<id>_.java` → `casesafe/payload-named-cfr/...`.
   Every first candidate was checked to declare the expected class (0 mismatches);
   case-collisions use the casesafe tree (e.g. `dY_`, `cU_`, `fX_` with the `*_`
   suffix; `dl`, `dq`, `dz` without).
3. Counted **behavior natives** in the outer-class file (inner classes are inlined
   in these decompiles, so this is a strict upper bound). Excluded:
   `private static native void _<32-hex>();` class-init stubs, `CallSite` /
   `MethodHandles` indy plumbing, and `import native.Loader;`. `eq` and `fQ` each
   have exactly one `_hash` clinit stub and zero behavior natives. Synthetic
   `MatchException` rethrow helpers and DES-decryptor helpers are **included** in
   the non-zero counts below (they are never the module's behavior surface, but
   excluding them does not change any zero/non-zero result).
4. Collected every javadoc/`PARITY.md` row label: `[G]`, `[S]`, `[U]`, `[N]`,
   stand-in, substitute, approximation, placeholder, heuristic, "do not ship",
   "no overlay surface", "not expressible", "no counterpart".
5. Classified the gap against what is actually in the repo: original Java,
   `raster-assets.bin`, `shader-map.bin` / `assets/opengrim/shaders`, fonts
   (`icons-4.4`, MSDF medium/regular/...), theme constants, and existing framework
   surfaces. DES-encrypted constants and native helper bodies were treated as
   remainder, not as recovery.
6. Re-checked the 12 baseline rows against the current working tree (section 5).

### Count result

* **162 modules mapped**; **51 have 0 behavior natives** in the module class;
  **111 have ≥1** (native event handlers / VM bodies) and are outside this
  audit's eligibility rule.
* Every one of the 12 baseline rows is in the 51 (confirmed 0 natives).
* **13 new avoidable findings** (3 P1, 7 P2, 3 P3) and **4 uncertain P3**
  findings. The other 34 zero-native modules are either baseline (12), no-label
  (8), or genuinely blocked (14) — see appendix A.

---

## 2. Prioritized new findings

Legend: **P1** = small/medium fix, high visual impact, all evidence present;
**P2** = medium/large fix, clear evidence; **P3** = small visual/UI gap or
uncertain injection/pipeline. "Uncertain" = the remaining blocker is not proven
from the repo.

| Module | Class | Port gap (label) | Recoverable evidence (exact) | Native / encrypted remainder | Priority |
|---|---|---|---|---|---|
| **Target ESP** | `dz` | `[G]`/visual adaptation: all four modes draw untextured `debugFilledBox` quads; javadoc says `glow`/`ghosts` "do not ship with the rebuild" (`TargetEsp.java:56-61`). Ignore Walls is carried but inert (`:60-61`). | `batch-22.md:50` recovers textures `glow`/`ghosts`; `batch-22.md:186` says only the `quad(...)` calls need texturing. `raster-assets.bin` keys `glow` (offset 2421078) and `ghosts` (2153049); both already extracted to `src/main/resources/assets/opengrim/textures/particles/glow.png` and `ghosts.png`. Original bloom pass `dz.java:1174-1205`; port pass `TargetEsp.java:423-442`. Reuse the loader at `HitParticles.java:107-111,443-475`. | None for the textures. Ignore Walls layer equivalence (`kS cHVCf`/`MRndq` names are DES, `dz.java:187-188`) is a separate small unknown. | **P1** |
| **Particles** | `cR` | `[G]` "particle textures … are not available"; port draws `debugFilledBox` and approximates glow with a 2× quad (`Particles.java:91-99`, `:313`). | Original draw `cR.java:737-799`: `mo.clD()` texture batch (`:740`), flush + `swapTexture(ob.cBv(...))` glow pass (`:781-782`); `mo.clD()` at `mo.java:224`. The eight recovered assets are exactly `star`, `snowflake`, `ghosts`, `heart`, `diamond`, `thunder`, `moon`, `cloud` plus `glow` (`HitParticles.java:107-111,443-475`; `textures/particles/*.png`). Port mode order (`Particles.java:126-127`) matches `HitParticles.SPRITE_KEYS`. | `mo` DES plaintexts (`mo.java:205-212`) → exact enum→key mapping is inferred from the recovered asset names/order, not proven. Burst count slot 7599, lifetime slots 45/31570, fade slot 15236 remain DES. | **P1** |
| **Outlines** | `dl` | `[S]` "no post-process glow consumer … `getOutlinedEntities()` / `isOutliningActive` are exposed for later renderer wiring" (`Outlines.java:43-52`); the module has no world-render output at all. | `dl.agJ` entity collection + runnable `dl.java:425-535`; runnable at `dl.java:504-531` calls `kn.bQt`/`lH.cgm`/`lH.cgp` then `ki.bPi`. All helpers are Java: `ki.java:287-289` (`bPi`), `kn.java:332-340` (`bQo`), `kn.java:384` (`bQt`), `lH.java:51,61` (`cgm`/`cgp`) — 0 natives each. `outlines.glsl` is already in the build and declares the exact uniforms (`firstColor`, `secondColor`, `colorMode`, `glowQuality`, `glowRadius`, `glowAlphaMult`, `fillAlphaMult`, `halfTexelSize`, `saturation`, `brightness`). `ChamsRenderer.java:97-120,214-260` is the same mask + full-screen composite pattern, already implemented for `dv`. | `ki.bPq` uniform-name slots are DES, but the names are visible in `outlines.glsl`; only the binding order is inferred from the `ki.bPi` call sequence. No data blocker. | **P1** |
| **Logout Spots** | `dp` | `[U]` "HUD name labels: no 2D overlay/projection surface"; `[N]` player-model hologram → box stand-in (`LogoutSpots.java:75-81`, record at `:98`). | `dp.ahv` HUD labels `dp.java:627-708`: `jI.bIw` projection (`:664`), `lE.WTzbi.bYM(9.0f)` medium MSDF (`:651`), `lC.ccW` rounded card (`:698`), `lC.cez` text (`:704`). `dp.ahu` hologram `dp.java:710-799` uses helper `kt` (`kt.bQV` at `kt.java:226`, `kt.bQQ` at `:489`; class `kt`, **0 natives**; line numbers in the 1787-line named-CFR file). `HudElementRegistry`/`DrawContext`, `MsdfFont.of("medium")`, `GuiDraw.fillRounded` and the `Nametags` TagRenderer already exist in the port. | `fCqJQ` tick quantum is DES (`dp.java` throttle via `mT`); the `ahs(hu)` entity-add event is replaced by polling (separate `[U]`, not the visual gap). | **P2** |
| **Firework Spots** | `dn` | `[U]` "screen-space firework icon with a glow disc"; "no 2D overlay/projection surface" → world-space boxes (`FireworkSpots.java:58-65`). | Original card `dn$sF.java:182-199`: `jI.bIw` projection (`:182`), `jH.bId` scale (`:197`), `lC.ccW` rounded card (`:198`), `lC.cdZ(Items.FIREWORK_ROCKET, ...)` item icon (`:199`). All classes are Java (`jI`, `jH`, `lC`; `jH` is only a matrix push/scale, `jH.java:62-88`). Port already has `HudElementRegistry`, `DrawContext.drawItem`, `GuiDraw.fillRounded`. | `jYWIl` fade duration, `ZOVgw` ms multiplier, `AhEPk` suffix are DES (`FireworkSpots.java:62-67`). The card and icon are fully recoverable. | **P2** |
| **Sound ESP** | `da` | `[G]` "projected HUD card … this framework has no 2D overlay surface" → world-space boxes (`SoundEsp.java:45-52`). | Original card `da$sv.java:192-213`: projection `:192`, `lE.WTzbi.bYM(7.0f)` medium MSDF `:202`, `lC.ccU` card `:212`, `lC.cez` text `:213`. Reuse `MsdfFont.of("medium")` + `GuiDraw`. | `xwXDE` fade duration and `ySNLn` sound-name regex are DES (`SoundEsp.java:48-51`). Card/text fully recoverable. | **P2** |
| **Pearl Prediction** | `dg` | `[G]` "re-implements pearl physics … 600-step cap"; "original accepts two termination kinds … unrecovered"; "no 2D overlay surface" → box + nametag (`PearlPrediction.java:57-72`). | The original simulator is Java: `dg.java:343-362` calls `mh.ckg(...).ckD(md.HIkeq).ckF(...).ckx(...).cky(...).ckz(-128.0)` → `me.cjZ`; `mh.java` (0 natives; methods at `:210,224,234,238,266,271`) and `me.java:30` (`cjZ`, 0 natives) are fully available. Termination kinds are plain enum constants: `mf.java:9-11` (`juSGK`, `RlLKW`). Card `dg$sx.java:292` (7.0 medium font), `:317` projection, `:355-360` format/card/item/text. | `cky` max-steps argument (`dg.aeo("z",12849,...)`) is DES; `NkcQX` format string and the `dou("z")` fade duration are DES. Physics/collision/termination are recoverable by porting `mh`/`me`. | **P2** |
| **Arrows** | `do` | `[U]` "render layer name `do.eLTLf` is unrecovered, so a plain filled quad (`DrawContext.fill`) stands in" (`Arrows.java:59-62`, `:190`). | Original starts a textured batch `do.java:315` (`XSRvt.startBatch(ob.cBv(eLTLf))`) and draws a textured square at `do$sG.java:95` (`kG.bTw(lC2.cfc(), ...)`). `raster-assets.bin` contains an `arrow` asset (key at byte offset 14011; IHDR 256×256 PNG) — the only arrow-named raster asset. Port can use `DrawContext.drawTexture` with the extracted asset. | `eLTLf` plaintext is DES (asset identity inferred from the name/appearance, flagged); `dEIfC` 400 ms fade and the `ahq("c",15311/3999)` GUI offsets remain DES. | **P2** (asset identity inferred) |
| **Soul Effects** | `cZ` | `[G]` quads drawn untextured with `debugFilledBox`; glow composite approximated by a larger halo quad (`SoulEffects.java:90-97`, `:310-314`). | Original draw `cZ.java:1305-1425`; glow composite `cZ.java:825` (`kl.bQd`), helper `kl.java:369` (**0 natives**); pipelines `kR.bHqVE`/`HUQWl` are Java (`kR.java`). `glow.png` is on disk; `soul_particle.glsl`, `bloom_blur.glsl` and `bloom_composite.glsl` are already in `assets/opengrim/shaders`. | Four fade longs of `cZ$su#dob` / `ml#clj` are DES; `kl.bQd` uniform-name slots are DES (shader `kR.xfXqe` is known). The composite is portable with the imported bloom shaders, but the exact uniform mapping is not proven. | **P2** |
| **Hand Chams** | `de` | Javadoc labels `[N] ki.bPi` / `kj.bPr..bPu` shader passes and `[N] acv` hand re-render; port substitutes a uniform color/alpha tint (`HandChams.java:54-66`, `:238-244`). | `de.act` uses `ki.bPi` (`de.java:1149`, same Java outline pass as `dl`); `de.acu` uses `kj.bPr/bPs/bPt/bPu` (`de.java:1318,1341,1364,1381`). **`ki.java` and `kj.java` both have 0 natives**; `kR.java` pipelines are Java; `chams_glass/water/chrome/liquidmetal` shaders are imported; `ChamsRenderer.java` already implements the `kj.bPv` mask/composite; `GameRendererAccessor` exists in the bootstrap mixin tree. | `ro.diF` preset tables (2 behavior natives), `acw`'s 17 preset value tables (DES), `OTglH` suffix (DES); the `acv` hand re-render needs a new hand-pass mixin (the port has `ItemRendererMixin`/`HandTintEvent`). | **P2** |
| **Tracers** | `du` | `[S]`/framework limitation: original `cF` entity-type multi-select has no settings-API equivalent; selection only via `getEntityTypes()`/`addEntityType()` (`Tracers.java:61-65`). | `cF.java` is 270 lines, **0 natives**; it is a normal settings widget (`cF extends cB`, selected/universe sets at `cF.java:34-36`, `VX` at `:230-268`). Port already has `GroupSetting` rows and `ModuleWidgetFactory`. Same root cause in `AntiInvisible.java:36-39`, `Chams` (entity set), `CircleEsp.java:105-106`, `EntityEsp`, `BlockPiercer.java:55`, `AimAssist.java:82`, `KillAura.java:93`, `TriggerBot`. | None for the widget; it is UI/editor work. The sets themselves are already ported. | **P3** |
| **Interface** | `fX` | `[G]` "No key event exists in this framework; the `aYc` trigger is emulated by edge-detecting the Emote Key with GLFW in `onTick`" (`Interface.java:43-45`). The separate `[G]` Edit Theme action opens `ClickGuiScreen` instead of `aZ` (`:46-48`) and **is not avoidable** (`aZ` 53 behavior natives). | Original key handler `fX_.java:231-287`; event class `gA_.java:14,43,47` is 51 lines and **0 natives**. A raw `Keyboard.onKey` mixin (analogous to the working-tree `HeldItemRendererMixin` for `cQ`) restores action==1/key/currentScreen/F3 ordering exactly. | Theme editor: `aZ` has 53 behavior natives (58 declarations), so that half stays blocked. Key event: only the mixin/event surface is missing. | **P3** |
| **China Hat** | `cS` | `[G]` "head-model transform (`getHead().applyTransform` + offsets -0.43/-0.5) is approximated by `getHeight() + offset`" (`ChinaHat.java:56-57`, `:118`). | Original feature renderer `qD.java:286` (sneak offset -0.43/-0.5) and `:292` (`PlayerEntityModel.getHead().applyTransform`); cone draw `ky.java:87-286`. Both are plain Java with 0 natives. Port already uses `PlayerEntityModel`/`ModelPartAccessor` in `PopChams`/`SoulEffects`; the exact head transform is available. | `nUFUt` segment count (DES, `ky.java:41,96`); feature-renderer hook itself is absent, but a model-render hook is available (`LivingEntityRendererMixin` in the working tree). | **P3** |
| **Anti Trap** *(uncertain)* | `dG` | `[S]` three render-cancel branches (block-entity, entity, block-outline) "have no counterpart in the allowed event list"; predicates exposed (`AntiTrap.java:43-50`). | Original handlers are Java: `dG_.java:88` (`als`, block entity), `:301` (`alr`, block outline), `:675` (`alq`, entity); collision branch already wired at `:314-333`. | No data blocker; the missing piece is an event/mixin surface (block-entity/entity/block-outline render cancel). Injection points are not in the bootstrap mixin corpus. **Uncertain** because the event surface must be reconstructed. | **P3 (uncertain)** |
| **XRay** *(uncertain)* | `dk` | "five render-cancel handlers … injected by the native agent layer … not implemented" (`XRay.java:28-35`). | All five handlers are Java methods in `dk.java:187-232`: `agz` fog pin 1.0, `agv`/`agw` block filters, `agy` bare cancel, `agx` fluid filter; whitelist predicates already ported (`XRay.java`). | No data blocker; the missing piece is fog/block-render/fluid-render events. The native agent's injection points are not in the decompiled bootstrap. **Uncertain**. | **P3 (uncertain)** |
| **Hole ESP** *(uncertain)* | `dj` | `[S]` original `kR.oXKXV` / `kN` batch pipelines mapped to `debugFilledBox()`/`lines()` (`HoleEsp.java:103-105`). | Pipeline definitions are Java in `kR.java` (`oXKXV` at `kR.java:183`), `kN#bUS`/`kH#bTJ` are Java; original draw `dj.java:461,525` and `:809,840`. Port already implements the exact geometry/gradient (`HoleEsp.java:608-633`). | The shader names behind `kR.oXKXV` are DES; exact pipeline state is not proven from the shader map. **Uncertain** — visual delta is layer state, not missing geometry. | **P3 (uncertain)** |
| **Pop Chams** *(uncertain)* | `cT` | `[S]` original `kR.NElVn` / `kR.vTohM` private pipelines "not expressible"; port uses vanilla `entitySolid`/`debugFilledBox` (`PopChams.java:90-94`, `:242-247`). | Pipelines are Java in `kR.java` (`NElVn` at `:197`, `vTohM` at `:185`); original draw `cT.java:387,457`. Port has the model clone and skin texture already. | Shader names are DES; the exact blend/cull/depth state is not proven. **Uncertain** — likely recoverable by porting the `kR` pipeline definitions. | **P3 (uncertain)** |

---

## 3. Detailed notes on the P1/P2 findings

### 3.1 `dz` Target ESP — the textures already exist

The javadoc's premise is stale. `batch-22.md:50` recovered the target textures as
`glow` (Circle/Soul/Crystals bloom) and `ghosts` (Ghosts), and `batch-22.md:186`
explicitly says "if the orchestrator ever ships those textures, only the
`quad(...)` calls need to become textured billboards." The working tree now ships
both (`textures/particles/glow.png`, `ghosts.png`) because `dc` needed the same
assets. `TargetEsp.java:156` gets a single `debugFilledBox` consumer for every
mode; `:423-442` is the bloom pass. The fix is to bind `glow` on the bloom pass
and `ghosts` on the Ghosts ring, and to use a translucent textured layer (the
`HitParticles` pattern, `HitParticles.java:443-475`). This is the cheapest P1 in
the list.

### 3.2 `cR` Particles — same assets, same loader

`cR` and `dc` use the same eight `mo` textures. `HitParticles` already extracted
them and inferred the mode order (`SPRITE_KEYS`, `HitParticles.java:107-111`);
`Particles` uses the identical order (`Particles.java:126-127`). The only extra is
the glow texture (`cR.java:782`, key `ZDept`), which is `glow.png` in
`HitParticles.GLOW_KEY` (`:111`). The `mo` DES plaintexts are still unrecovered,
so the mapping stays labeled `[G]`, but the visual output is recoverable.

### 3.3 `dl` Outlines — inert module, Java pass, imported shader

`Outlines` has no `WorldRenderEvent` subscription at all; `onTick` only collects
entities (`Outlines.java:89`, `:136`). The original's render path is entirely
Java:

1. `dl.agJ` builds a `Runnable` that sets `kn.YNOIY`, fills `lH` with
   `kn.bQt(entity, tickDelta, matrices)` per entity, and flushes (`dl.java:504-531`).
2. `ki.bPi` swaps the main render target to the outline mask, runs the runnable,
   then composites with `kR.MNKWu` (`ki.java:206-289`).
3. `outlines.glsl` is the composite shader; its uniform names are visible, so the
   `ki.bPq` DES slots are not a blocker.

`ChamsRenderer` already implements the mask/background/full-screen composite for
`dv` (`ChamsRenderer.java:97-120,214-260`), so the remaining work is the geometry
batch (`lH`/`kn.bQt`) and the `dl` parameter packing.

### 3.4 `dp` Logout Spots — the "no 2D surface" claim is false

`HudElementRegistry` + `DrawContext` are used by `TrapEsp`/`Nametags`; `MsdfFont`
and `GuiDraw` are in `dev.opengrim.gui.ui`. The original labels are a rounded
`lC.ccW` + `lC.cez` text at `dp.java:698,704` with the medium font
(`dp.java:651`). The hologram is `kt`, a Java class with 0 natives (named-CFR `kt.java`,
1787 lines; `kt.java:226,489`); the port already renders cloned player models in
`PopChams` (`PopChams.java:242-247`). On the visual path, only the tick quantum
(`fCqJQ`) is DES; the separate `ahs(hu)` entity-add event is a polling stand-in.

### 3.5 `dn` / `da` / `dg` — the HUD cards are three small ports

All three use the same primitives: `jI.bIw` projection, `lE.WTzbi` medium MSDF,
`lC.ccW`/`ccU` rounded card, `lC.cez` text, `jH.bId` matrix scale (not a shader;
`jH.java:62-88` only pushes a scaled matrix). `dn` adds
`lC.cdZ(Items.FIREWORK_ROCKET)`; `dg` adds the same with a pearl icon and
`String.format`. These are directly expressible with `HudElementRegistry` +
`MsdfFont.of("medium")` + `GuiDraw.fillRounded` (the `dt` fix in the working tree
is the template). The only unknowns are the fade/format/regex/suffix DES literals
listed per row above.

### 3.6 `dg` Pearl Prediction — port the original simulator, don't reimplement

The port's `[G]` says the original drives `mh`/`me` and that the termination
kinds are unrecovered. `mh` (276 lines, 0 natives) and `me` (233 lines, 0
natives) are both in the corpus; `mf.juSGK`/`RlLKW` are plain enum constants
(`mf.java:9-11`). The `cky` max-steps value is the only DES argument
(`dg.java:343`). Porting `mh`/`me` also fixes the port's "block hits only"
acceptance rule, which currently rejects the second termination kind.

### 3.7 `do` Arrows — an `arrow` raster asset exists

The original starts a textured batch (`do.java:315`) and draws a textured square
(`do$sG.java:95`). `raster-assets.bin` contains `arrow` at byte offset 14011
(256×256 PNG); it is the only arrow-named asset. The exact `eLTLf` plaintext is
DES, so the mapping is an inference; if accepted, the fix is a one-line texture
draw instead of `ctx.fill` (`Arrows.java:190`).

### 3.8 `cZ` Soul Effects — glow composite, not a texture swap

The core quads are already geometry-correct; the missing piece is the
`kl.bQd` composite (`cZ.java:825`, Java at `kl.java:369`) and the exact particle
texture. `soul_particle.glsl` and the bloom shaders are imported; `glow.png` is on
disk. The four fade longs remain DES, so the alpha envelope will stay labeled.

### 3.9 `de` Hand Chams — the "native pass" label is wrong

`HandChams.java:63-66` calls `ki.bPi` / `kj.bPr..bPu` native, but both classes
have **0 natives** (`ki.java`, `kj.java`). `kj.bPv` is the same mask/composite
logic now ported in `ChamsRenderer`; `ki.bPi` is the same outline pass needed by
`dl`. The hand-specific `acv` re-render is the only missing hook; `GameRendererAccessor`
exists in the bootstrap mixins. `ro.diF` presets and `acw` tables are the real
native/DES remainder.

---

## 4. Baseline 12-row cross-check (current working tree)

The baseline section is a snapshot; the working tree has already moved most rows (and is still changing).
"Closed" below means the labeled substitute is gone from the current source, not
that the row's `PARITY.md` text has been updated (it has not).

| Class | Module | Baseline row | Current state | Evidence |
|---|---|---|---|---|
| `cW` | Trap ESP | P1 icon glyph U+EA26, font stack, rounded corners | **Closed in working tree** | `TrapEsp.java:88-94,461-467,484-488`: `GuiDraw.blurredBackdrop`/`fillRounded`/`icon` + `IconGlyph.LOCATION` + `MsdfFont.icons()`; card radius 4, bar radius 0.25. Residual `[S]` async scan/projection only. |
| `dc` | Hit Particles | P1 flat billboard + 2× glow substitute | **Partly closed in working tree** (textured sprites + recovered 2× glow); post-process bloom still `[G]` | `HitParticles.java:75-80,107-111,443-475`; `textures/particles/*.png`; `analysis/port/reports/module-fixes/dc-hit-particles.md`. The `mo` mode→sprite inference and the screen-space bloom substitute remain `[G]`. |
| `cQ` | Swing Animations | P2 per-tick stack comparison vs held-item trigger | **Closed in working tree** (trigger); `YG` profile still native | `SwingAnimations.java:27-40`; `HeldItemChangeEvent.java`; `HeldItemRendererMixin.java`; `analysis/port/reports/module-fixes/cQ-swing-animations.md`. |
| `dv` | Chams | P2 vanilla boxes vs four passes | **Closed in working tree** (four passes); `ro.diF` presets still native | `Chams.java:41,223`; `ChamsRenderer.java:97-120,214-260`; `chams_*.fsh`; `Chams.java:65` "Genuine native gap: ro.diF". |
| `db` | Jump Circle | P2 procedural circles vs textures | **Closed in working tree** (textures + `EffectDraw` pass); `yqWBV` duration still DES | `CircleTextures.java:21-31,45-66`; `circle.png`, `circle_glow.png`; `JumpCircle.java:88,279` uses `EffectDraw.drawTextured`; `PARITY.md:1391-1398`. Only the `yqWBV` animation duration remains DES. |
| `dw` | Circle ESP | P2 procedural ring/light values | **Partly closed in working tree** (textures + `EffectDraw` pass); `kz.bSr` segment/alpha/light still DES | `CircleTextures.java`; `CircleEsp.java:98-104,307,357` uses `EffectDraw`; `PARITY.md:1391-1398`. Remaining `kz.bSr` constants are DES. |
| `ff` | Fake Lag | P2 single-value sliders / pre-attack event | **Closed in working tree** | `FakeLag.java:107-108` (`RangeSetting`), `:272-279` (`AttackEntityPostEvent`); `RangeSliderWidget.java`. |
| `dt` | Nametags | P3 vanilla text/rounded fill vs MSDF/shape | **Partly closed in working tree** (text/shape); `oP` armor order and `kg.bOC(2.0f)` remain | `Nametags.java:109-120,256` (`TagRenderer`, `MsdfFont.of("medium")`, `GuiDraw.fillRounded`); `analysis/port/reports/module-fixes/dt-nametags.md`; residual `:124` and `:132-134`. |
| `dq` | Storage ESP | P3 item-set group instead of item-list widget; theme colors | **Closed in working tree** | `StorageEsp.java:83-96,136,146-150`: real `ItemListSetting` (nine-item `cK` universe, `WQ()` all selected, empty allowed) and recovered theme accent `0xFF9747FF` / `0x809747FF`. Residual `irQyF` throttle DES. |
| `di` | 2D ESP | P3 profile registry/drawing dispatch not rebuilt | **Open** | `Esp2D.java:36-40,52`; `pj.java` 1051 lines / `po.java` 806 lines, both 0 natives; large surface. |
| `dI` | Nuker | P3 50 ms/tick guess + programmatic `cK` list | **Partially closed** (`ItemListSetting`); 50 ms still DES | `Nuker.java:118-124,129-130` uses `ItemListSetting`; the widget geometry is still a real scrollable item list `[S]`; 50 ms/tick remains a labeled guess (`:124,:158`). |
| `dh` | Ambience | P3 interval/fade stand-ins and preset times | **Partially closed** (`RangeSetting` fog range); five preset times still DES | `Ambience.java:68-84,111-112`; the five presets are `afw`/`afv` DES longs keyed by native `gb.aYR` (`dh.java:1112`, javap `aet` offsets 96-193) — **javap exposes the encrypted blocks only, not the plaintext**; Dawn = 23000 is the trace reading. Particle cap/fade also DES (`dh$sz.IWwlL`). |

**Net (as of this audit):** 6 rows closed in the working tree (`cW`, `cQ`, `dv`,
`db`, `ff`, `dq`), 5 partly closed (`dc` bloom, `dw` light values, `dt`
armor/2.0 override, `dI` 50 ms interval, `dh` preset/fade DES), 1 still open
(`di` profile registry). The working tree is still moving; re-check `git status`
before relying on this table.

---

## 5. Systemic findings (why these were missed)

1. **"Native" was often inferred from a DES name, not from the helper class.**
   The following helpers have **0 native declarations** and are fully Java:
   `ki` (outline pass), `kj` (chams pass), `kn` (render batch), `kR`
   (pipelines), `lH` (outline geometry), `kt` (logout hologram), `cF`/`cK`
   (entity/item pickers), `mh`/`me` (trajectory simulator), `qD`/`ky` (China Hat),
   `jH` (matrix scale), `kM`/`kK`/`kG`/`kN`/`kH` (batchers), `lE` (font).
   The actual native blockers are much narrower: `ob` (12, texture/URL fetch),
   `ro` (2, presets), `on` (21, shield state), `aZ` (53, theme editor), `jd` (13,
   URL validation), `ja` (6, chunk cache), `jh` (11, enchantment), `oP` (8, armor),
   `qu` (22, bypass), `in` (32, hand predicates).
2. **The "no 2D overlay/projection surface" claim is stale.** `HudElementRegistry`,
   `DrawContext`, `MsdfFont`, `GuiDraw`, and the `Nametags` TagRenderer exist;
   `TrapEsp`/`Nametags` already register HUD elements. This single stale premise
   accounts for `dp`, `dn`, `da`, and `dg`.
3. **The "textures do not ship" claim is stale.** `particles/` now ships the
   recovered `glow`, `ghosts`, eight `mo` sprites and the circle pair. This
   accounts for `dz` and `cR` (and closes `dc`'s sprite half).
4. **`aZ` is the one screen that really is native.** `aZ` has 53 behavior
   natives (58 declarations incl. indy/clinit plumbing), so the `fX` "Edit Theme" gap is *not* avoidable. The key-event
   `[G]` is separate and is a small P3 wiring gap: `gA` is 51 lines / 0 natives,
   and `fX.aYc` is Java; only the `Keyboard.onKey` mixin is missing. The current
   `onTick` edge detection is behaviorally close but not event-exact.
5. **Widget gaps are cross-cutting.** `cF` (entity picker) is missing from
   `Tracers`, `AntiInvisible`, `Chams`, `CircleEsp`, `EntityEsp`, `BlockPiercer`,
   `AimAssist`, `KillAura`, `TriggerBot`; `cK` (item picker) is the `StorageEsp`
   and `Nuker` row. One `cF` widget port closes nine modules' editor gaps.

---

## 6. Suggested order

1. `dz` Target ESP textures (P1, small; assets already on disk).
2. `cR` Particles textures + glow (P1, small; same loader/keys as `dc`).
3. `dl` Outlines pass (P1, large; reuses `ChamsRenderer` mask/composite + imported
   `outlines.glsl`; unblocks `de`'s Outline half).
4. `dn` / `da` / `dg` / `dp` HUD cards (P2; one shared `HudCard` helper using
   `MsdfFont.of("medium")` + `GuiDraw.fillRounded` + `DrawContext.drawItem`).
5. `dg` simulator port (`mh`/`me`) (P2; fixes the physics/termination divergence).
6. `do` arrow texture (P2, small; asset identity is the only inference).
7. `cZ` glow composite (P2, medium; `kl`/`kR` Java + bloom shaders).
8. `de` Hand Chams (P2; reuses `dl` + `dv` passes; presets remain native).
9. `cS` head transform (P3, small), `du`/`cF` widget (P3, cross-cutting),
   `fX` key event (P3, small; theme editor stays blocked).
10. Uncertain: `dG`/`dk` event wiring, `dj`/`cT` pipeline definitions.

---

## 7. Caveats / ambiguities

* **Counts.** A "behavior native" here is any `native` method declaration in the
  outer-class file except `_<32-hex>` clinit stubs, `CallSite`/`MethodHandles`
  plumbing, and import lines. Synthetic `MatchException` rethrows and DES-decryptor
  helpers are included in the non-zero counts; they do not affect the zero/non-zero
  boundary. Some tree pairs differ by 1-5 synthetic helpers (e.g. `fa` 47 vs 50,
  `dU` 9 vs 14); the preferred tree is the order in section 1.
* **Working tree.** `e79b194` is the last commit; the fixes for `dc`, `cQ`, `dv`,
  `ff`, `dt`, `db`/`dw` and the new framework files are **uncommitted**. If they
  are reverted, the baseline table changes back to the 12-row state. The report
  does not assume they will land.
* **`do` asset identity.** `eLTLf` is DES; `arrow` is the only arrow-named raster
  asset (256×256) and the only plausible source. Marked "inferred"; if the key
  decrypts to something else, this row moves to P3/uncertain.
* **`cR`/`cZ` texture mapping.** The `mo` DES plaintexts and the `cZ` texture
  binding are not proven; the assets and shaders are present. The rows say
  "recovered asset set, exact mapping inferred".
* **`dj`/`cT`.** Their pipelines are Java but the shader names are DES; the port's
  vanilla layers are close. Classified uncertain rather than queued.
* **`dG`/`dk`.** The handler bodies are Java, but the native agent's injection
  points are not in the decompiled bootstrap; classified uncertain.
* **`fX`.** The theme editor half stays blocked: `aZ` has 53 behavior natives, so
  the theme editor is genuinely blocked. The key-event workaround is behaviorally
  close but not event-exact; it is a P3 wiring gap, not a data gap.
* **`aZ`/`on`/`ro`/`ob`/`jd`/`ja`/`jh`/`oP`/`qu`/`in`** are the real native
  blockers for the 14 "not avoidable" zero-native modules. `mO` is an interface
  with 0 natives, but its implementor is applied by the native loader and is not
  in the corpus, so NameProtect's sidebar geometry stays a vanilla-layout
  reconstruction.

---

## Appendix A — all 51 zero-behavior-native modules

Count is from the preferred original file (see appendix B for the full list).
Disposition: `baseline 12-row` = already in the PARITY section; `P1/P2/P3 new` =
this report; `P3 uncertain` = this report, not queued; `no labeled gap` = no
`[G]`/`[S]`/`[U]`/stand-in/approximation in the module javadoc; `not avoidable` =
labeled gap but the substitute depends on a native helper body or DES constant.

| Category | Class | Module | Behavior natives | Disposition |
|---|---|---|---:|---|
| combat | fK | Reach | 0 | no labeled gap |
| combat | fJ | TargetMargin | 0 | no labeled gap |
| movement | et | AntiWeb | 0 | not avoidable — DES rotation constants |
| movement | ff | FakeLag | 0 | baseline 12-row |
| movement | eq | NullMovement | 0 | no labeled gap |
| render | dx | AntiBlind | 0 | not avoidable — consumer accessors in bootstrap |
| render | dY | AntiInvisible | 0 | not avoidable — enforcement point native |
| render | dG | AntiTrap | 0 | P3 uncertain |
| render | do | Arrows | 0 | P2 new |
| render | df | AspectRatio | 0 | no labeled gap |
| render | dd | BlockEsp | 0 | no labeled gap |
| render | ee | Cape | 0 | not avoidable — jd.bAm native URL check |
| render | dv | Chams | 0 | baseline 12-row |
| render | cS | ChinaHat | 0 | P3 new |
| render | dw | CircleEsp | 0 | baseline 12-row |
| render | ds | EntityEsp | 0 | no labeled gap |
| render | di | Esp2D | 0 | baseline 12-row |
| render | dn | FireworkSpots | 0 | P2 new |
| render | dm | FriendIndicator | 0 | not avoidable — jk.jEkxo DES |
| render | dy | Glow | 0 | not avoidable — consumer outside payload |
| render | de | HandChams | 0 | P2 new |
| render | dr | HealthIndicators | 0 | not avoidable — oP.cJr native armor query |
| render | dc | HitParticles | 0 | baseline 12-row |
| render | fq | Hitbox | 0 | not avoidable — native hitbox renderer |
| render | dj | HoleEsp | 0 | P3 uncertain |
| render | db | JumpCircle | 0 | baseline 12-row |
| render | dp | LogoutSpots | 0 | P2 new |
| render | dt | Nametags | 0 | baseline 12-row |
| render | dl | Outlines | 0 | P1 new |
| render | cR | Particles | 0 | P1 new |
| render | dg | PearlPrediction | 0 | P2 new |
| render | cT | PopChams | 0 | P3 uncertain |
| render | cY | ShieldStatus | 0 | not avoidable — on helper 21 behavior natives |
| render | cV | SkeletonEsp | 0 | no labeled gap |
| render | cZ | SoulEffects | 0 | P2 new |
| render | da | SoundEsp | 0 | P2 new |
| render | dq | StorageEsp | 0 | baseline 12-row |
| render | cQ | SwingAnimations | 0 | baseline 12-row |
| render | dz | TargetEsp | 0 | P1 new |
| render | du | Tracers | 0 | P3 new |
| render | cU | Trails | 0 | not avoidable — jk.bDo DES gradients |
| render | cP | Trajectories | 0 | no labeled gap |
| render | cW | TrapEsp | 0 | baseline 12-row |
| render | dk | XRay | 0 | P3 uncertain |
| utility | dh | Ambience | 0 | baseline 12-row |
| utility | dM | AutoMarket | 0 | not avoidable — native market engine |
| utility | cX | FakePlayer | 0 | not avoidable — DES script aliases |
| utility | fX | Interface | 0 | P3 new (key event); theme editor blocked (aZ 53 behavior natives) |
| utility | fS | NameProtect | 0 | not avoidable — ru DES + qu/jd natives |
| utility | fQ | NoProtocolDisconnect | 0 | not avoidable — VM-resident |
| world | dI | Nuker | 0 | baseline 12-row |

**Counts:** 12 baseline + 13 new + 4 uncertain + 8 no-gap + 14 not-avoidable = 51.

The 8 "no labeled gap" modules were checked against their javadocs and PARITY rows
and have no `[G]`/`[S]`/`[U]`/stand-in label: `fK`, `fJ`, `eq`, `df`, `dd`, `ds`,
`cV`, `cP`.

---

## Appendix B — behavior-native count for all 162 modules

`>0` modules are outside the audit's eligibility rule. Counts are from the
preferred original file (payload-decrypted, else casesafe/named-cfr); they include
inlined inner-class declarations and synthetic helpers (see caveat 1).

| Category | Class | Module | Behavior natives |
|---|---|---|---:|
| combat | fH | AimAssist | 54 |
| combat | eV | AutoCrystal | 33 |
| combat | eZ | AutoDoubleHand | 10 |
| combat | eW | AutoHitCrystal | 10 |
| combat | fI | AutoLogout | 8 |
| combat | fl | AutoPotion | 23 |
| combat | fB | AutoShieldBreak | 13 |
| combat | eS | AutoStunSlam | 30 |
| combat | fL | AutoTool | 7 |
| combat | fx | AutoTotem | 23 |
| combat | fa | AutoXBow | 47 |
| combat | fp | Backtrack | 45 |
| combat | fu | Criticals | 13 |
| combat | eY | CrystalOptimizer | 7 |
| combat | eM | DoubleTap | 3 |
| combat | dS | HandNoClip | 4 |
| combat | fr | KillAura | 84 |
| combat | eP | MaceAura | 26 |
| combat | eQ | MaceElytraTarget | 25 |
| combat | eN | MaceSwap | 15 |
| combat | fE | NoMiss | 4 |
| combat | dX | NoMissDelay | 2 |
| combat | fA | PotionRefill | 4 |
| combat | fj | ProjectileAimBot | 8 |
| combat | fi | ShieldBlock | 13 |
| combat | eT | ShieldDrain | 6 |
| combat | eI | SpearDoubleTap | 18 |
| combat | eG | SpearLunge | 23 |
| combat | eF | SpearReach | 13 |
| combat | fg | TargetLock | 9 |
| combat | fy | TotemRefill | 6 |
| combat | fF | TriggerBot | 8 |
| combat | fD | UnchargeBlock | 4 |
| combat | fC | Velocity | 7 |
| combat | fG | WTap | 13 |
| movement | ej | AirStuck | 4 |
| movement | fz | AutoJumpReset | 6 |
| movement | eO | AutoPearlCatch | 6 |
| movement | ey | Blink | 11 |
| movement | ev | CollisionLongJump | 3 |
| movement | dA | ElytraTarget | 20 |
| movement | eD | FastBridge | 4 |
| movement | eB | Flight | 34 |
| movement | em | HighJump | 5 |
| movement | ek | InventoryMove | 5 |
| movement | fs | KnockbackDisplacement | 43 |
| movement | ez | NoFall | 2 |
| movement | ew | NoJumpDelay | 2 |
| movement | es | NoPush | 4 |
| movement | eo | NoSlow | 26 |
| movement | eE | Parkour | 3 |
| movement | fm | PearlChaser | 16 |
| movement | ex | SafeWalk | 2 |
| movement | ei | Scaffold | 9 |
| movement | eH | SpearDash | 28 |
| movement | er | Speed | 10 |
| movement | eC | Sprint | 15 |
| movement | eA | Strafe | 3 |
| movement | ep | SuperFirework | 2 |
| movement | eu | TridentBoost | 6 |
| movement | el | WaterSpeed | 5 |
| movement | eR | WindHop | 6 |
| render | ed | CustomCameraDistance | 6 |
| render | dV | CustomFov | 7 |
| render | dW | Freecam | 35 |
| render | dB | FullBright | 3 |
| render | dC | ViewModel | 6 |
| utility | fo | AntiBot | 16 |
| utility | fP | AntiCheatDetector | 15 |
| utility | fh | AttributeSwap | 5 |
| utility | fv | AutoArmor | 20 |
| utility | fn | AutoClicker | 22 |
| utility | eh | AutoExp | 4 |
| utility | dU | AutoFish | 9 |
| utility | ft | AutoGApple | 15 |
| utility | eb | ChestStealer | 7 |
| utility | dR | ClickAction | 14 |
| utility | fR | ClientSounds | 6 |
| utility | fO | DiscordActivity | 6 |
| utility | ef | ElytraSwapper | 21 |
| utility | dQ | HitSounds | 7 |
| utility | dO | HotbarRestorer | 22 |
| utility | dD | ItemFrameBlocker | 3 |
| utility | fU | MiddleClickFriend | 4 |
| utility | dJ | MouseTweaks | 28 |
| utility | dT | MultiTask | 2 |
| utility | dH | NoSignScreen | 2 |
| utility | eg | NoSwing | 3 |
| utility | fT | ResourcePackBypass | 23 |
| utility | fV | SelfDestruct | 3 |
| utility | fN | SkinProtect | 35 |
| utility | dN | SlotLock | 3 |
| utility | dE | Spammer | 21 |
| utility | fW | Transactions | 3 |
| world | eU | AirAnchor | 10 |
| world | eX | AnchorMacro | 40 |
| world | en | AntiGhost | 4 |
| world | fw | AutoDrain | 9 |
| world | fd | AutoDripstone | 14 |
| world | dK | AutoLeverReplace | 15 |
| world | fM | AutoMlg | 5 |
| world | eJ | AutoTrap | 55 |
| world | eK | AutoWeb | 25 |
| world | dP | BlockPiercer | 6 |
| world | fb | CartAssist | 37 |
| world | fc | CartRefill | 4 |
| world | dZ | FastPlace | 8 |
| world | ec | GhostHand | 2 |
| world | dF | LeverReplace | 6 |
| world | ea | NoBreakDelay | 4 |
| world | dL | NoEntityClip | 3 |

51 zero-native + 111 non-zero = 162 modules. `Modules.java`,
`CapeTextureManager.java`, `CircleTextures.java` are not modules.

---

## Appendix C — exact helper-native counts used above

| Helper | Role | Behavior natives |
|---|---|---:|
| `ki` | Outlines mask/composite (`bPi`) | 0 |
| `kj` | Chams mask/composite (`bPr..bPu`) | 0 |
| `kn` | render window / model re-render | 0 |
| `kR` | render pipeline definitions | 0 |
| `lH` | outline geometry batch | 0 |
| `kt` | logout player-model hologram | 0 |
| `cF` | entity-type multiselect widget | 0 |
| `cK` | item multiselect widget | 0 |
| `mh` / `me` | pearl trajectory simulator | 0 / 0 |
| `gA` | key event | 0 |
| `qD` / `ky` | China Hat feature renderer / cone | 0 / 0 |
| `jH` / `kG` / `kM` / `kK` / `kN` / `kH` / `lE` | GUI/matrix/batcher/font helpers | 0 |
| `ob` | texture/URL fetch | 12 |
| `ro` | preset tables (`diF`) | 2 |
| `on` | shield state | 21 |
| `aZ` | theme editor screen | 53 |
| `jd` | URL validation / misc | 13 |
| `ja` | chunk cache | 6 |
| `jh` | enchantment lookup | 11 |
| `oP` | armor query | 8 |
| `qu` | process-wide bypass | 22 |
| `in` | hand predicates | 32 |
