# Batch 23 audit — de, dh

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-23 subagent.
Modules: `de` Hand Chams (`render/HandChams.java`), `dh` Ambience
(`utility/Ambience.java`).

Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (first attempts
failed on `world/Nuker.java` while another batch was mid-edit — foreign to this
batch; both files also verified standalone with JDK 21 `javac` against the loom
classpath in the meantime).

Sources per id from `analysis/tools/audit/source-map.tsv`, declared class
verified before use: `de` = `casesafe/payload-decrypted/sixtwo/de.java` (the
plain `payload-decrypted/sixtwo/de.java` path collides with the `dE` Spammer
class — Windows filter/`javap` case-insensitivity was hit and avoided
throughout), `dh` = `payload-decrypted/sixtwo/dh.java`. Helpers read from the
decompiled trees + raw `jar-casesafe` classes (`ct`, `cu`, `cC`, `cG`, `cJ`,
`cA`, `mU`, `gg`, `ig`, `ie`, `mG`, `dh$sy`, `dh$sz`) — for `cC`/`cG`/`cA`/`cU`
the case-safe `.class` files were copied to a temp `sixtwo/` dir before
`javap` (plain `javap sixtwo.cC` silently resolves to `cc.class` on Windows).
Bytecode: `javap -c -p` on `sixtwo.de`, `sixtwo.dh`, `sixtwo.dh$sy`,
`sixtwo.dh$sz`; the CFR-failed `aet`/`aeq` bodies were read from bytecode.
Decrypted pool: `analysis/decrypted/full-dump.jsonl` (`sixtwo.de` 945 `adU`
records — every char array verified; `sixtwo.dh` 320 records: `afq` strings
" ticks"/" blocks" + 318 `aft` chars). Trace: `analysis/traces/2026-10-17/`
(digests `de.txt` empty = class load only; `dh.txt` = `afl` ×229796, `aes` ×32
events / 16 calls, one `aeq` tick (with the `aet` decode → 23000), `aer` ×1,
`YO` on disable).

---

## de — Hand Chams (`render/HandChams.java`)

- **Post-fix parity: ~80% · status: ported (settings + dispatch 1:1; render core
  native) · fixed: yes**
- Settings: 50/50 present and exact. The original constructs 65 objects
  (`casesafe/payload-decrypted/sixtwo/de.java:120-796`): 3 `ct` groups +
  15 `cu` options + 10 `cG` colors + 37 `cC` sliders; the port's 3
  ModeSettings fold the 3 group/option pairs → 50 settings. Verified one by
  one: Effect (Outline default via `GAQfN.SY()`), Color Mode
  Zero/One/Two/Three, Preset Default/Neon/Chrome/Ocean/Toxic/Fire
  (`lPues.SY()`), all 37 slider chains (e.g. Glow Quality `.Vy(1.0).Vw(1.0)
  .Vx(4.0).VA(2.0)`, Scale `.Vy(0.1).Vw(0.5).Vx(20.0).VA(1.02)`), all colors
  (Tint `cnR(0,0,0,0)`, Bevel `cnR(255,255,255,204)`, Water `cnR(25,76,178,
  255)`, Chrome `cnR(216,216,230,255)`, One..Four `cnR(179/32/37/49…)`), group
  children order per ctor.
- Fixes (this session):
  1. **Effect option 0 was "online"; the original is "Outline"** — decrypted
     pool: slots 6625/32573/11169/31475/23135/552/2481 = 79/117/116/108/105/
     110/101 (`de.java:131-139`). `handlers/de.md:27` mis-read it as "Online".
     Renamed the mode value and the dispatch predicate (`isOnlineEffect()` →
     `isOutlineEffect()`, `GAQfN.SZ()` at `de.java:1156-1181`).
  2. **Color / Second Color defaulted to white; the original defaults to the
     theme accent** — `.Uf(rD.dlM().bjG().bis())` (`de.java:140,170`) =
     `ig.bis()` (`ig.java:383-385`) = `ie.bhJ()` = `mG.cnQ(yCtLw)` of the
     default theme `ig.PtFoz` (`ig.java:238`, 5th arg `mG.yHyOB`) =
     (151,71,255) `mG.java:192`. Port now 0xFF9747FF (same value as the
     ChinaHat precedent, `ChinaHat.java:73`).
  3. **Visibility wiring was incomplete** — now 1:1 with the constructor's
     `Vf` predicates: Color and Color Mode ⇐ Outline (`de.java:797-798`);
     Second Color ⇐ Outline && mode ∈ {Two, Three} (799-850); Animation Speed
     ⇐ mode ≠ Zero (851-899, deliberately independent of the effect, as in the
     original); Glow Quality / Radius / Glow Alpha / Fill Alpha ⇐ Outline
     (900-903); Brightness and Saturation ⇐ Outline && mode == One (904-977);
     the four per-effect groups ⇐ their own option (978-1016). Previously only
     Second Color/Brightness/groups were gated.
  4. **`isHandPassActive()` only checked enabled + first person** — now mirrors
     `acr()` = `bab()` && first person (`de.java:1183-1219`; `bab()` =
     player/world/interactionManager/networkHandler, `gg.java:393-459`).
  5. **The tint path was dead code**: `HandTintEvent.set(...)` never sets
     `active`, and `ItemRendererMixin.opengrim$wrapHandConsumer`
     (`ItemRendererMixin.java:76-79`) returns the unwrapped consumer while
     `active()` is false. `onHandTint` now calls `event.setActive(true)`.
  6. Javadoc rewritten with case-safe citations, the "Outline" correction, the
     theme-accent default chain and the remaining-gaps list.
