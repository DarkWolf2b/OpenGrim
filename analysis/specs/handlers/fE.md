# No Miss (sixtwo.fE) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/fE` ("No Miss", registry description
"Cancels attack if misses"), derived from native handler decompiles + pool-token evidence.
Companion to `analysis/specs/modules/fE.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_fE.c` | PRIMARY: 7 native handler stubs + 67 continuation blocks |
| Pool window `0x1432e,0x329` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: `0x1432e–0x14619` overlaps `fD`'s window (`0x142f2,0x328`, ends `0x1461a`); tokens `0x1461a–0x14657` are fE-exclusive |
| `analysis/decompiled/payload-decrypted/sixtwo/fE.java` | exact settings wiring (decrypted literals) |
| `analysis/decompiled/payload-named/sixtwo/gz.java`, `ox.java`, `fo.java` | event shell, reach/raycast resolver, friends list |
| `analysis/specs/00-framework.md` | settings wrapper semantics, `hH` event contract |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_498a2541682d4f0c47923b0484cb8662` (class-init) |
| `0x1432e,0x329` | `aSN` (main event body), `aSQ` (keyed int decryptor) |
| `0x857,0x26` | `aSS` (string indy bootstrap) |
| none (pure dispatch stubs) | `aSO`, `aSP`, `aSR` |

**Pool-sharing caveat.** The `0x1432e,0x329` window is the same shared fD–fH family region as
fD's. The overlap `0x1432e–0x14619` contains fD's fields (`Fdfgt`, `OcUPP`, `ByUPz`, `QIEUj`,
`aSK`) plus the family Minecraft tokens (`cHk(Predicate)Lsixtwo/ox;`,
`bxt(MatrixStack,Iterable,mG)` render hook). fE-exclusive tokens (`0x1461a` onward):
`objof`, `mcave`, `OYFtx`, `iznEa`, `loMXv`, `KIJQr`, `oURtD`, `UxVgK`, `iywBD`, and a
truncated type descriptor `Lsix…`. fE's own fields (`aoNus`, `noHUW`, `zeyXv`, `jDLKd`,
`mcfaS`, `JDHpD`, `vDVkv`) all sit in the shared region and are demonstrably read by fE's VM
bodies.

## Runtime model

### Identity

- `fE extends gg`. Constructor: `super(gf.aZL((int)17, false, gh.xwjCw))` — registry key
  **17**, not keybound, combat category `gh.xwjCw`. Class seed: `jDLKd` (name unresolved,
  XOR'd per-constructor).
- Sibling of `fD` (Uncharge Block, key 19): same settings-tree shape, same event, same pool
  family. fE adds "Ignore Friends" and has **no numeric slider**.

### Event wiring (exact)

- Exactly one `@hG` listener: `aSN(gz)` (`[18aec8da0]`).
- `gz extends hH` — the **key/mouse-input event** (same shell as fD): carries
  `InputUtil.Key YKcvD` (`bbL()`), `Map<Key, List<KeyBinding>> zrjpu` (`bbM()`), and
  predicates `bbJ()`/`bbK(KeyBinding)`. Fired by the native input patch (no construction site
  in the decompiled tree).
- The registry purpose ("Cancels attack if misses") maps to: on the attack key event, resolve
  what the crosshair is on (the family window names `ox.cHk(Predicate)Lsixtwo/ox;`, the
  raycast/reach resolver) and cancel the event (`hH.bdX(true)`) when the swing would hit
  nothing. The exact miss test is inside the VM.

### State (fields, exact names)

| Field | Type | Role |
|---|---|---|
| `aoNus` | `ct` | settings group "Items To Use" |
| `RDugC`, `YbiEE`, `IGJjx` | `cu` | choice children of `aoNus` |
| `zeyXv` | `cz` | action setting "Slots" with callback `this::aSO` |
| `noHUW` | `cJ` | toggle "Ignore Friends" (`.WE(false)` → default **off**) |
| `jDLKd` | `static long` | class decrypt seed |
| `mcfaS`, `JDHpD`, `vDVkv` | `static Integer[]` / `long[]` / `Map` | invokedynamic constant-decryptor key tables |

### Shared support classes (one line each)

- `ox` — reach/raycast context builder (`wuRIs` Entity, `HJoUm` ov rotation, `rnYFy = 3.0`
  range, `RaycastContext.ShapeType.OUTLINE`), `cHk(Predicate<LivingEntity>) -> ox` filter,
  resolves `BlockHitResult`/`EntityHitResult` (uses `ProjectileUtil`, `VoxelShapes`).
- `gz` — key-input event shell (above).
- `fo` — friends-list store (`fo.aLp(PlayerEntity)` = Friends module enabled **and** player
  in `fo.OiqRK`; used by the family's friend filtering, same exclusion semantics as in
  Mace Aura's scanner).
- `cA`/`ct`/`cu`/`cz`/`cJ` — settings wrappers (numeric/group/choice/action/toggle).

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_498a2541682d4f0c47923b0484cb8662()V` | `18aee1a10` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(fE.class)`. `[18aee1a10]` |
| `aSN(gz)V` | `18aec8da0` | `0x1432e,0x329` | `@hG` **input-event handler** (the module's only behavior entry point). Body fully virtualized. Token evidence: reads all six settings fields (`aoNus`, `noHUW`, `zeyXv` + static keys); per registry purpose cancels the attack key event when the swing would miss. The family-shared `ox.cHk(Predicate)` is the plausible miss-resolver; the friend exclusion presumably consults `fo.aLp`. `[18aec8da0]` |
| `aSO() -> Boolean` | `18aed26a0` | — | `private native /* synthetic */ Boolean aSO()` — the "Slots" action callback (`zeyXv.Vf(this::aSO)`); identical role to fD's `aSI`. Dispatch stub; internals virtualized. `[18aed26a0]` |
| `aSP(MatchException) -> MatchException` | `18aed2af0` | — | **Fully recovered: identity function** `return param_3;`. `[18aed2af0]` |
| `aSQ(int, long) -> int` | `18aed2b80` | `0x1432e,0x329` | Keyed int-constant decryptor (opaque XOR/rotate/multiply state machine, then decrypts `0x1432e`). Output runtime-only. `[18aed2b80]` |
| `aSR(Lookup,MutableCallSite,String,Object[]) -> int` | `18aeddcf0` | — | invokedynamic int bootstrap (dispatch stub). `[18aeddcf0]` |
| `aSS(Lookup,String,MethodType) -> CallSite` | `18aeded00` | `0x857,0x26` | String-literal indy bootstrap. `[18aeded00]` |

Continuations (67 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/fE.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Items To Use" | `aoNus` (`ct`) | group container | — | parent of the three choice entries below |
| "All Items" | `RDugC` (`cu`, child of aoNus) | choice entry | name only | miss-cancel applies to every held item |
| "Only Weapons" | `YbiEE` (`cu`, child of aoNus) | choice entry | name only | applies only to weapon items |
| "Specified Slots" | `IGJjx` (`cu`, child of aoNus) | choice entry | name only | applies only to slots chosen via "Slots" |
| "Slots" | `zeyXv` (`cz`) | action + `.Vf(this::aSO)` | — | opens the slot-selection UI |
| "Ignore Friends" | `noHUW` (`cJ`) | toggle | `.WE(false)` → **default off** | when on, attacks on friends are never canceled (miss test skipped for friends) |

Notes:
- Identical tree to `fD` except fE has no "Threshold" slider — there are **no numeric
  literals** (step/min/max/default) in this module to cite.
- The `cu` entries' radio-vs-toggle semantics are not recoverable from Java (native builders).

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **`aSN` body control flow.** The miss test itself — whether it is a raycast-only check
   (`ox`), a distance check, or a server-echo check — lives in the j2cc VM. No `method_`
   Minecraft tokens are fE-exclusive, so the exact client API used for the miss decision is
   not recoverable from the window.
2. **Attribution of the family-shared tokens** (`cHk(Predicate)Lsixtwo/ox;`,
   `bxt(MatrixStack,Iterable,mG)`, `ox` usage) to fE vs fD/fF/fG/fH — one shared pool region.
3. **`aSO()` internals** — native slot picker returning boxed `Boolean`; storage of the slot
   selection (no collection field in fE's Java; presumably the native `ga`/`gb` state
   container) is unknown.
4. **"Ignore Friends" semantics** — the `fo.aLp` linkage is inferred from the family window
   and the module's purpose, not from a direct token (no `fo` reference in fE's window).
5. **`cu` entry semantics** (exclusive radio vs independent toggles).