# Handoff — next session work order (cloud)

> ⚠️ **CASE-COLLISION WARNING:** reading `analysis/decompiled/**` or
> `analysis/specs/modules/**` by file name on Windows is unsafe — ~73 obfuscated
> ids differ only in case (`dL`/`dl`, `eY`/`ey`, `fQ`/`fq`, …) and Windows
> collapses them. Verify the class declared inside a file before trusting it,
> and see `analysis/docs/CASE-COLLISION-WARNING.md` (recovery status: complete;
> ground truth: `analysis/decompiled/jar-casesafe/`).

> **UPDATE 2026-10-13 (local Windows session) — read this first.** Everything
> below the snapshot line describes the 2026-10-10 state; it is now
> superseded. Current state (see `PROGRESS.md` tail for detail):
>
> - **Priority 1 (native constant-pool decryption) is DONE** — no Wine needed;
>   the payload runs natively on this Windows machine. `analysis/decrypted/
>   full-dump.jsonl` holds the decrypted module constants (settings
>   names/ranges folded into PARITY.md rows); `analysis/decrypted/gui-dump.jsonl`
>   holds 766 runtime-captured GUI literal sites across 35 classes; all 162
>   module specs were upgraded from decrypted data.
> - **All 162 modules ported** (162 full after the 2026-10-13 hook work —
>   Auto Clicker, Cape, Double Tap, Hand Chams, No Push, Reach gained their
>   engine hooks; divergences in `PARITY.md`/`PARITY-DIVERGENCES.md`).
> - **The GUI (av/bl/c) is ported** and build-green; the runtime-decompiled
>   GUI classes are preserved at `analysis/gui-src/` (86 files + manifest),
>   the literal captures at `analysis/decrypted/gui-dump.jsonl`, and the
>   glyph-recovery procedure at `analysis/tools/decryptor/GlyphDump.java`
>   (all formerly only under gitignored `win/`).
> - **Remaining work order:** (1) one hooked capture run with the ClickGUI
>   actually opened, to decode the ~135 encrypted literals in `c`/`ap`
>   (popup titles/subtitles, toggle labels, `c.n()` viewport) — reuse
>   `win/hook.dll` + the `gui-dump` procedure; (2) close the 6 partial-module
>   gaps (skin-provider, hand-render, block-push collision, GameRenderer
>   retarget hooks); (3) in-game smoke test; (4) push the branch.
>
> Note: `win/` is gitignored — anything in it that matters has been copied
> into `analysis/`; treat `win/` as scratch.

Prepared 2026-10-10 by the first cloud session. Read `PROGRESS.md` and
`HANDOFF.md` first; this file supersedes the "work order" section with current
state and exact next steps.

## State snapshot (all committed)

| Work item | State |
|---|---|
| Toolchain (JDK 21, Vineflower 1.11.1, CFR 0.152, tiny-remapper) | DONE — `tools/libs/` (gitignored, re-downloadable) |
| Ghidra 12.1.4 + REA 6.3.0 | DONE — `binaries/ghidra/ghidra_12.1.4_PUBLIC`, `rea mcp doctor` healthy (139/139) |
| Yarn remap (intermediary→named, yarn `1.21.11+build.6`) | DONE — `../../analysis/jars/payload-named.jar` |
| Re-decompile | DONE — `../../analysis/decompiled/payload-named/` 1111/1111 (369 CFR fallbacks merged; `payload-named-cfr/` kept) |
| 162-module behavior specs (structural tier) | DONE — `../../analysis/specs/00-framework.md`, `../../analysis/specs/modules/*.md` (generator: `../../analysis/specs/generate_specs.py`) |
| Fabric 1.21.11 rebuild scaffold (`rebuild/`, dev.opengrim, GPL-3.0) | DONE — framework + 3 example modules (Sprint, Trigger Bot, Kill Aura); first `gradlew build` possibly unfinished, see `rebuild/build.log` |
| PARITY.md | DONE — 162 rows, 3 ported, rest not-started |
| **Native constant-pool decryption** | IN PROGRESS — driver written, env assembled, Wine missing (see below) |

Key discoveries this session (do not re-derive):
- Registry has **162** entries, not 163.
- Every behavior body is `private native` (j2cc → DLL); strings encrypted via
  per-class invokedynamic bootstraps (`aTe/aTb`… = ints/strings) + a Java-side
  DES clinit pool whose key comes from native `gb.aYR(...)`.
- No Java-side module registry — registration/GUI/dispatch all native.
- Settings builders are plaintext: `cA` numeric `.UG(step).UE(min).UF(max)
  .UI(default,default).UH(suffix)`; `cJ` toggle `.WE(bool)`; `cD` mode `.VO()`;
  `ct/cu` and `cv/cw` group trees; `cz` action `.Vf(callback)`.
- Module classes each have ~500-600 invokedynamic sites (fF: 597).

## Priority 1 — finish the native constant-pool decryption

Sanctioned path (HANDOFF step 3): Wine + Windows JVM, network off, ONLY the
decryptor path. Everything is prepared:

