# eu — Trident Boost (module id 40)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/eu.md`; registry row
  `sixtwo.eu|Trident Boost|Allows to use trident outside water or rain|key=40|bind=-999`
  (primary key 40, active bind −999 = unbound), category `gh.xgeEn` (Movement).
- Java shell: `analysis/decompiled/payload-decrypted/sixtwo/eu.java` (93 lines,
  Vineflower, DES literals folded) — one slider + one checkbox + one `@hG` listener +
  two getters.
- Native: `analysis/ghidra/handlers-full/sixtwo_eu.c` — 5 handler stubs, all
  decrypt-then-VM-dispatch; only `auJ` has a substantive blob. Fully native-backed.
- Pool window: POOL base RVA `0x301ee40`, image
  `analysis/ghidra/dumps/jna-decrypted-v2.dll`. Yarn map:
  `analysis/jars/yarn-1.21.11+build.6.tiny`. Shared-region context from `es.md`
  (es/eu pool overlap).

Handler → pool-blob usage map:

| Blob (off,len) | Handlers | Addresses |
|---|---|---|
| `0xd679,0x252` | `auJ(gD)` (2 decrypt sites) | auJ `[0x18ce32b20]` |
| `0x226,0xd` | `_29c2deca7b712c7c8ef896e4f7d76233` (class-init) | `[0x18ce7f6d0]` |
| `0x857,0x26` | `auQ` (indy bootstrap) | `[0x18ce7c9c0]` |

Verbatim token run of `0xd679,0x252`:
`sixtwo/hq hTUdB EQALu aus watFw sixtwo/eu QJqHC sixtwo/op sixtwo/ow xNAmx Lsixtwo/ow; auM
(Lsixtwo/os;ZLsixtwo/ow;IZ)V OBGxe SDRyJ net/minecraft/class_1890 method_60123
(Lnet/minecraft/class_1799;Lnet/minecraft/class_1309;)F method_5721 qLIIU fBBZY dmOfg
method_15374 (D)F method_15362 method_15355 method_5762 method_40126 (IFLnet/minecraft/class_1799;)V
auO net/minecraft/class_1313 field_6308 Lnet/minecraft/class_1313; method_5784
(Lnet/minecraft/class_1313;Lnet/minecraft/class_243;)V net/minecraft/class_3417 field_14717
field_14806 field_14606 net/minecraft/class_3414 method_43129 (Lnet…` (tail truncated).

Yarn: `class_1890` = `EnchantmentHelper`; `method_60123` =
`EnchantmentHelper.getTridentSpinAttackStrength(ItemStack, LivingEntity) → float`;
`method_5721` = `Entity.isTouchingWaterOrRain()`; `method_15374/15362/15355` =
`MathHelper.sin/cos/sqrt(double)`; `method_5762` = `Entity.addVelocity(double,double,
double)`; `method_40126` = `PlayerEntity.useRiptide(int, float, ItemStack)`; `class_1313`
= `MovementType`, `field_6308` = `MovementType.SELF`; `method_5784` =
`Entity.move(MovementType, Vec3d)`; `class_3417` = `SoundEvents` with
`field_14717` = `ITEM_TRIDENT_RIPTIDE_3`, `field_14806` = `ITEM_TRIDENT_RIPTIDE_2`,
`field_14606` = `ITEM_TRIDENT_RIPTIDE_1` (all `RegistryEntry<SoundEvent>` = `class_6880`/
`class_3414`); `method_43129` = `World.playSoundFromEntity(...)`.

## Runtime model

- `gf.aZL(40, false, gh.xgeEn)` [eu.java:22] — registered disabled at boot, Movement.
- Registry behavior: **"Allows to use trident outside water or rain"** — replicates the
  vanilla client-side riptide boost for a riptide trident even when the wet-conditions
  (`isTouchingWaterOrRain`) are not met, locally applying the velocity/sound so the player
  launches.
- Listener inventory (1 `@hG` + 2 getters):
  - `auJ(gD)` — `gD` empty cancelable-shell event (most plausibly the item-use/trident-use
    event), `@hG` [eu.java:79; sixtwo_eu.c:18]
  - `auK()` — getter returning `cC` (Boost Cooldown) [eu.java:87]
  - `auL()` — getter returning `cJ` (Allow Outside Water Or Rain) [eu.java:91]
- State: no Java-side mutable fields besides settings and statics (`QJqHC` seed,
  `yJtAG`/`qLIIU`/`fBBZY`/`dmOfg` obfuscation statics); the VM body carries the rest
  (inferred).

## Per-handler semantics

