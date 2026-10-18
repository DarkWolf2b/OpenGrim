# Batch 5 port report (eJ..eb — crystal/mace PvP + world interaction modules)

Ported per `../../../analysis/specs/batch5.txt`. All Yarn 1.21.11 API references were
verified against `../../../analysis/jars/yarn-1.21.11+build.6.tiny` before use
(`interactItem`/`interactBlock` return `ActionResult`, `InputUtil.isKeyPressed(Window, int)`,
`LivingEntity.isGliding()` (was `isFallFlying`), `PlayerInventory.getSelectedSlot()/setSelectedSlot()`,
`MinecraftClient.blockBreakingCooldown`, `ScreenHandler.slots/syncId/getSlot`,
`Screen.getTitle()`, `Monster` marker filter, `getHungerManager()`).

Settings counts include group children (GroupSetting.add). Groups without a
decrypted name were given our own snake_case id and are flagged in the notes.

| Class id | File path (under `../../../src/main/java/dev/opengrim/modules/`) | Settings | Implementation notes | Parity confidence |
|---|---|---|---|---|
| eJ Auto Trap | `world/AutoTrap.java` | 7 | Places obsidian (or any held `BlockItem` when `alternative_block`) around the nearest player/`Monster` target at feet/head (`double_place`); synthetic `BlockHitResult` on a solid neighbor face via `interactBlock`; per-tick budget, `trap_mode`/`place_mode` option names are our own (encrypted in original); `blocks` selector reduced to a toggle. | medium |
| eK Auto Web | `world/AutoWeb.java` | 5 | Same synthetic-hit placement with `Items.COBWEB`; `placement_options` group (surround / upper_surround / prediction_ticks), optional velocity-based position prediction. Child toggle defaults are our own. | medium |
| eM Double Tap | `combat/DoubleTap.java` | 0 | Attacks the nearest `EndCrystalEntity`; when the last-attacked crystal pops within a 3-tick window, fires the follow-up attack immediately (aerial D-tap). Window value is our own. | medium |
| eN Mace Swap | `combat/MaceSwap.java` | 5 | Detects a mace swing via attack-cooldown drop, requires `fallDistance >= windburst_threshold`, swaps to a hotbar wind charge and uses it, swaps back after `return_delay` (ms, builder recovered: step 10 / 0–1000 / 50). `windburst_threshold` range is our own (no builder recovered). | medium |
| eO Auto Pearl Catch | `movement/AutoPearlCatch.java` | 4 | While falling, throws a hotbar wind charge downward (`interactItem` + pitch 75), returns to the pearl/original slot after `return_delay` (builder recovered: 10/0–1000/50, no suffix). `wind_charge_delay` range is our own. Unbound activation key = auto-arm (approximation). | medium |
| eP Mace Aura | `combat/MaceAura.java` | 12 | Mace-only aura: target mode players/mobs/all (`Monster` filter), priority distance/health, ignore filters (friends structural, naked = no chest/head armor, damage-tick via `hurtTime`), optional view change aiming at eye pos (`attack_point`) and FOV limit. `hit_distance`, `min_fall_distance` ranges are our own. `change_armor` structural. | medium |
| eQ Mace Elytra Target | `combat/MaceElytraTarget.java` | 8 | While gliding (`isGliding`, 1.21.11 rename), boosts toward the nearest player with a hotbar firework on cooldown (`firework_use_mode` auto/on-bind with `firework_key` bind), smashes with the mace when above the target. Numeric ranges are our own; `hit_mode` group ported as armor_swap/force_smash toggles. | low |
| eR Wind Hop | `movement/WindHop.java` | 2 | On activation-key edge (`InputUtil.isKeyPressed` with GLFW-style keycode, -999 = unbound → triggers once on toggle), selects a hotbar wind charge, pitches down and uses it. | medium |
| eS Auto Stun Slam | `combat/AutoStunSlam.java` | 6 | Finds a shielding player (`isUsingItem` + `getActiveItem().isOf(Items.SHIELD)`), stuns with repeated hits, swaps to mace and slams when `fallDistance >= min_fall_distance`, returns to the original slot after `return_delay` ms. `chance`/`min_fall_distance` ranges are our own; `change_armor` structural. | low |
| eT Shield Drain | `combat/ShieldDrain.java` | 3 | Attacks the nearest shielding player; `click_mode` vanilla respects attack cooldown, blatant hits `hit_per_tick` times per tick. `hit_per_tick`/`min_fall_distance` ranges are our own. | medium |
| eU Air Anchor | `world/AirAnchor.java` | 2 | When holding a respawn anchor with no block crosshair hit, synthesizes a `BlockHitResult` against the nearest solid neighbor of the aimed air block and places; `double_anchor` places a second one above; `chance` gates the trigger. | low |
| eV Auto Crystal | `combat/AutoCrystal.java` | 10 | Breaks the nearest `EndCrystalEntity` in reach on `break_delay`; places held end crystals on top/sides of blocks adjacent to the nearest hostile on `place_delay` (builders recovered: 1/0–10/0 " ticks" both). Key-gated via `activate_on_key`/`activation_key`. `spoof_cps`, `no_count_glitch`, `no_bounce`, `stop_on_kill`, `damage_tick`, `predict_id` are structural flags (no framework counterpart yet). | medium |
| eW Auto Hit Crystal | `combat/AutoHitCrystal.java` | 8 | Crystal-breaking only: nearest `EndCrystalEntity` per `place_delay`/`switch_delay` cadence, per-sequence hit limit (`limit_crystal` single/double/infinite, `.SO(2)` → default infinite), optional `switch_back_to_slot`, `cancel_on_use`. Decrypted `activation_key` default of 1 ported as-is. `work_with_items` structural. | medium |
| eX Anchor Macro | `world/AnchorMacro.java` | 14 | Hold-key state machine: switch to anchor (switch_delay) → place at crosshair face (anchor_delay) → charge with glowstone dust (charge_delay) → detonate (detonate_delay), returning to the original slot. `safe_anchor` blocks detonation near self; `safe_anchor_hold` waits instead of aborting. The group holding "Before Charge"/"After Charge" has an encrypted name → registered as `charge_phase` mode; `detonate_item` selector reduced to a toggle; `diagonal` structural. | low |
| eY Crystal Optimizer | `combat/CrystalOptimizer.java` | 0 | Attacks the `EndCrystalEntity` closest to the nearest hostile target (inverse-distance damage proxy) instead of the nearest crystal. | low |
| eZ Auto Double Hand | `combat/AutoDoubleHand.java` | 6 | Keeps the offhand stocked: on empty offhand, moves a totem from hotbar (or main inventory with `totem_on_inventory`) into slot 45 via two `clickSlot` PICKUPs. `check_players_look` = dot-product look check; `double_hand_after_pop` = nearby crystal disappeared since last tick. `totem_item` selector reduced to a toggle; `sword_predict` structural. | low |
| ea No Break Delay | `world/NoBreakDelay.java` | 1 | Pins `MinecraftClient.blockBreakingCooldown` to `destroy_delay` (0) each tick — matches the observable "removes destroy delay" behavior. | high |
| eb Chest Stealer | `utility/ChestStealer.java` | 5 | While a container screen is open (chest/shulker handler per `steal_from`), shift-clicks (`QUICK_MOVE`) container slots into the inventory on a 2-tick cadence; `items_to_steal` all/selected (selected ≈ valuable-item list, approximated); durability filter via `getDamage()/getMaxDamage()`. `check_storage_title` mode is registered but inert — "Storage Title" is a native string input with no counterpart in the settings framework (no StringSetting). | medium |

## Specs too thin to port faithfully (divergences)

- **eM Double Tap, eY Crystal Optimizer** — no decrypted settings and no
  recoverable builders at all; behavior inferred from the registry description
  only (zero-arg approximations).
- **eX Anchor Macro** — 18 constructed settings but most builder chains are
  folded/unnamed; group names encrypted. Two cu children of the top group had
  unrecoverable names and were dropped; "Before/After Charge" group name
  invented as `charge_phase`; `diagonal` registered but unused.
- **eQ Mace Elytra Target** — no numeric builders recovered; `hit_mode` children
  (armor_swap/force_smash) ported as toggles inside a group rather than modes.
- **eb Chest Stealer** — `storage_title` (string input) cannot be represented by
  the framework's setting types; the title match mode is registered but inert.
  The second `steal_from` option name was only recoverable to its initial "S…"
  ("shulker" guessed).
- **eJ Auto Trap** — `Blocks` is a native block-selector; reduced to a toggle.
  Trap/place mode option names invented (`full/feet/face`, `single/multi`).

All implementations are clean-room (no sixtwo source text reused); decompiled
classes were consulted for structure only.
