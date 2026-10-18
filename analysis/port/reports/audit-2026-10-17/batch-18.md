# Batch 18 audit — dw (Circle ESP), fw (Auto Drain), db (Jump Circle)

Date: 2026-10-17 · Auditor: batch-18 subagent · Compile: `.\gradlew.bat compileJava -q --offline`
clean after all edits.

Sources used: case-safe payload-decrypted decompiles (`analysis/decompiled/casesafe/payload-decrypted/
sixtwo/dw.java`, `analysis/decompiled/payload-decrypted/sixtwo/{fw,db}.java`), bytecode cross-checks via
`javap` of `analysis/decompiled/jar-casesafe/sixtwo/{dw,fw,db,cF_}.class` (class declarations verified
inside each file), helper classes (`kz`, `kA_`, `mT_`, `ob`, `oe`, `jd`, `jI_`, `jJ`, `cF`, `jg`, `rj`,
`rk`, `db$sw`, `gM`, `cB`), decrypted constant pool `analysis/decrypted/full-dump.jsonl`, runtime traces
`analysis/traces/2026-10-17/` (`digests/{dw,fw,db}.txt`, `by-class-casesafe/{dw,fw,db}.jsonl`,
`module-summary.tsv`).

New evidence produced by this audit (not in any prior spec): all three classes' DES constant pools were
decrypted statically. The class keys were derived from the runtime dump (`gqfIk = LDC ^ dumpArgs ^
methodConst`) and validated by reproducing the dump's own values:
`dw` key 27796957615364 (int 25621 → 100 ✓), `db` key 76154492359407 (long 7659 → 1000 ✓),
`fw` key 49355582871672 (int 23221 → 6 ✓). This recovers every constant the specs listed as
"unrecovered" for dw and db (see below).

---

## dw — Circle ESP

post-fix parity: **94%** (recovered surface) · status: **ported** · fixed: **yes** (rewrite)

### Fixed

- **Rewritten 1:1 from the decompile** (the old impl was a labeled reconstruction): the tick handler
  (`aiT`, dw.java:548-683) no longer collects targets — it only manages the texture and the solid
  phase; selection now runs per render frame in `aiU` (`aiV`, dw.java:391-467); the flat
  lines-ring draw was replaced by the two original paths.
- **`Animated` consumer found** (the handler spec called it dead): `aiX` gates the textured bob
  (`if (animated.WF()) pos = pos.add(0, sin(...) * height, 0)`, dw.java:800-808, bytecode-verified —
  the CFR block structure had misled the spec).
- **Texture system ported** (`aiT` + `aiU`): throttled (1000 ms, decrypted) built-in load
  `ob.cBv("circle")` (string call site 32507 decrypts to **"circle"**), Custom-mode URL download via
  `oe.cCd` with the `jd.bAm` gate and the `GViCt` change check (dw.java:548-683, 689-706); the
  `aiU` null-texture fallback also loads "circle" and skips the frame.
- **Selection defaults corrected**: `Entities` = cF `sulLA` seeded **{PLAYER}** (cF.java:20-22) plus
  ITEM (dw.java:108), universe = `jg$tJ.OCdZM` → `jg.skTlu` = `jg.bBT()` = living entity types minus
  ARMOR_STAND (jg.java:1400-1428; the cF.VS lookupswitch was bytecode-verified: case 2 → skTlu). The
  old impl seeded ITEM only and skipped PLAYER.
- **Frustum gate added**: `jJ.bIB` (jJ.java:59-80) via `client.worldRenderer.getCapturedFrustum()`
  (sibling pattern from BlockEsp) — the old impl used `isAlive` instead.
- **Solid ring ported from `kz.bSi`** (kz.java:344-452): global `kA` phase (bSs/bSt, kA.java:23-25,
  35-38) lerped by tick delta, top/bottom sine factors (0.45 offset), entity-width radius, vertical
  band with bottom alpha / top alpha 0, quads emulating the original TRIANGLE_STRIP (same winding).
- **Textured circle ported from `kz.bSh`** (kz.java:458-480): `jI.bIs` camera-relative translate
  (jI_.java:108-113), X-90° rotation, scale×2 quad, UVs (0,1)/(1,1)/(1,0)/(0,0).
