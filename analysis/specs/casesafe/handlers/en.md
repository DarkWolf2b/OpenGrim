# Anti Ghost (sixtwo.en) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/en` ("Anti Ghost", registry description
"Fixes ghost blocks"), derived from native handler decompiles + pool-token evidence.
Companion to `analysis/specs/modules/en.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_en.c` | PRIMARY: 7 native handler stubs + 66 continuation blocks |
| Pool window `0xd0d7,0x240` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: tokens at `0xd0d7–0xd1df` are referenced only by en; tokens `0xd1e0–0xd317` overlap the neighboring `eo` window (`0xd1e0,0x243`) |
| `analysis/decompiled/payload-decrypted/sixtwo/en.java` | constructor wiring (no settings) |
| `analysis/decompiled/payload-named/sixtwo/jd.java` | **fully recovered** packet-send helper `jd.bAo(SequencedPacketCreator)` |
| `analysis/decompiled/payload-named/sixtwo/mT.java` | timer API (recovered Java) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names |
| `analysis/ghidra/handlers-stitched/sixtwo_eo.c` | overlap check (`0xd1e0,0x243` / `0xd3d7,0x249`) |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_d1779fc2e4e3d22bd315c72dfeecf1c8` (class-init) |
| `0xd0d7,0x240` | `aaj` (enable hook), `atp` (private helper), `atr` (keyed int decryptor) |
| `0x857,0x26` | `att` (string indy bootstrap) |
| none (pure dispatch stubs) | `atq`, `ats` |

en-only vs shared tokens (absolute offsets; boundary `0xd1e0` = start of eo's window):

| Offsets | Tokens | Attribution |
|---|---|---|
| `0xd0d7–0xd0db` | `BkK`, `atm` | shared with neighbor `em` (`em.atm(int,long)I` is em's int decryptor) |
| `0xd0df–0xd0ea` | `field_6017`, `method_11312` | **en-only** |
| `0xd0f7–0xd113` | `sixtwo/en`, `XGcHI`, `cPtuD`, `kpGmO`, `atq` | **en-only** (own seed/fields/helper) |
| `0xd117–0xd1e9` | `class_2846`, `class_2846$class_2847`, `field_12971`, `Lnet/minecraft/class_2846$class_2847;`, `(III)V`, `(Lnet/minecraft/class_2846$class_2847;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)V` | **en-only up to `0xd1e0`**; the ctor descriptor straddles the eo boundary |
| `0xd1ea–0xd317` | en's key tables (`BCAKr/VqNdz/pFvmE/atr`), `sixtwo/eo`, `method_3144`, `method_6058`, `class_2868`, `DVCYL`, `method_6048`, `class_2596`, `class_7204`, `field_3913`, `class_744`, `bAo`, `(Lnet/minecraft/class_7204;)V`, `method_3128`, `mixin/accessors/ClientInputAccessor` | shared with eo (eo also references all of these) |

Token→yarn resolution:

| Token | Yarn name |
|---|---|
| `field_6017` | `Entity.fallDistance` (double) |
| `method_11312` | `ShulkerBoxBlockEntity.getAnimationProgress(F)F` |
| `class_2846` / `class_2846$class_2847` | `PlayerActionC2SPacket` / `PlayerActionC2SPacket$Action` |
| `field_12971` | `PlayerActionC2SPacket$Action.ABORT_DESTROY_BLOCK` |
| `(Lnet/minecraft/class_2846$class_2847;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)V` | `new PlayerActionC2SPacket(Action, BlockPos, Direction)` |
| `class_2868` | `UpdateSelectedSlotC2SPacket` |
| `class_2596` / `class_7204` | `Packet` / `ClientPlayNetworkHandler`-side `SequencedPacketCreator` |
| `field_3913` / `class_744` | `ClientPlayerEntity.input` / `net.minecraft.client.input.Input` |
| `bAo` + `(Lnet/minecraft/class_7204;)V` | `jd.bAo(SequencedPacketCreator)` (static helper, recovered) |
| `method_3128` | `getMovementInput()` |
| `method_3144` | `isRiding()` |
| `method_6058` / `method_6048` | `getActiveHand()` / `getItemUseTime()` |
| `mixin/accessors/ClientInputAccessor` | the DLL's mixin exposing client input state |

## Runtime model

### Identity

- `en extends gg`. Constructor: `super(gf.aZL(46, false, gh.xgeEn))` — registry key **46**,
  not keybound, movement category `gh.xgeEn`. Class seed: `XGcHI ^ 139603776702640L`.
- **No settings.** The constructor creates only `this.cPtuD = mT.cpA();` — a millisecond
  timer created WITHOUT initial reset (`mT.cpA()` = `new mT(false)`; contrast `cpz()` which
  resets). With no reset the timer reads as already-elapsed, so the first "gate" check passes
  immediately; a debounce pattern is implied (reset via `cpB()` after each action).

### Lifecycle (exact)

- `aaj()V` is `@Override public native void aaj()` — override of `gg.aaj()`, which is the
  **enable hook**: `gg.aaj()` = `hF.bdI(this)` (register the module's listeners on the Java
  event bus). en's override is virtualized (blob `0xd0d7,0x240`).
- `atp()V` is `private native void` — private helper, not `@hG`-annotated; its name token
  `atp` also appears in eo's second window (`0xd3d7,0x249`), so the eo family calls it.
- en declares **zero `@hG` event handlers** and **zero settings** — the entire runtime
  behavior must be driven from the enable hook plus native-side hooks (the DLL patch layer),
  not from the Java event bus.

### The packet-send path (fully recovered: `jd.bAo`)

The shared window names `bAo(SequencedPacketCreator)`; its Java body (jd.java:126) is
decompiled and complete:

```37:126:analysis/decompiled/payload-named/sixtwo/jd.java
    public static void bAo(SequencedPacketCreator var0) {
        // ... null-checks rD.dlmvG.getNetworkHandler() and .world, returns if absent ...
        var4_3 = ((ClientLevelAccessor)v3).getBlockStatePredictionHandler().incrementSequence();
        var5_4 = var4_3.getSequence();
        rD.dlmvG.getNetworkHandler().sendPacket(var0.predict(var5_4));
        // ... closes the prediction handler (v6.close()) ...
    }
