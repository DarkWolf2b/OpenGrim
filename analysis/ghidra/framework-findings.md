# Native handler findings — framework classes (session 2)

Source: Ghidra decompilation of `j2cc_natives.dll` handlers for the sixtwo.*
framework classes (`../../analysis/ghidra/handlers/sixtwo_{iS,aj,gb,fZ,aZ,by,ad,br,eL,eJ}.c`),
cross-read against `../../analysis/decompiled/payload-named/sixtwo/*.java` for calling
context. No git/gradle was run; this file is evidence-only (clean-room rule applies
to the rebuild, not to this document).

## Evidence quality — read this first

- **Most handlers did not decompile to usable Java-level logic.** Every handler in
  `aj` (43), `aZ` (58), `by` (75), `eL` (69), `eJ` (58), `br` (61) collapsed to the
  decompiler stub `/* exception: Java Virtual Machine is not running */` — the j2cc
  handlers decrypt their own bytecode lazily against a live JVM, so the C bodies are
  empty at static analysis time.
- `iS` (7), `gb` (21), `fZ` (15), `ad` (75) produced real-but-obfuscated bodies:
  opaque-predicate flattening (`switch(cVar1 == '\0')` with single destinations,
  dozens of removed 1-destination switches per function), register-aliased JNIEnv
  use, and a keyed mixing round (`func_0x…`, 412 call sites in `fZ.aYM` alone:
  `x*0x2000 ^ x`, rotate 29/35, xor with per-site globals such as `0x84222325`,
  `0x725961756db480a5`).
- **What IS fully reliable: the JNI type descriptors in the handler headers**
  (e.g. `Lsixtwo/gb; aYY (JII[I[J)J`). These are unobfuscated and give the exact
  method surface of each class — often more informative than the bodies.
- JNI vtable slots identified in the bodies (x64 JNIEnv, 8-byte entries):
  `+0x70` ThrowNew, `+0x78` ExceptionOccurred, `+0x88` ExceptionClear,
  `+0x100` IsInstanceOf, `+0x558` GetArrayLength, `+0x680` SetByteArrayRegion,
  `+0x6F0` GetPrimitiveArrayCritical, `+0x6F8` ReleasePrimitiveArrayCritical,
  `+0x720` ExceptionCheck. The bodies are dominated by exception-guard scaffolding
  (ExceptionCheck → ThrowNew with a decrypted message → ExceptionClear) — the
  original uses **exceptions as control flow** (hence the synthetic
  `MatchException` parameters in many signatures).
- `FUN_190dd72e0(obj, blob_ptr, key)` is the native constant-pool decryptor: it is
  called with pointers into a static encrypted blob (`_DAT_18301ee50`, at offsets
  such as `+0` and `+0x6fb`) and small key constants (`0`, `0x21`). 92 references
  to that blob in `fZ.aYH` alone → fZ decrypts roughly 70+ strings natively.

## Per-class findings

### `iS` — settings-container base (7 handlers) [good signatures, bodies = scaffolding]

Signatures: `bwH(LcB;)LcB;`, `bwI()Ljava/util/List;`, `bwJ(Ljava/util/List;)LiS;`,
`bwK(Ljava/lang/String;)V` (static), `bwL()Ljava/lang/String;` (static),
`bwM(MatchException)MatchException`, `_3e90…()V`.

Java side (`iS.java`) shows the contract: `iS` holds `protected List<cB> oZllQ` —
a **settings list** — so the module base `gg extends iS` makes every module a
settings container. Calling context:
- `bwH(cB)` = *add setting, return it* (fluent; module ctors chain it),
- `bwI()` = *get settings list*,
- `bwJ(List)` = *replace list, return self* (builder-style),
- `bwK(String)`/`bwL()` = a static String slot (ctor calls `bwK("qLIdWc")`;
  `rk`/`gc`/`gg` use `iS.bwL() == null` as a sentinel to run clinit side effects).
Body of `bwH` is two vtable calls wrapped in IsInstanceOf/ExceptionClear —
consistent with "append + exception guard", nothing more recoverable.

**Rebuild match:** `dev.opengrim` `Module` holding its settings list matches the
contract (settings live on the module object itself, in declaration order).

### `gb` — native peer table / binary codec (21 handlers) [signatures good; 11 decompile timeouts]

Fields (`gb.java`): `long fypFy` (native handle), `int[] kClfx`, `long[] DNYiY`,
`ga NpnYD`. Implements `ga` (the state-container protocol — see below).

