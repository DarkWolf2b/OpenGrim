# ⚠️ Windows case-collision warning — decompile trees and obfuscated ids

> **Read this before trusting any file under `analysis/decompiled/`,
> `analysis/specs/` (modules + handlers), `analysis/ghidra/` (handler corpora)
> or `analysis/jars/` (raw classes) on the Windows machine.**

## The bug

The original payload uses short obfuscated class ids (`dL`, `dl`, `eY`, `ey`,
`fQ`, `fq`, …) that differ **only in letter case**. Git and zip archives store
names case-sensitively, but the Windows filesystem is case-insensitive: two
files `dL.java` and `dl.java` in the same directory cannot coexist. Whenever the
decompile trees were synced to or re-checked-out on Windows, one file of every
colliding pair was **silently overwritten or deleted** — no error, no warning.

Consequences observed in this repo:

- ~73 module id pairs collide (`dA`/`da`, `dB`/`db`, …, `eY`/`ey`, `fQ`/`fq`).
  At least two of the five modules randomly audited on 2026-10-13 were initially
  reviewed against the WRONG class's decompile because of this.
- The first `git add -A` commit made after a collapsed checkout (`b80450c`)
  recorded these silent overwrites/deletions permanently in git — **2,059
  affected paths in total**: 1,334 decompiled files + 73 module specs (recovered
  2026-10-13), and 172 ghidra corpus files + 73 handler specs + 407 raw class
  files (recovered 2026-10-15, see below).
- A file on disk can even carry the WRONG name: e.g. the Windows working tree
  held `payload-cfr/sixtwo/fQ.java` whose content was `class fq`.

## What is safe now (recovery status, updated 2026-10-15)

- **All git-recoverable content is restored** into case-safe trees from
  `b80450c~1` — round 1 (2026-10-13): 1,407 files (`analysis/decompiled/casesafe/`
  plus `analysis/specs/casesafe/modules/`, manifest
  `analysis/decompiled/casesafe/manifest.tsv`); round 2 (2026-10-15): 652 files
  (`analysis/ghidra/casesafe/`, `analysis/specs/casesafe/handlers/`,
  `analysis/jars/casesafe/`, a `manifest.tsv` in each round-2 root). Every
  recovered file was verified byte-for-byte with `git hash-object --no-filters`,
  and every recovered `.java` was verified to declare the class its path names.
- **The complete ground truth is `analysis/decompiled/jar-casesafe/`** — every
  class from `win/payload-named.jar` (1113 entries, incl. 214 inner classes)
  extracted case-safely, plus `entry-manifest.txt` with the exact archive names.
  Any lost decompile can be regenerated from here at any time.
- Coverage audit vs the jar (`analysis/tools/casesafe/gap-report.tsv`):
  `payload/` and `payload-named/` are complete; `payload-named-cfr/` contains
  all 890 top-level classes (the 23 "absent" inner classes are inlined in
  their outer decompiles, e.g. `gL$tj` lives inside `gL.java`); `payload-cfr/`
  (348) and `payload-decrypted/` (185) cover their intended scopes fully;
  `analysis/specs/casesafe/modules/` holds the 73 spec files lost from HEAD.
- **Round 2 (2026-10-15):** a repo-wide audit re-checked every path lost since
  `b80450c~1` and restored the families round 1 had missed (tool:
  `analysis/tools/casesafe/Restore-Collisions-Corpus.ps1`):
  `analysis/ghidra/casesafe/handlers-stitched/` (86) and
  `analysis/ghidra/casesafe/handlers-full-annotated/` (86) — the full per-class
  C corpora for the lost module classes (Sprint, Blink, AutoTrap, Kill Aura,
  Air Anchor, …) and framework classes, manifest
  `analysis/ghidra/casesafe/manifest.tsv`; `analysis/specs/casesafe/handlers/`
  (73 handler specs, manifest in that directory); `analysis/jars/casesafe/`
  (407 raw `.class` files: 403 `payload-raw/` + 4 `stage2-raw/`, manifest
  `analysis/jars/casesafe/manifest.tsv`).
  Result: **2,059/2,059 lost paths have case-safe copies, 0 uncovered.**
- **Known not-in-git (regenerable):** the raw (un-annotated) `handlers-full/`
  twins for those 86 classes were never committed (the directory was born
  already-collapsed at `b80450c`); the annotated + stitched corpora supersede
  them. Per-class `_cont.c` extracts are a partial convenience subset — the
  continuation blocks themselves are intact inside every stitched corpus
  (`// ===== CONTINUATION BLOCKS =====`) and merged in
  `analysis/ghidra/continuations/all-continuations.c`.
- A declared-class verification of every tracked `.java` blob at both
  `b80450c~1` and `HEAD` found **0 mismatches** — nothing tracked in git has
  wrong content. Corruption lives only in case-shifted names on the Windows
  working tree, never in the blobs. (Re-run at HEAD after round 2: 2,581 blobs,
  0 mismatches.)

## Rules to prevent recurrence

1. **Never trust a decompile file on Windows disk by its name alone.** Read the
   `class`/`enum` declaration inside the file and check it matches the module
   you are researching. If the names disagree, stop and recover from the jar.
2. **Ground-truth lookup order:** `analysis/decompiled/jar-casesafe/` (raw
   classes, always complete) → `analysis/decompiled/casesafe/` (verified
   decompiles) → git blob at a known-good commit → the on-disk tree (last).
3. **Never `git add -A` from a Windows checkout after a fresh clone/sync** of
   the decompile trees without first running
   `analysis/tools/casesafe/Verify-GitTreeClasses.ps1` (reports files whose
   declared class disagrees with their file name) and
   `analysis/tools/casesafe/Audit-TreeGaps.ps1` (reports trees missing classes
   relative to the jar).
4. **On a case-sensitive filesystem (Linux VM), nothing is lost** — the
   colliding files coexist fine. Prefer doing tree-wide operations there.
5. To extract any class case-safely from a jar, use
   `analysis/tools/casesafe/Extract-AllCaseSafe.ps1 <jar> <dest>` (or the
   single-class `win/tmp/ExtractCase.java` via `ZipFile.getEntry`).
6. Case-safe names append `_` after every uppercase character
   (`dL.java` → `dL_.java`, `A$1.java` → `A_$1.java`); the mapping is reversible
   and collision-free. `Restore-Collisions.ps1` rebuilds the decompile/spec
   casesafe trees from any commit; `Restore-Collisions-Corpus.ps1` does the
   same for the ghidra handler corpora, handler specs and raw jar trees.

## Tools (this directory)

| Tool | Purpose |
| --- | --- |
| `Restore-Collisions.ps1` | Recover every file missing/changed at HEAD vs `b80450c~1` into `casesafe/` + manifest |
| `Restore-Collisions-Corpus.ps1` | Round-2 companion: byte-exact recovery of the ghidra handler corpora, handler specs and raw jar class trees lost at `b80450c` (+ manifest) |
| `Extract-AllCaseSafe.ps1` | Extract a whole jar/zip case-safely (+ entry manifest) |
| `Verify-GitTreeClasses.ps1` | Scan a commit's trees; report declared-class vs filename mismatches |
| `Audit-TreeGaps.ps1` | Compare each decompile tree against the jar's class list; write `gap-report.tsv` |
