# Batch 12 audit report — audit 2026-10-17

Modules: dx (Anti Blind), cS (China Hat), fo (Anti Bot), du (Tracers),
dr (Health Indicators), fl (Auto Potion), dk (XRay), fp (Backtrack),
fF (Trigger Bot).

Case-twin check: every impl javadoc now cites the verified decompile path.
Notable: `analysis/decompiled/payload-decrypted/sixtwo/fl.java` declares `fl`
(verified), `.../fo.java` declares `fo` (verified), `casesafe/payload-decrypted/
sixtwo/fp.java` declares `fp` (verified), `casesafe/payload-decrypted/sixtwo/
fF_.java` declares `fF` (verified), `payload-named-cfr/sixtwo/cS.java` declares
`cS` (verified). The `cS` string constants were recovered from
`analysis/decrypted/full-dump.jsonl` (`sixtwo.cS` bsm `Zh` entries, 106 rows) —
the spec's "display strings [uncertain]" note is stale.

Registry/keybind: metadata `key=` is the **module id**, `bind=` the keybind
(cf. dA key=59 bind=82). XRay's `setBind(96)` was reading key=96 as a bind —
removed (bind=-999).

---

### dx — Anti Blind
post-fix parity: 100% (recovered surface) | status: ported | fixed: yes
fixed:
- Javadoc: corrected citation range (dx.java:31-193 constructor, 300-328
  accessors), spec path `casesafe/handlers/dx.md`, trace note (class load
  only), and the [U] consumer gap stated explicitly.
- Settings re-verified 1:1 against the decrypted constructor: 8 `cJ .WE(false)`
  toggles in order Fire, Pumpkin Blur, Freezing, Nausea, Blindness, Darkness,
  Suffocation, Water (dx.java:31-193); accessor order ajk-ajr matches
  (dx.java:300-328); no handlers/overrides/state — pure settings holder.
remaining gaps:
- [U] the consumer mixins (which overlay each toggle cancels, injection
  points) live in the bootstrap layer, absent from the corpus; nothing calls
  the accessors in payload or trace (spec "Unrecovered"). Capture condition:
  n/a (consumer not shipped).
evidence: payload-decrypted/sixtwo/dx.java vs AntiBlind.java; trace dx.jsonl
load only

### cS — China Hat
post-fix parity: 92% | status: ported | fixed: yes
fixed:
- **Setting names/defaults corrected** from the decrypted pool (was:
  style/first_select(true)/second_select(true)/color/size):
  group "Show For" (83,104,111,119,32,70,111,114), "Self" (83,101,108,102)
  default ON (`cw.Tz()`), "Friends" (70,114,105,101,110,100,115) default OFF,
  "Color" (67,111,108,111,114), "Gradient Speed"
  (71,114,97,100,105,101,110,116,32,83,112,101,101,100)
  `.Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0)` (full-dump `sixtwo.cS` rows;
  cS.java:55-82).
- **Behavior ported from the shell pair** qD + ky (both plain Java):
  self/friends gating, first-person skip, invisible skip (qD.java:173-243);
  cone apex (0,0.3,0), rim radius `player.getWidth()` at
  (-sin,0,cos)*2pi*i/N, per-segment gradient, alpha literal 40.0f, second rim
  line pass (ky.java:104-221). The old impl drew an invented cone
  (apex size*0.35 / radius size*0.15 / 12 points) at the feet — replaced.
- Color default kept at the theme accent 0xFF9747FF (mG.yHyOB 151,71,255; the
  prior "ChinaHat theme-accent color" fix, PROGRESS.md:197; `ig.bis()` reads
  the theme color, ig.java:383). Note: batch-06 corrected ProjectileAimBot to
  white from other specs — the two readings conflict; accent retained here.
remaining gaps:
- [G] ky segment count `nUFUt` and the jk.bDm gradient triangle constants are
  DES-only in the shell classes (absent from full-dump): 24 segments and the
  180/360/0 triangle wave are labeled high-probability guesses.
- [U] the head-model transform (`getHead().applyTransform` + -0.43/-0.5 pose
  offset; `oK.cIT()` is native) is approximated by `getHeight() + offset`;
  sneaking→-0.5 is a labeled guess (qD literal is `cIT() ? -0.43 : -0.5`).
- [N] `jo.bEt` deferred task and `lT.ciQ().setLineSmoothing` have no
  OpenGrim counterpart (drawn inline).
evidence: full-dump sixtwo.cS rows; qD.java:92-300; ky.java:87-286; trace
cS_.jsonl load only

