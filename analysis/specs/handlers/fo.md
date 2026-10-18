# Anti Bot (sixtwo.fo) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_fo.c` — 21 handlers, continuation blocks all generic VM trampolines.
- Structure/setting names: `analysis/specs/modules/fo.md`, `analysis/decompiled/payload-named/sixtwo/fo.java` (constructor fully decompiled incl. wiring).
- Single class pool window `POOL[0x12985,0x2f5]` (fully resolved; ef-exclusive).
- Registry: `sixtwo.fo|Anti Bot|Distincts real players from bots|key=12|bind=-999`, category `gh.xwjCw` (combat).

## Runtime model

Maintains per-check bot sets and a combined verdict set `OiqRK`; the public query `aLp(PlayerEntity)` (CFR lines 118–154, only Java-recovered body) returns `enabled() && OiqRK.contains(player)` — other modules consult it to skip bots. Each check is a `Predicate<PlayerEntity>` (9 total); 7 are native instance/static predicates, 2 are direct method refs:

- `paoyc = LivingEntity::isSleeping` — Sleep Check (`RIfKs`).
- `HwXDN = LivingEntity::isDead` — Dead Check (`dhcOz`).

Five `Set<PlayerEntity>` buckets: `OiqRK` (combined/bot verdict — the one `aLp` reads), `NErxJ`, `dnuNp`, `CDnOz`, `eXPRj` (per-check buckets; exact check→set mapping unrecovered).

Pool-derived MC surface (verbatim from `POOL[0x12985,0x2f5]`):

- Ping/Tab check: `method_5667 ()Ljava/util/UUID;` (`getUuid`), `method_2871 (UUID)Lnet/minecraft/class_640;` (`PlayerListEntry` lookup), `method_2958 ()Lnet/minecraft/class_1934;` (`getGameMode`), `method_8379` (`GameMode.getIndex`) — bot entries missing/absent game-mode in the player list.
- Name check: `method_5477` (`getName`) + static `String[] fdrKp`, `oxnex` (decrypted name-pattern arrays).
- Swing check: `net/minecraft/class_2616` = `EntityAnimationS2CPacket`, `method_11269` (`getEntityId`), `method_11267` (`getAnimationId`) — bots never send swing animations; Main Hand / Off Hand children select which animation id counts.
- Movement/velocity: `net/minecraft/class_2777` = `EntityPositionS2CPacket` (`comp_3237` entityId, `comp_3238` change → `class_10182` EntityPosition `comp_3148` position), `method_43389` (`getTrackedPosition` → `class_7422` TrackedPosition), `method_60933` (`getPos`) — tracks server-reported positions and flags impossible motion.
- Ground/`: net/minecraft/class_2684` (= EntityS2CPacket per mapping), `method_11645` (`getEntity(World)`), `method_11653` (`isOnGround`) — ground state evidence feeding the "Touched Ground Check" + "Ground Check Mode" (On Ground / Off Ground).

## Per-handler semantics

All bodies are decrypt-preamble → VM dispatch; per-check attribution is by predicate wiring + token membership.

- `aLl(gM)` [18c1fd220] — frame/tick event: periodic rescan of the player list into the check sets (token touches all sets + predicates).
- `aLm(gL.tk)` [18c2499a0] — packet event: consumes `EntityAnimationS2CPacket` (swing evidence) and `EntityPositionS2CPacket`/TrackedPosition (movement evidence).
- `aLn(gH.th)` [18c2846f0] — pre-motion tick: applies check predicates, refreshes `OiqRK`.
- Predicates (all `PlayerEntity→boolean`, grouped by constructor wiring):
  - `ehxwR = fo::aLw` [18c205b70] — ground/touched-ground check (class_2684/isOnGround; On Ground vs Off Ground mode).
  - `SrySj = fo::aLv` [18c1fd700] — name-pattern check (`method_5477` + `fdrKp`/`oxnex`).
  - `JyUYt = this::aLu` [18c2a3cb0] — ping/tab-list check (UUID → PlayerListEntry → GameMode).
  - `nkebT = this::aLt` [18c2a0650] — ticks-existed check (threshold `bxtLO`).
  - `VFPqd = this::aLs` [18c29d050] — swing check (animation packets).
  - `EbGNQ = this::aLr` [18c299170] — movement check (position packets).
  - `JnCRB = this::aLq` [18c2951b0] — sound check (sound event volume/distance vs `QOrOm`/`tIfIS`).
  - `paoyc`, `HwXDN` — sleep/dead (Java method refs, no native body).
