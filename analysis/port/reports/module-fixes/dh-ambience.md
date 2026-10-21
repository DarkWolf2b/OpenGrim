# dh — Ambience: preset/fade constant recovery attempt + fog range

Date: 2026-10-21 · Module: `sixtwo.dh` → `src/main/java/dev/opengrim/modules/utility/Ambience.java`
Status: Fog Range is now the exact two-handle setting; preset/fade constants checked, only Dawn recovered; the rest stay labelled

## What was checked

- `aet()` failed CFR; the javap bytecode
  (`analysis/decompiled/...` + `javap -c -p sixtwo/dh.class`, `aet` offsets
  96-203) shows **six encrypted long constants**, one per preset:
  Dawn `slot 15705 / 6558952130457457246`, Morning `25151 /
  2750910286874185021`, Day `3125 / 8329020857362080560`, Evening `29143 /
  8145554256466714335`, Sunset `19360 / 893157803187971236`, Night `27458 /
  873894199358653506` (each is `ldc ^ l2`, then `afw`/`afv`/`afu`).
  The audit note that "javap can recover the five literals" is wrong: javap
  exposes only the encrypted blocks; the plaintext comes from `afu`'s DES step.
- `afu(int slot, long passed)` (dh.txt:4650-4875): index
  `slot ^ (passed & 0x7FFF) ^ 1503`, key = `ecoWj[index]`, then
  DES/CBC/NoPadding of the 8 `passed` bytes. `ecoWj` is a 9-entry table built
  in `<clinit>` from two encrypted strings with
  `l2 = lbjfT ^ 136658407006073`; `fade` (`dh$sz.IWwlL`) and the particle
  cap/interval slots (2577/15922/12446) use the same machinery in their own
  classes.
- The runtime dump (`analysis/decrypted/full-dump.jsonl`) has **no `(IJ)J`
  record for `sixtwo.dh`** (only `(IJ)I` and the two strings), so no plaintext
  pair exists for the long table. `sixtwo.dh` does provide enough `(IJ)I`
  records to cross-check the class key: 3484 rows agree on
  `lbjfT = 0x4dbbcfb6f444` (`args ^ raw ^ methodConstant`), but the per-slot
  `ecoWj` entries cannot be validated against a known plaintext, and the
  reconstructed table does not reproduce the one known long
  (Dawn = 23000, trace 2026-10-17 `aet → r:23000`). No preset value is
  therefore fabricated.
- The only recovered preset remains **Dawn = 23000** (trace 2026-10-17,
  `aet` return; the tour's default preset). `aeu`'s wall-clock mapping is
  already reduced to `round(minutes/1440*24000) mod 24000` from the same
  javap (the three DES longs there are constants 1440/…, not independently
  verified).
- `dh$sz.IWwlL` (fade duration) is a static DES long keyed through
  `gb.aYR(...).a(...)` (`dh$sz.<clinit>`), with no dump record; the 1000 ms
  interval stand-in in `render` remains labelled `[U]`.

## Changes

- `Fog Range` changed from a single `DoubleSetting` (low anchor 64) to the
  real `RangeSetting(step 1, min 0, max 256, handles 64/128, " blocks")`,
  matching `cA.MbiQi .UI(64.0,128.0)` (dh.java:348). The port still has no fog
  pipeline consumer; the setting is exact for when one is added.
- Javadoc corrected: the five preset longs are encrypted (`afw/afv/afu`),
  not recoverable by javap alone; `dh$sz.IWwlL` is a separate native-key DES
  long; the audit's "javap can recover the five literals" claim is explicitly
  marked wrong.
- No fake preset times or fade duration were added.

## Remaining

- `[U]` Morning/Day/Evening/Sunset/Night — encrypted longs; only Dawn=23000
  has runtime evidence. Selecting one currently leaves world time unchanged
  (the honest "unrecovered" behaviour, not a guessed preset).
- `[U]` particle cap (slot 2577), interval bounds (15922/12446) and fade
  duration (`dh$sz.IWwlL`) — same encrypted-long path; interval 1000 ms is a
  labelled stand-in.
- `[U]` billboard texture string (slot 3717) — string decoder, not recovered.
- `[U]` fog pipeline (color/range/sync consumed by the shell) — setting exact,
  renderer consumer absent. `[U]` category constant `gh.nOCvV` vs the file's
  `utility` package remains a framework placement note.

## Build

```
JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava
```

Result: **PASS** (forced full recompile: `BUILD SUCCESSFUL`, only the
pre-existing `WorldRenderEvent` deprecation warning).

## Files

- `src/main/java/dev/opengrim/modules/utility/Ambience.java`

Not modified: `PARITY.md`, `PROGRESS.md`, `privacy.md`, `.gitignore`, git
state; no render module and no GUI render pipeline file.
