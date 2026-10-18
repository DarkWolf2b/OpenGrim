# Fast Bridge (sixtwo.eD) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/eD` ("Fast Bridge", registry description
"Automatically sneaks on block edge"), derived from native handler decompiles + pool-token
evidence. Companion to `analysis/specs/modules/eD.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_eD.c` | PRIMARY: 7 native handler stubs + 73 continuation blocks |
| Pool window `0xe23f,0x27a` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: `0xe2bf` onward is shared with the eE/eF/eG family (`sixtwo/eE` at `0xe2bf`, `sixtwo/eF` at `0xe3c8`, `sixtwo/eG` at `0xe3d8`, `sixtwo/gY` at `0xe40e`) |
| `analysis/decompiled/payload-decrypted/sixtwo/eD.java` | exact settings wiring (decrypted literals) |
| `analysis/decompiled/payload-named/sixtwo/gH.java` (inner `th`) | tick event shell |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_41caddc0a56bdc7f755d3307e98f69b0` (class-init) |
| `0xe23f,0x27a` | `awt` (main tick body), `awu` (private helper), `aww` (keyed int decryptor) |
| `0x857,0x26` | `awy` (string indy bootstrap) |
| none (pure dispatch stubs) | `awv`, `awx` |

Token layout of `0xe23f,0x27a` (positions prove attribution):

| Offsets | Tokens | Attribution |
|---|---|---|
| `0xe23f–0xe2b8` | eD seed/key tables (`dFmQY/DjFuE/OVOKz/iOWmB/awm/awq/SwBOk/XMRQM/duZAp`), `sixtwo/eD`, its three toggles (`uZrTG/hyNDF`, `oGUVa/NYwCO`, `YrRkq`), `method_20622`, `awu`, `aww`, `method_45474` | **eD-exclusive** |
| `0xe2bf–0xe3c7` | `sixtwo/eE` (Parkour) section: `ooppM/chvgy/awA/EWJat/iJToP/iQpCa/OTTMg`, `floatValue`, `method_989`, `awB`, `method_1009`, `method_20812`, `(Lnet/minecraft/class_1297;Lnet/minecraft/class_238;)Ljava/lang/Iterable;`, `com/google/common/collect/Streams`, stream factory, `findAny` | shared eE/eD overlap (both are edge-detection modules) |
| `0xe3c8–0xe3d7` | `sixtwo/eF` section (`vfMSC`) | eF |
| `0xe3d8–0xe40d` | `sixtwo/eG` (Spear Lunge) section: `axm/awP/mRcox/jymCX`, `field_63257` (`RegistryKeys.SPEARS`), `field_63420` (`LUNGE` enchantment) | eG |
| `0xe40e–0xe4b8` | `sixtwo/gY` section: `bcn`, `awK (ItemStack)AttackRangeComponent`, `class_12392` (`AttackRangeComponent`), `comp_5261` (`maxRange(F)F`), `sixtwo/hw$tv`, `awJ ()Lsixtwo/oI;` | eG/gY |

Token→yarn resolution (eD-relevant):

| Token | Yarn name |
|---|---|
| `method_20622` | `Input.hasForwardMovement()Z` (`class_744` = `net.minecraft.client.input.Input`) |
| `method_45474` | `BlockState.isReplaceable()Z` |
| `method_989` / `method_1009` | `Box.offset(DDD)` / `Box.expand(DDD)` (shared region) |
| `method_20812` + Iterable descriptor | `World.getBlockCollisions(Entity, Box) -> Iterable<VoxelShape>` (shared region) |
| `Streams` + `findAny` | Guava stream "any collision present" test (shared region) |
| `gH$th` | the per-tick event shell (tick handler parameter type) |

## Runtime model

### Identity

- `eD extends gg`. Constructor: `super(gf.aZL(50, false, gh.xgeEn))` — registry key **50**,
  not keybound, movement category `gh.xgeEn`. Registry description: "Automatically sneaks on
  block edge".
- No static state fields beyond the decryptor key tables; no timer/target objects in the Java
  class (unlike Parkour/Fast Bridge siblings that carry `mT` timers — eD has none).

### Event wiring (exact)

- Exactly one `@hG` listener: `awt(gH$th)` (`[18cb2ef40]`) — the **per-tick event**
  (`gH$th`, the same tick shell used by eP's main driver). Every tick while enabled, the VM
  body runs the edge/sneak decision.
- `awu()V` is `private native void` — private helper, not `@hG`; its name token sits between
  eD's toggles and `method_20622`, so eD's VM program references it.

### Behavior contract (recovered at API level)

1. **Movement gate**: reads `Input.hasForwardMovement()` (`method_20622`) — the input-state
   flag used to implement "Only When Moving Backwards" (bridge-activate only while the player
   is not pressing forward / is moving back). The token is eD-exclusive, so this read is
   attributable to eD.
2. **Block gate**: reads `BlockState.isReplaceable()` (`method_45474`) — eD-exclusive;
   plausibly tests that the block being bridged onto / through is air or replaceable.
3. **Edge detection + sneak actuation**: the collision/edge machinery (`Box.offset`/
   `Box.expand`, `World.getBlockCollisions`, Guava `Streams…findAny`) sits in the eE/eD shared
   region; for Fast Bridge the contract is: shrink/offset the player's box toward the edge,
   test whether any block collision still exists under it, and if the player is on the verge
   of stepping off, force the sneak input so the vanilla edge-clamp stops them. The sneak
   input itself is applied by the native patch layer (no Java token for setting sneaking is
   in the window — consistent with the `mixin/accessors` pattern seen in en/eo).
4. All three settings are plain toggles consumed inside the VM body; each can disable the
   module's effect entirely when its condition is not met (default all off = unconditional).

### Shared support classes (one line each)

- `gH` — framework event hub; `gH$th` = per-tick event payload.
- `eE` (Parkour), `eF`, `eG` (Spear Lunge), `gY` — neighboring modules sharing the pool
  region; eG owns the `SPEARS`/`LUNGE`/`AttackRangeComponent.maxRange` tokens.
- `hw$tv` — event/helper inner class in the gY section; not attributable to eD.

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_41caddc0a56bdc7f755d3307e98f69b0()V` | `18cb58220` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(eD.class)`. `[18cb58220]` |
| `awt(gH$th)V` | `18cb2ef40` | `0xe23f,0x27a` | `@hG` **main tick handler**. Body fully virtualized. eD-exclusive token evidence proves it reads its three toggles, `Input.hasForwardMovement()` and `BlockState.isReplaceable()`; the edge test via `getBlockCollisions`+`findAny` is in the shared region. Net contract: each tick, if the gating toggles pass, keep the player sneaking while standing on a block edge so bridging can't walk off. `[18cb2ef40]` |
| `awu()V` | `18cb44430` | `0xe23f,0x27a` | Private native helper (name referenced by eD's own token run). Body virtualized; role unrecovered (plausibly re-applies/releases the sneak state). `[18cb44430]` |
| `awv(MatchException) -> MatchException` | `18cb49550` | — | **Fully recovered: identity function** `return param_3;`. `[18cb49550]` |
| `aww(int, long) -> int` | `18cb495e0` | `0xe23f,0x27a` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0xe23f`). Output runtime-only. `[18cb495e0]` |
| `awx(Lookup,MutableCallSite,String,Object[]) -> int` | `18cb54500` | — | invokedynamic int bootstrap (dispatch stub). `[18cb54500]` |
| `awy(Lookup,String,MethodType) -> CallSite` | `18cb55510` | `0x857,0x26` | String-literal indy bootstrap. `[18cb55510]` |

