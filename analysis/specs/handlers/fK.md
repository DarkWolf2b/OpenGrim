# fK — Reach (module id 20, key=20, bind=-999)

## Evidence base

- Registry: `fK  sixtwo.fK  Reach  "Extends player's reach"  key=20  bind=-999`
  (`analysis/specs/registry.tsv`); coverage matrix row `fK  Reach  0 0 0`.
- `analysis/decompiled/payload-decrypted/sixtwo/fK.java` (419 lines, CFR with the
  indy machinery intact and both settings visible in plaintext char arrays).
- Raw protected class `analysis/jars/payload-raw/sixtwo/fK.class` (`javap -v -c`)
  confirms per-call-site `ldc2_w` constants and the two `gb.aYR` native-key call.
- Runtime interception corpus: 41 `"sixtwo.fK"` records in
  `analysis/decrypted/full-dump.jsonl` — 39 `bsm:"aVe"`/`desc:"(IJ)I"` int
  resolutions (setting-name char codes) plus 2 `bsm:"aVb"`,
  `desc:"(IJ)Ljava/lang/String;"` records whose decrypted value is `' blocks'`,
  independently confirming the unit string of both widgets.
- Structural predecessor: `analysis/specs/modules/fK.md` (registered the two
  setting names but found no construction / no listeners — both superseded here).
- Helper sources: `analysis/decompiled/payload-named/sixtwo/gg.java` (base module;
  `RliRe` enabled flag [gg.java:42], set from `gf.aZN()` [gg.java:66]),
  `sixtwo/cC.java` (`VI()` current-value getter [cC.java:57]).
- **No native corpus**: there is no `sixtwo_fK.c` in `analysis/ghidra/handlers-stitched/`
  and no image addresses `0x18xxxxxxx` apply; fK is pure Java. All citations are
  Java line numbers.

## Runtime model

- Construction: `super(gf.aZL(20, false, gh.xwjCw))` [fK.java:43] — module id 20,
  starts disabled, same category token `gh.xwjCw` as fJ/ff (combat family).
- fK exposes exactly two public double accessors that the rest of the client calls
  to obtain the *current* reach:
  - `aUV()` [fK.java:236-262] — **entity/attack reach**. When the module is enabled
    (`RliRe`) it returns the live "Entity Value" setting (`IRxGK.VI()`); when
    disabled it returns the vanilla constant `3.0`.
  - `aUW()` [fK.java:196-232] — **block reach**. Enabled → live "Blocks Value"
    (`hDYSX.VI()`); disabled → vanilla behavior: `4.5` in survival/adventure,
    `5.0` if `rD.dlmvG.interactionManager.getCurrentGameMode().isCreative()`
    [fK.java:214-229].
- Both accessors therefore *always* return a valid reach; the module's off state
  is expressed by returning the vanilla constants rather than by removing the
  hook, which means the consumer call sites can be unconditional.
- The reach consumers are **not in this class**: no Java-side reference to
  `fK.aUV`/`fK.aUW` exists anywhere in the decompiled payload (checked across
  `payload-decrypted` and `payload-named`), and there is no native stub corpus for
  fK. The actual injection (attack raycast extension and block-interaction
  extension) is performed by the central native/mixin layer that reads these
  accessors — see Unrecovered.
- Indirect-call machinery: 38-entry DES int table (`MBsFK`/`JSHgz`, index formula
  `idx = seed ^ (key & 0x7FFF) ^ 0x4EEA` [fK.java:291]) for int constants, plus a
  separate DES/CBC/PKCS5Padding string table (`ZSzib`/`ZYcLJ`, index
  `idx = seed ^ (key & 0x7FFF) ^ 0x2C48` [fK.java:365]) for string constants.
  Static key `var11 = YOIFW ^ 65665911042212L` [fK.java:82] with
  `YOIFW = gb.aYR(-6406436463589819404L, 8493228117774850738L, fK).a(260733083845978L)`
  [fK.java:80] — native, not statically recoverable (same situation as fJ's
  `lMLXr`), but here every resolved value was captured at runtime so nothing
  behavioral depends on it.

## Per-handler semantics

- fK declares **zero `@hG` event handlers** and zero declared methods beyond the
  constructor and the two accessors — unusual among modules, and consistent with
  Reach being a pure "value provider" module rather than a listener module:
  - `public fK()` [fK.java:41-71] — registers the two `cC` sliders (below).
  - `public double aUW()` [fK.java:196-232] — block reach accessor (above).
  - `public double aUV()` [fK.java:236-262] — entity reach accessor (above).
- Static helpers are obfuscation infrastructure only: `aVc`/`aVd`/`aVe` (int indy
  bootstrap) [fK.java:291-339], `aUZ`/`aVa`/`aVb` (string indy bootstrap)
  [fK.java:344-397], `aUY` byte→char decoder [fK.java:264-288], `aUX` identity
  rethrow [fK.java:341-343].
- No tick, packet, render, or world listeners; no state fields besides the two
  widget references.

## Settings→behavior

Both setting names are plain char arrays in the constructor
[fK.java:44-70]; values confirmed against cC widget semantics from ff.md
(`.Vy` step, `.Vw` min, `.Vx` max, `.VA` default, `.Vz` unit suffix, `.VI()` read).

- `cC IRxGK` — `"Entity Value"` (chars 69 110 116 105 116 121 32 86 97 108 117 101)
  [fK.java:53] `.Vy(0.01).Vw(3.0).Vx(6.0).VA(3.0).Vz(" blocks")`
  → step 0.01, min 3.0, max 6.0, default 3.0, unit `" blocks"` (unit also
  independently confirmed by the two runtime `' blocks'` string records for
  `aVb`). Drives `aUV()` while enabled; note the minimum equals vanilla entity
  reach, so the slider can only extend, never shorten, attack reach.
- `cC hDYSX` — `"Blocks Value"` (chars 66 108 111 99 107 115 32 86 97 108 117 101)
  [fK.java:70] `.Vy(0.01).Vw(4.5).Vx(6.0).VA(4.5).Vz(" blocks")`
  → step 0.01, min 4.5, max 6.0, default 4.5, unit `" blocks"`. Drives `aUW()`
  while enabled; the minimum equals vanilla survival block reach, so it too can
  only extend. Because the vanilla creative reach is 5.0 and the slider minimum
  is 4.5, enabling Reach in creative mode with the default value would *shrink*
  block reach to 4.5 — the module applies its value unconditionally when on.

## Unrecovered

- **Consumers of `aUV()`/`aUW()`.** The call sites that actually apply reach
  (mixin into the attack/interaction raycasts) are outside this class and outside
  the decompiled payload — presumably in the native j2cc layer or a shared mixin.
  Consequently the exact semantics (whether entity reach uses the extended value
  for hit validation, whether packets get re-timed, whether there is any
  lag-compensation) are unknown from this class alone.
- **DES string-table contents** (`ZSzib`): statically undecryptable because the
  per-class key `YOIFW` comes from `gb.aYR` (native pool decrypt; no runtime
  record). Behaviorally irrelevant here — the only string constants fK needs (the
  two `" blocks"` units) were captured at runtime and are cited above.
- **`fg.aIW()` null-check trick.** The accessors branch on `fg.aIW()` being null
  (anti-tamper probe); behavior on a non-null return (i.e., under instrumentation)
  is the early-exit path that also returns the setting value — the two paths were
  collapsed in this spec per the standard reading of this CFR pattern.