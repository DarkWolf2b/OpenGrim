# Auto Dripstone (sixtwo.fd) — handler-derived behavior spec

Class: `sixtwo/fd` · display name **Auto Dripstone** · registry description
"Automatically places dripstone and opens trapdoor" · primary key 15, active bind
-999 (unbound) [registry]. Superclass: `gg` (module base). Constructed via
`super(gf.aZL(15, false, gh.xwjCw))` (module id 15 recovered from the decrypt dump;
category constant `gh.xwjCw`).

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fd.c` — **17 native handlers** +
   **247 continuation blocks**, 0 unresolved table targets; **204/247 blocks end in
   `halt_baddata()`**. Behavior bodies live in the embedded bytecode VM; handlers are
   decrypt-stubs.
   - JNI-op census: mostly VM opcode glue (`ExceptionCheck`, `ExceptionOccurred`,
     `IsInstanceOf`, `ThrowNew`, `GetObjectField`, `GetArrayLength`, `CallVoidMethodA`,
     `AllocObject`, `SetObjectField`, `GetFloatField`, critical-array pairs) — all in
     continuation blocks, all generic opcode implementations. **1 `rdtsc`** — inside a
     continuation block that passes `rdtsc() >> 32` as an argument to an indirect call
     (`[~0x1fe9...]` region); it feeds a value rather than gating logic — anti-analysis
     noise, treated as such per batch rules.
2. `analysis/decompiled/payload-named/sixtwo/fd.java` + `fd$sO.java` — complete Java
   skeleton: 1 setting, 2 state fields, 1 timer, native method surface, and the
   **plan record `fd$sO(BlockPos dripstonePos, BlockPos trapdoorPos,
   BlockHitResult placeHitResult, boolean secondaryUse)`** — the module's whole
   execution plan shape.
3. Supporting payload types: `gv` (client-tick event), `gH$th` (render marker),
   `oT` (in-flight block-interaction attempt: Hand + slot + `BlockHitResult` + plan +
   boolean; static instances `oT.UgZrs`/`oT.DpyXs`), `qN` (module-action claim
   registry: `dcw(dcw/register)`, `dcB(unregister)`, `dcC(check)`,
   `dcz()` 4-constant state enum `rB`), `mT` timers (`cpA`/`cpz` factories).
4. Yarn mapping (`analysis/jars/yarn-1.21.11+build.6.tiny`,
   `reference/intermediary-to-yarn-classes.tsv`) — the fd pool window's MC surface
   resolves cleanly:
   - `field_28048` = **`Blocks.POINTED_DRIPSTONE`** (class_2248)
   - `class_2533` = **`TrapdoorBlock`**
   - `method_24953` = **`BlockPos.ofCenter(Position) → Vec3d`**
   - `method_1107` = **`Entity.getBoundingBox() → Box`**
   - `field_1323/1320/1322/1325/1321/1324` = **`Box.minX/maxX/minY/maxY/minZ/maxZ`**
     (the six Box components, read as a group)
5. Decrypted constants (`analysis/decrypted/full-dump.jsonl`, class `sixtwo.fd`):
   module id 15; setting label `"Cooldown"` (67,111,111,108,100,110); leftover char
   values `6,119,110,111` (`f`,`w`,`n`,`o`) with no recoverable composition (see
   §Unrecovered).

## Runtime model

- **Pool windows** (global pool at image `+0x301ee50`):
  - `YO ()V` [18ca74520]: `POOL[0x3806,0xbf]` — gg/HUD-widget lifecycle neighborhood
    (shared with fr/fB/fG/dK overrides; attribution uncertain).
  - `<clinit>` [18cab0df0]: `POOL[0x226,0xd]` — decrypt-bootstrap infra.
  - **Shared behavior core** `POOL[0x1178f,0x2d9]` — used by **8 handlers** (`aHU,
    aHV, aHW, aHX, aHY, aHZ, aIa, aIb`). Tokens in pool order: `Pos (record-name
    fragment) | placeHitResult | secondaryUse | sixtwo/fd | NBgrV | aId | aIe |
    YKpSx | ghppw | aIW | aHZ-sig | dcC | aHX-sig | dcB | aIc-sig |
    net/minecraft/class_2533 | field_28048 | method_24953 |
    (Lnet/minecraft/class_2382;)Lnet/minecraft/class_243; | method_1107 |
    (Lnet/minecraft/class_2338;Lnet/minecraft/class_2338;Lnet/minecraft/class_3965;Z)V
    | field_1323 | field_1320 | field_1322 | field_1325 | field_1321 | field_1324 |
    aIa`. The `(BlockPos, BlockPos, BlockHitResult, Z)V` signature is **fd$sO's
    record constructor** (matches the declared record component order exactly).
  - `aIc ()Direction` [18caf7050]: `POOL[0xb1,0x5] = "Tlzw"` — the same 5-byte
    fragment dK.anf/eJ.azo decrypt (uninformative).
  - `aId` [18ca768b0] — no pool window (null-check trampoline).
- **Payload-vocabulary tokens**: `dcC`/`dcB` are `qN`'s check/unregister — fd claims
  and releases the module-action slot in the `rD.dma()` arbitration registry
  (consistent with fr.md's `qN.dcw/dcv/dcy` contract; here the *check* + *unregister*
  pair is exercised).
- **Events** (`@hG`): `aHU(gv)` [18ca74810] — client tick, main loop; `aHV(gH$th)`
  [18cacc390] — shared render marker.
- **State**: `YKpSx` (boolean), `ghppw` (BlockPos — cached trapdoor/dripstone
  position candidate), `hcRZI = mT.cpA()` (timer — note the `cpA` factory, distinct
  from the common `cpz`), plus `ZVSdF` (Cooldown slider). Statics `NBgrV` (VM class
  key: ctor uses `NBgrV ^ 10866491173179L`), `eVFHp` (static String — the Cooldown
  suffix, decrypted natively), `HyqSb` (long[]), `OnNGV` (Integer[]), `oPMeR` (Map) —
  decryptor caches. Pool-only token `aIW` is not declared in fd.java (unattributed).

## Per-handler semantics

All behavior handlers decrypt `POOL[0x1178f,0x2d9]` then dispatch into the VM; the
plan-record + MC-surface contract is recoverable, the math is not.

- **`aHU (Lsixtwo/gv;)V — tick entry [18ca74810]**. Per tick: evaluate dripstone +
  trapdoor placement plan (build `fd$sO` via `aHW`/`aHX`), validate (`aIa`),
  claim the arbitration slot (`qN.dcC`), execute placement/interaction through
  `oT` (`aIb`), respecting `Cooldown` (timer `hcRZI`). Sequencing VM-only.
