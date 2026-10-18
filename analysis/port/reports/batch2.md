# Batch 2 port report (dH–dY, 18 modules)

Branch: `cursor/port-batch2-modules-b9a1`
All files under `../../../src/main/java/dev/opengrim/modules/`.
APIs were verified against `../../../analysis/jars/yarn-1.21.11+build.6.tiny` before use
(KeyBinding has no `wasPressed()` in 1.21.11; `PlayerEntity.resetLastAttackedTicks`
no longer exists — `ticksSinceLastAttack` field instead; `PickaxeItem` was removed
in favor of `ItemTags.PICKAXES`; `Slot.x/y` are public fields).

| ClassId | Module | File | Settings | Implementation notes | Parity confidence |
|---|---|---|---|---|---|
| dH | No Sign Screen | modules/utility/NoSignScreen.java | 0 | Closes `AbstractSignEditScreen` as soon as it opens. | high |
| dI | Nuker | modules/world/Nuker.java | 13 (range, delay, mining_speed, block_to_mine[from_list, selection_key], options[through_walls, mine_flat, avoid_lava, check_raycast], render_block, filled, mine_in_screens) | Nearest eligible block in range, dig via attackBlock + updateBlockBreakingProgress with speed multiplier; selection key records blocks for "from list". Hidden numerics Range (0.1/2–6/4.5 blocks) and Delay (1/0–20/0 ticks) recovered from folded ctor. Outline/Fill Color settings (cG) omitted — no color setting type in framework. | medium |
| dJ | Mouse Tweaks | modules/utility/MouseTweaks.java | 7 (rmb_tweak, lmb_tweak_with_item, lmb_tweak_without_item, wheel_tweak, wheel_search_order, wheel_scroll_direction, scroll_item_scaling) | RMB drag places one item per slot, LMB drag picks up / distributes via clickSlot; slot under cursor computed from HandledScreen x/y (reflection — the original used a mixin accessor for the same fields). Wheel behavior needs a scroll callback the tick API lacks → wheel settings registered but inert. | low |
| dK | Auto Lever Replace | modules/world/AutoLeverReplace.java | 4 (work_with[auto_trap, auto_web], ignore_walls) | Breaks levers adjacent to a trapdoor (auto_trap) or cobweb (auto_web) within reach; 5-tick cooldown between breaks. Defaults of the cw toggles were not in the decrypt output; chose false. | medium |
| dL | No Entity Clip | modules/world/NoEntityClip.java | 1 (only_with_pickaxe) | While attack key held and crosshair hits an entity, mines the block behind it via direct block raycast + digging state machine. | medium |
| dM | Auto Market | modules/utility/AutoMarket.java | 2 (state_key, add_rule_key) | Server market protocol is native-blocked. Approximation: rules record main-hand item ids; while active, periodically clicks matching slots in any open container screen (skipping player inventory). | low |
| dN | Slot Lock | modules/utility/SlotLock.java | 10 (locked_slots group → slot_0..slot_8) | While a locked hotbar slot is selected, `dropKey.setPressed(false)` suppresses the drop signal (best effort, depends on tick order). Original used a cz action + slot picker; framework has no action setting → nine per-slot toggles instead. | medium |
| dO | Hotbar Restorer | modules/utility/HotbarRestorer.java | 6 (save_key, restore_key, options[announce, include_offhand], auto_save) | Snapshots/restores the hotbar via GLFW-polled keybind settings; auto_save snapshots on enable. All six original setting names were still encrypted at spec time; names/defaults are designer discretion per port notes. | medium |
| dP | Block Piercer | modules/world/BlockPiercer.java | 1 (entities mode: all/hostiles/passive/players) | On use-key press with a block in hand and an entity under the crosshair, places against the block face behind the entity (world raycast ignores entities natively). Original "Entities" was a cF entity-type list; no framework equivalent → reinterpreted as a mode filter. Vanilla still processes its own entity interaction on the same click. | low |
| dQ | Hit Sounds | modules/utility/HitSounds.java | 5 (hit_sound mode custom/one..six, volume_mode, sound_volume %, cancel_original_sound) | Plays an orb-pickup ding (pitched per mode) on attack press with an entity under the crosshair. Recovered from folded ctor: sound picker modes Custom/One..Six (default One), Sound Volume 1/0–100/70 "%". "Sound URL" (cy string setting, max 2048) omitted — no string setting type in framework; cancel_original_sound can't actually cancel the server-sent hurt sound. | medium |
| dR | Click Action | modules/utility/ClickAction.java | 4 (pearl_key, firework_key, potion_key, return_delay) | Bound keys select the matching hotbar slot (pearl/firework/potion item), use it via interactItem, restore the previous slot after Return Delay (10/0–1000/50 ms, suffix guessed " ms" — original suffix constant unresolved). Keys stored as IntSetting codes; framework has no bind setting. | medium |
| dS | Hand No Clip | modules/combat/HandNoClip.java | 3 (ignore group [blocks mode all/specified], work_on group) | On attack press, attacks the nearest entity in a ~30° look cone within reach when the crosshair is blocked by a block and line of sight is clear. "Specified" block list has no framework setting → behaves like "all"; work_on is an empty container. | low |
| dT | Multi Task | modules/utility/MultiTask.java | 0 | Tick-level approximation: re-pressing use while using an item triggers the other hand's usable item; after a use finishes with use key held, restarts it. True dual-use needs packet separation. parity: native-blocked, approximation. | low |
| dU | Auto Fish | modules/utility/AutoFish.java | 8 (anti_break, auto_cast, recast_delay, catch_delay, throw_delay, splash_detection_range, splash_detection, in_gui) | Bite detection via bobber y-dip (no public caughtFish getter in 1.21.11 — field is private); splash_detection_range gates detection distance. All numerics recovered from folded ctor verbatim (recast 1/0–100/15 ticks, catch 1/0–60/5, throw 1/0–60/5, splash range 0.1/0–10/5 blocks). | medium |
| dV | Custom FOV | modules/render/CustomFov.java | 1 (fov 1/30–150/90 deg) | Overrides `options.getFov()` while enabled, restores on disable. FOV numeric recovered from folded ctor (spec generator had missed it). | high |
| dW | Freecam | modules/render/Freecam.java | 4 (speed 0.1/1–10/3, rotate, disable_on_damage, render_hand) | Switches perspective to third-person-back while enabled; disable_on_damage drops the module on hurt. Real camera detach needs render/entity hooks. Hidden Speed numeric recovered from folded ctor. parity: native-blocked, approximation. | low |
| dX | No Miss Delay | modules/combat/NoMissDelay.java | 0 | Restores pre-miss `ticksSinceLastAttack` (reflective — no public API in 1.21.11) while the cooldown recovers after a missed attack. parity: native-blocked, approximation. | low |
| dY | Anti Invisible | modules/render/AntiInvisible.java | 1 (entities mode all/players/hostiles) | Clears the client-side invisibility flag every tick for filtered entities; server re-sync is re-cleared. Original "Entities" was a cF list → mode filter. | medium |

## Cross-batch notes

- Spec generators missed several `cC` numeric settings in this batch (dI Range/Delay,
  dU's four numerics, dQ's Sound Volume, dV FOV, dW Speed); all were recovered from
  `../../../analysis/decompiled/payload-decrypted/sixtwo/<id>.java` and ported with their
  exact step/min/max/default/suffix.
- Settings types with no framework equivalent, omitted with javadoc notes:
  color settings (cG, dI), string settings (cy, dQ Sound URL), entity/block-list
  settings (cF, dP/dS/dY), bind settings (cD .VO(-999)) → IntSetting key codes.
- No decompiled code was copied; all behavior is original clean-room implementation
  from observed descriptions/recovered settings.