# Wave-1 static re-verification — group B (batches 04+05)

Date: 2026-10-18 (session tag `audit-2026-10-17`). Scope: the 20 wave-1 modules of
batches 04+05 — `fP fh eE dP eU eR es fd fR eu fz dD dK fL fC em fA eO dS eF` —
re-attacked with the matured toolkit (decompile + `javap` bytecode + decrypted
pool `analysis/decrypted/full-dump.jsonl` + the 2026-10-17 trace + the case-safe
Ghidra corpora + the decrypted DLL image `analysis/ghidra/dumps/jna-decrypted-v2.dll`).
Surgical edits only; every changed file compiles (`compileJava` exit 0 at each step).

Evidence base used this pass (new, beyond the wave-1 reports):

- `analysis/decrypted/full-dump.jsonl` — per-class `args ^ raw` key groups and the
  presence/absence of `(IJ)Ljava/lang/String;` records per class.
- Widget bytecode: `casesafe/payload-named-cfr/sixtwo/{cA_,cB_,cC_,cD_,cJ_,cK,cF_,ct,cu,cv,cw,cz}.java`,
  `payload-named-cfr/sixtwo/{cK,cz,cw}.java`, `payload-cfr/sixtwo/cF_.java`,
  `gui-src/sixtwo_77.java` (mU helpers), `sixtwo_8.java` (cA).
- Bootstrap mixin bytecode: `analysis/jars/bootstrap-raw/mixin/accessors/LivingEntityJumpEventBridgeMixin.class`
  (`javap -c -p -v`) + `yarn-1.21.11+build.6.tiny` name resolution.
- Decrypted DLL image pool dump (tool: `pool_dump.py`, same read path as
  `analysis/tools/ghidra/stitch_class.py` — `*0x301ee50` pool pointer, RVA math).

## [V] re-attack — result: no statically recoverable suffix in this group

Every module class in this group is a **j2cc-native class**: `<clinit>` is
`Loader.doInit(<cls>.class)` + a native stub (verified with `javap -p -c` on
`jar-casesafe/sixtwo/<id>[_].class`, e.g. `sixtwo.fh`), so every suffix static
(`NXMEC` fh, `pyZOh` eU, `eVFHp` fd, `ymMTJ` fR, `yJtAG` eu, `ddesD` fz,
`NSrLe` fA, `feInP` eF) is assigned **by native code**, not by a Java clinit.

Checks performed (all negative, cited):

1. **Dump coverage.** `full-dump.jsonl` per-class record census for this group:
   only `fC` (2 × `aSD` `(IJ)Ljava/lang/String;` → `" %"`) and `fL`
   (2 × `aVl` → `" ms"`) contain *string* records — both already recovered by
   wave 1. All other 18 classes have int-only records (constructor char codes /
   indices / module id), e.g. `sixtwo.fh` 37 × `aJl e (IJ)I`, `sixtwo.eU`
   29 × `aDN o (IJ)I`. No suffix site was ever evaluated at runtime.
2. **Class file.** `javap -v sixtwo.fh` shows the suffix field
   `private static String NXMEC` with no `ConstantValue`, no large `Utf8`
   ciphertext constant (contrast dj/fS, whose clinit builds the DES table from
   embedded strings) and no trailing data after the class structure (parsed
   the class file: `remaining = 0`).
3. **Runtime pool (decrypted DLL image).** Dumping the class's pool windows from
   `jna-decrypted-v2.dll` yields **names only** (fields/methods/descriptors),
   e.g. `sixtwo.fh` @ `0x11b99,0x2dd` = `… | ZCUlU | NXMEC | aJi | sixtwo/fi | …`;
   `sixtwo.eU` @ `0xfbbe,0x2aa` = `… | pyZOh | aDK | …` — the ciphertext tables
   live in the VM's native state, not in the pool.
4. **Decryptor body.** The class decryptors are native (`fh.aJj(IJ)I`,
   `eU.aDL(IJ)I`, …) and their Ghidra bodies are VM-interpreted
   (`BLOB_DECRYPTOR` stub + opaque arithmetic over `_DAT_18327xxxx` state,
   cf. `casesafe/handlers-stitched/sixtwo_fh_.c` FUN_18c9c3220) — no readable
   DES algorithm/table, so a re-implementation is impossible from the corpora.