### fo — Anti Bot
post-fix parity: 62% | status: partial | fixed: partial
fixed:
- **Ping/tab check corrected to the pool-derived semantics** (was latency<=0):
  UUID -> PlayerListEntry lookup; flag when the entry or its GameMode is
  missing (spec fo.md "Runtime model": getUuid/PlayerListEntry/getGameMode/
  getIndex; the exact getIndex comparison is native — labeled guess).
- **Swing evidence made per-player and animation-gated** (was a global
  one-shot flag): EntityAnimationS2CPacket.getEntityId -> world entity ->
  uuid; `Swing Mode` picks main (0) / off (3) hand ids (labeled: spec says the
  exact ids are not in the pool; vanilla 0/3).
- Javadoc: labeled stand-ins (name regex, age gates, still-position movement
  heuristic, ground bookkeeping, unused sound settings), trace note (aLm 34x,
  aLo 2x via YO).
remaining gaps:
- [N] aLl/aLm/aLn and all 7 native predicates (aLw ground, aLv name, aLu ping
  tail, aLt ticks, aLs swing, aLr movement, aLq sound); the per-check -> set
  mapping (NErxJ/dnuNp/CDnOz/eXPRj) is unrecovered — only OiqRK is exposed.
- [U] name-pattern arrays (fdrKp/oxnex) and the sound formula (QOrOm/tIfIS
  are 0..1 sliders, attribution flagged) — not implemented.
evidence: payload-decrypted/sixtwo/fo.java:118-154, 158-453; spec
handlers/fo.md; trace fo.jsonl

### du — Tracers
post-fix parity: 95% | status: ported | fixed: yes
fixed:
- **"Entities" selection corrected to the recovered cF contract** (was an
  invented players/hostiles/all ModeSetting): selected set default {PLAYER},
  universe = OCdZM living types minus ARMOR_STAND plus the VT seed
  ITEM/CHEST_MINECART/TNT_MINECART; VX = non-empty && offered && selected
  (cF.java:34-36, 230-268; dY_.md).
- **Removed the non-original `isAlive` skip** (aiD skips only self, non-members,
  ignored friends; spec handlers/du.md step 4).
- Removed unused stand-in API (targets list, onTick/onDisable, drawsTo); added
  cF-style accessors. All 10 original settings verified (line width, both
  colors, mode + 4 options, ignore friends).
remaining gaps:
- [U] panic-switch loop break (`dh.afl()`) has no OpenGrim counterpart; the
  dJxyG/kF batcher is replaced by RenderLayers.lines (established substitute).
- [U] `jg$tJ.OCdZM` preset contents (modeled as living-minus-armor-stand per
  dY_.md; the enum constants are native).
evidence: payload-decrypted/sixtwo/du.java:60-121; handlers/du.md (bytecode
offsets 0-697); trace du.jsonl load only

### dr — Health Indicators
post-fix parity: 92% | status: ported | fixed: yes
fixed:
- Labeled the native `rs$we` sprite mapping as a high-probability guess
  (enum order mirrors vanilla HeartType; dyK/dyJ are native).
- Added the vanilla nameplate-range gate (4096.0 squared distance) to the
  WorldRenderEvent substitute — the original only runs inside the label render
  event, which vanilla fires within 64 blocks (spec dr.md "Runtime model");
  labeled the clamp (`Math.max(1, heartsPerRow)`) and the hook substitution.
- Settings re-verified 1:1: Hearts Per Row `.Vy(1.0).Vw(1.0).Vx(30.0).VA(10.0)`
  int, Invisible `.WE(false)`, Visible Through Walls `.WE(false)` (dr.java:53-106).
- aib guard chain (kn.YNOIY -> Outlines.isOutliningActive, instanceof, self
  skip, invisible filter) and rs.djl/djm/djn/djo (offsets 0.25875, billboard,
  scale 0.025, rows/rowStep/pixel width, container + absorption + health
  passes, 9.0f quads, 255,255,255,255) verified line-for-line.
remaining gaps:
- [G] rs$we.dyK/dyJ (native): sprite ids + effect->type order are guesses.
- [U] `gi` injection point and the gi cancel interplay with di (spec
  "Unrecovered"); `Visible Through Walls` effect inside rs (queue kind).
evidence: payload-decrypted/sixtwo/dr.java:235-307; rs.java:152-464;
rs$we.java; trace dr.jsonl load only

