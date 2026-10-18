# W-Tap (sixtwo.fG) — handler-derived behavior spec

Class: `sixtwo/fG` · display name **W-Tap** · registry description
"Automatically performs W-Tap" · primary key 13, active bind -999 (unbound) [registry].
Superclass: `gg` (module base, `extends iS`). Constructed via
`super(gf.aZL(13, false, gh.xwjCw))` — same category constant `gh.xwjCw` as Kill Aura
(fr); category display name unrecovered.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fG.c` — **18 native handlers** +
   **200 continuation blocks**, 0 unresolved table targets (corpus header).
   - **172 of 200 continuation blocks end in `halt_baddata()`** (Ghidra truncated the
     indirect-jump chains). As for the rest of the payload (mango blob
     `$mango$6dc686caab50ed59` + `Loader.doInit`), every behavior body is compiled into
     the embedded bytecode VM; handlers are decrypt-stubs and the continuations are VM
     opcode micro-trampolines.
   - JNI-op census over the whole class: `ExceptionCheck` ×72, `ExceptionOccurred` ×17,
     `IsInstanceOf` ×16, `ThrowNew` ×9, `CallVoidMethodA` ×5, `GetArrayLength` ×3,
     `SetBooleanField` ×2, `GetObjectField` ×2, `ExceptionClear` ×2, `AllocObject` ×2,
     and ×1 each `Throw`, `SetStaticObjectField`, `NewObjectArray`,
     `CallStaticObjectMethodV`, `CallStaticIntMethodA`, `CallObjectMethodA`. All of
     these sit in the continuation blocks, i.e. they are **generic VM opcode
     implementations** (the 2 × `SetBooleanField` blocks are the VM's "write boolean
     field" opcodes — consistent with fG's two boolean state fields `HrnPx`/`QYvrB`,
     but not attributable per handler). **No `rdtsc`** in this class.
   - Helper census (payload runtime, not analyzed): `FUN_190dd72e0` (pool constant
     fetch), `FUN_190dd9df0`, `FUN_190ddce00`, `FUN_190ddfc90`, `FUN_190de3220`.
2. `analysis/decompiled/payload-named/sixtwo/fG.java` (CFR) and the literals-folded
   `payload-decrypted/sixtwo/fG.java` — the complete Java skeleton: constructor (all
   8 settings + 5 Runnable wirings), native declarations. All setting names below were
   re-decoded char-by-char from the folded char arrays and cross-checked against
   `analysis/decrypted/full-dump.jsonl` (class `sixtwo.fG`, 87 entries).
3. Supporting payload types read for vocabulary: `hw`/`hw$tv` (entity event with a
   one-shot latch), `gA` (key/mouse input event), `ad` (input/movement manager with
   `ad$rN`/`ad$rO` key-state/listener inner classes), `gg` (module base),
   `ct/cu/cJ/cA/cC` setting wrappers.
4. Yarn mapping: `analysis/jars/yarn-1.21.11+build.6.tiny` — `gA` carries
   `net.minecraft.client.input.KeyInput`/`MouseInput` (1.21.11 input classes); no
   other `net.minecraft` name appears in any fG pool window.

## Runtime model

- **Pool windows** (global pool at image `+0x301ee50`):
  - `<clinit>` helper `_2b9caf2d2a8e73d89bb28f3dd29947fe` [18ae05230]:
    `POOL[0x226,0xd]` (`"ang/String; | <"` — decrypt-bootstrap infra).
  - **Shared behavior core** `POOL[0x14458,0x32b]` — used by **7 handlers**
    (`aTf, aTg, aTh, aTj, aTk, aTl, aTm`), identical window each time. The window
    straddles fH's name table: the fG-attributable token group is
    `Fbg, bxM, hdxUq, rIJAy, eImKU, JEhiJ, sixtwo/fG, HrnPx, QYvrB, deLoo, jwWNp,
    kiwwU, UXeQf, aTn, AqVee, XOUKT, xHSEs, RJFVs, XUvTV, abWbk, PWSXA, YNgob,
    VqvZM, DyNeX, SjiqK, FpKBj, aTp, KEbwq, NDFbm, dPMvB, MdrLn, aTo, aTs`, after
    which `sixtwo/fH | gKjqs | aUt | …` (fH's own table, documented in fH.md) begins;
    the window truncates at fH token `mca`. Sibling attribution: everything before
    `sixtwo/fH` is fG's group (all names match fG's fields/methods), except
    `Fbg, bxM, hdxUq, rIJAy, eImKU, JEhiJ, jwWNp, kiwwU`, which are **not declared in
    fG.java** and cannot be attributed (see §Unrecovered).
  - `aTi` **own window** `POOL[0x426b,0xd9]`: `sixtwo/ad$rO | ZWlAr | XBKYY | mH |
    java/lang/System | currentTimeMillis | jJtPn | eAiVx | FHUwd | FsTVb | XLxgE |
    fulpu | IwZbt | ubgWo | UxjLg | C | EwbNS | mGKJa | FLiqk | lJ | yvQlf |
    Lsixtwo/ad$rN; | ly | vkfky | nNcGZ | lG | (C)V | lD | lK | lH | lfHjU | lz |
    (Z)I | wgjEd`. This is the **`ad` (input/movement manager) name table**: `ad` is
    the payload's keyboard/movement controller (`HashMap<Character,Float> NobPV`,
    `List<ad$rO> fulpu` key listeners, `ad$rN yvQlf` key-state object, `mT XLxgE`
    timer, `long jJtPn` timestamp, `int FLiqk/FHUwd/ubgWo` state, plus per-key helpers
    exposed as `lJ/ly/lG/lD/lK/lH/lfHjU/lz` aliases with signatures `(C)V` (char-key
    call) and `(Z)I`). `aTi` is the only fG handler with its own window, and its
    window is the `ad` neighborhood + `System.currentTimeMillis` — i.e. the timed
    key-press step drives the shared input manager.
  - `aaj ()V` [18adb2810]: `POOL[0x3806,0xbf]` — the gg/HUD-widget neighborhood
    (`gg.baf ()Lsixtwo/gc;`, `gc.aZg/aZi` (read/write the container's 2-constant `gd`
    state `ipLAD`/`zlSAY`), `cnP (FFF)Lsixtwo/mG;` RGBA color factory, plus unattributed
    `J.java` HUD-widget members). The same window fr's `YO()` decrypts; per-class
    attribution of individual names inside it is uncertain.
- **Events** (both `@hG`, via the `hF` annotation bus; registered/re-registered on
  every enable toggle by the inherited `gg` lifecycle):
  - `aTf(hw$tv)` [18adb2c00] — entity event. `hw$tv` extends `hw` (carries an
    `Entity`, accessor `bdm()`) and adds a one-shot boolean latch `dps()/dpt()`
    initialized from `oX.cLK()`. Consumers of `hw$tv` across the payload are exactly
    the combat/attack-adjacent modules (eM Double Tap `@hG(priority = mw.HIGH)`,
    fh Attribute Swap, fB Auto Shield Break, eF Spear Reach, eQ, eN, fp, cY, fJ, cX,
    fu, fG) — the event is fired natively per swing/attack against an entity (the
    firing site is not in any decompiled Java; see §Unrecovered).
  - `aTg(gA)` [18ae211e0] — raw input event: `gA` carries `MouseInput`, `KeyInput`,
    and three ints (accessors `bbP/bbQ/bbR`). This is fG's view of keyboard
    press/release, the natural place for tap coordination.
- **State fields** (from fG.java + pool): `HrnPx`, `QYvrB` (booleans — tap-phase
  state candidates; the corpus's only field-writing opcodes are 2 ×
  `SetBooleanField`), `deLoo` (long — timing-state candidate, `System.currentTimeMillis`
  in aTi's window), 5 final `Runnable`s, 8 setting objects. Statics `UXeQf` (class VM
  key: constructor decryption uses `UXeQf ^ 0x6086707507E1L`), `dPMvB/SjiqK` (String[]),
  `FpKBj/MdrLn` (Map), `NDFbm` (long[]), `KEbwq` (Integer[]) — decryptor caches, not
  behavior state.
- **Runnable pipeline**: the constructor wires `RJFVs = this::aTm`, `abWbk =
  this::aTl`, `YNgob = this::aTk`, `VqvZM = this::aTj`, `DyNeX = this::aTi`. Five
  self-contained tap-phase runnables (press/release/re-press/timing stages); how they
  are scheduled (iU scheduler, `ad`'s timer `mT XLxgE`, or direct Thread) is native
  and unrecovered.

## Per-handler semantics

### Behavior handlers (all VM bodies — contract recoverable, math not)

- **`aTf (Lsixtwo/hw$tv;)V` — attack/entity event [18adb2c00]**. Shared core window.
  Per-event: receive the attacked entity, evaluate gates (enabled, mode, `Only On
  Ground`, current tap phase `HrnPx`/`QYvrB`, elapsed `deLoo`), and start/steer the
  tap sequence through the Runnable chain. Exact gate wiring unrecovered.
- **`aTg (Lsixtwo/gA;)V` — key/mouse input event [18ae211e0]**. Shared core window.
  Input-event observer; most plausibly tracks forward-key/attack-key state so the tap
  does not fight the user's own key presses. Exact use unrecovered.
- **`aTh (ZLsixtwo/eD;)V` — static helper [18ae34ec0]**. Takes a boolean and the
  **Fast Bridge** module instance (`eD`, registry "Automatically sneaks on block
  edge") and returns void. No Java caller exists in the decompiled payload; the token
  `aTh` is in the shared window, so it is resolved through the VM. Structurally this
  is a cross-module bridge: a boolean notification delivered to/through Fast Bridge
  (e.g. "tap in progress" suppression of edge-sneak, or vice versa). Direction and
  semantics unrecovered.
- **`aTj/aTk/aTl/aTm ()V` [18ae39ae0, 18ae3d8e0, 18ae40660, 18ae47050]** — four
  Runnable phases on the shared core window. No per-handler distinguishing evidence
  survives; phase order/identity unrecovered.
- **`aTi ()V` [18ae392a0]** — Runnable phase with the `ad` input-manager window +
  `System.currentTimeMillis`. This is the phase that actually manipulates key state
  through `ad` (the `(C)V`-signature char-key call and `ad$rN` key-state object) and
  gates on wall-clock time (`currentTimeMillis`, `long jJtPn`). One float/double
  arithmetic region and the `(Z)I` alias sit in the same window; exact sequence
  unrecovered.
- **`aaj ()V` — enable/toggle hook override [18adb2810]**. Overrides the `gg` base
  hook that the enable toggle calls (`gg.baa()` shape). Window is the gg
  settings-container neighborhood (`baf/aZg/aZi`, `gd` state, `mG.cnP(FFF)` color
  factory). Whether fG's aaj initializes a render/HUD color or its `gd` state — and
  whether it chains to the inherited implementation — is unproven (identical to the
  fr `YO()` situation).

### Trivial / infrastructure

- `aTn (MatchException) → MatchException` [18ae4c7c0] — identity rethrow
  (`return param_3`), obfuscator switch-desugaring stub.
- `aTo ([B) → String` [18adc4d90] — byte-array string decoder stub (null-check +
  jumptable). `aTp (IJ) → String` [18adebe10] / `aTs (IJ) → I` [18adf6600] — the
  string/int decryptor primitives proper: ~500–950 lines of whitening PRNG arithmetic
  (`0xa4e11977483d68fd`, `0x54342666149e27b0`, `0xf4f53f77dc9f6fff`, `0x7fff`-family
  popcount SWAR) — anti-analysis noise, not module logic.
- `aTq/aTt (Lookup, MutableCallSite, String, Object[])` [18adf2c50, 18ae01510] —
  MutableCallSite relink BSMs; `aTr/aTu (Lookup, String, MethodType) → CallSite`
  [18adf3b40, 18ae02520] — invokedynamic bootstraps for the string/int decrypt calls.

## Settings → behavior mapping

All 8 settings, verbatim from the literals-folded constructor. Wrapper types:
`cC` slider (Vy=step, Vw=min, Vx=max, VA=default, Vz=suffix), `cA` double slider
(UG=step, UE=min, UF=max, UI=default pair, UH=suffix), `cJ` toggle (WE=default),
`ct` category / mode group, `cu` option.

| field | setting | type / chain (verbatim) | behavior role (handler evidence) |
|---|---|---|---|
| `xHSEs` | Mode | `ct` `"Mode"` (77,111,100,101) | tap-style selector |
| `rLoJa` | — WTap | `cu` child `"WTap"` (87,84,97,112) | first child ⇒ default option; tap the forward key |
| `qPyIG` | — STap | `cu` child `"STap"` (83,84,97,112) | tap variant |
| `WOHue` | — SneakTap | `cu` child `"SneakTap"` (83,110,101,97,107,84,97,112) | tap variant (sneak key) |
| `XOUKT` | Only On Ground | `cJ` `.WE(false)` (default off) | gate candidate: restrict tapping to grounded state |
| `XUvTV` | Tap Start | `cA`: `.UG(5.0).UE(0.0).UF(1000.0).UI(120.0, 120.0).UH(" ms")` — step 5, min 0, max 1000, default 120 ms | tap-phase timing parameter |
| `PWSXA` | Tap Stop | `cA`: `.UG(5.0).UE(1.0).UF(1000.0).UI(450.0, 450.0).UH(" ms")` — step 5, min 1, max 1000, default 450 ms | tap-phase timing parameter |
| `AqVee` | Tap Delay | `cC`: `.Vy(10.0).Vw(0.0).Vx(2500.0).VA(0.0).Vz(" ms")` — step 10, min 0, max 2500, default 0 ms | tap-phase timing parameter |

Point-engine seeding: none (no `og`/`pe` helpers; fG has no target of its own — it
consumes the attack event's entity). Keybind: none constructed (`rk` count 0).

Note: the older structural spec (`analysis/specs/modules/fG.md`) lists "Tap Delay" as
a decrypted name — confirmed: it is `AqVee`, but that spec's settings table omits it
(8 settings exist, not 7).

## Unrecovered / uncertain

1. **The tap sequence itself.** Which of the 5 Runnables does release vs press, the
   phase order, what `Tap Start` (0–1000, d120) vs `Tap Stop` (1–1000, d450) vs
   `Tap Delay` (0–2500, d0) each gate, and how `deLoo`/`System.currentTimeMillis`
   drive the phases — all inside the VM. **Never guess the timing formula.**
2. **Key identity per mode.** That WTap taps the forward key is inference from the
   name; the actual key/char sent through `ad` (the `(C)V` call) is unrecovered, as
   is what STap/SneakTap send.
3. **Event semantics of `hw$tv`** — the firing site (which payload system constructs
   it and when per entity) is native and absent from all Java sources; "attack event"
   is inferred from the consumer set (Double Tap, Attribute Swap, Spear Reach, Auto
   Shield Break, W-Tap) and the `dps()/dpt()` one-shot latch, not decoded.
4. **`aTh(Z, eD)` caller and meaning** — no Java caller; only the VM resolves it.
   The boolean direction (fG→Fast Bridge or Fast Bridge→fG) and the meaning of the
   flag are unrecovered.
5. **Unattributed pool tokens** `Fbg, bxM, hdxUq, rIJAy, eImKU, JEhiJ, jwWNp, kiwwU`
   — present in fG's token group but absent from `fG.java`. They are either
   payload-internal member aliases resolved by the VM or members of a neighboring
   class whose window straddles fG's. Not assignable.
6. **`aTg(gA)` exact role** — press/release tracking vs attack-key detection vs
   suppression of taps while the user holds the key: unrecovered.
7. **`HrnPx`/`QYvrB`/`deLoo` semantics** — booleans/long state; candidates (tap
   active, tap phase, last-tap timestamp) are inference from types and the
   `SetBooleanField` opcode census only.
8. **`aaj()` vs inherited behavior** — whether the gg-container window work
   (`gd` state, `mG.cnP`) belongs to fG's aaj or to the shared gg lifecycle helper
   cached in the same pool region, and whether `super.aaj()` runs, is unproven.