Conclusion: for this group the suffixes stay `[V]`-blocked at the *native* level
(they are `[N]` in practice); the existing `[G]` label + labelled guess in each
javadoc is kept and no invented value was introduced. This matches the
independent findings of batches 18/20/22/26/27/28/29 for other native-clinit
suffixes (`EbxJv`, `zAhcx`, `OTglH`, …).

## Recovered widget semantics (shared, used by the fixes below)

`javap`/decompile of the setting-widget classes (these are framework classes, not
modules) pins the behaviours the wave-1 reports had left as guesses:

| widget | recovered semantics | citation |
|---|---|---|
| `cA` | **range slider**: state `MutablePair<Double,Double> wJgtl`; value accessor `UN()` = `mU.cpR(this)` = `mU.cpP(left,right)` = `pcazh.nextDouble()*(right-left)+left` → uniform draw in `[left, right)` per read; `UI(a,b)` sets the default pair | `cA_.java:37, 219-221, 557-559`; `sixtwo_77.java:125-127, 215-219`; consumers `mm.java:57-58`, `fJ_.java:73`, `ff.java:370` |
| `cC` | plain double slider: `Vy` step / `Vw` min / `Vx` max / `VA` value / `Vz` suffix; getters `VB()` float, `VC()` int | `cC_.java:57-79, 119-125, 151-186` |
| `ct`+`cu` | radio group; default = **index 0** (`ct` ctor sets `kErPl = 0`); `cu.SY()` is the only way to mark a different default (`SN(indexOf(this))`); behaviour reads `cu.SZ()` = `IopEl && selected` (92 `.SZ()` call sites vs 58 `.SY()` markers) | `ct.java:33-41`; `cu.java:29, 42, 174-198, 200-202`; consumers `de.java:810/1311-1371`, `eo.java:111` |
| `cv`+`cw` | multi-select group; `cw.Tz()` = `cv.To(this)` marks a child **default-selected**; behaviour reads the effective gate `cw.TC()` = `RDnKR && selected` — **116 `.TC()` call sites, zero `.TF()` reads** of the raw flag | `cw.java:50-51, 152-181`; `cv.java:40-126, 142-144`; consumers `cU_.java:288-352`, `dG_.java:363-640`, `cR.java:580-715`, `cW.java:849-955` |
| `cz` | slot-index set; field init = empty `HashSet`; `Uw(int...)` seeds it; `Uy()` tests the selected slot | `cz.java:26, 65-67, 106-115` |
| `cK` | item multiselect: `WM(set)` = picker selection, `WN(items)` intersects into the **effective** set `eAose` (`Xa`); behaviour predicates `WY/WZ/WW/WX` read `eAose`; `jc.GjreY = jc.bzN()` = all block items, `jc.WnbNG = jc.bzM()` = all items | `cK.java:121-199, 335-399, 552-573`; `jc.java:1335-1352, 1794-1810` |
| `cF` | entity-type set; ctor seeds the selection with `EntityType.PLAYER` | `cF_.java:29, 33-36` |
| `cD` | keybind: int key code (`taKVz`), `VO(code)` setter, `VN()` = `jb.byM(code)` | `cD_.java:26, 31-34, 81-82, 89-110` |

Port convention applied for `cA` (identical to the already-merged
`ClickAction`/`TargetMargin`/`HitParticles` ports): the single slider is the left
handle, the recovered second `UI` value is a fixed anchor, and the value is
sampled once per action — documented in each impl.

---

### fP — Anti-Cheat Detector

re-verified 2026-10-17: parity 75% (was 75%) | fixed: no

- No new evidence. The single `sixtwo.fP` dump record is the module id
  (`gf.aZL(108, …)`), the constructor declares no settings
  (`fP.java:33-36`), and the class has no suffix literal. Remaining gaps
  unchanged: [S] chat route `aWr(gN)` (no chat-receive event on the bus),
  [N] `aWt/aWq/aWp/aWv/aWw/aWx/aWy` bodies, [U] `vyRDw`/`DnMlW` pattern tables.
- no change — gaps remain [S]/[N]/[U].

### fh — Attribute Swap

re-verified 2026-10-17: parity 76% (was 70%) | fixed: yes

- **`cA` range semantics applied to Return Delay** (`UI(50.0, 100.0)`,
  fh.java:65): the delay is now a uniform draw in `[slider, 100]` ms sampled when
  the return swap is armed (`sampleReturnDelayMs()`), instead of a fixed
  `returnDelay` read (which used only the first pair element). Evidence:
  `cA_.java:37/219-221/557-559`, `sixtwo_77.java:125-127/215-219`, consumers
  `mm.java:57-58`, `fJ_.java:73`, `ff.java:370`.
