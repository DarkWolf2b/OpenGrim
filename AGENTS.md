# AGENTS.md — OpenGrim Agent Operational Directives & Source Hierarchy

> **Mission:** 1:1 byte-and-behavior reimplementation of the "Grim 4.4" Minecraft utility client for Fabric 1.21.11.
> Every agent working on this codebase must adhere strictly to the rules, resolution order, and divergence protocols set forth in this document.

---

## 1. Core Principles & "The Law"

1. **Maximize Parity, Zero Shortcuts:**
   - Translate the original's decompiled code **1:1**. Do not approximate, modernize, "clean up", refactor, or reimagine existing logic.
   - Maintain identical execution order: same checks, same branch ordering, same mathematical operations, same constants, and same event handlers.
   - **Quirks and oddities that look like bugs are original behavior.** Do not "fix" them. Replicate them faithfully unless they are impossible in the Fabric/Yarn 1.21.11 environment (see [Section 1.1](#11-understanding-quirks-vs-bugs) below).
   - Do not substitute complex custom behavior with generic vanilla implementations without exhaustive reverse-engineering verification first.

2. **Strict Provenance & Documentation:**
   - Every ported class, method, and helper must document its original provenance in Javadoc (original obfuscated class ID, original method name, and decompile line ranges).
   - Example:
     ```java
     /**
      * Port of original module {@code sixtwo.fr} (Reach).
      * Sources:
      * - Decompile: analysis/decompiled/payload-named-cfr/sixtwo/fr.java#L24-L78
      * - Spec: analysis/specs/handlers/fr.md
      * - Decrypted constants: analysis/decrypted/full-dump.jsonl
      * - Ghidra Native Handler: analysis/ghidra/handlers-stitched/fr.c
      */
     ```

3. **Subsystem Fidelity & Central Managers:**
   - Never bypass client subsystems. For example, rotation-modifying / silent-aim modules **must** submit angles through `dev.opengrim.rotation.RotationManager` (`qL` port), never calling `player.setYaw()` or `player.setPitch()` directly.
   - Settings must use real builder parameters (min, max, step, default, suffix) recovered from decrypted literal dumps rather than educated guesses.

4. **Privacy, Paths, and Identity Integrity (`privacy.md`):**
   - **Never use local absolute paths** (e.g., `<root-home>/...`, `<root-users>/...`, `C:\...`, machine-specific directories) in commits, documentation, or code. Always use repo-relative paths (`src/...`, `analysis/...`) or neutral placeholders (`<repo>`, `<workspace>`, `~`).
   - Never commit or expose personal usernames, hostnames, machine identifiers, VPN addresses, or private credentials.
   - All Git activity, author identities, and operational constraints must adhere strictly to `privacy.md`.

### 1.1 Understanding "Quirks vs. Bugs"
When reverse engineering obfuscated game clients, developers often encounter code constructs that appear unidiomatic or "broken":
- **Asymmetric bounds & tolerances:** e.g., `< 0.999f` instead of `<= 1.0f`, integer truncations before floating-point divisions, or asymmetrical raycasting angle steps.
- **Specific execution ordering:** checking raycast intersections *before* entity motion updates, or flushing a packet queue at the end of a render tick rather than during client tick.
- **Intentional edge cases & bypasses:** subtle timing offsets, delayed reset counters, or missing checks in condition branches are often deliberate bypass mechanics designed to fool server-side heuristics.
- **The Rule:** If you see something that looks like an oversight or a sloppy idiom, **preserve it exactly**. Changing it to "clean code" breaks behavioral parity and risks breaking the client's original feel and anti-cheat compatibility.

---

## 2. Divergence Protocol: Addressing Gaps Along the Way

A divergence is any deviation from the original client's behavior, structure, or constant pool.

### 2.1 What Justifies a Divergence?
A divergence is acceptable **only** when behavior lives in:
- Unrecoverable native VM/DLL code (`j2cc_natives.dll` / `jna1.21.11`) where Ghidra decompilation, REA inspection, and dynamic runtime traces cannot establish ground truth.
- Irrecoverable encrypted string/constant pools.
- Fundamental architectural differences between the original runtime injection and modern Fabric 1.21.11 Yarn environments (e.g., GUI widgets with no Fabric equivalent).

### 2.2 Protocol When Encountering Gaps or Divergences
1. **Exhaust All Analysis Layers First:**
   Follow the [Order of Resolution](#4-authoritative-order-of-resolution). Check decompile overrides, Ghidra stitched handlers, continuation dumps, REA binary analysis, and runtime traces.
2. **Select the Most Natural Reading:**
   If a native stub or constant remains genuinely unrecovered, adopt the most natural interpretation consistent with the observed bytecode, surrounding math, and recovered settings metadata.
3. **Record Immediately in the Master Parity Ledger:**
   - Log the divergence in `analysis/docs/PARITY.md` under the **Divergences** section.
   - Format: Module (obfuscated `sixtwo.*` ID and module name), what differs, why it differs, and citations to original file + line numbers.
   - Categorize confidence accurately (`ported` vs `partial`). Never mark a module with substantial native divergences as fully `ported`.
4. **Never Rewrite Historical Ledger Entries:**
   - Both `analysis/docs/PARITY.md` and `analysis/docs/PROGRESS.md` are append-only. Never reformat or delete historical audit entries. Append new findings or dated re-audits at the tail.

---

## 3. Critical Warning: Case Collisions on Case-Insensitive Systems

> ⚠️ **CRITICAL DANGER:** The original obfuscated payload heavily uses single- and double-letter identifiers that differ **only by letter case** (`dL`/`dl`, `eY`/`ey`, `fQ`/`fq`, `cA`/`ca`, etc.).

- On case-insensitive operating systems (Windows, macOS default APFS), checking out or writing these files will **silently overwrite or delete** colliding siblings.
- **Rules of Engagement:**
  1. **Never trust a decompile or spec file solely by its filename.** Always open the file and verify the declared class name (`public class <id>`) inside.
  2. If a file is missing, corrupt, or contains the wrong class, consult the case-safe ground truths:
     - Byte-exact unpacked classes: `analysis/decompiled/jar-casesafe/`
     - Case-safe decompiles: `analysis/decompiled/casesafe/`
     - Case-safe specs: `analysis/specs/casesafe/modules/` and `analysis/specs/casesafe/handlers/`
     - In case-safe trees, colliding uppercase characters are suffixed with an underscore `_` (e.g., `fQ` → `fQ_.java` or `fQ_.md`).
  3. Read `analysis/docs/CASE-COLLISION-WARNING.md` for full background and recovery manifests.

---

## 4. Authoritative Order of Resolution

When implementing, auditing, or fixing any module, framework component, or setting, follow this strict resolution sequence:

```
[1. Registry Lookup] ──> [2. Decrypted Java Decompile] ──> [3. Primary Named Decompile]
                                                                    │
[6. Ghidra & REA Native] <── [5. Decrypted Pool & Spec] <── [4. Helper & Base Classes]
         │
         ▼
[7. Runtime Traces & Dumps] ──> [8. Ledger & Divergence Accounting]
```

### Step 1: Identity & Module Registry
- **File:** `analysis/specs/registry.tsv` (and `analysis/jars/bootstrap-raw/offline/features/metadata.txt`).
- Map the module name to its obfuscated class ID (e.g., `ei` → `Scaffold`, `fr` → `Reach`, `fF` → `KillAura`).
- Check the module's category, default keybind, and internal registry key.

### Step 2: Decrypted Java Decompile (Overrides Step 3)
- **Path:** `analysis/decompiled/payload-decrypted/sixtwo/<id>.java`
- Contains 151 classes with runtime-decrypted string and numeric constant tables already folded in.
- If this file exists for the class, **it takes precedence** over standard decompiled sources for literals and constants.

### Step 3: Primary Readable Decompile
- **Path:** `analysis/decompiled/payload-named-cfr/sixtwo/<id>.java` (and fallback `analysis/decompiled/payload-named/sixtwo/<id>.java`).
- Primary source of truth for control flow, condition branching, loops, and event subscription methods.
- If inspecting GUI framework classes (`c`, `ap`, `bl`, `lf`, `rj`, etc.), use `analysis/gui-src/*.java` (+ `manifest.txt`).
- *Verification check:* Ensure the class name inside matches the file name. If collision occurred, pull from `analysis/decompiled/jar-casesafe/`.

### Step 4: Helper & Shared Classes
- Inspect referenced helper classes in the same package:
  - Settings wrappers: `sixtwo.cA` (numeric slider), `sixtwo.cJ` (boolean toggle), `sixtwo.cD` (mode selector), `sixtwo.ct`/`cu`/`cv`/`cw` (group trees), `sixtwo.cz` (action callback).
  - Utility/math classes: `sixtwo.oC`, `sixtwo.oA`, `sixtwo.mr` (string decryptor wrapper), `sixtwo.gb` (clinit key native).
  - Framework base classes: `sixtwo.gg` / `sixtwo.iS`.

### Step 5: Decrypted Constants & Spec Validation
- **Module Spec:** `analysis/specs/handlers/<id>.md` (and `analysis/specs/modules/<id>.md`).
  - Distinguish between `[recovered]` (authoritative from decrypted pool) and `[uncertain]` (inferred) tags.
- **Literal Dump:** `analysis/decrypted/full-dump.jsonl` (23,147 recovered constants).
- **GUI Dump:** `analysis/decrypted/gui-dump.jsonl` and `analysis/decrypted/gui-strings.jsonl` (766 runtime-captured GUI literal sites).

### Step 6: Native Layer, Ghidra & REA Analysis (For Native Stubs)
- When a method is declared `private native` or delegates to a JNI stub:
  1. Map the class and native method to its native symbol:
     - `analysis/ghidra/native-handlers-final.jsonl`
     - `analysis/ghidra/native-handlers-runtime-full.jsonl`
     - `analysis/ghidra/native-sigs.json`
  2. Inspect Ghidra stitched and annotated decompiled C routines:
     - `analysis/ghidra/handlers-stitched/<id>.c` (or `analysis/ghidra/casesafe/handlers-stitched/`)
     - `analysis/ghidra/handlers-full-annotated/`
  3. Inspect VM continuation routines:
     - `analysis/ghidra/continuations/all-continuations.c`
  4. Query the **REA (Reverse Engineering Assistant)** MCP tools or Ghidra headless scripts for deeper binary disassembly, cross-references (`xrefs`), and call graph resolution.
  5. Review native triage analysis:
     - `analysis/ghidra/triage.md`
     - `analysis/ghidra/deep-decomp.c`

### Step 7: Dynamic Runtime Traces & Environment Artifacts
- **Trace Logs:** `analysis/traces/2026-10-17/`
  - Per-class trace digests: `analysis/traces/2026-10-17/by-class-casesafe/`
  - Event dispatch maps: `analysis/traces/2026-10-17/classes-by-events.txt`
  - Module summaries and evidence: `analysis/traces/2026-10-17/module-summary.tsv`, `n-evidence.tsv`, `n-manifest.tsv`
  - Recovered runtime string captures: `analysis/traces/2026-10-17/strings-full.tsv`
- **Tracing Harness & Reproducibility:**
  - Setup instructions in `analysis/docs/RUNTIME-TRACE.md`.
  - JVMTI hook: `win/hook.c` / `win/hook.dll` (traces `MethodEntry` and `MethodExit` with primitive return values).
  - Launch chain and Wine 11 setup details.

### Step 8: Ledger Accounting & Verification
- Verify build cleanliness: `./gradlew compileJava -q --offline`
- Update `analysis/docs/PARITY.md`:
  - Update the module row (`ported` | `partial` | `stub` | `not-started`), confidence level, and implementation notes.
  - If any gaps or deviations exist, document them in the **Divergences** section with original file and line citations.
- Append session accomplishments to `analysis/docs/PROGRESS.md`.

---

## 5. Ghidra & REA Tooling Architecture

OpenGrim leverages Ghidra and REA (Reverse Engineering Assistant) to decompile, map, and trace the native J2CC layer (`j2cc_natives.dll` / `jna1.21.11`).

### 5.1 Ghidra Installation & Headless Pipeline
- **Installation Root:** `ghidra_12.1.4_PUBLIC_20260921/ghidra_12.1.4_PUBLIC/`
  - Run script: `./ghidraRun`
  - Headless analyzer: `support/analyzeHeadless`
- **Analysis Scripts (`analysis/tools/ghidra/`):**
  - `scan_handlers.py` — identifies JNI registration tables and native method bindings.
  - `decompile_handlers.py` / `decompile_funcs.py` — batch decompiles native handlers into C sources.
  - `stitch_class.py` — stitches individual disassembled blocks and continuations back into cohesive per-class C representations (`handlers-stitched/`).
  - `follow_continuations.py` — resolves obfuscated J2CC VM continuation blocks.
  - `annotate_jni.py` / `extract_native_sigs.py` — types JNIEnv calls and signatures.
  - `NativeTriage.java` & `NativeDeep.java` — static triage and call-depth probes.

### 5.2 REA (Reverse Engineering Assistant)
- **Integration:** REA connects as an MCP (Model Context Protocol) server via `npx -y rea-agents@latest mcp` (compatible with OpenCode, Claude Code, Cursor, and other agent harnesses via `npx rea-agents@latest setup`).
- **Diagnostics:** Verify REA status at any time using `npx rea-agents@latest mcp doctor`.
- **Core REA Capabilities for Agents:**
  - `inspect-with-objdump`: Inspect symbols, headers, and sections of binary artifacts.
  - `read-bytes` / `search-bytes`: Search and read byte sequences directly from binary memory dumps.
  - `xrefs`: Discover cross-references to functions, globals, and string literals.
  - `resolve-native-call-targets`: Statically resolve indirect call targets in native routines.
  - `trace-native-values`: Compute def-use chains and argument values for native routines.

---

## 6. Repository Layout Reference

```
OpenGrim/
├── AGENTS.md                                # This document (agent instructions & rules)
├── README.md                                # Project overview, build instructions & status
├── build.gradle / settings.gradle           # Fabric Loom build configuration (JDK 21, Fabric 1.21.11)
├── ghidra_12.1.4_PUBLIC_20260921/           # Full local Ghidra 12.1.4 installation
├── src/main/java/dev/opengrim/
│   ├── modules/                             # 162 reimplemented modules by category
│   │   ├── combat/
│   │   ├── movement/
│   │   ├── render/
│   │   ├── utility/
│   │   └── world/
│   ├── gui/                                 # ClickGUI, HUD, settings widgets, MSDF fonts
│   ├── rotation/                            # Central rotation manager (qL port)
│   ├── event/                               # Typed event bus & event definitions
│   └── mixin/                               # Fabric mixins into Minecraft client
├── analysis/
│   ├── decompiled/                          # Decompiled Java sources
│   │   ├── payload-named-cfr/sixtwo/        # Primary CFR decompile (Yarn-mapped)
│   │   ├── payload-decrypted/sixtwo/        # Runtime-decrypted decompile (pre-folded constants)
│   │   ├── payload-named/sixtwo/            # Vineflower decompile with CFR fallbacks
│   │   ├── jar-casesafe/                    # Unpacked raw class files (case-safe ground truth)
│   │   ├── casesafe/                        # Case-safe decompile copies for colliding IDs
│   │   └── bootstrap/, stage2/              # Outer launcher stages
│   ├── decrypted/                           # Decrypted literal tables
│   │   ├── full-dump.jsonl                  # 23,147 module literals (settings, defaults, bounds)
│   │   ├── gui-dump.jsonl                   # 766 GUI literal captures
│   │   └── gui-strings.jsonl                # GUI plaintext strings
│   ├── ghidra/                              # Native analysis & decompilation
│   │   ├── handlers-stitched/               # Decompiled native handlers per class
│   │   ├── handlers-full-annotated/         # Annotated native C handlers
│   │   ├── continuations/                   # J2CC native continuations
│   │   ├── native-handlers-final.jsonl      # 6,610 native method bindings
│   │   └── triage.md                        # Malware/security & native architecture triage
│   ├── traces/                              # Dynamic execution artifacts
│   │   └── 2026-10-17/                      # Traced method entries/exits, strings, events
│   ├── specs/                               # Behavior & structural specs
│   │   ├── registry.tsv                     # Authoritative 162-module mapping
│   │   ├── 00-framework.md                  # Event bus & lifecycle contract
│   │   ├── handlers/                        # Per-module behavior specs (recovered constants)
│   │   └── modules/                         # Per-module structural specs (builder chains)
│   ├── gui-src/                             # Runtime-decompiled GUI classes (c, ap, bl, lf, etc.)
│   ├── artifacts/                           # Shaders, UI screenshots, raster assets
│   ├── tools/
│   │   └── ghidra/                          # Headless Ghidra decompilation & analysis scripts
│   └── docs/                                # Ledgers & historical documentation
│       ├── PARITY.md                        # Master parity ledger & divergences log
│       ├── PROGRESS.md                      # Append-only chronological work log
│       ├── CASE-COLLISION-WARNING.md        # Case-collision documentation & remedies
│       └── RUNTIME-TRACE.md                 # JVMTI tracer & Wine runtime environment
└── .opencode/skills/                        # Project skills (port-module, spec-lookup, update-ledgers)
```

---

## 7. Implementation Checklist for Agents

Before completing any task or PR:
- [ ] Compiled successfully via `./gradlew compileJava -q --offline` without errors or warnings.
- [ ] Verified class identity against `analysis/specs/registry.tsv` and checked case-collision integrity.
- [ ] Preserved 1:1 parity with original bytecode logic, branching, and quirks.
- [ ] Applied recovered constants from `analysis/decrypted/full-dump.jsonl` (or `payload-decrypted/`).
- [ ] Documented all original class/method/line citations in class Javadoc.
- [ ] Routed silent aim / rotations through `dev.opengrim.rotation.RotationManager`.
- [ ] Cross-referenced native logic using Ghidra stitched handlers and REA tools where applicable.
- [ ] Logged any genuine native divergences in `analysis/docs/PARITY.md` ("Divergences" section).
- [ ] Appended task summary and parity updates to `analysis/docs/PROGRESS.md`.
