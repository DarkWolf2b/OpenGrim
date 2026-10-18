# Air Stuck (sixtwo.ej) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/ej` ("Air Stuck", registry description
"Freezes all movement"; primary key **43**, active bind **86**), derived from native handler
decompiles + pool-token evidence. Companion to `analysis/specs/modules/ej.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_ej.c` | PRIMARY: 5 native handler stubs + 44 continuation blocks |
| Pool window `0xccc5,0x22d` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: `0xcd2c` onward belongs to `sixtwo/ek` (Inventory Move) and `0xce22` onward to `sixtwo/el` (Water Speed) |
| `analysis/decompiled/payload-named/sixtwo/ej.java` | declared handlers (no decrypted variant exists for this class — the module-spec quotes the named tree) |
| `analysis/decompiled/payload-named/sixtwo/iV.java` | **fully recovered** rotation-packet primitive `iV.bxl(ov)` |
| `analysis/decompiled/payload-named/sixtwo/{gM,hv,hc,gB}.java` | event shells |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names (shared-region tokens) |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_5f1547d180edf27adb93b48403cb3fdc` (class-init) |
| `0xccc5,0x22d` | `asP` (gM handler), `asQ` (hv handler), `asR` (hc handler) — one shared body blob |
| none (pure dispatch stubs) | `asS` (MatchException identity) — no blob, no bootstrap methods in this class |

Token layout of `0xccc5,0x22d`:

| Offsets | Tokens | Attribution |
|---|---|---|
| `0xccc5–0xcd2b` | `QhKIT`, `cHL`, `gnKgk`, `rzkkP`, `asM`, `QqXlu`, `sixtwo/ej`, `KBjlK`, `asS`, `UqlCk`, `ISzxl`, `sixtwo/iV`, `bxl`, `(Lsixtwo/ov;)V`, `sixtwo/hc` | **ej-exclusive** |
| `0xcd2c–0xce21` | `sixtwo/ek` (Inventory Move) section: `LqclE/asX/asV/hgJLy/FjUNy/bxC`, `sixtwo/gB`, `method_1429`, `class_3675$class_306`, `method_1444`, ek statics, `class_471` (AnvilScreen), `class_477` (CommandBlockScreen), `class_497` (StructureBlockScreen) | ek |
| `0xce22–0xcef1` | `sixtwo/el` (Water Speed) section: `zseOG`, `field_6166` (`EquipmentSlot.FEET`), `class_1893` (`Enchantments`), `field_9128` (`DEPTH_STRIDER`), `bCg (ItemStack,TagKey)Z`, `field_5904` (`SPEED` status effect), `method_6059 hasStatusEffect`, `sixtwo/jl`, `bDR (DDD)…` | el |

## Runtime model

### Identity

- `ej extends gg`. Registry: primary key **43**, active bind **86** (one of the few modules
  with a real bind — hold-to-activate). Category per registry; description: "Freezes all
  movement".
- **No settings** — the module-spec confirms 0 constructed settings; there are no numeric or
  toggle literals to cite.

### Event wiring (exact)

Three `@hG` listeners, all sharing blob `0xccc5,0x22d`:

| Handler | Event shell | Shell contents |
|---|---|---|
| `asP(gM)` | `gM extends hH` | empty shell — a plain cancelable notification event |
| `asQ(hv)` | `hv extends hH` | `Entity gVQJL` (getter `bdk()`) + `DamageSource OCbXf` (getter `bdl()`) — the **damage event** |
| `asR(hc)` | `hc extends hH` | empty shell — second plain cancelable notification event |

(`gM` is the same shell used by Mace Aura's `aBA(gM)` handler; `hc`/`gM` are the movement /
action notification pair used by movement modules. Their exact production sites are native.)

### The recovered primitive: `iV.bxl(ov)`

The only Minecraft-facing API in ej's exclusive token run is `sixtwo/iV.bxl(ov)` — and its
Java body is fully decompiled (iV.java:106):

```106:117:analysis/decompiled/payload-named/sixtwo/iV.java
   public static void bxl(ov var0) {
      rD.dlmvG
         .getNetworkHandler()
         .sendPacket(
            new Full(
               rD.dlmvG.player.getX(),
               rD.dlmvG.player.getY(),
               rD.dlmvG.player.getZ(),
               var0.cGI(),
               var0.cGJ(),
               rD.dlmvG.player.isOnGround(),
               rD.dlmvG.player.horizontalCollision
            )
         );
   }
