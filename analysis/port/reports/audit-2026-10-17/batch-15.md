# Batch 15 audit — fJ, dl, dc, dG

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-15 subagent.
Modules: fJ (Target Margin), dl (Outlines), dc (Hit Particles), dG (Anti Trap).
Compile: `.\gradlew.bat compileJava -q --offline` → exit 0.

Sources used per id from `analysis/tools/audit/source-map.tsv`; every decompile
verified by its declared class before use (the plain-path twins fJ/dG/dl/dc are
case-colliding: `specs/handlers/dG.md` and `specs/handlers/dl.md` are the dg/dL
twins, `specs/handlers/dc.md` is dC View Model — citations corrected this pass).
Trace evidence folded from `analysis/traces/2026-10-17/`; constants from
`analysis/decrypted/full-dump.jsonl`; two failed-CFR handlers (dc abY/abZ,
mm.clp) recovered from `javap -c` on `analysis/jars/payload-named.jar` (JDK 21).

---

## fJ — Target Margin (`combat/TargetMargin.java`)

- **Post-fix parity: ~93% · status: ported · fixed: yes**
- Settings: 6/6 exact (Size `cA .UG(0.01).UE(0.0).UF(2.0).UI(0.0,0.0)` →
  0.01/0.0–2.0/default 0.0; Ignore Friends false; Disable If Holding Cobweb
  false; Only For Slots false; Slots `cz` constructed **empty** → nine toggles
  all false; Disable If In Cobweb false; fJ.java:318-409). Slots visibility
  gate `EqPct.Vf(Fkuth::WF)` wired (fJ.java:408). Unit string `lMLXr` remains
  unrecovered (no `(IJ)Ljava/lang/String;` record in full-dump) → suffix none
  [U].
