# Fake Player (sixtwo.cX) — handler-derived behavior spec

Class: `sixtwo/cX` · display name **Fake Player** (module id 72), category
`gh.qBzlZ`, `aZS(false)` (no hotkey). Superclass `gg`. **Zero native methods
declared** — pure-Java payload class; no image addresses (0x18xxxxxxx) to
cite. Evidence cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/cX.java` (1541 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/cX.java` — fully decompiled
   with folded literals.
2. Inner classes `cX$ss` (use-mode enum: `uksqJ` idle / `RymlV` shield /
   `vNDXP` custom item) and `cX$st` (UseAction lookup table).
3. `analysis/specs/modules/cX.md` structural spec.
4. Yarn mappings: `OtherClientPlayerEntity`, `LivingEntityAccessor.
   callSetLivingEntityFlag`, `ItemCooldownManager`, shield/axe items.
5. Helpers: `cy` string setting (`Un(max)`), `cJ` boolean, `gg` base, `jc`
   item checks (`bzq/bzw/bzo` semantics unrecovered), `jg.bBL` distance check,
   `jw` WEAPON-style item accessor (`disableBlockingForSeconds()`).

## Runtime model

- Module drives a **fake `OtherClientPlayerEntity`** (`oZvjF`, static field
  [85]) that mirrors the local player and can be scripted to hold/use items.
- **`aaj()`** [393] — on-enable: spawns via `aak()`.
- **`aak()`** [474–532] — creates the fake player: random UUID + `Name`
  setting, copies position/rotation, syncs yaw/pitch/body-yaw/head-yaw; if
  **Copy Inventory** — copies armor slots (DES int ~**32446**, likely slot
  group count 3→4) and both hands; adds status effects **REGENERATION**
  (duration DES int ~**22049**, amplifier **2**), **ABSORPTION**
  (duration DES int ~**20063**, amplifier **4**), **RESISTANCE**
  (duration DES int ~**20063**, amplifier **1**).
- **`aat(gH.th)`** [660–962] — pre-motion tick, the state machine (below).
- **`aau(hw.tv)`** [1319–1441] — attacked event for the fake player (below).
- **`aaB()`** [533] — removes the entity
  (`RemovalReason.DISCARDED`); **`YO()`** [1510] — unregister + remove.

## Per-handler semantics

- `aat` state machine:
  - mode `uksqJ` (idle) → `stopUseItem`.
  - mode `RymlV` (shield) → shield logic: holds shield up; clears use when
    cooldown is active (`isUsingItem` + cooldown checks).
  - mode `vNDXP` (custom item) → captures/restores `aHWam` (`ItemStack`),
    starts use when `aax(stack, mode)` true.
  - `aax(ItemStack, cX$ss)` [963] — use-eligibility: `RymlV` →
    `stack.isOf(SHIELD)`; `vNDXP` → `stack.getUseAction()` in the `cX$st`
    table (cases 1 and 2 return true — exact actions unrecovered).
- `aau(hw.tv)` [1319] — fake player attacked:
  - wind-burst jump (`aaz()` [1151]): sets the **real player**'s velocity Y
    from static table `AekfX = {1.2, 1.75, 2.2}` indexed by wind-burst
    enchantment level − 1; for levels > 3 the value is
    `1.5 + (lvl − 1) × 0.35` (constants `bTQok = 1.5`, `uNWYG = 0.35`
    [81–82]); sets `fallDistance = 0`. Gated by `jc.bzq`/`jc.bzw` (semantics
    unrecovered).
  - shield-break path: if the attacking item disables blocking →
    `clearActiveItem()` + cooldown
    `= WEAPON.disableBlockingForSeconds() × 20` ticks (gated by `jg.bBL`
    distance + `jc.bzo` axe check); else `oZvjF.onDamaged(playerAttack)`.
- `aav(String, ItemStack)` [1027–1150] — slot applier: `"hotbarN"` (1..9) →
  `inventory.setStack(n−1)`; second prefix (DES ~**17884**/**11637**, likely
  "armor") → `setStack(n)` (0..3, DES int ~**2472**).
- `aar(String, ItemStack)` [579–601] — **CFR FAILED** on this method; second
  slot applier (contract same shape as `aav`), body unrecovered.
- `aay(boolean, Hand)` [613] — `LivingEntityAccessor.callSetLivingEntityFlag`
  with flag 1 (use item) / 2 (offhand).
- Public API (shell-side script hooks): `aas(cX$ss, Hand)` [298],
  `aaq(String)` [572], `aan()` [466] fake player, `aao()` [568] mode,
  `aap()` [470] hand, `aam()` [286] existence, `aal()` [451],
  `aaA()` [424], `aaw(String)` [1240] parse.
- Statics: `AekfX`, `bTQok = 1.5`, `uNWYG = 0.35`.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 98–124):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Name" (`cy NRFCF`) | string, max length **32** (`Un(32)`) | — | `""` | [cX.java:~110] |
| "Copy Inventory" (`cJ TadoM`) | boolean | — | `false` (`WE(false)`) | [cX.java:117] |

## Unrecovered

- Status-effect **durations** (DES ints ~**22049**, ~**20063**) — open.
- Armor-slot ints (~**32446**, ~**2472**) and the second slot-prefix strings
  (~**17884**, ~**11637**) — likely 3/"armor", open.
- `cX$st` UseAction table: cases 1 and 2 are `true`; the exact
  `UseAction` enum identities behind those ordinals — open.
- `aar(String, ItemStack)` body — CFR failure, unrecovered.
- `jc.bzq`/`jc.bzw`/`jc.bzo` and `jg.bBL` exact predicates (which item classes
  trigger wind-burst jump / axe shield-break) — open.