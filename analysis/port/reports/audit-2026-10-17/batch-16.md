# Batch 16 audit — cT, di, cR

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-16 subagent.
Modules: cT (Pop Chams), di (2D ESP), cR (Particles).
Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (one pre-existing
deprecation warning in `event/impl/WorldRenderEvent.java`, not touched here).

Sources used per id from `analysis/tools/audit/source-map.tsv`; every decompile
verified by its declared class before use. Constant/semantic cross-checks:
`analysis/decrypted/full-dump.jsonl`, `analysis/traces/2026-10-17/`, and `javap -c`
(JDK 21) on `analysis/decompiled/jar-casesafe/sixtwo/*.class` plus the yarn-mapped
`minecraft-merged` jar for vanilla signatures. Helper classes read: `cC_`, `ct`,
`cu`, `cG_`, `cT$so`, `mT`, `mG_`, `kR`, `rk`, `mq`, `mn`, `mp`, `mm`, `mU_`, `iX_`,
`jg`, `jI_`, `go`/`go$sX`, and the bootstrap `WorldRenderEventBridgeMixin` +
`WalkAnimationStateAccessor`.

---

## cT — Pop Chams (`render/PopChams.java`)

- **Post-fix parity: ~95% · status: ported · fixed: yes**
- Settings: 4/4 exact — "Mode" is the original's single-select `ct` group
  (`kErPl` selected index, `SQ(int)`/`SN(int)`, ct.java:24/178/201), children
  "Simple" (index 0, default) / "Textured" (cT.java:120-138) → now a
  `ModeSetting` (previous independent bools could enable both passes at once);
  "Color" white (cT.java:139, `bjG().bis()`); "Time To Disappear"
  `Vy(1.0).Vw(1.0).Vx(10.0).VA(3.0).Vz(" s")` = step 1.0 / min 1.0 / max 10.0 /
  default 3.0 / " s" (cT.java:158, cC_.java:181-194 mapping Vy=step, Vw=min,
  Vx=max, VA=default); "Fly Speed" 0.01 / −2.0–2.0 / 0.4 (cT.java:169).
- Fixes (this session):
  - **Mode group converted to the radio semantics** (`SQ(1)` = Textured is the
    only branch test, cT.java:366); render now does textured XOR simple.
  - **Clone construction 1:1**: fresh `GameProfile(uuid, name.getString())`
    (cT.java:729) instead of `player.getGameProfile()`; model built with
    `thinArms = true` (cT$so.java:57 — javap `PlayerEntityModel.<init>(ModelPart;Z)`
    `iconst_1`, previous port passed false); limb animation position copied via a
    new `LimbAnimatorAccessor` mixin (port of the original bootstrap
    `mixin.accessors.WalkAnimationStateAccessor`, `field_42111` = Yarn
    `animationProgress`) — cT.java:737-739.
  - **Tick removal 1:1**: `mT.cpC((long)VC()*1000)` = `elapsed − lifetime > 0`
    (mT.java:60-81, cT$so.java:179), then list removal **and** world discard
    (`world.removeEntity(id, DISCARDED)`, `setRemoved`, `onRemoved`,
    cT$so.java:186-194) — the previous port never discarded the clone.
  - **Render 1:1**: offset measured **before** the per-frame FlySpeed/50 bump
    (cT.java:341-342); `lastX/Y/Z/lastYaw/lastPitch/lastBodyYaw/lastHeadYaw`
    copied (cT.java:343-350); render-state limb override from the accessor
    (cT.java:359-361); `LivingEntityRenderer.getOverlay(state, 0.0f)` used
    (cT.java:365); all clones render (no invented alpha cutoff).
  - **Dead color/fade removed as dead code**: cT.java:363 computes
    `mG.cnQ(color.Wh()).cob(fade)` and the bytecode never reads the local
    (javap Zl: `astore 16`, no load); the render call is the **4-argument**
    `PlayerEntityModel.render(MatrixStack,VertexConsumer,II)V` (javap; the
    4-arg vanilla overload passes color −1 = white). The "Color" setting and the
    fade therefore do not modulate the ghost — quirk kept and documented.
  - Light arguments: simple pass = **10** (decrypted slot 14940,
    full-dump record `args [14940,6853922780639140845] → value 10`, matched to
    this call site by `literal ^ (AanCe ^ 93325792430213L) = dumped args`);
    textured slot 12751 not dumped (0x00F000F0 placeholder). Both formats
    (POSITION / POSITION_TEXTURE) carry no light element, so both are inert.
