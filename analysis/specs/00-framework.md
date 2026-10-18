# Payload framework (sixtwo.*) — structural analysis

Evidence quality: ~all behavior methods are `private native` (j2cc-compiled into
`j2cc_natives.dll`); all string literals are encrypted (per-class invokedynamic
bootstraps and/or DES clinit blocks). This document describes only what is
statically visible in `../../analysis/decompiled/payload-named/sixtwo/`. Claims are
tagged: `[structure f:line]`, `[inferred]`, `[registry]`.

## Identity

- Package `sixtwo.*` = the client. 1104 classes; entry points `Init`, `R`, `c`, `e`, `i`, `p`.
- `Init implements PreLaunchEntrypoint` `[structure Init.java:14]` — does HTTP
  license/auth telemetry (POST, custom headers, env-var token) at pre-launch
  `[structure Init.java:30-80]`; `R`, `c`, `e`, `i` are loader/GUI-adjacent roots.
- Module ids in `offline/features/metadata.txt` (162 entries) map 1:1 to
  `sixtwo/<id>.java` classes. (HANDOFF says 163; actual registry line count is 162.)

## Module base

- `gg extends iS` is the module base class `[structure gg.java:36]`. Constructor
  takes `gf` (module metadata) and:
  - stores module id `XWrfQ = gf2.aZM()` `[gg.java:65]`
  - flags from metadata: `RliRe`, `tZRhp`, `dktTQ`, `EDndy` `[gg.java:66-73]`
  - category `utKrA = gf2.aZO()` (returns `gh` enum) `[gg.java:73]`
  - creates `gc GfFkt` (per-module state container) and two `rk` keybind
    objects + one `ri` `[gg.java:60-63]` `[inferred: primary + alt bind]`
- `gf` (metadata): ctor `(int id, boolean, gh category)`; accessors `aZN/aZT/
  aZV/aZP/aZM/aZR/aZO` — all native `[structure gf.java]`. `gh` has 5 category
  constants (`xwjCw, xgeEn, qBzlZ, nOCvV, KfAlY`) `[structure gh.java:5-9]` —
  names encrypted; count [5 categories] is reliable.
- `mw` = event priority enum, 6 constants, int payload, `hG#priority()` default
  NORMAL `[structure mw.java:5-15, hG.java:6-8]`.

## Event system

- `@hG(priority=mw)` method annotation, RUNTIME retention, METHOD target
  `[structure hG.java]`.
- Event payloads are `gH$*` inner classes (e.g. `gH.th` seen in module
  handlers `[structure fF.java:510]`); `gH` also has static registry arrays
  (`baJ()`/`baI(iS[])`) suggesting a central event/type registry `[gh.java:31-35,
  inferred]`.
- Dispatch: the event bus itself is native; modules only expose annotated
  handlers. For the rebuild: a typed listener bus with priorities is required.

## Settings system

- Wrapper classes (verified by reading sources; field evidence):
  - `cA extends cB` — numeric setting: fields min/max (±MAX sentinel), step
    `thjOL`, `MutablePair<Double,Double>` (slider range), `String` suffix
    `[structure cA.java:23-37]`. Builder chain seen in modules:
    `.UG(step).UE(min).UF(max).UI(default, default).UH(string)` — native
    builders `[structure fF.java:168-169, 457]`. So UG=step, UE=min, UF=max,
    UI=default(+default2?), UH=suffix/format `[inferred from argument order]`.
  - `cD` — mode/choice setting, built with `.VO(mA.sCBUa.cmO())` (enum constant
    source) `[structure fF.java:477]` `[inferred]`.
  - `cJ` — boolean/toggle: `.WE(false)` `[structure fF.java:393]` `[inferred]`.
  - `ct` — collapsible group container; `cu` — setting bound to a parent `ct`;
    `cv`/`cw` — two-level sub-settings (cw constructed with parent cv)
    `[structure fF.java:71-330]` `[inferred: tree structure]`.
  - `cz` — action/bind setting with callback `.Vf(this::aSW)` `[structure
    fF.java:486]` `[inferred]`.
  - `cB` is the common setting base; `mr` (encrypted string-pool handle) is the
    first ctor arg of every wrapper — setting display names live in the
    encrypted pool `[structure cA.java:46-53, mr.java]`.
  - **Corrections (2026-10-17, wave-1 static re-verify B):** `cA` is **not** a
    plain numeric slider — it stores a `MutablePair<Double,Double>` range and its
    value is a uniform draw in `[left, right)` per read (`cA.UN()` → `mU.cpR` →
    `mU.cpP`); `UI(a,b)` is the default pair. `ct`/`cu` default = index 0 unless
    `cu.SY()`; `cv`/`cw` `Tz()` = default-selected, and the behaviour accessor is
    `TC()`; `cz` default = empty set.
