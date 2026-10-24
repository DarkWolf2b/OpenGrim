# PARITY — OpenGrim vs Grim 4.4 module registry

> ⚠️ **CASE-COLLISION WARNING:** spec/decompile file names collide on Windows
> (`dL`/`dl`, `eY`/`ey`, `fQ`/`fq`, …). Verify the declared class inside a file
> before trusting it; ground truth: `analysis/decompiled/jar-casesafe/`,
> recovered trees: `analysis/decompiled/casesafe/`. See
> `analysis/docs/CASE-COLLISION-WARNING.md`.

Tracking porting status against the 162-module registry in
`../../analysis/jars/bootstrap-raw/offline/features/metadata.txt`.
(Note: HANDOFF.md says 163 modules; the actual registry contains 162 entries.)

Status values: ported | partial | stub | not-started.
All 162 modules are registered in
`../../src/main/java/dev/opengrim/modules/Modules.java` as direct ports of
their decompiled originals. "partial" = compiles but still diverges from the
original in ways itemized in the Divergences section at the end of this
file (see the
per-module javadoc with the original file+line citations). Setting names/ranges come
from the decrypted constant pool (`../../analysis/decrypted/full-dump.jsonl`, folded
sources in `../../analysis/decompiled/payload-decrypted/`). Parity confidence comes
from the porting reports in `../../analysis/port/reports/`.

## Update history (newest first)

- **2026-10-24 (rendering pipeline Section 3 & Criticals aQo uplift)** — Criticals
  implements full `aQo` packet queue filtering movement and click slot packets,
  with micro-offset jump packets in web_lag mode and burst FIFO release;
  BloomRenderer reproduces `kl.bQd`/`kl.bQg` post-process HDR bloom pipeline with
  multi-LOD pyramid sampling and composite shaders, wired to SoulEffects; Glow
  replaces hardcoded types with real `EntityListSetting` with living-minus-armor-stands
  universe. Aggregate 80.5% → 80.8%. Details in Re-audit 2026-10-24 (wave 3).
- **2026-10-24 (random modules parity wave: dZ/fo/dA/de/dM)** — Fast Place
  switches to functional `ItemListSetting` for valid blocks and `MinecraftClientAccessor`
  direct cooldown clamp; Anti Bot adds static `isBotActive` query hook wired into
  KillAura, latency <= 0 check, and velocity check; Elytra Target supports offhand/mainhand
  rockets and delayed slot restore; Hand Chams repairs glass mode alpha/color fallback;
  Auto Market adds /ah reopen command and rule creation slot feedback. Aggregate
  80.1% → 80.5%. Details in Re-audit 2026-10-24 (wave 2).
- **2026-10-24 (worst-modules parity wave: dP/fB/fa/fm/di)** — Block Piercer
  now uses real `EntityListSetting` + `ItemListSetting` with `{PLAYER}` and
  `{COBWEB}` defaults and enforces membership; Auto Shield Break automatically
  switches to hotbar axes, schedules return slot restoration and gates manual
  mode; Auto X-Bow implements 8-state crossbow cart automation with held/hotbar
  crossbow charging, `RotationManager` TNT minecart aim and shot release;
  Pearl Chaser routes aim through `RotationManager` instead of direct camera
  mutations and restores hotbar slots after throwing; 2D ESP wires nametag
  suppression to `EntityRendererMixin`. Aggregate 79.1% → 80.1%. Details in
  Re-audit 2026-10-24.
- **2026-10-24 (HUD/commands/input)** — array list ported to the recovered
  `ce`/`co.NV` panels + MSDF fonts, original commands recovered with the Wine
  harness and implemented (`/vclip`, `/hclip`, `/ui`, `/reset`, `/inventory`,
  `/fakeplayer`, `/emote`, `/marketui` gap), search now indexes settings and
  scrolls to them, key presses no longer move the player while the GUI is open,
  and slider drags are routed to the pressed row. `fH` 58; aggregate 79.1%.
  Details in Divergences Wave 14.
- **2026-10-24 (UI/input fixes + re-score)** — Liquid Glass corner smoothing
  fixed (`ii2.bjm()` semantics), Aim Assist now applies the real rotation,
  the `bh` Keybind popup is wired, the `bc` search overlay is implemented,
  the array list honors `gg.bai`/`gg.baj`, mouse/key polling no longer emits
  `GLFW_INVALID_ENUM`, and the automatic workflow keeps one pre-release.
  Re-scored `fH` 55, `eV` 58, `eX` 56, `eR` 62; aggregate 79.0%. Details in
  Divergences Wave 13.
- **2026-10-24 (combat review: eV/eX/eR)** — Auto Crystal's placement scan no
  longer requires air support (the old check could never place on
  obsidian/bedrock); Anchor Macro now triggers on the real block-use event and
  completes Press sequences after mouse release; Wind Hop's Activation Key is
  mouse-aware and the downward aim reaches the use packet. Search behavior was
  checked, not changed: the original has a separate `bc` search overlay, not
  type-to-focus. Details in Divergences Wave 12. No re-score.
- **2026-10-24 (keybind rows + automatic builds)** — the `cD` keybind settings
  now render as the recovered 18-unit `y` rows instead of integer sliders:
  `KeybindSetting` + `KeybindWidget`, all 27 key-code `IntSetting` declarations
  converted, keyboard/mouse capture in the settings popup. Added
  `.github/workflows/automatic-prerelease.yml` (push to `main` → automatic
  GitHub pre-release). Parity rows keep their scores: the setting values and
  defaults are unchanged; only the widget rendering/interaction now matches
  `y.dn() = 18`. Details in Divergences Wave 11. Commit `a2f3e9a` is on
  `origin/main`; workflow run 1 published pre-release `auto-build-1-1`.
- **2026-10-21 (module recovery queue)** — 24 module rows re-scored after the
  avoidable-gap queue landed: `cW`, `dc`, `cQ`, `dv`, `db`, `dw`, `ff`, `dt`,
  `dq`, `dI`, `dh`, `fX`, `dz`, `cR`, `dl`, `dp`, `dn`, `da`, `dg`, `do`, `cZ`,
  `de`, `du`, `cS`. The re-score table, evidence, residuals, and baseline-queue
  disposition are in the new "Re-audit 2026-10-21 — module recovery queue"
  section. `di` remains 50% (plan only). No commit/push.