Continuations (73 blocks): all `halt_baddata` VM stubs; no eD-owned game logic beyond the
window.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/eD.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Only When Holding Block" | `uZrTG` (`cJ`) | toggle | `.WE(false)` → **default off** | activate only while holding a block item |
| "Only When Looking At Block" | `oGUVa` (`cJ`) | toggle | `.WE(false)` → **default off** | activate only when the crosshair targets a block |
| "Only When Moving Backwards" | `YrRkq` (`cJ`) | toggle | `.WE(false)` → **default off** | activate only while moving backwards (ties to the `Input.hasForwardMovement()` read) |

Notes:
- No numeric settings; no step/min/max/default literals exist for this module.
- All three toggles default to off, i.e. with default config Fast Bridge is unconditional
  (subject to whatever hard gates are hard-coded in the VM body).
- The toggles are top-level (`cJ(this, …)`), not children of a group.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **The edge test's exact geometry.** Which box offsets/expansions are applied before
   `getBlockCollisions` (the `method_989`/`method_1009` calls are in the eE/eD shared region)
   and what `findAny` result maps to "at the edge" — pure VM arithmetic.
2. **How sneaking is applied/released** — via the native input patch (no Java/mixin token in
   eD's window); whether the sneak is pressed each tick or held with hysteresis is unknown.
3. **`awu()` role** — name is eD-owned but body is virtualized; could be sneak-release,
   enable/disable bookkeeping, or the per-tick sub-step.
4. **Shared-region attribution** for the collision machinery (eD vs Parkour `eE`): both are
   edge modules and both programs may reference the same tokens.
5. **`hasForwardMovement` polarity** for "Only When Moving Backwards" (uses `!` or compares
   against `Input.getMovementInput`) — not statically decidable.