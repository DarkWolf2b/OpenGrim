---
name: Spec Lookup
description: Locate the authoritative decompile, behavior spec, or evidence for any module/class (obfuscated sixtwo.* id) in this repo. Use when researching a module, reading files under analysis/specs, analysis/decompiled, analysis/ghidra or analysis/jars, or resolving anything on this Windows checkout.
---

Resolve which real class an obfuscated id refers to, then read it from the right tree. Never resolve by filename (ground rules: case-collision).

## 1. Id → module: the registry

`analysis/specs/registry.tsv` — columns: `class_id, fqcn, name, description, key, bind` (162 rows). Search it for the id or the module name (e.g. `ei` → Scaffold). `analysis/jars/bootstrap-raw/offline/features/metadata.txt` is the original client's registry (same mapping).

## 2. Decompile lookup order

1. `analysis/decompiled/payload-named-cfr/sixtwo/<id>.java` — primary readable decompile (890 top-level classes; inner classes are inlined in their outer file, e.g. `gL$tj` lives inside `gL.java`).
2. `analysis/decompiled/payload-decrypted/sixtwo/<id>.java` — **overrides #1 where present** (151 classes with runtime-decrypted string/number constants).
3. Helper classes (`oC`, `oA`, …) live in the same trees.
4. GUI framework classes (`c`, `ap`, `bl`, `lf`, `rj`, …): `analysis/gui-src/*.java` (+ `manifest.txt`); decoded literals in `analysis/decrypted/gui-dump.jsonl` / `gui-strings.jsonl`; module constants in `analysis/decrypted/full-dump.jsonl`.
5. If a file is missing or its declared class disagrees with its name, regenerate from ground truth `analysis/decompiled/jar-casesafe/` (entry manifest in that dir; extractor: `analysis/tools/casesafe/Extract-AllCaseSafe.ps1 <jar> <dest>`).

Verification order when unsure: `jar-casesafe` → `analysis/decompiled/casesafe/` → git blob at a known-good commit → on-disk tree.

## 3. Specs

- `analysis/specs/00-framework.md` — framework contract (`sixtwo.*`: module base `gg`/`iS`, metadata enums, event + settings systems); claims tagged `[structure]` / `[inferred]` / `[registry]`.
- `analysis/specs/handlers/<id>.md` — behavior spec per module: decrypted constants (`[recovered]`), settings→behavior mapping, ends with an "Unrecovered / uncertain" section (90 on disk).
- `analysis/specs/modules/<id>.md` — structural spec: settings table with builder chains + line refs (89 on disk).
- Missing file? It sat in a case-colliding pair → look for the same id with `_` appended after every uppercase char in `analysis/specs/casesafe/{modules,handlers}/` (e.g. `fQ` → `fQ_.md`; recovered byte-exact 2026-10-13 and 2026-10-15). Check the `manifest.tsv` in each `casesafe/` root.

## 4. Evidence conventions

- `[recovered]` — constant from the decrypted pool (authoritative).
- `[uncertain]` / "Unrecovered / uncertain" — inferred, not proven. If a port must diverge here, record it in the Divergences section of `analysis/docs/PARITY.md` (skill: `update-ledgers`).
- Native-body evidence: per-class C corpora in `analysis/ghidra/casesafe/handlers-stitched/` and `handlers-full-annotated/` (`dL_`-style names); continuation blocks are intact inside each stitched corpus and in `analysis/ghidra/continuations/all-continuations.c`.

Full incident history + prevention tooling: `analysis/docs/CASE-COLLISION-WARNING.md`.
