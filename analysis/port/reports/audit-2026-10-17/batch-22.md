# Batch 22 audit — dz, dv

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-22 subagent.
Modules: `dz` Target ESP (`render/TargetEsp.java`), `dv` Chams
(`render/Chams.java`).

Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (after both rewrites).

Sources per id from `analysis/tools/audit/source-map.tsv`, declared class
verified before use: `dz` = `casesafe/payload-decrypted/sixtwo/dz.java`,
`dv` = `casesafe/payload-decrypted/sixtwo/dv.java`. Bytecode ground truth:
`javap -c -p` on `jar-casesafe/sixtwo/dz.class` / `dv.class` (all obfuscated
control-flow mazes re-read from bytecode). Helpers: `rk.java`, `rh.java`,
`rj.java` (casesafe/payload-named-cfr), `mG_.class`, `jk.class`, `cF_.class`.
Trace: `analysis/traces/2026-10-17/` (dz: `ajB/ajC/ajD/YO` only; dv: class
load only). Decrypted pool: `analysis/decrypted/full-dump.jsonl` (sixtwo.dz
120 `ajS` sites, sixtwo.dv 782 sites).

## Constant recovery method (applies to both modules)

The original DES-encrypts every numeric/string constant at its call site:
`value = ajQ(id, l2)` with `l2 = raw ^ (Adunk ^ methodConst)` and
`n3 = id ^ (l2 & 0x7FFF) ^ tag`. I recovered the class key from two
independent dump pairs and re-implemented the class's own decryptor
(PowerShell + .NET DES) — **validated 120/120 dumped `sixtwo.dz` sites
(`ok=120 bad=0`)** before using it on the sites the dump never evaluated.
This turned the whole "Unrecovered" list of `specs/casesafe/handlers/dz.md`
into recovered facts (below). Same technique for `dv`: `IOGuL = 43179284862255`
derived from the 782 single-key dump records (all `raw^l2` identical), giving
the Light Angle suffix.

---

## dz — Target ESP (`render/TargetEsp.java`)

- **Post-fix parity: ~93% · status: ported · fixed: yes (full rewrite)**
- **Recovered constants** (all previously [U]; now 1:1, cited):
  - `IffVm` fade 300 ms; Circle re-issues `dhq(700)`; `ckqFG` hurt 100 ms.
  - Angle interpolator durations (`tYcox.dfF(value, cap)` — the "cap" is a
    **duration in ms**, not a modulo: `rh.dfF` = `rk.dhq(ms)` + linear ease,
    rh.java:35-42): Circle/Crystals 70 ms, Soul 70 ms, Ghosts 800 ms.
  - Circle bound **360** (not 45) with the bytecode's skip rule
    `if ((int)(i / 45.0f) % 2 == 0) continue;` (javap 273-317: only odd
    45°-blocks are emitted; the CFR "block44/45" reading is a mis-structure).
  - Soul bound **360** step 2; size accumulator threshold **50**, reset
    **100** (javap 309-400: skip countdown, then `n3 += 2`, `n3 > 50` →
    `n4 = 100; n3 = 0`).
  - Crystals bound **360** step 20 (18 crystals); Ghosts ring phase **120**.
  - Colour seeds: Circle **10**, Soul **10**.
  - Textures: Circle/Soul/Crystals-bloom `glow`, Ghosts `ghosts`.
