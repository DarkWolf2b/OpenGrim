# Item Frame Blocker (sixtwo.dD) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/dD` ("Item Frame Blocker", registry description
"Blocks putting items to an item frame"), derived from native handler decompiles + pool-token
evidence. Companion to `analysis/specs/modules/dD.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dD.c` | PRIMARY: 6 native handler stubs + 62 continuation blocks |
| Pool window `0x9309,0x19f` (POOL base RVA `0x301ee40`) | full token stream (see per-handler table; every substantive token is dD's — the window contains no neighbor markers) |
| `analysis/decompiled/payload-decrypted/sixtwo/dD.java` | exact settings wiring (decrypted literals) |
| `analysis/decompiled/payload-named/sixtwo/gO.java`, `gO$tm.java` | event family (fully decompiled) |
| `analysis/decompiled/payload-named/sixtwo/oR.java` + `jc.java` | **fully recovered** weapon predicate `oR.cJV` |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_07021457c400d30aa53725408e6f5e94` (class-init) |
| `0x9309,0x19f` | `akB` (main body), `akD` (keyed int decryptor) |
| `0x857,0x26` | `akF` (string indy bootstrap) |
| none (pure dispatch stubs) | `akC`, `akE` |

Full token stream of `0x9309,0x19f` (verbatim):

```
ElrnL | sErFE | BbEXB | zuPTe | aku | aky | sixtwo/dD | bapnK | akC | field_1765 |
Lnet/minecraft/class_239; | net/minecraft/class_239 | method_17783 |
()Lnet/minecraft/class_239$class_240; | net/minecraft/class_239$class_240 | field_1331 |
Lnet/minecraft/class_239$class_240; | net/minecraft/class_3966 | method_17782 |
()Lnet/minecraft/class_1297; | net/minecraft/class_1533 | ZKjem | htjaR | dxsTa | sixtwo/oR |
cJV | (Lnet/minecraft/class_1309;)Z | mJHrk | Uy | APUxf | s…  (window ends)
```

Token→yarn resolution:

| Token | Yarn name |
|---|---|
| `field_1765` + `Lnet/minecraft/class_239;` | `MinecraftClient.crosshairTarget` (`HitResult`) |
| `method_17783` + `()Lnet/minecraft/class_239$class_240;` | `HitResult.getType() -> HitResult$Type` |
| `field_1331` + `Lnet/minecraft/class_239$class_240;` | `HitResult$Type.ENTITY` |
| `class_3966` | `EntityHitResult` |
| `method_17782` + `()Lnet/minecraft/class_1297;` | `EntityHitResult.getEntity() -> Entity` |
| `class_1533` | `net.minecraft.entity.decoration.ItemFrameEntity` |
| `sixtwo/oR` + `cJV` + `(Lnet/minecraft/class_1309;)Z` | `oR.cJV(LivingEntity) -> boolean` (weapon predicate, fully recovered) |

## Runtime model

### Identity

- `dD extends gg`. Constructor: `super(gf.aZL(70, false, gh.qBzlZ))` — registry key **70**,
  not keybound, category `gh.qBzlZ`. Registry description: "Blocks putting items to an item
  frame".

### Event wiring (exact)

- Exactly one `@hG` listener: `akB(gO$tm)` (`[18df69e10]`).
- `gO extends hH` (cancelable) is the **interaction event family** with three payloads
  `gO$tl`, `gO$tm`, `gO$tn` (all empty shells in Java — the fields are native-side). Users:
  dD, dF (Lever Replace), dP (Block Piercer; also tn), dZ (Fast Place; also tl), eW (Auto Hit
  Crystal), eX (Anchor Macro). This usage pattern identifies `gO$tm` as the **item-use /
  right-click (use) event** — the interaction that places an item into an item frame.
- No tick handler; purely reactive to the use event.

### Behavior contract (recovered at API level)

The token stream gives a nearly complete decision pipeline:

1. Read `MinecraftClient.crosshairTarget` (`field_1765`).
2. `HitResult.getType()` (`method_17783`), compare against `HitResult$Type.ENTITY`
   (`field_1331`).
3. Cast to `EntityHitResult` (`class_3966`) and call `getEntity()` (`method_17782`).
4. Test the entity against `ItemFrameEntity` (`class_1533`).
5. Evaluate the item filter (settings tree below); the "Only Weapons" branch is served by the
   named helper `oR.cJV(LivingEntity)` — **fully recovered Java** (oR.java:516):
   `mainHandStack.isIn(ItemTags.SWORDS) || jc.bzl(stack) [= isIn(ItemTags.AXES)] ||
   stack.isOf(Items.MACE)`.
6. If the target is an item frame and the filter matches, cancel the use event
   (`hH.bdX(true)`) so the item is not placed into the frame.

### Shared support classes (one line each)

- `gO`/`gO$tl`/`gO$tm`/`gO$tn` — cancelable interaction event family (see above).
- `oR` — inventory/interaction static helper (also does `clickSlot(QUICK_MOVE)`); `cJV` =
  weapon test (swords/axes/mace).
- `jc` — item static helper; `bzl(stack)` = `isIn(ItemTags.AXES)` (recovered).
- `cz` — action setting with callback (the "Slots" picker trigger).
- `ct`/`cu` — settings group + child entries.

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_07021457c400d30aa53725408e6f5e94()V` | `18df80020` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(dD.class)`. `[18df80020]` |
| `akB(gO$tm)V` | `18df69e10` | `0x9309,0x19f` | `@hG` **use-event handler** (the module's only behavior entry point). Body fully virtualized, but the token stream pins the pipeline: crosshairTarget → `getType() == Type.ENTITY` → `EntityHitResult.getEntity()` → `ItemFrameEntity` check → item filter (`oR.cJV` for weapons) → cancel. `[18df69e10]` |
| `akC(MatchException) -> MatchException` | `18df717f0` | — | **Fully recovered: identity function** `return param_3;`. `[18df717f0]` |
| `akD(int, long) -> int` | `18df71880` | `0x9309,0x19f` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0x9309`). Output runtime-only. `[18df71880]` |
| `akE(Lookup,MutableCallSite,String,Object[]) -> int` | `18df7c300` | — | invokedynamic int bootstrap (dispatch stub). `[18df7c300]` |
| `akF(Lookup,String,MethodType) -> CallSite` | `18df7d310` | `0x857,0x26` | String-literal indy bootstrap. `[18df7d310]` |

