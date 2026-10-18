# Batch 19 audit — fF, dQ

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-19 subagent.
Modules: `fF` Trigger Bot (`combat/TriggerBot.java`), `dQ` Hit Sounds
(`utility/HitSounds.java`).

Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (one transient
failure from a concurrent edit in `KillAura.java` — foreign to this batch —
cleared on retry).

Sources per id from `analysis/tools/audit/source-map.tsv`, declared-class
verified before use: `fF` = `casesafe/payload-decrypted/sixtwo/fF_.java`,
`dQ` = `payload-decrypted/sixtwo/dQ.java`. Helpers read from
`casesafe/payload-named-cfr/`: `ox` (raycast), `iX` (`bxM`), `jg` (`bBs`,
`bBT`), `ov` (`cGA`/`cGH`), `qL` (`dbX`), `cF`/`cz`/`cA`/`cJ`/`ct`/`cu`/`cv`/
`cw`/`cC`, `mA`/`cD`, plus the case-safe variants (`cW_.java` is the cW module,
not the `cw` widget). Preset contents `jg$tJ.OCdZM` taken from the recovered
`javap -c` analysis in `analysis/specs/casesafe/handlers/dY_.md:33-54`.
Trace evidence: `analysis/traces/2026-10-17/` (ENC names `fF_`, `dQ_`).
Constants cross-checked against `analysis/decrypted/full-dump.jsonl`
(`sixtwo.dQ` 872 records, `sixtwo.fF` 793 records).

---

## fF — Trigger Bot (`combat/TriggerBot.java`)

- **Post-fix parity: ~86% · status: ported (decision body VM-resident) · fixed: yes**
- Settings: 21/21 originals present and exact — names, wrapper semantics and
  builder chains verified one by one against `fF_.java:74-491`:
  - `Target` cF `.VS(jg$tJ.OCdZM)` — default selection `{PLAYER}`
    (cF.java:34-36), candidate universe = `jg.bBT()` (jg.java:1400-1428).
  - `Items To Use` ct (Weapon Only 0 default / Custom Slots 1 — no `.SY()`, ct
    index default 0, ct.java:39-40,205-208); `Slots` cz (default empty,
    cz.java:26); `Hit Delay Mode` ct (Item Cooldown 0 default / Timer 1);
    `Cooldown` cA step 0.01 / 0.0-1.0 / 0.9; `Timer` cA 1.0 / 0.0-1000.0 /
    600.0 " ms"; `Attack Options` cv (Un Press Shield / Simulate Clicks — both
    cw with no `.Tz()`, and `cw` value = `RDnKR && cv.JIvPe.contains(this)`
    (cw.java:48-67,157-181) → **false** default, confirmed against the
    NameProtect precedent); `Target Options` cv (Ignore Walls / Friends /
    Naked / In Damage Tick / When Shielding — all false); `Critical Mode` ct
    (None 0 / Prioritize 1 / Only 2); `Cancel In Screens` cJ false;
    `Cancel On Use` cJ false; `Cancel Use Mode` ct (All Items 0 / Allow
    Shielding 1, visible iff Cancel On Use — `LQzFK.Vf(gBIsx::WF)`,
    fF_.java:490); `Range` cA 0.01 / 1.5-6.0 / 3.0 " blocks"; `When Holding`
    cJ false; `Hold Key` cD default `mA.sCBUa.cmO()` = 0 (mA.java:171-177);
    `Upper Cut` cJ false.
  - Slider suffixes byte-verified in full-dump.jsonl (`sixtwo.fF` `aTb`
    records: " ms", " blocks").
- Fixes (this session):
  1. **Hold Key was polled with `InputUtil.isKeyPressed`** — that is
     `GLFW.glfwGetKey` (javap-verified on the 1.21.11 merged jar), and GLFW
     returns RELEASE for the mouse-button codes 0..6 that the `mA` enum covers,
     so the shipped `When Holding` gate could never pass with the default
     (left click). Replaced with the repo's mouse-aware `keyDown` helper
     (`code <= GLFW_MOUSE_BUTTON_LAST` → `glfwGetMouseButton`), same convention
     as `ClickAction.java:155-163` / `AutoHitCrystal.java:182-196`; added the
     `key == -999` unbound guard (AimAssist parity).
  2. **Crit blocked-set completed**: `iX.bxM` (iX.java:482-582) includes the
     cobweb scan `jg.bBs` (jg.java:1189-1258) — the port skipped it. Added
     `critBlocked`/`inCobweb` with the original's exact order (blindness,
     levitation, cobweb, submerged, lava, climbing, flying) and exact scan
     (floor bounds of the box, `Box.contains(BlockPos)`, `isOf(COBWEB)`).
  3. **`cF.VX` + `jg.bBT` ported exactly**: `matches()` is now
     `!selected.isEmpty() && universe.contains(type) && selected.contains(type)`
     (cF.java:229-267; recovered structure dY_.md:49-54) and the universe is
     seeded by the faithful `jg.bBT` reflection (EntityType-typed declared
     fields whose generic argument is a LivingEntity class, minus ARMOR_STAND).
     The previous instance-level `instanceof LivingEntity && !ArmorStand`
     fallback (a type/instance approximation) is gone.
  4. **Raycast direction source corrected to `ox.cHn`**: `ox.cHr()` = the
     *pending* silent rotation `qL.dbX` (qL.java:106-108, our
     `RotationManager.rawPending()`), else the camera entity's interpolated
     yaw/pitch `ov.cGA` (ov.java:228-267) — previously the port used
     `effectiveRotation()` (qL.dbC) and `.normalize()`d the direction. Caster
     is now the camera entity (`ox.cGV`, ox.java:322-325), the ray predicate
     carries the `isSpectator() ||` bypass (ox.java:181-217) and the filter
     application moved fully into the predicate (`cHk`+`cHo` wrapping,
     ox.java:379-390,541-605).
  5. **Invented distance filter removed**: `passesFilters` gated on
     `player.distanceTo(entity) > range + 0.5` — not in any recovered code and
     divergent (eye-vs-feet distance could reject hits the recovered range²
     raycast accepts).