- Remaining gaps:
  - **[N]** `ki.bPi` (Outline) and `kj.bPr/bPs/bPt/bPu` (Glass/Water/Chrome/
    Liquid Metal) shader passes — argument shapes verified in bytecode
    (`act` `de.java:1147-1150`: Color, Second Color, mode index, glow quality
    int via `cC.VC()`, radius/speed/alpha/fill/saturation/brightness via
    `VB()`; `acu` `de.java:1296-1394`: Glass 9 args, Water 8, Chrome 4,
    Liquid Metal 17) — but the bodies are native; capture condition: enable
    the module in first person with each effect and log the `ki`/`kj` calls.
  - **[N]** `acv` hand re-render (`GameRendererAccessor.callRenderItemInHand`
    + `VertexConsumerProvider.Immediate.draw()`, `de.java:1592-1600`) — no
    rebuild pipeline; the `HandTintEvent` item tint is the documented
    approximation (PARITY.md Divergences), arm untinted.
  - **[U]** `OTglH` (Light Angle suffix) — DES clinit literal, no pool record;
    port suffix empty.
  - **[U]** `ro.diF(preset index, 17 params)` tables behind `gyUKP.Ve(this::
    acw)` (`de.java:1017, 1569-1571`) — native; the Preset mode setting exists
    without a callback.
- Evidence: `casesafe/payload-decrypted/sixtwo/de.java` (settings 120-796,
  wiring 797-1017, dispatch 1147-1463, render 1592-1600), full-dump.jsonl
  `sixtwo.de` (945), javap `sixtwo.de` ctor `gh.nOCvV`, `ct/cu/cC/cG` javap,
  trace 2026-10-17 de: class load only (`digests/de.txt` empty — capture
  condition: first-person item render with the module enabled).

## dh — Ambience (`utility/Ambience.java`)

- **Post-fix parity: ~85% · status: ported (particle render + 5 preset times
  [U]) · fixed: yes**
- Settings: 13/13 top-level (31 constructed objects: 5 `ct` + 18 `cu` + 4 `cJ`
  + 1 `cC` + 1 `cA` + 2 `cG`, `dh.java:125-449`), all values exact — Particles
  false, Particle Type Triangles/Cubes, Change Time true, Time Mode
  Presets/Custom, Time Dawn…Real Time (7), Time Value 100/0-24000/0 " ticks",
  Change Weather true, Weather Clear/Rain/Thunder/Snow, Fog None/Clear/
  Override (Override default via `uxQGU.SY()`), Fog Range 1/0-256 " blocks",
  Sync With Sky true. Visibility: 9 predicates ported (dh.java:367-447).
- Fixes (this session):
  1. **Two settings were missing**: `Particles Color` (`cG GGEeK`,
     `dh.java:182`) and `Fog Color` (`cG UipTW`, `dh.java:337`) — both default
     to `rD.dlM().bjG().bis()` = theme accent (151,71,255); now registered and
     gated per `Vf` wiring (dh.java:368, 445). `allowAlpha=false` matches the
     `cG` constructor defaults (javap: `CDdOA=false`, `nfBAC=false`, `xPYck`
     JVM-default) and the LogoutSpots precedent (`.Uh(false)` → false).
  2. **Weather application was invented** (`getLevelProperties().setRaining`):
     replaced with the bytecode switch (javap `aeq` 344-465) on
     `ClientWorld.setRainGradient` / `setThunderGradient`: Clear → rain 0;
     Rain and Snow → rain 1, thunder 0; Thunder → rain 1, thunder 1; None →
     untouched.
  3. **Gradient stash restore was dropped** (old `hasStash` flag just cleared):
     now 1:1 with `dh$sy` (`dh$sy.java:24-109`): `doy` applies rain when
     ≥ 0 and thunder when ≥ 0, `doz` = rain ≥ 0 || thunder ≥ 1 (true from the
     0.0f initial state, so the restore runs every tick — an original quirk,
     kept), `dox` zeroes both. **Consequence (kept 1:1): the restore runs after
     the weather switch and overwrites it with (0,0), so Change Weather never
     holds a gradient — exactly what the original's `aeq` ordering does
     (javap 344-519).**
  4. **Time was applied through `getLevelProperties().setTimeOfDay`** — now
     `ClientWorld.setTime(t, t, false)` (javap `aeq` 548-565; mappings.tiny
     `method_29089 (JJZ)V`). Custom reads `cC.VC()` = `(int)` cast (javap
     `cC.VC` d2i) instead of `longValue()`; Real Time formula kept.
  5. **Dawn preset = 23000 implemented, labeled [G]** (trace 2026-10-17:
     `aeq` → `aet` → one long decode → 23000; the driver only toggles modules
     — no setting changes — and defaults are Presets + Dawn; the same run's HUD
     clock strings read 18:25-18:47, so the Real Time branch — which maps to
     ~18500 at that hour — did not run). The other five presets stay [U]
     (null = leave time untouched).
  6. **Particle spawn had an invented ×3.0 velocity factor** — removed:
     position velocity = (rand(-1,1), rand(0,2), rand(-1,1)) × 0.04 and the
     recovered rotation spin (rand(-1,1)³ × 0.04) is now integrated too
     (`dh$sz.java:37-50,77-84`; javap `aeq` 162-316); position taken from
     `getEntityPos().add(cpP...)`.
  7. **Fade/removal state machine restored**: `WWClU` flips when the throttle
     `jYAnc.cpC(JoZky)` elapses, then the fade counts down to 0 so
     `removeIf(dh::afe)` (fade == 0 && done) can fire. Previously `fade` stayed
     1.0f forever → particles were never removed (unbounded growth).
  8. Render hook restricted to `Phase.AFTER_ENTITIES` (neighbour convention,
     one pass per frame as `aer`).
