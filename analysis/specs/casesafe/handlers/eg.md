# No Swing (sixtwo.eg) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/eg` ("No Swing", registry description
"Cancels swinging"), derived from native handler decompiles + pool-token evidence.
Companion to `analysis/specs/modules/eg.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_eg.c` | PRIMARY: 6 native handler stubs + 65 continuation blocks |
| Pool window `0xca94,0x225` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: `0xcaf0` onward is the eh/ei/eB family region |
| `analysis/decompiled/payload-decrypted/sixtwo/eg.java` | exact settings wiring (decrypted literals) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names (shared-region tokens) |
| `analysis/specs/coverage-matrix.tsv` | neighbor identities: eh=Auto Exp, ei=Scaffold, eB=Flight |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_bcedad5687c09f069cce1f935fb3cfb5` (class-init) |
| `0xca94,0x225` | `asv` (keyed int decryptor; the ONLY eg handler decrypting this window) |
| `0x857,0x26` | `asx` (string indy bootstrap) |
| none (pure dispatch stubs) | `asw` |

eg-exclusive token run (`0xcab4–0xcaef`): `sixtwo/eg`, `DdQgn` ("Client" toggle),
`WgBhf` ("Both" toggle), statics `QXbWi/ZWlNe/xbZpE/hTouB/uaZhk`, `asv`. **No
Minecraft-API token and no event-class token is eg-exclusive.**

Shared family tokens (`0xcaf0` onward, attributed to eh/ei/eB or shared):

| Token | Yarn name | Likely owner |
|---|---|---|
| `field_8287` | `Items.EXPERIENCE_BOTTLE` | eh (Auto Exp) |
| `method_5715` | `isSneaking()Z` | shared (swing-related predicates) |
| `method_6115` + `(Lnet/minecraft/class_1268;)Z` | `isUsingItem()Z` / `Hand` | shared |
| `method_2923` | `isBreakingBlock()Z` | shared |
| `method_24515` / `method_10074` | `getBlockPos() BlockPos` / `BlockPos.down()` | ei (Scaffold) |
| `sixtwo/oz` + `hitPoint` + `()Lsixtwo/oz;` + `(Lsixtwo/oz;)Lsixtwo/oT$vo;` + `()Lsixtwo/oS;` | block-interaction helper trio `oz`/`oS`/`oT$vo` (hit-point query) | ei/eB |
| `sixtwo/oD`, `sixtwo/oA`, `sixtwo/oB`, `cHC (BlockPos,oD,Z)->oA`, `cHF (oB,…)` | block-state/interaction helper classes | ei/eB |

## Runtime model

### Identity

- `eg extends gg`. Constructor: `super(gf.aZL(77, false, gh.qBzlZ))` — registry key **77**,
  not keybound, category `gh.qBzlZ`. Registry description: "Cancels swinging".

### Architecture — config-only Java surface (exact)

`eg` is one of the modules with **no Java-side behavior at all**: zero `@hG` handlers, zero
`@Override` lifecycle hooks, zero tick listeners. The decompiled class contains only:

- the two boolean toggles (below),
- **public native getters** `ast() -> cJ` and `asu() -> cJ` exposing each toggle
  (`[18d317ea0]`, `[18d3180a0]`) — the public accessor shape exists so other modules or the
  native patch layer can read the configuration,
- the constant-decryptor/bootstrap helpers.

The swing cancellation itself lives in the native patch layer (DLL): the swing hook consults
`ast()`/`asu()` and suppresses the arm-swing animation, and per "Both" also the outgoing
swing packet. This is the API contract for the rebuild: a config object with two booleans +
a native/mixin hook on `player.swingHand(Hand)` (and the `ClientPlayerEntity.sendSwingPacket`/
`EntryList`-equivalent server path) gated by them.

### Semantics implied by the setting names

- "Client" (default **on**): cancel the swing **client-side only** — the local arm-swing
  animation never plays.
- "Both" (default **off**): cancel on both sides — additionally suppress the C2S swing
  packet so the server and other players never see the swing. The exact packet/entry point is
  not named in any eg-visible token (the vanilla swing packet path is
  `ClientPlayNetworkHandler.sendPacket(PlayerInteractEntityC2SPacket Swing …)`, but that token
  is NOT in eg's window — do not treat the packet claim as cited evidence, only as the
  registry-consistent reading of the name "Both").

### Shared support classes (one line each)

- `eh` (Auto Exp), `ei` (Scaffold), `eB` (Flight) — neighbors sharing pool region `0xca94`;
  they own all Minecraft-API tokens in the window (see table above).
- `oz`/`oS`/`oT$vo` — block hit-point/interaction helpers (`hitPoint` field).
- `oD`/`oA`/`oB` — block-state/interaction helper classes (`cHC(BlockPos, oD, boolean) -> oA`).

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_bcedad5687c09f069cce1f935fb3cfb5()V` | `18d326bf0` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(eg.class)`. `[18d326bf0]` |
| `ast() -> cJ` | `18d317ea0` | — | Public native getter for the **"Client"** toggle (pure dispatch stub in the stitched corpus; the trivial return is VM-lazy but the signature is definitive). `[18d317ea0]` |
| `asu() -> cJ` | `18d3180a0` | — | Public native getter for the **"Both"** toggle. `[18d3180a0]` |
| `asv(int, long) -> int` | `18d3182a0` | `0xca94,0x225` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0xca94`). Its decrypt of the shared window is what carries the family's setting-name tokens. Output runtime-only. `[18d3182a0]` |
| `asw(Lookup,MutableCallSite,String,Object[]) -> int` | `18d322ed0` | — | invokedynamic int bootstrap (dispatch stub). `[18d322ed0]` |
| `asx(Lookup,String,MethodType) -> CallSite` | `18d323ee0` | `0x857,0x26` | String-literal indy bootstrap. `[18d323ee0]` |

Note: there is **no** clinit-visible behavior method, no `aaj`-style enable override, and no
`gH$*` parameter anywhere in eg's handler set — the module's 6 declared handlers are exactly
the ones above.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/eg.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Client" | `DdQgn` (`cJ`) | toggle | `.WE(true)` → **default on** | cancel the local (client) swing animation |
| "Both" | `WgBhf` (`cJ`) | toggle | `.WE(false)` → **default off** | also suppress the server-visible swing |

Notes:
- Two top-level toggles; no numeric settings (no step/min/max/default literals exist).
- The public getters `ast()`/`asu()` are the module's whole Java API.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **Where the swing hook lives and its exact conditions.** No `@hG` handler and no
   eg-exclusive Minecraft token exists; the DLL's swing patch is outside the decompiled
   payload. Whether additional hard gates exist (e.g. always swing when eating, per
   `isUsingItem`) cannot be ruled in or out from this corpus.
2. **"Both" implementation** — the C2S suppression point is not evidenced by any token in
   eg's window; the name-based reading above is the only basis.
3. **Shared-window attribution** — `isSneaking`/`isUsingItem`/`isBreakingBlock`/`getBlockPos`/
   `BlockPos.down`/`oz.hitPoint`/`EXPERIENCE_BOTTLE` belong to eh/ei/eB or to the shared
   region, NOT provably to eg; they are listed here only to bound what the region proves.
4. **`uaZhk` and other eg statics** (`QXbWi/ZWlNe/xbZpE/hTouB`) — decryptor key tables;
   no behavioral role recoverable.