- Remaining gaps:
  - **[N]** The whole `aST(gH$th)` decision body (13 handlers / 142
    continuation blocks, `handlers-stitched/sixtwo_fF.c`) is j2cc-interpreted
    and decrypts against a live JVM — check order, comparisons and the attack
    invocation are not statically recoverable. Port keeps a labeled
    reconstruction: gate order, Ignore Friends/Naked/Shielding/In Damage Tick
    conjuncts, `isAlive`, crit-mode branches (None attacks unconditionally,
    Prioritize waits for the fall, Only Crits requires it), Upper Cut jump
    (0.15 vy — same stand-in as `Criticals.java:130`), Simulate Clicks
    (attack-key pulse), Un Press Shield (useKey release), attack execution
    (`interactionManager.attackEntity` + swing), hit-delay thresholds
    (Cooldown = attack-cooldown fraction, Timer = ms since last hit), Target
    Lock cross-check (`fg.aIT` is native, fg.java:111). Capture condition for
    all of the above: enable Trigger Bot against a player with known settings
    and log `aST` + the `interactionManager` call, which the 2026-10-17 trace
    did not reach (`aST` ×6, module enabled ~3.5 s, no target in range).
  - **[U]** `oV.cLb(double)` range transform (native, ox.java:123) not applied;
    **[U]** fG (W-Tap) `HrnPx`/`QYvrB`/`deLoo` and fH (Aim Assist)
    `aTx`/`JXduj` interplay (pool-proven reads, semantics unknown);
    **[U]** `aSU`/`aSV`/`aSW` visibility bodies (Hit Delay Mode / Items To Use
    wiring inferred, `QcPEg.Vf(aSW)` folded into the Custom Slots check).
  - **Framework limitation**: `cF` "Target" and `cz` "Slots" have no
    settings-widget equivalent (Set + accessors, same as AntiInvisible), so
    they are not GUI-exposed as registered settings.
- Evidence: `casesafe/payload-decrypted/sixtwo/fF_.java:74-491` (settings),
  `casesafe/payload-named-cfr/sixtwo/{ox,iX,jg,ov,qL,cF}.java` (recovered
  math), `handlers-stitched/sixtwo_fF.c` (native inventory),
  `handlers/fF_.md` (aST pool token list), full-dump.jsonl (suffixes),
  trace 2026-10-17 fF: `aST` enter/exit ×3 (≈1.76 s apart) — tick handler
  only, no behavior values.

## dQ — Hit Sounds (`utility/HitSounds.java`)

- **Post-fix parity: ~74% · status: partial (Custom URL [U]) · fixed: yes**
- Settings: 5/5 exact against `dQ.java:56-165` — `Hit Sound` ct (Custom 0,
  One 1 default via `.SY()` on LokgE, Two..Six), `Volume` ct `.SO(1)` ⇒ Custom
  default (Synchronized 0 / Custom 1), `Sound Volume` cC
  `.Vy(1.0).Vw(0.0).Vx(100.0).VA(70.0).Vz(" %")` (step/min/max/default/
  suffix; mapping verified in handlers/er.md:81), `Cancel Original Sound` cJ
  true, `Sound URL` cy max 2048 / default "". Visibility couplings exact:
  Sound Volume ⇐ Volume=Custom (`INtkR.Vf(wWQPU::SZ)`, dQ.java:164), Sound URL
  ⇐ Hit Sound=Custom (`gkxvg.Vf(this::apa)`, dQ.java:163, apa = `rccnf.SQ`
  Custom index). Category `gh.qBzlZ` → UTILITY, boot-disabled, no keybind.
  Suffix " %" byte-verified (full-dump `sixtwo.dQ` `apf` record).