- Settings now use the original display names ("Default"/"Custom", "Textured"/"Solid") and the Solid
  factory default (`SO(1)`); the state no longer resets on disable (the original has no `YO`
  override) and the static phase persists across toggles.
- New shared helper `CircleTextures` (built-in sprite generation + async URL fetch + `jd.bAm`
  approximation) used by dw and db.

### Verified 1:1

- All 8 settings + order: Animated `WE(true)`; Circle Scale `Vy .1/Vw .5/Vx 5/VA 1`; Speed
  `1/10/40/20`; Color `Uf(theme)` (port: white, sibling convention); Circle Texture
  Default(0)/Custom(1) no `SO`; Texture URL `Un(2048)/Up("")`; Circle Style Textured(0)/Solid(1)
  `SO(1)`; Only For Target `WE(false)` (dw.java:96-225).
- Constants: both texture throttles = 1000 ms; `aiU` period = Speed(int) × 100 (call site 25621 → 100,
  dump-verified).
- Trace 2026-10-17: `aiT` entered 2× (tick only; Solid default branch — matches the port's default).

### Remaining gaps

- [G] `kz.bSr` constants unrecoverable (kz class key is `gb.aYR`-derived, kz absent from the dump):
  ring segment count (`18164`) → 64, rim alpha (`28421`) → 170, both labeled guesses in javadoc;
  the TRIANGLE_STRIP → `DEBUG_FILLED_BOX` quads is a framework port with identical geometry.
- [G] `kz.bSh` light values (`4097`/`28672`) → full-bright 0xF000F0; textured layer (original
  `kR.Dmmsd`) → `RenderLayers.entityTranslucent` (no cull, blended — verified in
  win/tmp/mc-decomp RenderPipelines).
- [G] `ob.cBv` sprite pixels are inside the native payload → procedurally generated
  `opengrim:circle`; `jd.bAm` (native) → non-blank http(s) test.
- [U] the cF entity-type list widget has no settings-API equivalent (selection kept as a field with
  get/add/remove, same approximation as EntityEsp/TriggerBot); the cG rainbow/alpha toggles are not
  modeled; theme-fed color default kept white.
- [N] panic machinery (`dh.afl`/`iS.bwL` guards) not ported — framework-level, no behavior.

### Evidence

javap `dw.class` (`aiT`/`aiU`/`aiX`/`aiV` control flow, BootstrapMethods, constant pool),
`cF_.class VS` lookupswitch, `cF$sn.riatK`; dw.java:96-225, 391-467, 548-683, 689-811, 871-873;
kz.java:344-480; kA_.java:23-38; mT_.java:22/60-120/161; jJ.java:59-80; jI_.java:108-113;
jg.java:1400-1428; dump rows `sixtwo.dw ajg 25621 → 100`; trace `digests/dw.txt` (`aiT` ×2).

---

## fw — Auto Drain

post-fix parity: **88%** (recovered surface; native VM bodies excluded by construction) · status:
**partial** · fixed: **partial**

The class is virtualized: `aQZ/aQX/aQY/aRa/aRc/aRd` are `native` (fw.java:236-248, 785-791), and the
handler spec (fw.md) confirms 132 unstitchable VM fragments. Only the constructor and `aRb()` are Java.

### Fixed

- **`aRb()` sample generation re-ported bytecode-exact** (fw.java:254-781): the 4×4 face grid now
  reproduces the original's asymmetric index quirk (x uses the outer index, y the inner index, and z
  uses the **outer** index when `py` is a face value else the inner index — javap-verified at
  offsets 810-1016); the random block now reproduces the exact RNG call order
  (`nextInt(boxes)` → `nextInt(6)` → per-axis `nextBoolean` + conditional `nextDouble`), which the
  old impl did not (it consumed a different RNG stream).
- **Target Lock bypass added to all four aRb gates** (`fg.aIW() != null` → `TargetLock.sharedIds()`
  non-empty, fw.java:257/266/269/298/305) — was missing entirely.
