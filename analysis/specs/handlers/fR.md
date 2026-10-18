# Client Sounds (sixtwo.fR) — handler-derived behavior spec

Class: `sixtwo/fR` · display name **Client Sounds** · registry description
"Manages sounds of client" · primary key 103, active bind -999 (unbound)
[`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`fR | Client Sounds | 9 | 9 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fR.c` — **9 native handlers** +
   continuation blocks; **fR declares zero `@hG` event listeners** — all
   four public handlers are settings accessors. Main slice
   `POOL[0x15012,0x347]`. Citations are image addresses.
2. Java skeleton: `payload-named/sixtwo/fR.java` + decrypted
   `payload-decrypted/sixtwo/fR.java`.
3. Neighbors in window: `fQ` (No Protocol Disconnect, `endsWith`), `fS$sV`
   (Name Protect inner), `fT` (Resource Pack Bypass: `class_2720`
   `ResourcePackSendS2CPacket`, `class_2856`
   `ResourcePackStatusC2SPacket` + `comp_2158 id`, `class_2856$class_2857`
   `field_13016 ACCEPTED` / `field_13017 SUCCESSFULLY_LOADED`,
   `InterruptedException`/`sleep`, `split`/`lastIndexOf`/`StringBuilder`) —
   NOT fR `[window straddle, stub-matched]`.
4. Consumer pattern: `gI` (sound event wrapper: `SoundInstance bcc()`),
   consumed by `dQ` (Hit Sounds) — see dP window tail
   (`sixtwo/dQ | AFdCl | apb | sixtwo/gI | bcc | ()Lnet/minecraft/class_1113;`).
5. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/fR.md`.

## Runtime model

- `super(gf.aZL(103, true, gh.KfAlY))` — id 103, category `gh.KfAlY`, **flag
  `true`** — the only module in this batch whose second ctor argument is true
  (sibling modules use `false`; meaning unrecovered — possibly
  enabled-by-default or "settings-only module") `[decompiled fR.java:23]`.
- Settings (names decrypted verbatim):
  - group `foDkU` — **"Sound Type"** (`ct`) with `cu` `sxltZ` **"Normal"** and
    `cu` `uLWvr` **"Bubble"** — radio pair `[decrypted fR.java:25-55]`;
  - `ZvuAA` — **"Sound Volume"** (`cC`): `.Vy(1.0).Vw(0.0).Vx(100.0).VA(70.0).Vz(ymMTJ)`
    — step 1, min 0, max 100, default 70, suffix `ymMTJ` (unrecovered — likely
    "%") `[decrypted fR.java:56-67]`.
- Public accessors (the module's entire API — consumed by other modules that
  play client-side sounds):
  - `aWH() → ct` (Sound Type group), `aWI() → cu` (Normal),
    `aWJ() → cu` (Bubble), `aWK() → cC` (Sound Volume)
    `[decompiled fR.java:79-84]`.
- No state, no timers, no event wiring — fR is a **pure settings provider**
  (a "service module"): it centralizes the sound profile other modules
  (Hit Sounds `dQ`, notification producers) query before playing sounds via
  the `gI` sound-event path `[decompiled + consumer evidence, inferred]`.
- fR's own symbol run is exactly its four setting fields + obfuscation
  statics (`KCbXY/aChQX/QkNsh/rOGIl/ymMTJ`); **zero Minecraft API tokens** —
  no `SoundInstance`, no `SoundEngine`, nothing. All playback is in
  consumers `[slice, negative evidence]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_be8876597688c4e993e11acafd73b0dc()V` | `[18a91a090]` | native clinit stub |
| `aWH()Lsixtwo/ct;` | `[18a8e0e70]` | getter → "Sound Type" group |
| `aWI()Lsixtwo/cu;` | `[18a8e1070]` | getter → "Normal" option |
| `aWJ()Lsixtwo/cu;` | `[18a8e1270]` | getter → "Bubble" option |
| `aWK()Lsixtwo/cC;` | `[18a8e1470]` | getter → "Sound Volume" |
| `aWL([B)Ljava/lang/String;` | `[18a8e1670]` | string decryptor (suffix `ymMTJ`) |
| `aWM(IJ)I` | `[18a90aba0]` | int-constant decrypt kernel (decrypts `POOL[0x15012,0x347]`) |
| `aWN(Lookup;MutableCallSite;String;[Object;)I` | `[18a916370]` | MutableCallSite re-bootstrap |
| `aWO(Lookup;String;MethodType;)CallSite` | `[18a917380]` | indy bootstrap |

- The four getters are virtualized too (bodies not linearly recovered), but
  their contracts are pinned by signatures: each returns the corresponding
  final field — no computation beyond obfuscation `YO`-style plumbing
  `[decompiled stub, inferred]`.
- "Normal"/"Bubble" describe the *tone family* of client UI/hit sounds
  (bubble = underwater-style variant); selection semantics live in the
  consumers `[inferred, uncertain]`.

## Settings → behavior

| field | wrapper | chain (verbatim) | notes |
|---|---|---|---|
| `foDkU` | `ct` | `"Sound Type"` | group |
| `sxltZ` | `cu` | `"Normal"` (plain) | tone A |
| `uLWvr` | `cu` | `"Bubble"` (plain) | tone B |
| `ZvuAA` | `cC` | `"Sound Volume" .Vy(1.0) .Vw(0.0) .Vx(100.0) .VA(70.0) .Vz(ymMTJ)` | step 1 / min 0 / max 100 / default 70 |

- Decrypted name constants verified in `full-dump.jsonl` (class `sixtwo.fR`):
  "Sound Type", "Normal", "Bubble", "Sound Volume" `[full-dump]`.
- Registry: id 103, bind -999, description "Manages sounds of client"
  `[registry]`.

## Unrecovered

1. Which modules call `aWH/aWI/aWJ/aWK` at runtime (only dQ Hit Sounds is
   proven adjacent; the call graph lives in native code).
2. The `true` ctor flag and the suffix literal `ymMTJ`.
3. Whether "Bubble" changes the played `SoundInstance` registry ids or just a
   pitch/profile — the mapping table is in consumers' VM code.
4. The fQ/fS/fT resource-pack token cluster in fR's window is neighbor
   machinery; any fR involvement is unproven.
