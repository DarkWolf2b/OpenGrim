# No Push (sixtwo.es) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/es` ("No Push"), derived from native handler
decompiles + pool-token evidence. Companion to the structural spec `analysis/specs/modules/es.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_es.c` | PRIMARY: 7 native handler stubs (one per declared method of `sixtwo/es`) + 71 continuation blocks |
| Pool window `0xd62f,0x24f` (POOL base RVA `0x301ee40`, image base `0x180000000`) | full decrypted token stream for `aup`/`auq`/`aus` (dumped in full below; the stitched annotation truncates at 600 chars) |
| `analysis/decompiled/payload-decrypted/sixtwo/es.java` | exact settings wiring (decrypted literals) |
| `analysis/decompiled/payload-named/sixtwo/{hd,hq,hH,cv,cw,os,op,ow,ov,eu}.java` | event classes and shared helpers |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names (`method_60123`, `method_5721`, `method_5762`, `method_40126`, `method_5784`, `field_6308`, `field_14717`, ...) |
| `analysis/ghidra/handlers-stitched/sixtwo_eu.c` (pool window `0xd679,0x252`) | overlap check: eu's window is a contiguous sub-slice of es's window shifted +0x4a, proving the es/eu pool region is shared |

Handler → pool-blob usage map (decrypt call `FUN_190dd72e0(env, POOL_RVA+off, len)`):

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_e247605082268ca529ec3d4615a01be3` (class-init; tokens `ang/String; | <`) |
| `0xd62f,0x24f` | `aup`, `auq`, `aus` (shared interpreted-body pool) |
| `0x857,0x26` | `auu` (string-literal indy bootstrap; tokens `odHandle; | iUrOn | Ljava/util/Map; | java/l`) |
| none (pure dispatch stubs) | `aur`, `aut` |

Full token stream of the `0xd62f,0x24f` body pool (verbatim):

```
99 | (Lnet/minecraft/class_243;)V | sixtwo/es | oDHva | aur | lfLfR | sixtwo/hd | uaNzy |
sixtwo/hq | hTUdB | EQALu | aus | watFw | sixtwo/eu | QJqHC | sixtwo/op | sixtwo/ow | xNAmx |
Lsixtwo/ow; | auM | (Lsixtwo/os;ZLsixtwo/ow;IZ)V | OBGxe | SDRyJ | net/minecraft/class_1890 |
method_60123 | (Lnet/minecraft/class_1799;Lnet/minecraft/class_1309;)F | method_5721 | qLIIU |
fBBZY | dmOfg | method_15374 | (D)F | method_15362 | method_15355 | method_5762 |
method_40126 | (IFLnet/minecraft/class_1799;)V | auO | net/minecraft/class_1313 | field_6308 |
Lnet/minecraft/class_1313; | method_5784 | (Lnet/minecraft/class_1313;Lnet/minecraft/class_243;)V |
net/minecraft/class_3417 | fi    <- blob ends mid-token at 0x24f bytes
```

(The window is one slice of a shared constant-pool region: `eu`'s own window
`0xd679,0x252` starts inside es's range and re-lists `sixtwo/hq`, `op`, `ow`, `xNAmx`, `auM`,
`OBGxe`, the riptide tokens and `field_14717`. Token attribution between es and eu is therefore
conservative; both classes' VM bodies demonstrably reference the shared window.)

## Runtime model

### Identity

- `es extends gg` (module base). Constructor: `super(gf.aZL(37, false, gh.xgeEn))` — registry
  key **37**, not keybound, movement category `gh.xgeEn`. Registry description: "Prevents
  pushing out of blocks" [registry]. Class seed: `oDHva ^ 46708857925585L`.

### Event wiring (exact)

Both substantive handlers are `@hG` listeners on the Java event bus (`hF` registry,
`hH.bdV()` pull-dispatch, `invokeWithArguments(source, event)`):

- `aup(hd)` — `hd extends hH` carries a single `BlockPos kjIxy` (getter `bcw()`): the
  **block push event**, i.e. the game is about to push the player out of / through the block
  at that position. `hd`/`hq` are constructed and dispatched by the native movement patches
  (no `new hd(`/`new hq(` site exists anywhere in the decompiled Java tree — verified by grep).
- `auq(hq)` — `hq extends hH` carries two `Entity` refs (`bcZ()` pusher, `bda()` pushee): the
  **entity push event** (entity-vs-entity collision push).
- `hH` contract: `bdX(boolean)` sets the cancel flag `QQqas`, `bdW()` reads it. Canceling an
  event is the only communication channel from a listener back to the patch; there is no
  return value.
- `es` is the ONLY class in the entire decompiled payload declaring handlers for `hd` and
  `hq` (verified by grep over `payload-decrypted/sixtwo/*.java`); `ev.auR(hq)` exists as a
  second `hq` listener sharing the neighboring pool window.

### Shared support classes (one line each)

- `os` — abstract motion/rotation resolver: `cFU() -> Vec3d`, `cFT(ov, ov, Entity) -> ov`,
  `cGa(ov, ov) -> ov`, statics `cGb(String)`/`cGc() -> String` (native).
- `op extends os` — concrete subclass; both overrides native.
- `ov` — 2-float yaw/pitch rotation wrapper (`WjcUH`, `pDaqa`); used by `os.cFT`/`cGa`.
- `ow` — 4-constant enum (`PrjIy`, `qPfya`, `xNAmx`, `dJEUh`), natives `cGP()/cGQ()/cGR() -> Z`;
  constant `xNAmx` is named in es's window.
- `eu` — sibling movement module "Boost Cooldown" (registry key 40, same category `gh.xgeEn`);
  its slider `OBGxe` (step 1.0, min 0.0, max 20.0, default 10.0) and seed `QJqHC` appear in
  es's window.

### State (fields, exact names)

| Field | Type | Role |
|---|---|---|
| `nPcnW` | `cv` | settings group container |
| `lfLfR`, `uaNzy` | `cw` | boolean toggles (children of `nPcnW`) |
| `oDHva` | `static long` | class decrypt seed |
| `EQALu`, `hTUdB`, `watFw` | `static long[]`, `Integer[]`, `Map` | key tables / caches for the invokedynamic constant decryptors (`aus`/`auu`/`aut`) |

## Per-handler semantics

All j2cc-VIRTUALIZED handlers follow the skeleton: pool-blob decrypt
(`FUN_190dd72e0(env, *plRam000000018301ee50 + OFF, LEN)`), `ExceptionCheck` via JNIEnv vtable
`+0x720`, then a 2-way indirect jump `(&UNK_x + (cond==0)*8)` into the continuation where the
body is lazily interpreted by the VM (blocks end in `halt_baddata`). Statically recoverable:
signature, blob, token surface.

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_e247605082268ca529ec3d4615a01be3()V` | `18ceb0200` | `0x226,0xd` | Class-init trampoline called from `<clinit>` after `Loader.doInit(es.class)`. `[18ceb0200]` |
| `aup(hd)V` | `18ce9a5a0` | `0xd62f,0x24f` | `@hG` **block-push event handler**. Body virtualized. Token evidence (window is shared with `auq`/`aus`/eu): reads its own toggles `lfLfR`/`uaNzy`, sibling module `eu` (`OBGxe` slider + seed), the `op`/`ow` motion/rotation resolver pair (`ow.xNAmx`), the static helper `auM(os,Z,ow,I,Z)`, and the riptide API set below. `[18ce9a5a0]` |
| `auq(hq)V` | `18ce9dc10` | `0xd62f,0x24f` | `@hG` **entity-push event handler**; same blob, same token surface. `[18ce9dc10]` |
| `aur(MatchException) -> MatchException` | `18cea0e30` | — | **Fully recovered: identity function** `return param_3;` — MatchException rethrow wrapper used by every try/catch. `[18cea0e30]` |
| `aus(int, long) -> int` | `18cea0ec0` | `0xd62f,0x24f` | Keyed int-constant decryptor for the `aut<"…">` indy sites: large opaque constant-mixing state machine (XOR/rotate/multiply chains over `0x1820c4070..` table entries and seeds like `0xba751a7d7bb63c57`, `0x8ea24cd102d03e09`, `0x34d756acfd44217b`, `0x60597adf2e54ad89`) then decrypts `0xd62f`. Output not statically computable. `[18cea0ec0]` |
| `aut(Lookup,MutableCallSite,String,Object[]) -> int` | `18ceac4e0` | — | invokedynamic int bootstrap (pure 2-way dispatch stub). `[18ceac4e0]` |
| `auu(Lookup,String,MethodType) -> CallSite` | `18cead4f0` | `0x857,0x26` | String-literal indy bootstrap (`auu<"e">(idx, key)` sites in the ctor). `[18cead4f0]` |

Riptide API surface inside the `0xd62f` window (resolved via yarn `1.21.11+build.6`):

| Token | Yarn name |
|---|---|
| `method_60123` + `(Lnet/minecraft/class_1799;Lnet/minecraft/class_1309;)F` | `EnchantmentHelper.getTridentSpinAttackStrength(ItemStack, LivingEntity)` |
| `method_5721` | `ClientPlayerEntity.isTouchingWaterOrRain()` |
| `method_15374` / `method_15362` / `method_15355` | `MathHelper.sin(D)F` / `MathHelper.cos(D)F` / `MathHelper.sqrt(F)F` |
| `method_5762` | `Entity.addVelocity(DDD)` |
| `method_40126` + `(IFLnet/minecraft/class_1799;)V` | `ClientPlayerEntity.useRiptide(int, float, ItemStack)` |
| `method_5784` + `field_6308` + `(Lnet/minecraft/class_1313;Lnet/minecraft/class_243;)V` | `Entity.move(MovementType.SELF, Vec3d)` |
| `class_3417` + `field_14717` | `SoundEvents.ITEM_TRIDENT_RIPTIDE_3` |
| `class_1890` | `net.minecraft.enchantment.EnchantmentHelper` |

Two readings of this surface, neither provable statically:

1. **Exemption check (most likely for es itself):** before canceling a push, the VM body
   checks whether the local player is in a trident riptide spin attack
   (`getTridentSpinAttackStrength > 0`, which requires `isTouchingWaterOrRain`); riptide
   motion is implemented via `move(SELF, …)`/`addVelocity`/`useRiptide` + `RIPTIDE_3` sound,
   so push-cancellation must skip it or it would freeze the spin attack.
2. **Boost application (eu's logic in the shared window):** the sin/cos/sqrt + `addVelocity` +
   `move(SELF)` + `useRiptide` + riptide-sound cluster matches a riptide boost engine, and
   `eu` ("Boost Cooldown", slider 0–20 default 10) lives in the same window. The sin/cos pair
   implies a horizontal direction is derived from an angle (yaw), but the exact arithmetic is
   inside the VM and is NOT recoverable — see Unrecovered.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/es.java` (all literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Cancel Push" | `nPcnW` (`cv`) | sub-settings group container | — | parent of both toggles below |
| "Block Push" | `lfLfR` (`cw`, child of nPcnW) | toggle | built as `cw(nPcnW, mr.clS(...)).Tz()`; `cw`'s constructor sets internal default `wefqQ = true` | block-push cancellation for `hd(BlockPos)` events |
| "Entity Push" | `uaNzy` (`cw`, child of nPcnW) | toggle | built as `cw(nPcnW, mr.clS(...))` (no `.Tz()` chain) | entity-push cancellation for `hq(Entity,Entity)` events; **corrected 2026-10-17 (wave-1 static re-verify B): defaults OFF — only "Block Push" carries `.Tz()`, and the behaviour accessor is `TC()`** |

Notes:
- `cw` constructor sets its boolean state field `wefqQ = true`, so both toggles default to
  **on** as constructed; whether `.Tz()` (native builder, applied only to `lfLfR`) mutates the
  default is unrecovered.
- Neither toggle has an explicit `.WE(false)`-style builder call in the decrypted source, and
  there are no numeric settings in this module (no min/step/max literals exist to cite).
- The asymmetry `.Tz()` on "Block Push" only is the only structural difference between the two
  toggles.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **All `0xd62f` interpreted bodies' control flow and arithmetic.** `aup`/`auq` decrypt the
   shared blob and jump into the j2cc VM; all 71 continuation blocks are `halt_baddata` stubs.
   Whether canceling is unconditional (`hH.bdX(true)`) or gated (e.g. skip while riptiding,
   skip pistons, skip slime bounces) is only known at the contract level.
2. **Which of the two riptide readings above is correct**, and the exact role of
   `auM(Lsixtwo/os;ZLsixtwo/ow;IZ)V` — that signature exists ONLY in the native pool (no
   `auM` overload with those parameters is declared anywhere in the decompiled tree; `eu`'s
   `auM(MatchException)` is a different method). Owner class, semantics and whether it
   applies or queries motion are unknown.
3. **`ow` enum semantics**: display names of `PrjIy`/`qPfya`/`xNAmx`/`dJEUh` are DES-encrypted
   and absent from `analysis/decrypted/full-dump.jsonl`; the meaning of `cGP/cGQ/cGR` and why
   es names `xNAmx` specifically is unknown.
4. **`os`/`op` resolver semantics** (`cFU`, `cFT(ov,ov,Entity)`, `cGa(ov,ov)`) — all native;
   only signatures known. Whether es calls them or merely shares tokens with eu is undecidable.
5. **Whether es reads `eu.OBGxe` ("Boost Cooldown") and what for** — the token appears in the
   shared window; `OBGxe` is `private final` in eu, so access would go through a synthetic
   accessor or the VM; purpose unrecovered.
6. **`.Tz()` builder effect** on the "Block Push" toggle (native; possibly flips default,
   visibility, or registration order).
7. **Firing sites of `hd`/`hq`** — constructed by native patches outside the decompiled
   payload; the exact Minecraft code paths patched (collision push, piston, bubble column,
   fishing rod, knockback …) are not recoverable from this corpus.
8. **`aus` output values** — the keyed int decryptor's results (setting-index constants) are
   runtime-only.