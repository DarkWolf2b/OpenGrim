# Crystal Optimizer (sixtwo.eY) — handler-derived behavior spec

Class: `sixtwo/eY` · display name **Crystal Optimizer** · registry description
"Optimizes exploding crystals" · primary key 33 (registry; the in-code module
id is native-encrypted — see Unrecovered), active bind -999 (unbound)
[`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`eY | Crystal Optimizer | 8 | 8 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_eY.c` — **8 native handlers** +
   continuation blocks. Main slice `POOL[0x102f3,0x2b7]` (5 handlers);
   secondary slice `POOL[0x1052f,0x2bd]` (1 handler). Citations are image
   addresses.
2. Java skeleton: `payload-named/sixtwo/eY.java` (no decrypted variant — the
   class has no indy int constants; only the native clinit pool).
3. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/eY.md`.

## Runtime model

- `super(gf.aZL((int)pLxzJ, false, gh.xwjCw))` — id encrypted via static long
  `pLxzJ` (set by native clinit); registry fixes it at **33**; category
  `gh.xwjCw` `[decompiled eY.java:14 + registry]`.
- **No settings at all** — the constructor only creates
  `dGDCh = new DoubleAdder()` (running damage accumulator). No `cB`-family
  wrappers, no keybind `[decompiled]`.
- One `@hG` listener: `aFE(gL$tj)` — the **outgoing packet (C2S) event**
  (`gL$tk` = S2C with `PacketListener`, `gL$tj` = clientbound-connection
  variant carrying `ClientConnection`; eY watches packets with connection
  context) `[decompiled gL$tj.java + prompt wiring]`.
- Private helpers: `aFI(EndCrystalEntity)V`, `aFF()Z`, `aFG()D`,
  `aFH(ItemStack)D`, and corpus-only `aFJ (Lnet/minecraft/class_6880;
  Lnet/minecraft/class_1322;)V` = `(RegistryEntry, EntityAttributeModifier)V`
  `[stitched corpus, not in Java stub — see Unrecovered]`.
- Main slice tokens (eY's own run):
  - `mixin/accessors/ServerboundInteractPacketAccessor` + `getEntityId` —
    reads the **attacked entity id out of the outgoing
    `ServerboundInteractPacket`** `[slice]`.
  - `field_5911` → `EntityAttributes.WEAKNESS`, `field_5910` →
    `EntityAttributes.STRENGTH`, `field_23721` →
    `EntityAttributes.ATTACK_DAMAGE`, `method_45325` →
    `EntityAttributeValue.getAttributeValue(D)`, `method_6112` →
    `LivingEntity.getStatusEffect(RegistryEntry)` — damage model inputs
    `[slice, tiny-mapped]`.
  - `net/minecraft/class_1293` (`StatusEffectInstance`) + `method_5578` →
    `getAmplifier()` `[slice, tiny-mapped]`.
  - `aFH (Lnet/minecraft/class_1799;)D` + `field_6173` →
    `EquipmentSlot.MAINHAND` + `method_57354` →
    `ItemStack.applyAttributeModifiers(EquipmentSlot, BiConsumer)` — per-stack
    attack-damage computation from attribute modifiers `[slice, tiny-mapped]`.
  - `net/minecraft/class_1511` → `EndCrystalEntity` + `aFI` ctor-shaped
    reference `(Lnet/minecraft/class_1511;)V` `[slice, tiny-mapped]`.
  - `java/util/concurrent/atomic/DoubleAdder` + `reset` + `sum` — accumulator
    ops `[slice]`.
- Secondary slice (`aFF`-family run): `method_5650` →
  `Entity.remove(Entity.RemovalReason)` with `field_26998` →
  **`Entity.RemovalReason.KILLED`**; `net/minecraft/class_5712` (`GameEvent`)
  `field_37676` → **`GameEvent.ENTITY_DIE`** + `method_32876` →
  `World.emitGameEvent(RegistryEntry)`; `field_8288` →
  **`Items.TOTEM_OF_UNDYING`**; `net/minecraft/class_2663` →
  `EntityStatusS2CPacket` + `method_11470` → `getStatus()` (byte status —
  totem/nether-portal style entity statuses); `method_8390` →
  `World.getEntitiesByClass(Class, Box, Predicate)`; `method_11469` →
  `Entity.world`-shaped `(Lnet/minecraft/class_1937;)Lnet/minecraft/class_1297;`;
  stream ops `findFirst`/`orElse`; `aFR (Lnet/minecraft/class_1511;)Z`;
  `sixtwo/jj` + `bCL` (math helper); `sixtwo/eZ` + `pLxzJ` (neighbor/static
  cluster) `[slice, tiny-mapped]`.
- Technique (registry + symbols): when the player attacks an end crystal
  (outgoing interact packet), eY computes the real damage the hit will deal
  (STRENGTH/WEAKNESS amplifiers + mainhand attribute modifiers), tracks
  crystal destruction (`RemovalReason.KILLED`, `ENTITY_DIE` game event,
  entity-status packets, totem constant for the player-side check), scans
  nearby crystals (`getEntitiesByClass`), and uses the DoubleAdder to
  accumulate/optimize total explosion damage — choosing/verifying the optimal
  crystal to pop `[slice, inferred]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_ae19a68fccb83e5a6db3e56bb772df6b()V` | `[18b752670]` | native clinit stub |
| `aFE(Lsixtwo/gL$tj;)V` | `[18b738cc0]` | outgoing-packet listener: crystal-attack interception (virtualized) |
| `aFF()Z` | `[18b73dd60]` | boolean gate (uses 0x1052f slice) |
| `aFG()D` | `[18b742650]` | double getter (accumulated result — `DoubleAdder.sum` shaped) |
| `aFH(Lnet/minecraft/class_1799;)D` | `[18b748600]` | attack-damage of a stack via `applyAttributeModifiers` (virtualized) |
| `aFI(Lnet/minecraft/class_1511;)V` | `[18b74e280]` | per-crystal handler (virtualized) |
| `aFJ(Lnet/minecraft/class_6880;Lnet/minecraft/class_1322;)V` | `[18b74e750]` | attribute-modifier application (corpus-only; not in Java stub — likely a neighbor straddle or trimmed stub member) |
| `aFK(MatchException)MatchException` | `[18b7525e0]` | identity rethrow |

- All bodies VM-dispatched; the damage formula (how STRENGTH amplifier,
  WEAKNESS, armor, and modifier sums combine) is **not recovered** — only the
  inputs are proven `[slice, uncertain]`.

## Settings → behavior

- None — eY is a zero-setting module (only the module toggle). All behavior
  thresholds are hardcoded inside the VM `[decompiled, negative evidence]`.
- Registry: id 33, bind -999, description "Optimizes exploding crystals"
  `[registry]`.

## Unrecovered

1. The damage formula and decision rule (which crystal gets attacked first,
   whether suboptimal attacks are cancelled) — virtualized.
2. Whether `aFJ` (RegistryEntry, EntityAttributeModifier) belongs to eY or a
   neighbor: it is in eY's window but absent from the Java stub; if eY's, it
   implies temporary attribute-modifier injection (a damage boost while
   optimizing) `[uncertain]`.
3. The native-encrypted module id constant (`pLxzJ`) — no `sixtwo.eY` rows in
   `decrypted/full-dump.jsonl`; id taken from the registry only.
4. The role of `TOTEM_OF_UNDYING` + `EntityStatusS2CPacket.getStatus()` —
   likely detecting totem pops caused by crystal explosions; unproven.
