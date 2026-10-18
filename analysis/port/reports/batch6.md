# Batch 6 port report (registry sixtwo.ec .. sixtwo.et)

Ports done on branch `cursor/batch6-port-3de0`. Category packages were inferred
from module function; the original `gh` enum constants were recovered from
`super(gf.aZL(key, bool, gh.X))` sites (xwjCw=Combat, xgeEn=Movement,
qBzlZ=Misc, nOCvV=Render, KfAlY=Client) and used as a tiebreaker. All 18 modules
verified against Yarn `1.21.11+build.6` names via `../../../analysis/jars/yarn-1.21.11+build.6.tiny`
(`PlayerInput` record accessors, `PlayerInventory.getMainStacks/getSelectedSlot`,
`ScreenHandler.slots/syncId`, `Items.ELYTRA/EXPERIENCE_BOTTLE/FIREWORK_ROCKET/SHIELD`,
`Blocks.COBWEB` etc.).

| Class id | Module | File | Settings | Implementation notes | Parity confidence |
|---|---|---|---|---|---|
| ec | Ghost Hand | `../../../src/main/java/dev/opengrim/modules/world/GhostHand.java` | 0 | Ray-marches look vector to 4.5 blocks, finds first container `BlockEntity` (implements `Inventory`) behind obstructing blocks and sends `interactBlock` + swing. Tracks opened positions in a `Set<BlockPos>` (mirrors the original's state container). Native used packet-level bypass; vanilla servers may still reject. | low |
| ed | Custom Camera Distance | `../../../src/main/java/dev/opengrim/modules/render/CustomCameraDistance.java` | 2 | Decrypted settings ported: Distance (step 1.0, 4.0–100.0, def 4.0; cC chain recovered from source, suffix encrypted→null) and No Clip (off). Camera offset must be applied per frame; framework only has per-tick hooks, so module holds config only. | low |
| ee | Cape | `../../../src/main/java/dev/opengrim/modules/render/Cape.java` | 3 | Use Presets (on), Preset group (child cu entries are native-encrypted names, not recoverable → empty group), Hide Wings (off). Texture URL is a native `cy` string setting (max 2048, def "") — not representable with the current settings API, omitted. Applying a cape needs a skin/render hook. | low |
| ef | Elytra Swapper | `../../../src/main/java/dev/opengrim/modules/utility/ElytraSwapper.java` | 9 | Activation Key (-999..348, def -999, key-code int), Mode (legit/normal), Inventory Mode (client/silent), Auto Open Inventory (on), Swap Delay (5, 0–500, def 50 ms; suffix encrypted→"ms" passed as null), Auto Fly (off), Swap Back After Landing (off), Swap Firework (off), Activate Firework (off). Swap via three `PICKUP` slot clicks on `playerScreenHandler` (chest ↔ elytra anywhere in inventory); firework use gated on `itemUseCooldown`. | medium |
| eg | No Swing | `../../../src/main/java/dev/opengrim/modules/utility/NoSwing.java` | 2 | Client (on) + Both (off) — decompiled ctor shows both; spec's decrypted list missed "Both". Clears `player.handSwing`/`handSwingTicks` per tick; native Both (server-side packet cancel) needs a packet hook, behaves like Client here. | medium |
| eh | Auto Exp | `../../../src/main/java/dev/opengrim/modules/utility/AutoExp.java` | 1 | Cooldown (step 1.0, 0.0–10.0, def 0.0; decrypted suffix encrypted→null, treated as ticks). Re-issues exp-bottle use while use key held, zeroing `itemUseCooldown` to bypass the vanilla delay. | medium |
| ei | Scaffold | `../../../src/main/java/dev/opengrim/modules/movement/Scaffold.java` | 3 | Hand To Use (main_hand/off_hand/both), Hand Swing (client/server), Only When Crouching (off). Places a block from the hotbar beneath the feet via `interactBlock` on the best support face; hotbar switch via `setSelectedSlot` (auto-synced by the client). | medium |
| ej | Air Stuck | `../../../src/main/java/dev/opengrim/modules/movement/AirStuck.java` | 0 | Captures position on enable, pins `setPos` + zero velocity + zero fall distance each tick. Closest sensible behavior for "Freezes all movement". | high |
| ek | Inventory Move | `../../../src/main/java/dev/opengrim/modules/movement/InventoryMove.java` | 1 | Block Clicks (off; inert — needs a mouse-event hook). While a screen is open, mirrors physical key state (`InputUtil.isKeyPressed` + `InputUtil.fromTranslationKey`) onto forward/back/left/right/jump/sneak/sprint bindings so vanilla input keeps driving the player. | medium |
| el | Water Speed | `../../../src/main/java/dev/opengrim/modules/movement/WaterSpeed.java` | 0 | Horizontal velocity ×1.25 while touching water with movement input, capped at 0.2 blocks/tick. No decrypted settings existed; values are fixed approximations. | medium |
| em | High Jump | `../../../src/main/java/dev/opengrim/modules/movement/HighJump.java` | 3 | Mode (vanilla/grim_shulker, default grim_shulker — `.SY()` marker), Jump Height (0.01, 1.0–3.0, 1.6, Vanilla), Vertical Boost (0.01, 0.1–3.0, 1.91, Grim Shulker). Scales jump-off velocity once per jump; Grim Shulker only over `ShulkerBoxBlockEntity`. | medium |
| en | Anti Ghost | `../../../src/main/java/dev/opengrim/modules/world/AntiGhost.java` | 0 | Tracks the mining target (`interactionManager.currentBreakingPos`); when break finishes with progress ≥ 9 and the block state is unchanged, clears it client-side (`setBlockState(AIR)`); server resync guards false positives. | medium |
| eo | No Slow | `../../../src/main/java/dev/opengrim/modules/movement/NoSlow.java` | 15 | Mode (grim/matrix/matrix_2/matrix_3/ncp/grim_v3, def grim_v3 — `.SY()`), Main Hand (on), Item Options group: Food/Shield/Chargeables (on, `.Tz()`), Block Options group: Honey/Ice/Slime/Soul Sand/Berry Bush (off), Movement Options group: Sneak/Crawl (off). Restores last free horizontal speed while slowed (item-use via `DataComponentTypes.FOOD`/`Items.SHIELD`/crossbow+trident; slow blocks at feet/below). Anticheat-specific mode timings unrecoverable. | medium |
| ep | Super Firework | `../../../src/main/java/dev/opengrim/modules/movement/SuperFirework.java` | 1 | Boost Value (0.01, 1.5–3.0, def 1.5). While gliding, a firework use (use key + rocket in hand) opens a 40-tick window keeping horizontal speed ≥ Boost Value. Trigger is a local approximation of native packet detection. | medium |
| eq | Null Movement | `../../../src/main/java/dev/opengrim/modules/movement/NullMovement.java` | 0 | Keeps last unslowed horizontal speed; restores it while item-use or vanilla slow blocks (cobweb/honey/soul sand/sweet berry bush) block movement. Exact native blocker set unknowable. | medium |
| er | Speed | `../../../src/main/java/dev/opengrim/modules/movement/Speed.java` | 10 | Mode (collision/collision_target/matrix, def collision), Yaw Offset (off), Yaw Offset Mode (ground/air/constant), Distance (0.05, 0.05–2.0, 0.3 blocks), On Ground/On Jump/On Fall (0.05, 0.5–3.0, 1.1 each), Power (0.01, 0.01–0.1, 0.06), Boost Range (0.1, 0.0–2.0, 1.0 blocks), Predict (1.0, 0.0–10.0, 5.0 ticks). Collision modes: per-state horizontal velocity multiplier; Matrix: additive Power kick; Yaw Offset: lateral kick by state. Distance/Boost Range/Predict retained with decrypted values but have no tick-level equivalent; dynamic visibility wired to mode/yawOffset. | medium |
| es | No Push | `../../../src/main/java/dev/opengrim/modules/movement/NoPush.java` | 3 | Cancel Push group: Block Push (on), Entity Push (off). Entity Push reverts horizontal velocity to pre-hit value on the `hurtTime` 0→N transition (cancels knockback incl. server velocity packets). Block Push needs a collision hook → inert, documented. | medium |
| et | Anti Web | `../../../src/main/java/dev/opengrim/modules/movement/AntiWeb.java` | 3 | Mode (vanilla/flight/solid, def flight — `.SY()`), Horizontal Speed (0.01, 0.1–2.0, 0.64), Vertical Speed (0.01, 0.1–2.0, 0.64). Closest port to the decrypted tick handler: Flight rewrites velocity to input × Horizontal Speed with ±Vertical Speed on jump/sneak; Solid keeps vanilla vertical motion and unblocks horizontal movement (native replaced the cobweb collision shape instead — approximation). | high |

## Divergences / caveats

- `ee` Texture URL: native string setting (`cy`, max 2048) cannot be represented
  by Bool/Int/Double/Mode/Group; omitted and documented in-module.
- `ef` Activation Key (`cD` with `.VO(-999)`): ported as a raw key-code
  `IntSetting` since the framework already owns the module bind.
- Encrypted (not-yet-decrypted) numeric suffixes in `ed`/`eh`/`ef` were passed
  as `null`; decrypted suffixes (" blocks", " ticks") were passed stripped of
  the leading space as required.
- `eg` decrypted setting list in the spec missed the second "Both" toggle; the
  decompiled constructor was used as ground truth.
- Per-frame behaviors (camera distance, cape rendering, in-screen click
  suppression, collision-shape replacement) require render/packet/collision
  hooks the current framework does not expose; those parts are documented
  in-module as `parity: native-blocked, approximation`.
- Note: an accidental shared-index commit briefly landed the batch-6 files on
  `cursor/batch3-modules-4c24`; it was undone with `git reset --soft` (other
  agent's staged state restored exactly) and redone branch-locally via an
  isolated temp index. Batch-6 history is clean on `cursor/batch6-port-3de0`.