- **`aHV (Lsixtwo/gH$th;)V — render marker [18cacc390]**. Same window; no
  render-specific tokens. Candidate: highlight of `ghppw`/plan positions —
  unrecovered.
- **`aHW ()Lsixtwo/fd$sO; [18cae4680]` / `aHX (Lnet/minecraft/class_3965;)
  → fd$sO [18cae8f20]** — plan builders: from nothing / from an existing
  `BlockHitResult`. Produce the (dripstonePos, trapdoorPos, placeHitResult,
  secondaryUse) tuple.
- **`aHY (BlockPos, BlockState) → BlockHitResult [18caea900]** — compute the
  placement hit result for a candidate position (raycast/face selection;
  math unrecovered).
- **`aHZ (BlockPos, BlockState) → Vec3d [18caead90]** — compute a target `Vec3d`
  for the position/state pair; the pool's `BlockPos.ofCenter` +
  `getBoundingBox()` + six `Box` component reads are the matching MC surface
  (center-of-box style point computation — exact formula unrecovered).
- **`aIa (Vec3d) → boolean [18caecf50]** — point-validity predicate (gates the
  plan).
- **`aIc (Vec3d) → Direction [18caf7050]** — face/direction selector for the
  placement (`mB`-style: which side to click).
- **`aIb (Lsixtwo/oT;Z)Z [18caf17b0]** — validate/execute an in-flight block
  interaction attempt (`oT`); the boolean parameter plausibly maps to
  `secondaryUse` (the "open trapdoor" right-click step). Return is success.
- **`aId ()V [18ca768b0]** — no-window void helper (state reset candidate).
- **`YO ()V [18ca74520]** — lifecycle override, shared gg-container window;
  attribution uncertain.

### Trivial / infrastructure

- `aIe (MatchException) → MatchException` [18ca76e20] — identity rethrow stub.
- `aIf ([B) → String` [18ca76eb0] — byte-array string decoder stub.
- `aIg (IJ) → I` [18caa1df0] — int decryptor primitive (whitening PRNG; anti-analysis
  noise). `aIh` [18caad0d0] — MutableCallSite relink BSM; `aIi` [18caae0e0] —
  invokedynamic bootstrap for `aIi("d",…)` calls (source of the dump entries above).

## Settings → behavior mapping

| field | setting | type / chain (verbatim) | behavior role (handler evidence) |
|---|---|---|---|
| `ZVSdF` | Cooldown | `cC`: `.Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0).Vz(eVFHp)` — step 1.0, min 0.0, max 10.0, default 0.0; suffix = native-decrypted static string (unrecovered; plausibly `" s"` given max 10, NOT evidenced) | inter-attempt delay; enforced via the `mT.cpA()` timer |

No other settings, no keybinds, no target selectors — the dripstone/trapdoor
positions are computed from world state, not from a target list.

## Unrecovered / uncertain

1. **Placement/trigger geometry.** How dripstonePos and trapdoorPos are chosen
   (relative to the player? to an enemy? the block below the crosshair?), what the
   `Box` component reads select (drop-channel detection vs face-center
   computation), and the exact `aHZ`/`aHY` formulas — all VM-only. **Never guess.**
2. **`secondaryUse` semantics.** The record field name and the registry description
   ("places dripstone and opens trapdoor") strongly imply the secondary-use
   right-click on the trapdoor, and `aIb(oT, boolean)` takes a boolean — but the
   wiring (which boolean value, whether the open step is a separate `oT`) is not
   decodable.
3. **Cooldown suffix `eVFHp`.** Static String decrypted natively; not in the
   `aIi` dump (only `f/w/n/o` char codes 6,119,110,111 remain, with no recoverable
   string). Suffix meaning (seconds vs ticks) unresolved.
4. **Pool-only token `aIW`** — in fd's token group, absent from fd.java
   (synthetic/CFR-dropped or VM alias); unassignable.
5. **`YKpSx` / `ghppw` exact roles** — boolean + BlockPos state; trapdoor-opened
   latch and cached trapdoor position are candidates only.
6. **`mT.cpA()` vs `mT.cpz()`** — two timer factories; the behavioral difference
   (sync vs scheduled?) is unrecovered.
7. **`aHV` render output** — no render tokens; whether anything is drawn unknown.
8. **`YO()` attribution** — shared gg-container window, unproven per-class.
9. **qN claim lifecycle** — `dcC` (check) and `dcB` (unregister) appear, but the
   matching register call (`dcw`) does not; whether fd registers via a shared helper
   outside this window is unproven.