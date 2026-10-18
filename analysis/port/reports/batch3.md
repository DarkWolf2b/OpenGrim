# Batch 3 port report (dZ–dq, 18 modules)

Clean-room ports of the batch 3 registry entries onto the
`../../../src/main/java/dev/opengrim` framework (Module + Bool/Int/Double/Mode/Group
settings). No shared files touched; nothing compiled (per work order).

Numeric settings (step/min/max/default/suffix) were recovered from the
decrypted builder chains in `../../../analysis/decompiled/payload-decrypted/sixtwo/`
(`cA`: UG/UE/UF/UI/UH; `cC`: Vy/Vw/Vx/VA/Vz) and cross-checked against the
yarn `1.21.11+build.6` tiny mappings; no decompiled text was copied.

Notes on scope: several decrypted settings use wrapper types the settings API
cannot express — `cK` block/item list editors, `cF` entity-type list editors,
`cG` color pickers, `cy` string/URL settings, `cD` bind/action controls, and
two-value range sliders (`UI(a, b)`). These are either carried as editable
in-module sets (documented per module) or omitted and flagged below.

| ClassId | Display Name | File (../../../src/main/java/dev/opengrim/modules/) | Settings | Implementation notes | Parity confidence |
|---|---|---|---|---|---|
| dZ | Fast Place | world/FastPlace.java | 6 | Clamps `MinecraftClient.itemUseCooldown` to the decrypted "Right Click Delay" (step 1, 0–4, default 0) while the use key is held; block/item gating per decrypted toggles. Original's `cK` "Valid Blocks" list and `cz` "Slots" action not expressible → approximated by `only_for_valid_blocks`/`only_for_slots` toggles. | medium |
| da | Sound ESP | render/SoundEsp.java | 3 | Time Before Disappear (1–15 s, def 8), Quantity Limit (1–100, def 10), Max Distance (1–128 blocks, def 32) — all decrypted values. Behavior approximated: no sound-system hook in framework, so spots are tracked from noisy entities (TNT/players/mobs) instead of `SoundInstance`s. parity: native-blocked, approximation. | low |
| db | Jump Circle | render/JumpCircle.java | 3 | Circle Scale (0.5–5, def 1), Only Self, Circle Texture as radio mode (Default/Glowing/Custom — decrypted group). Computes airborne take-off circles per player; drawing needs render hook. Decrypted color picker + Texture URL (string) omitted. parity: native-blocked, approximation. | medium (state) / low (render) |
| dc | Hit Particles | render/HitParticles.java | 22 | Full decrypted "Particles" group (Stars, Snowflakes, Ghost, Hearts, Diamonds, Thunders, Moons, Clouds), "Physics" group (Fall, Rise, Burst, Fly), Scale (1–10, def 3), Speed (1–15, def 3), Amount (1–5, def 2), Time Before Disappear (1–10 s, def 3), Rotation Angle (0–360, def 180 "deg"), Rotation Speed (0–60, def 60 "deg"), Only Self, Glow (def on) — all values from decrypted chains. Hit detection approximated from swing + targeted entity. Color picker omitted. parity: native-blocked, approximation. | medium (settings) / low (render) |
| dd | Block ESP | render/BlockEsp.java | 4 | Filled, Tracers, Range (1–128 blocks, def 100), Tracers Width (1–3, def 1) — decrypted values. Scans blocks vs an editable highlight set (original `cK` list editor not expressible); color pickers omitted; drawing needs render hook. | medium |
| de | Hand Chams | render/HandChams.java | 45 | Ported decrypted surface: Effect/Color Mode/Preset modes (Outline, Glass, Water, Chrome, Liquid Metal; Zero–Three; Default/Neon/Chrome/Ocean/Toxic/Fire), 9 colors as RGB int settings (defaults unknown), 35 shader scalars with decrypted ranges where resolvable (Animation Speed, Glow Radius/Quality/Alpha, Fill Alpha, Saturation, Brightness, Noise Freq X/X2/Y/Y2, Warp X/Y, Light Angle/Intensity, Refraction, Depth, Dispersion, Choppiness, Water Refraction/Specular, Wave Freq/Height, Chrome Rim, Red/Blue Shift, Contour, Softness, Flow…). Several name arrays use runtime-decrypted letters, so some range→name assignments are approximations. onTick is a no-op: pure GLSL hand shader, needs render integration. parity: native-blocked, approximation. | low |
| df | Aspect Ratio | render/AspectRatio.java | 6 | Preset group (Custom / 16:9 / 16:10 / 4:3, decrypted names) + Ratio (step 0.001, 0.1–5, def 1.7778 — decrypted). `getAspectRatio()` replicates the observed preset-priority logic; framebuffer stretch needs a render/window hook. | high (logic) / medium (render) |
| dg | Pearl Prediction | render/PearlPrediction.java | 1 | Show Time Left (false, decrypted). Simulates every live `EnderPearlEntity` with thrown-projectile physics (0.99 drag, 0.03 gravity/tick) to a solid-block landing; exposes landing pos + ticks. Trajectory line drawing needs render hook. | medium |
| dh | Ambience | utility/Ambience.java | 21 | Change Time (def on) with Time Mode (Presets/Custom) and Time presets (Dawn/Morning/Day/Evening/Sunset/Night/Real Time — decrypted names) + Time Value (0–24000 ticks, step 100) and Real Time wall-clock mapping; Change Weather (def on) with Clear/Rain/Thunder/Snow (decrypted names) via client-side `setTimeOfDay`/`setRaining` per tick; Fog Range (0–256 blocks, def 64 — original was a 64–128 two-value slider, not expressible); Sync With Sky; Particles + Particle Type (Triangles/Cubes — decrypted). Custom fog color/range rendering and ambience particles are native-blocked visuals. | medium |
| di | 2D ESP | render/Esp2D.java | 2 | Decrypted "ESP Profiles"/"Edit ESP" carried as empty editor groups (profile editor not expressible). Tracks players within 64 blocks and exposes their boxes for a screen-space overlay; cuboid projection needs render hook. parity: native-blocked, approximation. | low |
| dj | Hole ESP | render/HoleEsp.java | 13 | Mode (Boxes/Fade), Range (3–25 blocks, def 5), Range Y (0–16, def 3), Outline (def on), Size (−1–1, def 1), Ignore Self, Obsidian (def on), Obsidian-Bedrock (def on), Double, Quad, Void — names/values from decrypted chains. Scans 1×1 shafts and classifies by floor/wall material (obsidian/bedrock/mix/void); 2×1/2×2 detection flags exposed. Four decrypted color pickers omitted. | medium |
| dk | XRay | render/XRay.java | 2 | Water, Lava (both false, decrypted). Ore list recovered exactly from the decrypted builder (19 targets: all ore variants + ancient debris + bedrock) as an editable set; fixed 16-block scan radius (original had no range setting). Hiding non-target geometry needs block-render mixins. | medium (data) / low (render) |
| dl | Outlines | render/Outlines.java | 12 | Entities list seeded with the original default (End Crystal) as editable set; Color Mode group Zero/One/Two/Three (decrypted); Animation Speed (0–3, def 1.5), Glow Quality (1–4, def 2), Glow Radius (1–16, def 4.3), Glow Alpha Multiplier (0–4, def 1), Fill Alpha Multiplier (0–1, def 0.3), Saturation (0–5, def 0.7), Brightness (0–50, def 2) — decrypted values. Two color pickers omitted; glow rendering needs render hook. | medium |
| dm | Friend Indicator | render/FriendIndicator.java | 1 | Height (0.4–1.6, step 0.1, def 1.2 — decrypted; decrypted suffix unresolvable → none). Friend set managed on the module (no friends system in framework); computes in-view friends for a head marker; drawing needs render hook. parity: native-blocked, approximation. | low |
| dn | Firework Spots | render/FireworkSpots.java | 2 | Time Before Disappear (1–15 s, def 8), Quantity Limit (1–100, def 10) — decrypted values. Tracks `FireworkRocketEntity`s; on removal records the last position as a used-firework spot with expiry/cap. Marker rendering needs render hook. | medium |
| do | Arrows | render/Arrows.java | 2 | Size (1–10, def 3), Radius (20–100, def 50) — decrypted values. Computes relative yaw/pitch offsets from the crosshair to each tracked entity (editable type set, players default) for HUD arrows; "Friend Color"/"Color" pickers and the `cF` editor omitted; HUD drawing needs render hook. | medium (math) / low (render) |
| dp | Logout Spots | render/LogoutSpots.java | 5 | Refresh Timer (0–100 s, def 5), Login Notification (false), Position Render Mode (Simple/Textured — decrypted), Height (0.1–3 blocks, def 2.8), Background (false) — decrypted values. Tab-list/world snapshots record logout positions; re-join chat notification implemented; box rendering needs render hook. "Clear Spots" is a decrypted bind (`.VO(-999)`) → `clearSpots()` method instead. Position Color picker omitted. | medium |
| dq | Storage ESP | render/StorageEsp.java | 3 | Filled, Tracers, Tracers Width (1–3, def 1) — decrypted values. Scans loaded chunks (`ChunkStatus.FULL`) for chest/trapped chest/barrel/shulker/ender chest/furnace/brewing stand/spawner/hopper(+dispenser) block entities, matching the original's decrypted 9-item list; on-tick scan instead of the original's executor thread. Eighteen color pickers omitted. | medium |