- Fixes (this session):
  1. **Animators are now real ports of `rk`/`rh`** (rk.java:54-134, 335-360;
     rh.java:35-52) with the recovered `rj` easings — `kcXTJ` ease-in-out
     cubic (rj.java:109-141) and `UPXqT` ease-in-out sine (rj.java:69). The
     old per-frame `fade += 0.035` stand-in is gone.
  2. **Mode geometry rebuilt 1:1** from javap: Circle (skip rule, y-bob
     `h/2 + h/2·sin(rad(angle))`, scale
     `max(0.5, 0.7 − 0.2·hurt + 0.2 − 0.2·fade)`, core 0.3² @ −0.15, bloom
     1.0² @ −0.5/−0.5/−0.15); Soul (size accumulator + reset, inner
     `0.2+0.005·n3`, outer `1+0.005·n3`, y
     `h/1.5 + h/3·sin(rad(i/2 + angle/5))`); Ghosts (3×16 points, phase 120,
     bob `sin(rad(angle·2.5 + i·(ring+1))·3)/2`, size
     `max(0.24·i/15, 0.2)`, bloom ×2.4 @ z −0.001); Crystals (18 crystals,
     y `0.1 + h·|sin(i)|` — **i as radians**, quaternion
     `rotationTo((0,1,0), normalize(center − lerpedPos + (x,1,z)))`, bloom
     pass alpha `0.1·BloomAmount·fade`).
  3. **Target resolution 1:1** (ajC/ajD, javap 4157-4230): KillAura → MaceAura
     → Look fallback; the invented `isAlive()` filters were removed (the
     original only null-checks).
  4. **Mode-change callback restored** (`rPpMG.Vd` → ajK: `if (hGhYF != null)
     IffVm.dhg()`), via a `ModeSetting.onChange` subclass (XRay convention).
  5. **`ajA(gM)` is NOT a tick handler**: `gM` is fired by
     `bootstrap/mixin/accessors/ClientWorldEventBridgeMixin.java:53-64`
     (`method_8525` = `ClientWorld.disconnect`) — i.e. world-unload cleanup
     `IffVm.dhg(); Eupjj = null;`. Implemented on the world-null guard
     (Particles/Ambience convention; the rebuild has no disconnect event).
  6. Settings 1:1: `Circle/Soul/Ghosts/Crystals` option labels (capitalised,
     matching HitParticles/HoleEsp precedent), Speed 1/1/20/10, Bloom Amount
     1/1/5/5, Look true, Ignore Walls false, Bloom true, Hurt Animation false,
     Bloom Amount visibility ⇐ Bloom (`SfkMU.Vf(slRcN::WF)`, dz.java:188).
  7. Byte-exact `coc` (clamped lerp), `cob` (alpha ×) and `coe` (RGB ×0.5)
     colour math from `mG_.class`.
- Remaining gaps:
  - **[U] `jk.bDn` variation constants**: `jk.bDo` mixes
    `(System.currentTimeMillis()/seed + index) % C1`, normalises by C2/C3 and
    picks from `{colour, colour·0.5}` (jk.class bytecode) — C1..C3 are
    DES-encrypted in `jk`. Port uses 360/0/0 (labelled high-probability guess
    in the javadoc); the structural alternation is 1:1.
  - **Framework limitation (visual)**: textures `glow`/`ghosts` are not in the
    rebuild and the `kM`/`kK` batchers are native — billboards are drawn as
    camera-facing quads via `RenderLayers.debugFilledBox()` (same convention
    as SoulEffects/Particles). Geometry, counts, colours, per-frame order and
    alphas are exact.
  - **[U] Ignore Walls**: the original switches `kS cHVCf`/`MRndq` vs
    `defaultState()` (only flag `duo` differs, dz.java:187-188); no equivalent
    layer exists here, so the setting is carried without effect (documented).
  - **[U] `rj.Xmkbr`-linear angle ease**: `rh` default easing is linear
    (rh.java:14) — ported as such; nothing else is read.
- Evidence: `casesafe/payload-decrypted/sixtwo/dz.java` (all cited line
  ranges), `javap -c` dz.class (ajB 2204-2318, ajE 1736-2097, ajF 2319-2720,
  ajG 2721-3050, ajH 3111-3549, ajC 4157-4230), `full-dump.jsonl` validation
  120/120, `payload-named-cfr/sixtwo/{rk,rh,rj}.java`, `mG_.class` bytecode,
  trace 2026-10-17 dz (`ajB→ajC→ajD` confirms the resolution order per frame).

## dv — Chams (`render/Chams.java`)

- **Post-fix parity: ~80% · status: partial (native shader pipeline absent) ·
  fixed: yes**
- Settings: 46/46 values byte-verified against the constructor
  (`dv.java:118-734`, `.Vy/.Vw/.Vx/.VA` chains dv.java:210-686). Fixes:
  1. Mode option labels → original `Glass/Water/Chrome/Liquid Metal`;
     presets → `Default/Neon/Chrome/Ocean/Toxic/Fire`.
  2. **Light Angle suffix recovered = `" deg"`** (static-init cipher with
     `IOGuL ^ 46605361488946`, payload `97 BE A5 C8 BF 6F E6 63`).
  3. Visibility wiring 1:1 (dv.java:687-725, `preset ⇐ Liquid Metal`).