- Remaining gaps: [U] the original's private pipelines `kR.NElVn` / `kR.vTohM`
  (cT.java:368-457, built from encrypted shader/sampler strings not present in
  full-dump) are substituted by `RenderLayers.entitySolid(skin)` (opaque, matches
  the blend-less pipeline builder) and `RenderLayers.debugFilledBox()` (flat pass)
  — visual-only; [S] render phase: the original fires `go$sX` right after the sky
  pass (bootstrap `WorldRenderEventBridgeMixin:74-109`), the port uses
  `AFTER_ENTITIES` (closest available); [U] textured light constant (inert).
- Evidence: trace 2026-10-17 `cT_` — `Zk` entered once (packet path), no numeric
  exits; full-dump int record above; javap of `cT_.class` (render/ctor/status
  paths) and `cT_$so.class` (thin-arms flag, timer, world discard).

## di — 2D ESP (`render/Esp2D.java`)

- **Post-fix parity: ~50% · status: partial (profile system missing) · fixed: yes (partial)**
- Settings: 2/2 names present but **inert placeholders** — "Edit ESP" is a `cI`
  action button (Runnable `aR::yc`, di.java:113) and "ESP Profiles" is a `cE`
  profile-list setting backed by the global registry `rD.dlS()`
  (di.java:127); neither widget kind exists in this settings API
  (Bool/Color/Double/Group/Int/Mode/String), so both are registered as empty
  groups with a javadoc label (cI/cE → group placeholder).
- Fixes (this session):
  - **Selection 1:1** (di.java:342-389): iterate `world.getEntities()` and keep
    `instanceof PlayerEntity`, skip the local player, skip friends
    (`rD.dml().aLp`); the previous `world.getPlayers()` +
    `isSpectator`/`isAlive` gates were invented and are gone.
  - **Box computation**: `afJ` (di.java:414-496) implemented —
    `jg.bBB(entity, entity.getLerpedPos(delta))` = box of `width`/`height`
    around the interpolated position (jg.java:1091-1093), replacing the raw
    `getBoundingBox()`.
  - **Dead invented helper removed**: `modeArgb` (no caller, no original
    counterpart).
  - Guard order of the packet/tick/nametag handlers kept (afx: enabled →
    `pv.cPH` → `pl.cNJ`; afA: enabled → PlayerEntity → not local → not friend →
    profile gate).