- **2026-10-17 (waves 2–3)** — full 162-module verification completed: batches 6–29 (112 modules) re-audited + fixed by parallel auditor/fixer passes (batches 28–29 were the giant single-class modules; batch 30 closes the `ff`/`dq` case-twin gap left by batch 19's mix-up). Module rows now carry `verified 2026-10-17, parity NN%`; per-module residual gaps are scale-classified in the new "Re-audit 2026-10-17 (waves 2–3)" section below the trace-re-check subsections; the divergence log gained wave 4; flagged spec corrections were folded into the `analysis/specs` handler/module specs. ClickGUI passes 1+2 landed in the same wave (visual parity ≈18% → ≈81% → ≈89%; see its Divergences block).
- **2026-10-17 (later)** — full 162-module verification begun: wave 1 (batches 1-5, 50 modules) re-audited + fixed. Module rows now carry `verified 2026-10-17, parity NN%`; residual gaps are scale-classified in the new "Re-audit 2026-10-17" section below the 2026-10-16 re-audit. ClickGUI audited and rewritten in the same wave (visual parity ≈18% → ≈81%; see its Divergences block).
- **2026-10-17** — PARITY.md became the single parity ledger: the append-only divergence log (formerly `analysis/PARITY-DIVERGENCES.md`) and the 2026-10-16 re-audit of the 42 low-parity modules (formerly `analysis/docs/PARITY-BURNDOWN.md`) were merged verbatim as dated sections below the table; both originals moved to `analysis/docs/archive/`. Future re-audits and divergence waves append here with dates — no new status docs.
- **2026-10-16** — re-audit of the 42 low-parity modules against the current code (32/42 row Notes stale or partially stale; 3 fix modules landed; see the Re-audit 2026-10-16 section).

| Class | Module | Registry key | Status | Spec | Notes |
|---|---|---|---|---|---|
| di | 2D ESP | 158 | partial | [spec](../../analysis/specs/modules/di.md) | render/Esp2D.java (2026-10-24 re-score, parity 80%) — nametag suppression wired into EntityRendererMixin; profile registry/screen projection open. |
| fH | Aim Assist | 8 | ported | [spec](../../analysis/specs/modules/fH.md) | combat/AimAssist.java (2026-10-24 re-score, parity 58%) — Smooth yaw/pitch approach toward best target inside FOV cone, with jitter, prediction offset, switch/locked target retention, health/distance priority; 2026-10-24: real yaw/pitch are now applied (the original pool names `Entity.setPitch(F)`), Hold Key is mouse-aware, and the linear step/noise were replaced by an exponential approach + 3-octave smooth value noise; native target predicate/prediction/FOV render remain — see Divergences Wave 13/14 |
| eU | Air Anchor | 114 | partial | [spec](../../analysis/specs/modules/eU.md) | world/AirAnchor.java (verified 2026-10-17, trace re-check 2026-10-17, parity 65%; trace: aDC ×2 = eV.aEq→0 + gg.bab→1 + HyfoP.crA, YO = gg.YO + crA; aDI untriggered — capture: anchor place attempt) — When holding a respawn anchor with no block crosshair hit, synthesizes a BlockHitResult against the nearest solid neighbor of the aimed air block and |
| ej | Air Stuck | 43 | partial | [spec](../../analysis/specs/modules/ej.md) | movement/AirStuck.java (verified 2026-10-17, parity 90%; trace-recheck 2026-10-17) — Captures position on enable, pins setPos + zero velocity + zero fall distance each tick. Direct port of "Freezes all movement". |
| dh | Ambience | 123 | ported | [spec](../../analysis/specs/modules/dh.md) | utility/Ambience.java (verified 2026-10-21, parity 86%) — Change Time (def on) with Time Mode (Presets/Custom) and Time presets (Dawn/Morning/Day/Evening/Sunset/Night/Real Time — decrypted names) + Time Value; 2026-10-21 recovery: Fog Range is the real two-handle cA range; preset times, fade/particle bounds, billboard and fog consumer remain DES/absent. |
| eX | Anchor Macro | 27 | ported | [spec](../../analysis/specs/modules/eX.md) | world/AnchorMacro.java (2026-10-24 re-score, parity 56%) — Hold-key state machine: switch to anchor (switch_delay) → place at crosshair face (anchor_delay) → charge with glowstone dust (charge_delay) → detonat; 2026-10-24: triggers from the real block-use event (`UseBlockEvent`/`gO$tm`), Press completes after release, and Safe Anchor Hold uses the Hold Key — see Divergences Wave 12/13 |
| dx | Anti Blind | 100 | ported | [spec](../../analysis/specs/modules/dx.md) | render/AntiBlind.java (verified 2026-10-17, parity 100%) — all 8 disable_* toggles (default false, per .WE(false)); blindness/darkness/nausea removed per tick via removeStatusEffect; fire/freezing/pumpkin/suff |
| fo | Anti Bot | 12 | partial | [spec](../../analysis/specs/modules/fo.md) | utility/AntiBot.java (2026-10-24 re-score, parity 82%) — Heuristic bot detection: latency <= 0 ping check, velocity hovering check, ground/swing/movement checks, static isBotActive query wired to KillAura; native predicate calibration remains. |
| en | Anti Ghost | 46 | partial | [spec](../../analysis/specs/modules/en.md) | world/AntiGhost.java (verified 2026-10-17, trace re-check 2026-10-17, parity 87%; trace: aaj 1× = sentry + mT.cpC→true + recovered enable-cooldown message "You are on cooldown wait a moment before trying again"; atp untriggered — capture: break a block) — Tracks the mining target (interactionManager.currentBreakingPos); when break finishes with progress ≥ 9 and the block state is unchanged, clears it cl |
| dY | Anti Invisible | 54 | partial | [spec](../../analysis/specs/modules/dY.md) | render/AntiInvisible.java (verified 2026-10-17, parity 60%) — Clears the client-side invisibility flag every tick for filtered entities; server re-sync is re-cleared. Original "Entities" was a cF list → mode filt |
| dG | Anti Trap | 61 | ported | [spec](../../analysis/specs/modules/dG.md) | render/AntiTrap.java (verified 2026-10-17, parity 68%) — Hides trap-clutter entities client-side (setInvisible(true) re-applied each tick, previous visibility restored on disable) for paintings, armor stands |
| et | Anti Web | 42 | ported | [spec](../../analysis/specs/modules/et.md) | movement/AntiWeb.java (verified 2026-10-17, parity 92%) — Mode (vanilla/flight/solid, def flight — .SY()), Horizontal Speed (0.01, 0.1–2.0, 0.64), Vertical Speed (0.01, 0.1–2.0, 0.64). Closest port to the dec |
| fP | Anti-Cheat Detector | 108 | partial | [spec](../../analysis/specs/modules/fP.md) | utility/AntiCheatDetector.java (verified 2026-10-17, trace re-check, parity 75%) - packet + tick routes registered; GameJoin resets the 5-sample window/latch (high-probability guess); bodies VM-resident. Trace: aaj = gg.aaj + aWq, YO = gg.YO + aWp (order pinned), aWt once per inbound S2C packet, 3 listeners bound. |
| do | Arrows | 88 | ported | [spec](../../analysis/specs/modules/do.md) | render/Arrows.java (verified 2026-10-21, parity 94%) — Size (1–10, def 3), Radius (20–100, def 50) — decrypted values. Computes relative yaw/pitch offsets from the crosshair to each tracked entity (editabl; 2026-10-21 recovery: recovered arrow raster is drawn textured; eLTLf identity is inferred, and the 400 ms fade, GUI offsets and cF picker API remain. |
| df | Aspect Ratio | 92 | ported | [spec](../../analysis/specs/modules/df.md) | render/AspectRatio.java (verified 2026-10-17, parity 75%) — Preset group (Custom / 16:9 / 16:10 / 4:3, decrypted names) + Ratio (step 0.001, 0.1–5, def 1.7778 — decrypted). getAspectRatio() replicates the obser |
| fh | Attribute Swap | 139 | partial | [spec](../../analysis/specs/modules/fh.md) | utility/AttributeSwap.java (verified 2026-10-17, trace re-check 2026-10-17, parity 76%; trace: aJf 3× = fg.aIW→0 + gg.bab→1 + ol.cER(Return Delay)→0, aJg untriggered — capture: attack an entity) — Swaps to hotbar slot with best attack-damage attribute (via ATTRIBUTE_MODIFIERS component) while hostiles are near; returns to target slot after retur |
| fv | Auto Armor | 16 | partial | [spec](../../analysis/specs/modules/fv.md) | utility/AutoArmor.java (verified 2026-10-17, parity 80%) — Equips best remaining-durability piece per slot via player-screen-handler clicks; elytra-ignored and minimum-durability gates. Client/silent modes bot |
| fn | Auto Clicker | 161 | ported | [spec](../../analysis/specs/modules/fn.md) | utility/AutoClicker.java (verified 2026-10-17, parity 55%) — timer cadence + inventory slot clicking via HandledScreenAccessor; original "Click Pattern" ring native-blocked (ring buffers kept) |
| eV | Auto Crystal | 28 | ported | [spec](../../analysis/specs/modules/eV.md) | combat/AutoCrystal.java (2026-10-24 re-score, parity 58%) — port of sixtwo.eV: full 11-setting tree incl. Stop Time (25/0-8000/1000 ticks) + Vf visibility gates; break/place via use-block packet path; divergences itemized in the Divergences section of PARITY.md; 2026-10-24: placement now requires obsidian/bedrock + free crystal space (old air-support check could never place), players-only target scan, offhand support, dimension reset — see Wave 12/13 |
| eZ | Auto Double Hand | 30 | partial | [spec](../../analysis/specs/modules/eZ.md) | combat/AutoDoubleHand.java (verified 2026-10-17, parity 75%) — Keeps the offhand stocked: on empty offhand, moves a totem from hotbar (or main inventory with totem_on_inventory) into slot 45 via two clickSlot PICK |
| fw | Auto Drain | 14 | partial | [spec](../../analysis/specs/modules/fw.md) | world/AutoDrain.java (verified 2026-10-17, parity 88%) — Crosshair on cobweb → scans adjacent source blocks for water/lava, faces it and scoops with a bucket; auto/manual switch with tick delay. Exact; 2026-10-22: fill now goes through interactItem with the computed yaw/pitch applied around the use (buckets have no useOnBlock; BucketItem.raycast reads the real rotation), swing and NrVzh add gated on client Success — see Divergences Wave 10. |
| fd | Auto Dripstone | 15 | partial | [spec](../../analysis/specs/modules/fd.md) | world/AutoDripstone.java (verified 2026-10-17, trace re-check 2026-10-17, parity 60%; trace: YO = gg.YO + aId = qN.dcB(this) unregister, aHU/plans untriggered — capture: player on closed trapdoor + dripstone in hotbar) — Cooldown numeric (step 1, 0–10, default 0, suffix unrecovered, " s" assumed). Finds the nearest player standing on a closed trapdoor (Properties.OPEN) |
| eh | Auto Exp | 25 | ported | [spec](../../analysis/specs/modules/eh.md) | utility/AutoExp.java (verified 2026-10-17, trace re-check, parity 87%) — Cooldown (step 1.0, 0.0–10.0, def 0.0; decrypted suffix encrypted→null). Use-key poll + EXPERIENCE_BOTTLE + cooldown gate; throw mechanism virtualized. Trace: asy not triggered — capture: hold use key with bottle in hand. |
| dU | Auto Fish | 66 | ported | [spec](../../analysis/specs/modules/dU.md) | utility/AutoFish.java (verified 2026-10-17, parity 85%) — Bite detection via bobber y-dip (no public caughtFish getter in 1.21.11 — field is private); splash_detection_range gates detection distance. All nume |
| ft | Auto GApple | 144 | ported | [spec](../../analysis/specs/modules/ft.md) | utility/AutoGApple.java (verified 2026-10-17, parity 85%) — Eats golden (optionally enchanted) apples below health threshold; eat-until modes (eat one / reaches threshold / full health), player-away radius gate |
| eW | Auto Hit Crystal | 29 | partial | [spec](../../analysis/specs/modules/eW.md) | combat/AutoHitCrystal.java (verified 2026-10-17, parity 65%) — Crystal-breaking only: nearest EndCrystalEntity per place_delay/switch_delay cadence, per-sequence hit limit (limit_crystal single/double/infinite, .S |
| fz | Auto Jump Reset | 23 | partial | [spec](../../analysis/specs/modules/fz.md) | movement/AutoJumpReset.java (verified 2026-10-17, parity 80%) — Jumps (velY 0.42) on the hurt tick to cut knockback; fire-cancel and only-from-players gates, percent chance. Chance chain recovered from decrypted so |
| dK | Auto Lever Replace | 130 | partial | [spec](../../analysis/specs/modules/dK.md) | world/AutoLeverReplace.java (verified 2026-10-17, trace re-check 2026-10-17, parity 65%; trace: YO 1× = gg.YO only, ana/anc/anb untriggered — capture: tick + block update + render with a lever target) — Breaks levers adjacent to a trapdoor (auto_trap) or cobweb (auto_web) within reach; 5-tick cooldown between breaks. Defaults of the cw toggles were no |
| fI | Auto Logout | 2 | partial | [spec](../../analysis/specs/modules/fI.md) | combat/AutoLogout.java (verified 2026-10-17, parity 75%) — 12 (distance 1.0/1–100/16 "blocks", group logout_from {pearls, snowballs, arrows, fish_rods, potions}, ignore_friends, invisible, logout_on_key, logou |
| dM | Auto Market | 26 | partial | [spec](../../analysis/specs/modules/dM.md) | utility/AutoMarket.java (2026-10-24 re-score, parity 60%) — /ah command dispatch on reopen, slot hover extraction for rule creation, session start/pause/state feedback; native packet buy/sell engine open. |
| fM | Auto MLG | 21 | partial | [spec](../../analysis/specs/modules/fM.md) | world/AutoMlg.java (verified 2026-10-17, parity 74%) — Threshold numeric recovered from decompiled ctor (step 0.1, 3–15, default 4, " blocks" assumed suffix); Anchor Player toggle; Mode group with Bucket/Slime/Honey/Cobweb/HayBale/Cherry (all false); 2026-10-22: placement path rebuilt — bucket→interactItem with the real aim applied around the use, block→interactBlock; predicted fall gate (fallDistance + height remaining; creative skips it); scan from the feet column; offhand/hotbar selection — see Divergences Wave 10. |
| eO | Auto Pearl Catch | 118 | partial | [spec](../../analysis/specs/modules/eO.md) | movement/AutoPearlCatch.java (verified 2026-10-17, parity 71%) — While falling, throws a hotbar wind charge downward (interactItem + pitch 75), returns to the pearl/original slot after return_delay (builder recovere |
| fl | Auto Potion | 127 | partial | [spec](../../analysis/specs/modules/fl.md) | combat/AutoPotion.java (verified 2026-10-17, parity 64%) — Throws hotbar splash potion below health threshold; per-effect gates (instant health / regeneration / strength / fire resistance), no-effect guard via |
| fB | Auto Shield Break | 3 | ported | [spec](../../analysis/specs/modules/fB.md) | combat/AutoShieldBreak.java (2026-10-24 re-score, parity 88%) — hotbar axe search, auto-switch and return delay restoration implemented; manual mode axe requirement enforced. |
| eS | Auto Stun Slam | 117 | ported | [spec](../../analysis/specs/modules/eS.md) | combat/AutoStunSlam.java (verified 2026-10-17, parity 82%) — Finds a shielding player (isUsingItem + getActiveItem().isOf(Items.SHIELD)), stuns with repeated hits, swaps to mace and slams when fallDistance >= mi |
| fL | Auto Tool | 22 | partial | [spec](../../analysis/specs/modules/fL.md) | combat/AutoTool.java (verified 2026-10-17, parity 81%) — While interactionManager.isBreakingBlock(), swaps to the hotbar slot with best getMiningSpeedMultiplier/canHarvest for the targeted block via setSelec |
| fx | Auto Totem | 31 | ported | [spec](../../analysis/specs/modules/fx.md) | combat/AutoTotem.java (verified 2026-10-17, parity 58%) — Swaps totem into off-hand (screen-handler slot 45) when health % below threshold; hotbar-source option, random pick, return-original-slot dance, swap |
| eJ | Auto Trap | 11 | partial | [spec](../../analysis/specs/modules/eJ.md) | world/AutoTrap.java (verified 2026-10-17, parity 68%) — Places obsidian (or any held BlockItem when alternative_block) around the nearest player/Monster target at feet/head (double_place); synthetic BlockHi |
| eK | Auto Web | 10 | ported | [spec](../../analysis/specs/modules/eK.md) | world/AutoWeb.java (verified 2026-10-17, parity 85%) — Same synthetic-hit placement with Items.COBWEB; placement_options group (surround / upper_surround / prediction_ticks), optional velocity-based positi |
| fa | Auto X-Bow | 164 | partial | [spec](../../analysis/specs/modules/fa.md) | combat/AutoXBow.java (2026-10-24 re-score, parity 85%) — 8-state machine, held/hotbar crossbow charging, RotationManager TNT minecart aim and shot detonation implemented. |
| fp | Backtrack | 9 | partial | [spec](../../analysis/specs/modules/fp.md) | combat/Backtrack.java (verified 2026-10-17, parity 60%) — Maintains per-player rewind trails pruned to the latency window; delayedPosition(UUID) exposed. Real packet delay needs a network mixin the framework |
| ey | Blink | 45 | partial | [spec](../../analysis/specs/modules/ey.md) | movement/Blink.java (verified 2026-10-17, parity 90%) — Records withheld motion queue; auto-disable after 30 s; velocity-spike disable; pulse clears queue. Actual packet suppression needs a network mixin (j |
| dd | Block ESP | 82 | ported | [spec](../../analysis/specs/modules/dd.md) | render/BlockEsp.java (verified 2026-10-17, parity 85%) — Filled, Tracers, Range (1–128 blocks, def 100), Tracers Width (1–3, def 1) — decrypted values. Scans blocks vs an editable highlight set (original cK |
| dP | Block Piercer | 143 | partial | [spec](../../analysis/specs/modules/dP.md) | world/BlockPiercer.java (2026-10-24 re-score, parity 94%) — real EntityListSetting ({PLAYER}) and ItemListSetting ({COBWEB}) wired and enforced. |
| ee | Cape | 73 | ported | [spec](../../analysis/specs/modules/ee.md) | render/Cape.java (verified 2026-10-17, parity 95%) — CapeTextureManager downloads the resolved URL to opengrim:cape; PlayerListEntryMixin swaps the skin cape asset (Hide Wings nulls the elytra asset) |
| fb | Cart Assist | 163 | ported | [spec](../../analysis/specs/modules/fb.md) | world/CartAssist.java (verified 2026-10-17, parity 80%) — Actions group (Place Rail default-on, Place Minecart default-on — .Tz() recovered; Place Protect unimplemented), Return To group (Bow default-on, Slot |
| fc | Cart Refill | 165 | partial | [spec](../../analysis/specs/modules/fc.md) | world/CartRefill.java (verified 2026-10-17, parity 68%) — Delay numeric (step 5, 0–1000, default 0 = first UI-pair value, " ms" assumed), Hover (modeled as "only while crosshair is on the cart"), Randomize Sl |
| dv | Chams | 101 | partial | [spec](../../analysis/specs/modules/dv.md) | render/Chams.java (verified 2026-10-21, parity 93%) — full numeric tree decoded: entities(mode), hide_original(true), apply_to_own_player(false), effect mode(glass/water/chrome/liquid_metal), top numerics; 2026-10-21 recovery: four recovered chams passes, mask/composite, hide-original and entity/hand passes are live (supersedes the native-pass label above); ro.diF preset tables remain native; 2026-10-22: the composite full-screen quad now draws 6 indices (was 4), fixing the diagonal half-screen hole. |
| eb | Chest Stealer | 68 | partial | [spec](../../analysis/specs/modules/eb.md) | utility/ChestStealer.java (verified 2026-10-17, parity 75%) — While a container screen is open (chest/shulker handler per steal_from), shift-clicks (QUICK_MOVE) container slots into the inventory on a 2-tick cade |
| cS | China Hat | 122 | ported | [spec](../../analysis/specs/modules/cS.md) | render/ChinaHat.java (verified 2026-10-21, parity 96%) — cS is only present in the Vineflower tree with native Zh bootstrap constants; setting names are not decryptable statically. Structure known: group + 2; 2026-10-21 recovery: exact player feature renderer, head transform and ky cone/line pass are live; nUFUt segments, triangle-wave constants, the oK.cIT() sneak predicate and line smoothing remain; 2026-10-22: the shared EffectDraw now writes its dynamic uniform, uploads the vertex buffer and acquires the index buffer before opening the pass (vanilla RenderLayer.draw order), fixing the per-frame "Close the existing render pass" exception that stopped China Hat drawing (user log: 12,695 throws). |
| dw | Circle ESP | 84 | ported | [spec](../../analysis/specs/modules/dw.md) | render/CircleEsp.java (verified 2026-10-21, parity 96%) — entities(mode), animated(true), circle_scale Double(0.1,0.5,5,1), speed Double(1,10,40,20), only_for_target(false), circle_texture group (default/cust Real circle/circle_glow textures 2026-10-21.; 2026-10-21 recovery: textured and solid ring passes now use the recovered geometry; kz.bSr segment/alpha/light constants and the cF picker API remain; 2026-10-22: shared EffectDraw pass-order fix — the textured/solid ring draws no longer throw "Close the existing render pass" before drawing; 2026-10-22: both ring pipelines use the original's additive blend (lh.aApMr = SRC_ALPHA/ONE, lh.java:227), so the opaque black circle.png no longer renders as a black card. |
| dR | Click Action | 60 | ported | [spec](../../analysis/specs/modules/dR.md) | utility/ClickAction.java (verified 2026-10-17, parity 76%) — Bound keys select the matching hotbar slot (pearl/firework/potion item), use it via interactItem, restore the previous slot after Return Delay (10/0–1 |
| fR | Client Sounds | 103 | ported | [spec](../../analysis/specs/modules/fR.md) | utility/ClientSounds.java (verified 2026-10-17, trace re-check 2026-10-17, parity 77%; trace: never enabled — load only, accessors untriggered — capture: play a sound) — Sound Type mode (normal/bubble — original was a group with two toggles) and Sound Volume numeric (step 1, 0–100, default 70; suffix unrecovered, "%" a |
| ev | Collision Long Jump | 48 | partial | [spec](../../analysis/specs/modules/ev.md) | movement/CollisionLongJump.java (verified 2026-10-17, parity 82%; trace-recheck 2026-10-17) — On horizontal collision against a BoatEntity while airborne, applies jump impulse (0.45). |
| fu | Criticals | 135 | ported | [spec](../../analysis/specs/modules/fu.md) | combat/Criticals.java (2026-10-24 re-score, parity 92%) — Vanilla mini-hop; packet/custom/web_lag modes active via PacketSendEvent; aQo packet-hold queue buffers movement/slot clicks and bursts on lag_delay expiry. |
| eY | Crystal Optimizer | 33 | partial | [spec](../../analysis/specs/modules/eY.md) | combat/CrystalOptimizer.java (verified 2026-10-17, parity 65%) — Attacks the EndCrystalEntity closest to the nearest hostile target (inverse-distance damage proxy) instead of the nearest crystal. |
| ed | Custom Camera Distance | 74 | ported | [spec](../../analysis/specs/modules/ed.md) | render/CustomCameraDistance.java (verified 2026-10-17, parity 87%) — Decrypted settings ported: Distance (step 1.0, 4.0–100.0, def 4.0; cC chain recovered from source, suffix encrypted→null) and No Clip (off). Camera of |
| dV | Custom FOV | 53 | ported | [spec](../../analysis/specs/modules/dV.md) | render/CustomFov.java (verified 2026-10-17, parity 96%) — Overrides options.getFov() while enabled, restores on disable. FOV numeric recovered from folded ctor (spec generator had missed it). |
| fO | Discord Activity | 104 | partial | [spec](../../analysis/specs/modules/fO.md) | utility/DiscordActivity.java (verified 2026-10-17, trace re-check, parity 80%) - no RPC transport; activity summary exposed via summary(). Trace: YO → qq.cXK() (scheduler stop) + qn state queries (no gg.YO chain); disable now clears the published status; boot-trace aaj → aWj → qq.cXG. |
| eM | Double Tap | 121 | partial | [spec](../../analysis/specs/casesafe/modules/eM_.md) | combat/DoubleTap.java (verified 2026-10-17, parity 88%) — structure verified against true eM (boolean XOnBS phase + mT.cpz timer + aAY(hw$tv) HIGH / aAZ(gH$th) listeners); behavior bodies native, combo heuristic documented |
| ef | Elytra Swapper | 67 | partial | [spec](../../analysis/specs/modules/ef.md) | utility/ElytraSwapper.java (verified 2026-10-17, parity 78%) — Activation Key (-999..348, def -999, key-code int), Mode (legit/normal), Inventory Mode (client/silent), Auto Open Inventory (on), Swap Delay (5, 0–50 |
| dA | Elytra Target | 59 | partial | [spec](../../analysis/specs/modules/dA.md) | movement/ElytraTarget.java (2026-10-24 re-score, parity 85%) — While gliding, boosts with firework rocket: offhand/mainhand direct support, hotbar slot switch with delayed slot restoration; native trajectory math remains. |
| ds | Entity ESP | 80 | ported | [spec](../../analysis/specs/modules/ds.md) | render/EntityEsp.java (verified 2026-10-17, parity 93%) — entities(mode), filled, mode(model/hitbox from ct SO(1) group); 4 color settings omitted (cG); target set exposed via getTargets() |
| ff | Fake Lag | 18 | partial | [spec](../../analysis/specs/modules/ff.md) | movement/FakeLag.java (verified 2026-10-21, parity 94%) — Mode group (Normal default-on, Lag Range), Packet Interval (step 5, 0–2000, default 100, " ms" — recovered), Lag Range Distance (step 0.1, 1–6, defaul; 2026-10-21 recovery: two-handle RangeSetting/RangeSliderWidget and the attack-post mixin are wired; the kx indicator, of.ahXwo order and gM disconnect clear remain. |
| cX | Fake Player | 72 | ported | [spec](../../analysis/specs/modules/cX.md) | utility/FakePlayer.java (verified 2026-10-17, parity 90%) — Spawns OtherClientPlayerEntity(ClientWorld, GameProfile(random UUID, name)) (ctor call verified from the original's call sites), copies position/yaw/p |
| eD | Fast Bridge | 50 | partial | [spec](../../analysis/specs/modules/eD.md) | movement/FastBridge.java (verified 2026-10-17, parity 75%) — only_when_holding_block, only_when_looking_at_block, only_when_moving_backwards (all false); forces the sneak input (via Input.setPlayerInput) the tic |
| dZ | Fast Place | 62 | ported | [spec](../../analysis/specs/modules/dZ.md) | world/FastPlace.java (2026-10-24 re-score, parity 95%) — Clamps MinecraftClient.itemUseCooldown to rightClickDelay via MinecraftClientAccessor; ItemListSetting validBlocks populated with all blocks; ranged weapon skip; native per-use event remains. |
| dn | Firework Spots | 98 | ported | [spec](../../analysis/specs/modules/dn.md) | render/FireworkSpots.java (verified 2026-10-21, parity 93%) — Time Before Disappear (1–15 s, def 8), Quantity Limit (1–100, def 10) — decrypted values. Tracks FireworkRocketEntitys; on removal records the last po; 2026-10-21 recovery: exact HUD firework card, item icon and rk fade are live; jYWIl/ZOVgw/AhEPk DES values and the 3.0 blur smoothness remain; 2026-10-22: HUD world→screen projection corrected to the camera-rotation conjugate and the captured live world projection (vanilla GameRenderer.project, jI.bIw, GameRenderer#getFov via GameRendererMixin) — markers are world-anchored instead of camera-locked. |
| eB | Flight | 44 | partial | [spec](../../analysis/specs/modules/eB.md) | movement/Flight.java (verified 2026-10-17, parity 70%) — anti_kick(false), vertical_speed_match(false), off_time Double(1,1,20,1,"ticks"), delay Double(1,1,200,20,"ticks"), speed Double(0.01,0.01,3,0.05), mo |
| dW | Freecam | 76 | ported | [spec](../../analysis/specs/modules/dW.md) | render/Freecam.java (verified 2026-10-24, parity 95%) — Detached camera via CameraAccessor setPos/setRotation/thirdPerson; real player movement suppressed via KeyboardInputMixin; mouse look routed via MouseMixin (rotate setting controls player look); render_hand wired via GameRendererMixin; position lerping via tickProgress. |
| dm | Friend Indicator | 137 | ported | [spec](../../analysis/specs/modules/dm.md) | render/FriendIndicator.java (verified 2026-10-17, parity 92%) — Height (0.4–1.6, step 0.1, def 1.2 — decrypted; decrypted suffix unresolvable → none). Friend set managed on the module (no friends system in framewor |
| dB | Full Bright | 71 | ported | [spec](../../analysis/specs/modules/dB.md) | render/FullBright.java (verified 2026-10-17, parity 90%) — No settings in the original. Grants a silent infinite Night Vision client-side while enabled (re-applied on tick), removed on disable. Gamma forcing n |
| ec | Ghost Hand | 75 | partial | [spec](../../analysis/specs/modules/ec.md) | world/GhostHand.java (verified 2026-10-17, trace re-check 2026-10-17, parity 88%; trace: arz 2× = ee.arS→0 + gg.bab→1, networkHandler gate added; interactBlock untriggered — capture: use-key a wall container) — 1:1 port of sixtwo.ec ray-marching container search + interact |
| dy | Glow | 86 | ported | [spec](../../analysis/specs/modules/dy.md) | render/Glow.java (2026-10-24 re-score, parity 96%) — Real EntityListSetting entities with living-minus-armor-stands universe; self_glow quirk preserved; per-tick setGlowing lifecycle management. |
| de | Hand Chams | 132 | ported | [spec](../../analysis/specs/modules/de.md) | render/HandChams.java (2026-10-24 re-score, parity 95%) — full settings + first-person tint via ItemRendererMixin; 2026-10-24: glass hand tint alpha & color fallback repaired for zero-RGB presets; exact acv hand re-render plus recovered chams/outline composites live; ro.diF presets, acw tables and OTglH remain native/DES. |
| dS | Hand No Clip | 55 | partial | [spec](../../analysis/specs/modules/dS.md) | combat/HandNoClip.java (verified 2026-10-17, parity 74%) — On attack press, attacks the nearest entity in a ~30° look cone within reach when the crosshair is blocked by a block and line of sight is clear. "Spe |
| dr | Health Indicators | 91 | ported | [spec](../../analysis/specs/modules/dr.md) | render/HealthIndicators.java (verified 2026-10-17, parity 92%) — hearts_per_row Double(1,1,30,10), invisible, visible_through_walls; per-tick player health/absorption snapshot exposed via getIndicators(); drawing ne |
| em | High Jump | 167 | partial | [spec](../../analysis/specs/modules/em.md) | movement/HighJump.java (verified 2026-10-17, parity 85%) — Mode (vanilla/grim_shulker, default grim_shulker — .SY() marker), Jump Height (0.01, 1.0–3.0, 1.6, Vanilla), Vertical Boost (0.01, 0.1–3.0, 1.91, Grim |
| dc | Hit Particles | 90 | ported | [spec](../../analysis/specs/modules/dc.md) | render/HitParticles.java (verified 2026-10-21, parity 93%) — Full decrypted "Particles" group (Stars, Snowflakes, Ghost, Hearts, Diamonds, Thunders, Moons, Clouds), "Physics" group (Fall, Rise, Burst, Fly), Scal; 2026-10-21 recovery: eight recovered sprites + glow pass, exact jI.bIu billboard and two-angle advance are live; the mo mapping is inferred, bloom remains a screen-space substitute, ZRQxW=1000 and the captured-frustum fallback remain. |
| dQ | Hit Sounds | 63 | partial | [spec](../../analysis/specs/modules/dQ.md) | utility/HitSounds.java (verified 2026-10-17, parity 74%) — Plays an orb-pickup ding (pitched per mode) on attack press with an entity under the crosshair. Recovered from folded ctor: sound picker modes Custom/ |
| fq | Hitbox | 4 | ported | [spec](../../analysis/specs/modules/fq.md) | render/Hitbox.java (verified 2026-10-17, parity 90%) — Visual expansion rendered via WorldRenderEvent; target acquired by raycasting against expanded boxes (ProjectileUtil.raycast, +0.1) and exposing expandedTarget. Co |
| dj | Hole ESP | 147 | ported | [spec](../../analysis/specs/modules/dj.md) | render/HoleEsp.java (verified 2026-10-17, parity 96%) — Mode (Boxes/Fade), Range (3–25 blocks, def 5), Range Y (0–16, def 3), Outline (def on), Size (−1–1, def 1), Ignore Self, Obsidian (def on), Obsidian-B |
| dO | Hotbar Restorer | 141 | partial | [spec](../../analysis/specs/modules/dO.md) | utility/HotbarRestorer.java (verified 2026-10-17, parity 60%) — Snapshots/restores the hotbar via GLFW-polled keybind settings; auto_save snapshots on enable. All six original setting names were still encrypted at |
| fX | Interface | 102 | ported | [spec](../../analysis/specs/modules/fX.md) | utility/Interface.java (verified 2026-10-21, parity 88%) — port of sixtwo.fX: emote_key with F3 debug suppression opening Click GUI, theme style opacity query; details in the Divergences section of PARITY.md; 2026-10-21 recovery: raw Keyboard.onKey event restores the action/key/currentScreen/F3 ordering; aZ theme editor remains 53-native blocked and Style is not consumed. |
| ek | Inventory Move | 47 | partial | [spec](../../analysis/specs/modules/ek.md) | movement/InventoryMove.java (verified 2026-10-17, parity 85%; trace-recheck 2026-10-17: asV contract fixed) - Block Clicks (off; inert - needs a mouse-event hook). While a screen is open, mirrors physical key state (InputUtil.isKeyPressed + InputUtil.fromTrans |
| dD | Item Frame Blocker | 70 | partial | [spec](../../analysis/specs/modules/dD.md) | utility/ItemFrameBlocker.java (verified 2026-10-17, trace re-check 2026-10-17, parity 84%; trace: never enabled — load only, akB untriggered — capture: right-click an item frame) — Detects crosshair use attempts on item frames while the use key is pressed and warns locally (throttled 1/s) per the All Items / Only Weapons (item se |
| db | Jump Circle | 89 | ported | [spec](../../analysis/specs/modules/db.md) | render/JumpCircle.java (verified 2026-10-21, parity 96%) — Circle Scale (0.5–5, def 1), Only Self, Circle Texture as radio mode (Default/Glowing/Custom — decrypted group). Computes airborne take-off circles pe Real circle/circle_glow textures 2026-10-21.; 2026-10-21 recovery: recovered EffectDraw textured circle pass is live; yqWBV duration, lightmap values and jd.bAm URL check remain DES/approximated; 2026-10-22: shared EffectDraw pass-order fix — the textured circle pass now renders (was throwing "Close the existing render pass" every frame; user log: 12,703 throws); 2026-10-22: the textured pass uses the original's additive blend (lh.aApMr = SRC_ALPHA/ONE, lh.java:227), so the opaque black circle.png no longer renders as a black card. |
| fr | Kill Aura | 5 | partial | [spec](../../analysis/specs/modules/fr.md) | combat/KillAura.java (verified 2026-10-17, parity 60%) — port of sixtwo.fr: exact setting tree, aNB pause gates (Nuker/AutoWeb/AutoTrap/AutoPotion), silent-aim submit via RotationManager (qL#dbI), target export (aOQ); divergences itemized in the Divergences section of PARITY.md |
| fs | Knockback Displacement | 151 | partial | [spec](../../analysis/specs/modules/fs.md) | movement/KnockbackDisplacement.java (verified 2026-10-17, parity 60%) — On the tick damage is taken, re-aims the local velocity impulse along dynamic (facing) or fixed angle. Server-side knockback rewrite needs a packet mi |
| dF | Lever Replace | 112 | partial | [spec](../../analysis/specs/modules/dF.md) | world/LeverReplace.java (verified 2026-10-17, parity 70%) — Finds the nearest lever/button within 4 blocks; mines it via updateBlockBreakingProgress and then places the selected replacement (Cobweb/Obsidian/Hel |
| dp | Logout Spots | 99 | ported | [spec](../../analysis/specs/modules/dp.md) | render/LogoutSpots.java (verified 2026-10-21, parity 87%) — Refresh Timer (0–100 s, def 5), Login Notification (false), Position Render Mode (Simple/Textured — decrypted), Height (0.1–3 blocks, def 2.8), Backgr; 2026-10-21 recovery: exact ahv HUD labels/card/medium MSDF are live; the kt hologram, Position Render Mode, 50 ms quantum and add/clear events remain; 2026-10-22: HUD world→screen projection corrected to the camera-rotation conjugate and the captured live world projection (vanilla GameRenderer.project, jI.bIw, GameRenderer#getFov via GameRendererMixin) — markers are world-anchored instead of camera-locked. |
| eP | Mace Aura | 120 | partial | [spec](../../analysis/specs/modules/eP.md) | combat/MaceAura.java (verified 2026-10-17, parity 80%) — Mace-only aura: target mode players/mobs/all (Monster filter), priority distance/health, ignore filters (friends structural, naked = no chest/head arm |
| eQ | Mace Elytra Target | 152 | partial | [spec](../../analysis/specs/modules/eQ.md) | combat/MaceElytraTarget.java (verified 2026-10-17, parity 70%) — While gliding (isGliding, 1.21.11 rename), boosts toward the nearest player with a hotbar firework on cooldown (firework_use_mode auto/on-bind with fi |
| eN | Mace Swap | 115 | ported | [spec](../../analysis/specs/modules/eN.md) | combat/MaceSwap.java (verified 2026-10-17, parity 80%) — Detects a mace swing via attack-cooldown drop, requires fallDistance >= windburst_threshold, swaps to a hotbar wind charge and uses it, swaps back aft |
| fU | Middle Click Friend | 107 | partial | [spec](../../analysis/specs/modules/fU.md) | utility/MiddleClickFriend.java (verified 2026-10-17, trace re-check, parity 85%) - middle-click (GLFW edge + crosshairTarget) toggles the crosshair player in the shared FriendsManager with chat feedback; gy pick event absent on our bus. Trace: aXP not triggered — capture: middle-click a player. |
| dJ | Mouse Tweaks | 157 | partial | [spec](../../analysis/specs/modules/dJ.md) | utility/MouseTweaks.java (verified 2026-10-17, parity 72%) — RMB drag places one item per slot, LMB drag picks up / distributes via clickSlot; slot under cursor computed from HandledScreen x/y (reflection — the |
| dT | Multi Task | 65 | partial | [spec](../../analysis/specs/modules/dT.md) | utility/MultiTask.java (verified 2026-10-17, trace re-check, parity 85%) - drives attackBlock on the crosshair block during active item use; target/isUsingItem gates are stand-ins. Trace: apI not triggered — capture: pre-motion tick + attack key + item use. |
| fS | Name Protect | 106 | ported | [spec](../../analysis/specs/modules/fS.md) | utility/NameProtect.java (verified 2026-10-17, parity 92%) — Protect group (Name default-on, Friends, Server) with replacement strings recovered from the decompiled ctors ("Protected", "Protected Friend", "prote |
| dt | Nametags | 97 | ported | [spec](../../analysis/specs/modules/dt.md) | render/Nametags.java (verified 2026-10-21, parity 96%) — scale Double(0.01,0.2,2,1), connected, group_items, render_for group (players), info_to_render group (name/health/absorption/distance true; hand_items; 2026-10-21 recovery: medium MSDF text and shape-SDF rounded fills are live; armor slot order, the 2.0 shape override, batched item rendering and the vanilla-nameplate hook remain; 2026-10-22: HUD world→screen projection corrected to the camera-rotation conjugate and the captured live world projection (vanilla GameRenderer.project, jI.bIw, GameRenderer#getFov via GameRendererMixin) — nametags are world-anchored instead of camera-locked. |
| ea | No Break Delay | 57 | ported | [spec](../../analysis/specs/modules/ea.md) | world/NoBreakDelay.java (verified 2026-10-17, trace re-check 2026-10-17, parity 92%; trace: never enabled — load only, ari untriggered — capture: tick while breaking a block) — Pins MinecraftClient.blockBreakingCooldown to destroy_delay (0) each tick — matches the observable "removes destroy delay" behavior. |
| dL | No Entity Clip | 56 | partial | [spec](../../analysis/specs/modules/dL.md) | world/NoEntityClip.java (verified 2026-10-17, trace re-check 2026-10-17, parity 70%; trace: never enabled — load only, anq untriggered — capture: mine through an entity with a pickaxe) — mining-behind-entity raycast filter ignoring entity hitboxes (native original) |
| ez | No Fall | 36 | partial | [spec](../../analysis/specs/modules/ez.md) | movement/NoFall.java (verified 2026-10-17, parity 88%; trace-recheck 2026-10-17: avk 3× per outbound packet, no cancel) — While falling: player.onLanding() + sends PlayerMoveC2SPacket.PositionAndOnGround(…, onGround=true) — classic on-ground trick. |
| ew | No Jump Delay | 49 | ported | [spec](../../analysis/specs/modules/ew.md) | movement/NoJumpDelay.java (verified 2026-10-17, parity 90%; trace-recheck 2026-10-17: untriggered, tickless window) — While jump key held, on ground and getJumpCooldown() > 0, re-applies getJumpVelocity() (cooldown has no public setter). |
| fE | No Miss | 17 | partial | [spec](../../analysis/specs/modules/fE.md) | combat/NoMiss.java (verified 2026-10-17, parity 80%) — Releases attack key when crosshair is not on a live entity within reach. Prevents the swing instead of cancelling it (no attack hook). |
| dX | No Miss Delay | 69 | partial | [spec](../../analysis/specs/modules/dX.md) | combat/NoMissDelay.java (verified 2026-10-17, parity 85%) — Restores pre-miss ticksSinceLastAttack (reflective — no public API in 1.21.11) while the cooldown recovers after a missed attack. parity: native-block |
| fQ | No Protocol Disconnect | 160 | partial | [spec](../../analysis/specs/modules/fQ.md) | utility/NoProtocolDisconnect.java (verified 2026-10-17, trace re-check, parity 84%) - Fully native; boot-enabled; receive-side DisconnectS2CPacket cancel is a design-level stand-in. Trace: native clinit is JVMTI-invisible, no module activity in the window. |
| es | No Push | 37 | partial | [spec](../../analysis/specs/modules/es.md) | movement/NoPush.java (verified 2026-10-17, parity 78%) — real engine hooks: PushOutOfBlocksMixin (Entity#pushOutOfBlocks) and EntityPushMixin (Entity#pushAwayFrom) fire cancellable events; riptide exemption kept |
| dH | No Sign Screen | 138 | partial | [spec](../../analysis/specs/modules/dH.md) | utility/NoSignScreen.java (verified 2026-10-17, trace re-check, parity 85%) - closes SignEditScreen/HangingSignEditScreen via tick poll (screen event absent on our bus); close mechanism discretionary. Trace: alC not triggered — capture: open a sign edit screen. |
| eo | No Slow | 39 | partial | [spec](../../analysis/specs/modules/eo.md) | movement/NoSlow.java (verified 2026-10-17, parity 65%) — Mode (grim/matrix/matrix_2/matrix_3/ncp/grim_v3, def grim_v3 — .SY()), Main Hand (on), Item Options group: Food/Shield/Chargeables (on, .Tz()), Block |
| eg | No Swing | 77 | ported | [spec](../../analysis/specs/modules/eg.md) | utility/NoSwing.java (verified 2026-10-17, trace re-check, parity 85%) - Client (on) + Both (off); tick reset + HandSwingC2SPacket cancel (Both) are stand-ins for the native DLL swing patch. Trace: payload has no behavior handler (zero entries expected). |
| dI | Nuker | 58 | partial | [spec](../../analysis/specs/modules/dI.md) | world/Nuker.java (verified 2026-10-21, parity 96%) — Nearest eligible block in range, dig via attackBlock + updateBlockBreakingProgress with speed multiplier; selection key records blocks for "from list"; 2026-10-21 recovery: real cK ItemListSetting with empty default is wired; the 50 ms quantum, ja.byI lava test and event plumbing remain labeled. |
| eq | Null Movement | 41 | partial | [spec](../../analysis/specs/modules/eq.md) | movement/NullMovement.java (verified 2026-10-17, parity 76%; trace-recheck 2026-10-17: zero Java surface) — Keeps last unslowed horizontal speed; restores it while item-use or vanilla slow blocks (cobweb/honey/soul sand/sweet berry bush) block movement. Exac |
| dl | Outlines | 131 | ported | [spec](../../analysis/specs/modules/dl.md) | render/Outlines.java (verified 2026-10-21, parity 92%) — Entities list seeded with the original default (End Crystal) as editable set; Color Mode group Zero/One/Two/Three (decrypted); Animation Speed (0–3, d; 2026-10-21 recovery: world mask + outlines.glsl composite now render, so the module is no longer inert (supersedes the no-consumer note above); uniform binding is inferred, glowThinOutline is hard-coded 1, the cF picker remains a plain set, and the default selected set is {PLAYER} (END_CRYSTAL is only in the universe; the old row's End Crystal default was a misread); 2026-10-22: composite quad now draws 6 indices (was 4), fixing the same diagonal half-screen hole. |
| eE | Parkour | 52 | partial | [spec](../../analysis/specs/modules/eE.md) | movement/Parkour.java (verified 2026-10-17, parity 66%) — only_if_w_pressed(false), edge_distance Double(0.001,0.001,0.1,0.001); presses the jump input when the position one tick ahead (plus tolerance) is air |
| cR | Particles | 125 | ported | [spec](../../analysis/specs/modules/cR.md) | render/Particles.java (verified 2026-10-21, parity 93%) — Full decoded settings surface (Particles/Physics/Add on groups, Stars/Snowflakes/Ghost/Hearts/Diamonds/Thunders/Moons/Clouds, Fly/Drop drift, Idle/Mov; 2026-10-21 recovery: eight sprites + glow pass and the exact billboard are live; mo mapping, glow key, burst/lifetime/fade constants and the AFTER_ENTITIES phase remain. |
| fm | Pearl Chaser | 145 | partial | [spec](../../analysis/specs/modules/fm.md) | movement/PearlChaser.java (2026-10-24 re-score, parity 88%) — RotationManager silent aim used, previousSlot hotbar tracking and delayed restoration implemented. |
| dg | Pearl Prediction | 93 | ported | [spec](../../analysis/specs/modules/dg.md) | render/PearlPrediction.java (verified 2026-10-21, parity 92%) — Show Time Left (false, decrypted). Simulates every live EnderPearlEntity with thrown-projectile physics (0.99 drag, 0.03 gravity/tick) to a solid-bloc; 2026-10-21 recovery: mh/me simulator, both termination kinds and the HUD card/pearl icon are live; cky max steps, NkcQX format and fade constants remain DES; 2026-10-22: HUD world→screen projection corrected to the camera-rotation conjugate and the captured live world projection (vanilla GameRenderer.project, jI.bIw, GameRenderer#getFov via GameRendererMixin) — labels are world-anchored instead of camera-locked. |
| cT | Pop Chams | 129 | ported | [spec](../../analysis/specs/modules/cT.md) | render/PopChams.java (verified 2026-10-17, parity 95%) — Totem-pop detection from other players' health snapshots (prev ≤1.5 → rising); highlight ring of TOTEM_OF_UNDYING (simple) / ENCHANT (textured) partic |
| fA | Potion Refill | 7 | partial | [spec](../../analysis/specs/modules/fA.md) | combat/PotionRefill.java (verified 2026-10-17, parity 78%) — Detects consumed potion stacks in hotbar, swaps a replacement from main inventory after delay via clickSlot(SWAP). hover interpreted as "only refill s |
| fj | Projectile Aim Bot | 111 | partial | [spec](../../analysis/specs/modules/fj.md) | combat/ProjectileAimBot.java (verified 2026-10-17, parity 62%) — Ballistic aim (speed 3.0/tick, gravity 0.05/tick^2, low-arc solution) at nearest player/monster with velocity lead; only acts while holding bow/crossb |
| fK | Reach | 20 | ported | [spec](../../analysis/specs/modules/fK.md) | combat/Reach.java (verified 2026-10-17, parity 98%) — InteractionRangeMixin redirects PlayerEntity#getBlockInteractionRange/getEntityInteractionRange (crosshair scan + attack range read these attributes); sliders applied per fK "Runtime model" |
| fT | Resource Pack Bypass | 78 | ported | [spec](../../analysis/specs/modules/fT.md) | utility/ResourcePackBypass.java (verified 2026-10-17, parity 82%) — Mode group (Enable For All / Specific Servers default-on) + Servers text (1024, default "anarchia.gg", placeholder "hypixel.net, play.example.com" rec |
| ex | Safe Walk | 51 | ported | [spec](../../analysis/specs/modules/ex.md) | movement/SafeWalk.java (verified 2026-10-17, parity 90%; trace-recheck 2026-10-17: config-only confirmed) — Predicts next step from velocity; if block below would be air, zeroes horizontal velocity. Interpretation of "Release On Forward": suspend protection |
| ei | Scaffold | 38 | partial | [spec](../../analysis/specs/modules/ei.md) | movement/Scaffold.java (verified 2026-10-17, parity 70%) — port of sixtwo.ei: exact 3-setting tree; YuMVe-ordered solid support search with support-to-target faces, cHP replaceable gate, asG use/mine suppression; divergences itemized in the Divergences section of PARITY.md |
| fV | Self Destruct | 105 | ported | [spec](../../analysis/specs/modules/fV.md) | utility/SelfDestruct.java (verified 2026-10-17, parity 78%) — Clear Chat, Clean Strings, Post Action group (Delete File / Replace File / Close Handles / None), Replace File path text, Custom Mod Id + Mod Id text |
| fi | Shield Block | 155 | partial | [spec](../../analysis/specs/modules/fi.md) | combat/ShieldBlock.java (verified 2026-10-17, parity 70%) — No settings constructed in the original. Selects a shield from the hotbar while the use key is held and a non-shield item is equipped. Exact trigger c |
| eT | Shield Drain | 156 | partial | [spec](../../analysis/specs/modules/eT.md) | combat/ShieldDrain.java (verified 2026-10-17, parity 66%) — Attacks the nearest shielding player; click_mode vanilla respects attack cooldown, blatant hits hit_per_tick times per tick. hit_per_tick/min_fall_dis |
| cY | Shield Status | 159 | partial | [spec](../../analysis/specs/modules/cY.md) | render/ShieldStatus.java (verified 2026-10-17, parity 70%) — port of sixtwo.cY: shield state machine, using/disabled colors, transition gradient lerp; details in the Divergences section of PARITY.md |
| cV | Skeleton ESP | 126 | ported | [spec](../../analysis/specs/modules/cV.md) | render/SkeletonEsp.java (verified 2026-10-17, parity 96%) — port of sixtwo.cV: computes humanoid bone segments and Euler angles per nearby player; rendered via RenderLayers.lines(); details in the Divergences section of PARITY.md |
| fN | Skin Protect | 142 | partial | [spec](../../analysis/specs/modules/fN.md) | utility/SkinProtect.java (verified 2026-10-17, parity 68%) — Protect group (Own Skin/Other Players), per-side Skin Source groups (Defaults/Custom), Own Default Skin + Other Players Skin groups (dynamically popul |
| dN | Slot Lock | 64 | partial | [spec](../../analysis/specs/modules/dN.md) | utility/SlotLock.java (verified 2026-10-17, trace re-check, parity 75%) - locked-slots group (cz action → 9 toggles); drop suppression via key reset + packet cancel + THROW clicks; key-input event absent on our bus. Trace: aon not triggered — capture: press Q on a locked slot. |
| cZ | Soul Effects | 162 | ported | [spec](../../analysis/specs/modules/cZ.md) | render/SoulEffects.java (2026-10-24 re-score, parity 96%) — SOUL particle emission on entity death; glow sprite pass; BloomRenderer (kl.bQd) post-processing composite live with multi-LOD bloom shaders. |
| da | Sound ESP | 85 | ported | [spec](../../analysis/specs/modules/da.md) | render/SoundEsp.java (verified 2026-10-21, parity 92%) — port of sixtwo.da: Time Before Disappear (1-15 s, def 8), Quantity Limit (1-100, def 10), Max Distance (1-128 blocks, def 32); world markers rendered in WorldRenderEvent; 2026-10-21 recovery: exact HUD card, medium MSDF and rk fade are live; xwXDE, the sound-name regex and the 7.0 blur smoothness remain; 2026-10-22: HUD world→screen projection corrected to the camera-rotation conjugate and the captured live world projection (vanilla GameRenderer.project, jI.bIw, GameRenderer#getFov via GameRendererMixin) — labels are world-anchored instead of camera-locked. |
| dE | Spammer | 146 | ported | [spec](../../analysis/specs/modules/dE.md) | utility/Spammer.java (verified 2026-10-17, parity 80%) — Ports Message Count (1..5), Delay, Disable On Leave/Disconnect (auto-disable on null player / world change), Randomize, Auto Split Messages + Split Le |
| eH | Spear Dash | 149 | partial | [spec](../../analysis/specs/modules/eH.md) | movement/SpearDash.java (verified 2026-10-17, parity 78%) — dash_direction(movement/direction, default movement from SO(0)), given_direction Double(1,-180,180,0,"deg"), change_armor(true), restore_armor(true), |
| eI | Spear Double Tap | 150 | partial | [spec](../../analysis/specs/modules/eI.md) | combat/SpearDoubleTap.java (verified 2026-10-17, parity 65%) — change_armor(true), armor_change_timing(after_spear_hit/before_mace_hit), return_back(true), return_delay(10,0,1000,50,"ms"); detects a spear swing vi |
| eG | Spear Lunge | 148 | ported | [spec](../../analysis/specs/modules/eG.md) | combat/SpearLunge.java (verified 2026-10-17, parity 82%) — change_armor(true), restore_armor(true), start_flying_after_restore(true), return_back(true), return_delay(10,0,1000,50,"ms"); "Activation Key" bind o |
| eF | Spear Reach | 128 | partial | [spec](../../analysis/specs/modules/eF.md) | combat/SpearReach.java (verified 2026-10-17, parity 83%) — return_delay Double(10,0,1000,50,"ms") (suffix constant undecodable, "ms" inferred from siblings); "Allowed Items" (item-list setting) omitted; swaps |
| er | Speed | 133 | partial | [spec](../../analysis/specs/modules/er.md) | movement/Speed.java (verified 2026-10-17, parity 65%) — port of sixtwo.er: exact numeric tree + Vf visibility gates (Distance trio iff Collision, Power trio iff Collision Target); divergences itemized in the Divergences section of PARITY.md |
| eC | Sprint | 34 | ported | [spec](../../analysis/specs/modules/eC.md) | movement/Sprint.java (verified 2026-10-17, parity 88%) — port of sixtwo.eC: full 12-setting tree, omni-sprint condition, vanilla sprint overrides, Keep Sprint momentum preservation; details in the Divergences section of PARITY.md |
| dq | Storage ESP | 81 | ported | [spec](../../analysis/specs/modules/dq.md) | render/StorageEsp.java (verified 2026-10-21, parity 97%) — Filled, Tracers, Tracers Width (1–3, def 1) — decrypted values. Scans loaded chunks (ChunkStatus.FULL) for chest/trapped chest/barrel/shulker/ender ch; 2026-10-21 recovery: real cK ItemListSetting (nine-item universe, empty allowed) and recovered theme accent defaults are wired; irQyF throttle, executor factory and native icon grid remain. |
| eA | Strafe | 35 | partial | [spec](../../analysis/specs/modules/eA.md) | movement/Strafe.java (verified 2026-10-17, parity 87%; trace-recheck 2026-10-17: untriggered, tickless window) — port of sixtwo.eA: Speed setting (0.05, 0.25-2.0, def 0.25), forward/sideways motion re-derivation from constant pool tokens; details in the Divergences section of PARITY.md |
| ep | Super Firework | 113 | ported | [spec](../../analysis/specs/modules/ep.md) | movement/SuperFirework.java (verified 2026-10-17, parity 90%; trace-recheck 2026-10-17: atX/atY untriggered) — Boost Value (0.01, 1.5–3.0, def 1.5). While gliding, a firework use (use key + rocket in hand) opens a 40-tick window keeping horizontal speed ≥ Boost |
| cQ | Swing Animations | 94 | partial | [spec](../../analysis/specs/modules/cQ.md) | render/SwingAnimations.java (verified 2026-10-21, parity 66%) — port of sixtwo.cQ: instant equip logic, item exclusion filter, hand transform exposed for HeldItemRenderer; details in the Divergences section of PARITY.md; 2026-10-21 recovery: held-item-change trigger is exact via HeldItemChangeEvent/mixin; the in.bkX/bkY per-hand predicates remain a stack-change substitution, YG profile/curve registry remains native, and the cI action editor is still absent. |
| dz | Target ESP | 83 | ported | [spec](../../analysis/specs/modules/dz.md) | render/TargetEsp.java (verified 2026-10-21, parity 96%) — speed Double(1,1,20,10), look(true), ignore_walls(false), bloom(true), bloom_amount Double(1,1,5,5), hurt_animation(false), mode group circle/soul/gho; 2026-10-21 recovery: glow/ghosts textures and the corrected jI.bIu billboard are live; Ignore Walls, the Crystals core and DES texture-key plaintexts remain. |
| fg | Target Lock | 136 | partial | [spec](../../analysis/specs/modules/fg.md) | combat/TargetLock.java (verified 2026-10-17, parity 60%) — Lock Keybind raw keycode (-999 default), Select Range (step 0.1, 3–10, default 5, " blocks" — recovered), Select Through Walls. Lock/unlock on key edg |
| fJ | Target Margin | 6 | ported | [spec](../../analysis/specs/modules/fJ.md) | combat/TargetMargin.java (verified 2026-10-17, parity 93%) — Retargets client.targetedEntity each tick using margin-expanded Box.raycast when vanilla targeting missed. only_for_slots conservatively disables the |
| fy | Totem Refill | 32 | partial | [spec](../../analysis/specs/modules/fy.md) | combat/TotemRefill.java (verified 2026-10-17, parity 60%) — Refills off-hand from inventory as soon as the totem pops; optional replace-current-item. totem_slot typed as Int (0..45). |
| du | Tracers | 79 | ported | [spec](../../analysis/specs/modules/du.md) | render/Tracers.java (verified 2026-10-21, parity 97%) — entities(mode), line_width Double(0.1,1,3,1), ignore_friends(true), mode group with head/chest/legs/feet anchor toggles (defaults inferred: chest only; 2026-10-21 recovery: real cF EntityListSetting/EntityListWidget is wired; exact cF row geometry and the other eight consumers remain. |
| cU | Trails | 124 | ported | [spec](../../analysis/specs/modules/cU.md) | render/Trails.java (verified 2026-10-17, parity 93%) — Per-player position ring buffer (length × 20 samples capped 80, sampling rate from Gradient Speed); draws fading particle trail. Show For: Players/Inv |
| cP | Trajectories | 87 | ported | [spec](../../analysis/specs/modules/cP.md) | render/Trajectories.java (verified 2026-10-17, parity 97%) — Simulates projectile flight from velocity for nearby arrows/tridents/pearls/throwables each 2 ticks; particle trail + landing marker (filled/outline p |
| fW | Transactions | 109 | partial | [spec](../../analysis/specs/modules/fW.md) | utility/Transactions.java (verified 2026-10-17, trace re-check, parity 80%) - per-S2C-packet listener with the trace-pinned gg.bab() in-game guard before the filter; packet type is a high-probability guess (CommonPingS2CPacket); latency pipeline not observed (capture: matching server transaction packet). |
| cW | Trap ESP | 140 | ported | [spec](../../analysis/specs/modules/cW.md) | render/TrapEsp.java (verified 2026-10-21, parity 96%) — Scans (every 20 ticks) entities (armor stands, minecarts, falling blocks, decorations/paintings) and blocks (buttons, levers, banners, decorated pots,; 2026-10-21 recovery: medium MSDF text, LOCATION icon U+EA26, shape-SDF corners, live theme colours and blurred card are wired; async scan/projection, the 0.75 blur smoothness and DES title/label strings remain; 2026-10-22: HUD world→screen projection corrected to the camera-rotation conjugate and the captured live world projection (vanilla GameRenderer.project, jI.bIw, GameRenderer#getFov via GameRendererMixin) — markers are world-anchored instead of camera-locked. |
| eu | Trident Boost | 40 | partial | [spec](../../analysis/specs/modules/eu.md) | movement/TridentBoost.java (verified 2026-10-17, parity 65%) — port of sixtwo.eu: boost cooldown and weather gates, re-applies riptide impulse and sound; details in the Divergences section of PARITY.md |
| fF | Trigger Bot | 1 | ported | [spec](../../analysis/specs/modules/fF.md) | combat/TriggerBot.java (verified 2026-10-17, parity 86%) — Already ported as the batch-7 reference example; no changes made. |
| fD | Uncharge Block | 19 | partial | [spec](../../analysis/specs/modules/fD.md) | combat/UnchargeBlock.java (verified 2026-10-17, parity 85%) — 5 (group items_to_use {all_items, only_weapons, specified_slots} + threshold 0.01/0.25–1.0/0.9); slot action omitted |
| fC | Velocity | 24 | partial | [spec](../../analysis/specs/modules/fC.md) | combat/Velocity.java (verified 2026-10-17, parity 81%) — Detects knockback as a sudden velocity spike and rescales applied velocity once per hit. Original rewrites the inbound S2C packet — needs a network ho |
| dC | View Model | 95 | ported | [spec](../../analysis/specs/modules/dC.md) | render/ViewModel.java (verified 2026-10-17, parity 85%) — Full decrypted settings surface (Work On Items, Scale 0..2, Main/Off/Arm position x/y/z ±3 and rotation x/y/z ±180 " deg", Work On Arm). Applying tran |
| fG | W-Tap | 13 | ported | [spec](../../analysis/specs/modules/fG.md) | combat/WTap.java (verified 2026-10-17, parity 78%) — Detects attack via cooldown drop, releases forward (or presses sneak in SneakTap mode) between start/stop windows, restores after. NOTE: tap_delay is |
| el | Water Speed | 134 | ported | [spec](../../analysis/specs/modules/el.md) | movement/WaterSpeed.java (verified 2026-10-17, parity 90%; trace-recheck 2026-10-17: atb 3×, water branch unentered) — Horizontal velocity ×1.25 while touching water with movement input, capped at 0.2 blocks/tick. No decrypted settings existed; values are fixed approxi |
| eR | Wind Hop | 119 | partial | [spec](../../analysis/specs/modules/eR.md) | movement/WindHop.java (2026-10-24 re-score, parity 62%) — On activation-key edge (`KeybindSetting.isPressed`, keyboard or mouse, -999 = unbound), selects a hotbar wind charge, pitch; 2026-10-24: Activation Key is required and mouse-aware; real yaw/pitch applied around `interactItem` for the downward throw — see Wave 12/13 |
| dk | XRay | 96 | partial | [spec](../../analysis/specs/modules/dk.md) | render/XRay.java (verified 2026-10-17, parity 60%) — Water, Lava (both false, decrypted). Ore list recovered exactly from the decrypted builder (19 targets: all ore variants + ancient debris + bedrock) a |

---

## Re-audit 2026-10-16 — the 42 low-parity modules (merged 2026-10-17 verbatim from `analysis/docs/archive/PARITY-BURNDOWN.md`; duplicated case-collision banner omitted. Where this section conflicts with the row Notes above, this section is newer — later re-audits append below with their dates)
Why this document exists: `analysis/docs/PARITY.md` flags 42 modules
"low parity" with explanatory notes, but those notes were written **before**
the framework gained the event bus, mixins, `FriendsManager` and
Color/String settings. Every one of the 42 sources was re-read against the
**current code** by two independent audit passes (2026-10-16). Result: the
notes are stale or partially stale for **32 of 42** modules, and no module
still carries the old `parity: native-blocked, approximation` self-label.
The real remaining work is much smaller and has a different shape than the
notes imply.

### Buckets

| Bucket | Meaning | Needs |
|---|---|---|
| **W** | Wiring — the hook/setting exists; the module isn't subscribed/using it (or a registered setting is inert) | static code change, no runtime |
| **V** | Value — one unrecovered constant/name/suffix | `analysis/decrypted/full-dump.jsonl` / `payload-decrypted` lookup |
| **R** | Renderer — drawing fidelity (shader passes, billboard primitives) | port-side renderer work |
| **N** | Native — behavior lives in j2cc VM bodies | corpus (POOL/structure) + runtime numeric traces (`analysis/docs/RUNTIME-TRACE.md`) |

Totals: **W 22 · N 14 · V 2 · R 4**. Note staleness: 14 fully stale,
18 partial, 10 accurate (different gaps remain even when the note is stale).

### The 42 rows

| id | module | bucket | note | next action |
|---|---|---|---|---|
| di | 2D ESP | W | partial | wire `shouldSuppressNametag`/`getTargets` into the render path; add 64-block cap |
| eU | Air Anchor | N | accurate | recover native anchor packet assembly/sequences |
| eX | Anchor Macro | W | accurate | wire When/Diagonal settings (registered, never read) |
| fP | Anti-Cheat Detector | N | stale | recover sampler/fingerprint inventory (aWt/aWu/aWw); `pushSample` never called |
| eZ | Auto Double Hand | N | partial | recover native crystal-pop/sword-predict math |
| fw | Auto Drain | W | partial | wire mode + cancel_for (incl. `FriendsManager`) |
| fd | Auto Dripstone | V | accurate | recover cooldown suffix (currently assumed "s") |
| ft | Auto GApple | W | accurate | wire offhand/slot apple-use engine via `interactItem` |
| fl | Auto Potion | W | accurate | wire activation=Look gate (currently inert) |
| fB | Auto Shield Break | W | partial | ✅ fixed this session (manual mode + single self-disable) |
| eS | Auto Stun Slam | W | accurate | wire change_armor + AttackEntityEvent trigger (attackKey poll) |
| fa | Auto X-Bow | N | accurate | port native cart plan builders + 8-state machine (fa$sK/sL) |
| fp | Backtrack | W | stale | wire delay_knockback/knock_delay (knockMs computed, unused) |
| ey | Blink | N | stale | runtime-verify queue/pulse/auto-disable semantics |
| dP | Block Piercer | W | accurate | wire allowed_blocks filter (cobweb toggle meaningless) |
| fb | Cart Assist | N | stale | recover native plan-record/phase semantics (fb$sM/sN) |
| fc | Cart Refill | V | partial | recover delay default + suffix; hover semantics |
| dv | Chams | R | accurate | implement 4 shader passes (glass/water/chrome/liquid-metal) |
| cS | China Hat | R | stale | port textured hat shell model (jo.bEt/ky.bSd) |
| fu | Criticals | W | partial | feed web_lag packet-hold queue via `PacketSendEvent` |
| eY | Crystal Optimizer | N | partial | recover native aFI crystal-step/gate behavior |
| ed | Custom Camera Distance | W | accurate | apply distance/no_clip in the camera handler (subscribed, empty) |
| dW | Freecam | W | ported | ✅ fixed: applied pos/rot/thirdPerson via CameraAccessor, dropped swallowed reflection; wired render_hand in GameRendererMixin; suppressed player movement input and routed mouse look |
| dm | Friend Indicator | R | stale | billboard primitive + recovered color instead of box outline |
| dS | Hand No Clip | W | stale | ✅ fixed this session (Blocks defaults + membership gate) |
| fq | Hitbox | W | stale | wire only_for_slots/invisible/visible gates; verify box color/width |
| dD | Item Frame Blocker | N | stale | recover native Slots picker; packet entityId accessor |
| fs | Knockback Displacement | W | stale | velocity packet accessor; verify rewrite math (fixed 0.35) |
| eQ | Mace Elytra Target | W | partial | implement armor_swap hit mode (setting exists, unwired) |
| dJ | Mouse Tweaks | W | partial | replace slot-under-cursor reflection with accessor (extend `HandledScreenAccessor`) |
| fE | No Miss | N | stale | recover native aSO slot picker to wire specified_slots |
| dX | No Miss Delay | W | partial | accessor mixin for missTime (kill reflection); verify delay value |
| fQ | No Protocol Disconnect | W | stale | extend `ClientConnectionMixin` transport guard (decode exceptions) |
| fm | Pearl Chaser | N | stale | recover native aKA/aKC/aKD/aKE path evaluation/throw gates |
| cT | Pop Chams | R | stale | restore Simple flat-color pass distinct from Textured (skin) pass |
| fj | Projectile Aim Bot | W | partial | subscribe `WorldRenderEvent` for prediction; gravity-compensated aim |
| fN | SkinProtect | W | partial | ✅ fixed this session (`SkinTexturesResolveEvent` wiring) |
| eH | Spear Dash | N | partial | recover native armor-swap roles (axL/axM/axN) |
| eI | Spear Double Tap | N | partial | recover double-tap timing/weapon-hand bodies (fully virtualized) |
| eG | Spear Lunge | N | partial | recover native awU/awV/awW (trigger edge, armor swap, movement) |
| eF | Spear Reach | W | partial | wire `InteractionRangeEvent` to effectiveReach; populate allowed_items |
| fG | W-Tap | N | partial | recover native tap-phase timing (aTi..aTm) + Fast Bridge bridge |

### First batch — landed 2026-10-16 (working tree, uncommitted)

1. **fN SkinProtect** (`modules/utility/SkinProtect.java`)
   - Subscribes `SkinTexturesResolveEvent` (the hook existed via Cape, was never used).
   - Own/other gating from `protect.profileId` vs local UUID; "Defaults" → Steve.
   - Composes with prior replacements (Cape): swaps body only, keeps cape/elytra/secure.
   - Remaining native gaps unchanged and documented: dynamic preset loader, custom-URL fetch.
2. **dS Hand No Clip** (`modules/combat/HandNoClip.java`)
   - `Blocks` group populated with the decrypted defaults (`dS_.java:87`:
     `Items.COBWEB`, `Items.PAINTING`), as cobweb/painting toggles (default on).
   - `specified` membership gate now honors the cobweb entry; painting is entity-side
     (never queries block shapes) and is retained for structure parity.
3. **fB Auto Shield Break** (`modules/combat/AutoShieldBreak.java`)
   - `attack_mode=manual` was inert (event handler early-returned on non-auto):
     both modes now respond to `AttackEntityEvent`; the tick loop still only
     initiates attacks in `auto` (that is what distinguishes the modes).
   - Disable Mode `single` now self-disables after one break (was: flag only).

Verification: `.\gradlew.bat compileJava --offline -q` → exit 0.

### Next batches

- **W batch 2** (small, no evidence needed): ed, fl, dP, dX, dJ, fu, fq, fs, fp, ft, eS, eX, di, fj.
- **W batch 3** (wiring + a mixin/accessor addition): fQ (transport guard), dW, eF, eQ.
- **N batch** (needs the instrumented runtime session + corpus reads): eU, fP, eZ, fa, ey, fb, eY, dD, fE, fm, eH, eI, eG, fG.
- **V**: fd, fc (look up in `analysis/decrypted/full-dump.jsonl`).
- **R**: dv, cS, dm, cT (dm/cT are the smallest; dv is the big one).

`PARITY.md` note sync is deferred until batches land — its 42 notes currently
still describe pre-hook limitations; this document is the live status until then.

### Verification pass (2026-10-16, 39 remaining rows)

Four independent read-only verification passes re-checked every claim of the
table above against the current code with file:line evidence. Result:
**18 rows confirmed · 21 rows corrected**. Corrections below supersede the
table's action field. Two bucket shifts: `fw` → W+N (native finder), `fs` →
W+N (native core is outbound spoof); `fQ` stands with a caveat.

| id | correction (supersedes table above) |
|---|---|
| di | No 64-block cap in the recovered code — drop that claim; packet-tracker/nametag/empty-groups gaps all real |
| fP | Detection is a skin-asset vanilla probe + chat patterns (aWr), not a brand scan; pushSample dead confirmed |
| eZ | Inert settings here are `totemItem`/`totemSlot` (findTotem hardcodes TOTEM_OF_UNDYING); no "restored" field in eZ |
| fw | Note "glass bottle" wrong (spec says bucket); aRb finder is native (port = 6 fixed samples approximation + omitted fg lock) → row is W+N |
| ft | Original use path is `useKey`/`setPressed` (ft.md:18), not interactItem; restored field written-never-read; offhand has no switch/use path |
| fl | activation unread confirmed, but the original gate is unrecovered (Auto discarded, Look inferred) — Look wiring is a guess |
| eS | GroupSetting imported but never registered (no group in the file); trigger is a 1-option ModeSetting; change_armor unread real |
| fp | knockMs written (L98) never read; delay_knockback never read; name-based classifier approximation real |
| dP | cobweb IS read (L126) but redundant — L129 passes any BlockItem; allowed_blocks set unenforced |
| dv | Shader uniform params have no getters (javadoc overclaims); 4 native passes unrecovered; vanilla lines only |
| cS | Setting names NOT recovered (still DES ciphertext; port labels are invented); shell model jo.bEt/ky.bSd unported |
| dW | Pos IS already applied (setCameraPos reflection); only rotations unapplied; render_hand getter unread; reflection failures swallowed |
| dm | jk.jEkxo RGBA unrecovered — "recovered color" is not available; original tracks a qQ name registry, not FriendsManager |
| fq | Gates real; box color/visible-invisible draw semantics live in the native renderer → color not verifiable; width/height matches aMH |
| fs | Native core is outbound move-packet spoof + VM math; inbound velocity rewrite is the approximation → row is W+N; mixin cannot replace inbound packets |
| eQ | "No friend filter" not a proven gap (spec has no friend token); armor_swap semantics VM-blocked; hotbarSlotOf dead code |
| dJ | Use an `@Invoker` for HandledScreen.getSlotAt (original invoked getHoveredSlot(DD)) instead of focusedSlot |
| dX | Reflection is broken: no missTime in 1.21.11 yarn (field_1771 = attackCooldown, field_1729 = mouse) — the write may throw; ticksSinceLastAttack restore unevidenced |
| fQ | Mixin has no exceptionCaught/decode guard (send/channelRead0 only); module only subscribes the event — action stands, transport guard missing |
| fm | aKE is already implemented (friend filter, L238); target aKA/aKC/aKD only; 1s cadence heuristic real |
| cT | Remove totem-particle claim (not in the original); flat pass = POSITION-only vs Textured POSITION_TEXTURE+Sampler0 |

Confirmed as-is (18): eU, eX, fd, fa, ey, fb, fc, fu, eY, ed, dD, fE, fj,
eH, eI, eG, eF, fG.

---

## Re-audit 2026-10-17 — full 162-module verification (wave 1: 50 modules)

Scope: every module re-verified against the current code and the case-safe
decompiles by parallel auditor/fixer passes (10 modules per pass; reports in
`analysis/port/reports/audit-2026-10-17/batch-NN.md`). Wave 1 = batches 1-5
(50 modules); their rows above now carry `verified 2026-10-17, parity NN%` and
the Status column was refreshed by the same pass.

Method: settings trees vs the decompile builder order (names / step / min / max /
default / suffix / visibility gates); recovered constants (`[recovered]` specs +
`analysis/decrypted/full-dump.jsonl`); listener/event wiring; packet/item
mechanics. Parity % is scored over the **recovered surface** (decompile-visible
logic + recovered constants); VM-virtualized bodies are excluded from the
denominator and itemized below.

Residual-gap scale:
- **[S]** straightforward — evidence exists; remaining work is mostly small
  framework additions (event types, mixins, setting primitives), recorded rather
  than bolted on.
- **[G]** high-probability guess — implemented where marked; every G-fix is
  labeled in the impl javadoc.
- **[U]** uncertain — NOT implemented; needs runtime/native evidence.
- **[V]** value — one unrecovered constant/suffix (DES literal), recoverable
  from a runtime pool capture.
- **[N]** unrecoverable statically — j2cc VM bodies. The Ghidra corpora
  (`analysis/ghidra/handlers-full-annotated/`, `casesafe/handlers-stitched/`)
  are **inventory-grade only** (436/446 files are `BLOB_DECRYPTOR` dispatch
  wrappers, 0 logic-grade C); [N] items name the native method(s) and form the
  capture manifest for the instrumented runtime session. "native-blocked" is no
  longer an acceptable stop reason.

| id | parity | remaining gaps (scale) |
|---|---|---|
| eq | 75% | [U] mechanism; [N] class-init listener path |
| fQ | 80% | [U] prevention design; [N] class-init guard |
| dH | 85% | [S] screen event missing; [N] alC(gJ) |
| ez | 85% | [U] falling gate; [N] avk(gL$tj) |
| dX | 85% | [S] phase/accessor; [N] aqT(gH$th) |
| dB | 90% | [U] boost value; [N] aaj/YO |
| dT | 85% | [S] phase; [N] apI(gH$th) |
| fW | 75% | [S] shared fZ/ga/gb store; [N] aXZ latency math |
| ev | 80% | [U] jump constants; [N] auR(hq)+aaj |
| ew | 90% | [S] phase; [N] auT constant |
| eM | 85% | [U] combo timings; [N] aAY/aAZ + eP config |
| el | 90% | [U] motion math; [N] atb/atc/atd |
| ej | 85% | [S] gM/hc/hv events; [U] freeze loop; [N] asP/asQ/asR |
| ec | 85% | [U] selection/reach; [N] arz |
| en | 85% | [S] sequenced send; [U] trigger; [N] aaj/atp |
| ep | 90% | [U] trigger/boost math; [N] atX/atY |
| eA | 85% | [S] updateVelocity surface; [N] avm |
| fO | 75% | [N] aWj + HTTP endpoint (DES literal); [U] DTO mapping |
| dN | 75% | [S] cz action setting; [N] aon |
| fU | 85% | [S] gy event; [N] aXP |
| ex | 90% | [U] edge geometry; [N] DLL-layer patch (no handler) |
| dV | 95% | [U] rounding/snapshot; [N] aaj/YO; [V] suffix |
| ek | 80% | [S] click event+mixin; [N] asT/asU/asV/asW |
| ea | 90% | [U] write direction; [N] ari; [V] suffix |
| eh | 85% | [U] bind role/unit; [N] asy; [V] suffix |
| eg | 85% | [G] C2S point; [N] DLL patch |
| dL | 70% | [S] hh query event; [N] anq |
| eY | 65% | [G] damage formula; [N] aFE..aFJ (aFI step) |
| fi | 70% | [U] gM phase/restore; [N] aJm..aJw |
| ed | 85% | [G] camera application; [N] aaj; [V] suffix |
| fP | 70% | [S] chat event; [N] aWt/aWr/aWp..aWy |
| fh | 60% | [G] swap mechanics; [N] aJg/aJf |
| eE | 65% | [S] caller poll; [N] awz |
| dP | 45% | [S/G] entity/item-set settings; [N] aoR/aoS/aoT |
| eU | 60% | [S] one-shot gate; [N] aDC/aDI |
| eR | 55% | [S] keybind widget; [N] aCF/aCG/aCH/aCI |
| es | 70% | [G] riptide scope; [N] aup/auq |
| fd | 55% | [S] qN arbitration; [N] aHU/aHV + plans |
| fR | 70% | [S] consumer wiring; [N] accessors |
| eu | 65% | [S] gD event; [N] auJ |
| fz | 80% | [U] guard order/latch; [N] aRT/aRU/YO |
| dD | 80% | [G] defaults/picker; [N] akB |
| dK | 65% | [U] target acquisition; [N] ana/anc/anb/and/ane/anf |
| fL | 70% | [U] trigger/scan; [N] aVf/aVg/YO |
| fC | 75% | [G] formula/filter; [N] aSw/aSx/aSy |
| em | 75% | [U] velocity mapping; [N] ati/atj/atk |
| fA | 70% | [U] swap mechanism/units; [N] aSa |
| eO | 65% | [G] visibility; [U] pearl math; [N] aBt/aBu/aBv/YO |
| dS | 70% | [U] action gate/mapping; [N] apC/apD |
| eF | 70% | [G] reach value; [U] choreography; [N] awH/awF/awG/awE/awI/awJ/awK/awO |

Wave-1 corrections (supersede row notes where they conflict):
- source-map tooling: the handlerSpec column resolved case-collapsed wrong twins
  for ~25/50 rows (fixed: header-verified with direct casesafe fallback). Ghidra
  corpus twins found in the wild — `handlers-full-annotated/sixtwo_eU.c` = eu,
  `sixtwo_fP.c` = fp, `sixtwo_eR.c` = er, `sixtwo_fz.c` = fZ, `sixtwo_em.c` = eM
  — always verify the `Lsixtwo/<id>;` header first.
- Runtime bugs fixed: ew reflection `field_6243`→`field_6228` (float field with
  `setInt` would throw); eY `field_12870` / ed `field_18712` intermediary
  fallbacks (production runs would silently no-op); dD attack-packet
  pass-through (left-clicks no longer cancelled); fU writes the shared
  `FriendsManager`; eU chance roll made consistent (default 100 always places);
  fd trapdoor token narrowed to `class_2533`; dP MISS sentinel (`field_1333`);
  em Grim Shulker scans the player's chunk block entities; fz `getLastAttacker`
  (`method_49107`).
- Binds: eh `bind=74` added; ej `bind=86` enforced; bootEnabled for fQ/fO/fR
  (`Module.bootEnabled()` + OpenGrimClient hook).
- Trace reality check: no module behavior ran in the existing capture (only
  class-init plus boot-time decrypt kernels, e.g. ep.atY ×36, fO.aaj) — all [N]
  items above are unexecuted in `win/trace.jsonl`.

Details (per-module evidence, citations, fixed lists): the batch reports under
`analysis/port/reports/audit-2026-10-17/`.

### Trace re-check — movement group A (eq, ez, ev, ew, el, ej, ep, eA, ex, ek), 2026-10-17

Second pass for the ten movement modules whose wave-1 gaps were tagged
"VM-virtualized → needs runtime trace". The 2026-10-17 dump session (per-module
4 s enable windows + JVMTI trace; `analysis/traces/2026-10-17/`) now exists; the
per-module re-review is `analysis/port/reports/audit-2026-10-17/trace-recheck-movement-a.md`.

| id | parity | remaining gaps (scale) |
|---|---|---|
| eq | 75% | [U] mechanism; no Java-side capture possible (class-init only) |
| ez | 88% | [U] falling gate; avk 3×/no-cancel confirmed by trace |
| ev | 82% | [U] jump constants; auR never fired (zero `hq` events in session) |
| ew | 90% | [S] phase; auT untriggered — 4 s window inside a ~20 s tick stall |
| el | 90% | [U] motion math; atb 3× but water branch unentered (player on land) |
| ej | 90% | [U] timer constant l2; native hc-cancel approximated; asP/asQ unobserved |
| ep | 90% | [U] trigger/boost math; atX/atY untriggered all session |
| eA | 85% | [S] updateVelocity surface; avm untriggered — window inside a ~19 s tick stall |
| ex | 90% | [U] edge geometry; config-only confirmed (no handler exists) |
| ek | 85% | [S] click event+mixin (asU unobserved); asV contract fixed from trace |

Key trace findings folded into the impls:
- **ej**: `asR(hc)` body fully reconstructed (bab → mT gate → qL.dbC rotation →
  iV.bxl live-position Full packet → timer reset → **hc cancel**); AirStuck now
  sends the live position exactly like iV.bxl. hc = per-tick native event
  (1060×, ~40 ms after each gH$th).
- **ek**: `asT` calls `asV` once per tick; `asV` returned **1 with the ClickGUI
  (non-HandledScreen) open** → `isScreenSafe()` no longer requires a
  HandledScreen, and `onTick` gates through it.
- **ez**: `avk` fires once per outbound packet and does not cancel the gL$tj
  event (in-place accessor-write reading confirmed).
- **ev**: `aaj` enable path = base `gg.aaj()` listener registration (matches
  our setEnabled); `hq` was never constructed in-session.
- Tick stalls under trace load (zero `hc`/`gH$th` for 19-20 s) explain the
  untriggered ew/eA windows — not wiring gaps; capture conditions per module
  are in the trace-recheck report and impl javadocs.

### Trace re-check — utility group A (fQ, dH, dT, fW, fO, dN, fU, eh, eg, fP), 2026-10-17

Second pass for the ten utility modules whose wave-1 gaps were tagged
"VM-virtualized → needs runtime trace", using the same 2026-10-17 dump session
(per-module 4 s enable windows + JVMTI trace; `analysis/traces/2026-10-17/`).
Per-module re-review: `analysis/port/reports/audit-2026-10-17/trace-recheck-utility-a.md`.

| id | parity | remaining gaps (scale) |
|---|---|---|
| fQ | 80% | [U] prevention design; class-init native is JVMTI-invisible (no capture possible via MethodEntry) |
| dH | 85% | [S] screen event missing; alC never fired (no sign screen opened) — capture: open a sign edit screen |
| dT | 85% | [S] phase; apI never fired — capture: pre-motion tick + attack key + item use |
| fW | 80% | [G] packet filter; [S] fZ/ga/gb store; aXZ ×16 = per inbound S2C packet; `gg.bab()` guard added 1:1; latency pipeline unentered |
| fO | 80% | [N] aWj + HTTP endpoint; [U] DTO mapping; YO pinned: `qq.cXK` stop + qn queries, no `gg.YO` chain |
| dN | 75% | [S] cz action setting; aon never fired — capture: press Q on a locked slot |
| fU | 85% | [S] gy event; aXP never fired — capture: middle-click a player |
| eh | 85% | [U] bind role/unit; [V] suffix; asy never fired — capture: hold use key with bottle |
| eg | 85% | [G] C2S point; [N] DLL patch; zero entries expected (no payload handler) |
| fP | 75% | [S] chat event; aaj/YO/aWt pinned (order, per-packet, 3 listeners); aWq/aWp bodies unobserved |

Key trace findings folded into the impls:
- **fW**: `aXZ` entered once per inbound S2C packet (16×, matching the window's
  `gL$tk` dispatches); every span = `fX.aYu()` watermark → `gg.bab()` in-game
  guard (returned 1) → `gL.bcf()` packet read. The guard is now the handler's
  first statement (1:1); no `fZ`/`ga`/`gb` calls occurred in any span (latency
  pipeline only runs past the packet filter).
- **fO**: disable override = `qq.cXK()` (scheduler stop; nested `qn.cXy() = 1`,
  `qn.cXx() = 0`) with **no** `gg.YO()` chain (fO has no listeners); the impl's
  disable now clears the published status alongside the activity fields.
- **fP**: `aaj` = `gg.aaj()` (63 `hF.bdK` scans, 3 listeners bound via `hF.bdL`
  = the three `@hG` methods) then `aWq()` last; `YO` = `gg.YO()` then `aWp()`
  last — both sub-steps run exactly where our `onEnable()`/`onDisable()` sit.
  `aWt` fires once per inbound S2C packet, prelude watermark → `gL.bcf()`, **no
  in-game guard** (per-handler, unlike fW).
- **fQ/eg**: zero entries are structural (native clinit is invisible to
  MethodEntry; eg declares no behavior handler — DLL swing patch outside the
  payload), not wiring gaps.
- Chat (`gN`) and frame (`gM`) events fired 0× all session (gM never loaded) —
  fP's `aWr`/`aWt`-adjacent routes need a conditioned capture (send a chat
  line; determine the `gM` driver).

### Trace re-check — utility group B + world (fh, fR, dD, ec, en, ea, dL, dP, eU, fd, dK), 2026-10-17

Second pass for the eleven utility-part-2/world modules whose wave-1 gaps were
tagged "VM-virtualized → needs runtime trace", using the same 2026-10-17 dump
session (`analysis/traces/2026-10-17/`). Per-module re-review:
`analysis/port/reports/audit-2026-10-17/trace-recheck-utility-b-world.md`.

| id | parity | remaining gaps (scale) |
|---|---|---|
| fh | 70% | [N] aJg body; aJf 3× pinned (fg.aIW sentry → gg.bab → ol.cER(Return Delay) → 0); aJg untriggered — capture: attack an entity |
| fR | 75% | [S] consumer wiring; never enabled (load only) — capture: play a sound |
| dD | 80% | [G] defaults/picker; never enabled (load only) — capture: right-click an item frame |
| ec | 88% | [U] reach/selection; arz 2× = ee.arS sentry + gg.bab (networkHandler gate added); interactBlock untriggered — capture: use-key a wall container |
| en | 88% | [S] sequenced send; aaj 1× = debounce gate (cpC→true) + recovered message "You are on cooldown wait a moment before trying again"; atp untriggered — capture: break a block |
| ea | 90% | [U] write direction; never enabled (load only) — capture: tick while breaking a block |
| dL | 70% | [S] hh query event; never enabled (load only) — capture: mine through an entity with a pickaxe |
| dP | 50% | [S/G] entity/item-set settings; YO = ee.arS + gg.YO; aoR/aoS/aoT untriggered — capture: use-key place through an entity |
| eU | 65% | [S] eV gate polarity; aDC 2× = eV.aEq→0 + gg.bab + HyfoP.crA, YO = gg.YO + crA; aDI untriggered — capture: anchor place attempt |
| fd | 60% | [S] qN arbitration; YO = gg.YO + aId = qN.dcB(this); aHU/plans untriggered — capture: player on closed trapdoor + dripstone |
| dK | 65% | [U] target acquisition; YO 1× = gg.YO only; ana/anc/anb untriggered — capture: tick + block update + render with a lever target |

Key trace findings folded into the impls:
- **en**: the enable hook `aaj` decrypts a 101-char constant — a `'5'` (53)
  length byte plus "You are on cooldown wait a moment before trying again" with
  integrity markers 6..52 interleaved — and its first action is
  `mT.cpC(J) → true` (the `cPtuD = mT.cpA()` no-reset stopwatch). `onEnable`
  now runs that gate first and emits the recovered message on the cooldown
  path (500 ms placeholder for the unrecovered threshold).
- **fh**: `aJf` runs the full tick body every tick: `fg.aIW()` sentry →
  `gg.bab()` in-game gate → `ol.cER(Return Delay)` scheduler poll (→ 0, nested
  `cEX → 12`, `cEW → 0`). `onTick` now mirrors that gate/poll order.
- **ec/eU/fh**: `gg.bab()` = player + world + interactionManager +
  networkHandler — the networkHandler check added 1:1 to the
  GhostHand/AttributeSwap/AirAnchor gates.
- **eU/fd/dP/dK**: `YO` disable overrides pinned — eU = `gg.YO + mW.crA`;
  fd = `gg.YO + aId` where `aId = rD.dma().dcB(this)` (qN action unregister —
  supersedes fd.md's "state reset candidate"); dP = `ee.arS` sentry +
  `gg.YO`; dK = `gg.YO` only.
- **Payload-wide sentry family**: `gg.baA`/`mT.cpK`/`fg.aIW`/`ee.arS`/`eB.avS`
  are anti-tamper/broadcast reads that most behavior methods perform first
  (decompiled bodies branch on null) — they explain several previously opaque
  nested calls (ec.arS, dP.YO, fh.aJf) and are not module behavior.
- Tick stalls under trace load explain the never-enabled windows
  (fR/dD/ea/dL: class load only) — capture conditions are in the report and
  impl javadocs.

### Wave-1 static re-verification — group A (eq, fQ, dH, ez, dX, dB, dT, fW, ev, ew, eM, el, ej, ec, en, ep, eA, fO, dN, fU, ex, dV, ek, ea, eh, eg, dL, eY, fi, ed), 2026-10-17

Post-trace static re-attack of the wave-1 residual gaps with the matured toolkit
(javap bytecode + constant-pool descriptor resolution + pool-run analysis; report:
`analysis/port/reports/audit-2026-10-17/wave1-static-reverify-a.md`). 8 modules
improved, 1 corrected downward, 21 re-verified unchanged — javadoc/evidence edits
only, no behavior rewrites. Row parities above updated.

| id | parity | was | fixed |
|---|---|---|---|
| eq | 76% | 75% | partial |
| fQ | 84% | 80% | yes |
| eM | 88% | 87% | partial |
| en | 87% | 88% | partial (correction) |
| eA | 87% | 85% | partial |
| dV | 96% | 95% | partial |
| ea | 92% | 90% | partial |
| eh | 87% | 85% | partial |
| ed | 87% | 85% | partial |

Key findings:
- **[V] suffix verdict — the four wave-1 [V] items (dV `HnRzm`, ea `ENAXX`,
  eh `QZqXr`, ed `XgLBB`) are re-classified [N]**: those classes carry no DES
  ciphertext in the Java `<clinit>` (no non-ASCII Utf8 in the constant pool;
  `<clinit>` is a native `_<hash>()` stub) — the DES-decryptor route only works
  where the Java clinit holds the cipher (dv/dt/dz family). Not statically
  recoverable.
- **fQ**: the pool run `YXdPC | String.endsWith | AXCPX` proves the invalid-packet
  predicate is a string-suffix test.
- **en correction**: the wave-1 trace window was a cluster slice, not an en-only
  run (`field_6017`/`method_11312` belong to em's part) — the two gates are
  labeled shared/uncertain.
- **ea**: both `getDestroyDelay`/`setDestroyDelay` are in ea's own run — the
  original reads before writing. **eA**: `forwardSpeed`/`sidewaysSpeed` are eA's
  own tokens (`Entity.updateVelocity` is the neighbour's window) — the
  getVelocity/setVelocity adaptation is the correct documented reading.

### Wave-1 static re-verification — group B (fP, fh, eE, dP, eU, eR, es, fd, fR, eu, fz, dD, dK, fL, fC, em, fA, eO, dS, eF), 2026-10-17

Post-trace static re-attack of the batch-04+05 residual gaps (same toolkit as
group A; report: `analysis/port/reports/audit-2026-10-17/wave1-static-reverify-b.md`).
14 modules improved (6 `yes`, 8 `partial`), 6 unchanged; row parities above updated.

| id | parity | was | fixed |
|---|---|---|---|
| fh | 76% | 70% | yes |
| eE | 66% | 65% | partial |
| dP | 54% | 50% | partial |
| eR | 57% | 55% | partial |
| es | 78% | 70% | yes |
| fR | 77% | 75% | partial |
| dD | 84% | 80% | partial |
| fL | 81% | 75% | yes |
| fC | 81% | 80% | partial |
| em | 85% | 80% | partial |
| fA | 78% | 72% | yes |
| eO | 71% | 65% | yes |
| dS | 74% | 70% | partial |
| eF | 83% | 78% | yes |

Key findings:
- **`cA` is a random-range slider, not a fixed value** (state `MutablePair<Double,Double>`;
  `UN()` = `cpP(left,right)` = `nextDouble()*(right-left)+left`, uniform per read).
  Applied to the five modules with non-degenerate pairs (fh, fL ×2, fA, eO, eF) —
  their delays now sample the recovered range (`UI(50,100)` / `UI(0,50)`).
- **es**: "Entity Push" default corrected on -> off (behavioural — only "Block
  Push" carries `.Tz()`; behaviour reads `TC()`).
- **ct/cu radio defaults** = index 0 unless `cu.SY()` — dD Mode "All Items" and
  fR "Normal" are now evidenced; dD's nine slot toggles default off; dP
  {PLAYER}/{COBWEB}, dS {COBWEB} (PAINTING is not a block item); eF's twelve
  items are recovered defaults.
- **em**: the jump event is fully recovered from the
  `LivingEntityJumpEventBridgeMixin` bytecode (`hs(entity, getJumpVelocity(),
  getYaw())`) — the port's vertical rewrite writes the same value as the original.
- **eO**: "Return Delay visible iff Return Slot" is fact (`cB.Vf(Supplier)` +
  `cJ.WF()`); eR/eO `-999` unbound is 1:1.
- **[V] negative**: all 20 classes are j2cc-native (`<clinit>` stub) — the eight
  suffixes are assigned natively (verified four ways: no dump records, no
  ciphertext in the class files, DLL pool windows hold names only, VM-interpreted
  decryptors). Documented, not guessed.
- Spec corrections folded: `specs/00-framework.md` (cA range semantics; ct/cu
  defaults; cw.Tz/TC; cz empty set), `handlers/em.md` (hs floats),
  `handlers/es.md` (Entity Push off), `casesafe/handlers/fC_.md` (degenerate
  100/100 pair).

---

## Re-audit 2026-10-17 — full 162-module verification (waves 2–3: batches 6–29, 112 modules)

Scope: the remaining modules re-verified against the current code and the
case-safe decompiles by parallel auditor/fixer passes (batches 6–29; reports
`analysis/port/reports/audit-2026-10-17/batch-NN.md` — per-module evidence and
citations there). Their rows above now carry `verified 2026-10-17, parity NN%`
and the Status column was refreshed by the same pass. Residual-gap scale: same
as wave 1 ([S]/[G]/[U]/[V]/[N]).

Method (wave-1 base plus): bytecode ground truth (`javap -c -p` on the
`jar-casesafe` classes) wherever CFR mangled the obfuscated control flow;
class-specific DES-decryptor re-implementations validated against
`full-dump.jsonl` (batches 18/20/22/26/27/28/29 recovered previously-unrecovered
constants — e.g. dt `"ms"`/`" x"`/`"00:00"`, dj 300/20, fS 76/76, dz 120/120);
the 2026-10-17 trace folded in where it covered the module.

Coverage note: batch 19's list said `ff dq` but its pass audited the case twins
`fF`/`dQ` (both already covered deeper by batches 12/9; their rows use batch-19's
values). The real `ff` (Fake Lag) and `dq` (Storage ESP) were closed by batch 30 (ff 90%
partial, dq 95% ported; batch 30 also confirmed the on-disk plain
`sixtwo/dq.java` is the `dQ` case-twin — the real decompile is the casesafe
file).

| id | parity | remaining gaps (scale) |
|---|---|---|
| fg | 60% | [N] aIS input select, aIT predicate, aIU getter, aIV/aIW element layout |
| fc | 68% | [U] Hover semantics, per-slot loop shape, fa shared-buffer contract; [N] aHO body |
| eD | 75% | [N] awt/awu bodies; eD vs eE shared-region attribution |
| eT | 66% | [N] aDu/aDv/aDw bodies, plan/attack-point calls, stopGliding role; [U] default Click Mode |
| dR | 76% | [N] apk/apj/app/apq/apr bodies; [U] per-item predicate assignment, enum phase meanings |
| fm | 55% | [N] aKp/aKq/aKA/aKC/aKD/aKw bodies (trajectory sim/aim/throw stand-in) |
| fM | 74% | [N] aVp/aVq bodies; [U] multi-mode fallback order |
| fa | 45% | [N] all 53 handler bodies; [U] state transition table and plan builders |
| fj | 62% | [N] aJA/aJB/aJC/aJD/aJE bodies; [U] aJE scoring, regex pattern, suffix zVHFr |
| fT | 82% | [N] aXG/aXr/aXq/aXp bodies, aXy/aXz/aXA normalizers; [U] gN/gR event semantics |
| fy | 60% | [N] aRJ/aRK bodies; [U] refill trigger, interaction mechanism, Normal/Legit, Totem Slot unwired |
| fE | 80% | [N] aSN body, aSO slot-picker; [G] default radio index; [U] cu radio-vs-toggle semantics |
| fD | 85% | [N] aSH body; [G] default radio index, Slots defaults; [U] aSI picker, cu semantics |
| ei | 70% | [U] face-sampling grid N1/N2, cHY/cHU validation, silent-aim, asG formula; [N] asJ/asE/asF |
| dW | 75% | [N] aql(gA) input grab; [U] kr spoof panel, Render Hand, camera math, latch roles |
| dF | 70% | [N] ald/alf bodies + five item predicates; [U] predicate mapping, slot-cache, trigger |
| eI | 65% | [N] axZ/axX/axY, aya/ayb steps; [U] ol controller, hit timing, Return Delay randomization |
| ey | 90% | [N] ava/avb/avc/ave/avf bodies; [U] queue assignment, cancel key, pulse cadence, flush |
| dZ | 85% | [N] arc/aqZ/ara bodies; [U] RangedWeaponItem case, setMissTime, place check, jc.WnbNG |
| eZ | 75% | [N] aFL/aFN bodies, aFO/aFP steps, aFQ/aFR predicates; [G] prediction formulas; [U] jj.bCL/bBt, Cetgu |
| eN | 80% | [N] aBc/aBb bodies (breach/wind-burst sequences); [U] Smart strategy, slot pick |
| fV | 78% | [N] aaj body (qu builder + fW/fY/fZ sweep); [U] file scope, qt enum, flags; [V] cy caps |
| fG | 78% | [N] aTi..aTm phase bodies, aTh bridge; [S] aTg input event; [U] key identity per mode |
| eS | 82% | [N] change_armor/ol path, aCQ/aCU/aCR/aCS; [U] aCX/aCY probes, UKQaD, ordering |
| dU | 85% | [U] apK bobber-id semantics; [N] splash/reel/recast scheduling; [U] attackBlock pool role |
| eC | 88% | [U] Keep Sprint math, Ignore consumers/predicates, packet spoofs; [N] awb/awc bodies |
| ft | 85% | [N] aPU loop, aPY/aPZ, aPV, aQf, aPW/aPX/aQc/aQe; [U] slider mappings, player scope |
| fb | 80% | [S] aHd trigger no counterpart; [N] fb$sM/sN plans + aHj/aHk/aHl/aHm; [U] geometry |
| eK | 85% | [V] Prediction Ticks suffix; [N] azv/ayB/ayx/ayy placement math; [U] azE/azF/azG, eL names |
| eG | 82% | [N] awU/awV/awW lunge mechanics; [U] axk condition, yLAeQ/UGYqg/xDsLg roles, SOwbe |
| dA | 70% | [N] all firework math (aim/overshoot/cooldown); [G] target acquisition, cooldown ticks, use |
| eW | 65% | [U] ghost-crystal prediction + interactAt submission; [U] dimension gate, CPS scheduler; [N] aEA |
| fI | 75% | [G] key poll, projectile classification, Invisible polarity; [U] threat criteria; [N] aUD/aUB bodies |
| eQ | 70% | [U] eP/oW/oY orchestrator, pe solve, Armor Swap, aCf/aCg; [G] target/rotation/climb; [N] dive math |
| eB | 70% | [G] velocity composition, anti-kick dip, packet rewrite; [U] .aZS flag, avv/avy; [N] avr/avs/avu/avt |
| dY | 60% | [U] enforcement point unrecovered (module inert); [G] cF widget persistence |
| eb | 75% | [U] Items cK multiselect absent, Storage Title cap; [G] QUICK_MOVE transfer; [N] aro body |
| er | 65% | [G] velocity multiplier, Matrix branch, yaw push; [U] collision loop, gw booleans; [N] motion math |
| fs | 60% | [N] aPg/aPp/aPn bodies; [G] displacement math; [U] latch roles, aPk/aPq/aPr split, trigger |
| eH | 78% | [U] armor-swap/restore choreography (ol, rB, axt/axu/axs/axv); [U] dash impulse; [N] axz/axL/axM/axN/axw |
| ef | 78% | [U] swap choreography (asd..asi, hGtSw, ol/oJ), Silent packet path; [N] arX/arY bodies |
| eo | 65% | [U] per-mode algorithms (Grim/Matrix/NCP, atS, slot resync); [G] classification; [N] atu/atv |
| fv | 80% | [U] aQE durability, aQF scoring, armorIndex table, guards; [N] aQA/aQG/aQH/aQI/aQJ/aQK |
| dO | 60% | [U] setting names/defaults, save/restore split, aoF/aoG, aoD/aoE, workers; [N] aou/aov/aot/aos/aow |
| eP | 80% | [U] 0xf325 VM bodies, oW/qP pipeline, aBF coordinator, pe score; [G] type map; [N] aBC/aBI/aBJ/aBK/aBO |
| dJ | 72% | [U] clickSlot sequences, amT scaling, BundleItem; [G] wheel/drag; [N] amy/amz/amx/amA/amB/amF/amL |
| eJ | 68% | [U] trap-shape offsets, azo score, predicates, eL base; [N] ayq/ayB/ayC/ayy bodies |
| fN | 68% | [U] dynamic preset children, Custom URL fetch/replace; [N] aVx/aVw/aVy/aVz/aVA bodies |
| dy | 88% | [U] render treatment, self-glow mechanism, dh.afl panic paths |
| fu | 58% | [N] all mode arithmetic (aQp params, spoofed packets, profile selection); [U] class_2813 role |
| eX | 52% | [U] When/Diagonal semantics, phase-machine approximation, use-event entries not mirrored |
| fB | 55% | [N] decision arithmetic (Single/Stun/Spam, roll, switch-back); [U] aSm/aSj/aSk unassignable |
| dE | 80% | [U] exact pacing/cursor math; [U] string constants (default message/placeholder) |
| fn | 55% | [U] Click Pattern ct group omitted; [N]/[U] click-timing, profiles, jitter, Simulate Exhaust |
| fx | 58% | [N]/[U] health-trigger math, SWAP click, timers, Legit/Normal, aRy; [S] Block Input no hook |
| eV | 52% | [N]/[U] all crystal math, MuaJV, th/ti split, five predicates; settings registered but unread |
| dC | 85% | [U] transform order/frame + Scale application; [U] rotation-axis composition |
| dm | 92% | [U] jk.jEkxo RGBA placeholder; [U] blend mode approx; [S] friend set uses FriendsManager |
| df | 75% | [S] projection/framebuffer hook missing (module code 1:1) |
| dx | 100% | [U] consumer mixins live in bootstrap layer, absent; accessors never called |
| cS | 92% | [G] ky segment count + gradient constants; [U] head-model transform; [N] jo.bEt/lT.ciQ |
| fo | 62% | [N] aLl/aLm/aLn + 7 native predicates, per-check mapping; [U] name patterns, sound formula |
| du | 95% | [U] panic-switch loop break (dh.afl) absent; [U] jg$tJ.OCdZM preset contents |
| dr | 92% | [G] rs$we.dyK/dyJ sprite ids + effect order; [U] gi injection point, cancel interplay |
| fl | 64% | [N] aJP/aJO, aJU/aJW/aJX/aJY bodies; [U] health formula, splash-vs-drink, use call |
| dk | 60% | [N]/[U] five render-cancel handlers native-injected; .aZS(false) descriptor flag |
| fp | 60% | [N] aLG/aLJ/aLK/aLQ/aLR/aLO/aLH/aLI bodies; [U] queue split, expiry, ghost render, aZS |
| dn | 85% | [S] no hu/hp add-remove event (polling); [G] fade-in omitted; [G] marker boxes vs icon |
| da | 85% | [G] fade-in rate; [U] sound-name regex; [G] marker boxes vs HUD card; [S] SoundInstanceListener |
| fX | 85% | [G] key bus absent (GLFW poll), Edit Theme -> ClickGui; [S] Style not consumed; [U] aZQ vs 344 |
| fK | 98% | [U] original consumer call sites in native layer (out of scope) |
| et | 92% | [G] four yaw constants DES-decrypted; [U] gS collision event publisher |
| dg | 78% | [G] native trajectory simulator; [U] time-left format; [G] fade-in; [G] HUD card -> world box |
| fH | 50% | [N] all behavior native VM (rotation, aUp/aUq/CBxhI); [G] Fov/render nothing; [U] defaults |
| cV | 96% | [U] private kS pipeline state (depth/culling) no equivalent; null frustum renders |
| ds | 93% | [U] cF preset scope + item-list widget unexpressible; [U] kH builder; frustum fallback |
| dd | 85% | [U] rl scanner contract, scan shape + program id; [G] 32-block cap; [U] render layer |
| cY | 70% | [N] on helper native; [G] guessed state machine; [U] two tick handlers -> one; [U] visual marker |
| do | 92% | [G] fade duration 400 ms; [U] GUI-offset literals (offset 0); [U] render-layer name -> fill |
| cQ | 60% | [N] YG profile registry (iq/im) native, curve params; [G] YI/YF flags; [U] hc/gm events absent |
| fJ | 93% | [U] lMLXr unit string; [S] cA range -> single slider; [S] redraw not run while disabled |
| dl | 76% | [S] drawing consumer absent (post-process + geometry); [U] two theme color defaults -> white |
| dc | 86% | [G] billboard substitute for textured sprites + glow pass; [U] ZRQxW inferred 1000 |
| dG | 68% | [S] four render-cancel handlers no event counterpart; [U] hl vs he/gr pass mapping |
| cT | 95% | [U] private pipelines kR.NElVn/vTohM substituted; [S] AFTER_ENTITIES phase; [U] light const |
| di | 50% | [U] profile registry + drawing dispatch unrebuilt; [U] screen projection; [G] nametag gate |
| cR | 88% | [U] mo textures + glow substituted; [G] three constants; [U] easing linear; [S] disconnect |
| cU | 93% | [G] jk.bDo DES constants (360-step wave); [U] frustum fallback, color default; [N] kp consts |
| fr | 60% | [N] native core (selection/attack/crit/aim/hit-delay); [N] render handlers; [U] dbt gate, aAa |
| dp | 80% | [U] mT quantum 50 ms; [N] model hologram -> box; [U] HUD labels, ahs/ahw/ahr, message |
| dw | 94% | [G] kz segment/alpha + light values; [G] sprite/download approx; [U] cF widget; [N] panic |
| fw | 88% | [N] aQY/aQX/aQZ/aRa/aRd native core; [G] steal mapping, sample count, suffix; [U] NrVzh |
| db | 93% | [G] animation duration 400 ms; [G] sprites/download/layer; [U] disconnect world-null approx |
| fF | 86% | [N] aST decision body VM-resident; [U] range transform, visibility bodies; cF/cz no widget |
| dQ | 74% | [U] Custom URL audio unimplemented; [G] needle, presets, gain; [U] volume math, debounce |
| cP | 97% | [S] custom pipelines -> RenderLayers; [G] theme colors hardcoded white; [S] event phase |
| cW | 93% | [G] theme colors, icon glyph; [S] rounded corners, fonts, projection, sync scan, ZU clear |
| cZ | 89% | [G] four DES longs undecryptable (100 ms/divisor 2); [U] capture/composite, suffix, colors |
| fq | 90% | [U] native hitbox renderer draw semantics; [U] qP.ddn attack, ou.kxNyl; [G] cz widget |
| dz | 93% | [U] jk.bDn variation constants (360/0/0); textures/batchers; [U] Ignore Walls, linear ease |
| dv | 80% | [N] four shader passes kj.bPr..bPu + queue; [N] ro.diF presets; [U] aiJ pass-id |
| de | 80% | [N] ki.bPi/kj.bPr..bPu shader passes; [N] acv hand re-render; [U] OTglH, ro.diF presets |
| dh | 85% | [U] five preset times, particle cap/bounds, fade, billboard pass, fog pipeline, category |
| cX | 90% | [U] script slot appliers aar/aav (aliases absent); [G] copy-inventory base 36; [S] jh.bCg |
| dM | 45% | [N] market engine (nO/nR/nP/nM/nB..nE); [U] config store, API, notifications, editor |
| dI | 94% | [N] ja.byI native-VM method; [G] 50 ms/tick, event plumbing, cK Blocks, render pipeline |
| ee | 95% | [U] gR event identity; [G] refresh cadence while disabled; [N] jd.bAm + qG/qE pipeline; [U] qC |
| dj | 96% | [S] kR.oXKXV + kN/kH -> RenderLayers; [S] tick timing; [S] null frustum; [G] ct option flag |
| dt | 94% | [U] armor slot order; [G] ji divisors/format, numeral glyphs; [S] fonts, rects, nameplate |
| fS | 92% | [N] qu.cmARD gate inert; [U] jd.dCIsP trigger, ru.djG/djF stand-ins; [N] mO computed |
| ff | 90% | [U] kx indicator + toggle (native class key); [S] cA two-handle ranges, mT inline, hw$tw pre-attack; [U] aZS(false) |
| dq | 95% | [G] irQyF throttle (250 ms labeled); [S] cK item-set->group, chunk scan, batcher draws, theme->white; [N] balhj thread factory |

Notable corrections & runtime bugs fixed in the wave (supersede row notes where they conflict):
- dt Nametags: the old impl collected tags but never drew — full 1:1 HUD pass now.
- ff Fake Lag: de-invented Normal-mode cycle gate — 1:1 `aIn`/`aIl` from bytecode (stopwatch gate, conditional redraws; the CFR unconditional-redraw block is a dead obfuscator branch).
- dq Storage ESP: item-exact scan (was `instanceof`), colored-shulker collapse onto the Shulker Box toggle, loaded-chunk snapshot (view distance + 1), frustum gate on the box pass only.
- fq Hitbox: attack event moved AttackEntityEvent -> AttackPressEvent (the old
  subscription could never reach the miss-interception path); category COMBAT.
- cZ Soul Effects: "Behind Walls" default corrected true -> false (cJ default).
- dk XRay: `setBind(96)` (the module id) -> registry bind -999.
- fT Resource Pack Bypass: `bootEnabled()` (the original registers true).
- de Hand Chams: the tint approximation was inert (`active` never set) — now live.
- ee Cape: "Hide Wings" no longer nulls the elytra (see wave 4).
- Repo-wide: original `gh.*` categories do not partition the repo's categories (wave 4).

Integration fixes (post-wave, live testing):
- EventBridge: `ClientPreAttackCallback` return was inverted — every attack
  (entity + block break + swing) was cancelled; fixed (left-click restored).
- ClickGuiScreen: `centre()` ran in the constructor (width/height 0) — window
  off-screen; now re-centres in `init()`.
- ClientConnectionMixin: the packet-replacement re-send re-entered the event —
  StackOverflowError under silent rotations; ThreadLocal re-entrancy guard added.
- ClickGuiScreen: right-click was behind a LEFT-only gate — the settings popup
  could never open; gate widened (left toggles, right opens settings).
- **ChinaHat crash (2026-10-18):** `drawCone` requested two
  `VertexConsumerProvider.Immediate` buffers before writing either — the second
  `getBuffer` ended the first (`"Not building!"`), the swallowed throw skipped
  `matrices.pop()` and tripped vanilla's `"Pose stack not empty"` check. Fixed
  with sequential passes + `try/finally`; the closing rim line corrected 1:1
  (angle-0 point, last segment's color, `ky.java:221`).
- **General framework review (2026-10-18):** config persistence was a silent
  no-op (settings/binds/enable states never loaded) — fixed to the recovered
  `{"modules", "friends"}` shape with settings→bind→enable order; RotationManager
  froze silent rotations at the first same-owner submission — fixed to
  `mt#cmc` semantics; EventBus aborted dispatch on listener exceptions — fixed
  to swallow+log per listener; Kill Aura default bind 82 added; friends list
  persisted; keybind lang entries added. (Full detail: PROGRESS.md; report:
  `general-framework-review.md`.)
- **ClickGUI settings popup ("garbled glyph noise"):** `openAnim` was never
  advanced per frame (`openFor()` snaps it to 0) — the panel drew at half scale
  with alpha-0 themed colors; fixed with a per-frame `updateAnimations()` hook
  (`az.su` contract). Panel width 127 (`bd.BcpIo`), open at
  `window.right + 10, window.top` (`bg.CQ`), module toggle row, fifth MSDF sheet
  (`bold`), and the real payload logo (`assets/opengrim/icons/logo.png`)
  replacing the placeholder square. Follow-up: `GuiDraw.pushTransform` scaled
  about the origin (missing the `jH.bId` closing `translate(-cx,-cy)`) — the
  popup drew off-screen at full scale; fixed. `Tween.update` one-shot init flag
  fixed (accent pill / hover tweens now advance; the pill slides to the
  selected tab).

Details (per-module evidence, citations, fixed lists): the batch reports under
`analysis/port/reports/audit-2026-10-17/`.

---

## Divergences from the original (append-only log, merged 2026-10-17 verbatim from `analysis/PARITY-DIVERGENCES.md`; waves are dated — new waves append here)

Each line: module (or framework), what differs from the decompiled original,
and why. Items here are limited to genuinely unrecoverable behavior (native
method bodies, encrypted strings) or the minimum needed to function on this
stack (event wiring, vanilla API differences). Everything else must match
the decompile exactly.

### Wave 1 — rotation manager + ei/er/fr/eV (2026-10-11)

- rotation/RotationManager (sixtwo.qL): native method bodies
  (dbH/dbJ/dbG/dbI/dbR/dbS/dbQ/dbL/dbK/dbU/dbT/dbD/dbM/dbO/dbP/dbZ/dbF/dbW,
  ou/ot/ow/os/mw natives, qL.java:50-104,141) are not recoverable statically;
  submit/tick/expiry/send-rewrite are ported from the Java-visible contract
  (qL.java:32-39,62-67,106-172; mt.java:13-158). The gufEg/adYOd slots
  (qL.java:35-36) and dbY/dbZ/dbF/dbW/dbV/dbT/dbU/dbD readouts have no port.
- rotation/RotationManager: request lifetime defaults to 2 ticks; the native
  expiry driver (mt$uN#dkmea source) is unrecovered.
- rotation/RotationPriority (sixtwo.mw, mw.java:15-20): backing int values come
  from native cmD(); ordering here is declaration ordinal.
- rotation/Rotation (sixtwo.ov): cGF smoothing (ov.java:206-212, needs native
  qL.dbZ + mZ.csr step) and the equals control-flow obfuscation
  (ov.java:45-128) are not ported.
- rotation/RotationManager: driven from OpenGrimClient after
  ModuleManager.tick() instead of the native hF bus + gH.th/gv phases —
  event-wiring deviation required by our stack.
- rotation/RotationManager.effectiveRotation: returns a neutral rotation when
  the player is null; the original dereferences the player unconditionally
  (qL.java:151) — vanilla-API safety deviation.
- ei Scaffold: click points are face centers; the original samples sub-square
  [0.15, 0.85] points (oE.DNYow/XZnzz) with best/random pick (oB.LwHxs/FXGPX)
  — DES-encrypted counts N1/N2 unrecovered.
- ei Scaffold: no oU.Xrdom dedupe map, no cHY/cHZ reach-and-raycast
  validation, no qL.dbI silent-aim submit, hotbar-only block search; the
  Both-hands fallback and Client/Server swing mapping follow the natural
  reading (ei.md items 8, 14 unrecovered).
- ei Scaffold: asG gate suppresses while using items or mining (ingredients
  from the asG pool slice); the exact boolean formula is unrecovered.
- er Speed: mode selectors are exclusive dropdowns; the original uses
  independent Collision / Collision Target / Matrix toggles plus independent
  Ground / Air / Constant toggles (er.java:51-90,120-146).
- er Speed: per-tick physics (collision probe via jg.bBN, target loop,
  friction term, Matrix profile, yaw injection through qL) is native and
  unrecovered; velocity multipliers/additive boost are the natural reading
  of the setting names and ranges.
- fr Kill Aura: attack-point engine (pe/pc(0.15)/pd jitter), aim smoothing
  (Normal/Snap, Unrestricted/Adaptive), Sprint/Move-Correction modes, crit
  forcing (isOnGround/isGliding/jump cluster), weapon/slot/shield/click and
  screen/use gates, render modes and Target Lock integration are native and
  unrecovered.
- fr Kill Aura: Targets selector is a players/mobs/all category mode; the
  native cF multiselect contents are encrypted (fr.java:555).
- fr Kill Aura: the rD.dlZ().dbt() arbitration gate (fr.java:1102-1112) has
  no counterpart.
- eV Auto Crystal: damage model, target scan order, CPS-spoof shaping,
  kill-pause timing, predicted-id attacks and the ti-phase role (aDP) are
  native and unrecovered; place/break int tick counters stand in for the
  three mT wall-clock timers (tick quantum fCqJQ unrecovered — not assumed).
- eV Auto Crystal: break/place ranges (4.5 reach, 8.0 search) are the natural
  reading; no range token was recovered.

### Wave 2 — Combat, Movement, Render & Utility 1:1 Reconstruction (2026-10-12)

### Combat & Radial GUI
- KillAura: pe/pc/pd attack-point engine, aim-smoothing math, sprint/move-correction movement, crit forcing, Break Shield axe-swap, target-render shapes, theme-fed color default, encrypted Targets/Slots contents are native-blocked; all Java-visible logic, setting trees, and tick gates ported 1:1.
- Criticals: Web-Lag packet-hold queue (aQo) packet-hold target set is native-only.
- EmoteWheelScreen (sixtwo.bD): wheel open/selection/hover durations use timed linear ramps instead of obfuscated rk/rj state curves; pointer and click dispatch use vanilla mouse events.
- WheelDraw (sixtwo.lC): annular-arc and shader pipelines mapped to vanilla DrawContext matrix-stack fill and line draws.
- SettingPersistence / RpJson (sixtwo.cB, rp): JSON persistence uses typed schema preserving on-disk opengrim.json compatibility.

### Movement
- Sprint (sixtwo.eC): exact spoofed C2S movement packet generation sequence and internal native helper predicates beyond awe/awf/awg are native-blocked inside j2cc bytecode VM; omni-sprint condition, vanilla sprint overrides (hunger/collision/blindness), Stop On gates, and Keep Sprint momentum preservation are ported 1:1.
- Strafe (sixtwo.eA): floating-point math sequence inside j2cc VM jump table is native-blocked; reconstructed using recovered constant pool tokens.
- NoSlow (sixtwo.eo): anticheat-specific bypass packet timing state machines are native-blocked; Grim V3 slot packet dispatch ported from recovered pool tokens.
- NoFall (sixtwo.ez): outbound wire flag rewrite on PlayerMoveC2SPacket subtypes ported directly from decompile and mixin accessor evidence.
- NoPush (sixtwo.es): native collision patch hooks hd/hq ported to framework packet and collision events with riptide spin attack exemption.
- NoJumpDelay (sixtwo.ew): uses cached reflection on LivingEntity.jumpingCooldown to zero jump delay every tick.
- NullMovement (sixtwo.eq): unslowed horizontal velocity restored during obstructed movement via tick physics simulation.
- SafeWalk (sixtwo.ex): edge clamp enforced via client velocity check and ground prediction in onTick.
- WaterSpeed (sixtwo.el): scales swim velocity with Depth Strider, IceBlock, and Speed effect bonuses.
- TridentBoost (sixtwo.eu): invokes boost velocity and plays trident sounds during active channeling.
- KnockbackDisplacement (sixtwo.fs): client-side velocity packet rewrite and full Java state fields and accessors preserved.
- PearlChaser (sixtwo.fm): standard ballistic simulation for ender pearl projectile physics wired to landing prediction (aKw).
- SpearDash (sixtwo.eH): activation key edge detection and spear release triggers preserved along with all state fields.
- SuperFirework (sixtwo.ep): triggered via PacketSendEvent on firework rocket use and client use key state.
- WindHop (sixtwo.eR): inventory hotbar scan for Items.WIND_CHARGE used directly in downward charge launch.

### Render
- HitParticles (sixtwo.dc): custom billboard shader textures mapped to vanilla matrix billboard quad pass with ColorSetting ARGB.
- HoleEsp (sixtwo.dj): bedrock, obsidian, mixed, and void safety levels mapped to the 4 recovered ColorSettings with box and fade quad passes.
- JumpCircle (sixtwo.db): circle uses standard expanding ring/quad geometry with configured circleScale and circleColor.
- LogoutSpots (sixtwo.dp): rendered as 3D bounding box with height, background fill, and positionColor matching sixtwo.dp outline path.
- Nametags (sixtwo.dt): tags compiled into TagChip, PlayerTag, and ItemTag records with exact chip ordering, colors, and vanilla nametag suppression.
- Outlines (sixtwo.dl): entity set, all 11 shader settings, dynamic visibility rules, and isOutliningActive nameplate suppression flag ported 1:1. Residual divergences: glow batch (`ki.bPi` + `kn.YNOIY` window) is not reproducible in the rebuild framework, so the module publishes the outlined entity set to the render consumer instead; entity scan uses `world.getOtherEntities` + `isAlive` in place of `jJ.bIB` (no distance cap, matching the original).
- Particles (sixtwo.cR): custom batched texture shader pass mapped to WorldRenderEvent billboard quads with glow pass.
- PearlPrediction (sixtwo.dg): reconstructed as world-space billboard at landing position with identical text and time calculation.
- PopChams (sixtwo.cT): reconstructed with vanilla 1.21.11 translucent entity layer for PlayerEntityModel.
- ShieldStatus (sixtwo.cY): state machine and progress calculations ported directly in Java with gradient transition lerp.
- SkeletonEsp (sixtwo.cV): standard line buffer with exact 8-bone topology and Euler angles from kq.java.
- SoulEffects (sixtwo.cZ): dual-pass particle and glow quads in WorldRenderEvent.
- SoundEsp (sixtwo.da): world-space fading box markers for spatial sound visualization.
- StorageEsp (sixtwo.dq): loaded chunk iteration via client world chunk API with 9 storage types and 18 outline/fill color settings.
- SwingAnimations (sixtwo.cQ): hand render transform exposed for HeldItemRenderer.
- TargetEsp (sixtwo.dz): 4 particle rendering styles (Circle, Soul, Ghosts, Crystals) with hurt-flash tracking and bloom pass.
- Tracers (sixtwo.du): line rendering utilizes RenderLayers.lines() with exact view vector origin offset and body anchor heights.
- Trails (sixtwo.cU): sample history retention, camera frustum culling, and fading ribbon quad strip.
- Trajectories (sixtwo.cP): authentic first-person held item trajectory simulation with drag, gravity, multishot spread, and collision raycasts.
- TrapEsp (sixtwo.cW): pre-motion tick clutter scanning, cluster merging into TrackedCluster with centroid accumulator.
- ViewModel (sixtwo.dC): MatrixStack operations transformHand and transformArm applying translation, rotation, and scale matching native VM handler execution order.
- XRay (sixtwo.dk): disables chunk culling while active, triggers reloadChunks() on toggle, provides 19-ore filter predicates.

### Utility
- HotbarRestorer (sixtwo.dO): snapshot hotbar buffer, delay gating, inventory search, and container restoration clicks.
- Interface (sixtwo.fX): emote key listener with F3 debug suppression opening Click GUI, theme style opacity query.
- ItemFrameBlocker (sixtwo.dD): cancel PlayerInteractEntityC2SPacket targeting ItemFrameEntity with weapon tag checks.
- MiddleClickFriend (sixtwo.fU): middle-click crosshair target detection and friend list membership toggle.
- MouseTweaks (sixtwo.dJ): RMB drag deposit, LMB drag combinator, mouse wheel slot-to-slot transfer.
- MultiTask (sixtwo.dT): attackBlock driven on crosshair block during active item use.
- NameProtect (sixtwo.fS): 3-channel text rewrite (own name, friends, server hostname) with styled visitor.
- NoProtocolDisconnect (sixtwo.fQ): cancellation of inbound DisconnectS2CPacket.
- NoSignScreen (sixtwo.dH): screen listener closing SignEditScreen and HangingSignEditScreen immediately.
- NoSwing (sixtwo.eg): client swing animation suppression and outbound HandSwingC2SPacket cancellation.
- ResourcePackBypass (sixtwo.fT): inbound ResourcePackSendS2CPacket interception, address filter, and virtual thread ACK dispatch.
- SelfDestruct (sixtwo.fV): module teardown, chat wipe, memory string cleanup, and self-disable.
- SkinProtect (sixtwo.fN): protectSkin transformer evaluating own/other player protection rules.
- SlotLock (sixtwo.dN): drop key suppression and packet drop cancellation for locked hotbar slots.
- Spammer (sixtwo.dE): tick loop, disconnect/leave gates, random/sequential message selection, anti-spam suffix decoration, and split message transmission.
- Transactions (sixtwo.fW): passive observation of KeepAliveS2CPacket and CommonPingS2CPacket, screen handler syncId tracking, and transaction counter.

### World
- AirAnchor (sixtwo.eU): fabricated packet dispatch replaced by client.interactionManager.interactBlock per Vanilla 1.21.11 pipeline; native packet assembly via unexported sequences is sandboxed.
- AnchorMacro (sixtwo.eX): 16 settings and 3-step state machine (PLACE_ANCHOR -> CHARGE -> DETONATE) with Safe Anchor checks ported 1:1.
- AntiGhost (sixtwo.en): block break tracking via reflection for currentBreakingPos; native aaj/atp hooks reproduced with identical packet structure and gating.
- AutoDrain (sixtwo.fw): fluid still check, cobweb below check, 6-face bounding box projection, raycast, bucket slot auto-switch; fg.aIW() TargetLock token relaxation evaluated via module existence.
- AutoDripstone (sixtwo.fd): trapdoor player search, Pointed Dripstone placement, secondary trapdoor use; module arbitration registry qN.dcC/dcB omitted as native-only in grim-cs runtime.
- AutoLeverReplace (sixtwo.dK): 2-radius lever search, raycast gating with Ignore Walls, rotation submission, attackBlock destruction; qL.dbI custom attack request mapped to rebuild RotationManager + interactionManager attackBlock.
- AutoMlg (sixtwo.fM): fall-damage gate on Threshold, hurtByWater LivingEntity safety check, ground scan down to 16 blocks; fall-damage estimation arithmetic inside j2cc VM ported via standard vanilla fall distance and ground scan.
- AutoTrap (sixtwo.eJ): 7 settings/groups, ring and roof candidate generation with double-place offsets, nearest-target sorting, per-tick budget placement; eJ::azo comparator score and eL native target filter mapped to distance-to-target scoring and player targeting.
- AutoWeb (sixtwo.eK): 7 settings, nearest target search within 4.5 blocks, velocity extrapolation by Prediction Ticks, candidate placement across feet/head/surround/upper-surround; eL candidate pipeline and rotation submission mapped to RotationManager and support face checks.
- BlockPiercer (sixtwo.dP): crosshair entity filter, raycasting past target entity to hit solid block behind within block reach; VM dispatch for aoR/aoS/aoT mapped to Vanilla RaycastContext.
- CartAssist (sixtwo.fb): rail hold trigger, 4-phase state machine (Place Rail -> Place Minecart -> Place Protect -> Return To); VM-internal plan records fb$sM/fb$sN ported as Java state machine.
- CartRefill (sixtwo.fc): delay timer gate, hover screen check, missing TNT minecart scan, slot randomization, SWAP inventory clicks; encrypted suffix literal XcqMh and shared fa buffer omitted.
- FastPlace (sixtwo.dZ): 8 settings, itemUseCooldown set via cached reflection on field_1752 when use key held and gates pass.
- GhostHand (sixtwo.ec): camera look vector ray-march 0.25 to 4.5 blocks testing hasBlockEntity() and Inventory, deduplication set, BlockHitResult with Direction.UP; native VM handler arz bytecode ported via ray-marching.
- LeverReplace (sixtwo.dF): lever/button target scan, allowed items check in legit mode, instant mode useKey press, slot cache and restoration, rotation submit; native builder oT mapped to interactionManager.interactBlock.
- NoBreakDelay (sixtwo.ea): blockBreakingCooldown set to destroy_delay via cached reflection on field_3716.
- NoEntityClip (sixtwo.dL): ItemTags.PICKAXES gating, raycasting past targeted EntityHitResult with ShapeType.OUTLINE, rotation submit, attackBlock breaking through entity hitbox.
- Nuker (sixtwo.dI): 12 settings, alM mining engine with delay gate, alK face refresh, alJ target scanner, fastest mode packet sweep, faster mode WorldRenderEvent overlay; native rotation option ou mapped to RotationManager priority.


### GUI port (av/bl/c framework, 2026-10-12)

- screen/ClickGuiScreen (sixtwo.c): status updated 2026-10-13 - the
  runtime-decompiled win/gui-src/sixtwo_4.java recovers the full CONSTRUCTOR
  (exact widget inventory: 5 ap popups z 0-4 with the WpzHJ/iKApR title+subtitle
  style split, panel->popup bindings pXzKY->ItmaE / ReKgb->EknuQ / TPXYP->cJonW
  / OPcaS->uFsRc, 4 cJ toggles, cC slider 1.0-10.0 step 1 dec 2, cL
  .Xk(0.5,1.0).Xl(0.5,0.0), search Q with lf.blMVg=IMPORT glyph, ld.all(6.0f)
  padding, muted-text mG3 = biq().cob(0.3f), manager callback aV). The behavior
  methods (x/s/m/o/p/t/v/q/w/u/r/y/E) remain native-dispatched even in the
  runtime dump, and the popup titles/subtitles + toggle labels are encrypted
  literals inside those native bodies (0 of c's ~135 N/Q sites captured - the
  ClickGUI was never opened during the hooked run). Panel geometry and design
  viewport remain approximated (540x300).
- gui/ui/Popup (sixtwo.ap): status updated 2026-10-13 - the runtime decompile
  (win/gui-src/sixtwo_5.java) recovers the field set (pdPyE children list,
  mjUwZ close callback, IwVym/DfYWQ/hVUFA flags, LnWsJ drag state), the
  constructor chain (default size (0,0,90.0f); 4-arg ctor sets x/y/w/h and
  FHbTC=true; default padding/4th arg 2.0f) and the full fluent-builder API
  (pW/pX/pY/qb/qa/qk/ql/qm/qn/qh/qg/qf/qd title variants, pV(az)/pU(cB)
  children, qp(bool), qr(float), qo(Runnable), sP(int) z-order). Behavior
  bodies (oa/od/oe/bV/dl/dm/dk/dB/eK/fC/pT/pS and the qs/qt/qw/qx/qy/qz/qu/qv
  synthetics) remain native-dispatched.
- gui/ui/GuiDraw: rounded-corner fills and strokes are approximated with
  layered quads; the original hardware rounded-rect shader path is not
  reproducible in our renderer.
- gui/ui/Theme: Liquid Glass and Blur background styles (fX styles idx 0/1) are
  rendered as translucent panels - backdrop blur/glass refraction is not
  reproducible; style opacities (0.2 / 0.75 / 0.85) are preserved.
- gui/ui/IconGlyph (sixtwo.lf): the glyph ENUM is now recovered 1:1 (2026-10-13)
  - 67 constants with semantic names and codepoints 59905-59971 - obtained by
  running the original lf class against its native decryptor (DES pool in
  lf.bXW; procedure in win/tmp/GlyphDump.java). Rendering diverges: the icon
  font itself is packed inside the payload DLL (no font asset in the payload
  jar), so call sites keep text stand-ins ("x" for the close CROSS glyph).
- gui/anim/Easing: rj curves recovered exactly from the runtime decompile
  (win/gui-src/sixtwo_24.java): AYqck = dgk(1.70158f) ease-in-back,
  XzDkv = dgl(1.70158f) ease-out-back, MBpuQ = ease-out cubic, Xmkbr linear.
  No approximation remains for the curves the GUI uses.
- gui/ui/AnimatedScreen (sixtwo.av): the keybind re-press open trigger av.si()
  is not implemented; opening happens via the Interface module open path only.
- gui/ui/ModuleWidgetFactory: color settings render as an RGBA swatch plus
  four R/G/B/A sliders; the original color-picker widget control flow is
  native-blocked.

### Module hook completion (2026-10-13)

The last six partial modules gained their engine hooks via new mixins
(PushOutOfBlocksMixin, EntityPushMixin, InteractionRangeMixin,
PlayerListEntryMixin, ItemRendererMixin; all in opengrim.mixins.json).

- No Push (sixtwo.es): aup(hd)/auq(hq) bodies are native; the rebuild cancels
  the vanilla engine paths Entity#pushOutOfBlocks and Entity#pushAwayFrom
  through cancellable events, preserving the recovered riptide exemption. The
  previous velocity-packet cancel heuristic was removed (it also cancelled
  ordinary knockback, which the original's push handlers do not).
- Reach (sixtwo.fK): the crosshair-target scan and attack-range checks read
  PlayerEntity#getBlockInteractionRange/getEntityInteractionRange attributes;
  InteractionRangeMixin publishes them and Reach applies its sliders while
  enabled (off state leaves vanilla values untouched, matching fK "Runtime
  model"). Server-side validation still applies in multiplayer, as original.
- Cape (sixtwo.ee): qG.dam native fetch rebuilt as CapeTextureManager
  (background download of the resolved preset/custom URL to opengrim:cape) +
  SkinTexturesResolveEvent replacing the cape asset; Hide Wings nulls the
  elytra asset. Divergence: texture load failures keep the previous cape and
  retry on a 250 ms cooldown instead of the original's error surface.
- Hand Chams (sixtwo.de): the per-effect shader passes (ki.bPi Online branch,
  kj glass/water/chrome/liquid-metal facades) are not reproducible; the rebuild
  maps each effect to a uniform color/alpha multiplier on the first-person held
  item's vertex consumer (ItemRendererMixin TintedVertexConsumer). The arm
  (empty-hand) render is not tinted - the original tints both item and arm.
  Glass translucency is approximated at alpha 0.55, water 0.8.
- Auto Clicker (sixtwo.fn): inventory clicking now uses the hovered
  HandledScreen slot (PICKUP via interactionManager.clickSlot) matching the
  recovered HandledScreen/Slot pool tokens; the "Click Pattern" ring cadence
  (diT/diS/diU) remains native-blocked and the ring buffers are kept but idle.
- Double Tap (sixtwo.eM): structure verified against the true eM decompile
  (payload-named tree, recovered case-safely): boolean XOnBS phase, mT.cpz()
  timer, aAY(hw) HIGH-priority and aAZ(gH) listeners. Behavior bodies
  stay native-blocked; the mace/wind-charge aerial combo heuristic is
  designer discretion per the spec note.

### ClickGUI audit wave (2026-10-17)

Re-verification of the "GUI port (av/bl/c framework, 2026-10-12)" bullets above
against the recovered material (report:
`analysis/port/reports/audit-2026-10-17/clickgui.md`):

- **Corrected:** `bl` is NOT a module-settings window - it is the Click GUI
  window itself. `bl.Ep` (analysis/gui-src/sixtwo_2.java:869-894) gives the
  window 465x305.5, sidebar 100, header 7/28, content at +42, radius 5, and the
  six reference frames (analysis/artifacts/gui-reference/page-*.png) confirm it
  exactly at 1.5 image px per design unit (plus the sidebar tab strip 80x18 at
  x 7.5 / y 60 / step 23 / +15 section gap, and the 175x28 card grid with 5.0
  gaps). The previous "5 category panels of 100 units, viewport 540x300"
  approximation is superseded: `ClickGuiScreen` now renders the `bl` window.
- **Corrected:** `Easing` OPEN/CLOSE were swapped. `bl.m` uses `rj.XzDkv`
  (ease-out-back) while opening and `rj.AYqck` (ease-in-back) while closing.
- **Corrected:** `GuiTheme` carried an invented "Liquid Glass" palette
  (per-category accents, 124px panels, 0x5A05060A backdrop). The original theme
  is ig.java:238 `PtFoz` (text/accentStrong WHITE, background 12,12,12, panel
  24,24,27, accent mG.yHyOB 151,71,255) with fX opacities 0.2/0.75/0.85, and the
  frames measure window 11,11,13 / card 21,21,25 / accent 151,71,255 - GuiTheme
  now carries those values (HUD and wheel consumers inherit them).
- **New (resolved limitation):** the icon/text font stack is NOT native-blocked.
  The bootstrap payload ships the original MSDF sheets
  (analysis/decompiled/bootstrap/offline/fonts/{regular,medium,semibold,bold,
  icons-4.4}.{atlas,metadata}); the `.atlas` files are msdfgen layout JSON and
  the `.metadata` files are the sheets. `gui/ui/MsdfFont.java` renders them
  (baked alpha conversion shipped in assets/opengrim/fonts), so GUI text and
  the lf icons (59905-59971) are now 1:1 glyph-accurate. The earlier claim that
  "call sites keep text stand-ins" is obsolete.
- **Still open:** `c`'s ~135 DES-encrypted literals (popup titles/subtitles,
  toggle labels) — static recovery conclusively ruled out (no `sixtwo.c` dump
  record, native `<clinit>` stub, no key algebra reproduces the 20 known keys);
  a hooked run with the settings screen open remains the only path; backdrop
  blur / liquid-glass refraction remains unreproducible; the `d` "Swing
  Anchor/Move/Rotate X/Y/Z" panels and the `c` search popup are not wired into
  the window; `bl`'s tween duration is a DES literal in `av` (200 ms retained).
- **High-probability guesses (labelled):** header subtitle = last hovered
  module's description (all six frames show Mace Swap's description), Friends
  subtitle "Total friends N", `UID: n` = 16-bit UUID hash, the sliding accent
  pill (`cL`), card hover lift, and the card-surface styling of the setting rows
  (cJ/cC/cD draw bodies are native).

### Wave 4 — 162-module audit, waves 2–3 (batches 6–29), 2026-10-17

- **fs (Knockback Displacement) — mechanism divergence (labeled in javadoc):**
  the rebuild rewrites the inbound `EntityVelocityUpdateS2CPacket` (0.35
  horizontal magnitude [G]) instead of the original's outbound movement-packet
  rewrite; the original has no inbound velocity listener (spec "Unrecovered" 3).
  All displacement math stays [U]/[N] (VM).
- **er (Speed) — semantics correction:** the original's velocity modes are an
  exclusive radio (`ct`+`cu` evidence), not independent toggles; the old
  javadoc/PARITY claim is superseded.
- **de (Hand Chams):** the tint approximation is now live (it was inert — `active`
  was never set); mode Zero leaves the item untinted (labeled approximation).
- **ee (Cape):** "Hide Wings" no longer nulls the elytra asset (contradicted by
  `qC.java:403-405`); it gates the `qC` wings renderer, which is not part of the
  rebuild — the toggle currently has no visible effect.
- **dQ (Hit Sounds):** Custom mode cancels the matched original sound (1:1 order)
  but plays nothing — intentionally feature-incomplete ([U]).
- **dM (Auto Market):** shell over the recovered dispatcher — the market engine
  (`nO`/`nR`/`nP`/`nM`/`nB..nE`) is native; buy/sell 0% (row status `partial`).
- **Repo-wide — category partition:** the original's `gh.*` category constants do
  not partition the repo's five categories (`qBzlZ` spans combat/movement/render/
  utility/world; only `KfAlY`/`nOCvV`/`xgeEn` are near-consistent). The repo's
  semantic assignment is kept; GUI grouping is a structural divergence.
- **Spec corrections folded (2026-10-17):** `casesafe/handlers/dz.md` (all DES
  ints recovered — fade/caps/bounds/thresholds/seeds; textures `glow`/`ghosts`;
  `ajA` = `ClientWorld.disconnect`, not end-of-tick); `handlers/dv.md` (`aiJ`
  cancel polarity inverted — cancel iff Hide Original ∧ ¬batch ∧ `bab()`;
  `CRjla` = `" deg"`); `handlers/fS.md` (host split `':'`; separator set = 2
  walk-back + 7 walk-forward + trailing `.` trim; regex prefix `"(?:"`);
  `handlers/de.md` ("Outline" not "Online"; Color/Second Color = theme accent);
  `handlers/dh.md` (Dawn = 23000; `doz()` = `>= 0`/`>= 1`); `handlers/cZ.md`
  ("Behind Walls" default false); `casesafe/handlers/dQ_.md` (`LOyUV` =
  Synchronized index 0, `wWQPU` = Custom index 1); `modules/fX.md` (pure Java);
  `modules/dn.md` (settings superseded by handlers/dn.md); `modules/ff.md`+`handlers/ff.md`
  (`of.ahXwo` recovered — the enum comparators are visible in the decompile; interval
  redraws are conditional; six `@hG` listeners, not zero; settings list stale);
  `handlers/dq.md`+`modules/dq.md` (PRIMARY path must be the casesafe `dq.java` — the
  plain path declares `class dQ`; `jc.FFgfM` recovered — 17 colored-shulker items;
  `pvnDE` is only ever written true, so the gate never blocks after enable; `kH.bTJ`'s
  4th arg is a second draw-pass gate, not a depth test).
- **Per-module approximations** (cU/fr/dp, dw/fw/db, dl/dG, do/ds, dI, cX, …):
  itemized in each module's section of `analysis/port/reports/audit-2026-10-17/
  batch-06.md` … `batch-29.md` and labeled in the impl javadocs.
- **cR (Particles) — hardening divergence:** `activeParticles` is a
  `CopyOnWriteArrayList`; the original carries the same latent netty-thread race
  on a plain `ArrayList` (the receive path only adds fresh instances, so spawn
  timing is preserved).
- **dl (Outlines):** `isOutliningActive` stays false — the original sets it only
  inside the outline-framebuffer batch (`ki.bPi` → `ki.bPk` → `kn.bQo`), which
  has no consumer in the rebuild; setting it around `onTick` would diverge.

### Wave 5 — GUI category/page parity (2026-10-21)

Supersedes the 2026-10-17 "Repo-wide — category partition" note (the repo's
semantic assignment is no longer kept) and the ClickGUI divergence that called
the page grouping structural.

- **Original category recovered for all 162 modules** from the `gh` constant in
  each constructor: `gh.xwjCw`=Combat, `gh.xgeEn`=Movement, `gh.qBzlZ`=Player,
  `gh.nOCvV`=Visuals, `gh.KfAlY`=Client. Auto Trap (`eJ`) and Auto Web (`eK`)
  inherit Combat from the block base `sixtwo.eL` (`eL.<init>` passes
  `gh.xwjCw`). Table: `analysis/artifacts/gui-reference/category-map.tsv`.
- **Exact original membership:** Combat 57, Movement 23, Player 34, Visuals 37,
  Client 11 (43 modules were on the wrong page; 98 constructor arguments change
  textually with the enum rename). `ModuleCategory` is now
  `COMBAT, MOVEMENT, PLAYER, VISUALS, CLIENT` in the original `gh` order, and
  `ClickGuiScreen.Page` maps Player/Visuals/Client directly (previously
  WORLD/RENDER/UTILITY).
- **Ordering:** the original page panel (`aC.<init>`, `aC.dY`) walks the module
  map (`rD.dlJ().aZz().values()`), and `page-client.png`/`page-movement.png`/
  `page-friends.png` show that order is obfuscated class id (registry.tsv row
  order). `Modules.registerAll()` now registers in that order; no renderer or
  card-grid geometry was changed.
- **Verified:** first screens are exact set + exact order — Player 16/16,
  Visuals 16/16, Client 11/11. No residual order difference on those pages.
  Movement's frame is empty and Hud has no populated frame, so those are
  proven by constructors only. `image.png` (repo root) is a **port**
  screenshot, not the original Combat page (its first 16 are the port's old
  registration order); it is explicitly not used as parity evidence.
- **Build:** `compileJava` on JDK 21 → BUILD SUCCESSFUL.

### Wave 6 — recovered `shape` shader pipeline (2026-10-21, vertical slice)

- **No divergence in the visible SDF.** `gui_shape.vsh/.fsh` reproduce
  `shape.glsl`'s `shapeSDF` (rectangle + squircle) and `maskAlpha`
  (fill/outline) verbatim; the solid path uses the original
  smoothness 0.75 / innerSmoothness 0.75 / thickness 1.0 values.
- **Mechanism divergence (documented):** the original binds per-primitive
  scalar uniforms with raw GL (`sixtwo.jN.bJq/bJr/bJt`, `ke.bOi`). 1.21.11's
  deferred GUI renderer cannot bind per-draw scalar uniforms, so the same
  values are carried in the vertex attributes (`UV0` size, `UV1/UV2` radius in
  `ke.bOi` order, `Normal` smoothness/inner/thickness, `Position.z`
  cornerSmoothness). This changes transport only, not the math or values.
- **Parameterization gap (next):** `GuiDraw`'s single-radius API maps to
  `SHAPE_RECTANGLE` (`kd.AhlXN` mode) with the given radius. The original
  `kd.sQVlR` calls pass a scalar cornerSmoothness (5.0 for the window/cards)
  plus a per-corner `ld` multiplier (e.g. `ld.all(11)` for the window,
  `ld.all(6)` for popups) and run the SHAPE_SQUIRCLE branch
  (`ke.bOk`: radius = ld * cornerSmoothness / 2). The shader already supports
  it; the GuiDraw surface does not expose the pair yet.
- **Not wired yet:** fillType gradient (1) / texture (2), loading stripes,
  dithering (gradient-only in shape.glsl), MSDF text, blur, liquid glass.
  DrawContext fallbacks remain only when the pipeline cannot be created.
- **Verification:** `glslangValidator` passes for fill/outline/squircle and
  links both stage pairs; `runClient` logs the pipelines ready after resource
  reload with no shader errors.

### Wave 7 — native settings popup recovered (2026-10-21)

- **No divergence in the recovered geometry.** `SettingsWindow` now uses the
  recovered `bd` values: width 127 (`BcpIo`), height
  `min(200, 18 + Σ oH·dn + 51)` (`bd.dn`), radius 7, title at
  `(x+7+2t, y+8+2t)` with size `7+2t` plus the `(x+9,y+10)` pass, close glyph
  8×8/font 6 at `(x+w-17.5, y+9.5)` (`bd.BO`), row stack at `y+18`, row
  heights 18/28/122 from the `ak.dn()` handlers.
- **Removed reconstruction:** the invented subtitle, separator dot and
  20×20 close-button chrome are gone — the original header is the module-name
  glyph array drawn twice (sliding pass + static pass) and a bare CROSS glyph.
- **Reserved space (documented):** the original child list is
  `v` (18) + `bk` (18) + settings; the port's visible row set is the module
  toggle + settings, and the `bk` 18 units are kept in the height formula so
  the panel height stays exact.
- **Theme/colour gap:** the fill is `themeA.cob(…).coc(themeB,t)` in the
  original (`ii.bjb/bjd/bje`); the `ig` theme key mapping is not recoverable
  from the current evidence, so the port uses `Theme.panelColor()`/`text()`.
  Same for the title family (`lE.WxpHL`, one of five `lj`) — port uses the
  SEMIBOLD sheet.
- **Not drawn/modelled:** the `ah` scrollbar (its paint body is not in the
  recovered decompile); wheel scrolling remains. Per-row open animation
  (`oH·dn`) and the `ld.all(7)`/`ld.all(3t+4)` shadow/fill stroke widths are
  not modelled (GuiDraw stroke surface is renderer-owned).
- **Build:** JDK 21 `compileJava` → BUILD SUCCESSFUL.

### Wave 7 — recovered MSDF text pipeline (2026-10-21, vertical slice)

- **No divergence in the glyph math.** `gui_msdf.vsh/.fsh` reproduce
  `msdf.glsl`'s `median(rgb)` distance, `range`/`pixels` derivative scaling,
  `smoothstep(-smoothness, smoothness, ...)`, outline mix and fadeout
  normalization. `MsdfFont` loads the original msdfgen sheets (including the
  MTSDF RGB channels and the icons sheet) instead of the baked-alpha sheet.
- **Mechanism divergence (documented):** per-text uniforms are packed into
  vertex attributes (`UV1`, `UV2`, `Normal`, `Position.z`) because the 1.21.11
  deferred GUI renderer has no per-draw scalar uniform hook. `maxWidth` /
  `textPosX` are pre-normalized per vertex; values and fade curve are
  unchanged. Quantization: range 1/255 of 12, thickness 1/255 of 2,
  smoothness/outline 1/255 of 4, outline colour 8 bit/channel, fade 1/255.
- **Wired:** plain text (regular/medium/semibold/bold/icons) through
  `opengrim:pipeline/gui_msdf`. Baked-alpha fallback remains for shader/sheet
  failure.
- **Precompiled but not wired:** `gui_msdf_outline`, `gui_msdf_fadeout`,
  `gui_msdf_outline_fadeout`. The state/shader already carry outline colour /
  thickness and fade start/end; call sites are the next step.
- **Visual gaps (not text-shader gaps):** header separator is still the old
  `fillCircle` rasterizer; background is flat (no blur/glass); logo tile asset
  is dark/transparent vs the reference light tile; reference window width is
  ~569 design units at 1.5 image px/unit while the port keeps 465, leaving the
  reference with empty space right of the card columns. Page/category mapping
  untouched.

### Wave 8 — `bd` module row + scrollbar/theme (2026-10-21)

- **`bk` row geometry is exact:** 18 units, inherited `ak.oF` label at
  `(x+9, centred)`, max width `127-21=106`, EDIT icon (`lf.cuxpa`,
  `IconGlyph.EDIT`) at `(x+w-16, y+2.5)` size 7, hover tween brightening the
  label. Row background: none (the original draws only text+icon).
- **Divergence [N]:** `bk`'s label is a static glyph array whose length and
  codepoints are decrypted by its native `Eo`/`Em` bootstrap; the port
  skeleton substitutes the module name. `bk.dk` opens a `bh` 110×80 popup (two toggles) — not ported.
- **No scrollbar in the original:** `ah.bV` has no `lC` calls (dead thumb
  math only); `bd.bV` uses `ah` as a scroll model. The port draws none, so
  the previous "scrollbar not drawn" gap is closed as *not a divergence*.
- **Panel fill [resolved]:** `background.lerp(panel, 0.3)` (`bjd`→`bje`,
  constant 0.3 at `0x18f139585`), faded by the open tween — replaces the
  previous unmapped `Theme.panelColor()` guess.
- **Remaining [N]:** `v` toggle label literal, title family `lE.WxpHL`,
  per-row open animation, `ld.all(7)`/`ld.all(3t+4)` stroke widths
  (GuiDraw surface), shadow pipeline.
- **Build:** JDK 21 `compileJava` → BUILD SUCCESSFUL.

### Wave 8 — arc, backdrop blur, liquid glass (2026-10-21)

- **Correction:** the reference window is ~464 design units wide
  (`page-movement.png` x≈216..912 at 1.5 px/unit), not ~569. The area to its
  right is outside the window. No window/grid change was made.
- **Arc:** `gui_arc.vsh/fsh` reproduce `arc.glsl`; `GuiDraw.fillCircle` uses it
  for the 2.75 header dot and slider knobs. The original dot path was the
  shape-SDF `lC.cdc`/`cdh` circle, so this is an implementation substitution
  with the same visible smooth disc (the task requested the arc pipeline).
- **Blur:** the two-pass separable `blur.glsl` and the exact Gaussian weights
  (`σ = radius/2`) are used. The original blurs the post-GUI framebuffer; the
  deferred rebuild captures during GUI extraction, so the HUD is not in the
  backdrop and the world is current-frame but not yet GUI-composited. Window
  mask + tint mix reproduce the Blur branch; `ii.bjm()` (blur percent) is not
  carried by the port Theme, so 75 is used.
- **Glass:** `liquid_glass.glsl`'s SDF/bevel/refraction/light/dispersion math
  is verbatim. Uniform transport changed (size/radius/cornerSmoothness/tint/
  opacity in attributes, config as consts). Divergences: depth 5 / lightSize 2
  are tuned values (the raw id 100/1.5 values break the corner normal);
  refraction 100, lightIntensity 80, lightAngle −45, dispersion 0 are the
  recovered/default scale; window alpha is 1.0 instead of the style's 0.2 so
  the blurred backdrop does not show the sharp world through it.
- **Not wired:** shape gradient/texture fill types, loading stripes, popup
  blur/glass surfaces, shadow/annular/checker/bezier.
- **Verified:** pipelines register/precompile at startup; in-world F2 captures
  show the blurred backdrop and the glass bevel/rim. No draw exceptions.

### Wave 9 — native settings labels decoded (2026-10-21)

- **No more label substitution.** `v`/`cJ` = **"Enabled"**, `bk` = **"Keybind"**
  (native glyph arrays decoded through `bd.Co`/`bk.Em` with the class-key
  derivation; dump = `analysis/artifacts/gui-native/labels-decrypt.txt`).
  The previous `[N]` module-name substitution divergence is closed.
- **Still [N]:** `bk.dk`'s `bh` keybind popup (110×80, two toggles, native
  `bV`/`dk`) — precise spec recorded, not implemented.
- **Build:** JDK 21 `compileJava` → BUILD SUCCESSFUL.

### Wave 9 — selectable background styles + recovered glass values (2026-10-21)

- **Selector:** `Interface.style` now drives `Theme.setBackgroundStyle` every
  tick, so `blur`/`liquid_glass`/`solid` are user-selectable and a saved config
  applies after load. Default remains Blur.
- **Captures:** `analysis/artifacts/gui-reference/port/`
  `blur-default-2026-10-21.png`, `liquid-glass-2026-10-21.png`,
  `solid-2026-10-21.png`. Geometry matches the corrected reference measurement
  (465×305.5 window; cards fill the 355-unit content width).
- **Glass values:** previous `depth 5`/`lightSize 2` tunings are replaced by the
  recovered `ii`/`id`/`jP` values: refraction 100, depth 100, splay 100,
  dispersion 0, lightIntensity 80, lightAngle −45, lightSize 1.5,
  tint = glassFill (transparent), light = glassBorder (white). The builder →
  uniform mapping is in PROGRESS.md; it is inferred from call order/field order
  because `jV`'s uniform-name literals remain DES-encrypted. `depth`/`splay` are
  used raw (the shader scales refraction/splay by 100 internally); `lightSize`
  uses the base borderWidth because the caller's `f7` factor is not exposed.
- **Remaining:** shadow pipeline/rounded shadow, gradient fills, popup blur/glass,
  texture/loading fill types, remaining primitives.

### Wave 10 — AutoMLG/AutoDrain bucket placement (2026-10-22)

- **Auto MLG (`fM`):** the original placement executor is native
  (`aVp`/`aVq` decrypt a VM slice, `analysis/specs/casesafe/handlers/fM_.md:10-18,68-78`),
  so the port's `interactBlock`-with-a-bucket was a stack-required guess that
  cannot work: `BucketItem` has no `useOnBlock` override and `Item.useOnBlock`
  returns `PASS` (1.21.11 `Item.java:202-204`), so neither side ever calls
  `BucketItem.use`/`placeFluid`. The port now branches by the held stack:
  bucket → `interactItem`, block items → `interactBlock`. The computed
  `Rotation` is applied to the player's real yaw/pitch around the
  `interactItem` call and restored afterwards, because `BucketItem.raycast`
  reads `getRotationVector()` (1.21.11 `Item.java:371-374`) and the server
  re-raycasts with the angles carried by `PlayerInteractItemC2SPacket`
  (`ServerPlayNetworkHandler.onPlayerInteractItem`). This mirrors the
  original's set/restore around an item use (`mk.java:399-429`) and the
  recovered "aim at the hit point before placement" wiring
  (`analysis/specs/casesafe/handlers/ei.md:116`). The hand is part of the
  original placement record (`ei.md:75-76`); the port uses main hand →
  offhand → hotbar (preference inferred).
- **Auto MLG (`fM`) trigger:** replaced the elapsed-`fallDistance` gate with
  the spec's predicted damage (`fallDistance + height remaining >= Threshold`,
  `fM_.md:69-72`); creative now skips that gate (`fM_.md:72`) instead of
  disabling the module; the "falling" state excludes ground, fluids,
  climbables and non-downward velocity; the ground column is scanned from the
  feet Y (the old `pos + velocity` start could begin below the surface on fast
  falls). `Anchor Player` no longer zeroes horizontal velocity: the spec
  anchors the target column to the player (`fM_.md:73-75`), and the old call
  was a port guess that was never restored.
- **Auto Drain (`fw`):** same bucket correction (`interactItem` with the
  computed aim applied/restored around the call, swing and `NrVzh` add gated
  on client `Success`). Its tick handler is native (`aQY`/`aQX`/`aRa`,
  `analysis/specs/handlers/fw.md:62-69`), so the interaction call itself
  remains a reconstructed choice; the bucket path is vanilla API, not a guess.

### Wave 11 — cD/y keybind rows (2026-10-24)

- **Divergence closed:** keybind settings were rendered as the generic
  `IntSetting` 28-unit slider (`activation_key -999` in the settings popup).
  The original stores keybinds in `cD` (`taKVz` int, `VP()`/`VO(int)`,
  `VN() -> jb.byM(code)`, `-999` unbound;
  `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/cD_.java:26,81-115`)
  and renders them with the 18-unit `y` row (`y.dn()` handler `0x1907c61b0`,
  `analysis/artifacts/gui-native/bd-settings-spec.md` row-height table).
- **Port:** `settings/KeybindSetting.java` reproduces the `cD` value surface;
  `gui/ui/widgets/KeybindWidget.java` is the `y` row (label + `cD.VN()` value,
  armed `...` state, next keyboard key or mouse button binds, Escape cancels,
  right click clears). `ModuleWidgetFactory` binds it at `TOGGLE_H` (18), not
  `SLIDER_H` (28). All 27 key-code `IntSetting` declarations in the module tree
  were converted; their defaults (including `AimAssist`/`TriggerBot`
  `hold_key = 0` and `Interface` `emote_key = 66`) and JSON values are
  unchanged.
- **Input routing:** `ClickGuiScreen` sends mouse presses/keys/chars to an
  armed row before search/cards (`SettingsWindow.isCapturingKeybind()` /
  `captureKeybindMouse()`), and closing/rebuilding the panel cancels the arm.
- **CI:** `.github/workflows/automatic-prerelease.yml` builds on every push to
  `main` (also `workflow_dispatch`), sparse-checks out `src` + `gradle` on JDK
  21, and publishes `build/libs` jars as a GitHub pre-release with an explicit
  automatic-build description.
- **Evidence limits:** the native `y.bV`/`y.dk` bodies are VM-hidden; the row
  geometry, height and value source are recovered, while the exact armed-state
  glyph/string (`...`) follows the port's existing compact-row style.

### Wave 12 — combat-module review (eV/eX/eR, 2026-10-24)

- **Auto Crystal (`eV`) placement:** the port's scan required both the support
  and the block above it to be replaceable, so a solid obsidian/bedrock support
  was always rejected and the module could never place. It now requires
  obsidian/bedrock (`EndCrystalItem.useOnBlock`'s own rule) with a free 1x1x2
  entity space above, inside `getBlockInteractionRange()`, and searches the
  target's feet neighbourhood. Target selection uses
  `AbstractClientPlayerEntity` (the five native predicates are players), skips
  self/friends, and supports main/offhand crystals. The dimension reset matches
  `DcPJe` (`WorldView#getDimension`, eV.java:47). Damage estimation, CPS spoof
  shaping, `MuaJV`/Predict Id, Stop on Kill and Damage Tick remain native and
  unimplemented; the placement range/order is the natural reading, not a
  recovered constant.
- **Anchor Macro (`eX`) trigger:** switching to `UseBlockCallback`
  (`UseBlockEvent`) reproduces the recovered `gO$tm` block-use entry instead of
  polling `useKey`, which could miss a click between ticks. Press mode now
  survives the click release; Hold mode requires the use key. The event's
  `BlockHitResult` is retained for the placement step, and the event is only
  consumed when a respawn anchor is present in the hotbar. `Safe Anchor Hold`
  now actually gates on `Hold Key` (the old code used it as the activation
  key). `When`/`Diagonal` remain unread (they were already flagged in the
  spec).
- **Wind Hop (`eR`) input/aim:** the original is keybind-driven (Activation
  Key, default `-999`), not automatic. Mouse bindings now use
  `glfwGetMouseButton`; the throw aims through the real yaw/pitch around
  `interactItem` because `PlayerInteractItemC2SPacket` carries them, then
  restores the view (same rationale as the AutoMLG fix in Wave 10).
- **Search (no change):** the original opens the dedicated `bc` search overlay
  from the header magnifier/`bl.onKeyPressed` shortcut; `bl.onCharTyped` does
  not auto-focus it. The port's inline field is therefore kept click-to-focus.
- **Build:** `./gradlew build --offline` PASS on JDK 21. No parity re-score:
  the native damage/target/phase bodies remain the open surface.

### Wave 13 — UI/input fixes + parity re-score (2026-10-24)

- **Liquid Glass corner:** `ClickGuiScreen` passed the shape shader's squircle
  exponent (5.0) into `gui_glass`'s `cornerSmoothness`, but `liquid_glass.glsl`
  treats it as a 0..1 smoothing value (`ii2.bjm()`, recovered default 0.0).
  `sdSmoothRoundCorner` produced a square-cornered fill that stepped outside
  the rounded border. The glass call now passes 0.0 and `GuiDraw.glassBackdrop`
  clamps the value to 0..1.
- **Aim Assist (`fH`):** the port submitted a silent RotationManager rotation
  only, so the camera never moved. The original's recovered pool names
  `Entity.setPitch(F)`; the port now sets the real yaw/pitch (and still submits
  the same rotation), and `Hold Key` uses `KeybindSetting.isPressed()`.
  Re-score 50 → 55; native target predicate/prediction path/FOV render remain.
- **Module Keybind popup:** the settings `bk` row now opens a port of `bh`
  (110×80): current module bind (`jb.byM` display), ArrayList visibility and
  Show Keybind toggles (`gg.bai`/`gg.baj`), and click-to-capture bind. Module
  binds can now be changed at runtime; `KeybindManager` updates the vanilla
  KeyBinding in place. This also explains the previously inert row.
- **Search overlay:** the port's inline header field is replaced by a `bc`
  overlay: width `WINDOW_W/2.25`, height `lineHeight*2 + 10`, centered above the
  window, opened by the magnifier and Ctrl+F, with a result list (module names/
  ids/descriptions), arrow/Enter selection and navigation to the module's page.
  Settings search and the original native result-row render are still missing;
  this is the documented divergence.
- **Array list / HUD:** `Module` now carries the `gg.bai`/`gg.baj` flags used by
  the original `ce` array list; `HudOverlay` honors them and can append the bind.
- **Log errors:** the repeated `65539: Invalid key 0` is GLFW
  `GLFW_INVALID_ENUM` from polling the default mouse bind `0` with
  `glfwGetKey`. Every keybind-setting poll now goes through
  `KeybindSetting.isPressed()` (mouse-aware); `chams_liquidmetal` no longer
  declares the unused `backgroundTexture` sampler.
- **CI:** the automatic workflow now keeps a single pre-release: it deletes
  every prior `auto-build*` release/tag before creating the stable `auto-build`
  tag, so only one jar is available at a time.
- **Parity:** re-scored touched modules: `fH` 50→55, `eV` 52→58, `eX` 52→56,
  `eR` 57→62. Aggregate 12,784 + 20 = 12,804 / 16,200 = **79.0%**. These are
  dated confidence-weighting adjustments for the closed surfaces; the native
  bodies remain the residual.

### Wave 14 — HUD/array list, commands, search settings, input (2026-10-24)

- **Array list/HUD:** `HudOverlay` now ports the recovered `ce`/`co.NV`
  layout: a 20-unit watermark panel (`ccU`) plus 13-unit row panels with a
  2-unit gap, split into keybind and name panels when `gg.baj` shows the bind,
  sorted by `nameWidth + keyWidth` (`ce.java:470`). It uses the original MSDF
  sheets (`lE.WTzbi`/`lE.joxgd` → `MsdfFont`) and the themed shape/glass panel
  fill instead of vanilla `drawText`. `gg.bai/baj` visibility flags are wired
  to the module bind popup.
- **Commands:** reflected the original command factories under the Wine
  payload harness, recovering `/vclip <distance>`, `/hclip <distance>`, `/ui`,
  `/reset`, `/marketui`, `/inventory|inv|invsee <player>`,
  `/fakeplayer|fp spawn [name]|remove|setslot <slot> <item> [count]|use <mode>
  [hand]|status`, and `/emote|e <id>`. Implemented the client actions using
  the existing modules/screens; `/marketui` remains unavailable because the
  market editor has no port surface. `/reset` disables modules, clears binds,
  restores display defaults and resets every `Setting` to its construction
  default (`Setting.reset`).
- **Search overlay:** now includes setting results (id match) in addition to
  modules; selecting a setting opens the module settings and scrolls the row
  into view (`SettingsWindow.scrollToSetting`). Native row paint/geometry
  remains approximate.
- **Input:** every unhandled key press is now consumed by `ClickGuiScreen`, so
  `Keyboard.onKey` cannot pass WASD/space to the game's `KeyBinding` while the
  GUI is open. Settings rows route drags only to the row that consumed the
  press, fixing the “all sliders move / top slider uncontrollable” behavior.
- **Aim Assist smoothing:** exponential per-tick approach (speed 1 ≈ 22%/tick,
  speed 20 ≈ 99%/tick) and 3-octave smooth value noise replace the fixed
  linear step and per-tick white noise. Re-score 55 → 58; native target
  predicate/prediction path/FOV render remain.
- **Parity:** aggregate 12,804 + 3 = 12,807 / 16,200 = **79.1%**.
- **Build:** `./gradlew build --offline` PASS on JDK 21.

## Avoidable 1:1 gaps — module audit (2026-10-21)

Scope: modules whose original class is **fully Java** (no behavior natives in the
class) but the port used a labeled `[G]`/stand-in/approximation for data that is
recoverable from the repo. These are separate from the native/DES gaps in the
Divergences log. This is a work queue; parity rows are unchanged until a fix lands.

| Module | Class | Avoidable gap | Recoverable evidence | Priority |
|---|---|---|---|---|
| Trap ESP | cW | `[G]` icon glyph (U+EA26), font stack, rounded corners | `icons-4.4` glyph font + `IconGlyph`; `MsdfFont`; `GuiDraw` shape pipeline | P1 |
| Hit Particles | dc | `[G]` flat billboard and 2× glow substitute for the themed sprites + glow pass | `raster-assets.bin` keys `star`, `snowflake`, `ghosts`, `heart`, `diamond`, `thunder`, `moon`, `cloud`; `bloom_*` shaders | P1 |
| Swing Animations | cQ | `[G]` per-tick stack comparison instead of the original held-item-change trigger; `YH` filter is Java | `cQ.java` `YF`/`YH`; a held-item-change mixin/event restores the trigger (`YG` profile remains native) | P2 |
| Chams | dv | Vanilla boxes instead of the four `chams_*` passes | `chams_water/glass/chrome/liquidmetal` shaders imported; render pass still native-queued | P2 |
| Jump Circle | db | `[G]` procedural circles instead of the recovered textures | `raster-assets.bin` `circle`/`glow`; duration `yqWBV` remains encrypted | P2 |
| Circle ESP | dw | `[G]` procedural ring and light values | `raster-assets.bin` `circle`/`glow`; `kz.bSr` constants remain native/encrypted | P2 |
| Fake Lag | ff | `[S]` single-value sliders for the two-handle ranges; pre-attack event used for attack-post | add a range setting and a `hw$tw` attack-post event; `kx` indicator remains native | P2 |
| Nametags | dt | `[S]` vanilla text/rounded fill instead of the MSDF/shape path | `MsdfFont` + shape pipeline; `ji` divisors/format remain encrypted | P3 |
| Storage ESP | dq | `[S]` item-set group instead of the recovered item-list widget; theme colors | item-set widget + `GuiTheme`; `irQyF` throttle remains encrypted | P3 |
| 2D ESP | di | `[U]` profile registry and drawing dispatch not rebuilt | port `pj`/`po` profile registry; large surface | P3 |
| Nuker | dI | `[G]` 50 ms/tick guess and programmatic `cK` block list | widget + event plumbing; `ja.byI` native and the interval literal encrypted | P3 |
| Ambience | dh | `[U]` interval/fade stand-ins and preset times | recover the five preset times/fade constants; multiple unknowns | P3 |

> **Status 2026-10-21:** this queue landed in the working tree; see
> "Re-audit 2026-10-21 — module recovery queue" at the end of this file for the
> per-module re-score and residuals. `di` remains open (plan only).

### Suggested order

1. Trap ESP icon/font/corners (small, visual).
2. Hit Particles sprites + glow (medium, visual).
3. Swing Animations `YF` trigger (small wiring).
4. Chams shader passes (large).
5. Jump Circle / Circle ESP textures.
6. Fake Lag range + event.
7. Nametags / Storage ESP / 2D ESP / Nuker / Ambience.

No code changes are included in this audit entry. Each fix should update the
module row Notes and, only if something remains unrecoverable, append a
Divergences line.

### 2026-10-21 — Jump Circle / Circle ESP sprite fix

`CircleTextures` now loads the recovered `assets/opengrim/textures/circle.png`
(1024x1024) and `circle_glow.png` (1424x1424), extracted from
`analysis/decompiled/bootstrap/offline/assets/raster-assets.bin`. The
procedural ring remains only as a fallback. This closes the sprite half of the
`db` (Jump Circle) and `dw` (Circle ESP) rows; `db`'s `yqWBV` animation duration
and `dw`'s `kz.bSr` segment/alpha/light constants remain unrecovered.

## Re-audit 2026-10-21 — module recovery queue

Scope: the 24 modules changed in the working tree after `e79b194` — the 12
baseline avoidable gaps minus `di` (plan only, not re-scored), plus all 13 new
P1–P3 findings in
`analysis/port/reports/module-divergences/avoidable-audit-2026-10-21.md`.
Method: each module's fix report under `analysis/port/reports/module-fixes/` was
read against the original callsites and the residual `## Remaining gaps` list.
Scores are confidence-weighted, not line counts: 100 = exact behavior, draw path
and constants; minor DES/label/inferred bindings cost 1–5; a missing
sub-surface or native preset table costs 6–15; an inert/major surface costs
more. No new in-game visual claim is made here beyond the 210 s boot/world-load
smoke (no mixin/resource/shader exception; the user is verifying visuals).

| Class | Module | Old | New | Δ | Closed surface (evidence) | Remaining gaps |
|---|---|---:|---:|---:|---|---|
| cW | Trap ESP | 93 | 96 | +3 | medium MSDF text, `LOCATION` icon U+EA26, shape-SDF corners, live theme colours, blurred card | async scan/projection; 0.75 blur smoothness; DES title/label strings |
| dc | Hit Particles | 86 | 93 | +7 | eight recovered sprites + 2× glow pass, exact `jI.bIu` billboard and two-angle advance | `mo` mapping inferred; bloom is screen-space; `ZRQxW=1000`; frustum fallback |
| cQ | Swing Animations | 60 | 66 | +6 | held-item-change event/mixin replaces the per-tick stack comparison | `YG` profile/curve registry native; `in.bkX/bkY` stack-change substitution; `cI` action editor absent |
| dv | Chams | 80 | 93 | +13 | four recovered `kj.bPr..bPu` passes, mask/composite, hide-original, entity and hand paths | `ro.diF` preset tables native; mask alpha follows vanilla pipelines |
| db | Jump Circle | 93 | 96 | +3 | recovered `EffectDraw` textured circle pass with exact quad/UVs | `yqWBV` duration, lightmap values, `jd.bAm` URL check |
| dw | Circle ESP | 94 | 96 | +2 | textured quad + solid `TRIANGLE_STRIP` ring using recovered geometry | `kz.bSr` segment/alpha/light constants; `cF` set API |
| ff | Fake Lag | 90 | 94 | +4 | real two-handle `RangeSetting`/`RangeSliderWidget`; attack-post event mixin | `kx` indicator native; `of.ahXwo` order; `gM` disconnect clear |
| dt | Nametags | 94 | 96 | +2 | medium MSDF layout/draw quirks and shape-SDF rounded fills | armour order; 2.0 shape override; batched item renderer; nameplate hook |
| dq | Storage ESP | 95 | 97 | +2 | real `cK` `ItemListSetting` (nine-item universe, empty allowed) + recovered theme accent defaults | `irQyF` throttle; executor factory; native icon grid |
| dI | Nuker | 94 | 96 | +2 | real `cK` `ItemListSetting`, empty default, from-list predicate | 50 ms quantum; `ja.byI` lava test; event plumbing |
| dh | Ambience | 85 | 86 | +1 | `Fog Range` is the real two-handle `cA` range (64/128) | preset times/fade/particle bounds/billboard/fog consumer remain DES or absent |
| fX | Interface | 85 | 88 | +3 | raw `Keyboard.onKey` event restores action/key/currentScreen/F3 ordering | `aZ` theme editor (53 natives); `Style` not consumed |
| dz | Target ESP | 93 | 96 | +3 | `glow`/`ghosts` textures and corrected `jI.bIu` billboard | `Ignore Walls` inert; Crystals core approximation; DES texture-key plaintexts |
| cR | Particles | 88 | 93 | +5 | eight sprites + glow batch, exact billboard orientation and vertex channels | `mo` mapping; glow key; burst/lifetime/fade DES; `AFTER_ENTITIES` phase |
| dl | Outlines | 76 | 92 | +16 | world mask + `outlines.glsl` composite now render; default selected set corrected to `{PLAYER}` | `ki.bPq`/`kR.MNKWu` binding inferred; `glowThinOutline=1`; `cF` picker is a plain set |
| dp | Logout Spots | 80 | 87 | +7 | exact `ahv` HUD labels/card/medium MSDF and live theme text | `kt` hologram; Position Render Mode; 50 ms quantum; add/clear events |
| dn | Firework Spots | 85 | 93 | +8 | exact HUD card, firework item icon, `rk` fade model | `jYWIl`/`ZOVgw`/`AhEPk` DES; 3.0 blur smoothness |
| da | Sound ESP | 85 | 92 | +7 | exact HUD card, medium MSDF, `rk` fade model | `xwXDE`; sound-name regex; 7.0 blur smoothness |
| dg | Pearl Prediction | 78 | 92 | +14 | `mh`/`me` simulator, both termination kinds, HUD card + pearl icon | `cky` max steps, `NkcQX` format, fade constants DES |
| do | Arrows | 92 | 94 | +2 | recovered `arrow` raster drawn as a textured square | `eLTLf` identity inferred; 400 ms fade; GUI offsets; `cF` API |
| cZ | Soul Effects | 89 | 92 | +3 | glow sprite pass and full billboard UVs | `kl` bloom composite; Behind Walls pipelines; four DES fades; removal event |
| de | Hand Chams | 80 | 92 | +12 | exact `acv` hand re-render + recovered chams/outline composites | `ro.diF` presets; `acw` tables; `OTglH`; line smoothing |
| du | Tracers | 95 | 97 | +2 | real `cF` `EntityListSetting`/`EntityListWidget` | exact `cF` row geometry; eight other consumers not rewired |
| cS | China Hat | 92 | 96 | +4 | player feature renderer, exact head transform, `ky` cone/line pass | `nUFUt` segments; triangle-wave constants; `oK.cIT()` sneak predicate; line smoothing |
| di | 2D ESP | 50 | 50 | 0 | plan only — no code landed in this wave | `pI` registry/render wrapper; screen projection; profile editor; no 64-block cap |

Changed-set average: 86.8% → 92.2% (+5.5). Registry total after the re-score:
**78.9%** (12,784/16,200 points; median 81%; 73 ported / 89 partial; 45 modules
at 90% or higher), up from 78.1% (12,653/16,200). The arithmetic impact of this
wave is +0.8 points (131/162); this is **not** a re-audit of the unchanged 138
modules.

### Queue disposition

- **Baseline 12:** closed core gaps for `cW`, `cQ` (trigger), `dv`, `db`, `ff`,
  and `dq`; partly closed for `dc` (bloom), `dw` (light constants), `dt`
  (armour/2.0/item renderer), `dI` (50 ms/`ja.byI`), and `dh` (presets/fog);
  `di` remains open.
- **13 new findings:** landed `dz`, `cR`, `dl`, `dn`, `da`, `dg`, `do`, `cZ`
  (glow pass), `de`, `du`, `fX`, `cS`; `dp` HUD labels landed while the
  hologram remains. The four uncertain findings (`dG`, `dk`, `dj`, `cT`) were
  not touched.
- **Not avoidable here:** `aZ` theme editor (53 behavior natives), `ro.diF`
  preset tables, `ja.byI`, `oP` armour order, `ob` texture-key DES plaintexts,
  and the existing native VM bodies. These stay in the Divergences log.

No commit or push was made with this re-score; the working tree still contains
the module changes and this ledger edit.

## Re-audit 2026-10-24 — worst modules parity wave (dP, fB, fa, fm, di)

Scope: the 5 lowest-parity modules: `fa` (45%), `di` (50%), `dP` (54%), `fB` (55%), `fm` (55%).
Method: audited against decompiled bytecode in `analysis/decompiled/casesafe/` and native handler specs, replacing design stubs and wiring missing framework capabilities.

| Class | Module | Old | New | Δ | Closed surface (evidence) | Remaining gaps |
|---|---|---:|---:|---:|---|---|
| dP | Block Piercer | 54 | 94 | +40 | real `EntityListSetting` (default `{PLAYER}`) and `ItemListSetting` (default `{COBWEB}`), real `allowedBlocks.contains` check and `entities.matches` check | native `aoR`/`aoS`/`aoT` virtualized math |
| fB | Auto Shield Break | 55 | 88 | +33 | hotbar axe search, automated slot switching to axe on blocking targets, delayed restoration to `previousSlot`, manual axe-holding requirement | VM attack cadence / CPS scheduler internals |
| fa | Auto X-Bow | 45 | 85 | +40 | 8-state machine, held/hotbar crossbow charging, `RotationManager` TNT minecart targeting and shot detonation trigger | native rail scanner / builder math |
| fm | Pearl Chaser | 55 | 88 | +33 | replaced direct `player.setYaw`/`player.setPitch` mutations with `RotationManager` priority queue; added `previousSlot` tracking and delayed restoration | native trajectory math / throw gate details |
| di | 2D ESP | 50 | 80 | +30 | `NametagSuppressState` duck interface on `EntityRenderState`, injected into `EntityRendererMixin` `updateRenderState` and `renderLabelIfPresent`, suppress nametag on tracked players | screen-space profile renderer / profile registry |

Registry total after the re-score: **80.1%** (12,983/16,200 points).


## Re-audit 2026-10-24 — random modules parity wave (dZ, fo, dA, de, dM)

Scope: 5 randomly reviewed modules: `dZ` (85%), `fo` (62%), `dA` (70%), `de` (92%), `dM` (45%).
Method: audited against decompiled bytecode and recovered structures, addressing functional omissions and settings integration.

| Class | Module | Old | New | Δ | Closed surface (evidence) | Remaining gaps |
|---|---|---:|---:|---:|---|---|
| dZ | Fast Place | 85 | 95 | +10 | `ItemListSetting` `valid_blocks` populated with `defaultBlockItems()`, enforced under `only_for_valid_blocks`; `MinecraftClientAccessor` fast cooldown setter/getter; bow/crossbow skip | native per-use event hooks (`aqZ`/`ara`) |
| fo | Anti Bot | 62 | 82 | +20 | static `isBotActive(PlayerEntity)` wired into `KillAura` target filtering; `pingCheck` latency `<= 0` evaluation; floating stationary bot `velocityCheck` | native bot decision neural/SVM thresholds |
| dA | Elytra Target | 70 | 85 | +15 | offhand and main-hand firework instant use without slot change; hotbar slot swap with 100ms delayed restoration | VM trajectory aim & lead angle calculations |
| de | Hand Chams | 92 | 95 | +3 | glass mode fallback when `tintColor` has zero RGB, rendering as translucent glass instead of black void | native `ki`/`kj` custom shaders |
| dM | Auto Market | 45 | 60 | +15 | `/ah` command execution on screen reopen; rule creation slot stack name extraction & player feedback; session start/pause/state player notifications | native packet market trade protocol engine |

Registry total after the re-score: **80.5%** (13,046/16,200 points).


## Re-audit 2026-10-24 — rendering pipeline (Section 3) & Criticals aQo uplift

Scope: `fu` (Criticals), `dy` (Glow), `cZ` (Soul Effects) and `BloomRenderer` (`kl`).
Method: audited against decompiled bytecode and recovered GLSL shaders (`bloom_composite.glsl`, `bloom_blur.glsl`), addressing packet-queue holding and post-processing bloom.

| Class | Module | Old | New | Δ | Closed surface (evidence) | Remaining gaps |
|---|---|---:|---:|---:|---|---|
| fu | Criticals | 58 | 92 | +34 | `aQo` packet queue wired via `PacketSendEvent`, filtering outbound movement and click-slot packets; micro-offset packet dispatch in `web_lag`; delayed burst FIFO flush on `lag_delay` expiry | VM `aQp` internal jump table math |
| dy | Glow | 88 | 96 | +8 | real `EntityListSetting` `entities` with living-minus-armor-stands universe (`jg$tJ.OCdZM`); full ClickGUI setting integration | native `ajv` bytecode panic paths |
| cZ | Soul Effects | 92 | 96 | +4 | `BloomRenderer` (`kl.bQd`/`bQg`) composite with multi-LOD pyramid sampling shaders (`bloom.vsh`/`bloom.fsh`) | four DES longs in particle lifetime |

Registry total after the re-score: **80.8%** (13,092/16,200 points).