## Specs that were too thin to port faithfully

- `da` (Sound ESP): no Java-visible behavior (0 constructed settings visible in
  spec; values recovered from decompiled ctor). Sound-source tracking is an
  approximation because the framework lacks a sound-event hook.
- `de` (Hand Chams): the decrypted setting-name list and partially-encrypted
  builder chains could not be fully matched name↔chain (runtime `agT`-decoded
  letters); several numeric ranges/defaults and all color defaults are
  approximations. Behavior is a pure native shader, unportable without render
  integration.
- `di` (2D ESP): both decrypted settings are editor UI ("ESP Profiles", "Edit
  ESP"); no behavior recoverable — carried as empty groups.
- `dm` (Friend Indicator): decrypted "Height" suffix unresolvable; friend list
  source unknown (framework has none).
- `db` (Jump Circle): color/URL settings not expressible; per-texture rendering
  unknown.

## Cross-cutting omissions (settings API)

- `cK` block/item list editors → editable in-module sets (Block ESP, XRay,
  Storage ESP) with add/remove accessors.
- `cF` entity-type list editors → editable sets (Outlines, Arrows).
- `cG` color pickers → omitted (noted per module); Hand Chams colors use
  RGB int settings.
- `cy` string setting (Jump Circle "Texture URL") → omitted.
- `cz`/`cD` action/bind controls (Fast Place "Slots", Logout Spots "Clear
  Spots") → methods on the module.
- Two-value range slider (Ambience "Fog Range" 64–128) → single value.

All 18 files compile-target yarn 1.21.11 only by API names verified in
`../../../analysis/jars/yarn-1.21.11+build.6.tiny` (incl. the known traps: no usage of
string-based `KeyBinding` ctors, `Monster` as marker interface via
`instanceof`, hunger via `getHungerManager().getFoodLevel()` where relevant).