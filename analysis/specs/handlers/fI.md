# Auto Logout (sixtwo.fI) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_fI.c` — 13 stitched handlers, 133 continuation blocks, 126 `halt_baddata()`, 5 `rdtsc` (in the `aUK`/`aUH` decryptors — noise).
- Structural: `analysis/specs/modules/fI.md`; registry `sixtwo.fI|Auto Logout|Logouts you from server when player is in distance|key=2|bind=-999`.
- Java: `analysis/decompiled/payload-decrypted/sixtwo/fI.java` — settings chains verbatim.
- Yarn: class_1676=ProjectileEntity, class_1680=SnowballEntity, class_1665=PersistentProjectileEntity, class_1686=PotionEntity, class_2535=ClientConnection, class_5250=MutableText, class_2561=Text; method_43470=Text.literal(String), method_10747=ClientConnection.disconnect(Text), method_5767=Entity.isInvisible(), method_7495=FlyingItemEntity.getStack(), method_7924=ItemStack.getMiningSpeedMultiplier(BlockState) (neighbor token), field_23152=Blocks.RESPAWN_ANCHOR (neighbor token).

## Runtime model

Module extends `gg`, key 2. All bodies in the `$mango$` VM; one shared pool window POOL[0x146b4,0x32f] (truncated after `method_7924 | (L`).

State (`fI.java`): settings fields only plus static decrypt plumbing (`hhjHN`, `gftdG`, `tqwJQ`, `sDjcB`, `XvFOI`, `jcHIy`, `AWYJz`). No timers/schedulers visible — logout is event-driven.

Threat detection: `aUD(ProjectileEntity)→Z` [18acc5540] classifies incoming projectiles. Window proves the thrown-entity family: `class_1676` ProjectileEntity (parameter), `class_1680` SnowballEntity, `class_1665` PersistentProjectileEntity, `class_1686` PotionEntity, and `method_7495` `FlyingItemEntity.getStack()` (identify a projectile by its item stack — pearls/bobbers have no dedicated class tokens visible in the truncated window, so Pearl/Fish-Rod classification plausibly routes through getStack + item identity; unconfirmed). When a threatening projectile enters `Distance` of the player, logout fires.

Logout execution: `method_43470` `Text.literal(String)` builds the message from the "Disconnect Message" setting, then `method_10747` `ClientConnection.disconnect(Text)` performs the actual disconnect. `aUE()V` [18acd3d30] is the internal executor/trigger step (shares the window with everything).

Invisible check: `method_5767` `Entity.isInvisible()` — backs the "Invisible" setting (log out only when the threatening player is invisible, per typical semantics; exact polarity VM-hidden).

## Per-handler semantics

Trivial (group): `aUF` (MatchException identity rethrow), `aUG([B)→String` (string decoder), `aUH(IJ)→String` / `aUK(IJ)→I` (seeded constant decryptors), `aUI`/`aUL` (MutableCallSite relays), `aUJ`/`aUM` (CallSite bootstraps), `_f77c9f30…` clinit [18aca9670] over POOL[0x226,0xd].

- `aUB(gH$th)` [18ac92720] — render-marker frame hook: per-frame scan for threats (players in distance per the registry wording, plus projectile threats via `aUD`), evaluates Ignore Friends / Invisible, and when triggered runs the disconnect sequence.
- `aUC(gA)` [18aca1410] — input event handler: implements "Logout on Key" via the "Logout Key" setting (`CLGoi`, `cD .VO(-999)`); when `yfLPs` is on and the key is pressed, force the logout.
- `aUD(ProjectileEntity)→Z` [18acc5540] — projectile threat predicate described above.
- `aUE()V` [18acd3d30] — disconnect executor (Text.literal → ClientConnection.disconnect) and/or post-logout bookkeeping (Disable On Logout handling).

## Settings → behavior mapping

From `payload-decrypted/sixtwo/fI.java`:

- `saZPV` = "Distance" — `cC .Vy(1.0).Vw(1.0).Vx(100.0).VA(16.0).Vz(" blocks")` → step 1.0, min 1.0, max 100.0, default 16.0, suffix " blocks".
- `ZnFGj` = "Logout From" — `cv` group with `cw` checkbox children (each `.Tz()`): `btcIN`="Pearls", `aVerA`="Snowballs", `cGEiM`="Arrows", `iXQno`="Fish Rods", `xlSxX`="Potions" — selects which incoming projectile types trigger logout.
- `qrTWi` = "Ignore Friends" — `cJ .WE(true)` (default on).
- `MXFNE` = "Invisible" — `cJ .WE(false)`; uses `Entity.isInvisible()`.
- `TceCO` = "Disconnect Message" — `cy .Un(32).Up("Disconnected")` (text setting, max length 32, default "Disconnected") → fed to `Text.literal` → `ClientConnection.disconnect`.
- `yfLPs` = "Logout on Key" — `cJ .WE(false)`.
- `CLGoi` = "Logout Key" — `cD .VO(-999)`.
- `icZIc` = "Disable On Logout" — `cJ .WE(false)`; when on, the module disables itself after firing (registry-style self-toggle).

## Unrecovered / uncertain

- **Player-distance trigger vs projectile trigger**: registry says "player is in distance"; the native window strongly shows projectile classification. Whether the module also logs out on nearby players (reading world players) is unrecovered — the window is truncated mid-list (`method_7924 | (L…`), so the tail may hold more vocabulary.
- **Projectile threat criteria**: which projectile states qualify (distance to player, velocity toward player, owner is enemy) is VM-hidden; only the type set is proven.
- **Pearl/Fish-Rod classification**: dedicated entity classes (EnderPearlEntity/FishingBobberEntity) are NOT in the visible window portion — likely via `FlyingItemEntity.getStack()` + item identity, unconfirmed.
- **"Invisible" polarity**: does it log out only from invisible players, or treat invisible players as threats? VM-hidden.
- **Window straddle**: `method_7924` (mining speed) and `field_23152` (Blocks.RESPAWN_ANCHOR) have no fI semantics — they belong to a neighboring module's window region (mining/anchor family). `sixtwo/fL` reference in-window is a neighbor module (registry: fL = ? — not in this batch); its role here (cross-module call or window straddle) is uncertain.
- Pool-only tokens: `YaVXm`, `fPCKo`, `BtGgs`, `ZxCgN`, `aUu`, `aUy`, `hhjHN`, `TceCO`(=Disconnect Message field alias), `bCx`, `CwHuM`, `nhtSN`, `aVh`, `Hykwk`, `aLWOy`, `xBzWg`, `CFGfw`.