# Parkour (sixtwo.eE) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/eE` ("Parkour", registry description
"Automatically jumps at edges of blocks"), derived from native handler decompiles +
pool-token evidence. Companion to `analysis/specs/modules/eE.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_eE.c` | PRIMARY: 6 native handler stubs + 56 continuation blocks |
| Pool window `0xe29f,0x27b` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: window opens mid-token inside `method_20622` (tail of eD's `0xe23f` window); `sixtwo/eF` marker at `0xe3c8` ends eE's exclusive run |
| `analysis/decompiled/payload-decrypted/sixtwo/eE.java` | exact settings wiring (decrypted literals) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names |
| `analysis/ghidra/handlers-stitched/sixtwo_eD.c` | shared-region cross-check (Fast Bridge uses the same collision machinery) |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_c35a7cb99f43a6344ba13bf140372f4b` (class-init) |
| `0xe29f,0x27b` | `awz` (public boolean query — the module's entire behavior), `awB` (keyed int decryptor) |
| `0x857,0x26` | `awD` (string indy bootstrap) |
| none (pure dispatch stubs) | `awA`, `awC` |

Token layout of `0xe29f,0x27b`:

| Offsets | Tokens | Attribution |
|---|---|---|
| `0xe29f–0xe2b8` | `thod_20622` (descriptor tail of eD's `method_20622`), `awu`, `aww`, `method_45474` | eD boundary artifact |
| `0xe2bf–0xe3c7` | `sixtwo/eE`, `ooppM`, `chvgy`, `awA`, `EWJat`, `iJToP`, `iQpCa`, `OTTMg`, `floatValue`, `method_989`, `awB`, `method_1009`, `method_20812`, `(Lnet/minecraft/class_1297;Lnet/minecraft/class_238;)Ljava/lang/Iterable;`, `com/google/common/collect/Streams`, `(Ljava/lang/Iterable;)Ljava/util/stream/Stream;`, `findAny` | **eE-exclusive** |
| `0xe3c8–0xe4b8` | `sixtwo/eF`, `vfMSC`, `sixtwo/eG` section (`axm/awP/mRcox/jymCX`, `field_63257` SPEARS, `field_63420` LUNGE), `sixtwo/gY` section (`awK`, `class_12392` AttackRangeComponent, `comp_5261` maxRange, `sixtwo/hw$tv`, `awJ ()Lsixtwo/oI;`, `class_9334`, `field_64680`, `class_9331`, `method_58694`) | eF/eG/gY |

Token→yarn resolution (eE-exclusive tokens):

| Token | Yarn name |
|---|---|
| `method_989` | `Box.offset(DDD) -> Box` |
| `method_1009` | `Box.expand(DDD) -> Box` |
| `method_20812` + Iterable descriptor | `World.getBlockCollisions(Entity, Box) -> Iterable<VoxelShape>` |
| `com/google/common/collect/Streams` + stream factory + `findAny` | Guava "any collision present" test |
| `floatValue` | `Number.floatValue()` — unboxing the `cA` slider value (stored as `MutablePair<Double,Double>`) |
| `iQpCa` / `OTTMg` | eE's two settings |

## Runtime model

### Identity

- `eE extends gg`. Constructor: `super(gf.aZL(52, false, gh.xgeEn))` — registry key **52**,
  not keybound, movement category `gh.xgeEn`. Registry description: "Automatically jumps at
  edges of blocks".

### Architecture — query-based Java API (exact)

- eE declares **no `@hG` handlers and no enable-hook override**. Its entire Java behavior
  surface is one method: `public native boolean awz()` (`[18cafbc00]`) — a stateless
  "should the player jump now?" query.
- The caller is external (the native movement patch layer, or another module referencing
  `eE.awz()`); the name token `awz` does NOT appear in eE's own window, confirming no
  self-reference — the call enters from outside.
- Contract for the rebuild: each movement tick, the patch asks `awz()`; if true, the vanilla
  jump is triggered. The module never touches packets or blocks directly.

### Edge-detection contract (recovered at API level)

The eE-exclusive token run pins the geometry pipeline of `awz()`:

1. Read the "Edge Distance" slider (`OTTMg`, unboxed via `floatValue`).
2. Build a modified copy of the player's bounding box with `Box.offset(DDD)`
   (`method_989`) and/or `Box.expand(DDD)` (`method_1009`) — the offsets implement the
   edge-distance probe (the exact offset vectors are VM-internal arithmetic).
3. Run `World.getBlockCollisions(player, box)` (`method_20812` +
   `(Lnet/minecraft/class_1297;Lnet/minecraft/class_238;)Ljava/lang/Iterable;`) over the
   shifted box and reduce with Guava `Streams` + `findAny` — a boolean "is there still
   ground under the shifted box" test.
4. Return the jump decision; "Only If W Pressed" (`iQpCa`) gates the whole decision on the
   forward input.

This is the same collision machinery Fast Bridge (`eD`) references in the shared region —
both are edge detectors; eE's tokens prove it for eE (its exclusive run contains the whole
pipeline).

### Shared support classes (one line each)

- `eD` (Fast Bridge), `eF`, `eG` (Spear Lunge), `gY` — neighbors sharing pool region
  `0xe23f–0xe4b8`; eG/gY own the SPEARS/LUNGE/AttackRangeComponent tokens.
- `cA` — numeric setting storing `MutablePair<Double,Double>`; `floatValue` unboxing appears
  in eE's exclusive run.

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_c35a7cb99f43a6344ba13bf140372f4b()V` | `18cb153e0` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(eE.class)`. `[18cb153e0]` |
| `awz() -> Z` | `18cafbc00` | `0xe29f,0x27b` | **The module's entire behavior**: public native boolean "jump now?" query, invoked externally per movement tick. Body fully virtualized; eE-exclusive token evidence pins the pipeline: settings read (`iQpCa` gate, `OTTMg` via `floatValue`), `Box.offset`/`Box.expand` edge probe, `getBlockCollisions` + Guava `Streams.findAny` ground test. `[18cafbc00]` |
| `awA(MatchException) -> MatchException` | `18cb06060` | — | **Fully recovered: identity function** `return param_3;`. `[18cb06060]` |
| `awB(int, long) -> int` | `18cb060f0` | `0xe29f,0x27b` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0xe29f`). Output runtime-only. `[18cb060f0]` |
| `awC(Lookup,MutableCallSite,String,Object[]) -> int` | `18cb116c0` | — | invokedynamic int bootstrap (dispatch stub). `[18cb116c0]` |
| `awD(Lookup,String,MethodType) -> CallSite` | `18cb126d0` | `0x857,0x26` | String-literal indy bootstrap. `[18cb126d0]` |