- Remaining gaps (all documented in the javadoc):
  - [U] the profile registry (`pG`/`py`/`po`/`pI` profiles, `pF` group enum with
    native display strings) — the module's actual drawing dispatch
    (`pj.cNs(DrawContext, lc, entity, profiles, false)`, di.java:405) cannot be
    rebuilt; no profile list editor, no per-profile colors/modes.
  - [U] the `afD`/`afF`/`afG`/`afH`/`afI` model-cuboid screen projection
    (di.java:498-827) needs `jI.bIw` (screen-space projection for the profile
    renderer) — the world-space afJ fallback is used instead.
  - [U] `pv`/`pl` trackers (`cPH/cPJ`, `cNJ/cNN/cNK`) are shared helpers outside
    this port; the subscribers keep only the guard structure.
  - [G] the nametag gate approximates `afK` (active `po` profile with `cOt()`
    for the player's `qQ.ddy` group, di.java:615-684) with tracked-set
    membership; [S] the original draws screen-space rectangles in a HUD pass
    (`gk`), the port draws a world-space box outline with a placeholder color
    (`0xFF40FF70`, profile colors unrecovered).
- Evidence: trace 2026-10-17 `di` — no records (module never enabled);
  handler spec `analysis/specs/casesafe/handlers/di.md` (line-cited, fully
  recovered Java, zero natives).

## cR — Particles (`render/Particles.java`)

- **Post-fix parity: ~88% · status: ported (assets missing) · fixed: yes**
- Settings: 7/7 exact — "Particles" `ct` group Stars (index 0, default) /
  Snowflakes / Ghost / Hearts / Diamonds / Thunders / Moons / Clouds
  (cR.java:124-175) → `ModeSetting` (was 8 independent bools); "Color" white
  (cR.java:176); "Physics" `ct` Fly (index 0, default) / Drop (cR.java:185-187)
  → `ModeSetting`; "Scale" 0.01 / 1.0–10.0 / 3.0 (cR.java:188); "Amount"
  10.0 / 20.0–800.0 / 200.0 (cR.java:196); "Add on" multi-select Idle
  (`.Tz()` = default on, cR.java:205) + Movement/Pearl Throw/Arrow Shot/Trident
  Throw/Totem Pop (defaults off); "Glow" true (cR.java:267).
- Fixes (this session):
  - **Totem burst (YR, cR.java:385-460)**: status 35
    (`EntityStatuses.USE_TOTEM_OF_UNDYING`; DES slot 14841 not in full-dump —
    cross-checked against the ported AutoDoubleHand module and the vanilla
    constant); entity null → return; burst position
    `(x ± 0.2, y + 0..height, z ± 0.2)`; velocity Drop `(0, −0.2..−0.05, 0)`
    else `YU()` ±0.03³; particle physics is the constant `mp.qIoJG`
    (cR.java:456) — the previous port drove the *integration* from Fly/Drop,
    which is wrong (Fly/Drop only seeds the spawn velocity, cR.java:450/559/701/721).
    The "Totem Pop" add-on is never read by the original (dead setting, cR.java
    has no reference to `hQcMD`) — kept inert and documented.
  - **Spawner (YQ, cR.java:506-729)**: the three projectile checks are
    **independent** (a trident matches Trident Throw and Arrow Shot, since
    `TridentEntity extends PersistentProjectileEntity`, cR.java:573-657) — the
    previous else-if chain dropped that; Idle fill loop `size() → Amount.VC()`
    with `jg.bBy` ground probe (`groundDistance`, jg.java:988-1089: −1 for
    water/lava/slime/honey/cobweb, else `y − blockY − 1`); Movement uses
    `iX.bxS() > 0.1f` implemented from `lastRenderX/Y/Z` distance × 20 rounded
    to 0.1 (iX_.java:448-452) instead of the velocity-length approximation.
  - **Particle model 1:1 from `mn`** (mn.clp decoded from `mn.class` bytecode,
    CFR had dropped a constant): `prev = pos; pos += vel;
    vel = vel*(0.9, 0.9, 1.0) + (0, −0.001, 0)`; removal = timer expired **and**
    fade value reached 0; the fade is an `rk` animation driven forward while
    alive / reverse after expiry (`dhc(!tyKgU)`), and the previous "linear decay
    over the whole lifetime" plus the invented Fly lift (+0.002) are gone.
  - **Draw (YT, cR.java:737-799)**: alpha = `255 * fade * 0.4` with the setting's
    alpha **replaced** (mn.java:249/283, `mG.coa`); quad size `scale*0.07`
    (mn.cls); glow pass = same alpha, 2× size (mn.clr — the previous port halved
    the glow alpha); `jJ.bIA` frustum gate over interpolated positions via
    `worldRenderer.getCapturedFrustum()` (Trails point-box convention, cR.java:751);
    the fade only advances for drawn (visible) particles, matching the original.
- Remaining gaps:
  - [U] the `mo` style textures (`clD()` sprites, `ob.cBv` ids DES-encrypted and
    absent from full-dump) and the glow texture `ZDept` — billboard quads through
    `RenderLayers.debugFilledBox()` are the substitute, so the "Particles" style
    selection has no visual effect in this port (visual-only).
  - [G] three constants missing from full-dump, labeled in the javadoc: burst
    count slot 7599 (16 used), lifetime `mU.cpO` slots 45/31570 (1000–3000 ms),
    `rk` fade duration slot 15236 (200 ms). [U] the `rj.UPXqT` easing curve is
    replaced by a linear ramp (rk.dga).
  - [S] `YP(gM)` = clear on **disconnect** (bootstrap `ClientWorldEventBridgeMixin:52-66`);
    the port clears when `world == null` on tick / on disable.
  - [S] render phase: `go$sX` after the sky pass → `AFTER_ENTITIES` (documented).
- Evidence: trace 2026-10-17 `cR_` — `YU` 964 / `YR` 30 / `YQ` 6 / `YO` 2
  (matches a live spawner whose per-particle velocity is `YU`); full-dump has no
  cR records for slots 14841/7599; javap of `cR_.class` (YR/YQ) and `mn.class`
  (clp/clq/clr constants and branch structure); `mm.clx()=64` vs `mm.clw()=0`
  resolved the obfuscator switch so the normal paths are the ones translated.

---

Batch summary: 2 modules ported (cT ~95%, cR ~88%), 1 partial (di ~50%, blocked
on the unrecovered profile registry). 1 new mixin added
(`mixin/LimbAnimatorAccessor.java`, port of the original bootstrap accessor,
registered in `opengrim.mixins.json`).
