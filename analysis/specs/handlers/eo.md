# No Slow (sixtwo.eo) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/eo` ("No Slow" — registry: "Allows to move
faster when using items"), derived from native handler decompiles, decrypted tokens and
CFR sources. Companion to `analysis/specs/modules/eo.md`. Category `gh.xgeEn` (same
constant as eB Flight).

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_eo.c` | PRIMARY: 30 native handler decompiles (note: no `YO` toggle handler present in the stitched corpus) |
| `analysis/decompiled/payload-named/sixtwo/eo.java` | full constructor: settings tree (20 widgets), events |
| `analysis/specs/modules/eo.md` + `analysis/decrypted/full-dump.jsonl` | setting display names (12 names for 20 widgets — many options share group names) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | MC surface mapping (below) |

Handler → pool-blob usage map (POOL base rva `0x301ee40`):

| Blob (off,len) | Handlers |
|---|---|
| `0xd1e0,0x243` | `atU atv atw` + accessors — eo's own field/method pool + movement surface |
| `0xd3d7,0x249` | one behavior handler (straddles into sibling ep/eq/er helper tokens) |
| `0x857,0x26`, `0x226,0xd` | indy bootstraps / class-init |

MC surface recovered verbatim from the pool windows:
- `ClientPlayerEntity.input` (field_3913, class_744 = `Input`), `Input.getMovementInput()`
  (method_3128 → Vec2f class_241), mixin `mixin/accessors/ClientInputAccessor.
  setMoveVector(Vec2f)` — direct movement-vector overwrite.
- `LivingEntity.getActiveHand()` (method_6058 → Hand), `getItemUseTime()` (method_6048),
  `getActiveItem()` (method_6030 → ItemStack), `LivingEntity.hurtTime` (field_6235).
- `ClientPlayerEntity.isRiding()` (method_3144); `ClientWorld.getEntities()` (method_18112);
  `Entity.isAlive()` (method_5805), `Entity.isSpectator()` (method_7325);
  `Vec3d.subtract(Vec3d)` (method_1020), `Vec3d.normalize()` (method_1029).
- `Block.getSlipperiness()` (method_9499, class_2248) — block-slow compensation.
- `Items.SHIELD` (field_8255), `Items.CROSSBOW` (field_8399), `Items.BOW` (field_8102),
  `Items.TRIDENT` (field_8547) — item classification for the Item Options multigroup.
- Packets: `UpdateSelectedSlotC2SPacket` (class_2868), `PlayerInteractItemC2SPacket`
  (class_2886, ctor `(Hand, int sequence, float y, float x)`), generic `Packet`
  (class_2596), and `SequencedPacketCreator` (class_7204) — the re-use/re-send path
  (`bAo (Lnet/minecraft/class_7204;)V` member ref, owner unresolved).

## Runtime model

- `hc` is a bare event class (`hc extends hH`, no fields) — the slowdown/movement-modifier
  hook; `atu(hc)` `[18cfa0040]` is the main entry point where eo suppresses item-use
  slowdown.
- Compensation is applied by rewriting the client input vector via the
  `ClientInputAccessor` mixin (`setMoveVector(Vec2f)`), gated on the active-hand state
  (`getActiveHand`/`getActiveItem`/`getItemUseTime`).
- Grim/Matrix bypass modes construct vanilla-looking re-sequenced packets:
  `atS(ov, I) → Packet` `[18cfe8ad0]` builds a `PlayerInteractItemC2SPacket` (hand +
  sequence + rotation floats) from an `ov` movement-engine state; the
  `SequencedPacketCreator`/`UpdateSelectedSlotC2SPacket` refs indicate slot re-sync +
  re-use sequences used by the server-sided bypass modes.
- Sibling coupling: tokens `sixtwo/ep` (Super Firework: `atp`, `atY`), `sixtwo/eq` (Null
  Movement), `sixtwo/er` (Speed: `auh`, `aue`, `aug`, `auf`) — shared speed-state helpers
  across the movement family. Also `gw.bbw() → mF` / `gw.bxH(mF) → Z` and
  `eB.avS()`/`eB.avR(String[5])` (Flight module static hooks) appear around the
  constructor.

## Per-handler semantics

Accessors `atA–atR` (`[18d012da0–18cfe88d0]`), status probe `atw() → Z`
`[18cfd3680]`, infra (`atT`, `atU`, `atV`, `atW`, class-init `_6f31d187…`
`[18cff7d90]`) are boilerplate. Behavior handlers:

- `atu(hc)` `[18cfa0040]` — slowdown event: core No Slow logic (mode dispatch over the
  `0xd1e0` pool).
- `atv(gA)` `[18cfc9d40]` — input event: keyboard-driven re-arm / packet-bypass trigger.
- `atS(ov, I) → Packet` `[18cfe8ad0]` — packet factory for the interact re-send sequence
  (public; also a service for sibling modules).

No `YO` toggle handler exists in the stitched corpus (anomaly — see Evidence base).

## Settings → behavior mapping

Constructor chains verbatim (decrypted names from `modules/eo.md`):

| Field | Widget | Setting / notes |
|---|---|---|
| `lKIKk` | `ct` group | mode group (display name not individually decrypted) |
| `EhnRt` | `cu` child | option (4-entry name array; display name not decrypted) |
| `HGufy` | `cu` child | **"Matrix"** option |
| `cvVxe` | `cu` child | **"Matrix 2"** option |
| `VtAqw` | `cu` child | **"Matrix 3"** option |
| `gJhNS` | `cu` child | option (3-entry array; not decrypted) |
| `hcJrI` | `cu` child | **"Grim V3"** option — `.SY()` **default** |
| `DVCYL` | `cJ` | **"Main Hand"** → `.WE(true)` |
| `eWPzd` | `cv` multigroup | **"Item Options"** |
| `iqEmI` | `cw` child | `.Tz()` default marker (name not decrypted) |
| `DKvXJ` | `cw` child | **"Shield"** `.Tz()` |
| `emXqU` | `cw` child | **"Chargeables"** `.Tz()` (bow/crossbow/trident per `Items.*` refs) |
| `SZtpC` | `cv` multigroup | **"Block Options"** |
| `dsCpw` | `cw` child | (5-entry; not decrypted) |
| `yIflo` | `cw` child | (3-entry; not decrypted) |
| `OcKIt` | `cw` child | (5-entry; not decrypted) |
| `tzUdG` | `cw` child | **"Soul Sand"** |
| `zwMyB` | `cw` child | **"Berry Bush"** |
| `AwpkE` | `cv` multigroup | **"Movement Options"** |
| `lJLoK` | `cw` child | (5-entry; not decrypted) |
| `yMbIT` | `cw` child | (5-entry; not decrypted) |

Behavior mapping: the mode group selects the bypass algorithm ("Grim V3" default;
"Matrix"/"Matrix 2"/"Matrix 3" legacy modes; two unnamed options). Item Options selects
which held-item slowdowns are compensated (Shield / Chargeables / default set); Block
Options selects block-based slowdowns (Soul Sand / Berry Bush / other, likely using
`Block.getSlipperiness()` and entity scans); Movement Options tunes the movement-vector
compensation applied through `setMoveVector`. "Main Hand" (default on) restricts
compensation to the main hand.

## Unrecovered / uncertain

- All compensation math (input-vector scaling, packet sequences, per-mode tick logic) is
  in the j2cc VM — none of the fp arithmetic survives; the mode algorithms are
  unrecoverable.
- Display names for `lKIKk` (mode group), `EhnRt`, `gJhNS`, `iqEmI`, `dsCpw`, `yIflo`,
  `OcKIt`, `lJLoK`, `yMbIT` are absent from the decrypted dump — counts of their name
  arrays are exact.
- `bAo (Lnet/minecraft/class_7204;)V` owner unresolved (send path via
  `SequencedPacketCreator`; likely a ClientPlayNetworkHandler-family member, but the
  owner token is outside this window).
- `method_3144` (`isRiding`) usage (riding exclusion?) is inferred from placement next to
  the packet cluster.
- Exact pairing of ep/eq/er helper methods (`atp`/`atY`/`auh`/`aue`/`aug`/`auf`) with
  their semantics is unknown; they sit in the straddling `0xd3d7` window.
- Missing `YO` handler means the toggle/cleanup path could not be cited.