- Javadoc: recovered `cA` paragraph + the existing trace citation kept.
- Remaining gaps: [V] suffix `NXMEC` (native clinit — see the [V] section);
  [G] swap mechanics (selected-slot switch vs stack exchange) and the component
  predicate chain; [N] `aJg(hw$tv)` body.

### eE — Parkour

re-verified 2026-10-17: parity 66% (was 65%) | fixed: partial

- Javadoc: Edge Distance's `cA` pair `UI(0.001, 0.001)` documented as
  **degenerate** (draw = exactly 0.001), so the port's plain `DoubleSetting` is
  1:1 (`cA_.java:37/557-559`, `sixtwo_77.java:125-127`). No code change needed.
- Remaining gaps: [N] `awz()Z` (the whole behaviour query), [S] caller contract,
  [G] on-ground/sneak/using gates.

### dP — Block Piercer

re-verified 2026-10-17: parity 54% (was 50%) | fixed: partial

- Javadoc: both set-default guesses are now **recovered facts** — `cF`'s ctor
  seeds the selection with `EntityType.PLAYER` (`cF_.java:29, 33-36`) →
  Entities default {PLAYER} ✓; `cK.WM(jc.GjreY)` selects all block items
  (`jc.GjreY = jc.bzN()`, `jc.java:1335-1352`), `WN(COBWEB)` intersects into the
  effective set (`cK.Xa`, `cK.java:121-199`) and the predicates read it
  (`cK.java:552-573`) → Allowed Blocks effective default {COBWEB} ✓. No code
  change (the port already used players=true / cobweb=true).
- Remaining gaps: [S] real EntityTypeSet/ItemSet widgets (framework addition),
  [N] `aoR/aoS/aoT` raycast/rebuild math, [U] `VX(Entity)Z` owner.

### eU — Air Anchor

re-verified 2026-10-17: parity 65% (was 65%) | fixed: no

- Checked: Chance is a `cC` **single** slider (eU.java:48) — the cA range rule
  does not apply; the impl's uniform `[0,100)` roll against the slider stays the
  labelled reading (no random-helper token exists in eU's pool window
  `0xfbbe,0x2aa` — the roll is VM-internal). `eV.aEq()` is native
  (`eV.java:321`) so the [S] polarity cannot be resolved statically.
- Remaining gaps: [V] suffix `pyZOh` (native clinit), [N] `aDC/aDI` placement
  body, [S] `mW` one-shot gate analog, [U] `eV.aEq()` polarity, [G] placement math.
- no change — gaps remain [V]/[N]/[S]/[U].

### eR — Wind Hop

re-verified 2026-10-17: parity 57% (was 55%) | fixed: partial

- Javadoc: the `cD` Activation Key widget's recovered shape recorded (int key
  code + `VO` setter + `jb.byM` name rendering; `cD_.java:26/31-34/81-82/89-110`)
  — `.VO(-999)` = unbound, so the port's `IntSetting(-999)` is 1:1 on the value.
- Remaining gaps: [N] `aCF/aCG/aCH/aCI` bodies, [G] the 500 ms `mT` threshold
  (VM-hidden), [U] `qJ` slot arbitration.

### es — No Push

re-verified 2026-10-17: parity 78% (was 70%) | fixed: yes

- **Default corrected**: "Entity Push" now defaults **off** (was on). Recovered
  rule: `cw.Tz()` = `cv.To(this)` marks a child default-selected
  (`cw.java:152-155`, `cv.java:40-126`) and the effective gate is
  `cw.TC()` = `RDnKR && selected` (`cw.java:157-181`) — the accessor the payload
  actually reads: **116 case-sensitive `.TC()` call sites** in the decompiled
  payload (`cU_.java:288-352`, `dG_.java:363-640`, `cR.java:580-715`,
  `cW.java:849-955`, …) and **zero** `.TF()` reads of the raw flag. es marks only
  "Block Push" with `.Tz()` (es.java:47) — "Entity Push" (es.java:61) has no
  marker, so `TC()` is false by default. This supersedes the wave-1 "both toggles
  default on from the `cw` field initializer" reading (which had used the raw
  `RDnKR` flag instead of the accessor the behaviour actually consults).
- Javadoc: recovered-defaults paragraph; the hd/hq event + mixin wiring kept.
- Remaining gaps: [G] riptide exemption scope (shared es/eu window), [N] `aup/auq`
  bodies.