- Fixes (this session):
  1. **Cancel now precedes the mode read** (pool order: `sfyvC` before
     `rccnf`, handlers/dQ_.md "Per-handler semantics" 2). Previously the
     Custom-mode early return skipped the cancel entirely; the recovered
     contract cancels on every matched sound, then selects the replacement.
     Net effect: Custom mode is silent while Cancel Original Sound is on —
     the [U] custom pipeline means no replacement plays (documented in the
     javadoc rather than papered over).
  2. Javadoc: custom-mode consequence and the `cy.Un(2048)` max-length
     framework gap now stated explicitly; trace note added.
- Remaining gaps:
  - **[U]** Custom-mode URL audio (`oc.cBL` async fetch + `qI.daR` raw
    playback, dQ.java:178 `aoZ`/`gxiKQ`/`FXFhS` machinery) has no rebuild
    equivalent — the feature is unimplemented by design, not approximated.
  - **[G]** Match needle `HIT_SOUND_MATCH = "entity.player.attack"` — the VM
    needle is unrecovered (only one `contains(CharSequence)` call is visible);
    labeled high-probability guess (the vanilla attack-sound family a
    hit-sound replacer targets).
  - **[G]** Preset One..Six → one vanilla sound + per-preset pitch
    (1.0..1.5) — the `oc` audio payloads are unrecovered; labeled.
  - **[G]** Gain handling: Custom → Sound Volume/100, Synchronized → 1.0 with
    the claim that the vanilla pipeline applies the PLAYERS category gain —
    javap-verified: `SoundSystem.getAdjustedVolume` multiplies by
    `GameOptions.getSoundVolume(category)` clamped 0..1 (the original's
    `method_1630` = `GameOptions#getCategorySoundVolume`, mappings.tiny), so
    the net Synchronized gain equals the original's readout; Custom nets
    INtkR × category gain (the spec's "final gain is combined with the
    PLAYERS category volume" reading). Labeled.
  - **[U]** The precise volume math, `qI.daR` argument list and the
    `FXFhS`/`gxiKQ` debounce state machine remain VM-only.
- Evidence: `payload-decrypted/sixtwo/dQ.java:56-165` (settings tree, char
  codes), `handlers/dQ_.md` (POOL[0xb040,0x1ea] token trace, native inventory),
  `mappings.tiny` + javap of the 1.21.11 merged jar (`getCategorySoundVolume`,
  `SoundSystem.getAdjustedVolume`), full-dump.jsonl (872 dQ records: one
  string " %", no needle), trace 2026-10-17 dQ: class load only — `aoY` never
  fired (capture condition: hit a player with the module enabled).

---

## Summary table

| id | status | parity | fixed |
|---|---|---|---|
| fF | ported (decision body VM-resident) | ~86% | yes |
| dQ | partial (Custom URL [U]) | ~74% | yes |

## Changed files

- `src/main/java/dev/opengrim/modules/combat/TriggerBot.java` (fF: mouse-button
  Hold Key poll, cobweb in `iX.bxM`, exact `cF.VX` + `jg.bBT` universe,
  `ox.cHn` direction/caster/spectator predicate, invented distance filter
  removed, citations/labels)
- `src/main/java/dev/opengrim/modules/utility/HitSounds.java` (dQ: cancel
  before mode read, custom-mode silence documented, max-length + trace notes)

## Notes for the orchestrator

1. **Concurrent-edit artifact**: the first compile failed on `KillAura.java`
   (lines 209/239/241/367/371) while another batch was mid-edit; the second
   run passed with no changes from this batch. No action needed unless that
   file lands broken in the merge.
2. **dQ Custom mode is intentionally feature-incomplete** ([U]): the module
   now cancels the original sound on match (1:1 with the recovered order) but
   plays nothing in Custom mode. If the orchestrator prefers a user-visible
   stand-in, the alternative is to skip the cancel in Custom mode — that
   diverges from the recovered order, which is why it was not chosen.
3. **Trigger Bot's GUI surface**: `Target` (cF) and `Slots` (cz) are Set-backed
   accessors, not registered settings (same as AntiInvisible/AimAssist), so the
   settings screen cannot edit them yet. A shared entity-type/slot-set widget
   would close this for fF/fH/dl/do/ds/du/dv/dw/dY at once.
4. Stale-spec note: `specs/casesafe/modules/fF_.md` line 55/71 and
   `handlers/fF_.md` line 55 call `fg.aIT`/`LOyUV`-style readings "inferred";
   the dQ handler-spec line 71 parenthetical "(Volume=Custom)" for `LOyUV` is a
   typo — `LOyUV` is Synchronized (index 0), `wWQPU` is Custom (index 1)
   (same file, "Settings→behavior"). Ports follow the corrected reading.
