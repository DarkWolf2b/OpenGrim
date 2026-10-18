# Auto Lever Replace (sixtwo.dK) — handler-derived behavior spec

Class: `sixtwo/dK` · display name **Auto Lever Replace** · registry description
"Automatically destroys levers" · primary key 130, active bind -999 (unbound)
[registry]. Superclass: `gg` (module base). Constructed via
`super(gf.aZL(18, false, gh.qBzlZ))` (registry key 18) — category constant
`gh.qBzlZ`, distinct from the combat-category `gh.xwjCw` of fr/fG/fB.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_dK.c` — **18 native handlers** +
   **196 continuation blocks**, 0 unresolved table targets; **134/196 blocks end in
   `halt_baddata()`**. Behavior bodies live in the embedded bytecode VM
   (`$mango$…` + `Loader.doInit`); handlers are decrypt-stubs.
   - JNI-op census (all generic VM opcode implementations in continuation blocks):
     `ExceptionCheck` ×67, `ThrowNew` ×16, `ExceptionOccurred` ×12,
     `IsInstanceOf` ×9, `GetObjectField` ×5, `GetArrayLength` ×4,
     `ExceptionClear` ×4, `Throw` ×3,
     `GetPrimitiveArrayCritical`/`ReleasePrimitiveArrayCritical` ×1/×2, and ×1 each
     `SetObjectField`, `GetStaticObjectField`, `GetObjectArrayElement`,
     `GetFloatField`, `CallVoidMethodA`, `CallStaticObjectMethodV`,
     `CallStaticObjectMethodA`, `AllocObject`. **No `rdtsc`**.
2. `analysis/decompiled/payload-named/sixtwo/dK.java` (CFR; constructor bodies are
   encrypted `anp("n",…)` calls in this variant — literals recovered via
   `analysis/specs/modules/dK.md` + `analysis/decrypted/full-dump.jsonl`, class
   `sixtwo.dK`): 4 settings, field census (`vuasL : mB`, `jcQsa : float`), native
   declarations.
3. Supporting payload types: `mB` (block-target record: `BlockPos VBRbf` / `Vec3d
   MgRaw` / `Direction AoZAE`, getters `cnb/cnc/cnd`, setters `cmY/cmZ/cna`),
   `gV` (block-change event: `extends hH`, carries `BlockPos` + `BlockState`,
   accessors `bck()`/`bcl()`), `gv` (client-tick event), `gH$th` (render marker),
   `jg` (static geometry helpers; `jg.bBG(Vec3d, F)Z` = eye-distance ≤ f check,
   jg.java:573-594), `qL`/`ou`/`os`/`mw` (rotation+attack submission), `oj` (eL
   placement executor), `eJ` Auto Trap / `eK` Auto Web modules.
4. Yarn mapping: `analysis/jars/yarn-1.21.11+build.6.tiny` — `method_26215` =
   `AbstractBlockState.isAir()Z`, `class_243` = Vec3d, `class_2680` = BlockState.

## Runtime model

- **Pool windows** (global pool at image `+0x301ee50`):
  - `YO ()V` [18dd51140]: `POOL[0x3806,0xbf]` — the gg/HUD-widget neighborhood
    (`baf/aZg/aZi`, `gd` state, `mG.cnP(FFF)`), shared with fr/fB/fG lifecycle
    overrides; attribution uncertain.
  - `<clinit>` [18dd66ee0]: `POOL[0x226,0xd]` — decrypt-bootstrap infra.
  - **Shared behavior core** `POOL[0xa45a,0x1cd]` — used by **5 handlers**
    (`ana, anb, anc, and, ane`). dK-attributable tokens, in pool order:
    `sixtwo/dK | vuasL | Lsixtwo/mB; | UtFqN | anm | sixtwo/mB | cnc |
    ()Lnet/minecraft/class_243; | jcQsa | sixtwo/jg | bBG | (Lnet/minecraft/class_243;F)Z
    | and | dlX | ()Lsixtwo/qL; | sixtwo/ou | sixtwo/oo | (Lsixtwo/os;ZZZIZ)V | ane
    | sixtwo/mw | uWTdl | Lsixtwo/mw; | sixtwo/qL | dbI |
    (Lnet/minecraft/class_243;Lsixtwo/ou;Lsixtwo/mw;Lsixtwo/gg;)V | sixtwo/gV | bcl
    | ()Lnet/minecraft/class_2680; | bck | sixtwo/eJ | cnb | sixtwo/eK |
    method_26215 | aAa | ImshN | aAM | ()Lsixtwo/oj; | sixtwo/oj | cEy | cEE`
    (preceded by opaque header tokens `872 | RCVzG | IsjYj | CXTPO | crFLs | amX`).
    **This window resolves fr.md's open flag**: the `mB.cnc`/`jg.bBG`/`gV.bcl`/
    `gV.bck`/`sixtwo/eJ`/`sixtwo/eK`/`method_26215`/`aAa` tokens that fr's `aNz`
    window overlapped are **dK's own token group**; the attack-submission cluster
    (`dlX/ou/oo/(os;ZZZIZ)V/mw/uWTdl/qL/dbI`) is a shared pool span used by both dK
    and fr programs.
  - `anf ()V` [18dd9d540]: `POOL[0xb1,0x5] = "Tlzw"` — the same 5-byte fragment
    eJ's `azo` comparator decrypts (uninformative).
- **Events** (`@hG`):
  - `ana(gv)` [18dd51400] — client tick, the main loop.
  - `anc(gV)` [18dd856f0] — **block-change event** (BlockPos + BlockState) — dK is
    one of the few modules observing world block updates; this matches "auto
    *replace*": react when the watched block changes (e.g. lever removed/placed).
  - `anb(gH$th)` [18dd80fe0] — shared render-stage marker.
- **State**: `vuasL : mB` (current block target: pos + hit `Vec3d` + `Direction`;
  public getter `ank()`), `jcQsa : float` (public getter `anl()`; range/progress
  candidate fed to `jg.bBG(Vec3d, F)`), settings. Pool-only token `amX` is not
  declared in dK.java (unattributed). Statics `UtFqN` (VM class key: ctor uses
  `UtFqN ^ 65989606487398L`), `MxRqJ` (long[]), `krUWC` (Integer[]), `gnfiQ` (Map) —
  decryptor caches.
- **Attack/interaction submission** (shared pool cluster): `rD.dlX() → qL` global
  rotation/attack manager; `ou` rotation request built with the 6-arg ctor
  `(os, Z, Z, Z, I, Z)` (ou.java:29-31 — custom request, not the `ou.kxNyl` default);
  `qL.dbI(Vec3d, ou, mw, gg)` submits the interaction at a hit point charged to dK,
  with `mw.uWTdl` priority (the same constant fr uses; ordinal-name inference only).

## Per-handler semantics

- **`ana (Lsixtwo/gv;)V — tick entry [18dd51400]**. Contract from the window: per
  tick, evaluate the looked-at/interaction target block (`vuasL`/`mB.cnc()` hit
  `Vec3d`), range-gate via `jg.bBG(Vec3d, float)` (float candidate `jcQsa`), honor
  the `Work With` group (`ImshN` Auto Trap / `CzAnG` Auto Web — via `eJ`/`eK`
  gates; `eK.aAa` is the Auto Web enabled-gate fr's pause gate also consults),
  check state predicates (`gV.bcl()` BlockState, `method_26215` isAir), and submit
  the destroy/replace interaction through `qL.dbI`. All sequencing/arithmetic VM-only.
- **`anc (Lsixtwo/gV;)V — block-change event [18dd856f0]**. Receives BlockPos +
  BlockState (`bck`/`bcl`); the natural trigger for re-evaluating the target (lever
  destroyed ⇒ mark replaced / target cleared). Exact reaction unrecovered.
- **`anb (Lsixtwo/gH$th;)V — render marker [18dd80fe0]**. Same window; no
  render-specific tokens. Candidate: highlight of the target block — unrecovered.
- **`and (Z)V` [18dd8b930] / `ane ()V` [18dd9b2c0]** — private void helpers on the
  shared window (state-toggle/step candidates; `and` takes a boolean). Unrecovered.
- **`anf ()V` [18dd9d540]** — private void helper with the 5-byte `"Tlzw"` fragment;
  no recoverable semantics.
- **`YO ()V` — lifecycle override [18dd51140]**. Same gg-container window as
  fr/fB/fG; attribution uncertain.

### Trivial accessors

- `ang ()Lsixtwo/cv;` [18dd9e3d0], `anh ()Lsixtwo/cw;` [18dd9e5d0],
  `ani ()Lsixtwo/cw;` [18dd9e7d0], `anj ()Lsixtwo/cJ;` [18dd57520],
  `ank ()Lsixtwo/mB;` [18dd57720] — setting/helper getters, null-check +
  2-way jumptable trampolines (no pool window): `ang→zrgbM`, `anh/ani→ImshN/CzAnG`
  (order by constructor/argument shape, not proven), `anj→QiyGI`, `ank→vuasL`.
- `anl ()F` [18dd57920] — float getter (`jcQsa`), same trampoline shape.

### Infrastructure

- `_c519c9ae2f6445b40eac7d3bfde68b13 ()V` [18dd66ee0] — clinit stub,
  `POOL[0x226,0xd]`.
- `anm (MatchException) → MatchException` [18dd57b30] — identity rethrow stub.
- `ann (IJ) → I` [18dd57bc0] — int decryptor primitive (~560 lines of whitening
  PRNG — anti-analysis noise); `ano` [18dd631c0] MutableCallSite relink BSM;
  `anp` [18dd641d0] invokedynamic bootstrap for `anp("n",…)` calls.

## Settings → behavior mapping

4 settings (names from modules/dK.md + full-dump.jsonl; constructor chains are
encrypted in the named source, so ranges/defaults are only recoverable where the
decrypted source shows them — none do for dK).

| field | setting | type | behavior role (handler evidence) |
|---|---|---|---|
| `zrgbM` | Work With | `cv` group | selects which sibling placements dK cooperates with |
| `ImshN` | — Auto Trap | `cw` child of `Work With` | gate: cooperate with `eJ` Auto Trap (pool shows `sixtwo/eJ` + `oj` executor `aAM`/`cEy`/`cEE` checks) |
| `CzAnG` | — Auto Web | `cw` child of `Work With` | gate: cooperate with `eK` Auto Web (pool shows `sixtwo/eK` + `aAa`) |
| `QiyGI` | Ignore Walls | `cJ` `.WE(true)` (default on) | line-of-sight filter for target selection |

State/other: no keybinds, no sliders — the destroy rhythm is fixed or native-only.
Note: unlike eJ, no `cK` block-item selector exists; the module only destroys levers
(registry) despite the "Replace" display name.

## Unrecovered / uncertain

1. **Lever detection & trigger condition.** Which blocks qualify (levers only?
   tripwire hooks/buttons?), how the target enters `vuasL` (crosshair raycast vs
   trap/web placement position), and what the `gV` block-change event does to the
   state machine — VM-only.
2. **`jcQsa` float semantics** — getter `anl()` exposes it; range-vs-progress
   attribution (fed to `jg.bBG(Vec3d,F)Z` is a guess from signature) unresolved.
3. **Interaction path** — the shared pool cluster proves a `qL.dbI` attack-style
   submission; whether the destroy goes through left-click attack packets,
   `updateBlockBreakingProgress` (mining), or `oj` placement-executor interplay
   (`aAM`, `oj.cEy/cEE` appear) is not decodable. The `method_2902`
   (updateBlockBreakingProgress) + `method_49638` (ofFloored) + `mB.cnd`
   tokens that fr's aNz window extends past dK's group belong to the *next* pool
   neighborhood (block-breaking modules), not dK.
4. **`cnb` ownership** — `sixtwo/eJ | cnb` in the window could be `eJ.cnb` (Auto
   Trap member) or `mB.cnb` (`mB`'s BlockPos getter — a natural fit for reading
   `vuasL`'s position); the flat token stream does not disambiguate.
5. **Header tokens** `872, RCVzG, IsjYj, CXTPO, crFLs, amX` — unattributed; `amX`
   is not a dK.java field.
6. **`Work With` cooperation semantics** — that the two children gate coordination
   with eJ/eK is structural (names + pool co-occurrence with `eJ`/`eK` tokens);
   whether "work with" means "only break levers those modules place / need removed"
   or "suppress while those run" is unrecovered.
7. **`and(Z)`/`ane()`/`anf()` semantics** — private void helpers, no evidence.
8. **`YO()` attribution** — shared gg-container window, unproven per-class.