Signature surface, all native:
- `aYR(JJ,Object)→ga` — **the per-class key-derivation primitive.** Every clinit
  in the framework calls it: `gb.aYR(-6083727380241001860L, -4613429592943998361L,
  lookupClass()).a(136086932182178L)` (in `rk`), same pattern in `ri`, `gc`, `gg`,
  `rj`. It mixes two long constants with the calling class identity and returns a
  `ga` from which `.a(long)` extracts a working key. This confirms 00-framework.md
  §"key derived from gb.aYR(...)" and shows the derivation is per-class (class
  object is an argument).
- `aYY(J,II,[I,[J)→J`, `aYW(I)→J`, `aYX(II)→J` — bulk int[]/long[] codecs.
- `aZa(IILjava/util/ArrayList;Ljava/util/ArrayList;I)V` and
  `aZb(IIILjava/util/ArrayList;Ljava/util/ArrayList;)V` — **two-column table
  building** (paired key-list/value-list ArrayLists). `gb` is therefore a
  native-backed associative table keyed by its long handle.
- `aYU(fZ)V` / `aYV(fZ)V` — **static registration hooks called from `fZ`'s
  constructor** (`gb.aYU(this)`) — the config root registers itself with the codec.
- `aYS(J)→ga`, `aYT(J)→ga` — materialize a `ga` from a long handle.
- `equals/hashCode` overridden natively (identity = native handle, not Java id).
- `aYQ()→Object`, `aYZ()V`, `aZc()V`, `a(J)J`, `b(J)V`, `a(ga)V`, `b(ga)Z`,
  `b()[I` — the `ga` protocol implementations.

Bodies: `aYS` = decrypt helper + ExceptionCheck + ThrowNew-shaped call with cached
class `&UNK_182f702a8`; 11 of 21 handlers timed out in decompilation.

**Rebuild match:** rebuild's `ConfigManager` (JSON, Java-side) matches the *role*
(central store) but diverges in mechanism — the original is a native peer with a
binary `int[]/long[]` codec and long-handle identity, not a text format.

### `fZ` — global config/state root (15 handlers) [signatures good; 2 big real bodies]

Fields (`fZ.java`): `static fZ juqnP` (**singleton**), `ConcurrentHashMap noZXa`
(the value store), `ga MImcg` (parent/next link), `int[] ojvoM`.

- **The `int[64]` magic table.** The constructor fills `ojvoM[0..63]` with hardcoded
  constants (`-40, -13, -58, -12, -52, -50, -30, -32, -44, -7, …, 23, 36, 16`) and
  then calls `gb.aYU(this)`. A 64-entry int table + registration into the codec =
  key/decode schedule for the config format. This is a concrete, verifiable
  artifact the rebuild must *replace* (clean-room), not copy.
- `aYM()V` (called first in the ctor) — 5,056-line real body. Inner loop:
  `GetArrayLength` (`+0x558`) bounds check → `SetByteArrayRegion` (`+0x680`)
  writing **one byte per call**, with a long serialized big-endian via successive
  shifts (`>>0x38` … `>>0x00`) feeding the keyed mixing round. Conclusion:
  **fZ builds binary byte payloads on the Java heap byte-by-byte** — a serializer,
  not a text writer.
- `aYH(Z)V` — 5,049-line real body: bulk native string decryption (92 references
  into blob `_DAT_18301ee50`; offsets `+0`/`+0x6fb`, keys `0`/`0x21`), each
  decrypted string followed by ExceptionCheck and a ThrowNew-shaped call with
  cached `&UNK_182f702a8`. Reads like a string-pool prewarm/validation pass gated
  on the boolean.
- `aYI(ga,ga)→ga`, `aYJ(ga,ga)→ga` — merge/combine of two `ga` values (config
  diff/merge semantics); `a(ga)V`, `b(ga)Z`, `b()[I`, `a(long)J`, `b(long)V` —
  the `ga` protocol; `aYK/aYL/aYN/aYO/aYP` — lifecycle (save/reload candidates;
  `aYO` = ExceptionCheck-guarded single call; rest unrecoverable).

**Rebuild match:** `dev.opengrim` JSON persistence is a deliberate divergence —
the observable contract (defaults per module, hierarchical settings, singleton
root) is preserved, the binary native codec is not reproduced.

### `ga` — the state-container protocol (Java interface, no handlers)

`ga { long a(long); void a(ga); boolean b(ga); int[] b(); void b(long); }` —
implemented by both `gb` and `fZ`. Semantics (from signatures + use sites):
`a(long)` maps a handle→value, `b()[I` exports state as an int array,
`a(ga)`/`b(ga)` merge/equivalence between containers. This is the *only* shared
abstraction between the codec (`gb`) and the store (`fZ`).

### `aj`, `aZ`, `br`, `by`, `eL`, `eJ` — GUI layer (all bodies unrecoverable)