### fd — Auto Dripstone

re-verified 2026-10-17: parity 60% (was 60%) | fixed: no

- Checked: cooldown is a `cC` single slider (fd.java:38) — the cA rule does not
  apply; no new evidence for the geometry/plan builders or the qN arbitration.
- Remaining gaps: [N] `aHU/aHV` + plan builders, [S] qN arbitration analog,
  [V] suffix `eVFHp` (native clinit), [G] target scan/plan sequencing/unit.
- no change — gaps remain [N]/[S]/[V]/[G].

### fR — Client Sounds

re-verified 2026-10-17: parity 77% (was 75%) | fixed: partial

- Javadoc: the Sound Type group's default is now **evidenced** (radio default =
  index 0 unless `cu.SY()` marks another; `ct.java:33-41`, `cu.java:200-202`;
  fR's ctor marks nothing) → default "Normal" ✓ (no code change).
- Remaining gaps: [S] consumer wiring (dQ does not query the profile yet),
  [V] suffix `ymMTJ` (native clinit).

### eu — Trident Boost

re-verified 2026-10-17: parity 80% (was 80%) | fixed: no

- Checked: Cooldown is a `cC` single slider (eu.java:37) — the cA rule does not
  apply; `SDRyJ` (cJ) gate polarity stays [G]; no new static evidence.
- Remaining gaps: [N] `auJ(gD)` body, [S] gD firing site, [G] SDRyJ reading,
  [V] suffix `yJtAG` (native clinit).
- no change — gaps remain [N]/[S]/[G]/[V].

### fz — Auto Jump Reset

re-verified 2026-10-17: parity 80% (was 80%) | fixed: no

- Checked: Chance is a `cC` single slider (fz.java:36) — the cA rule does not
  apply. The [U] guard-order/latch items are not statically separable (all guards
  are pure early-returns; the pool token order conflicts with the inferred order).
- Remaining gaps: [U] guard order/latch re-arm/jump mechanism/packet type,
  [V] suffix `ddesD` (native clinit), [N] `aRT/aRU/YO` bodies.
- no change — gaps remain [U]/[V]/[N].

### dD — Item Frame Blocker

re-verified 2026-10-17: parity 84% (was 80%) | fixed: partial

- Javadoc: both `[G]` defaults are now **evidenced** — Mode default = first option
  "All Items" (`ct` ctor `kErPl = 0` + no `.SY()` marker on any of the three
  `cu` options, `ct.java:33-41`, `cu.java:200-202`, dD_.java:26-81); the "Slots"
  `cz` set is empty by default (field init `new HashSet<>()`, `cz.java:26`; dD
  adds no `Uw`/`UA` seed, dD_.java:82-93) → all nine toggles off ✓. No code
  change (the port already matched).
- Remaining gaps: [N] `akB(gO$tm)` body, [U] cancel scope / GlowItemFrame
  coverage, [S] use-event route.

### dK — Auto Lever Replace

re-verified 2026-10-17: parity 65% (was 65%) | fixed: no

- Checked: Work With's two `cw` children have no `.Tz()` → both default off,
  which the port already implements (and which the recovered `cw.TC()` rule now
  confirms — see the shared table). No other new static evidence
  (`ana/anc/anb/and/ane/anf` are VM-only).
- Remaining gaps: [U] target acquisition / `Work With` semantics / `jcQsa`
  meaning / interaction path, [N] `ana/anc/anb/and/ane/anf`.
- no change — gaps remain [U]/[N].

### fL — Auto Tool

re-verified 2026-10-17: parity 81% (was 75%) | fixed: yes

- **`cA` range semantics applied to Cooldown and Return Delay** (both
  `UI(50.0, 100.0)`, fL_.java:40/67): each switch draws a fresh cooldown and each
  break-end draws a fresh return delay from `[slider, 100]` ms
  (`sampleRange(...)`), replacing the fixed single-value reads. Evidence as in the
  shared table.
- Remaining gaps: [U] swap trigger source / scan scope / tie-breaking / `ol`
  division of work / creative guard, [N] `aVf/aVg`.

### fC — Velocity

re-verified 2026-10-17: parity 81% (was 80%) | fixed: partial

- Javadoc: Horizontal/Vertical documented as **degenerate `cA` pairs**
  (`UI(100.0, 100.0)`, fC.java:39/49 → drawn value exactly 100.0, identity), so
  the plain `DoubleSetting` port is 1:1 on the pair; the `[G]` formula and
  local-entity filter notes kept (trace: filter demonstrably exists and rejects
  before `aSx` — fC_.md "Unrecovered" 6 resolved, formula still unevidenced).
