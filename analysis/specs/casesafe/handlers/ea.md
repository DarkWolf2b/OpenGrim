# No Break Delay (sixtwo.ea) — handler-derived behavior spec

Class: `sixtwo/ea` · display name **No Break Delay** · registry description
"Removes destroy delay" · primary key 57, active bind -999 (unbound)
[`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`ea | No Break Delay | 7 | 7 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_ea.c` — **7 native handlers** +
   0 separate continuation fragments in this file's header count, but
   continuation blocks are appended; behavior handler `ari` decrypts one class
   slice and tail-dispatches into the j2cc VM. Citations are image addresses.
2. Class slice `POOL[0xc177,0x211]` resolved via
   `analysis/tools/resolve_pool_blob.py` (declared by `ari` and one more
   handler; window straddles neighbors eb/ec).
3. Java skeleton: `payload-named/sixtwo/ea.java` + decrypted
   `payload-decrypted/sixtwo/ea.java`.
4. Structural spec `analysis/specs/modules/ea.md`; framework
   `analysis/specs/00-framework.md`; Yarn tiny `1.21.11+build.6`.

## Runtime model

- `super(gf.aZL(57, false, gh.qBzlZ))` — id 57, category `gh.qBzlZ`
  `[decompiled ea.java:22]`.
- Single setting `rzTvo` — **"Destroy Delay"** (`cC` numeric): name from int[]
  fold `[68,101,115,116,114,111,121,32,68,101,108,97,121]` = "Destroy Delay",
  chain `.Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0).Vz(ENAXX)` — step 1.0, min 0.0,
  max 10.0, default 0.0, suffix from encrypted string `ENAXX` (value
  unrecovered) `[decompiled, decrypted ea.java:28-38]`.
- One `@hG` listener `ari(gH$th)` — the client tick event (pre-motion tick
  family; verified dispatch order in `handlers/er.md`) `[decompiled]`.
- Extra statics: `ENAXX` (suffix string, native-decrypted via `ark([B)String`),
  obfuscation statics `xPCiw/ADNhJ/CORiV/VZXHC` `[decompiled]`.
- dS's module-spec claim "Settings (0 constructed)" is wrong; the decrypted
  stub shows exactly one `cC` `[cross-check]`.
- **ea's own symbol run** (between the `sixtwo/ea` marker and the
  `sixtwo/eb` marker) — remarkably small and precise:
  - `mixin/accessors/MultiPlayerGameModeAccessor` + `getDestroyDelay` +
    `setDestroyDelay` — the mixin accessor pair over
    `ClientPlayerInteractionManager`'s private block-breaking delay field
    `[slice]`.
  - `rzTvo` (the setting), plumbing natives `are/arj/arl`, statics
    `xPCiw/CORiV/ADNhJ/VZXHC` `[slice]`.
- Window head `net/minecraft/class_1811` (`RangedWeaponItem`) is the previous
  class's tail; everything from `sixtwo/eb` onward (`class_476
  GenericContainerScreen`, `class_495 ShulkerBoxScreen`, `class_2371
  DefaultedList`, `method_7963 isDamageable`, `method_7681 hasStack`,
  `method_18276 isInSneakingPose`, `method_31709 hasBlockEntity`,
  `method_36455 getPitch`, `method_1037 rotateX`, `method_36454 getYaw`,
  `method_1024 rotateY`, `toRadians`, `sixtwo/ec`) belongs to **eb (Chest
  Stealer)** / **ec (Ghost Hand)** runs — NOT ea `[window straddle,
  stub-matched]`. No other MC surface exists for ea.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_9cc2c0b9f3964686b5ba2b38633269d2()V` | `[18d7ab410]` | native clinit stub (`POOL[0x226,0xd]`) |
| `ari(Lsixtwo/gH$th;)V` | `[18d76fe40]` | the entire behavior: tick listener (virtualized) |
| `arj(MatchException)MatchException` | `[18d774af0]` | identity rethrow (`return param_3;`) |
| `ark([B)Ljava/lang/String;` | `[18d774b80]` | string decryptor for suffix constants (`ENAXX`) |
| `arl(IJ)I` | `[18d79c140]` | int-constant decrypt kernel (register-mixing family; decrypts `POOL[0xc177,0x211]` at the end) |
| `arm(Lookup;MutableCallSite;String;[Object;)I` | `[18d7a76f0]` | MutableCallSite re-bootstrap |
| `arn(Lookup;String;MethodType;)CallSite` | `[18d7a8700]` | indy bootstrap (`POOL[0x857,0x26]`) |

- **`ari(gH$th)` [18d76fe40]** — decrypts `POOL[0xc177,0x211]`,
  `ExceptionCheck` (JNI vtable `+0x720`), VM dispatch. Contract from the
  symbol run: every client tick, read the destroy-delay field of
  `ClientPlayerInteractionManager` through the
  `MultiPlayerGameModeAccessor` mixin and write it back through
  `setDestroyDelay` — with "Destroy Delay"=0 (the default) the delay is
  zeroed, removing the vanilla pause between block-breaking progress steps.
  A nonzero setting value presumably caps the delay at N ticks
  (`max=10.0`, step `1.0`); which direction the setting maps (cap vs. floor)
  is virtualized `[slice, inferred, uncertain]`.
- Negative evidence: no hit-result, no rotation, no packet, no screen tokens
  in ea's own run — the module touches exactly one field
  `[slice, negative evidence]`.

## Settings → behavior

- **`rzTvo` — `"Destroy Delay"` (`cC`)** `[decompiled, decrypted]`:
  - step `.Vy(1.0)`; min `.Vw(0.0)`; max `.Vx(10.0)`; default/current
    `.VA(0.0)`; suffix `.Vz(ENAXX)` — `ENAXX` is decrypted at runtime by
    `ark([B)` (DES pool), value **unrecovered** (likely a tick unit).
  - Getter surface for the VM: `cC.VI()/VB()/VC()/VD()` (double/float/int/long).
- Registry: id 57, bind -999, description "Removes destroy delay" `[registry]`.

## Unrecovered

1. The body of `ari` (VM dispatch at `18d76ff00`-ish jump table; continuation
   blocks end in `halt_baddata`) — whether the setting is a cap, an override,
   or a toggle threshold is unknown; never guessed.
2. The suffix string of `ENAXX` (runtime-decrypted `byte[]` → not in
   `decrypted/full-dump.jsonl`, which holds only `(IJ)I` constants).
3. Whether the accessor write happens every tick or only when the field is
   non-zero `[uncertain]`.
4. `BLOB_DECRYPTOR` (`FUN_190dd72e0`) internals — contract only, from sibling
   precedent.