Continuations (62 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/dD.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Mode" | `ZKjem` (`ct`) | group container | ctor literal `"Mode"` (int array `77,111,100,101`) | parent of the three entries below; name suggests an **exclusive radio** (vs fD/fE's "Items To Use" tree) |
| "All Items" | `Qtxqy` (`cu`, child of ZKjem) | choice entry | name only | block placing of any item into frames |
| "Only Weapons" | `VCHhf` (`cu`, child of ZKjem) | choice entry | name only | block only swords/axes/mace — exact predicate `oR.cJV`: `isIn(ItemTags.SWORDS) || isIn(ItemTags.AXES) || isOf(Items.MACE)` |
| "Specified Slots" | `ABbIM` (`cu`, child of ZKjem) | choice entry | name only | block only items in the slots picked via "Slots" |
| "Slots" | `mJHrk` (`cz`) | action setting | name only | opens the slot-selection picker |

Notes:
- Three-entry tree named "Mode" (radio-shaped, unlike fD/fE's "Items To Use" group); no numeric settings (no step/min/max/default literals).
- The weapon definition for "Only Weapons" is exact and citable (recovered Java), a rare
  fully-recovered predicate in this family.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. ~~The group container's display name~~ — resolved: it is **"Mode"** (`77,111,100,101`).
2. **Which frame types are covered** — `class_1533` is `ItemFrameEntity`; whether
   `GlowItemFrame` (`class_1533$class_1534`, an `ItemFrameEntity` subclass) is included
   depends on the VM's type test (`instanceof` would include it; `getClass()` equality would
   not).
3. **Whether canceling stops just the frame placement or the whole use action** — the
   cancelable `gO$tm` shell carries no fields; the patch-side scope of the cancel is native.
4. **`Specified Slots` storage** — slot selection persists in the native state container;
   picker UI not decompiled.