- Every module constructor builds its settings inline, then wires callbacks:
  `this.QcPEg.Vf(this::aSW)` `[structure fF.java:486-490]`.

## Module registration

- No Java-side module registry: no `new fF()` instantiation sites, no
  Class.forName/newInstance, no reference to `features/metadata.txt` anywhere in
  the decompiled tree `[verified by grep]`. Registration, GUI construction and
  event dispatch are driven from the native layer (DLL).
- For the rebuild this means: the framework must be designed fresh (clean-room)
  around the observable contract — 162 modules, 5 categories, keybind + config
  per module, settings tree per module.

## Protection layers (see PROGRESS.md / HANDOFF.md)

1. Name obfuscation + (now fixed) MC intermediary names → Yarn `1.21.11+build.6`.
2. Encrypted constant pool: native invokedynamic bootstraps (`aTe/aTb/...`,
   per-class) AND a Java-side DES clinit pool in some classes (key derived from
   `gb.aYR(...)` — native). Static recovery blocked without the DLL.
3. j2cc native method bodies (`private native void _<hash>()` per class).

## What the dev.opengrim rebuild must implement

- Module framework: `Module` base (id, name, description, category, keybind,
  enabled state, settings list), `ModuleManager`, config persistence (JSON).
- Settings: Bool, Double (step/min/max/default/suffix), Int, Mode, Bind,
  Action(callback), Group/sub-group trees.
- Event bus: typed client events with priorities (tick, render, packet
  send/receive, attack, entity-remove, ...), Fabric mixins as integration layer.
- Keybinds: primary + secondary bind per module (`bind=-999` = unbound).
- 5 categories matching `gh` cardinality; 162 modules per registry.

## Native handler findings (session 2)

Full detail with evidence in `../../analysis/ghidra/framework-findings.md`. Corrections
to THIS file, derived from the decompiled native handlers + calling context:

1. `rk`/`ri` are **animation primitives, not keybinds** (`rk` = animated float
   with duration/easing; `ri` = animated RGBA color of four `rk`s; `rj` = 38
   easing constants). The "two `rk` + one `ri` = primary/alt bind" claim above is
   wrong; real binds are `int[]` fields on `gg` (`RcFWc`/`lRvVv`, builders
   `bap`/`baq`) plus an int code in `gc` compared by `gc.aZd(int)`; `gd` is a
   2-constant enum (toggle/hold) held by `gc`.
2. **The event bus is Java, not native**: `hF` =
   `ConcurrentHashMap<eventClass, CopyOnWriteArrayList<hI>>` with
   `hI(source, MethodHandle, priority-int)`, sorted descending by priority;
   events are pull-dispatched by `hH.bdV()` via
   `invokeWithArguments(source, this)`; global suspend flag `hF.BQuMu`. 73 event
   classes `extends hH`. "The event bus itself is native" above is wrong.
3. Module enable = `hF.bdI(this)` (register listeners), disable =
   `hF.bdM(this)` (remove + compact) — `gg.baa(boolean)`/`gg.aZZ()` toggle.
4. `ga` protocol (`a(long)J`, `a(ga)V`, `b(ga)Z`, `b()[I`, `b(long)V`) is the
   shared state-container interface; `gb` = native peer table (long handle,
   paired-ArrayList table builders `aZa`/`aZb`, bulk `int[]/long[]` codecs,
   per-class key derivation `aYR(JJ,Class)` used by every clinit); `fZ` =
   singleton config root (`ConcurrentHashMap` + hardcoded `int[64]` decode
   table, registered via `gb.aYU(this)`), serializing payloads byte-by-byte via
   `SetByteArrayRegion` — native **binary** codec, so the rebuild's JSON
   persistence is a deliberate divergence.
5. **No networking in the framework handlers**: zero `java/net`/socket/http/URL
   references in all ten handler files (malware-stance ledger — only known
   network surface remains `Init` pre-launch HTTP, §Identity).
6. Native handlers confirm j2cc mechanics: lazy per-JVM bytecode decryption
   (most handlers decompile to `Java Virtual Machine is not running` stubs),
   exception-control-flow (synthetic `MatchException`), JNIEnv exception guards
   (`+0x720` ExceptionCheck, `+0x70` ThrowNew, `+0x88` ExceptionClear), and the
   native blob decryptor (offset+key sites) alongside the Java DES clinit pool.