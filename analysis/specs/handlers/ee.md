# ee — Cape (module id 73)

## Evidence base

- Registry: `ee|Cape|Custom capes|key=73|bind=-999` (bind -999 = unbound) — see
  `analysis/specs/registry.tsv`; structural spec `analysis/specs/modules/ee.md`.
- Decompiled Java: `analysis/decompiled/payload-decrypted/sixtwo/ee.java` (1051 lines).
  Coverage matrix `ee|Cape|0|0|0` — pure Java, no native handler stubs, therefore **no
  image addresses exist for this class**; all citations below are Java line numbers.
- Key constants were recovered beyond the folded decompile: the `arW` invokedynamic
  integer kernels are pure-Java DES (`arU`), and the runtime call-values were recorded in
  `analysis/decrypted/full-dump.jsonl` (`"class":"sixtwo.ee","bsm":"arW"`, 58 entries).
  Using those to solve the static key `var11 = eQnsH ^ 89479082718401L = 0x3e2ef0d4a171`,
  the 154-slot literal table `jshum` was decrypted offline (58/58 recorded values verify),
  which fully recovers the preset registry `TDPHW` (see Settings→behavior).
- Helpers: `cy` (text field), `cJ` (toggle), `ct`/`cu` (mode list/option), `hH` (event base),
  `hF.bdI(module)` (listener registration), `qG` (cape/skin texture manager:
  `AbstractClientPlayerEntity`, `NativeImage`, `TextureManager`, `Identifier`,
  `java.net.http.HttpRequest` imports; `dam()` is a native method), `rD.dlT()` → qG,
  `jd.bAm(String)` (URL validation), `gf.aZL` module registration, `mr.clS(int[])` label.

## Runtime model

- `gf.aZL(73, false, gh.qBzlZ)` — registered disabled at boot, category `qBzlZ`
  (same category as dG Anti Trap, dQ Hit Sounds, dY Anti Invisible).
- The module swaps the player cape texture: either one of 13 built-in preset capes
  (each a URL under `https://cute.rip/assets/capes/`) or a user-supplied texture URL
  (≤2048 chars, validated by `jd.bAm`). The heavy lifting — HTTP fetch, decode to
  `NativeImage`, register with `TextureManager`, apply to player renderers — lives in the
  native `qG.dam()` (outside this class).
- Event wiring: exactly one listener plus per-setting change callbacks; every path funnels
  into `rD.dlT().dam()` (qG cape refresh):
  - `@hG void arI(gR)` [ee.java:948-970] — bare event class `gR extends hH` (no payload
    fields); fires the refresh on whatever client event `gR` is published from.
  - `aaj()` (module enable) [ee.java:898-920] — refreshes immediately on enable.
  - `YO()` (module disable) [ee.java:1048-1050] — empty body: no cleanup; the module leaves
    the last-applied cape in place (native side presumably restores it).
  - Change callbacks (`.Vd`): Texture URL change → `if (jd.bAm(this.ZOSxo.Us()))
    rD.dlT().dam()` [ee.java:102-110] (refresh only when the text parses as a URL);
    Use Presets change → `rD.dlT().dam()` [ee.java:111]; Preset change →
    `rD.dlT().dam()` [ee.java:112].
  - Visibility callback: `this.ZOSxo.Vf(() -> this.sxdUz.WF())` [ee.java:113-138] — the
    Texture URL field is visible only while Use Presets is OFF (the `arS()` tripwire
    returns null since `SaYKJ` is only ever set to null via `arR(null)` in `static {}`,
    so the `var3x != null` shortcut branch is dead).
- Obfuscation tripwire: static `int[] SaYKJ` threaded through constructor/`aaj`/`arI` bodies
  via `arS()`; `arR(int[])` setter exists but is only called with null in `static {}`
  [ee.java:938-942, 1041-1044].

## Per-handler semantics

All methods (Java, no image addresses):

1. `public ee()` [ee.java:30-138] — constructor: `super(gf.aZL(73, false, gh.qBzlZ))`;
   builds the four settings (see Settings→behavior); iterates `TDPHW.keySet()` and creates
   one `cu` option per preset under the `Preset` mode list
   (`new cu(this.SmLHL, mr.clS(var7))` — option labels are the preset names, char-coded);
   wires the change/visibility callbacks; registers listeners via `hF.bdI(this)`.
2. `@hG public void arI(gR)` [ee.java:948-970] — the single event listener: null-checks
   `rD.dlT()` then calls `qG.dam()`. Default `@hG` priority (no priority argument).
3. `@Override public void aaj()` [ee.java:898-920] — enable hook: `rD.dlT().dam()`.
4. `@Override public void YO()` [ee.java:1048-1050] — disable hook: empty.
5. `public cJ arM()` [ee.java:887-889] — returns `FsBgj` (Hide Wings toggle) for the GUI.
6. `public cy arJ()` [ee.java:972-975] — returns `ZOSxo` (Texture URL).
7. `public cJ arK()` [ee.java:986-988] — returns `sxdUz` (Use Presets).
8. `public ct arL()` [ee.java:1039-1042] — returns `SmLHL` (Preset selector).
9. `public static int[] arS()` / `public static void arR(int[])` [ee.java:1041-1044, 938-942]
   — obfuscation tripwire (see Runtime model).
