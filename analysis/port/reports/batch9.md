# Batch 9 port report

Modules from `../../../analysis/specs/batch9.txt` (18 entries; `fr` Kill Aura was already
ported as the example module and was left untouched). All behavior bodies in
the original are `private native`; every port below is an original clean-room
implementation of the registry description with the decrypted setting names,
marked "parity: native-blocked, approximation" where exact behavior is
unknowable. Settings API: `BoolSetting` / `IntSetting` / `DoubleSetting` /
`ModeSetting` / `GroupSetting`. Numeric constraints come from the recovered
builder chains (`UG=step, UE=min, UF=max, UI=default, UH=suffix`) where they
were decrypted; otherwise sensible defaults were chosen and flagged.

| ClassId | Module | File (../../../src/main/java/dev/opengrim/modules/...) | Settings | Notes | Parity confidence |
|---|---|---|---|---|---|
| fh | Attribute Swap | utility/AttributeSwap.java | 2 | Swaps to hotbar slot with best attack-damage attribute (via `ATTRIBUTE_MODIFIERS` component) while hostiles are near; returns to target slot after return delay. Only `Return Delay` chain recovered (0..1000, d50); its suffix was native-encrypted, assumed " ms". `Target Slot` typed as hotbar Int. | medium |
| fi | Shield Block | combat/ShieldBlock.java | 0 | No settings constructed in the original. Selects a shield from the hotbar while the use key is held and a non-shield item is equipped. Exact trigger condition unknown. | medium |
| fj | Projectile Aim Bot | combat/ProjectileAimBot.java | 5 | Ballistic aim (speed 3.0/tick, gravity 0.05/tick^2, low-arc solution) at nearest player/monster with velocity lead; only acts while holding bow/crossbow/trident/pearl/snowball/egg. `Fill Color`/`Outline Color` are render-group labels ported as empty GroupSettings. | low |
| fl | Auto Potion | combat/AutoPotion.java | 12 | Throws hotbar splash potion below health threshold; per-effect gates (instant health / regeneration / strength / fire resistance), no-effect guard via status checks, per-potion delay, throw angle. Names recovered but numeric chains never decrypted — defaults chosen. | low |
| fm | Pearl Chaser | movement/PearlChaser.java | 2 | When health below threshold, selects pearl from hotbar, faces nearest player, `interactItem`. `ignore_friends` stored but inert (framework has no friend registry yet). | low |
| fn | Auto Clicker | utility/AutoClicker.java | 12 | Left/right clicking at CPS while respective key held; jitter, exhaust simulation, screen/inventory gating, conditions group (weapon check via `TOOL` component, not-using-item). CPS ranges are defaults (chains not decrypted). | low |
| fo | Anti Bot | utility/AntiBot.java | 20 | Heuristic bot detection: ping (player-list entry), name charset, ticks-existed, touched-ground, on/off-ground modes, sleep, dead, swing, movement, velocity; UUID set exposed via `isBot`. Sound check present as setting only (no audio event access from a tick module). | medium |
| fp | Backtrack | combat/Backtrack.java | 9 | Maintains per-player rewind trails pruned to the latency window; `delayedPosition(UUID)` exposed. Real packet delay needs a network mixin the framework lacks — documented in javadoc. Recovered chains: min-max distance (0..10, d2.0, " blocks"), latency (0..2500, d100, " ms"), track delay (0..2000, d500, " ms"), knock delay (0..9000, d2500, " ms"). | low |
| fq | Hitbox | render/Hitbox.java | 9 | Visual expansion needs a render hook; approximated by raycasting against expanded boxes (`ProjectileUtil.raycast`, +0.1) and exposing `expandedTarget`. Cobweb-holding disable honored. | low |
| fr | Kill Aura | combat/KillAura.java (pre-existing example) | 4 | Already ported before this batch; not modified. | high (pre-existing) |
| fs | Knockback Displacement | movement/KnockbackDisplacement.java | 4 | On the tick damage is taken, re-aims the local velocity impulse along dynamic (facing) or fixed angle. Server-side knockback rewrite needs a packet mixin — documented. | low |
| ft | Auto GApple | utility/AutoGApple.java | 8 | Eats golden (optionally enchanted) apples below health threshold; eat-until modes (eat one / reaches threshold / full health), player-away radius gate. | low |
| fu | Criticals | combat/Criticals.java | 2 | Vanilla mode: mini-hop (velY 0.15) on ground before a fully charged attack. Packet/web-lag/custom modes inert (no packet-send hook); lag delay (0..2000, d100, " ms") stored for when it exists. | low |
| fv | Auto Armor | utility/AutoArmor.java | 6 | Equips best remaining-durability piece per slot via player-screen-handler clicks; elytra-ignored and minimum-durability gates. Client/silent modes both click silently; GUI open/close timings recorded but inert. Piece scoring is durability-based (original ranking unknown). | medium |
| fw | Auto Drain | world/AutoDrain.java | 9 | Crosshair on cobweb → scans adjacent source blocks for water/lava, faces it and scoops with a glass bottle; auto/manual switch with tick delay. Exact original interaction unknowable. | low |
| fx | Auto Totem | combat/AutoTotem.java | 12 | Swaps totem into off-hand (screen-handler slot 45) when health % below threshold; hotbar-source option, random pick, return-original-slot dance, swap cooldown. GUI choreography settings (open/close delays, block input) inert. | medium |
| fy | Totem Refill | combat/TotemRefill.java | 2 | Refills off-hand from inventory as soon as the totem pops; optional replace-current-item. `totem_slot` typed as Int (0..45). | medium |
| fz | Auto Jump Reset | movement/AutoJumpReset.java | 3 | Jumps (velY 0.42) on the hurt tick to cut knockback; fire-cancel and only-from-players gates, percent chance. Chance chain recovered from decrypted source (step 1, 1..100, d100); suffix assumed "%". | high |

## Specs that were too thin to port faithfully

- **fj Projectile Aim Bot, fl Auto Potion, fm Pearl Chaser, fn Auto Clicker,
  fp Backtrack, fq Hitbox, fs Knockback Displacement, ft Auto GApple,
  fu Criticals, fw Auto Drain**: setting names decrypted but the numeric
  builder chains never folded, so min/max/default values (and some suffixes)
  are designer-chosen defaults, flagged in each javadoc.
- **fi Shield Block**: zero settings, zero decrypted names; behavior inferred
  from the registry description and the item/block-hit imports.
- **fq Hitbox, fp Backtrack, fs Knockback Displacement, fu Criticals**:
  core behavior (world-render outline, packet delay/rewrite, position-packet
  replay) cannot be expressed from a tick module without render/network
  mixins; the framework hooks needed are noted in each javadoc so the ports
  can be upgraded when those hooks land.
- **fx Auto Totem / fv Auto Armor**: inventory GUI choreography
  (auto-open/close delays, block input) is inert because the ports use direct
  player-screen-handler clicks instead of opening screens.
