# Batch 7 port report (eu, ev, ew, ex, ey, ez, fA–fL)

Batch: `analysis/specs/batch7.txt` (18 modules).
Category evidence: original `gh` constants — `eu`–`ez` = `gh.xgeEn` (movement),
`fA`–`fL` = `gh.xwjCw` (combat). Files under
`../../../src/main/java/dev/opengrim/modules/{movement,combat}/`.

Framework constraints that shaped the ports (all API names verified against
`../../../analysis/jars/yarn-1.21.11+build.6.tiny`):

- The rebuild framework dispatches only `onTick()`/`onEnable()`/`onDisable()`
  (END_CLIENT_TICK). There is no event bus (no packet/attack/raycast/collision
  hooks), so packet-, attack- and raycast-driven modules are tick-based
  approximations, each flagged `parity: native-blocked, approximation`.
- Yarn 1.21.11 gotchas confirmed: `Entity` has NO `getPos()`/`getWorld()` — use
  `getX/getY/getZ` and `MinecraftClient.getInstance().world`;
  `SwordItem`/`MiningToolItem` no longer exist — weapon checks use
  `ItemStack.contains(DataComponentTypes.WEAPON)`; gliding is
  `isGliding()`; `resetLastAttackedTicks` is now
  `resetTicksSinceLastAttack()`; `jumpingCooldown`/`hurtTime`/`fallDistance`
  are private (no public setters/getters beyond `getJumpCooldown()`).
- `cz` action settings (slot pickers / buttons) have no counterpart in the
  rebuild settings API and are not ported (documented per module below).