10. `private static CallSite arW(Lookup, String, MethodType)` [ee.java:922-936] —
    invokedynamic bootstrap for integer literals (MutableCallSite pinned to `arV`).
11. `private static int arV(Lookup, MutableCallSite, String, Object[])` [ee.java:976-982]
    and `private static int arU(int, long)` [ee.java:988-1036] — the DES literal kernel:
    `idx = seed ^ (int)(key & 0x7FFF) ^ 4358`; DES-decrypt `jshum[idx]`
    (`DES/CBC/NoPadding`, zero IV, per-thread cipher cache `PIecr`) with key = the 8
    big-endian bytes of the runtime long; result = big-endian int from plaintext bytes
    4..7, memoized in `EOvrP[idx]`. Fully reproduced offline (see Evidence base).
12. `static {}` [ee.java:140-886] — decrypts `jshum` (long[154]: 152 blocks from the first
    cipher string, 2 from the second 16-byte string, key `var11 = 0x3e2ef0d4a171`,
    single-block ECB-style CBC) and builds the 13-entry `TDPHW` LinkedHashMap
    (insertion order preserved).

## Settings→behavior

All names decrypted verbatim from `payload-decrypted/sixtwo/ee.java` (char codes):

- `cy ZOSxo` = **"Texture URL"** (chars `84 101 120 116 117 114 101 32 85 82 76`),
  builder `.Un(2048).Up("")` ⇒ max length **2048**, default **empty string**.
  Behavior: custom cape source; applied through `qG.dam()` only when
  `jd.bAm(text)` validates the URL [ee.java:102-110]. Visible only when Use Presets is off.
- `cJ sxdUz` = **"Use Presets"** (chars `85 115 101 32 80 114 101 115 101 116 115`),
  `.WE(true)` ⇒ default **on**. When on, the cape comes from the Preset selector; when off,
  from Texture URL. Change → refresh.
- `ct SmLHL` = **"Preset"** (chars `80 114 101 115 101 116`), no default `cu` created in the
  constructor — options are the 13 `TDPHW` keys in map order (first key = "2011", so the
  initial selection is MineCon 2011 by insertion order; no explicit `.SO()` call).
- `cJ FsBgj` = **"Hide Wings"** (chars `72 105 100 101 32 87 105 110 103 115`),
  `.WE(false)` ⇒ default **off**. Exposed via `arM()`; consumed by the wing/cosmetic render
  path (native `qG` side), not in this class.
- Preset registry `TDPHW` (static `LinkedHashMap<int[], int[]>`, keys = preset-name char
  codes, values = cape texture URL char codes), fully decrypted and verified 58/58:

  | Preset | Cape texture URL |
  |---|---|
  | 2011 | https://cute.rip/assets/capes/2011.png |
  | 2012 | https://cute.rip/assets/capes/2012.png |
  | 2013 | https://cute.rip/assets/capes/2013.png |
  | 2015 | https://cute.rip/assets/capes/2015.png |
  | 2016 | https://cute.rip/assets/capes/2016.png |
  | Mojang | https://cute.rip/assets/capes/mojang.png |
  | Mojang Studios | https://cute.rip/assets/capes/mojangstudios.png |
  | Mojira | https://cute.rip/assets/capes/mojira.png |
  | Cobalt | https://cute.rip/assets/capes/cobalt.png |
  | Spade | https://cute.rip/assets/capes/spade.png |
  | Snowman | https://cute.rip/assets/capes/snowman.png |
  | Turtle | https://cute.rip/assets/capes/turtle.png |
  | Birthday | https://cute.rip/assets/capes/birthday.png |

  (URL length 38 for the five year presets, 39–47 for the others — e.g. "Mojang Studios"
  is the longest at 47 chars.)
- No keybind (`cD`) — GUI-toggle only (`bind=-999`).
- Module registration: `gf.aZL(73, false, gh.qBzlZ)` — id 73, starts disabled.

## Unrecovered

- `qG.dam()` is **native** — the actual texture pipeline (URL → HTTP fetch via
  `java.net.http`, decode `NativeImage`, `TextureManager` registration, per-player
  renderer application, caching maps `UopWF/jDwdU/egLkf/ENods`, the `odGBQ` byte buffer and
  `FTUdq` state) is specified in the qG module spec, not here. Which players are affected
  (self only vs all `AbstractClientPlayerEntity`) is decided in qG, not ee.
- The exact identity of event `gR` (bare `hH` subclass, no fields) — it is published
  somewhere in the render/event layer, but no other module listens to it in the payload;
  its firing point (and thus how often the cape refresh re-runs) is not visible statically.
- Whether "Hide Wings" hides client cosmetic wings attached to the cape render (native
  side) and which cosmetic system it targets.
- Whether disabling the module (`YO()` empty) triggers a cape restore in native code or
  leaves the custom cape applied until relaunch.
- `jd.bAm(String)` (URL validator) internals — accepted schemes are not visible here.