- DLL: `binaries/native/jna1.21.11` (SHA-256 verified
  `9403e1fd…bb72b2d`, matches HANDOFF). PE, 292MB. NOT in git.
- Windows JDK: Temurin 21.0.12.1 unpacked at `/workspace/win/jdk-21.0.12.1+1/`.
- Driver: `tools/decryptor/PoolDump.java` (compiled classes in `/workspace/win/classes/`).
  It: (1) ASM-scans invokedynamic sites, (2) force-inits classes
  (`<clinit>` → `Loader.doInit` → native), (3) reflectively invokes each
  bootstrap and dumps decrypted constants as JSONL. Smoke-tested on Linux:
  scan works (597 sites in `sixtwo.fF`), init fails without DLL (expected).
- Blocker at session end: `apt-get install wine` fails — package not in the
  VM's sources. **Fix**: enable universe/multiverse or add WineHQ repo
  (`sudo dpkg --add-architecture i386; wget -O- https://dl.winehq.org/.../winehq.key | sudo apt-key add; ...`)
  or install wine via `bottles`/flatpak alternative. Any wine ≥ 9 works.
- Run procedure (when wine works):
  1. `cp /workspace/win/tmp/native/jna1.21.11` is already in place; also set
     `-Djava.io.tmpdir=Z:\workspace\win\tmp` so `native.Loader` finds the DLL
     at `Z:\workspace\win\tmp\native\jna1.21.11` (Loader appends `native/jna<mcver>`,
     mcver = 1.21.11).
  2. Because `native.Loader.<clinit>` calls a native stub BEFORE the DLL is
     normally loaded, the driver must: `System.load(dllPath)` → reflectively
     call `Loader.bootstrap(byte[48])` with the 48-byte key from jar resource
     `native/info` (skip UTF header + 2 longs) → reflectively set
     `Loader.loaded = true` so `init()` never re-loads.
     **Extend `PoolDump` to do this** (it currently relies on clinit; add a
     `--preload` phase before class init).
  3. Run under wine with network off:
     `bwrap --unshare-net --dev-bind / / wine jdk-21.0.12.1+1/bin/java.exe -cp 'Z:\workspace\win\classes;Z:\workspace\win\asm-9.9.1.jar;Z:\workspace\win\payload-named.jar' -Djava.io.tmpdir=Z:\workspace\win\tmp PoolDump 'Z:\workspace\win\payload-named.jar' 'Z:\workspace\win\out\<batch>.json' sixtwo.fF …`
     Batch classes (162 module classes + framework classes: gg, gf, gh, mw, iS,
     gc, rk, ri, rj, mr, gb, cA-cz wrappers).
  4. Fold decrypted strings/ints back into specs: setting names resolve via
     `mr.clS(int[])` — the int arrays in each module ctor are built from the
     same `aTe` indices; once decrypted, call `mr.clS` reflectively with the
     arrays to get display names. Update `../../analysis/specs/modules/*.md` and
     port fidelity.
  5. Keep malware stance: network off, touch only decryptor path, log anything
     network/persistence-shaped to PROGRESS.md.
- Fallback if Wine is unusable: Ghidra/REA emulation of the native bootstraps
  (`Loader.initClass` → per-class `_hash` stubs) — much slower, do per-class
  only where the JVM path fails.

## Priority 2 — upgrade specs with decrypted data, port more modules

- Re-run `../../analysis/specs/generate_specs.py` after adding decrypted-literal
  sections (extend the generator to inject `## Decrypted literals` per class).
- Port modules in batches by category (Combat first: fr, fF, fp, fq, …).
- Track in PARITY.md; keep statuses honest (`ported` vs `stub`).

## Priority 3 — finish `rebuild/` build  ✅ RESOLVED in this session

- `./gradlew build` → **BUILD SUCCESSFUL** (`../../build/libs/opengrim-0.1.0.jar`).
- Working combo: **loom 1.13.6 + Gradle 8.14 + JDK 21** (loom 1.11.x rejects fabric-api 0.139.4's
  javadoc packaging; loom 1.14+ requires a JVM newer than 21; loom 1.18.3 needs JVM 25).
- The three Yarn-1.21.11 API traps found: `KeyBinding` ctor takes a `KeyBinding.Category`
  enum (not String); hunger is `player.getHungerManager().getFoodLevel()`;
  `net.minecraft.entity.mob.Monster` is a marker interface, NOT an Entity subtype — filter
  hostile mobs with `getOtherEntities(..., e -> e instanceof Monster)`.

## Session-management notes

- Subagent (Task) dispatch is broken in old sessions but works in fresh
  sessions — use batched background workers for the 162-module porting
  (batches of ~18 like `../../analysis/specs/batch1..9.txt`).
- Do not commit: `tools/libs/` (jars), `binaries/**` (Ghidra, DLL), `/tmp` jars.
  `../../analysis/jars/payload-named.jar` and `yarn-1.21.11+build.6.tiny` ARE committed.
- Branch: work continues on the same feature branch; base is `main`.