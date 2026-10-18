# OpenGrim

**[中文](README.zh-CN.md) · [Polski](README.pl.md)**

A clean-room, open-source (GPL-3.0) reimplementation of the "Grim 4.4" Minecraft utility client for Fabric 1.21.11.

## Build & run

**Requirements:** JDK 21 (any 21.x), Git. No IDE required.

```bash
git clone https://github.com/sequence3260/OpenGrim.git
cd OpenGrim
./gradlew build
```

> **Mirrors:** GitLab (`https://gitlab.com/sequence3260/OpenGrim`) is the fallback if the GitHub repo goes down. The repository is published as a single snapshot — there is no git history to clone, only the current tree.

The mod jar lands in `build/libs/opengrim-0.1.0.jar`. To use it:

1. Install [Fabric Loader](https://fabricmc.net/use/) for Minecraft 1.21.11 and [Fabric API](https://modrinth.com/mod/fabric-api) (0.139.4 or newer).
2. Copy the jar into `.minecraft/mods/`.
3. Launch the game — **Right Shift** opens the Click GUI; modules toggle with left-click, settings expand with right-click; config saves on GUI close.

## What it is

- **162 modules** across 5 categories (Combat, Movement, Render, Utility, World) — combat helpers, movement utilities, ESP/render overlays, world tools
- Click GUI with full settings widgets (sliders, modes, colors, binds), HUD overlay, JSON config persistence, primary + alternate keybinds per module
- Event-driven architecture: render, packet send/receive, attack, mouse and camera hooks via a typed event bus + Fabric mixins
- **100% original code.** Nothing from the original client is included or executed — this repository ships source only.

## Parity status

**Aggregate parity: 78.1%** — the mean of all 162 per-module parity scores from
the full 2026-10-17 audit (median 80%, range 45–100%; 36 modules at 90% or
higher). Each module is scored over its **recovered surface** (decompile-visible
logic + recovered constants); behavior that lives in the original's native/VM
layer is excluded from the denominator and itemized per module. Per-module
scores, gap classifications and the divergence log:
[`analysis/docs/PARITY.md`](analysis/docs/PARITY.md).

## How it was built (clean-room reverse engineering)

Static analysis only — the original client was **never executed** as a game, and no game code was copied:

1. **Decompilation** — all 1,111 obfuscated classes of the original payload were decompiled (Vineflower + CFR fallback) and remapped to readable Yarn mappings (`1.21.11+build.6`).
2. **Constant-pool break** — the original encrypts every string/number literal behind native code. A sandboxed JVM driver (network-isolated, under Wine, decryptor path only) recovered **23,147 literals** — real setting names, ranges, defaults and suffixes.
3. **Native handler mapping** — a JVMTI agent logged all **6,610 native method bindings** across 446 classes (which class → which native function), and all 6,603 handlers were decompiled (0 failures).
4. **Malware triage** — every binary layer (main DLL, exit-hook, stage2, launcher) was scanned: **no network, persistence, keylogging or injection indicators found.**

**Stats:** 1,111 classes decompiled · 23,147 constants recovered · 6,610 native handlers mapped across 446 classes (6,603 decompiled, 0 failures) · 162 modules reimplemented (73 ported / 89 partial — full audit 2026-10-17; aggregate parity 78.1%) · 6,610/6,615 native declarations accounted for.

## Documentation

| Doc | Contents |
|---|---|
| [`analysis/docs/PARITY.md`](analysis/docs/PARITY.md) | per-module parity ledger (162 rows, status + evidence) |
| [`analysis/specs/`](analysis/specs/) | behavior spec per module + framework contract |
| [`analysis/ghidra/triage.md`](analysis/ghidra/triage.md) | native binary triage (exports, protection layers, clean verdict) |
| [`analysis/docs/PROGRESS.md`](analysis/docs/PROGRESS.md) | full work log |
| [`analysis/docs/HANDOFF.md`](analysis/docs/HANDOFF.md) | environment + RE methodology (historical; current state in PROGRESS.md) |

## Limitations & gaps

- **14 modules diverge from the original where behavior lives in unrecoverable native code;** they are implemented from the recovered settings surface + observed structure. Every divergence is itemized — with dates and original file+line evidence — in the parity ledger ([`analysis/docs/PARITY.md`](analysis/docs/PARITY.md), "Divergences" section).
- Some original setting types (color pickers with presets, block/entity list editors) are simplified to the closest supported widget.
- The original's rendering shaders (chams effects, china hat) are approximated with vanilla-style overlays.
- The original's license/auth/telemetry machinery is intentionally absent — the rebuild is fully offline.
- The original's config format is a proprietary binary codec; this client uses plain JSON instead (not backwards compatible with original configs).

## Repository contents

This repository is **self-contained** — everything needed to understand and continue the work lives in the tree, not in git history (the repo is published as a single snapshot):

| Path | Contents |
|---|---|
| `src/` | The mod source (Fabric 1.21.11, Java 21) |
| `analysis/decompiled/` | Full decompilation of the original client (Vineflower/CFR, Yarn-mapped, case-safe) |
| `analysis/jars/` | Recovered jar material from every binary layer of the original |
| `analysis/ghidra/` | Native triage, decrypted payload dumps, decompiled native handlers, Ghidra continuations |
| `analysis/traces/` | Runtime trace artifacts (raw bulk logs excluded) |
| `analysis/specs/` | Behavior spec per module + framework contract |
| `analysis/docs/` | Parity ledger, work log, handoff/methodology notes |
| `analysis/gui-src/`, `analysis/artifacts/` | Original GUI reference decompile + reference screenshots |
| `analysis/tools/` | Analysis, decryption and dump tooling used during the project |

**External assets** (not in git — over the 100 MiB forge limit): the full research bundle `open-grim-publish.tar.zst` adds the three decrypted payload dumps (`jna-decrypted-v2.dll`, `jna-decrypted-sweep.dll`, `jna-decrypted-invoke.dll` — only their small `manifest.json` sidecars are tracked in `analysis/ghidra/dumps/`) and the original encrypted native payload (`binaries/native/jna1.21.11`, verify against `analysis/grim-hashes.txt`). Download: `https://archive.org/details/open-grim-publish`.

## Where to continue (pushing parity higher)

Aggregate parity is 78.1% ([`analysis/docs/PARITY.md`](analysis/docs/PARITY.md)). Static analysis is exhausted — everything below it lives behind the original's native/VM layer, so the remaining work is **dynamic**:

1. **Runtime dumps of the native layer** — the highest-value next step. The JVMTI harness and tracer in `analysis/tools/` (sandbox setup in [`analysis/docs/HANDOFF.md`](analysis/docs/HANDOFF.md)) can be attached to the original at runtime to dump native-handler arguments, returns and state. Reconciling those dumps against the handler maps in `analysis/ghidra/` recovers behavior static decompilation cannot reach — including the 14 natively-divergent modules itemized in PARITY.md's Divergences section.
2. **Per-module runtime traces** — extend `analysis/traces/` (the 2026-10-17 runs) with full per-module capture to recover constants and flows the static constant-pool break missed (23,147 literals were recovered statically).
3. **Finish the 89 partial modules** — per-module status, gap classification and evidence are in PARITY.md; the porting workflow is in [`.opencode/skills/port-module/SKILL.md`](.opencode/skills/port-module/SKILL.md).
4. **1:1 rendering effects** — chams/ChinaHat-style shaders are approximated; runtime capture of the original's shader parameters would enable exact ports.
5. **Re-run the parity audit** — methodology in [`analysis/docs/HANDOFF.md`](analysis/docs/HANDOFF.md); update the PARITY.md rows and the aggregate at the top of this README.
6. **Hygiene** — verify a clean `./gradlew build` on a fresh machine, add tests and CI (none yet), review licensing of the font atlases / icon glyphs recovered from the original.