- Behavior fixes:
  1. **Collection moved to the world-render frame with the exact aiI order**
     (dv.java:966-1048): frustum `jJ.bIB` → `Entities` set `jWIlg.VX` →
     `self && !ApplyToOwnPlayer` → `self && firstPerson`. The invented
     `isAlive()` filter is gone.
  2. **`aiM` ported 1:1** as `shouldHideOriginal(Entity)` (javap 7021-7116):
     enabled → Hide Original → `!YNOIY` → entity ≠ null → `bab()` →
     not self → in set. (`kn.YNOIY` mirrored as `isChamsBatchActive`.)
  3. **`aiK` ported** as `shouldCancelNameplate()`.
  4. **Spec correction (bytecode, javap 7997-8120)**: `aiJ` cancels the model
     iff `NPcDw.WF() && !kn.YNOIY && bab()` (then entity/set/self checks) —
     i.e. *no* suppression while Hide Original is off, and *none* during the
     batch (the nested model render must proceed). `handlers/dv.md` §Per-handler
     states the opposite; the port follows the bytecode (mirrored in aiM,
     which agrees).
  5. `isChamsBatchActive` cleared on disable (YO convention).
- Remaining gaps:
  - **[N]** the four shader passes `kj.bPr/bPs/bPt/bPu` and the
    `lH`/`kn.bQt` replacement-model queue (argument order recovered,
    `handlers/dv.md` §Per-handler 4) — native; no consumer in the rebuild.
    The port exposes the collected entities and draws vanilla boxes as the
    visual stand-in. Capture condition: run the original with Chams + a
    matching entity and dump the `kj`/`lH` calls.
  - **[N]** `ro.diF` preset tables (aiL, dv.java:1171-1173) — native; the
    Preset mode is carried but does not rewrite the Liquid-Metal settings.
  - **[U]** the aiJ self pass-id constant `aiS("z", 13256, …)` (dv.java:1339)
    — recoverable with the same decryptor once dv's 116-entry table is
    rebuilt; the `gp.sZ.bbn()` meaning is unresolved anyway, and the rebuild
    has no entity-model-render event, so `aiJ` is exposed through aiM only.
  - **Framework limitation**: the `Entities` set (`cF`, empty by default —
    only `.VS(jg$tJ.OCdZM)`, no `.VT(...)` seed) is a plain entity-type set,
    not a GUI setting (shared gap with fF/dl/do/ds/du/dw/dY, see batch-19
    note 3).
- Evidence: `casesafe/payload-decrypted/sixtwo/dv.java` (cited lines),
  `javap -c` dv.class (aiM 7021-7116, aiI 7116-7451, aiJ 7997-8120), static
  initializer dv.java:739-838 (suffix cipher), `full-dump.jsonl` 782 records
  (single key `135552457227801`), trace 2026-10-17 dv (class load only).

---

## Summary table

| id | status | parity | fixed |
|---|---|---|---|
| dz | ported | ~93% | yes |
| dv | partial (native shader pipeline absent) | ~80% | yes |

## Changed files

- `src/main/java/dev/opengrim/modules/render/TargetEsp.java` (dz: full rewrite
  — recovered constants, rk/rh animator ports, 4 mode renderers 1:1, target
  resolution, mode-change callback, disconnect cleanup, citations)
- `src/main/java/dev/opengrim/modules/render/Chams.java` (dv: option labels,
  recovered " deg" suffix, per-frame aiI collection order, aiM/aiK predicates,
  `isChamsBatchActive`, citations)

## Notes for the orchestrator

1. **Spec corrections to fold into the ledgers:**
   - `specs/casesafe/handlers/dz.md` §Unrecovered: all DES ints recovered
     (fade 300/700/100 ms; caps 70/70/800 ms; bounds 360/360/360; Soul
     threshold 50, reset 100; ring phase 120; seeds 10/10) and textures
     `glow`/`ghosts`; also §Runtime model "end-of-tick handler" is wrong —
     `gM` = `ClientWorld.disconnect` (bootstrap mixin `method_8525`).
   - `specs/handlers/dv.md` §Per-handler `aiJ` gate polarity is inverted vs
     bytecode (cancel iff Hide Original ∧ ¬batch ∧ `bab()`); aiM returns
     **false** when `kn.YNOIY` is set. `CRjla` = `" deg"`, not `"°"`.
2. The dz constant-recovery script is reproducible (PowerShell + .NET DES):
   key `Adunk = 48869455257838`, tables built from the class's own static-init
   strings; validation 120/120 against `full-dump.jsonl`.
3. `dz` visual is the one non-1:1 area (no `glow`/`ghosts` textures, no
   `kM`/`kK` batchers); if the orchestrator ever ships those textures, only
   the `quad(...)` calls need to become textured billboards.