> **Status update 2026-10-13:** all six of these classes (plus 80 more GUI
> framework classes — `c`, `ap`, `bl`, `lf`, `rj`, `rk`, `mG`, …) now have
> runtime decompiles with real Java-visible control flow in
> `../gui-src/` (manifest there maps names; copied from the hooked runtime
> dump, formerly under gitignored `win/gui-src/`). The claim below remains
> true for the *native* method bodies — every behavior method is still
> JNI-dispatched (dispatch stubs in `handlers-stitched/`) — but the class
> structure, constructors and fluent-builder APIs are recovered, and the DES
> constant pools for `lf` (icon glyphs) and `rj` (easings) are fully decoded
> (see PARITY-DIVERGENCES "GUI port"). The remaining gap is the encrypted
> literal sites inside native bodies (e.g. ~135 sites in `c`/`ap`), which
> need one hooked run with the ClickGUI open.

All 364 handlers across these six files decompiled to the
`Java Virtual Machine is not running` stub; only the **signatures** are usable,
and they are structurally informative:

- `aj extends az` is the abstract widget: two `rk` animations created in its ctor
  from encrypted names (`new rk(oE(13266,…)).dhs(rj.NJlxm)`,
  `new rk(oE(4740,…)).dhs(rj.UPXqT)`), fluent builders (`om(boolean)→T`,
  `ok(float)→T`, `on(float)→T`), and the shared input-event row:
  `hc(DD)Z`, `oh(DD)Z` (hit tests), `dl(DDLsixtwo/mA;)V` (mouse dispatch),
  `of(DD)V`, `oz([Ljava/lang/String;)V`/`oA()→String[]` (static, opaque).
- The repeated row `dk(DDLmA;)Z`, `dB(DDLmA;DD)Z`, `dl(DDLmA;)V`, `dm(III)Z`,
  `eK(C)Z` appears verbatim in `aZ`, `br`, and `ad` — a common input-event
  interface (mouse move/click/release with a `mA` enum arg, wheel `dm(III)`,
  char typed `eK`). This mirrors Minecraft `Screen` input plumbing; the `mA`
  enum parameter is the mouse-button/action carrier.
- `ad` is a widget/panel builder: 25 fluent `l{O..me}(...)→ad` setters (int[],
  int, float, long, String, boolean, `Runnable` ×2, `mG`, `ad$rN` callback) and
  matching getters (`mh()→HashMap`, `mi()→List`, `ml()/mn()→rk`, `mp()→ad$rN`).
  Its one big real body, `lB(String)V` (~1,080 lines), walks the string
  character-by-character (`GetArrayLength`/`GetPrimitiveArrayCritical`/
  `ReleasePrimitiveArrayCritical`, per-index byte read) while updating a rolling
  keyed hash — per-character input validation/hashing of a text field, e.g.
  command or filter input. Exact accept/reject semantics unrecoverable.
- `br`/`aZ` expose scene-graph-ish getters (`GM()→nf`, `GN()→bo`, `GS()→bn`,
  `GT()→bp`, `GU()→bq`, `GV()→O`, list returns `GK()→List`,
  `GA(Ljava/util/List;)→List` transforms) and `br.Gt/Gu(String)→J` (string→long,
  likely id hashing). No registration tables are visible at this layer.

### Networking internals: **none found** (ledger item)

Grep across all ten handler files for `java/net`, `socket`, `http`, `URL`,
`connect`, `javax` produced **zero** matches, and no class descriptors other than
`java/util/*`, `java/lang/*`, `java/lang/invoke/*`, and `sixtwo/*` appear in any
body. The only network-adjacent construct in the recovered code is
`gg.bab()`, a Java-side in-game check
(`MinecraftClient.getNetworkHandler() != null`) used as a guard. Framework
handlers neither open sockets nor encode endpoints; the license/auth HTTP in
`Init.java` (already in 00-framework.md §Identity) remains the only network
surface and lives outside these classes.

## Major corrections to 00-framework.md (Java-side claims disproven by this pass)

1. **`rk` and `ri` are NOT keybinds.** `rk` is an animated float (tween):
   fields `duration(int ms), current, start, target, startTime, finished,
   initialized`, easing `rj mYwgX`; `dhd(float target)` computes
   `elapsed = currentTimeMillis() - startTime`, applies easing
   `rj.dga(progress, 0, 1, 1)` and lerps `start + (target-start)*eased`
   (`rk.java:50-130`). `ri` is an animated RGBA color: **four `rk`s** driven
   together from/to `mG` (4-float color; `cor/cos/cot/cou` = r/g/b/a)
   (`ri.java:9-16`). So `gg`'s "two rk + one ri" are **UI animations** (two
   durations with different easings + an animated accent color), not primary/alt
   binds. Spec §Module base line "creates ... two `rk` keybind objects + one `ri`
   `[inferred: primary + alt bind]`" is wrong.
