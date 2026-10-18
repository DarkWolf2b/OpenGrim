# Air Anchor (sixtwo.eU) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_eU.c` — 14 stitched handlers, 134 continuation blocks, 110 `halt_baddata()`, 4 `rdtsc` (all inside the `aDL` decryptor — noise).
- Structural: `analysis/specs/modules/eU.md`; registry `sixtwo.eU|Air Anchor|Allows to place anchor in air|key=114|bind=-999`.
- Java: `analysis/decompiled/payload-decrypted/sixtwo/eU.java` — settings names are plain char-array literals, fully decoded.
- Yarn: class_2338=BlockPos, class_2596=Packet, class_2885=PlayerInteractBlockC2SPacket (ctor `(Hand, BlockHitResult, int sequence)`), class_1268=Hand, class_3965=BlockHitResult; field_23141=Items.RESPAWN_ANCHOR, field_23152=Blocks.RESPAWN_ANCHOR (latter belongs to a window neighbor).

## Runtime model

Module extends `gg`, key 114, category `gh.xwjCw`. All bodies in the `$mango$` VM.

State (`eU.java`):
- `cEkBs` — `BlockPos` stored placement target (exposed via `aDF()`).
- `KALVf` — boolean latch (exact role VM-hidden; consistent with a "armed/placed this frame" or cooldown flag).
- `HyfoP` — `new mW()` one-shot action gate (shared mW attack-gate vocabulary), exposed via `aDH()` so sibling modules can consult/claim the action.
- Static plumbing: `QgLWU`, `pyZOh` (suffix String, native-decrypted), `oZHIK`, `rKPMZ`, `ISkoE`.

Public surface: `aDD()→cJ` (Double Anchor), `aDE()→cC` (Chance), `aDF()→BlockPos` (target), `aDG()→Z` (readiness predicate), `aDH()→mW` (gate). The five getters plus `aDC` and `YO` make up the full native method set.

Core pool window POOL[0xfbbe,0x2aa] (`aDC`) with an overlapping sub-window POOL[0xfc23,0x2ac] (`aDI`); both straddle the eV (Auto Crystal) and eW (Auto Hit Crystal) token regions — see attribution notes.

## Per-handler semantics

Trivial (group): `aDJ` (MatchException identity rethrow), `aDK([B)→String` (string decoder), `aDL(IJ)→I` (seeded constant decryptor), `aDM`/`aDN` (CallSite relays/bootstraps), `_52fd631e…` clinit [18b960e10] over POOL[0x226,0xd], and the five pure-VM state getters `aDD` [18b97bbc0], `aDE` [18b97bdc0], `aDF` [18b97bfc0], `aDG` [18b97c1c0], `aDH` [18b97c3c0] (no pool preamble — plain field reads).

- `YO()V` [18b93f340] — lifecycle (on-enable); POOL[0x3806,0xbf] shared gg/HUD lifecycle window (same as fr.YO/fG.aaj/fB.YO/dK.YO/fd.YO/eW.aaj); per-group attribution uncertain.
- `aDC(gH$th)` [18b93f8a0] — render-marker frame hook (main body). Window vocabulary: `Lnet/minecraft/class_2338;` (BlockPos), `uOhjt`/`CrAYX`/`cEkBs`/`KALVf`/`HyfoP` (own fields), `field_23141` (`Items.RESPAWN_ANCHOR`) — held-item gate, and `bDI (Lnet/minecraft/class_2338;)Z` — a BlockPos predicate (the "is air / placeable at pos" check that makes the anchor placeable *in air*). References neighbor modules `sixtwo/eV` (Auto Crystal) and `sixtwo/eX` (Anchor Macro) — eX is the natural consumer of eU's public state.
- `aDI(BlockHitResult, I)→Packet` [18b97c5c0] — packet factory. Window proves `net/minecraft/class_2885` + ctor signature `(Lnet/minecraft/class_1268;Lnet/minecraft/class_3965;I)V` — constructs a `PlayerInteractBlockC2SPacket(Hand, BlockHitResult, sequence)` directly from a BlockHitResult and a sequence int, returning it as `class_2596`. This is the core of the module: instead of routing through the vanilla use-key/interaction pipeline (which rejects anchors not on solid ground client-side), the module fabricates the block-interact packet itself against the chosen BlockPos.
- `aEZ ()Lsixtwo/cA;` token — the Chance slider getter used in-body for the probability roll (suffix `pyZOh` unrecovered).

## Settings → behavior mapping

Decoded from `payload-decrypted/sixtwo/eU.java`:

- `uOhjt` = "Double Anchor" — `cJ .WE(false)`; when on, the module performs the placement sequence twice (two anchors) — exact loop shape VM-hidden.
- `CrAYX` = "Chance" — `cC .Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(pyZOh)` → step 1.0, min 1.0, max 100.0, default 100.0, suffix String `pyZOh` (static, native-decrypted — unrecovered; plausibly "%" but unconfirmed).

## Unrecovered / uncertain

- **Placement math**: how the target BlockPos is derived from the crosshair/look (offset direction, distance, which face the BlockHitResult fabricates) is entirely VM-hidden; only `cEkBs`, the `(BlockPos)Z` predicate, and the packet ctor are proven.
- **`KALVf` latch** semantics and **`HyfoP` mW gate** handoff with eX Anchor Macro.
- **Chance roll wiring**: which handler rolls the 1–100 probability (presumably `aDC` via the `aEZ` getter) is unconfirmed.
- **Window straddle**: POOL[0xfbbe,0x2aa] and POOL[0xfc23,0x2ac] overlap and continue into eV/eW token regions. Attribution per-group: eU owns the head tokens (`ddn`, `YtRvz`, `NCEJm`, `nzopz`, `aDz`, `AISwg`, `cEkBs`, `KALVf`, `HyfoP`, `QgLWU`, `uOhjt`, `CrAYX`, `aDJ`, `aDy`, class_2885 + ctor, `rKPMZ`, `oZHIK`, field_23141, `ISkoE`, `bDI`, `pyZOh`, `aEZ`, `UO`); the tails (`aDS`, `bBq`, `BjiFk`, `nAtgG`, `XtwRQ`, `aDT`, `sixtwo/eW`, `qpZMv`, `SYXBX`, `aEB`, `aDQ`, `aDR`, `DcPJe`, class_2874, field_8301, method_8597, class_1511, qR tokens) belong to eV/eW — confirmed against eV.java/eW.java field names. `EbZHv`, `NdPsx`, `IXgwi`, `tOCyA`, `HYxjn` in the eU window are eV fields.
- **Double Anchor exact behavior**: place two anchors, or anchor+charge, unconfirmed.