- **Category corrected** WORLD → COMBAT (`gh.xwjCw`, fw.java:87 — same constant as Kill Aura's
  category; verified against the KillAura port's COMBAT mapping).
- Mode option values now use the original display names ("Blatant"/"Legit", "Auto"/"Manual",
  "Water Cobweb"/…, "Own"/"Friends") so the GUI matches.
- Removed the invented 64-entry cap on `NrVzh` (spec:86 — no expiry visible in the original) and the
  invented enable/disable state clearing (the original has no `YO` override; state persists across
  toggles).
- Javadoc rewritten: 1:1 settings with citations, the aRb step list, [N] native-handler inventory
  with capture conditions, [G]/[U] labels on every remaining guess.

### Verified 1:1

- All 6 settings (fw.java:85-226): Mode, Switch Mode, Auto Switch Delay `UG 1.0/UE 0.0/UF 20.0/
  UI 1.0/UH(zAhcx)`, Steal Mode 5 options, Cancel For 2 options, Cancel In Screens `WE(false)`;
  no `Vf` gates.
- `aRb` structure: range = `(int) player.getBlockInteractionRange()`, origin =
  `BlockPos.ofFloored(player.getEntityPos()).up()`, `iterateOutwards(origin, r, r, r)`, the four
  gates (NrVzh / `isStill` / `aRc` / non-empty shape), eye/center direction, 6 axis directions
  (call site 23221 → **6**, dump-verified), `RaycastContext(OUTLINE, SOURCE_ONLY, player)` and the
  `type == BLOCK && blockPos.equals(pos)` return.
- Trace 2026-10-17: `aQX`/`aQY`/`aRb` each entered 1× (aRb returns BlockHitResult); no numeric exits.

### Remaining gaps (scale)

- [N] Native core (≈half the module): `aQY(gH$th)` tick (drain execution via `qJ.dbp` slot search +
  use), `aQX(gv)` pre-rotation, `aQZ(gW$tq)` block-use-result/cancel logic (Cancel For / Cancel In
  Screens), `aRa()` slot-switch worker, `aRd(BlockPos)`. Capture condition: run the original client
  with Auto Drain enabled next to a cobweb-fluid pool and trace those five handlers.
- [G] `aRc(ZZZ)` Steal-Mode mapping (Water Cobweb = water && cobweb, … All = water || lava) —
  spec-inferred, native body.
- [G] random-sample count (call site `aRi(5843)` absent from the dump) → 6.
- [G] `zAhcx` suffix (native clinit) → " ticks" (0-20 step 1 delay).
- [U] `NrVzh` lifecycle: only the `contains` read is visible; the port adds on interaction.
- [G] the tick reconstruction (bucket-slot switch after Auto Switch Delay, rotation submit,
  interact) approximates the native wiring; `Mode` (Blatant/Legit) and `Cancel For` are not consumed
  by any recovered code.
- Visual/behavioral scale: the liquid-finder is exact; the drain execution is a stand-in.

### Evidence

javap `fw.class` (`aRb` offsets 810-1016, BootstrapMethods, `sipush 5843/23221`), fw.java:85-226,
236-248, 254-781, 785-791; dump rows `sixtwo.fw aRi 23221 → 6`; TargetLock.java:102-108; trace
`digests/fw.txt` + `by-class-casesafe/fw.jsonl`.

---

## db — Jump Circle

post-fix parity: **93%** (recovered surface) · status: **ported** · fixed: **yes** (rewrite)

### Fixed

- **Rewritten 1:1 from the decompile** (the old impl used a fabricated 1200 ms lifetime, a "Glowing"
  mode guess, an expanding-ring render and tick-based takeoff detection): now `abG` (texture),
  `abF` (player tracking) and `abE` (render) follow db.java:548-971, with the per-circle `rk` tween
  (grow with easeOutBack / shrink with easeInBack, rj.java:418-419, 527-532, 643-645; rk.java:54-135,
  335-362) and the exact finished/removed conditions.
- **Decrypted constants wired**: per-circle lifetime and texture throttle = **1000 ms** (call sites
  7659/31128 → 1000, the first reproduced from the dump itself); built-in textures
  **"circle"** (Default) and **"circle_glow"** (Glowing) (call sites 27709/11427).
- **Texture system ported**: Default/Glowing load the built-in sprite and reset the throttle; Custom
  reads Texture URL, resets on unusable/unchanged URLs and otherwise starts the download
  (`oe.cCd`/`abH` semantics) — db.java:548-636 bytecode-verified.
- **Visibility gate implemented**: `ZQjnc.Vf(() -> GZUSi.SQ(2))` (db.java:197) → `textureUrl
  .setVisible(mode == Custom)` refreshed per tick (same pattern as AimAssist's Vf gates) — the old
  impl never hid the row.
- **Player tracking ported**: drop gone/removed/other-world players, track on-ground players
  (self always, others unless Only Self), spawn the circle at `(x, floor(y)+0.001f, z)` when a
  tracked player leaves the ground, remove it when finished and shrunk to 0 (db.java:638-824).
- **Disconnect clear ported as an approximation**: `abC(gM)` clears both lists; `gM` is the empty
  disconnect event (payload-named-cfr/gM.java; dispatched by ClientWorldEventBridgeMixin
  `offline$disconnect`), approximated by the world-null check on tick (same as TrapEsp).
- **`YO()` onDisable ported** (db.java:1001-1006): disabling clears the circle and tracked-player
  lists.
- Settings use the original display names ("Default"/"Glowing"/"Custom") and the Default mode.

### Verified 1:1

- All 5 settings + order: Circle Scale `Vy .1/Vw .5/Vx 5/VA 1`, Only Self `WE(false)`, Circle Color
  `Uf(theme)` (port: white), Circle Texture Default(0)/Glowing(1)/Custom(2) (no `SO`), Texture URL
  `Un(2048)/Up("")` + Vf gate (db.java:96-198).
- Render guards (`enabled`, non-empty list, non-null texture), reverse iteration, radius =
  scale × progress, quad −r…+r after `jI.bIs` translate + X-90° (db.java:844-971).

### Remaining gaps

- [G] the `db$sw` animation duration `yqWBV` is encrypted with the db$sw class key (native
  `gb.aYR`, not derivable) and absent from the dump → 400 ms, matching the
  `new rk(400).dhs(rj.XzDkv)` pattern in cO/do.
- [G] `ob.cBv` sprites → procedural `opengrim:circle`/`opengrim:circle_glow`; `jd.bAm` →
  http(s) test; the `XSRvt`/`kR` textured batch → `RenderLayers.entityTranslucent` full-bright.
- [U] `gM` disconnect event has no framework counterpart (world-null approximation).
- Trace 2026-10-17: `YO` 1× (disable only); no tick/render events captured.

### Evidence

javap `db.class` (`abG` control flow + sipush sites 7659/27709/11427, `abE` sipush 31128),
`db$sw.java:27-36`, rk.java, rj.java:418-419/527-532/643-645, jI_.java:108-113, gM.java,
ClientWorldEventBridgeMixin; dump row `sixtwo.db abX 7659 → 1000`; trace `digests/db.txt` (`YO` ×1).

---

## Changed files

- `src/main/java/dev/opengrim/modules/render/CircleEsp.java` (dw — full rewrite)
- `src/main/java/dev/opengrim/modules/render/JumpCircle.java` (db — full rewrite)
- `src/main/java/dev/opengrim/modules/render/CircleTextures.java` (new — shared built-in sprite
  generation + async URL texture fetch, used by dw/db)
- `src/main/java/dev/opengrim/modules/world/AutoDrain.java` (fw — aRb bytecode-exact, TargetLock
  bypass, COMBAT category, display names, javadoc)

## Divergences to fold into PARITY.md (orchestrator)

- dw Circle ESP: kz segment/alpha [G] (64/170), kz light values [G] (full-bright), textured layer →
  entityTranslucent [G], built-in sprite procedurally generated [G], jd.bAm approximated [G],
  cF entity list as a field (no settings widget), cG rainbow/alpha not modeled, theme color default
  kept white; settings values renamed to the original display names (configs with old lowercase
  values fall back to defaults).
- fw Auto Drain: category World → Combat (file stays in modules/world), aRc mapping [G],
  random-sample count [G] (6), zAhcx suffix [G] (" ticks"), NrVzh lifecycle [U], native
  aQY/aQX/aQZ/aRa/aRd [N] with a reconstructed tick; mode values renamed to display names.
- db Jump Circle: db$sw animation duration [G] (400 ms), sprites/download/layer [G] as dw, gM
  disconnect approximated by the world-null check [U]; mode values renamed to display names.