1. `public eu()` [eu.java:19-66] — constructor: registers module id 40 (disabled,
   Movement); builds `OBGxe` = **"Boost Cooldown"** slider (chars `66 111 111 115 116 32
   67 111 111 108 100 111 119 110`) with `.Vy(1.0).Vw(0.0).Vx(20.0).VA(10.0).Vz(yJtAG)`
   [eu.java:38]; builds `SDRyJ` = **"Allow Outside Water Or Rain"** checkbox (chars `65
   108 108 111 119 32 79 117 116 115 105 100 101 32 87 97 116 101 114 32 79 114 32 82 97
   105 110`, 27 chars) `.WE(false)` [eu.java:39-66].
2. `@hG native auJ(gD)` [sixtwo_eu.c:18] — the boost body (order inferred from token
   sequence + vanilla riptide flow):
   - gate: `bab()`; check `EnchantmentHelper.getTridentSpinAttackStrength(stack, player) >
     0` — i.e. the player is trying to use a riptide trident;
   - condition check: `Entity.isTouchingWaterOrRain()` — when **true** the module is
     inert (vanilla already boosts); when **false** the boost fires only if `SDRyJ`
     "Allow Outside Water Or Rain" is checked, or (inferred nuance, unrecovered) the
     checkbox only widens the conditions while the cooldown still applies;
   - cooldown: `OBGxe` "Boost Cooldown" (default 10.0) gates repeat boosts — unit string
     `yJtAG` undecrypted (seconds assumed, not confirmed);
   - boost math: `MathHelper.sin/cos/sqrt` (`method_15374/15362/15355`) compute the
     horizontal launch direction/velocity from the player rotation (mirrors the vanilla
     riptide velocity composition);
   - application: `PlayerEntity.useRiptide(int, float, ItemStack)` (`method_40126`) sets
     the riptide state/velocity, `Entity.addVelocity` (`method_5762`) and/or
     `Entity.move(MovementType.SELF, Vec3d)` (`method_5784`) apply motion locally;
   - feedback: `World.playSoundFromEntity` (`method_43129`) with
     `ITEM_TRIDENT_RIPTIDE_1/2/3` (`field_14606/14806/14717`) selected by riptide
     strength, as vanilla does.
   - `gD` cancelation: the empty-shell event likely gets consumed so the vanilla (server-
     rejected) path does not also fire. (inferred)
3. Getters `auK()`/`auL()` [eu.java:87-91] expose the two settings (GUI/other modules).
4. Static: class-init `[0x18ce7f6d0]`, indy `[0x18ce7c9c0]`, literal helpers
   `auO(IJ)I`/`auN(byte[])`, `auM(MatchException)` wrapper (distinct from the pool-only
   `auM(os;Zow;IZ)V` signature — see Blockers).

## Settings

- `cC OBGxe` = **"Boost Cooldown"** (chars as above): `.Vy(1.0).Vw(0.0).Vx(20.0).VA(10.0)`
  ⇒ step **1.0**, min **0.0**, max **20.0**, default **10.0** [eu.java:38]. Unit suffix
  `.Vz(yJtAG)`: DES-encrypted static, **undecrypted**.
- `cJ SDRyJ` = **"Allow Outside Water Or Rain"** (27 chars as above): `.WE(false)` — off
  by default [eu.java:39-66].
- No keybind, no groups, no radio options. Two widgets total.

## Blockers / unknowns

- The pool-only signature `auM (Lsixtwo/os;ZLsixtwo/ow;IZ)V` appears in eu's window (and
  the es/eu shared region per `es.md`) but no such method exists in the Java shell — its
  owner class and semantics (five args incl. `os`/`ow` refs and 2 ints) are unrecovered.
  The `ow` enum constants (`PrjIy`/`qPfya`/`xNAmx`/`dJEUh` — only `xNAmx` in plaintext)
  are DES-encrypted and undecrypted.
- The precise relation between `SDRyJ` and the wet-conditions check (allow-always vs.
  allow-only-when-trident-present vs. gating the cooldown instead) is inside the VM body.
  (inferred: checkbox widens the vanilla condition)
- Whether the boost is client-visual-only or paired with a movement packet the server
  accepts (no packet token in the window — only `MovementType.SELF` local motion) is
  unrecovered; if purely local, servers running vanilla movement checks will rubber-band
  (flagged for reimplementation testing).
- Cooldown storage/comparator (`mT` timer vs. tick counter) is VM-resident; the slider
  unit (seconds vs. some tick multiple) is unrecovered pending `yJtAG` decryption.
- `sixtwo/hq`/`hTUdB`/`EQALu`/`aus`/`watFw`/`sixtwo/op` window-head tokens belong to the
  es/eu shared region boundary (per `es.md`); their owner split is unrecovered.