```

This is the vanilla 1.21+ block-prediction sequence protocol: increment the prediction
sequence, build the packet for that sequence via `creator.predict(seq)`, send it, and close
the `ServerboundBlockPlayerActionPacket`-style prediction handle. Anti Ghost demonstrably
sends sequenced player-action packets through this helper.

### Shared support classes (one line each)

- `jd` — misc static utility class (packet sender `bAo`, string/byte helpers `bAm`/`bAf`/`bAh`,
  MatchException rethrow `bAp`); uses `mixin.accessors.ClientLevelAccessor`.
- `mT` — millisecond timer: `cpA()`/`cpz()` factories, `cpB()` reset, `cpC(long)` =
  `System.currentTimeMillis() - vJZlo - l2 > 0`.
- `eo` (registry key 39, same category) — neighboring module sharing the pool window; its
  settings ("Matrix", "Grim V3", "Main Hand", "Item Options"/"Shield"/"Chargeables") and the
  `UpdateSelectedSlotC2SPacket`/input tokens are eo's side of the overlap.
- `em` — neighbor whose int-decryptor `atm` and static `BkK` head en's window.

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_d1779fc2e4e3d22bd315c72dfeecf1c8()V` | `18d184470` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(en.class)`. `[18d184470]` |
| `aaj()V` | `18d0135a0` | `0xd0d7,0x240` | `@Override` **enable hook** (replaces `gg.aaj()` = `hF.bdI(this)`). Body virtualized. en-only token evidence: reads/writes `fallDistance`, reads `ShulkerBoxBlockEntity.getAnimationProgress(F)F`, and constructs `PlayerActionC2SPacket` with `Action.ABORT_DESTROY_BLOCK` (`field_12971`) via `(Action, BlockPos, Direction)` ctor — the classic anti-ghost resync: re-send a dig-abort action for a specific block position + face to force the server/client to agree on the block state. `[18d0135a0]` |
| `atp()V` | `18d165410` | `0xd0d7,0x240` | Private helper; same blob. In the shared overlap it also touches `UpdateSelectedSlotC2SPacket`, `Packet`/`SequencedPacketCreator` send (`jd.bAo`), `ClientPlayerEntity.input` (`field_3913`) via the `ClientInputAccessor` mixin, `getMovementInput()`, `isRiding()`, `getActiveHand()`, `getItemUseTime()`. Plausible roles: the periodic/deferred half of the resync (gated by `cPtuD` timer debounce) — but the caller wiring is native and unprovable. `[18d165410]` |
| `atq(MatchException) -> MatchException` | `18d1755a0` | — | **Fully recovered: identity function** `return param_3;`. `[18d1755a0]` |
| `atr(int, long) -> int` | `18d175630` | `0xd0d7,0x240` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0xd0d7`). Output runtime-only. `[18d175630]` |
| `ats(Lookup,MutableCallSite,String,Object[]) -> int` | `18d180750` | — | invokedynamic int bootstrap (dispatch stub). `[18d180750]` |
| `att(Lookup,String,MethodType) -> CallSite` | `18d181760` | `0x857,0x26` | String-literal indy bootstrap. `[18d181760]` |

Continuations (66 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

**None.** `en` has zero settings: the decrypted constructor contains no `cA/cB/ct/cu/cv/cw/cz`
construction and no int-array name decodings — only `this.cPtuD = mT.cpA();` and the super
call. There are no step/min/max/default literals to cite for this module. The debounce timer
`cPtuD` is not exposed as a setting (its threshold, if any, lives inside the VM bodies).

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **`aaj`/`atp` control flow.** When the `ABORT_DESTROY_BLOCK` packet is constructed and for
   which `BlockPos`/`Direction` (presumably the last block the client thinks changed), what
   triggers the resync (block-update mismatch detection is not visible in any Java), and
   whether `jd.bAo` or a direct `sendPacket` is used.
2. **The `fallDistance` and `ShulkerBoxBlockEntity.getAnimationProgress` roles** — both are
   en-only tokens; exact gating (e.g. skip resync while falling / while a shulker is
   animating) is unrecoverable.
3. **Shared-overlap attribution** (`UpdateSelectedSlotC2SPacket`, input/accessor,
   `getMovementInput`, `isRiding`, `getActiveHand`, `getItemUseTime`): every one of these is
   also referenced by eo's program; whether en uses them, eo, or both is not decidable from
   the window layout alone.
4. **What `atp` is called from.** en has no `@hG` handlers; the call site is in the native
   layer (DLL patch or VM dispatch), so the tick/defer model is unknown.
5. **`mT` debounce threshold** and the exact `cpC/cpD` comparison used.
6. **Whether `aaj` still registers listeners** — it overrides `hF.bdI(this)`; if the native
   body omits the registration, en's native-side hooks substitute for the bus entirely.