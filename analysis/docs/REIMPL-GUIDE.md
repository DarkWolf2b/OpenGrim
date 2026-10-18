# Module Reimplementation Guide (for any agent / provider)

> ⚠️ **CASE-COLLISION WARNING:** obfuscated ids collide on Windows
> (`dL`/`dl`, `eY`/`ey`, `fQ`/`fq`, …). Never trust a decompile file by its
> name; verify the class declared inside. Ground truth:
> `analysis/decompiled/jar-casesafe/`. Details:
> `analysis/docs/CASE-COLLISION-WARNING.md`.

This repo is self-sufficient for reimplementing all 162 modules. No native analysis,
DLLs, or runtime traces are needed for this phase — everything below is plain text.

## The law (non-negotiable fidelity bar)

Translate the original's decompiled code **1:1**. Change ONLY what is needed to
function in our framework (renamed classes, our setting widgets, our event bus,
vanilla API calls instead of the original's native executor stubs). Do NOT
reinvent, improve, or approximate. Same checks in the same order, same constants,
same branches — including quirks that look like bugs (they are behavior).
Cite the original file + line range in each impl file's javadoc.

## Where the source of truth is

| What | Path |
|---|---|
| Full readable decompile of the client (1,081 classes) | `analysis/decompiled/payload-named-cfr/sixtwo/*.java` |
| Runtime-decrypted variants (151 classes w/ recovered constants) | `analysis/decompiled/payload-decrypted/sixtwo/*.java` |
| Runtime-decompiled GUI framework (86 classes w/ real bodies: `c`, `ap`, `bl`, `lf`, `rj`, …) | `analysis/gui-src/*.java` (+ `manifest.txt`) |
| Runtime-captured GUI literal decodes (766 sites, 35 classes) | `analysis/decrypted/gui-dump.jsonl`, `analysis/decrypted/gui-strings.jsonl` |
| Decrypted module constant pool | `analysis/decrypted/full-dump.jsonl` |
| Obfuscated-id → module-name mapping (162 modules) | `analysis/specs/registry.tsv` |
| Per-module behavior specs w/ recovered constants + evidence | `analysis/specs/handlers/<class>.md` |
| Framework + 1:1 translation templates | `src/main/java/dev/opengrim/` |
| Parity ledger / divergence policy | `analysis/docs/PARITY.md` |

`payload-named-cfr` is the primary source for translation. `payload-decrypted`
overrides it where both exist (runtime-decrypted string/constant tables).
The specs are a lookup/reference — do not treat writing specs as a phase;
translate straight from the decompile.

## Per-module loop

1. Find the class id in `analysis/specs/registry.tsv` (e.g. `ei -> Scaffold`).
2. Read `analysis/decompiled/payload-named-cfr/sixtwo/<id>.java`
   (and `analysis/decompiled/payload-decrypted/sixtwo/<id>.java` if present,
   plus any helper classes it touches — `oC`, `oA`, etc. live in the same tree).
3. Skim `analysis/specs/handlers/<id>.md` for constants the decompile could not
   show (marked `[recovered]`) and for `[uncertain]` flags.
4. Rewrite `src/main/java/dev/opengrim/modules/<category>/<Name>.java` 1:1.
5. Where the spec says unrecovered/uncertain: pick its natural reading and add a
   line to the Divergences section of `analysis/docs/PARITY.md`
   (module, divergence, reason).
6. Compile: `./gradlew compileJava -q --offline`

## Templates to copy the pattern from

- `src/main/java/dev/opengrim/modules/combat/Reach.java` — simplest 1:1 module
- `src/main/java/dev/opengrim/modules/movement/AntiWeb.java` — events + mixin hook

Framework: `dev.opengrim.module.Module` (register settings in ctor, `onTick`
override, EventBus `@Subscribe`, `isEnabled()`); settings in `dev.opengrim.settings`
(`DoubleSetting(id, step, min, max, default, suffix)`, `ModeSetting(id, List.of(...), default)`,
`BoolSetting(id, default)`).

## Known gaps

- 18 of the 163 specs cite native continuation dumps under `analysis/ghidra/continuations/`
  that are intentionally NOT in the repo (109 MB of raw Ghidra output). The extracted
  behavior is already written into the spec text itself; the citations are provenance only.
- The original's rotation manager (`qL`) is ported as
  `dev.opengrim.rotation.RotationManager` (Java-visible contract: queue,
  `dbC`/`dbX` readouts, `dbH`/`dbI` submits, send-path look rewrite).
  Silent-aim modules must submit through it rather than calling
  `setYaw`/`setPitch` (note the port in javadoc, list native gaps in
  `analysis/docs/PARITY.md`, Divergences section).