Continuations (56 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/eE.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Only If W Pressed" | `iQpCa` (`cJ`) | toggle | `.WE(false)` → **default off** | gate the jump decision on forward input being held |
| "Edge Distance" | `OTTMg` (`cA`) | slider | `.UG(0.001).UE(0.001).UF(0.1).UI(0.001, 0.001)` → **step 0.001, min 0.001, max 0.1, default 0.001** (no suffix) | the box-shift distance used for the edge probe (`Box.offset`/`Box.expand` arguments, unboxed via `floatValue`) |

Notes:
- "Edge Distance" defaults to 0.001 blocks (i.e. effectively "any edge"); the 0.1 cap allows
  a slightly anticipatory jump. The slider is consumed through `Number.floatValue()` in the
  exclusive token run — direct evidence the value is unboxed and used numerically.
- No suffix literal exists for the slider.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **The exact offset/expand vectors** applied to the player box before `getBlockCollisions`
   (e.g. `(0, −edge, 0)` vs expanding downward-only) — pure VM arithmetic; only the API
   (`method_989`/`method_1009`) is cited.
2. **The caller of `awz()`** and its cadence (per-tick vs per-movement-tick), and whether the
   jump is executed by the patch (`player.jump()`-equivalent) or simulated input.
3. **`iQpCa` polarity details** — whether "W pressed" is read from `Input.hasForwardMovement()`
   (`method_20622` sits in the adjacent shared region, but is NOT eE-exclusive) or another
   input surface.
4. **Whether `awz()` also checks on-ground state / cooldown** — no such token is exclusive to
   eE; any extra gating is inside the VM.
5. **Shared-tail attribution** for `sixtwo/eF`/`eG`/`gY` tokens (SPEARS/LUNGE/etc.) — listed
   only to bound the region.