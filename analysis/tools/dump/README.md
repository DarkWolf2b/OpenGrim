# Dump harness tooling (2026-10-17)

The runtime dump pipeline that produced `analysis/traces/2026-10-17/`.
Runs inside the WSL `GrimHarness` distro (Wine 11 + Windows Temurin JDK under
Wine; full environment log in `analysis/docs/PROGRESS.md`). Everything below is
a copy of the live files in the distro (`/root/win/` + `/mnt/d/WSL/`) — the
distro remains the execution home; these copies keep the project
self-contained.

## Agents (C, built with mingw-w64 inside the distro)

- `hook-args.c` → `hook-args.dll` — JVMTI tracer:
  - **deferred tracing**: METHOD_ENTRY/EXIT stay disabled until `trace-go`
    appears (plain Win32 watcher thread, attaches before enabling — unattached
    JVMTI calls fail silently);
  - **render-thread-only** event filtering (the whole client runs there;
    global enabling starves the JVM);
  - String-argument capture (`TRACE_STRINGS=1`, `TRACE_STRING_CLASSES`)
    via JVMTI GetLocalObject + a NewGlobalRef-cached String class;
  - JSONL output (`{"e":"enter|exit|str|load","t":QPC,"c":class,"m":method,"s":sig,"r":return}`),
    raw-monitor-guarded line writes.
- `driver.c` → `driver.dll` — module-tour driver: waits for `driver-go`
  (pure Win32 polling; attaches only after join), resolves `sixtwo/rD`,
  `sixtwo/ge`, `sixtwo/gg` via JVMTI `GetLoadedClasses` (FindClass cannot see
  Fabric's Knot classloader), walks `rD.dlJ().aZz()` (the module Map) and
  toggles each module with `gg.baa(boolean)` — the same call the Click GUI
  uses — for `DRIVER_MS` each, logging to `driver.log`.

## Session flow

1. `session-sp.sh` — launch the client (singleplayer `TourWorld`, server world
   copied into `saves/`), wait in-game, `touch trace-go`, open the Click GUI,
   screenshots.
2. `driver-watch.sh` — `touch driver-go`, wait for `tour done`.
3. Analysis: `split2.sh` (case-safe per-module split — **must** write to the
   distro's native fs first; NTFS merges case-colliding pairs), `module-summary2.sh`,
   `digest-all.sh`, `strings-full.sh`, `n-evidence.sh`, `coverage.sh`,
   `analyze-trace.sh`, `extract-method.sh`.
4. Input helpers: `shot.sh` / `key.sh` / `click.sh` / `hold.sh` / `cmd.sh`
   (xdotool; the game window needs `windowfocus` first; waits must be long —
   the client runs at ~1.5-6 fps under trace load).

## Artifacts (`analysis/traces/2026-10-17/`)

- `module-summary.tsv` — per-module line/enter/numeric-exit/string counts.
- `n-evidence.tsv` — [N]-method cross-check: 31/103 captured with counts and
  sample values; the rest need condition-triggered capture.
- `strings-full.tsv` / `strings-values.txt` — 548 rows / 166 values of
  runtime-decrypted strings (largely absent from the static pool).
- `digests/` — compact per-module digests (method counts + value distributions).
- `by-class-casesafe/` — per-module raw JSONL, encoded names
  (`_` after each uppercase char). **gitignored** (44 MB).
- `raw/trace.jsonl` — the full session trace. **gitignored** (~705 MB).