2. **The real keybind state is `int[]` on the module + an int code in `gc`.**
   `gg` has `int[] RcFWc, lRvVv` with fluent setters `bap(int[])`/`baq(int[])` and
   getters `bad()`/`bae()` (primary/secondary bind sets), and `gc` (per-module
   state, injected from metadata via `GfFkt.aZj(gf2.aZP())`) holds an int
   `XQGcJ` compared by `aZd(int)` (code-match test, i.e. "is this key the bind?")
   plus a `gd` 2-constant enum (`ipLAD`, `zlSAY` — likely toggle/hold bind mode)
   (`gg.java:37-77`, `gc.java:88-133`).
3. **The event bus is NOT native.** `hF` is plain Java
   (`hF.java:14-67`): `ConcurrentHashMap<Class<? extends hH>, CopyOnWriteArrayList<hI>>`;
   registration `bdI(obj)→bdJ` reflects methods, requires
   `@hG` (`var0.getAnnotation(hG.class).priority().cmD()`), wraps them in
   `MethodHandle`s into `hI(Object source, MethodHandle target, int value)`
   (a record), and **sorts descending by priority int** (higher value fires
   first). Dispatch is **pull-based**: an event object calls `bdV()` on itself,
   which walks its class's list and does
   `target().invokeWithArguments(source, this)`, swallowing Throwables to
   `printStackTrace`. Global kill-switch `BQuMu` (`bdH()` enable / `bdP()` disable+clear).
   Unregistration is `bdM(obj)` (remove by source + compact). 73 event classes
   `extends hH` (gA…gN/gi… range) — a far larger typed-event vocabulary than the
   spec's tentative list. Spec §Event system line "the event bus itself is
   native" is wrong; only the *string constants and method bodies of j2cc
   classes* are native.
4. **Module enable/disable = event-listener registration.** `gg.baa(boolean)`:
   no-op if in-game-check `mZ.css()` differs, sets `RliRe`, and on enable calls
   `aaj() → hF.bdI(this)` (register), then always `YO() → hF.bdM(this)` after
   toggling off — i.e. **the framework registers a module's annotated handlers
   when the module turns on and removes them when it turns off**; `aZZ()` is the
   toggle (flips `RliRe`, wraps enable in `rD.dmd().daT()/daU()`) (`gg.java:188-350`).
   `hF.bdI` registers with `bdJ(obj, null)`.
5. **The string-decryption split is confirmed at the native layer.** Two
   independent schemes coexist as documented in spec §Protection: (a) Java-side
   per-class DES (`gg` clinit builds `DES/CBC/PKCS5Padding` + `NoPadding`
   ciphers keyed by a clinit long, decrypts an 8/16-byte blob to `jdjGT` and a
   2-long `KVEqq` table, caches per-thread Cipher objects in a
   `HashMap<threadId, Object[3]>`, `gg.java:90-160`), and (b) the native blob
   decryptor `FUN_190dd72e0` with per-site offsets/keys (see `fZ.aYH`). `gg`'s
   invokedynamic bootstrap `baF/baE` rewrites `MutableCallSite`s to constants
   after one native-assisted decrypt (`baD`: index `n2 ^ (int)(l2 & 0x7FFF) ^
   0x60C6` into `KVEqq`, DES-decrypt, take bytes 4-7 as int) — the "encrypt once,
   patch callsite" pattern, thread-cached.

## What the rebuild should take from this (contract, not code)

- Event bus: listener registry keyed by event class, priority-sorted
  (descending), MethodHandle-style fast invocation, per-module
  register-on-enable / remove-on-disable, global suspend flag, exceptions never
  kill the dispatch loop.
- Module state: an enum (2 values, toggle/hold) + an int key code compared for
  bind matches; bind sets are `int[]` on the module; `-999` unbound convention
  (per registry) still holds.
- Config: singleton root with a concurrent map + hierarchical settings; export
  format is opaque binary in the original — the rebuild's JSON is a documented
  divergence, not a regression.
- Input plumbing names to mirror in shape: hover/click/wheel/char-typed with a
  mouse-action enum; widgets are fluent builders.
- Animation utilities (`rk` tween + `ri` animated color + `rj` easing library of
  38 constants: linear, sine/quad/cubic/quart/quint × in/out/inout, back
  (overshoot 1.70158/2.70158), elastic, bounce (7.5625), cubic-bezier
  `(0.42,0,0.58,1)`) are part of the framework's widget layer, not the module
  API — useful for GUI parity but outside the clean-room core.

— Generated by session 2 (Ghidra handler pass). Summary pointer added to
`../../analysis/specs/00-framework.md` under "Native handler findings (session 2)".
