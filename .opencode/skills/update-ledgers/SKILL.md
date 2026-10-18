---
name: Update Ledgers
description: Record finished work in OpenGrim's ledgers (PROGRESS.md and the single parity ledger PARITY.md) — use after porting/fixing a module, completing a session, or finishing any audit worth keeping, instead of creating new ad-hoc status docs.
---

State lives in exactly two ledgers. **Append; never rewrite** existing entries or reformat the structure. (The once-separate `analysis/PARITY-DIVERGENCES.md` and `analysis/docs/PARITY-BURNDOWN.md` were merged into PARITY.md as dated sections on 2026-10-17; originals live in `analysis/docs/archive/`.)

## Which ledger

| Change | Where |
|---|---|
| Code on any module/framework | `analysis/docs/PARITY.md` (module row) + `analysis/docs/PROGRESS.md` (session entry) |
| Divergence from the original | `analysis/docs/PARITY.md` → **Divergences** section |
| Parity re-audit | `analysis/docs/PARITY.md` → new dated entry under the re-audit group |

## Formats

- **PROGRESS.md** — dated heading (e.g. `## 2026-10-17 (Windows): <title>`) appended at the tail; update the "Last updated:" line in the header; link commit hashes; keep earlier entries untouched.
- **PARITY.md rows** — one row per module; keep the columns (`Class | Module | Registry key | Status | Spec | Notes`). Status ∈ `ported | partial | stub | not-started`. Notes hold the impl file (e.g. `combat/AimAssist.java`), parity confidence (high/medium/low), and recovered-setting evidence. Spec links point at `analysis/specs/modules/<id>.md`.
- **PARITY.md → re-audits** — one dated H2 per audit, e.g. `## Re-audit <date> — <topic>`: scope, method, per-module verdict table, then a separate corrections list where verification superseded the table. Never silently overwrite the first table — corrections are their own appended block, so the record shows what changed and when.
- **PARITY.md → Divergences** — append to the newest dated wave, or start `### Wave N — <topic> (<date>)`. Each line: module (sixtwo id), what differs, why, citing original file + line ranges. Only genuinely unrecoverable behavior (native bodies, encrypted strings) or stack-required wiring deviations belong here — everything else must match the decompile exactly.
- Optional batch port report: `analysis/port/reports/batch<N>.md` following the existing table pattern (class id → file, settings ported, notes, parity confidence + cross-cutting Yarn 1.21.11 API notes).

## Rules

- `HANDOFF.md` / `HANDOFF-NEXT.md` are historical — do not update them. `analysis/docs/archive/` holds retired docs; do not resurrect them as active state.
- Do not create new status/topic docs; extend the ledgers, or the spec corpus (skill: `spec-lookup`) with new dated entries.
- Every ledger edit carries evidence: commit hash, original file+line, or decrypted-constant source.
- Deeper caveats live inside PARITY.md (re-audits) and `analysis/docs/CASE-COLLISION-WARNING.md` (why `casesafe/` trees exist).