- `aLo()` [18c294730] — state reset (set clearing); `aLx/aLy/aLz/aLA/aLB/aLC/aLD/aLE` — j2cc decrypt boilerplate.
- `YO()` [18c1fd410] — listener registration (`gM`, `gL.tk`, `gH.th`).

## Settings → behavior mapping

| setting (decoded) | field | wrapper / chain (verbatim) | behavior role |
|---|---|---|---|
| Ping Check | xVFMx | `cJ .WE(true)` | tab-list/game-mode evidence (default on) |
| Name Check | YlLcN | `cJ .WE(false)` | name-pattern evidence |
| Ticks Existed Check | XKOPz | `cJ .WE(true)` | entity-age evidence (default on) |
| Ticks Existed | bxtLO | `cC .Vy(1.0).Vw(0.0).Vx(120.0).VA(20.0).Vz(aLB("d",8819,…))` | threshold slider 0–120 default 20; visibility ← Ticks Existed Check; suffix string decrypted via bsm (unit unproven) |
| Touched Ground Check | PzVPu | `cJ .WE(false)` | ground-evidence gate; Ground Check Mode visible under it |
| Ground Check Mode | xhGdJ | `ct` group | container group |
| On Ground | ARssK | `cu` child of xhGdJ | mode: flag on-ground-only players |
| Off Ground | kKXsM | `cu` child of xhGdJ | mode: flag off-ground players |
| Sleep Check | RIfKs | `cJ .WE(false)` | `isSleeping` predicate |
| Dead Check | dhcOz | `cJ .WE(false)` | `isDead` predicate |
| Swing Check | PqwUu | `cJ .WE(false)` | animation-packet evidence; Swing Mode visible under it |
| Swing Mode | zUESX | `ct` group | container group |
| Main Hand | TCqvH | `cu` child of zUESX | count main-hand swing (animation id 0 presumed) |
| Off Hand | Icftg | `cu` child of zUESX | count off-hand swing |
| Movement Check | yGtxA | `cJ .WE(false)` | position-packet evidence; Velocity Check visible under it |
| Velocity Check | UYAQf | `cJ .WE(false)` | stricter motion flag (nested) |
| Sound Check | tuLHs | `cJ .WE(false)` | sound evidence; both sound sliders visible under it |
| Minimal Volume | QOrOm | `cC .Vy(0.1).Vw(0.0).Vx(1.0).VA(1.0).Vz(aLB("d",23165,…))` | sound volume threshold 0–1 default 1.0 |
| (Sound Distance) | tIfIS | `cC .Vy(0.1).Vw(0.0).Vx(1.0).VA(0.0)` | second sound slider 0–1 default 0.0, no suffix; name "Sound Distance" per md list but 0–1 range is odd — attribution flagged |

## Unrecovered / uncertain

- All native bodies virtualized; no comparison thresholds, regex contents (`fdrKp`/`oxnex`), or set-merge logic recovered.
- Per-check → per-set (`NErxJ`/`dnuNp`/`CDnOz`/`eXPRj`) mapping is unrecovered; only `OiqRK` is proven (read by `aLp`).
- `class_2684` mapping is "EntityS2CPacket" per the reference mapping, but its use beside `isOnGround`/`getEntity` in a ground-check context is unverified; could serve movement evidence instead.
- `tIfIS` vs `QOrOm` name assignment: md lists "Minimal Volume" and "Sound Distance"; both sliders are 0–1; which is which (and the "Sound Distance" 0–1 semantics) is uncertain.
- Exact animation-id values for Main Hand/Off Hand swing counting not present in pool (presumed vanilla 0/3 — do not rely).
- Rescan cadence (`gM` every frame vs throttled) and whether sets are recomputed wholesale or incrementally is unrecovered.