```

i.e. send a `PlayerPositionLookC2SPacket.Full` with the player's **current position** plus an
arbitrary yaw (`ov.cGI()`) / pitch (`ov.cGJ()`) and the real on-ground / horizontal-collision
flags. `iV` also ships canned direction rotations (`uTmcD` = Vec3d(0,20,0)-derived, `XsgMs`,
`Qhihw`, `BzuYL`, `HGROY`, `GDobf` via `ov.cGx(Vec3d)`) and helpers `bxk(Vec3d)` /
`bxj(Vec3d)` (yaw-from-vector).

This is the freeze primitive: while the bind is held, the client replays position-look
packets (same X/Y/Z each time) and/or cancels the movement notification events (`gM`/`hc`),
keeping the player pinned server-side. The `ov` argument is chosen inside the VM body (likely
the player's current rotation — freezing without rotating — but that choice is not statically
decidable).

### Shared support classes (one line each)

- `iV` — motion/rotation primitive store: `ov.cGx(Vec3d)` direction→rotation factories,
  `bxj` yaw-from-vector, `bxk/bxl` position-look packet senders, `bxn` rotation-between-points.
- `ov` — yaw/pitch rotation wrapper (`cGI()` yaw, `cGJ()` pitch, `cGx(Vec3d)` factory).
- `gM`/`hc` — empty cancelable event shells; `hv` — damage event (`Entity`, `DamageSource`).
- `ek` (Inventory Move), `el` (Water Speed) — neighbors sharing the pool region.
- `jl` — helper named in el's section (not ej's).

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_5f1547d180edf27adb93b48403cb3fdc()V` | `18d2654b0` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(ej.class)`. `[18d2654b0]` |
| `asP(gM)V` | `18d25f840` | `0xccc5,0x22d` | `@hG` handler on the `gM` notification shell. Body virtualized. ej-exclusive token evidence: `iV.bxl(ov)` (frozen position-look packet) + `hc` shell reference. Role: while the bind is held, cancel/pin the movement event and replay the frozen position packet. `[18d25f840]` |
| `asQ(hv)V` | `18d25fa10` | `0xccc5,0x22d` | `@hG` handler on the **damage event** (`Entity` + `DamageSource`). Body virtualized; whether damage unsticks the freeze, is canceled, or is tracked is unrecoverable. `[18d25fa10]` |
| `asR(hc)V` | `18d260ae0` | `0xccc5,0x22d` | `@hG` handler on the second notification shell `hc`; same frozen-packet surface. `[18d260ae0]` |
| `asS(MatchException) -> MatchException` | `18d265420` | — | **Fully recovered: identity function** `return param_3;`. `[18d265420]` |

Continuations (44 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

**None.** `ej` constructs no settings: no `cA/cB/ct/cu/cv/cw/cz/cJ/cy` construction and no
decoded name literals exist in the class. Its only inputs are the registry keybind
(primary 43, bind 86 — hold-to-activate) and the event stream. No step/min/max/default
literals exist for this module.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **The freeze loop's exact structure** — which of `asP`/`asR` runs per tick vs per action,
   whether the client also suppresses local movement input (vs only spoofing server packets),
   and whether `gM`/`hc` are canceled or merely observed.
2. **The `ov` rotation passed to `iV.bxl`** — current rotation (pure freeze) vs a canned
   `iV` constant; both APIs are in scope, the choice is VM-internal.
3. **`asQ(hv)` role** — damage received during a freeze is the most likely reason an
   "Air Stuck" module would listen for damage, but the actual behavior (unstuck / cancel /
   record) is unrecoverable.
4. **Bind-86 semantics** — hold vs toggle (the `gd` toggle/hold enum exists on the framework
   side, but the chosen mode for this module is registry metadata, not visible here).
5. **Shared-region attribution** for the ek/el tokens (keybind code helpers, GUI screens,
   Depth Strider/Speed predicates) — listed only to bound the window.