- Fixes (this session):
  - **Margin hook implemented 1:1**: new `TargetingMarginEvent` +
    `EntityTargetingMarginMixin` (`@Mixin(Entity.class)`, `getTargetingMargin()F`
    = yarn `method_5871`, "the margin around the entity's bounding box where the
    entity targeting is still successful") mirroring the original's `hr`
    callback (entity + CallbackInfoReturnable<Float>, fJ.java:78-89). The
    previous tick-based `client.targetedEntity` re-resolution hack is gone.
  - **Attack redraw wired**: `@Subscribe onAttackEntity(AttackEntityEvent)` →
    `cached = drawSize()`, matching `aUN(hw.tv)` (fJ.java:74-76); `hw.tv`
    verified as the attack-pre event (bootstrap `InteractionEventBridgeMixin`
    injects `class_636.method_2918` HEAD, InteractionEventBridgeMixin.java:27-33).
  - **Check order 1:1** (fJ.java bytecode, casesafe/payload/sixtwo/fJ_.java:158-300):
    self → holding cobweb (`player.isHolding(COBWEB)`) → **Only For Slots &&
    !slots.contains(selectedSlot)** (the old code returned 0 whenever Only For
    Slots was on — the slots setting was dead) → in-cobweb (`jg.bBs` scan) →
    friends → cached.
  - Size is the original's two-handle range widget; ported with the repo's
    single-slider convention (ClickAction/CartRefill precedent: slider = left
    handle, UI-pair second value = anchor constant 0.0), documented in javadoc.
- Remaining gaps: `lMLXr` unit string [U] (no trace record); cA range →
  single slider [S] (degenerate draw with anchor 0.0, labeled); redraw does not
  run while disabled (port bus registers listeners only for enabled modules;
  original `aUN` has no `bab()` gate) [S], documented.
- Evidence: trace 2026-10-17 fJ_ — load only (pure-Java module). Cross-consumer:
  `EntityEsp.marginFor` call site (ds.java:408-409) verified intact.

## dl — Outlines (`render/Outlines.java`)

- **Post-fix parity: ~76% · status: ported (consumer gap documented) · fixed: yes**
- Settings: 12/12 exact — Entities `cF .VS(OCdZM).VT(END_CRYSTAL)` (End Crystal
  default), Color, Color Mode Zero/One/Two/Three (default Zero), Second Color,
  Glow Quality 1.0/1.0–4.0/2.0, Glow Radius 0.1/1.0–16.0/4.3, Animation Speed
  0.1/0.0–3.0/1.5, Glow Alpha Multiplier 0.1/0.0–4.0/1.0, Fill Alpha Multiplier
  0.01/0.0–1.0/0.3, Saturation 0.1/0.0–5.0/0.7, Brightness 0.1/0.0–50.0/2.0
  (dl.java:73-318). Visibility gates verified against the decompile (not the
  stale handler-spec text): Second Color ← Two/Three (dl.java:233-268);
  Animation Speed ← not Zero (dl.java:269-317); Saturation and Brightness ←
  One (dl.java:231-232); Glow Quality/Radius have **no** callbacks.
- Fixes (this session): collection now mirrors `agJ` (dl.java:426-443) exactly —
  `world.getEntities()` scan with the `jJ.bIB` captured-frustum gate
  (`worldRenderer.getCapturedFrustum()`, null → render, EntityEsp/Trails
  convention), self skip, `Myqqn.VX` type-set membership; the previous
  infinite-box `getOtherEntities` filter and the invented `isAlive` gate are
  gone. Spec/impl citation paths corrected to the casesafe dl (the plain-path
  twins are dL No Entity Clip).
- Remaining gaps: [S] the drawing consumer does not exist in this rebuild — the
  original's `ki.bPi(runnable, colors, mode, quality, 6 floats)` post-process
  dispatch and `kn.bQt` geometry are Java-shell code outside dl's recovered
  surface (casesafe/handlers/dl.md §Unrecovered), so `getOutlinedEntities()`,
  `shouldCancelNameplate()` and `isOutliningActive` are exposed for later
  renderer wiring (same convention as XRay's render-cancel gap); consequently
  `kn.YNOIY` is never set true, so the dr (Health Indicators) suppression gate
  never engages. [U] two color defaults are runtime theme colors
  (`rD.dlM().bjG().bis()`) → repo white placeholder.
- Evidence: trace 2026-10-17 dl — load only.

## dc — Hit Particles (`render/HitParticles.java`)

- **Post-fix parity: ~86% · status: ported · fixed: yes**
- Settings: 11/11 exact — Particles (Stars/Snowflakes/Ghost/Hearts/Diamonds/
  Thunders/Moons/Clouds), Color, Physics (Fall/Rise/Burst/Fly), Scale
  0.01/1.0–10.0/3.0, Speed 0.01/1.0–15.0/3.0, Amount 1.0/1.0–5.0/2.0, Time
  Before Disappear 1.0/1.0–10.0/3.0 " s", Only Self false, Rotation Angle
  1.0/0.0–360.0 `UI(0.0,180.0)` " deg", Rotation Speed 1.0/0.0–60.0
  `UI(0.0,60.0)` " deg", Glow true (dc.java:75-231). The three string
  suffixes confirmed from full-dump records (`" s"`, `" deg"` ×2).
- Fixes (this session):
  - **Particle physics recovered 1:1** from `mm.clp()` bytecode (javap offsets
    0–757, since CFR failed): move; below-probe at `(x, y − scale/10, z)` →
    bounce `(vx/1.1, −vy/1.1, vz/1.1)` (skips wall probes); else eight
    horizontal probes at ±horizontal speed → negate x/z; then Fall −0.035y,
    Rise +0.035y, Burst one radial 0.3 impulse (cos/sin θ, y = 0.3·(0.8+r·0.2))
    then Fall, Fly nothing; ×0.9950248599052429 drag. The previous invented
    0.98/0.04/0.92 damping is gone.
  - **Spawn 1:1**: hurtTime > 0 only (invented `isAlive` gate dropped), Amount
    per hurt tick, position `(x, cpQ(y+height, y), z)`, velocity
    `(−Speed/50, cpQ(±Speed/50), cpQ(±Speed/50))`; Rotation Angle/Speed drawn
    once at spawn from the cA range (anchors 180/60 = UI-pair seconds; repo
    single-slider convention) — defaults now reproduce the original's
    [0,180]/[0,60] draws.
  - **Expiry + tick merged** into one `removeIf` pass (abY step 1
    `DaBEE.removeIf(mq::clp)`); lifetime = `Time.VC() · 1000` (ZRQxW, mm.java:79,
    inferred 1000 from the " s" suffix — labeled).
  - **Draw**: `cls` angle advance moved into the draw call
    (`angle += tickDelta · rotSpeed`) including the original quirk that the glow
    pass re-enters `cls` (angle advances twice per frame when Glow is on);
    `jJ.bIA` visibility gate added over interpolated positions (Trails
    point-box convention).
- Remaining gaps: [G] the billboard quad substitute for the textured `mo`
  sprites and the post-process glow pass (`ob.cBv` texture id, `mo.clD()`
  identifiers unrecovered) — labeled in javadoc; [U] `ZRQxW` inferred 1000.
- Evidence: trace 2026-10-17 dc — load only; full-dump string records for the
  suffixes.

## dG — Anti Trap (`render/AntiTrap.java`)

- **Post-fix parity: ~68% · status: ported (event wiring partial) · fixed: yes (partial)**
- Settings: 9/9 exact incl. defaults — `cv` group "Hide" with `cw` checkboxes
  Paintings/Signs/Banners/Armor Stands/Minecarts/Falling Blocks `.Tz()`
  (registered → selected → default true) and Buttons/Levers/Decoration Pots
  (no `.Tz()` → default false); verified against `cv`/`cw` semantics
  (`cw.TC()` = `RDnKR && parent.Tn(this)`, `Tz()` = `cv.To` → selected list,
  cw.java:50-59, 152-181; cv.java:40-144) — the previous assumption happened to
  be right, now proven. dG.java:93-197.
- Predicates 1:1: `alv` (Paintings → Armor Stands → Minecarts → Falling
  Blocks), `alx` (Signs → Banners → Levers → Buttons → Decoration Pots),
  `alw` (Signs → Banners) with the original check order (dG.java:346-500,
  508-672, 684-754).
- Fixes (this session):
  - **Collision branch verified** against bytecode (casesafe/payload/sixtwo/dG_.java:311-346):
    cancel + `bcS(VoxelShapes.empty())` run only when `alx(state)` — the port's
    `CollisionShapeEvent` + air replacement (empty collision shape) matches
    (Hand No Clip convention).
  - **`ja.byJ()` wired**: `onEnable`/`onDisable` and every Hide-toggle change
    (via new `ReloadBoolSetting.onChange`) now call `worldRenderer.reload()`,
    matching `aaj → ja.byJ` (dG.java:284-287), `YO → ja.byJ`
    (dG.java:756-759) and the group-change listener `gMmLp.Vd(ja::byJ)`
    (dG.java:193); `ja.byJ` → chunk reload is the repo's established reading
    (XRay ReloadBoolSetting, dk.java:85, batch-12).
  - Wrong-twin spec citation corrected (`specs/handlers/dG.md` is Pearl
    Prediction) → casesafe/handlers/dG_.md.
- Remaining gaps: [S] four render-cancel handlers have no event counterpart in
  this rebuild (no entity-render, block-entity-render or block-render events):
  `als` (BlockEntity render, dG.java:87-91), `alt`/`alq` (two entity render
  passes, dG.java:277-282, 674-678), `alr` (block render — same event dk XRay
  uses, dk.java:216-226); predicates exposed as `matchesEntity`/
  `matchesBlock`/`matchesBlockEntity` for later wiring (XRay precedent). [U]
  which vanilla pass `hl` vs `he` (and `gr`) maps to — not determinable from
  the stubs; not guessed.
- Evidence: trace 2026-10-17 dG_ — `aaj` and `YO` each entered once
  (enable/disable pair during the tour); no numeric exits. (The `ja.byJ` native
  has no trace entry.)

---

## Summary table

| id | status | parity | fixed |
|---|---|---|---|
| fJ | ported | ~93% | yes |
| dl | ported (consumer gap) | ~76% | yes |
| dc | ported | ~86% | yes |
| dG | ported (wiring partial) | ~68% | partial |

## Changed files

- `src/main/java/dev/opengrim/modules/combat/TargetMargin.java` (fJ: hook + attack redraw + slots)
- `src/main/java/dev/opengrim/event/impl/TargetingMarginEvent.java` (new)
- `src/main/java/dev/opengrim/mixin/EntityTargetingMarginMixin.java` (new)
- `src/main/resources/opengrim.mixins.json` (register the mixin)
- `src/main/java/dev/opengrim/modules/render/HitParticles.java` (dc: physics/spawn/expiry/draw)
- `src/main/java/dev/opengrim/modules/render/Outlines.java` (dl: collection + citations)
- `src/main/java/dev/opengrim/modules/render/AntiTrap.java` (dG: ja.byJ wiring + javadoc/citation)

## Cross-module notes

- `EntityEsp` (ds) consumes `TargetMargin.marginFor(entity)` (audited earlier
  today) — signature and enabled-agnostic semantics preserved by this pass.
- `HealthIndicators` (dr) reads `Outlines.isOutliningActive` — still never set
  true because the outline pass has no renderer (documented above).
- `hl`/`he`/`hf`/`gr` bridge injection points are not in the decompiled
  bootstrap corpus (only `hw`/`hr`/`gi`/`hs` bridges are) — future render-event
  work needs those mixins before AntiTrap/XRay-style filters can be wired.
