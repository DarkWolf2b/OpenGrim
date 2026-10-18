---
name: Port Module
description: Port, fix, or verify one of the 162 OpenGrim modules 1:1 against the decompiled original. Use when creating or editing files under src/main/java/dev/opengrim/modules/, translating settings/events, or checking a module's parity.
---

## The law

Translate the original's decompiled code **1:1**. Change ONLY what is needed to function in our framework (renamed classes, our setting widgets, our event bus, vanilla API calls instead of native stubs). Do NOT reinvent, improve, or approximate. Same checks in the same order, same constants, same branches — including quirks that look like bugs (they are behavior). Cite the original file + line range in each impl file's javadoc.

## Per-module loop

1. Find the class id in `analysis/specs/registry.tsv` (finding files safely on Windows: skill `spec-lookup`).
2. Read `analysis/decompiled/payload-named-cfr/sixtwo/<id>.java`; where `analysis/decompiled/payload-decrypted/sixtwo/<id>.java` exists it overrides (decrypted constants). Also read helper classes it touches (`oC`, `oA`, … — same tree).
3. Skim `analysis/specs/handlers/<id>.md` for `[recovered]` constants the decompile cannot show and `[uncertain]` flags.
4. Rewrite `src/main/java/dev/opengrim/modules/<category>/<Name>.java` 1:1.
5. Where the spec says unrecovered/uncertain: pick its natural reading and add a line to the Divergences section of `analysis/docs/PARITY.md` (module, divergence, reason).
6. Compile: `./gradlew compileJava -q --offline`

## Templates & framework

- Simplest 1:1 module: `src/main/java/dev/opengrim/modules/combat/Reach.java`
- Events + mixin hook: `src/main/java/dev/opengrim/modules/movement/AntiWeb.java`
- `dev.opengrim.module.Module` — register settings in ctor, `onTick` override, EventBus `@Subscribe`, `isEnabled()`.
- Settings: `DoubleSetting(id, step, min, max, default, suffix)` · `ModeSetting(id, List.of(...), default)` · `BoolSetting(id, default)`.
- Rotation manager: `dev.opengrim.rotation.RotationManager` (queue, `dbC`/`dbX` readouts, `dbH`/`dbI` submits, send-path look rewrite). Silent-aim modules must submit through it, never `setYaw`/`setPitch` directly — note the port in javadoc.

## After porting

Record the work (skill: `update-ledgers`):

- `analysis/docs/PARITY.md` — update the module row (status `ported | partial | stub | not-started`, confidence high/medium/low in Notes).
- Divergences section of `analysis/docs/PARITY.md` — only if something diverges.
- Javadoc with original citations in every impl file.

## Known limitations

- Some original widgets are not expressible in our framework (list editors with presets, some color pickers) → use the closest supported widget and flag it in the PARITY row.
- 18 specs cite `analysis/ghidra/continuations/` corpora intentionally not in the repo (provenance only; extracted behavior is in the spec text).
- Original license/auth/telemetry machinery is intentionally absent; config format is plain JSON (not compatible with the original's binary codec).