- Remaining gaps: [G] `aSx` formula, [U] `iU.bwT` delayed path, in-place-mutation
  substitute, [N] `aSw/aSx/aSy`.

### em — High Jump

re-verified 2026-10-17: parity 85% (was 80%) | fixed: partial

- **Jump-event surface recovered** from the bootstrap mixin bytecode
  (`mixin/accessors/LivingEntityJumpEventBridgeMixin.class`, `javap -c -v`):
  `@Inject(method_6043 = LivingEntity.jump, HEAD, cancellable)` constructs
  `hs(this, method_6106() = getJumpVelocity(), method_36454() = getYaw())` and
  dispatches it; cancellation cancels the jump; two `@Redirect`s replace the
  vanilla reads with `hs.bde()` / `hs.bdf()`. So `hs`'s two floats are
  (jump velocity, yaw) and em's slice touches only `bde`/`bdg` (em.md
  "Per-handler") → the module rewrites the **vertical jump velocity** at jump
  time. The port's "multiply the just-set `velocity.y`" is the same value as the
  original's `bdg(bde() * setting)`; documented in the impl javadoc (the exact
  arithmetic inside `ati` stays VM-only). No code change.
- Remaining gaps: [U] `ati` arithmetic, `atk` acceptance condition, mode-callback
  semantics, [N] `ati/atj/atk`.

### fA — Potion Refill

re-verified 2026-10-17: parity 78% (was 72%) | fixed: yes

- **`cA` range semantics applied to Delay** (`UI(0.0, 50.0)`, fA.java:38-54): the
  delay is a uniform draw in `[slider, 50]` ms, re-sampled after each refill pass
  (`sampleDelayMs()`), replacing the fixed 0 ms read. Evidence as in the shared
  table.
- Remaining gaps: [U] swap mechanism (ClickType inferred from the fc twin),
  Hover semantics, delay unit, refill cadence, [N] `aSa`.

### eO — Auto Pearl Catch

re-verified 2026-10-17: parity 71% (was 65%) | fixed: yes

- **`cA` range semantics applied to Return Delay** (`UI(50.0, 100.0)`,
  eO.java:75-91): sampled in `[slider, 100]` ms per throw (`sampleReturnDelayMs()`).
- Javadoc: the visibility wiring is now **evidenced**, not a guess:
  `cB.Vf(Supplier<Boolean>)` is the visibility-supplier contract
  (`cB_.java:26, 345`) and `cJ.WF()` is the Return Slot getter
  (`cJ_.java:55`), so `ecyXJ.Vf(GzaZR::WF)` = "Return Delay visible iff Return
  Slot is on" — exactly what the port does.
- Remaining gaps: [U] pearl/wind-charge prediction math, mace phase, return-slot
  mechanics, delay units, [N] `aBt/aBu/aBv/YO`.

### dS — Hand No Clip

re-verified 2026-10-17: parity 74% (was 70%) | fixed: partial

- Javadoc: all three widget defaults are now **evidenced** — Ignore default =
  "All" (`ct` index 0, no `SY`), Work On's Place/Break both `.Tz()` →
  default-selected (`cw.TC()` rule), Blocks effective default = {COBWEB}
  (`cK.WM(jc.GjreY)` = all block items ∩ `WN(COBWEB, PAINTING)`; PAINTING is not
  a block item → {COBWEB}). No code change (the port already matched).
- Remaining gaps: [U] `apD()` predicate (attack-key participation), `hm`
  firing-site semantics, [N] `apC/apD`.

### eF — Spear Reach

re-verified 2026-10-17: parity 83% (was 78%) | fixed: yes

- **`cA` range semantics applied to Return Delay** (`UI(50.0, 100.0)`,
  eF.java:91-104): sampled in `[slider, 100]` ms per swap (`sampleReturnDelayMs()`).
- Javadoc: Allowed Items' effective default is now **evidenced** — `WM(jc.WnbNG)`
  (= all items, `jc.bzM()`, jc.java:1794-1810) ∩ `WN(12 swords/axes)` =
  exactly those twelve (`cK.Xa`, `cK.java:121-199`; predicates read `eAose`,
  `cK.java:552-573`) → the port's twelve default-on toggles are correct.
