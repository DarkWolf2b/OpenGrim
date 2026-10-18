# Batch 4 port report (dr–eI, 18 modules)

Ported from `../../../analysis/specs/modules/{id}.md` with behavior detail recovered from
the folded decrypted sources (`../../../analysis/decompiled/payload-decrypted/sixtwo/{id}.java`).
Framework: `dev.opengrim.module.Module` + `dev.opengrim.settings.*` (Bool / Int /
Double / Mode / Group). No shared files touched. `eC` (Sprint) already existed as
the example port and was left untouched.

Conventions applied across the batch:
- Numeric chains decoded from the original builders (`cC`: Vy=step, Vw=min, Vx=max,
  VA=default, Vz=suffix; `cA`: UG/UE/UF/UI/UH). Suffixes normalized (" ticks" → "ticks").
- `cF` entity-type selectors ("Entities") and `cG` color pickers are not representable
  in the current settings API; "Entities" is approximated as a ModeSetting
  (players/hostiles/all), colors are omitted (noted per module).
- `cD` bind settings ("Activation Key") are not representable; omitted.
- Modules needing a world-render hook (the framework has no render event yet)
  compute their target set in `onTick()` and expose it via accessors, marked
  "parity: native-blocked, approximation".

| Class id | File | Settings | Implementation notes | Parity confidence |
|---|---|---|---|---|
| dr | ../../../src/main/java/dev/opengrim/modules/render/HealthIndicators.java | 3 | hearts_per_row Double(1,1,30,10), invisible, visible_through_walls; per-tick player health/absorption snapshot exposed via `getIndicators()`; drawing needs render hook | medium |
| ds | ../../../src/main/java/dev/opengrim/modules/render/EntityEsp.java | 3 | entities(mode), filled, mode(model/hitbox from ct SO(1) group); 4 color settings omitted (cG); target set exposed via `getTargets()` | medium |
| dt | ../../../src/main/java/dev/opengrim/modules/render/Nametags.java | 18 | scale Double(0.01,0.2,2,1), connected, group_items, render_for group (players), info_to_render group (name/health/absorption/distance true; hand_items/enchants/effects false), name_display_mode(display_name/nickname_only); 7 color pickers + hand-item/enchant/effect rendering omitted (cG / no render hook); "Scale" and info group children recovered from decrypted source, not in spec name list | medium |
| du | ../../../src/main/java/dev/opengrim/modules/render/Tracers.java | 7 | entities(mode), line_width Double(0.1,1,3,1), ignore_friends(true), mode group with head/chest/legs/feet anchor toggles (defaults inferred: chest only); friend color omitted; body-part sub-setting defaults are inferred (no .WE in source) | medium |
| dv | ../../../src/main/java/dev/opengrim/modules/render/Chams.java | 34 | full numeric tree decoded: entities(mode), hide_original(true), apply_to_own_player(false), effect mode(glass/water/chrome/liquid_metal), top numerics refraction/depth/frost/dispersion/light_angle(deg)/light_intensity/splay, water group (7), chrome group (3), liquid_metal group (13); visible behavior approximated with vanilla glowing outline; 8 color pickers + "Preset" sub-group (2 sub-settings had undecodable names) omitted; shader pass not reproducible without render pipeline hooks | low |
| dw | ../../../src/main/java/dev/opengrim/modules/render/CircleEsp.java | 7 | entities(mode), animated(true), circle_scale Double(0.1,0.5,5,1), speed Double(1,10,40,20), only_for_target(false), circle_texture group (default/custom), circle_style(textured/solid, default solid from SO(1)); color + texture URL omitted | medium |
| dx | ../../../src/main/java/dev/opengrim/modules/render/AntiBlind.java | 8 | all 8 disable_* toggles (default false, per .WE(false)); blindness/darkness/nausea removed per tick via removeStatusEffect; fire/freezing/pumpkin/suffocation/water overlays are HUD layers → require mixins, documented as approximation | high (effect part) / low (overlay part) |
| dy | ../../../src/main/java/dev/opengrim/modules/render/Glow.java | 2 | entities(mode), self_glow(false); applies vanilla setGlowing per tick within 64 blocks, cleared on disable; fully functional approximation of the outline | high |
| dz | ../../../src/main/java/dev/opengrim/modules/render/TargetEsp.java | 9 | speed Double(1,1,20,10), look(true), ignore_walls(false), bloom(true), bloom_amount Double(1,1,5,5), hurt_animation(false), mode group circle/soul/ghosts/crystals (defaults inferred: circle); crosshair target exposed via `getTarget()`; color omitted; sub-setting name "Soul" recovered from source ("Soul" not in spec list) | medium |
| eA | ../../../src/main/java/dev/opengrim/modules/movement/Strafe.java | 0 | no settings decoded (spec agrees); preserves horizontal speed while airborne and redirects it along look direction; approximation of native strafe | low |
| eB | ../../../src/main/java/dev/opengrim/modules/movement/Flight.java | 7 | anti_kick(false), vertical_speed_match(false), off_time Double(1,1,20,1,"ticks"), delay Double(1,1,200,20,"ticks"), speed Double(0.01,0.01,3,0.05), mode(abilities/velocity), anti_kick_mode(normal/packet/none); abilities mode uses PlayerAbilities, velocity mode composes input motion; anti-kick: downward nudge or `PlayerMoveC2SPacket.OnGroundOnly`; "Delay" setting found in source but missing from spec name list | medium |
| eC | ../../../src/main/java/dev/opengrim/modules/movement/Sprint.java | 1 | already ported as the framework example (allow_while_hungry); registry description differs slightly ("Automatically sprints"); full decrypted tree (Keep Sprint, Motion %, Motion When Hurt %, Hurt Time, Ignore/Stop On groups) not ported — left for the owner to extend | medium |
| eD | ../../../src/main/java/dev/opengrim/modules/movement/FastBridge.java | 3 | only_when_holding_block, only_when_looking_at_block, only_when_moving_backwards (all false); forces the sneak input (via `Input.setPlayerInput`) the tick before the player's velocity would carry them off a block edge; edge test is own design | medium |
| eE | ../../../src/main/java/dev/opengrim/modules/movement/Parkour.java | 2 | only_if_w_pressed(false), edge_distance Double(0.001,0.001,0.1,0.001); presses the jump input when the position one tick ahead (plus tolerance) is air; jump forced via `Input.setPlayerInput` (1.21.11 replaced the public `jumping` field with the PlayerInput record) | medium |
| eF | ../../../src/main/java/dev/opengrim/modules/combat/SpearReach.java | 1 | return_delay Double(10,0,1000,50,"ms") (suffix constant undecodable, "ms" inferred from siblings); "Allowed Items" (item-list setting) omitted; swaps the hotbar to a slot holding an item with `DataComponentTypes.ATTACK_RANGE` while a crosshair target exists, restores after the delay via `interactionManager.syncSelectedSlot()` | low |
| eG | ../../../src/main/java/dev/opengrim/modules/combat/SpearLunge.java | 5 | change_armor(true), restore_armor(true), start_flying_after_restore(true), return_back(true), return_delay(10,0,1000,50,"ms"); "Activation Key" bind omitted; lunge impulse applied on release of a charged spear use (isUsingItem edge); armor swap stubbed | low |
| eH | ../../../src/main/java/dev/opengrim/modules/movement/SpearDash.java | 7 | dash_direction(movement/direction, default movement from SO(0)), given_direction Double(1,-180,180,0,"deg"), change_armor(true), restore_armor(true), start_flying_after_restore(true), return_back(true), return_delay(10,0,1000,50,"ms"); "Activation Key" bind omitted; dash impulse on release of a charged spear use, direction from velocity yaw or fixed angle; armor swap stubbed | low |
| eI | ../../../src/main/java/dev/opengrim/modules/combat/SpearDoubleTap.java | 4 | change_armor(true), armor_change_timing(after_spear_hit/before_mace_hit), return_back(true), return_delay(10,0,1000,50,"ms"); detects a spear swing via attack-cooldown reset, fires the second attack when the cooldown refills; armor choreography stubbed (timing setting ported only) | low |

## Spec gaps found

- `eB` (Flight): the spec's decrypted name list misses the numeric setting
  "Delay" (step 1, min 1, max 200, default 20, suffix " ticks").
- `dt` (Nametags): the spec name list misses the numeric "Scale"
  (step 0.01, min 0.2, max 2.0, default 1.0) and the "Name" toggle inside
  "Info To Render".
- `dz` (Target ESP): the spec name list misses the mode sub-setting "Soul"
  and the top-level toggles "Look" and "Bloom" (it lists "Bloom Amount" only).
- `eF`/`eG`/`eI`: the "Return Delay" suffix constants (`feInP`, `SOwbe`, `GGWXd`)
  could not be decoded; " ms" was chosen because `eH` uses `" ms"` for the
  identical chain.
- The framework has no render event and no Bind/Color/Entity-selector/Text
  setting types; render modules therefore publish computed state through
  accessors and the color/bind/text settings are dropped.
