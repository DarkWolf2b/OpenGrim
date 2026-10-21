# OpenGrim — ground rules (always in effect)

1:1 rebuild of the "Grim 4.4" Minecraft utility mod (Fabric 1.21.11). 162/162 modules ported. Reverse-engineered behavior is translated **1:1** from the decompile — never reinvent, improve, or approximate (skill: `port-module`).

## Windows case-collision rule (critical)

The original uses obfuscated class ids that differ **only by case** (`dL`/`dl`, `eY`/`ey`, `fQ`/`fq`, … — ~73 colliding pairs), and the Windows filesystem silently collapses them (2,059 lost paths, all since recovered into `casesafe/` trees). Therefore:

- Never trust a file under `analysis/decompiled/**`, `analysis/specs/**`, `analysis/ghidra/**`, or `analysis/jars/**` by its name — read the `class`/`enum` declaration inside and verify it matches.
- Ground-truth lookup order: `analysis/decompiled/jar-casesafe/` (complete raw classes) → `analysis/decompiled/casesafe/` (verified decompiles) → git blob at a known-good commit → on-disk tree (last resort).
- Case-safe filenames append `_` after every uppercase character: `dL.java` → `dL_.java` (see `analysis/specs/casesafe/{modules,handlers}/<id>_.md`).
- Never `git add -A` after a fresh clone/sync of the decompile trees on Windows before running `analysis/tools/casesafe/Verify-GitTreeClasses.ps1`.

## Where current state lives

- **Work log:** `analysis/docs/PROGRESS.md` — dated session entries appended at the tail ("Last updated: 2026-10-17").
- **Parity ledger:** `analysis/docs/PARITY.md` — the single parity ledger: per-module rows (status ∈ `ported | partial | stub | not-started`) plus dated sections below the table — re-audits (2026-10-16 audit of the 42 low-parity modules) and the divergences log (append-only waves). Re-audits and divergence waves append there; never fork new status files.
- `analysis/docs/HANDOFF.md` and `HANDOFF-NEXT.md` are **historical** — superseded by PROGRESS.md. `analysis/docs/README-scaffold.md` is stale.

## Skills

Load with the `skill` tool when relevant: `spec-lookup` (resolve ids, find decompiles/specs safely) · `port-module` (port or modify a module) · `update-ledgers` (record finished work).
