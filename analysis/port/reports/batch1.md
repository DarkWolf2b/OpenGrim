# Batch 1 port report (cP..cZ, dA..dG)

Ported from decrypted specs (`../../../analysis/specs/modules/<id>.md`). Setting names were
re-decoded from the decompiled constructors: the `mr.clS(int[])` arguments are plain
ASCII code points, so every `ct/cu/cw/cv/cJ/cC/cG/cD/cy/cz/cK` name and the `cC`
builder chains (`Vy`=step, `Vw`=min, `Vx`=max, `VA`=default, `Vz`=suffix) were
recovered exactly (cS and dB are exceptions, see below). Suffixes are stored
stripped of their leading space per the porting convention.

Target framework: `dev.opengrim.module.Module` (onTick/onEnable/onDisable only —
no render or packet hooks), settings API `Bool/Int/Double/Mode/Group`.
Because the framework exposes only tick hooks, every render-pipeline module is
implemented as a tick approximation (vanilla `client.particleManager.addParticle`
previews plus data exposed for the future render integration) and is marked in
its javadoc with `parity: native-blocked, approximation`.

| Class id | File (../../../src/main/java/dev/opengrim/modules/...) | Settings ported (of decrypted) | Implementation notes | Parity confidence |
|---|---|---|---|---|
| cP | render/Trajectories.java | 4 / 4 | Simulates projectile flight from velocity for nearby arrows/tridents/pearls/throwables each 2 ticks; particle trail + landing marker (filled/outline per settings). Color modes map to vanilla particle types, rainbow cycles. | medium |
| cQ | render/SwingAnimations.java | 1 / 1 | Re-triggers the client-side main-hand swing when its progress crosses 50%, producing a snappier loop. Cannot reach the first-person hand renderer without a mixin hook. | low |
| cR | render/Particles.java | 23 / 23 | Full decoded settings surface (Particles/Physics/Add on groups, Stars/Snowflakes/Ghost/Hearts/Diamonds/Thunders/Moons/Clouds, Fly/Drop drift, Idle/Movement/Pearl Throw/Arrow Shot/Trident Throw/Totem Pop bursts, Glow, Color, Scale, Amount). Emits via vanilla particle manager; totem pops detected from health snapshots (pop = health ≤1.5 then rising). | medium |
| cS | render/ChinaHat.java | 5 / 5 (names unrecovered) | cS is only present in the Vineflower tree with native `Zh` bootstrap constants; setting names are not decryptable statically. Structure known: group + 2 toggles (first default-on) + color + size slider (step 1, 1..10, default 5). Reconstructed ids: hat/self/glow/color/size (documented divergence). Cone approximated by a particle ring + midpoints above the eye height. | low |
| cT | render/PopChams.java | 6 / 6 | Totem-pop detection from other players' health snapshots (prev ≤1.5 → rising); highlight ring of TOTEM_OF_UNDYING (simple) / ENCHANT (textured) particles for Time To Disappear seconds. Fly Speed has no observable hook (native fly-away animation), kept as setting. | low |
| cU | render/Trails.java | 8 / 8 | Per-player position ring buffer (length × 20 samples capped 80, sampling rate from Gradient Speed); draws fading particle trail. Show For: Players/Invisibles filter world players, Self tracks the local player; Friends is an empty set (no friends list in rebuild). | medium |
| cV | render/SkeletonEsp.java | 2 / 2 | Computes approximate humanoid bone segments (head/neck/hips/shoulders/arms/legs, yaw-aware, sneak-aware) per nearby player each tick; stored in `getSkeletons()` for the render integration and previewed as joint particles every 4 ticks. Line Width exposed via `getLineWidth()`. | low |
| cW | render/TrapEsp.java | 13 / 13 | Scans (every 20 ticks) entities (armor stands, minecarts, falling blocks, decorations/paintings) and blocks (buttons, levers, banners, decorated pots, signs) within Range; greedy-clusters hits by Cluster Radius and flags clusters ≥ Minimal Count. Flagged centers in `getClusters()` + particle preview. Block-scan radius capped at 24 for perf (full range 1..128). | medium |
| cX | utility/FakePlayer.java | 1 / 2 | Spawns `OtherClientPlayerEntity(ClientWorld, GameProfile(random UUID, name))` (ctor call verified from the original's call sites), copies position/yaw/pitch/health and optionally the full inventory (all 41 slots); discarded on disable. The "Name" text setting cannot be represented in the current settings API (no string setting) — name falls back to local player name + " (fake)". | high |
| cY | render/ShieldStatus.java | 5 / 5 | Tracks per-player shield state: using (`isBlocking`), disabled (shield on cooldown via `ItemCooldownManager.isCoolingDown(stack)`), enabled (shield held), none. Status map in `getStatuses()`; color preview particle above head (Enabled/Using/Disabled color modes). Color Transition kept as setting (particle preview cannot lerp). | low |
| cZ | render/SoulEffects.java | 8 / 8 | Watches nearby living entities; on death (left alive-set, gated by last-tick visibility unless Behind Walls) emits SOUL particles rising from the death position over Duration, total budget Particle Count (capped 60/tick), spread from Dispersion × Radius; one-shot SOUL_FIRE_FLAME ring at Glow Radius. | medium |
| dA | movement/ElytraTarget.java | 10 / 10 | While gliding, boosts with a firework rocket (hotbar search, select slot, `interactItem`, restore) when distance to target (crosshair or nearest living) exceeds Follow Distance, respecting Firework Cooldown; Overshoot adds an extra boost window of Overshoot Value ticks. "On Bind" + "Firework Key" require the keybind framework and are inactive; "Elytra Bounce" is native-only. | medium |
| dB | render/FullBright.java | 0 / 0 | No settings in the original. Grants a silent infinite Night Vision client-side while enabled (re-applied on tick), removed on disable. Gamma forcing needs an options-pipeline hook (the gamma SimpleOption clamps), so Night Vision is the approximation. | medium |
| dC | render/ViewModel.java | 20 / 20 | Full decrypted settings surface (Work On Items, Scale 0..2, Main/Off/Arm position x/y/z ±3 and rotation x/y/z ±180 " deg", Work On Arm). Applying transforms requires a HeldItemRenderer hook that modules cannot reach; getters (`transformOf(hand, kind)`) expose the values for the render integration. No onTick behavior. | low (settings faithful, behavior needs render hook) |
| dD | utility/ItemFrameBlocker.java | 4 / 5 | Detects crosshair use attempts on item frames while the use key is pressed and warns locally (throttled 1/s) per the All Items / Only Weapons (item set incl. swords, axes, bow, crossbow, trident, mace) / Specified Slots (approximated as currently-held item) filters. Actual cancellation requires a network/interaction hook; the "Slots" action button (cz) has no settings-API equivalent and is omitted. | low |
| dE | utility/Spammer.java | 11 / 16 | Ports Message Count (1..5), Delay, Disable On Leave/Disconnect (auto-disable on null player / world change), Randomize, Auto Split Messages + Split Length/Split Delay chunked sending, Bypass Anti Spam (random char suffix), Include Uppercase Characters (random case flips), Length (truncate). Message 1–5 are text settings; no string setting exists in the settings API, so contents live in built-in defaults ("Hey" for slot 1, others empty, skipped) — documented omission. | medium |
| dF | world/LeverReplace.java | 8 / 8 | Finds the nearest lever/button within 4 blocks; mines it via `updateBlockBreakingProgress` and then places the selected replacement (Cobweb/Obsidian/Held Block) via slot-select + `interactBlock`. Instant/Legit modes: legit additionally requires holding an "allowed" item (Allowed Items multi-select approximated as a swords/any mode, matching the original's default sword list). | medium |
| dG | render/AntiTrap.java | 10 / 10 | Hides trap-clutter entities client-side (`setInvisible(true)` re-applied each tick, previous visibility restored on disable) for paintings, armor stands, minecarts and falling blocks per the Hide group. Block-based clutter (signs, buttons, levers, banners, decorated pots) renders from block entities and cannot be hidden without a render hook — toggles ported but inactive. | medium |

## Cross-cutting notes

- Decrypted registry categories: all visual modules (cP..cW, cY, cZ, dC) are
  `gh.nOCvV` = RENDER; dA/dB/cX/dD/dE/dF/dG are `gh.qBzlZ` (mixed function).
  Rebuild categories follow function per the porting instructions
  (dA → movement, dF → world, cX/dD/dE → utility, dB → render).
- Yarn 1.21.11 traps handled: `Monster` marker-interface filtering not needed in
  this batch; `PaintingEntity` lives in `net.minecraft.entity.decoration.painting`;
  `SwordItem` no longer exists — weapon checks compare `Item` constants from
  `Items`; hunger/status/elytra APIs verified against
  `../../../analysis/jars/yarn-1.21.11+build.6.tiny`.
- Particle spawning uses `client.particleManager.addParticle(effect, x, y, z,
  vx, vy, vz)` (verified overload); the `ClientWorld.addParticle(double…,
  ParticleEffect)` overload takes a bounding box, not a position.
- Specs' "Setting names (decrypted)" sections were incomplete for several
  classes; names above were re-decoded from ASCII int arrays in
  `../../../analysis/decompiled/payload-decrypted/sixtwo/<id>.java` (cR, dA, dC, dD, dE,
  dF fully; cS/dB remain native-encrypted).
- Text-setting gap: the original has string settings (`cy`) used by cX (Name)
  and dE (Message 1–5) plus an action setting (`cz`, dD Slots) and a
  multi-item list (`cK`, dF Allowed Items). The settings API cannot represent
  these; each affected module documents its approximation.