### fl — Auto Potion
post-fix parity: 64% | status: partial | fixed: yes
fixed:
- **Suffix corrected " %" -> "%"** for Regeneration Threshold and Heal
  Threshold (fl.java:309, 372 — plain literal, unlike fp's " %").
- **Plan now carries the status effect and the hotbar scan matches the
  potion's own effect** (`aJZ(effect, stack)`: PotionContents effects contain
  the wanted RegistryEntry; `fl$sP(hotbarSlot, hand)` is effect-scoped). Was:
  first splash potion regardless of type.
- Visibility wiring added for the six native suppliers as labeled guesses:
  Healings <- Mode != Buff, Buffs <- Mode != Heal, Regeneration Trigger <-
  Regeneration toggle, Regeneration Threshold <- trigger == Threshold,
  Heal Threshold <- Heal Until == Reaches Threshold, Required Angle <-
  Activation == Look; Potion Type Delay left always visible (aKb unknown).
- Dropped the bogus `submitPosition(eyePos + (0,pitch,0))` call; rotation is a
  single silent-aim submit (yaw = effective, pitch = +Required Angle for Down /
  -Required Angle for Up) at uWTdl.
- All 14 settings verified 1:1 incl. `cu.SY()` defaults (Throw Angle Down,
  Heal Until Full Health) and `cw.Tz()` defaults (all buffs/healings ON).
- Trigger gate matches the decompiled aJQ: `now - lastUse > Per Potion Delay
  && plan != null`; per-effect cooldown (LKcpH) modeled as next-allowed with
  Potion Type Delay.
remaining gaps:
- [N] aJP/aJO bodies, aJU/aJW/aJX/aJY bodies; [U] health formula (absorption
  inclusion, comparison direction), splash-vs-drink, scan scope, use call,
  aJQ's dead-store Activation read. Capture condition: enable with a splash
  potion of strength in the hotbar and health below the threshold.
evidence: payload-decrypted/sixtwo/fl.java:136-495; casesafe/handlers/fl.md;
trace fl.jsonl (YO 1x)

### dk — XRay
post-fix parity: 60% | status: partial | fixed: yes
fixed:
- **Removed `setBind(96)`** — metadata key=96 is the module id, bind=-999
  (unbound); the Module default -999 now applies.
- **All-settings change callback ported**: Water/Lava now use an inner
  `ReloadBoolSetting` whose `onChange` reloads chunks, matching
  `bwI().forEach(cB -> cB.Vd(ja::byJ))` (dk.java:85); Ores add/remove already
  reloaded.
- Settings + predicates verified 1:1: "Ores" cK seed = the exact 19 items
  (dk.java:62-82), "Water"/"Lava" `.WE(false)`; `agA` = item-identity
  whitelist, fluid filter = water/lava toggles, other fluids cancelled
  (dk.java:232-339); aaj/YO culling flip + reload (dk.java:169-185).
- Javadoc: registry/bind note, trace note (aaj 2x, YO 2x), documented gap.
remaining gaps:
- [N]/[U] the five render-cancel handlers agz(ha)/agv(gs)/agy(gT)/agw(gr)/
  agx(gn) are injected by the native agent layer (not in the corpus, no mixin
  counterpart); the `.aZS(false)` descriptor flag is native.
evidence: payload-decrypted/sixtwo/dk.java:59-86, 169-339; handlers/dk.md;
trace dk.jsonl

### fp — Backtrack
post-fix parity: 60% | status: partial | fixed: yes
fixed:
- **Exempt-packet cluster completed**: ProfilelessChatMessage was missing from
  the pass-through list (spec fp.md: GameMessage, ChatMessage, RemoveMessage,
  Team, ProfilelessChatMessage, ChatSuggestions, PlayerPositionLook,
  Disconnect, DamageTilt, HealthUpdate, CommonPing).
- Chance gate fixed to `random * 100 >= Chance` (was `*100 + 1 >`, which
  failed ~1% at Chance=100) — labeled guess.
- Javadoc: recovered surface stated (exempt cluster, fp$sQ.doY flush/reset
  shape, heFtE/fNonW idle re-sync, aLS target-validity gate), trace note
  (aLS/aLP 74x, aLN 72x, aLL 72x/36 false, aMu 70x/35 true), labeled stand-ins
  (per-target queues, distance band from the dual-value cA, Hit-mode attack
  event gate, re-delivery by packet.apply).
- All 11 settings verified 1:1 incl. dual-value cA defaults (2.0/100.0/500.0/
  2500.0 = first pair value) and the " %"/" ticks" suffixes (fp.java:328-507).
remaining gaps:
- [N] aLG/aLJ/aLK/aLQ/aLR/aLO/aLH/aLI bodies; [U] queue split (UlcPe vs
  cDqQL), expiry predicate, timer assignment, ghost render config, aZS(false).
  Capture condition: hit a player within the distance band and log the
  enqueue/flush sequence.
