# Safe Walk (sixtwo.ex) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/ex` ("Safe Walk", registry description
"Stops you from walking off blocks"), derived from native handler decompiles + pool-token
evidence. Companion to `analysis/specs/modules/ex.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_ex.c` | PRIMARY: 5 native handler stubs + 55 continuation blocks |
| Pool window `0xd9cf,0x25e` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: window head is ev's (`mixin/accessors/LivingEntityAccessor`/`setJumpDelay`); ex's own run follows; the tail is ey's packet machinery |
| `analysis/decompiled/payload-decrypted/sixtwo/ex.java` (via the decrypted tree; note the file lives at `payload-decrypted/sixtwo/ex.java`) | exact settings wiring |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names (shared-region tokens) |
| `analysis/specs/coverage-matrix.tsv` | neighbor identities: ev = Collision Long Jump, ey = Blink |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_bdc1508d9422d0323ece295e1c5c3830` (class-init) |
| `0xd9cf,0x25e` | `auW` (keyed int decryptor; the only ex handler decrypting the window) |
| `0x857,0x26` | `auY` (string indy bootstrap) |
| none (pure dispatch stubs) | `auV` (public toggle getter), `auX` |

Token layout of `0xd9cf,0x25e`:

| Offsets | Tokens | Attribution |
|---|---|---|
| window head | `tityAccessor` (descriptor tail of `mixin/accessors/LivingEntityAccessor`), `setJumpDelay`, `PkbYQ` | ev (Collision Long Jump) boundary artifact |
| mid | `sixtwo/ex`, `pyxZq`, `OqVLr`, `jBHTq`, `xLPDH`, `vtEAj`, `auW` | **ex-exclusive** |
| tail | `sixtwo/ey` (Blink) section: `rLHZE`, `avg`, `kPBXI`, `AOxxs`, `UMfxq`, `OpYvN`, then `method_5624`, `TYnKu`, `bBA (Lnet/minecraft/class_1297;)Lnet/minecraft/class_238;`, `kYSPP`, `Lnet/minecraft/class_238;`, `qXoKw`, `FTaWP`, `AtomicBoolean`, `Queue`/`poll`, `avf`, `sTmtd`, `sixtwo/gL$tk`, `bcf ()Lnet/minecraft/class_2596;`, `class_2743`, `sixtwo/gL$tj`, `class_6374`, `method_11818`, `cQjjl`, `method_5628`, `class_2828`, `class_2797`, `class_2793` | ey (Blink) / shared |

Token→yarn resolution (shared tail — NOT attributable to ex):

| Token | Yarn name |
|---|---|
| `method_5624` | `isSprinting()Z` |
| `bBA` + `(Lnet/minecraft/class_1297;)Lnet/minecraft/class_238;` | `jg.bBA(Entity) -> Box` (bounding-box helper) |
| `sixtwo/gL$tk` + `bcf ()Lnet/minecraft/class_2596;` | S2C packet-received event + `getPacket()` |
| `sixtwo/gL$tj` | C2S packet-send event |
| `class_2743` | `EntityVelocityUpdateS2CPacket` |
| `class_2828` / `class_2797` / `class_2793` / `class_6374` | `PlayerMoveC2SPacket` / `ChatMessageC2SPacket` / `TeleportConfirmC2SPacket` / `CommonPongC2SPacket` |
| `Queue`/`poll`/`AtomicBoolean` | Blink's packet-queue machinery |
| `method_11818` / `method_5628` | `Entity.getEntityId()` / `getId()` |

## Runtime model

### Identity

- `ex extends gg`. Constructor: `super(gf.aZL(51, false, gh.xgeEn))` — registry key **51**,
  not keybound, movement category `gh.xgeEn`. Registry description: "Stops you from walking
  off blocks".

### Architecture — config-only Java surface (exact)

Like `eg` (No Swing), `ex` has **no Java-side behavior**: zero `@hG` handlers, no enable
override, no tick listener. The class contains only:

- the "Release On Forward" toggle (below),
- **public native getter** `auV() -> cJ` (`[18cde7370]`) exposing it for the native patch
  layer and other modules,
- the constant-decryptor/bootstrap helpers.

The safe-walk actuation lives in the native movement patch: while enabled, the patch holds
the sneak input whenever the player would step off a block edge (the same edge-detection
concept as Parkour/Fast Bridge, but actuating sneak instead of jump). The edge geometry is
not token-visible for ex (no collision tokens are ex-exclusive) — see Unrecovered.

### "Release On Forward" semantics

The toggle name plus the family context: when **on**, the enforced sneak is released as soon
as the player presses forward (W), letting them walk off deliberately; when **off** (default),
safewalk never releases to forward input. The polarity is name-derived; the input read is
inside the native patch.

### Shared support classes (one line each)

- `ev` (Collision Long Jump) — neighbor; owns the `LivingEntityAccessor.setJumpDelay` head
  tokens.
- `ey` (Blink) — neighbor; owns the entire packet-queue token tail (`gL$tk`/`gL$tj` events,
  the four C2S packet classes, `Queue`/`poll`); not part of Safe Walk's behavior.
- `gL$tk`/`gL$tj` — packet event shells (S2C received / C2S sent) used by the ey family.
- `jg` — math/entity helper (`bBA(Entity) -> Box`).

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_bdc1508d9422d0323ece295e1c5c3830()V` | `18cdf60b0` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(ex.class)`. `[18cdf60b0]` |
| `auV() -> cJ` | `18cde7370` | — | Public native getter for the **"Release On Forward"** toggle (pure dispatch stub; signature definitive). The module's whole Java API. `[18cde7370]` |
| `auW(int, long) -> int` | `18cde7570` | `0xd9cf,0x25e` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0xd9cf`). Output runtime-only. `[18cde7570]` |
| `auX(Lookup,MutableCallSite,String,Object[]) -> int` | `18cdf2390` | — | invokedynamic int bootstrap (dispatch stub). `[18cdf2390]` |
| `auY(Lookup,String,MethodType) -> CallSite` | `18cdf33a0` | `0x857,0x26` | String-literal indy bootstrap. `[18cdf33a0]` |

Note: ex declares exactly 5 handlers; there is no clinit-visible behavior method and no
`aaj`-style override — the module's 6th surface (clinit aside) is the getter.

Continuations (55 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

Exact constructor wiring from the decrypted ctor (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Release On Forward" | `pyxZq` (`cJ`) | toggle | `.WE(false)` → **default off** | releases the enforced sneak when forward input is pressed |

Notes:
- Single-setting, top-level toggle; no numeric settings (no step/min/max/default literals).
- Public getter `auV()` is the only Java accessor.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **The edge-detection geometry and actuation point** — no collision/box/sneak token is
   ex-exclusive; the native movement patch implements it. Whether safewalk uses the vanilla
   sneak-edge clamp or its own box probe is not decidable from this corpus.
2. **"Release On Forward" polarity and edge cases** (e.g. does releasing persist until W is
   released?) — name-derived reading only.
3. **Shared-tail attribution** — the `isSprinting`/packet-class tokens belong to ev/ey; they
   are listed only to bound what the window proves.
4. **Whether Safe Walk applies while sneaking is already held** (interaction with manual
   sneak) — native-side, unknown.