- Remaining gaps:
  - **[U]** five preset times (Morning/Day/Evening/Sunset/Night) — DES longs
    behind native `gb.aYR` keys (`aet` cases 1-5, javap 116-193).
  - **[U]** particle cap (DES int slot 2577) and interval bounds (slots
    15922/12446) — interval stand-in 1000 ms; spawn runs one per tick.
  - **[U]** fade duration (`dh$sz.IWwlL`, DES with a native-derived key) —
    interval used as stand-in.
  - **[U]** `aer`'s billboard pass (DES string slot 3717) and the
    Triangles/Cubes batches (`kC.bSK`/`kH.bTJ`, colors `coa(255α×0.4)` /
    `coa(205α)`, `Box(-0.5..0.5)`) — the framework has no batch path; only the
    gate + state machine are ported.
  - **[U]** Fog Color/Range/Sync With Sky are consumed by the original shell's
    fog pipeline, which this rebuild does not have; Fog Range is a `cA`
    two-anchor slider (defaults 64/128, javap `cA.UI`) modelled as its low
    anchor.
  - **[U]** category: the raw class references `gh.nOCvV` (javap), the same
    constant as Hand Chams and the 36 render-package modules, while this file
    sits in `utility` — flagged for the orchestrator rather than moved (the
    port's category taxonomy is inconsistent in a few other spots too, e.g.
    `dO`/`dD` in utility with `nOCvV`); no display name exists for the
    `gh` constants (names are native; trace strings only carry
    Combat/Movement/Visuals).
- Evidence: `payload-decrypted/sixtwo/dh.java` (ctor 125-449, aes 649-787,
  aep 1161-1165, aer 1241-1475), javap `sixtwo.dh` (`aet` 0-212, `aeq` 0-568),
  javap `sixtwo.dh$sy`/`dh$sz`, full-dump.jsonl `sixtwo.dh`, trace
  2026-10-17 (aes ×32 events, one aeq tick, `aet` → 23000), mappings.tiny
  (`setRainGradient`/`setThunderGradient`/`setTime (JJZ)V`).

---

## Summary table

| id | status | parity | fixed |
|---|---|---|---|
| de | ported (native shader core; settings + dispatch 1:1) | ~80% | yes |
| dh | ported (particle render + 5 preset times [U]) | ~85% | yes |

## Changed files

- `src/main/java/dev/opengrim/modules/render/HandChams.java` (de: "Outline"
  correction, theme-accent defaults, full visibility wiring, `bab()` gate,
  `setActive(true)` fix, citations)
- `src/main/java/dev/opengrim/modules/utility/Ambience.java` (dh: two missing
  settings, gradient-based weather, exact stash restore, `setTime`, Dawn [G],
  particle velocity/rotation/spawn fixes, fade countdown, citations)

## Notes for the orchestrator

1. **Stale spec**: `analysis/specs/handlers/de.md:27` and
   `analysis/specs/modules/de.md` name the first Effect option "Online"; the
   decrypted pool proves "Outline" (slots 6625/32573/11169/31475/23135/552/
   2481). `handlers/de.md:72` also lists Color/Second Color as white — they
   default to the theme accent (`ig.bis()` = `ie.bhJ()` = (151,71,255)).
   `handlers/dh.md` "Unrecovered" can now record Dawn = 23000 (trace-backed)
   and that `dh$sy.doz()` is `>= 0`/`>= 1` (not a plain captured flag).
2. **`de`'s tint approximation now actually renders** (it was inert: `active`
   was never set). The PARITY.md Divergences entry should note the mapping is
   live and that mode Zero leaves the item untinted (labeled approximation).
3. **`dh` category question** (see above) — decision left to the orchestrator;
   no file move made.
4. Both modules' visible mode strings are lowercase per the port's convention
   (the original shows "Outline", "Presets", …); ids are stable.