evidence: casesafe/payload-decrypted/sixtwo/fp.java:110-507; handlers/fp.md;
trace fp.jsonl

### fF — Trigger Bot
post-fix parity: 72% | status: partial | fixed: yes
fixed:
- **"Target" corrected to the cF contract** (was an invented players/mobs/all
  ModeSetting): selected {PLAYER}, universe = OCdZM living minus armor stand
  (no VT seed), VX = non-empty && offered && selected (cF.java:34-36, 230-268;
  fF.java:84).
- **"Slots" corrected to the cz contract** (was an empty GroupSetting with a
  no-op predicate): `Set<Integer>` default empty (cz.java:26), predicate =
  current hotbar slot ∈ set (cz.Uy, cz.java:65-67), accessors added; the
  widget-visibility line removed (cz is a slot set, not a group).
- Raycast verified against ox.cHn: block clamp (squared compare + sqrt),
  stretch(dir*range).expand(1,1,1) box, ProjectileUtil.raycast with
  range*range (fF.md "Runtime model"); filters (ignore walls/friends/naked/
  damage tick/shielding) and the Target Lock cross-check kept as stand-ins.
- All 15 settings verified 1:1 (Cooldown 0.01/0.0-1.0/0.9, Timer 600 " ms",
  Range 3.0 " blocks", Hold Key default 0 = mA.sCBUa, Cancel Use Mode visible
  with Cancel On Use — the one proven gate).
remaining gaps:
- [N] aST body and aSU/aSV/aSW; [U] crit action (Upper Cut jump), Simulate
  Clicks pulse, Un Press Shield, attack invocation, oV.cLb range transform.
  Capture condition: stand in range of a target with the module enabled and
  log the aST decision chain.
evidence: casesafe/payload-decrypted/sixtwo/fF_.java:74-525; casesafe/
handlers/fF_.md; trace fF_.jsonl (aST 6x)

---

## Cross-module notes

- cF (`Entities`) is now ported identically in Tracers and TriggerBot:
  selected set (default {PLAYER}) + candidate universe (OCdZM living minus
  ARMOR_STAND, plus VT seeds where the original has them) + VX predicate —
  same approximation as AntiInvisible (framework has no entity-list widget).
- cz (`Slots`) is ported as a non-registered `Set<Integer>` default empty
  (TriggerBot) — same widget limitation.
- `cA` dual-value chains keep the repo convention: default = first UI-pair
  value; second value is the sampled anchor (fp 2.0/3.5 etc.).
- Suffixes are literal-exact per module: fp Chance " %" (with space) vs fl
  thresholds "%" (no space) — verified from the folded constructors.
- Theme-fed color default (`rD.dlM().bjG().bis()`) kept as the accent
  (0xFF9747FF) in ChinaHat per the prior deliberate fix; batch-06's white
  convention conflicts — flagged for the orchestrator.

## Compile

`.\gradlew.bat compileJava -q --offline` -> clean. Two out-of-batch files
(AimAssist.java, FireworkSpots.java) were mid-edit by other sessions and
blocked the first run; both were fixed in the tree before the final clean run
(no edits to them from this batch).

## Changed files

- src/main/java/dev/opengrim/modules/render/AntiBlind.java (javadoc: spec
  path, citation ranges, trace note, [U] consumer gap)
- src/main/java/dev/opengrim/modules/render/ChinaHat.java (settings 1:1 from
  full-dump; qD gating + ky cone port; labeled guesses)
- src/main/java/dev/opengrim/modules/utility/AntiBot.java (ping/tab check,
  per-player swing evidence, labels, trace note)
- src/main/java/dev/opengrim/modules/render/Tracers.java (cF selection,
  isAlive skip removed, stand-in API removed, trace note)
- src/main/java/dev/opengrim/modules/render/HealthIndicators.java (sprite
  mapping label, 64-block nameplate gate, clamp label)
- src/main/java/dev/opengrim/modules/combat/AutoPotion.java (suffix fix,
  effect-aware potion search, visibility wiring, rotation cleanup, labels)
- src/main/java/dev/opengrim/modules/render/XRay.java (bind fix, Water/Lava
  change callbacks, labels, trace note)
- src/main/java/dev/opengrim/modules/combat/Backtrack.java
  (ProfilelessChatMessage exempt, chance fix, labels, trace note)
- src/main/java/dev/opengrim/modules/combat/TriggerBot.java (cF Target + cz
  Slots contracts, accessors, labels, trace note)