- Remaining gaps: [G] reach write formula, [U] swap choreography / `SPEARS`
  attribution / `gZ$tt` semantics, [V] suffix `feInP` (native clinit),
  [N] `awH/awF/awG/awE/awI/awJ/awK/awO`.

---

## Summary

| id | parity | was | fixed |
|---|---|---|---|
| fP | 75% | 75% | no |
| fh | 76% | 70% | yes |
| eE | 66% | 65% | partial |
| dP | 54% | 50% | partial |
| eU | 65% | 65% | no |
| eR | 57% | 55% | partial |
| es | 78% | 70% | yes |
| fd | 60% | 60% | no |
| fR | 77% | 75% | partial |
| eu | 80% | 80% | no |
| fz | 80% | 80% | no |
| dD | 84% | 80% | partial |
| dK | 65% | 65% | no |
| fL | 81% | 75% | yes |
| fC | 81% | 80% | partial |
| em | 85% | 80% | partial |
| fA | 78% | 72% | yes |
| eO | 71% | 65% | yes |
| dS | 74% | 70% | partial |
| eF | 83% | 78% | yes |

14 modules improved (6 `yes`, 8 `partial`); 6 unchanged (`fP eU fd eu fz dK` — none
had new static evidence). Behavioural (non-javadoc) fixes: **fh, fL, fA, eO, eF**
(cA range sampling) and **es** (Entity Push default corrected).

## Changed files

- `src/main/java/dev/opengrim/modules/utility/AttributeSwap.java` (fh — cA sampling + javadoc)
- `src/main/java/dev/opengrim/modules/combat/AutoTool.java` (fL — cA sampling ×2 + javadoc)
- `src/main/java/dev/opengrim/modules/combat/PotionRefill.java` (fA — cA sampling + javadoc)
- `src/main/java/dev/opengrim/modules/movement/AutoPearlCatch.java` (eO — cA sampling + `cB.Vf` evidence)
- `src/main/java/dev/opengrim/modules/combat/SpearReach.java` (eF — cA sampling + cK evidence)
- `src/main/java/dev/opengrim/modules/movement/NoPush.java` (es — Entity Push default + `cw.TC()` evidence)
- `src/main/java/dev/opengrim/modules/utility/ItemFrameBlocker.java` (dD — defaults evidenced)
- `src/main/java/dev/opengrim/modules/world/BlockPiercer.java` (dP — set defaults evidenced)
- `src/main/java/dev/opengrim/modules/utility/ClientSounds.java` (fR — group default evidenced)
- `src/main/java/dev/opengrim/modules/combat/HandNoClip.java` (dS — widget defaults evidenced)
- `src/main/java/dev/opengrim/modules/combat/Velocity.java` (fC — degenerate cA note)
- `src/main/java/dev/opengrim/modules/movement/HighJump.java` (em — jump-event surface recovered)
- `src/main/java/dev/opengrim/modules/movement/WindHop.java` (eR — cD widget shape)
- `src/main/java/dev/opengrim/modules/movement/Parkour.java` (eE — degenerate cA note)

No framework/mixin/event files were touched; `analysis/docs/PARITY.md` and
`analysis/docs/PROGRESS.md` were left to the orchestrator. Compile:
`.\gradlew.bat compileJava -q --offline` → exit 0 (re-run after every edit batch).

## Spec corrections for the orchestrator to fold in

- `specs/00-framework.md` §setting types: `cA` is **not** a plain numeric slider —
  it stores a `MutablePair<Double,Double>` range and its value is a uniform draw
  in `[left, right)` (`cA.UN()` → `mU.cpR` → `mU.cpP`); `UI(a,b)` is the default
  pair. Also: `ct`/`cu` default = index 0 unless `cu.SY()`; `cv`/`cw` `Tz()` =
  default-selected and the behaviour accessor is `TC()`; `cz` default = empty set.
- `specs/handlers/em.md` §Unrecovered 1: the `hs` floats are (jump velocity, yaw)
  — the bootstrap mixin replaces `LivingEntity.getJumpVelocity()`/`getYaw()` in
  `jump()`; em touches only `bde`/`bdg`.
- `specs/handlers/es.md` §Settings: Entity Push defaults **off** (no `Tz()`).
- `specs/handlers/fC_.md` §Unrecovered 1: the pair is degenerate (100/100), so the
  percentage slider's default draw is exactly 100 — the formula itself remains
  unevidenced.
- `specs/handlers/dD.md`, `dS.md`, `dP.md`, `fR.md`: the [G]-flagged widget
  defaults listed there are recovered (see the per-module sections above).