| Class id | File (../../../src/main/java/dev/opengrim/modules/...) | Settings | Implementation notes | Parity confidence |
|---|---|---|---|---|
| eu Trident Boost | `movement/TridentBoost.java` | 2 (`boost_cooldown` 1.0/0–20/10 "ticks", `allow_outside_water_or_rain` false; both from decompiled `eu.java` — spec missed the numeric) | While channeling a trident, re-applies look-direction impulse on a cooldown unless wet and setting disallows. Tick approximation of riptide. | medium |
| ev Collision Long Jump | `movement/CollisionLongJump.java` | 0 | On horizontal collision against a `BoatEntity` while airborne, applies jump impulse (0.45). | medium |
| ew No Jump Delay | `movement/NoJumpDelay.java` | 0 | While jump key held, on ground and `getJumpCooldown() > 0`, re-applies `getJumpVelocity()` (cooldown has no public setter). | medium |
| ex Safe Walk | `movement/SafeWalk.java` | 1 (`release_on_forward` false) | Predicts next step from velocity; if block below would be air, zeroes horizontal velocity. Interpretation of "Release On Forward": suspend protection while forward is pressed. | medium |
| ey Blink | `movement/Blink.java` | 5 (`auto_disable`, `cancel_key`, `disable_packets`, `disable_on_velocity`, `pulse_packets`) | Records withheld motion queue; auto-disable after 30 s; velocity-spike disable; pulse clears queue. Actual packet suppression needs a network mixin (javadoc notes this) — the framework has no packet hook. | low |
| ez No Fall | `movement/NoFall.java` | 0 | While falling: `player.onLanding()` + sends `PlayerMoveC2SPacket.PositionAndOnGround(…, onGround=true)` — classic on-ground trick. | medium |
| fA Potion Refill | `combat/PotionRefill.java` | 3 (`delay` 5.0/0–1000/50 "ms", `hover`, `randomize_slots`); `slots_to_refill` action omitted | Detects consumed potion stacks in hotbar, swaps a replacement from main inventory after delay via `clickSlot(SWAP)`. `hover` interpreted as "only refill selected slot". | medium |
| fB Auto Shield Break | `combat/AutoShieldBreak.java` | 17 (4 groups + 13 values; `stun_chance` range/default guessed — no builder recovered) | Attacks nearest blocking player within range on a CPS gate; `spoof_cps` resets attack ticks; `disable_single` self-disables after one break. Switch-delay/return-delay/cancel-use options retained as settings without native-side behavior. | low |
| fC Velocity | `combat/Velocity.java` | 3 (`horizontal`/`vertical` 1.0/0–100/100 "%", `disable_in_fluid`) | Detects knockback as a sudden velocity spike and rescales applied velocity once per hit. Original rewrites the inbound S2C packet — needs a network hook for exactness. | medium |
| fD Uncharge Block | `combat/UnchargeBlock.java` | 5 (group `items_to_use` {`all_items`, `only_weapons`, `specified_slots`} + `threshold` 0.01/0.25–1.0/0.9); slot action omitted | Releases the attack key while attack charge is under threshold (weapon filter via `DataComponentTypes.WEAPON`). | medium |
| fE No Miss | `combat/NoMiss.java` | 5 (group `items_to_use` {…} + `ignore_friends`); slot action omitted | Releases attack key when crosshair is not on a live entity within reach. Prevents the swing instead of cancelling it (no attack hook). | low |
| fF Trigger Bot | `combat/TriggerBot.java` (pre-existing example, left untouched) | 3 | Already ported as the batch-7 reference example; no changes made. | n/a (pre-existing) |
| fG W-Tap | `combat/WTap.java` | 5 (`only_on_ground`, `sneak_tap`, `tap_start` 120 "ms", `tap_stop` 450 "ms", `tap_delay` 0 "ms") | Detects attack via cooldown drop, releases forward (or presses sneak in SneakTap mode) between start/stop windows, restores after. NOTE: `tap_delay` is the recovered 6-char-name numeric (step 10, 0–2500, default 0, "ms"); its display name could not be re-identified — "Tap Delay" is the closest decrypted name. | low |
| fH Aim Assist | `combat/AimAssist.java` | 26 (3 modes, 15 bools, 6 doubles, 2 groups) | Smooth yaw/pitch approach toward best target inside FOV cone, with jitter, prediction offset, switch/locked target retention, health/distance priority. Numeric ranges recovered from decrypted builders (range 3–10/6, fov 10–360/180, speeds 0.1–20/1, prediction ticks 1–5/2, randomization 0–100/5). Target-selector widget, colors, slot lists not portable to the rebuild settings API. | medium |
| fI Auto Logout | `combat/AutoLogout.java` | 12 (`distance` 1.0/1–100/16 "blocks", group `logout_from` {pearls, snowballs, arrows, fish_rods, potions}, `ignore_friends`, `invisible`, `logout_on_key`, `logout_key`, `disable_on_logout`); `disconnect_message` string setting omitted (no string setting type in the API) | Disconnects via `ClientConnection.disconnect(Text)` when a player or watched projectile is within range. Projectile ownership unresolvable (no public `getOwner()` in 1.21.11) — any watched projectile counts. | medium |
| fJ Target Margin | `combat/TargetMargin.java` | 5 (`margin` 0.01/0–2/0 "blocks", `ignore_friends`, `disable_if_holding_cobweb`, `only_for_slots`, `disable_if_in_cobweb`); slot action omitted | Retargets `client.targetedEntity` each tick using margin-expanded `Box.raycast` when vanilla targeting missed. `only_for_slots` conservatively disables the margin while enabled (slot list not portable). | medium |
| fK Reach | `combat/Reach.java` | 2 (`entity_value` 0.01/3–6/3 "blocks", `blocks_value` 0.01/4.5–6/4.5 "blocks"; values/ranges recovered from decompiled `fK.java` — spec showed 0 constructed settings) | Exposes `getEntityReach()`/`getBlockReach()` (mirrors the original's creative-mode 3.0/5.0 overrides) and re-targets the crosshair with extended reach; full parity needs a GameRenderer hook. | low |
| fL Auto Tool | `combat/AutoTool.java` | 3 (`cooldown` 10/0–1000/50 "ms", `return_back`, `return_delay` 10/0–1000/50 "ms") | While `interactionManager.isBreakingBlock()`, swaps to the hotbar slot with best `getMiningSpeedMultiplier`/`canHarvest` for the targeted block via `setSelectedSlot` + `syncSelectedSlot`; optional delayed switch-back. | medium |

## Specs too thin to port faithfully

- `fH` (Aim Assist): 27 constructed settings but the generator only resolved
  names + booleans/modes; numeric builder chains were partially native-built.
  Mode names (aim point / target mode / priority) are reconstructed guesses.
- `fB` (Auto Shield Break): `stun_chance` decrypted by name only — no builder
  chain; range/default are guesses. Group child names partially unresolved.
- `fG` (W-Tap): one timing numeric (step 10, 0–2500 "ms", default 0) has an
  encrypted 6-char display name not present in the decrypted name list; ported
  as `tap_delay` with a javadoc note.
- `fI` (Auto Logout): `disconnect_message` is a string setting — the rebuild
  settings API has no string type; omitted.
- `fK` (Reach): spec listed 0 constructed settings; the decompiled source
  shows two `cC` numerics with ranges (3–6 and 4.5–6) and creative-mode
  overrides, which were recovered manually.
- `fE`/`fD`/`fA`/`fJ`: slot-picker `cz` actions have no equivalent in the
  rebuild settings API and were omitted.

## Clean-room statement

No decompiled sixtwo source text was copied. All implementations are original
Java written from the registry descriptions, decrypted setting names/values,
and observed behavior; every referenced Yarn API name was verified against
`yarn-1.21.11+build.6.tiny`. Not compiled per task constraints (no gradle).
