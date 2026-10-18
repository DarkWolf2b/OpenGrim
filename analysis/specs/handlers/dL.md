# No Entity Clip (sixtwo.dL) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/dL` ("No Entity Clip", registry description
"Ignores entity hitboxes"), derived from native handler decompiles + pool-token evidence.
Companion to `analysis/specs/modules/dL.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dL.c` | PRIMARY: 6 native handler stubs + 58 continuation blocks |
| Pool window `0xa95b,0x1dd` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: `0xab17` onward belongs to `sixtwo/dN` (Slot Lock, incl. `KeyBinding.dropKey`) |
| `analysis/decompiled/payload-decrypted/sixtwo/dL.java` | exact settings wiring (decrypted literals) |
| `analysis/decompiled/payload-named/sixtwo/hh.java` | the `hh` event shell (fully decompiled) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names |
| `analysis/ghidra/handlers-stitched/sixtwo_dW.c` (Freecam, registry 76) | cross-check: dW.aqu(hh) is the second `hh` listener |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_05bd19a8cf8c644a334ebd019e2b6fa0` (class-init) |
| `0xa95b,0x1dd` | `anq` (main body), `ans` (keyed int decryptor) |
| `0x857,0x26` | `anu` (string indy bootstrap) |
| none (pure dispatch stubs) | `anr`, `ant` |

Token layout of `0xa95b,0x1dd`:

| Offsets | Tokens | Attribution |
|---|---|---|
| `0xa95b` | `43;Lnet/minecraft/class_2350;)V` (descriptor tail; head belongs to the previous class's window) | shared boundary artifact |
| `0xa97b–0xab16` | `sixtwo/dL`, `MvRUw`, `class_243`, `method_10263`, `anr`, `lXvtl`, `method_10264`, `method_10260`, `(DDD)V`, `class_3489`, `field_42614`, `Lnet/minecraft/class_6862;`, `field_17559`, `method_31573`, `(Lnet/minecraft/class_6862;)Z`, `sixtwo/hh`, `bcA`, `method_17742`, `(Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965;`, `method_55754`, `method_1560`, `net/minecraft/class_1297`, `method_5745`, `(DFZ)Lnet/minecraft/class_239;`, `OKemK`, `xmVgM`, `VTfqp`, `ans` | **dL-exclusive** |
| `0xab17–0xab38` | `sixtwo/dN`, `YAFsA`, `aoo`, `field_1869` (`KeyBinding.dropKey`), `mO` | dN (next class in the pool region) |

Token→yarn resolution (all dL-exclusive tokens):

| Token | Yarn name |
|---|---|
| `class_243` + `(DDD)V` | `Vec3d` / `new Vec3d(x, y, z)` |
| `method_10263` / `method_10264` / `method_10260` | `BlockPos.getX()` / `getY()` / `getZ()` |
| `class_3489` + `field_42614` | `ItemTags` / `ItemTags.PICKAXES` (`TagKey`) |
| `class_6862` + `method_31573` + `(Lnet/minecraft/class_6862;)Z` | `TagKey` / `ItemStack.isIn(TagKey) -> boolean` |
| `field_17559` | `RaycastContext$ShapeType.OUTLINE` |
| `method_17742` + `(Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965;` | `World.raycast(RaycastContext) -> BlockHitResult` |
| `method_55754` | `getBlockInteractionRange()D` (player block-reach attribute) |
| `method_1560` + `class_1297` | `MinecraftClient.getCameraEntity() -> Entity` |
| `method_5745` + `(DFZ)Lnet/minecraft/class_239;` | `Entity.raycast(double, float, boolean) -> HitResult` |
| `sixtwo/hh` + `bcA` | the `hh` event + its float getter |

## Runtime model

### Identity

- `dL extends gg`. Constructor: `super(gf.aZL(56, false, gh.qBzlZ))` — registry key **56**,
  not keybound, category `gh.qBzlZ` (third category; shared with Freecam dW). Registry
  description: "Ignores entity hitboxes".

### Event wiring (exact)

- Exactly one `@hG` listener: `anq(hh)` (`[18dd238f0]`).
- `hh extends hH` (cancelable): carries a single `float cLQBU` with getter `bcA()`. This is a
  **shared query event** — exactly two listeners exist in the whole payload: `dL.anq(hh)`
  (No Entity Clip) and `dW.aqu(hh)` (Freecam). The float's meaning is unrecovered (see
  Unrecovered); given the consumer set, it is the entity-hitbox clip/reach decision point
  fired by the native interaction patches.
- No other event handlers, no `gH$th` tick listener — dL is purely reactive to `hh`.

### Behavior contract (recovered at API level)

The dL-exclusive token run gives an almost complete picture of the listener's Minecraft
interaction, in what is very plausibly program order:

1. Gate on the setting `lXvtl` ("Only With Pickaxe"): `ItemStack.isIn(ItemTags.PICKAXES)`
   (`method_31573` + `field_42614`); setting default **on** (`.WE(true)`).
2. Build a `Vec3d` (`class_243` + `(DDD)V` ctor) and take `BlockPos.getX()/getY()/getZ()`
   (`method_10263/10264/10260`) — i.e. it resolves a specific block position.
3. Raycast to find that position: `World.raycast(RaycastContext)` → `BlockHitResult`
   (`method_17742`) with `RaycastContext$ShapeType.OUTLINE` (`field_17559`), the start point
   coming from the camera (`MinecraftClient.getCameraEntity()`, `method_1560` +
   `class_1297`), max distance from the player's block-reach (`getBlockInteractionRange()`,
   `method_55754`), and/or the entity raycast `Entity.raycast(double, float, boolean)` →
   `HitResult` (`method_5745`).
4. The registry purpose then follows: while the gate passes, entity hitboxes between the
   camera and the targeted block are ignored (the native collision/interaction patch is told
   to skip them — via `hH.bdX(true)` canceling the `hh` query, most plausibly), so a pickaxe
   can mine blocks through/behind entities without the entity's box clipping the swing.

Net effect: "Ignores entity hitboxes" is scoped by "Only With Pickaxe" (default on) and is
driven by a per-interaction `hh(float)` query rather than a per-tick loop.

### Shared support classes (one line each)

- `hh` — cancelable float-carrying event shell (consumed by dL and dW/Freecam).
- `dN` — Slot Lock (next module in the shared pool region; owns `KeyBinding.dropKey` tokens).
- `dW` — Freecam (registry 76, same category; second `hh` listener).
- `cJ` — boolean toggle wrapper (`.WE(bool)` = default).

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_05bd19a8cf8c644a334ebd019e2b6fa0()V` | `18dd37a10` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(dL.class)`. `[18dd37a10]` |
| `anq(hh)V` | `18dd238f0` | `0xa95b,0x1dd` | `@hG` **entity-clip query handler** (the module's only behavior entry point). Body fully virtualized, but the dL-exclusive token run (see Runtime model) pins its Minecraft surface: pickaxe gate (`isIn(ItemTags.PICKAXES)`), block resolution (`Vec3d`, `BlockPos.get*`), raycasts (`World.raycast` OUTLINE / `Entity.raycast`), reach (`getBlockInteractionRange`), camera (`getCameraEntity`), and the `hh.bcA()` float. Exact cancel decision inside the VM. `[18dd238f0]` |
| `anr(MatchException) -> MatchException` | `18dd28b80` | — | **Fully recovered: identity function** `return param_3;`. `[18dd28b80]` |
| `ans(int, long) -> int` | `18dd28c10` | `0xa95b,0x1dd` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0xa95b`). Output runtime-only. `[18dd28c10]` |
| `ant(Lookup,MutableCallSite,String,Object[]) -> int` | `18dd33cf0` | — | invokedynamic int bootstrap (dispatch stub). `[18dd33cf0]` |
| `anu(Lookup,String,MethodType) -> CallSite` | `18dd34d00` | `0x857,0x26` | String-literal indy bootstrap. `[18dd34d00]` |

Continuations (58 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/dL.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Only With Pickaxe" | `lXvtl` (`cJ`) | toggle | `.WE(true)` → **default on** | gates the whole module: entity hitboxes are ignored only while the relevant held item is in `ItemTags.PICKAXES` (`method_31573` + `field_42614`) |

Notes:
- Single-setting module; no numeric literals (no step/min/max/default exist to cite).
- The tag membership test token is dL-exclusive, so the pickaxe gate is attributable to dL
  (unlike most of this family's shared tokens).

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **The meaning of `hh.bcA()` (the float)** and which side computes it: candidates include
   the reach/clip distance or a damage/interaction amount; the producer is the native patch
   that fires `hh`, which is outside the decompiled payload.
2. **The exact cancel semantics** — whether canceling `hh` makes the native patch skip
   entity collision for movement, for attack raycasts, for block interactions, or all three.
3. **Order/role of the two raycasts** (`World.raycast(OUTLINE)` → `BlockHitResult` vs
   `Entity.raycast(D,F,Z)` → `HitResult`): both tokens are present; which one produces the
   `BlockPos` whose components are read, and what the comparison is, live in the VM.
4. **What the Vec3d + `BlockPos.get*` reads are used for** (e.g. re-checking the block behind
   an entity) — arithmetic not statically recoverable.
5. **Whether Freecam (`dW`) shares this behavior or merely the event type** — dW's own
   handling of `hh` is virtualized in dW's window.