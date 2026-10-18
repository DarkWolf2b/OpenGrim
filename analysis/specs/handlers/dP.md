# Block Piercer (sixtwo.dP) — handler-derived behavior spec

Class: `sixtwo/dP` · display name **Block Piercer** · registry description
"Allows to place blocks through entities" · primary key 143, active bind -999
(unbound) [`analysis/specs/registry.tsv`]. Superclass `gg` (module base).
Coverage matrix: `dP | Block Piercer | 9 | 9 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_dP.c` — **9 native handlers** +
   **89 continuation blocks**; every behavior handler decrypts the same class
   slice and tail-dispatches into the j2cc VM ("Jumptable … did not pass
   sanity check" at `18dbc7ce1/18dbcd55a/18dbd4a71/18dbd9791`). All citations
   are image addresses (`0x18xxxxxxx`).
2. Class slice `POOL[0xaec1,0x1e8]` (pool base image `+0x301ee50`), resolved
   with `analysis/tools/resolve_pool_blob.py` from
   `analysis/ghidra/dumps/jna-decrypted-v2.dll`.
3. Java skeleton: `analysis/decompiled/payload-named/sixtwo/dP.java` + decrypted
   literal variant `payload-decrypted/sixtwo/dP.java` (int[] string folds).
4. Structural spec: `analysis/specs/modules/dP.md`; framework contract:
   `analysis/specs/00-framework.md`.
5. Yarn mapping: `analysis/jars/yarn-1.21.11+build.6.tiny`.

Attribution rule (per `handlers/eA.md` precedent): the decrypt window is padded
into neighbors; tokens are attributed to dP only when they sit between the
`sixtwo/dP` marker and dP's own statics (`pSJuP | kOBSI | aoV | RwFEW`) or match
a dP field/native. Window head (`hqIKw … aoO | aoK`) and tail (`sixtwo/dQ …
()Lnet/minecraft/class_1113;`) belong to dO/dQ respectively.

## Runtime model

- `super(gf.aZL(143, false, gh.qBzlZ))` — module id 143, category `gh.qBzlZ`,
  flag `false` (meaning unrecovered) `[decompiled dP.java:26]`.
- State: `KhkCT` (client `HitResult` cache — the working crosshair/aim result),
  `jOKrR` (Entities setting), `bMPfs` (Allowed Blocks setting), obfuscation
  statics `xCesR/kOBSI/pSJuP/RwFEW` `[decompiled]`.
- Two `@hG` listeners, both on the `gO` tick family: `aoR(gO$tm)` and
  `aoS(gO$tn)`. `gO$tm`/`gO$tn` are tick-phase variants (exact pre/post split
  unrecovered; sibling specs treat `tm` as the main tick event) `[inherited from
  eW.md/dF.md, inferred]`.
- One private native `aoT() → Hand` — hand selector used by the place logic
  `[decompiled stub]`.
- Recoverable MC API surface (dP's own run of `POOL[0xaec1,0x1e8]`):
  - `method_55755` → `PlayerEntity.getEntityInteractionRange()` — reach gate for
    the entity being pierced `[slice, tiny-mapped]`.
  - `()[Lnet/minecraft/class_1268;` → `Hand.values()` + `method_5998` →
    `LivingEntity.getStackInHand(Hand)` — iterate hands / read held stack
    `[slice, tiny-mapped]`.
  - `method_45162` → `getEnabledFeatures()`, `method_45435` →
    `isItemEnabled(FeatureSet)`, `net/minecraft/class_9779` →
    `RenderTickCounter`, `method_61966` → `getRenderTickCounter()`,
    `method_60637` → `getTickProgress(Z)F` — feature-gating of the item and
    tick-progress reads `[slice, tiny-mapped]`.
  - `field_1333` → `HitResult.MISS` — the no-target fallback when no acceptable
    block exists behind the entity `[slice, tiny-mapped]`.
  - Predicate-shaped token `VX (Lnet/minecraft/class_1297;)Z` (takes `Entity`,
    returns boolean) sits inside dP's run — an entity-filter helper consistent
    with the `Entities` set check `[slice, inferred, uncertain]`.
- **No** packet classes, no rotation manager (`ov`/`qL`), no block-entity
  machinery — dP is a placement-targeting fixup, not a packet module
  `[negative evidence, same slice]`.
- No `YO()` override in the decompiled stub (but a native `YO` handler exists
  at `[18dbc7c20]` — the base disable path, same as sibling modules)
  `[decompiled]`.

### Pool slices

| POOL[off,len] | handlers | content |
|---|---|---|
| `[0x226,0xd]` | `_dbdd37ae…` only | shared clinit slice (`ang/String;`, `<`) |
| `[0x857,0x26]` | `aoX` only | indy bootstrap plumbing (`odHandle;`, `iUrOn`, `Ljava/util/Map;`) |
| `[0xaec1,0x1e8]` | `YO, aoR, aoS, aoT, aoU, aoV` | class symbol slice (see above); head is dO's, tail is dQ's (`sixtwo/dQ | AFdCl | apb | sixtwo/gI | bcc | ()Lnet/minecraft/class_1113;` = Hit Sounds' sound-event head) |
| continuation smalls `[0xb15,0x2c] [0x724,0x22] [0xbc9,0x2f] [0x784,0x25]` | VM continuations | scheduler (`HashMap`,`Runnable`,`(J)J`), bounds-exception, `StringBuilder`/`javax/crypto`, `Thread`/`intValue` plumbing |

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `YO()V` | `[18dbc7c20]` | disable/cleanup entry (base `gg.YO` path) |
| `_dbdd37ae9e60b3e40dfe5790eb5fd042()V` | `[18dbee740]` | native clinit stub (`POOL[0x226,0xd]`) |
| `aoR(Lsixtwo/gO$tm;)V` | `[18dbcd490]` | tick listener A (behavior — virtualized) |
| `aoS(Lsixtwo/gO$tn;)V` | `[18dbd49b0]` | tick listener B (behavior — virtualized) |
| `aoT()Lnet/minecraft/class_1268;` | `[18dbd96d0]` | hand selection helper |
| `aoU(MatchException)MatchException` | `[18dbded70]` | identity rethrow (`return param_3;`) |
| `aoV(IJ)I` | `[18dbdee00]` | int-constant decrypt kernel (~600 lines of register mixing over `uRam18337exxx` globals, `func_0x00018dbea990` key helper, popcount/clz bit tricks, constants `0x84222325`, `0x84225cda`, `0x7fff`, `0x2925`, `0x1204a865`, `0x41f4327f`, `0xd800243f`, `0x2167ba91`, `0xde986e94`, `0xbe0bf6a6`, `0x27ff9bbf`, `0x1d800243f`, `0x5ed4dadb`, `0xdbb3b449`, `0x25090601`, rotate-by-`0x1d`/`0x11` mixing) — anti-analysis machinery |
| `aoW(Lookup;MutableCallSite;String;[Object;)I` | `[18dbeaa20]` | MutableCallSite re-bootstrap (cache invalidation) |
| `aoX(Lookup;String;MethodType;)CallSite` | `[18dbeba30]` | indy bootstrap (`POOL[0x857,0x26]`) |

- **`aoR`/`aoS` [18dbcd490, 18dbd49b0]** — both decrypt `POOL[0xaec1,0x1e8]`,
  `ExceptionCheck` (vtable `+0x720`), dispatch into the VM. From the symbol
  run, each tick the module: reads the working `HitResult` (`KhkCT`), gates on
  `getEntityInteractionRange()`, tests the blocking entity against the
  Entities set (via the `(Entity)Z` predicate), and re-targets block placement
  past the entity; `Hand.values()`/`getStackInHand` enumerate the held stacks,
  `isItemEnabled(getEnabledFeatures)` feature-gates them, and `HitResult.MISS`
  is the sentinel stored when no block target qualifies.
  `RenderTickCounter.getTickProgress` suggests one arm runs at render-time
  precision (marker/highlight or animated aim assist). The precise
  raycast/rebuild math is virtualized — never guessed `[slice, inferred,
  uncertain]`.
- **`aoT` [18dbd96d0]** — returns the `Hand` to place with; the VM body is not
  recovered `[slice, uncertain]`.

## Settings → behavior

- **`jOKrR` — `"Entities"` (`cF` entity-type-set setting)** `[decompiled,
  decrypted dP.java:28-36]`: `new cF(this, mr.clS("Entities")).VS(jg$tJ.OCdZM)`.
  `cF` defaults to `{EntityType.PLAYER}` (`cF.java:38-40`); `.VS(jg$tJ.OCdZM)`
  applies a preset/flag (builder body failed to decompile — CFR switch error;
  exact effect unrecovered). Entities listed here are pierce-through
  candidates `[inferred]`.
- **`bMPfs` — `"Allowed Blocks"` (`cK` item/block-set setting)** `[decompiled,
  decrypted dP.java:37-56]`: `new cK(this, mr.clS("Allowed
  Blocks")).WM(jc.GjreY).WN(Items.COBWEB)` — default set `{COBWEB}`;
  `.WM(jc.GjreY)` attaches an item-collection constant (`jc` enum, semantics
  unrecovered). Restricts which blocks may be placed through entities
  `[inferred]`.
- Registry: id 143, bind -999, description "Allows to place blocks through
  entities" `[registry]`.
- No numeric settings exist (no `cA`/`cC` constructed) `[decompiled]`.

## Unrecovered

1. The full body of `aoR`/`aoS`/`aoT` (VM-dispatched at `18dbcd55a`,
   `18dbd4a71`, `18dbd9791`) — which hand wins, how the entity-blocked ray is
   recomputed, and whether the module auto-swaps to an "Allowed Blocks" item
   are all inside the VM.
2. Meaning of the `VX (Entity)Z` predicate owner (dP helper vs inherited
   helper) and of `.VS(jg$tJ.OCdZM)` / `.WM(jc.GjreY)` builder arguments.
3. The `false` flag in `gf.aZL(143, false, gh.qBzlZ)` and the exact pre/post
   split of `gO$tm` vs `gO$tn` `[uncertain]`.
4. `BLOB_DECRYPTOR` (`FUN_190dd72e0`) internals — contract only
   (`env, pool_ptr+off, len` → decrypted slice) taken from sibling precedent.
