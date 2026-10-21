# OpenGrim — Reverse Engineering Progress

Goal: 1:1 rebuild of Grim 4.4 (Fabric 1.21.11) with full module parity.
Method: static analysis only — nothing from the binary bundle is ever executed.

Last updated: 2026-10-18 (Windows: waves 2-3 full-module audit merged - batches 6-29 (112 modules) reports folded, 110 rows stamped now + ff/dq via batch 30; PARITY gained the waves 2-3 section + divergence wave 4; spec corrections folded (dz/dv/fS/de/dh/cZ/dQ_/fX/dn); live bugs fixed - left-click EventBridge inversion + ClickGUI off-screen centering; jar rebuilt + copied to Prism for testing)

## Environment
- [x] REA 6.3.0 installed, Cursor MCP registered (`~/.cursor/mcp.json`, pinned to local Node 26.8.1 at `~/.local/opt/node-v26.8.1-linux-x64`), verified healthy (139/139 tools)
- [x] Ghidra 12.1.4 extracted → `binaries/ghidra/ghidra_12.1.4_PUBLIC`
- [x] JDK 26 on PATH (system), Vineflower 1.11.1 at `~/.local/tools/vineflower-1.11.1.jar`
- [x] Isolation tools available if ever needed: bwrap, docker, systemd-nspawn
- [x] Archive password: `wonderland.ac` (note: not `wonderlandac`)

## Artifact map (binaries/grim/extracted/)
| File | Identity | Role |
|---|---|---|
| offline-client-bootstrap.jar | Fabric mod `offline_client_bootstrap` (MC 1.21.11, 51 mixins) | bootstrap + carries payload |
| → META-INF/jars/protected-payload.jar | plain JAR, **1111 obfuscated `sixtwo.*` classes** | **the actual client** |
| → offline/features/metadata.txt | 163 modules with descriptions + binds | **parity checklist** |
| stage2-runtime.jar | Fabric classes jar (MC 1.20.1 era) + jose4j + `natives/` | older gen: j2cc loader |
| runtime/native/jna1.21.11 | **PE DLL `j2cc_natives.dll`, 292MB** — Java compiled to native via j2cc; 230MB `llvmmsvc` code section | native-compiled client (older gen) |
| runtime/native/exit-hook.dll | 106KB PE DLL | exit/crash hook (no network imports) |
| launcher.exe | 12KB .NET assembly | launcher; runtime-args.template.json = captured JVM args |
| fabric-api-0.139.4+1.21.11.jar | standard Fabric API | reference only |

## Decompilation status
| Target | Status | Output |
|---|---|---|
| stage2-runtime.jar | DONE (Vineflower) | `../../analysis/decompiled/stage2/` |
| offline-client-bootstrap.jar | DONE (Vineflower) | `../../analysis/decompiled/bootstrap/` |
| protected-payload.jar (sixtwo.*) | **DONE — 100%** (1111/1111 classes): Vineflower 548 top-level clean, CFR 0.152 recovered the rest incl. entry classes (Init, R, c, e) | `../../analysis/decompiled/payload/` (+ `payload-cfr/` fallbacks) |
| j2cc_natives.dll (292MB) | **Decrypted via JVM decryptor path (session 2)** — 23147 constants recovered from 153 classes; see below. **Ghidra triage CLEAN (session 2)** — 6 exports; pattern scan all-zero (no URLs/process/network/persistence/injection); initClass decompiled = constant-mixing key schedule; fuckMyShitUp = 16B thunk. Full REA snapshot still running (deep tier: 43 native classes) | `../../analysis/ghidra/triage.md` || exit-hook.dll | **DONE (Ghidra triage)** — 465 procs / 79 imports; no network, no persistence, no suspicious strings; exports `Java_offline_bootstrap_NativeOverrides_overrideAccountChecks` = JNI RegisterNatives hook replacing `sixtwo.ry.dkG` with offline profile check (crack behavior, not malware) | — |
| protected-payload.jar → Yarn remap | **DONE — 2026-10-10 (cloud VM)** | `../../analysis/jars/payload-named.jar` (intermediary→Yarn `1.21.11+build.6`) + `../../analysis/decompiled/payload-named/` (Vineflower) + `payload-named-cfr/` (CFR fallback) |
| launcher.exe (.NET) | pending | — |

Decompile policy (to avoid the 4.0 "stale at 60%" failure):
- Skip third-party libs (jose4j etc.) — known open source, not part of parity
- Per-class/batch runs with timeout; CFR fallback for pathological classes
- Native DLL handled by REA (Ghidra) analysis, never by a Java decompiler

## Malware triage (so far: no red flags)
- `jna1.21.11`: exports `Java_native_Loader_bootstrap`, `Java_native_Loader_initClass`, `chacha_block`, `chacha_block_8`, `fuckMyShitUp` (crude name; behavior TBD in Ghidra pass)
- `stage2 natives/data`: embedded 32MB x64 DLL; `natives/Loader.java` extracts → `System.load` → `bootstrap(byte[48])` (likely ChaCha key)
- `exit-hook.dll`: imports only KERNEL32/USER32 (GetTempPathA/CreateFileA/WriteFile/RtlCaptureStackBackTrace/VirtualProtect/FlushInstructionCache) — looks like crash diagnostics; no URLs, no persistence strings
- Full hash list: `analysis/grim-hashes.txt`

## Open-source rebuild
- [x] License: All Rights Reserved (GPL `LICENSE` removed 2026-10-21 at the owner's direction)
- [x] Git repo initialized; public remote `https://github.com/sequence3260/OpenGrim.git` (snapshot; old remote name removed)
    - Excluded from repo (>100MB GitHub blob limit): `binaries/ghidra/` install, both `.zip` archives, `jna1.21.11` 292MB DLL — these stay local-only
- [ ] Scaffold Fabric 1.21.11 Gradle project (Yarn mappings)
- [ ] Port modules vs 163-item checklist in `../../analysis/jars/bootstrap-raw/offline/features/metadata.txt`
    - Module ids in metadata.txt map 1:1 to payload classes (`sixtwo.fF|Trigger Bot` → `sixtwo/fF`)
- Rule: 1:1 translation from the decompile; original code/assets may be reused at the owner's direction

## Session log highlights
- 2026-10-10: REA installed+verified; Ghidra extracted; Grim archive decrypted+hashed; jars decompiled (stage2/bootstrap done, payload running); payload architecture identified (sixtwo.* = client, metadata.txt = 163 modules)- 2026-10-10: payload decompile completed (Vineflower ~62s after restart killed earlier bg task; 1104 classes, 0 empty); CFR 0.152 downloaded for the 281 partial classes; exit-hook.dll cleared by Ghidra triage (offline-check crack hook only)
- 2026-10-10: **JAVA DECOMPILATION 100% COMPLETE** — audited all 890 top-level sixtwo + 7 root classes (incl. payload entry `Init`); every class has clean output (Vineflower or CFR). Git repo pushed to github.com/sequence3260/OpenGrim (excludes >100MB: Ghidra install, zips, 292MB jna1.21.11 DLL — local-only). Module ids map 1:1: `sixtwo.fF` → `sixtwo/fF.java`
- Remaining non-decompile work: REA/Ghidra triage of 292MB `j2cc_natives.dll` (exports incl. `fuckMyShitUp`); then rebuild scaffolding + module porting
- 2026-10-10: **Protection analysis** — payload uses 3 layers:
    1. Name obfuscation (fI, aUM…) + MC intermediary names (class_310 etc.) → fixable by remapping with Yarn `1.21.11+build.6` (intermediary→named) via Fabric tiny-remapper, then re-decompiling
    2. **Encrypted constant pool, NATIVE-implemented**: every literal is an invokedynamic to per-class native bootstraps `aUM/aUJ/aUI/aUL(Lookup,String,MethodType)`; `<clinit>` only calls `native/Loader.doInit(Class)` + native stub `_f77c9f...()` — pools/keys populated by the 292MB DLL. Static Java-only decryption is impossible; requires Wine-sandboxed decryptor run OR Ghidra emulation of the native bootstraps
    3. j2cc native method bodies (`private static native void _<hash>()`) — logic in DLL, needs REA/Ghidra
    4. Handoff: deobfuscation pipeline is deferred to the cloud agent (see `HANDOFF.md`)
- 2026-10-10 (session 2, cloud): **NATIVE CONSTANT-POOL DECRYPTION COMPLETE (Priority 1)**.
  Wine 9.0 installed on the cloud VM (previous blocker gone — universe repo enabled).
  Assembled per HANDOFF-NEXT: DLL from `native-bins` release (SHA-256 verified), Temurin
  21.0.12.1 Windows JDK under Wine, ASM 9.9.1, bubblewrap network isolation. Extended
  `tools/decryptor/PoolDump.java`: `--preload` phase (System.load DLL before any class
  init → Loader clinit native stub runs → bootstrap(48-byte key from `native/info`) →
  set `loaded=true`), constant-stack simulation to recover each indy site's dynamic args
  (the obfuscator pushes `(int A, long B ^ methodKey)` and decrypts via native bootstrap),
  symbolic arg resolution (method key = native-populated static long field XOR per-method
  seed; resolved reflectively at runtime). Also Ghidra 12.1.4 + REA 6.3.0 installed on
  cloud VM (rea mcp doctor: 139/139 healthy).
  - Key gotchas solved: DLL hardcodes INTERMEDIARY descriptors (class_1676) — run the
    decryptor against the ORIGINAL payload jar, not the Yarn-remapped one (RegisterNatives
    fails on remapped classes); MC intermediary classes needed on classpath — downloaded
    Mojang client 1.21.11.jar and remapped official→intermediary with Fabric
    `intermediary-1.21.11-v2` + tiny-remapper (plus Mojang library jars: joml, icu4j,
    gson, brigadier…).
  - Result: 23147 literals decrypted (22991 ints, 156 strings), 0 real failures across
    153/162 module classes + framework (remaining sites are lambda metafactories/mixins,
    not literals; ~43 classes fully native → no Java constants; Ghidra tier still pending).
  - Folded literals back into decompiled sources: `analysis/fold_literals.py` →
    `../../analysis/decompiled/payload-decrypted/sixtwo/` (23024 call sites replaced with
    literal values, 0 key collisions). Regenerated all 162 specs with real setting
    names/ranges/suffixes (e.g. Auto Logout: Distance 1.0–100.0 def 16.0 " blocks",
    Logout Key, Ignore Friends, …; Kill Aura: Attack Distance, Break Shield, Ignore
    Walls, …). Dump: `../../analysis/decrypted/full-dump.jsonl` (raw (A,B) keys per site).
  - Decryptor run was sandboxed: bwrap --unshare-net, decryptor path only, no game code.
- 2026-10-10 (session 2, cloud): **REBUILD COMPLETE (Priority 2)** — all 162 registry
  modules ported 1:1 and registered (`rebuild/.../modules/Modules.java`),
  `./gradlew build` → BUILD SUCCESSFUL (`../../build/libs/opengrim-0.1.0.jar`,
  loom 1.13.6 / Gradle 8.14 / JDK 21). Ported in 9 parallel batch workers
  (`../../analysis/specs/batch1..9.txt` → `../../analysis/port/reports/batch*.md`), then two
  compile-fix waves. Every decrypted setting name/range/suffix was carried into the
  ports; Yarn 1.21.11 API traps found during porting (getEntityPos(), isGliding(),
  authlib 7 record GameProfile, PlayerInventory private main/equipment/selectedSlot,
  KeyBinding.Category enum, InputUtil Window args, DataComponentTypes.CHARGED removal)
  are collected in the batch reports. Honest status in PARITY.md: 106 ported (high/
  medium parity), 56 partial (tick-level approximations where the original used
  native render/packet hooks the rebuild's tick-only framework cannot reach — each
  flagged `parity: native-blocked, approximation` in its javadoc; a render-event +
  packet-mixin layer is the known future work for full fidelity). Remaining known
  gaps: 43 fully-native classes (Ghidra tier pending), string/color/list settings
  types not yet in the settings API, GUI (GUI modules render-inert until the render
  hook lands).
- 2026-10-11: **DEEP TIER UNLOCKED (dynamic)** — JVMTI NativeMethodBind agent
  (`tools/decryptor/hook.c`, mingw-w64): the driver JVM logs every native
  binding (class, method, sig, runtime address) as the DLL registers it.
  643/643 sixtwo bindings captured across 13 classes (fr 89, ad 75, by 75,
  eL 69, br 61, fH 59, aZ 58, eJ 58, aj 43, gb 21, fZ 15, fF 13, iS 7);
  all 643 handlers decompiled via pyghidra → `../../analysis/ghidra/handlers/`
  (~4MB C, ~98%). Full auto-analysis abandoned (6h+12h both non-converging —
  protection-amplified analyzer loops); the runtime mapping replaces it.
  Hook details: RegisterNatives index is 215 in this JDK's table (not the
  classic 212 — a wrong index crashed VM init); hook via VMInit event, not
  Agent_OnLoad (the OnLoad thread is detached: GetEnv = JNI_EDETACHED).
- 2026-10-10 (session 2, cloud): **INTEGRATION LAYER + PARTIAL UPGRADES** — added the
  event system the ports were missing: `EventBus` + `@Subscribe` (priority semantics
  mirroring the original @hG/mw contract), cancellable `PacketSendEvent`/
  `PacketReceiveEvent` (new mixins on `ClientConnection.send`/`channelRead0`),
  `MouseScrollEvent` (Mouse mixin), `CameraUpdateEvent` (Camera.update mixin),
  `AttackEntityEvent`/`AttackPressEvent` (fabric-events-interaction), and
  `WorldRenderEvent` (AFTER_ENTITIES/BEFORE_TRANSLUCENT/END_MAIN via
  fabric-rendering-v1). Modules auto-subscribe on enable. Settings API extended with
  `StringSetting` (cy) and `ColorSetting` (cG ARGB); shared `FriendsManager` added.
  Upgraded the partial modules in 4 parallel workers: real packet mechanics
  (Backtrack replay, Blink queue, FakeLag buffering, KnockbackDisplacement velocity
  rewrite, ItemFrameBlocker cancellation), real world-space rendering (ESP family,
  tracers, trails, trajectories, skeleton, chams color trees, storage/logout/firework/
  sound spots, pearl prediction with see-through labels), working Freecam and Custom
  Camera Distance (CameraUpdateEvent + reflected Camera.setPos). PARITY re-graded:
  148 ported / 14 partial (remaining gaps need framework work that has no vanilla
  hook: hand-render, skin-provider, RPC, crosshair override, block-collision, item/
  block list editors — each documented in its row).

- 2026-10-10 (cloud VM): **Cloud toolchain installed** — JDK 21 present; Ghidra 12.1.4 downloaded+extracted to `binaries/ghidra/ghidra_12.1.4_PUBLIC` (gitignored); REA 6.3.0 registered in `~/.cursor/mcp.json` (pinned, JAVA_HOME=jdk21, GHIDRA_INSTALL_DIR exported), `rea mcp doctor` → `healthy: true`, 139/139 tools
- 2026-10-10 (cloud VM): **Yarn remap pipeline built** — Vineflower 1.11.1 + CFR 0.152 + tiny-remapper (0.8.1; 0.14.1's mapping-io can't read tiny-v1) + ASM/mapping-io jars in `tools/libs/` (gitignored). Vanilla client 1.21.11 pulled from piston-meta, remapped official→intermediary (converted intermediary tiny-v1→v2, class col dropped on member lines), then intermediary→named with Yarn `1.21.11+build.6`; named MC jar kept at /tmp as decompiler library only (Mojang-copyrighted, never committed)
- 2026-10-10 (cloud VM): **payload remap DONE** — `payload-named.jar` in `../../analysis/jars/`; all `net.minecraft.class_*` refs now Yarn names (`MinecraftClient`, `ClientPlayerEntity`, …). Vineflower (with named MC jar as `-e` library): 742/1111 clean; CFR 0.152 fallback for the 369 NestedClassProcessor-lambda failures → `../../analysis/decompiled/payload-named/` + `payload-named-cfr/`. Copy `yarn-1.21.11+build.6.tiny` saved in `../../analysis/jars/`
- 2026-10-10 (cloud VM): **162-module structural specs DONE** — `../../analysis/specs/00-framework.md` (module base `gg`/`gf`/`gh`(5 categories)/`mw` priority, settings wrappers cA(UG=step,UE=min,UF=max,UI=default,UH=suffix)/cD/cJ/ct/cu/cv/cw/cz, event `@hG`, no Java-side module registry) + `../../analysis/specs/modules/*.md` (162 files, generator `generate_specs.py`; registry really has 162 entries, HANDOFF's 163 is off by one)
- 2026-10-10 (cloud VM): **rebuild scaffold DONE** — `rebuild/` Gradle+loom 1.18.3 project (yarn 1.21.11+build.6, loader 0.17.3, fabric-api 0.139.4): `dev.opengrim` framework (Module/ModuleManager/ModuleCategory, settings incl. DoubleSetting mirroring builder-chain constraints, KeybindManager, Gson ConfigManager) + 3 reference ports (Sprint eC, Trigger Bot fF, Kill Aura fr); `PARITY.md` 162-row tracker; `LICENSE` (GPL at the time; removed 2026-10-21); first `./gradlew build` launched late in session (check `rebuild/build.log`)
- 2026-10-10 (cloud VM): **native decryption started** — jna1.21.11 DLL downloaded from `native-bins` release, SHA-256 verified `9403e1fd…bb72b2d`; `native/Loader` mechanics mapped (48-byte key in jar resource `native/info`, DLL path `%TEMP%/native/jna1.21.11`, preload+`loaded=true` bypass designed); ASM driver `tools/decryptor/PoolDump.java` compiles and scans fF = 597 indy sites; Wine not installable from default apt sources (blocker; fixes + exact run procedure in `HANDOFF-NEXT.md`); Windows JDK 21 unpacked at `<workspace>/win/jdk-21.0.12.1+1`
- **Next session work order: `HANDOFF-NEXT.md`** (decryption run, spec upgrade, batched porting; subagent dispatch works in fresh sessions — batch like `../../analysis/specs/batch1..9.txt`)
- 2026-10-12: **GUI port DONE (av/bl/c)** - old category-panel `gui/ClickGuiScreen`
  replaced with a 1:1 framework port in `gui/ui`, `gui/anim`, `gui/screen`:
  AnimatedScreen (av: design-viewport scale clamp 0.5-2.0, open/close tweens,
  scaled input rerouting, no-pause), SettingsWindow (bl: 465x305.5 draggable,
  radius 5, header 28, search at +100/+7, tabs 80x18 step 23 with the 15.0f gap
  after the 5th, themed bg mix bjd*(1-t)+bje*0.3), ClickGuiScreen (c) with 5
  category popups (z 0-4), toggle/slider/mode/textfield widgets, search filter,
  Manager z-order dispatch, config save on close. ModuleWidgetFactory binds
  Setting->widget (Bool/Double/Int/Mode/String/Color/Group). Theme port (ig/id/ie/
  ii/fX: Liquid Glass/Blur/Solid opacities 0.2/0.75/0.85, default PtFoz
  (12,12,12)/(24,24,27)/VIOLET accent). Tween (rk) + approximated easings (rj).
  Native-blocked `c`/`ap` bodies approximated and documented in
  PARITY-DIVERGENCES.md ("GUI port" section). `./gradlew build` green
  (opengrim-0.1.0.jar). GuiTheme retained for EmoteWheelScreen/HudOverlay.

- 2026-10-13: **GUI recovery status corrected + glyph/easing recovery** - the
  "unrecoverable" classification from 2026-10-12 was overstated: win/gui-src/
  holds 86 runtime-decompiled GUI classes incl. real `c` constructor and `ap`
  field/constructor/builder surface. Reran the native decryptor locally
  (binaries/native/jna1.21.11 + PoolDump preload recipe) in a scratch JVM:
  sixtwo.lf glyphs fully recovered (67 constants, names AIRPLANE..TRASH,
  codepoints 59905-59971) -> new gui/ui/IconGlyph.java 1:1 enum; rj easings
  recovered exactly from win/gui-src/sixtwo_24.java (AYqck ease-in-back
  1.70158, XzDkv ease-out-back, MBpuQ ease-out-cubic) -> Easing.java now exact.
  c constructor inventory documented in ClickGuiScreen javadoc (5 popups with
  WpzHJ/iKApR styles, panel->popup bindings, 4 cJ toggles, cC slider 1-10 dec 2,
  cL .Xk/.Xl, search Q props); TextFieldWidget placeholder alpha -> 0.3 exact
  (mG3 = biq().cob(0.3f)). Still native-blocked: c/ap behavior bodies (JNI),
  encrypted literals for c (~135 sites, 0 captured), icon font asset (in DLL).
  PARITY-DIVERGENCES "GUI port" section rewritten. Build green.

## 2026-10-13 (Windows): case-collision recovery + prevention

Found during a random 5-module parity audit: ~73 obfuscated ids collide
case-insensitively on Windows (dL/dl, eY/ey, fQ/fq, ...) and both the working
trees and commit b80450c had silently lost one file per colliding pair. Full
story + rules: analysis/docs/CASE-COLLISION-WARNING.md. Recovery (complete):
- analysis/decompiled/casesafe/ + analysis/specs/casesafe/modules/:
  1407 files recovered from b80450c~1 via Restore-Collisions.ps1 (manifest
  verifies every recovered .java declares the class its git path names).
- analysis/decompiled/jar-casesafe/: all 1113 classes of win/payload-named.jar
  extracted case-safely (Extract-AllCaseSafe.ps1) = permanent ground truth.
- Audit vs jar: payload/ and payload-named/ complete; payload-named-cfr/
  holds all 890 top-level classes (23 "missing" inner classes are inlined in
  their outers, e.g. gL\ inside gL.java); payload-cfr/ (348) and
  payload-decrypted/ (185) cover their intended scopes; declared-class
  verification of every tracked blob at b80450c~1 and HEAD: 0 mismatches.
- Prevention: Verify-GitTreeClasses.ps1 + Audit-TreeGaps.ps1 tools; warning
  banners added to HANDOFF-NEXT.md, REIMPL-GUIDE.md, PARITY.md.
Module fixes from the same audit (commit cc8efac): Outlines uncapped scan,
HealthIndicators outline-batch guard, ChinaHat theme-accent color, and
Outlines visibility callbacks matched to dl.java:185-230 (fc07719).

- 2026-10-15 (Windows): **round-2 case-collision recovery** - a whole-repo audit
  (ordinal path compare of `b80450c~1` vs HEAD) found three analysis families
  still missing after the 2026-10-13 round-1 recovery; all restored byte-exact
  (every file verified with `git hash-object --no-filters`) into case-safe trees
  via the new tool `analysis/tools/casesafe/Restore-Collisions-Corpus.ps1`
  (same encoding + manifest convention as round 1):
  - `analysis/ghidra/casesafe/handlers-stitched/` (86 files) and
    `analysis/ghidra/casesafe/handlers-full-annotated/` (86 files) + manifest
    `analysis/ghidra/casesafe/manifest.tsv` - full per-class C corpora for the
    module classes lost at b80450c (Sprint, Blink, AutoTrap, Kill Aura, Air
    Anchor, ...) plus the framework classes.
  - `analysis/specs/casesafe/handlers/` (73 handler specs, manifest in dir).
  - `analysis/jars/casesafe/payload-raw/` + `stage2-raw/` (403 + 4 raw `.class`
    files + manifest `analysis/jars/casesafe/manifest.tsv`); the 403 join the
    710 HEAD survivors to reconstitute all 1,113 raw classes.
  - Coverage audit: all 2,059 collision-lost paths since `b80450c~1` (1,334
    decompiled + 73 module specs in round 1; 172 ghidra + 73 handler specs + 407
    raw classes here) now have case-safe copies; 0 uncovered.
    Verify-GitTreeClasses.ps1 at HEAD: 2,581 .java blobs, 0 mismatches;
    declared-class checks on the 172 restored C corpora: 0 mismatches.
  - Caveats: the raw (un-annotated) `handlers-full/` twins for those 86
    classes were never committed (the directory was born already-collapsed at
    b80450c) - the annotated + stitched corpora supersede them (regenerable via
    `analysis/tools/ghidra/`). Per-class `_cont.c` extracts are a partial
    subset of the continuation data; the blocks themselves are intact inside
    every stitched corpus and in
    `analysis/ghidra/continuations/all-continuations.c`.
  - Docs corrected from the 2026-10-11 first-pass "643" figure to the full
    corpus (6,610/6,615 natives bound across 446/449 classes; 6,603 handlers
    decompiled, 0 failed - commit 5e94de0): README.md / README.pl.md /
    README.zh-CN.md, CASE-COLLISION-WARNING.md, analysis/ghidra/triage.md.

## 2026-10-16 (Windows): parity burn-down — module re-audit + first fix batch

- Re-audited all 42 "low parity" modules (PARITY.md) against the CURRENT code
  (two independent read passes). The notes are stale or partially stale for
  32/42: the framework gained the event bus, mixins, FriendsManager and
  Color/String settings after the notes were written; no module still carries
  the old `parity: native-blocked, approximation` self-label. Status matrix:
  `analysis/docs/PARITY-BURNDOWN.md` (buckets: 22 wiring / 14 native /
  2 value / 4 renderer).
- First fix batch (working tree, uncommitted; compileJava green):
  `modules/utility/SkinProtect.java` subscribes SkinTexturesResolveEvent
  (own/other gate, defaults->Steve, composes with Cape replacement);
  `modules/combat/HandNoClip.java` Blocks group populated with the decrypted
  defaults (Items.COBWEB/Items.PAINTING per casesafe dS_) + membership gate;
  `modules/combat/AutoShieldBreak.java` manual attack_mode wired to
  AttackEntityEvent and Disable Mode `single` self-disables.
- Collision trap hit live during the audit: `payload-named-cfr/sixtwo/dS.java`
  on Windows is class `ds`; read `casesafe/.../dS_.java` for Hand No Clip.
- PARITY.md note sync deferred until the wiring batches land (its 42 notes
  still describe pre-hook limitations; the matrix is the live status).
- Multi-agent verification pass over the 39 remaining burn-down rows
  (2026-10-16, four read-only passes): 18 confirmed / 21 corrected;
  corrections appended to `analysis/docs/PARITY-BURNDOWN.md` (notable: dX
  reflection is broken against 1.21.11 yarn; cS setting names are still DES
  ciphertext; fm aKE already implemented).

## 2026-10-17 (Windows): parity ledgers consolidated into PARITY.md

- PARITY.md is now the single parity ledger: the per-module table is followed
  by two dated sections — "Re-audit 2026-10-16" (the 42 low-parity module
  re-audit, moved verbatim from `analysis/docs/PARITY-BURNDOWN.md`) and
  "Divergences from the original" (the append-only divergence log, moved
  verbatim from `analysis/PARITY-DIVERGENCES.md`). Both originals now live in
  `analysis/docs/archive/`; an Update history block at the top of PARITY.md
  dates each section. Future re-audits and divergence waves append to those
  sections — no new status docs.
- References updated: REIMPL-GUIDE.md and the PARITY.md row Notes now point at
  the in-file Divergences section; the OpenCode setup (`opencode.json`,
  `.opencode/ground-rules.md`, skills `port-module` / `spec-lookup` /
  `update-ledgers`) was updated to match and now records work in exactly two
  ledgers.
- Misinformation fixes: README.md/README.pl.md/README.zh-CN.md no longer claim
  modules carry the `parity: native-blocked, approximation` self-label in
  source (the 2026-10-16 audit found none remain) and now point at the
  ledger's Divergences section; the README doc-table row for HANDOFF.md is
  marked historical.

## 2026-10-17 (Windows): ClickGUI parity audit + fix (gui/**)

Full audit of `src/main/java/dev/opengrim/gui/**` against the recovered original
material (bl.Ep render body, the six `analysis/artifacts/gui-reference/page-*.png`
reference frames measured at 1.5 image px per design unit, the decrypted GUI
constants dump, and the bootstrap font sheets). Report:
`analysis/port/reports/audit-2026-10-17/clickgui.md`.

Key results:
- The port's whole window model was wrong: `sixtwo.bl` is the Click GUI window
  itself (465x305.5, sidebar 100, header 7/28, content at +42), not a module
  settings dialog. `ClickGuiScreen` is now that window (sidebar with logo /
  "Grim Client" / "Version: 4.4" / FEATURES+OTHER labels / 80x18 tabs at 7.5,
  step 23, +15 section gap / user block, header bar with icon + title + "·" +
  description + bare search, and a 175x28 two-column module-card grid with 5.0
  gaps). Settings moved into an `ap`-style popup (`SettingsWindow`).
- NEW `gui/ui/MsdfFont.java`: the original MSDF font stack is recoverable
  (`analysis/decompiled/bootstrap/offline/fonts/`, atlas JSON + sheet PNG) and
  is now rendered 1:1 (regular/medium/semibold text + the icons-4.4 glyph font,
  codepoints 59905-59971 = the lf enum). Baked alpha sheets ship in
  `src/main/resources/assets/opengrim/fonts/`.
- `Easing.OPEN`/`CLOSE` were inverted vs `bl.m` (opening = XzDkv ease-out-back,
  closing = AYqck ease-in-back) - fixed.
- `GuiTheme` still carried an invented palette (per-category accents, 124px
  panels); replaced with the recovered theme (bg 12,12,12 / panel 24,24,27 /
  single accent 151,71,255) - HUD + wheel consumers inherit it.
- Settings widget rows restyled to the recovered card surface; container rows
  keep natural heights and the scrolled hit-test bug is fixed.
- `.\gradlew.bat compileJava -q --offline` PASS.

## 2026-10-17 (Windows): full-module parity verification wave 1 (50/162)

- 5 auditor+fixer subagent passes (10 modules each; batches 1-5 of
  `analysis/specs/audit20261017/`) re-verified 50 modules against the case-safe
  decompiles + recovered pools. Every audited row in PARITY.md now carries
  `verified 2026-10-17, parity NN%`; the new "Re-audit 2026-10-17" section holds
  the scale-classified residual gaps ([S]/[G]/[U]/[V]/[N]). Reports:
  `analysis/port/reports/audit-2026-10-17/batch-01..05.md`.
- Verdict shape: all 50 settings trees verified 1:1; 39 modules downgraded
  ported→partial (stand-ins remain where behavior is VM-resident); 11 stay
  ported (70-95%). Residuals are dominated by [N] VM-virtualized bodies
  (excluded from %, itemized with native method names = the runtime-dump capture
  manifest), plus [S] framework additions (screen/mouse/key/chat events,
  entity/item-set settings, `cz` action primitive) and [U] uncertain readings
  left unimplemented; implemented [G] guesses are labeled in impl javadocs.
- Real bugs fixed in wave 1: NoJumpDelay reflection `field_6243`→`field_6228`
  (float field + `setInt` would throw at runtime); CrystalOptimizer `field_12870`
  and CustomCameraDistance `field_18712` intermediary fallbacks (production
  no-ops); ItemFrameBlocker no longer cancels attack packets; MiddleClickFriend
  writes the shared FriendsManager; AutoExp bind=74; AirStuck bind=86;
  bootEnabled for fQ/fO/fR; AirAnchor chance roll; AutoDripstone trapdoor token;
  BlockPiercer MISS sentinel; HighJump Grim Shulker chunk scan; AutoJumpReset
  getLastAttacker; dD dispatch via packet `handle(Handler)`.
- Tooling: `analysis/tools/audit/Build-AuditSourceMap.ps1` (case-safe per-module
  source/spec/impl map + 29 balanced batches) + `Apply-AuditRows.ps1` (row
  stamps). handlerSpec resolution fixed to header-verify with casesafe fallback —
  the wave-1 reports caught ~25/50 wrong-twin rows and Ghidra corpus twins
  (eU/fP/eR/fz/em): always check the `Lsixtwo/<id>;` marker first.
- Native-evidence rule recorded in the re-audit section: the Ghidra corpora are
  inventory-grade only (436/446 files are `BLOB_DECRYPTOR` dispatch wrappers,
  0 logic-grade C) — [N] items name their native methods and need the
  instrumented runtime session; "native-blocked" is no longer a stop reason.
- ClickGUI (same wave, separate pass): window model corrected to the recovered
  `bl` (465x305.5, sidebar/header/card grid), MSDF font stack recovered from
  the bootstrap fonts, easings un-inverted, palette recovered; visual parity
  ≈18% → ≈81% (`analysis/port/reports/audit-2026-10-17/clickgui.md`).
- Build: `.\gradlew.bat build --offline` green — `build/libs/opengrim-0.1.0.jar`
  rebuilt with all wave-1 fixes (in-game smoke test now possible).
- Next: waves 2+ (batches 6-29), then the runtime-dump session driven by the
  accumulated [N] manifest.

## 2026-10-17 (Windows): first in-game launch — mixin crash fixes

- First PrismLauncher run (Fabric Loader 0.18.2, MC 1.21.11) crashed at
  bootstrap in `ItemRendererMixin` (Hand Chams): the `@Inject` handler declared
  only `(ItemDisplayContext, CallbackInfo)` while mixin 0.8 requires the
  target's full parameter list — 1.21.11 `ItemRenderer.renderItem` draws one
  collected `ItemRenderState` layer with 9 params
  (`(ItemDisplayContext, MatrixStack, VertexConsumerProvider, int, int, int[],
  List<BakedQuad>, RenderLayer, ItemRenderState$Glint)`).
- Fixed: full-parameter handler; the SPECIAL-glint path is now tinted too (the
  private `getSpecialItemGlintConsumer` helper's `VertexConsumers.union` call
  is redirected; the helper is only called from `renderItem`); tint wrap
  refactored into `opengrim$wrapHandConsumer`.
- Second latent bug found in the same sweep: `InteractionRangeMixin` read
  `cir.getReturnValueD()` at `HEAD` (always 0.0) and wrote it back
  unconditionally — the player's block/entity interaction range would have been
  zeroed even with Reach disabled (no mining/placing). Both injections moved to
  `@At("RETURN")`; `InteractionRangeEvent` javadoc updated.
- Static validation of every remaining mixin target against
  yarn-1.21.11+build.6 + the named client jar (`javap`): `ClientConnection.send`/
  `channelRead0`, `Mouse.onMouseScroll`, `Camera.update`,
  `PlayerListEntry.getSkinTextures`, `PlayerEntity.getBlock/EntityInteractionRange`,
  `AbstractBlockState.getCollisionShape`, `Entity.pushAwayFrom`/`pushOutOfBlocks`
  — all exist with matching signatures; no other handler mismatches.
- `compileJava` + `build` green; `build/libs/opengrim-0.1.0.jar` refreshed and
  copied into the Prism instance mods folder (`Better PvP 1.4.0-1.21`).

## 2026-10-17 (Windows): in-game crash fixes + WSL dump harness bring-up

- **Second live crash fixed** (Prism run 13:43, StackOverflowError, 1663 ticks
  uptime): `CollisionShapeMixin` recursed — Hand No Clip's default Ignore=all
  mode replaces *every* queried state with AIR, including the AIR replacement's
  own shape query (`replacement.getCollisionShape` re-enters the mixin).
  Added a re-entrancy guard: nested replacement lookups take the vanilla path.
  The guard is listener-agnostic (Hand No Clip, AntiTrap, AntiWeb all share the
  event). Jar rebuilt + copied to the Prism instance.
- Live GUI observation (user, same run): ClickGUI window rendered mostly
  offscreen (only the bottom-right corner visible); visual fidelity beyond that
  cannot be judged yet. Recorded for the dump-informed GUI pass — no guessing
  fix applied.
- **WSL dump harness** (this PC; distro on D: per user request, C: left alone):
  - `wsl --import GrimHarness D:\WSL\GrimHarness` — Ubuntu 24.04.3 base rootfs,
    WSL 2.5.9.0, VM disk on D:.
  - WineHQ stable **11.0** at `/opt/wine-stable` (same recipe as the cloud VM);
    core tools: xvfb, x11-utils, xdotool, tmux, mingw-w64, openjdk-21-jre,
    mesa llvmpipe, gnupg, unzip.
  - Harness tree copied to `/root/win` (2.2 GB): `win/mc` (bootstrap.jar +
    fabric-api.jar mods, client 1.21.11 + libraries + natives, local server
    with world, options.txt), Windows Temurin JDK, `hook.c`/`hook.dll`;
    launcher paths adapted (`<workspace>\win` -> `<workspace>\win`, 9 refs);
    292 MB native DLL staged at `/root/win/tmp/native/jna1.21.11`;
    entropy.bin created.
  - Verified: Temurin 21.0.12.1 runs under Wine 11 (`java.exe -version`).
  - Boot smoke test #1 failed at JVM init: hook.dll's built-in TRACE_FILE
    default still points at the cloud path (`<workspace>\win\trace.jsonl`);
    the fopen failure makes Agent_OnLoad return JNI_ERR and kills the JVM.
    Fixed by exporting `TRACE_FILE=<workspace>\win\trace.jsonl` in the adapted
    launcher. Smoke boot #2 running with a `sixtwo/,Init`-only trace filter
    (the default `java/net/` prefix is what made the cloud boot 12-18 min).
  - `hook-args.c` prepared and compiled (`/root/win/hook-args.dll`, exports +
    deps verified): adds `TRACE_STRINGS=1` String-argument capture (JVMTI
    GetLocalObject + IsInstanceOf(String), JSON-escaped) — the literal-recovery
    mechanism for the GUI/module tour; the original hook.dll is untouched.
  - Module tour driver: `driver.c` → `driver.dll` (JVMTI/JNI): waits for a
    go-file, walks the module registry (`sixtwo.rD.dlJ().aZz()` → Map) and
    toggles each module via `gg.baa(boolean)` — the same call the Click GUI
    uses — for DRIVER_MS per module, logging to driver.log (world-gated via a
    disabled-module probe). The launcher now carries both agents
    (`-agentpath` hook-args.dll + driver.dll).
  - Interaction helpers (D:\WSL): shot.sh / key.sh / click.sh / go-driver.sh
    for the screenshot-verified GUI tour.
  - Combined dump session running: server + client (both agents) → join →
    baseline screenshots + Click GUI open → GUI tour → driver tour → analysis
    (analyze-trace.sh / extract-method.sh).
  - Dump-session crash #1 (Wine page fault at a 0x6ffff… DLL-space address,
    early boot): the string-capture agent cached `java/lang/String` as a JNI
    **local** reference created inside a MethodEntry callback — local refs die
    with the enclosing frame, so the next IsInstanceOf dereferenced a dangling
    ref. Fix: `NewGlobalRef` cache + `can_access_local_variables` capability +
    `DeleteLocalRef` on the fetched argument. (Never triggered with the
    sixtwo/-only string filter; the net/minecraft/client/ volume hit it
    instantly.) Client restarted with the fixed agent; server kept running.
  - Script lessons: the `pkill -f '[X]…'` bracket trick is only safe when the
    pattern word appears nowhere else in the same command line (a trailing
    plain pgrep pattern leaked and the shell killed itself); session scripts
    now live as files with self-safe patterns and are `bash -n`-checked
    before launch.
  - Overhead finding (boot #4): granting `can_access_local_variables` +
    capturing String args for **all** `net/minecraft/client/` calls slowed the
    boot catastrophically (datafixer phase 6.5 min vs 0.5 s; client still
    grinding at 100% CPU 50 min in — working, not hung). String capture is now
    scoped to `sixtwo/` only (the GUI labels flow through sixtwo's own draw
    code, so nothing needed is lost); client restarted with the lean config
    (boot #5).
  - Boot #5 still showed datafixer at 6.3 min — proving the slowdown is the
    **base method-event callback overhead during boot**, not the string scope.
    Fix: **deferred tracing** (boot #6) — METHOD_ENTRY/EXIT stay disabled until
    a `trace-go` file appears (plain Win32 watcher thread in hook-args, no JVM
    attach); boot runs at near-normal speed and the trace contains only the
    tour phase. Session flow: boot -> join -> touch trace-go -> GUI tour ->
    driver-go -> module tour.
  - First rich trace captured (multiplayer): 172k lines / 84k enter / 2.7k
    captured strings (GUI shader uniform vocabulary `bottomLeft`/`radius`/
    `smoothness`/..., addresses, positions) - but the trace load starved the
    main thread and the server kicked the client on keep-alive timeout 45 s
    after enabling (keep-alives are sent from the main thread). Fixes:
    (a) run the tour in singleplayer (integrated server, no timeout; server
    world copied to `saves/TourWorld`, launcher switched to
    `--quickPlaySingleplayer`), (b) the trace writer now holds the raw monitor
    around every line (the created-but-unused `trace_lock`) - lines were
    interleaving mid-JSON under concurrent callbacks. Watcher attach fix
    (unattached JVMTI calls silently failed -> attach before enabling)
    confirmed working (`trace_on` with events flowing).
  - Singleplayer session success: boot ~3 min, world loaded (server world
    copied to `saves/TourWorld`, `--quickPlaySingleplayer`), and **render-thread
    -only method tracing** (JVMTI per-thread event filter — the whole client
    runs on the Render thread) keeps the client responsive under trace load.
    Click GUI opened + captured (sidebar/tabs/cards/header; screenshots in
    D:\WSL\shots), tab screenshots taken (clicks lag under trace load — long
    waits needed). GUI literal capture confirmed: category names
    (CLIENT/COMBAT/CONFIGS/FRIENDS/HUD/MOVEMENT/PLAYER/VISUALS), Friends
    empty-state texts, mouse-event type names (MOUSE_DOWN/DRAG/MOVE/SCROLL),
    shader uniform vocabulary. Module-tour driver released (driver-go) with
    tracing live (~162 modules x 4 s).
  - Driver classloader fix: FindClass from an attached native thread uses the
    system classloader, but the payload lives in Fabric's Knot classloader —
    sixtwo classes are now resolved via JVMTI GetLoadedClasses + signature
    match (classloader-agnostic). Driver rebuilt; tour released with tracing
    live. GUI opening is opportunistic (Interface-module toggle state varies
    per session; the robust B -> RSHIFT+B sequence needs ~8 s waits under
    trace load).
  - **Dump session SUCCESS (evening)**: singleplayer TourWorld; all 162
    modules toured programmatically (driver on/off, ok=1 each, ~12 min);
    render-thread-only JVMTI tracing, deferred enable after join; trace
    492 MB. Artifacts under `D:\WSL\trace-analysis\`: per-module case-safe
    split (`by-class-casesafe\`, 44 MB, all 162 present), `digests\`,
    `module-summary.tsv` (313k enters / 176k numeric exits / 548 string rows),
    `n-evidence.tsv` ([N]-method cross-check: 31/103 captured with counts and
    sample values), `strings-full.tsv` (548 rows / 166 values — largely NOT in
    the static pool, which had only 156 strings: HUD labels
    FPS/BPS/TPS/UID/XYZ/Facing, config screen titles, category names, friends
    empty-state texts, mouse event types). The 72 unseen [N] methods are
    condition-gated; each gets a documented capture condition for a
    conditioned follow-up session (input automation).
  - Trace re-review dispatched (5 grouped agents: combat 9 / movement-A 10 /
    movement-B+render 9 / utility-A 10 / utility-B+world 11; target 95-100%
    on the recovered surface, trace-backed only).
  - Project now self-contained: harness sources copied to
    `analysis/tools/dump/` (+ README with the full pipeline description);
    trace artifacts in `analysis/traces/2026-10-17/` (module-summary.tsv,
    n-evidence.tsv, strings-full.tsv, digests/ — trackable; the 44 MB
    per-module split and the 705 MB raw trace are gitignored but present in
    the tree). The distro copies remain for execution; project copies are the
    canonical reading location for agents.
  - WSL harness shut down after final copies (`logs/` added to the trace
    artifacts; distro disk remains on `D:\WSL` for future rebuilds — the
    harness is rebuildable from `analysis/tools/dump/README.md`). Runtime
    capture work is closed (conditioned session abandoned by decision);
    guesses/approximations are a labeled last resort only.
  - Wave 2 dispatched: 6 agents x 10 modules (batches 6-11, 60 modules) with
    the full evidence list (case-safe decompile, specs, decrypted pool,
    runtime trace artifacts, Ghidra corpora; REA available for deeper native
    work). Agents do not edit ledgers — reports + TSVs, orchestrator merges.
    ClickGUI pass 2 dispatched separately with the trace-captured literals.

## 2026-10-17 (Windows): trace re-check — movement group A (eq, ez, ev, ew, el, ej, ep, eA, ex, ek)

First trace-evidence re-review wave against the 2026-10-17 dump session
(`analysis/traces/2026-10-17/`; per-module 4 s windows via the programmatic
driver). Report: `analysis/port/reports/audit-2026-10-17/trace-recheck-movement-a.md`.

- **ej (Air Stuck) — behavior fixed from trace (85→90%)**: asR(hc) body
  reconstructed from the raw enter/exit nesting: bab() in-world guard →
  `mT.cpC(l2)` timer gate → `qL.dbC()` current rotation → `iV.bxl(ov)` Full
  packet with the player's **live** X/Y/Z + rotation + real onGround/
  horizontalCollision → `mT.cpB()` reset → `hH.bdX(true)` (hc event canceled;
  native producer read bdW()=1 after dispatch). AirStuck now sends the live
  position exactly like iV.bxl; local pinning kept as the labeled stand-in for
  the native hc cancel. asP/asQ never fired (gM/hv constructed 0× in-session).
- **ek (Inventory Move) — asV contract fixed from trace (80→85%)**: asT ran 3×
  (once per tick), each calling asV once; asV returned 1 with the ClickGUI (a
  non-HandledScreen Screen) open — the wave-1 "requires HandledScreen" reading
  was wrong. isScreenSafe() reordered (exclusions → HandledScreen+cursor →
  true for other screens) and onTick now gates through it. asU unobserved
  (no screen clicks).
- **ez (85→88%)**: avk fired 3× (per outbound packet), event NOT canceled
  (bdW→0) — accessor-write reading confirmed; spoof gate still VM-resident.
- **ev (80→82%)**: aaj enable path traced (base gg.aaj → hF.bdI registration);
  auR never fired — zero hq events in the whole session.
- **ew, eA**: listeners untriggered because their 4 s windows fell inside
  19-20 s tick stalls (hc/gH$th gaps; under trace load) — not wiring gaps;
  capture conditions documented in the impl javadocs.
- **el**: atb ran 3× (per tick) with no nested sixtwo calls — the water branch
  (atc/atd/jl) never executed (player on dry land); capture condition: swim
  with Depth Strider boots.
- **ep**: atX/atY untriggered all session (getter read = open the ClickGUI
  movement tab; trigger = elytra + firework use).
- **eq, ex**: zero Java surface in-session (class load only) — confirms the
  config-only/native-side findings; no Java-side capture condition exists.
- Cross-cutting trace facts: hc = per-tick native event (~40 ms after each
  gH$th dispatch, 1060×); ClickGUI open for the whole tour (single gJ event);
  gM/hv/hq never constructed.
- Compile: `.\gradlew.bat compileJava -q --offline` PASS. PARITY.md rows +
  "Trace re-check — movement group A" subsection updated.

## 2026-10-17 (Windows): trace re-check — utility group A (fQ, dH, dT, fW, fO, dN, fU, eh, eg, fP)

Second trace-evidence re-review wave against the 2026-10-17 dump session
(`analysis/traces/2026-10-17/`; per-module 4 s windows via the programmatic
driver). Report: `analysis/port/reports/audit-2026-10-17/trace-recheck-utility-a.md`.

- **fW (Transactions) — behavior fixed from trace (75→80%)**: `aXZ` ran 16×
  = once per inbound S2C packet (matching the window's `gL$tk` dispatches);
  every span = `fX.aYu()` watermark → `gg.bab()` in-game guard (returned 1:
  player/world/interactionManager/getNetworkHandler) → `gL.bcf()` packet read.
  The guard is now the handler's first statement (1:1); no fZ/ga/gb store calls
  in any span — the latency pipeline only runs past the packet filter
  (capture condition: matching server transaction packet).
- **fO (Discord Activity) — disable path pinned (75→80%)**: `YO` nested exactly
  `qq.cXK()` (scheduler stop; `qn.cXy()=1`, `qn.cXx()=0`) with **no** `gg.YO()`
  chain (fO declares no listeners); onDisable now clears the published status
  alongside the activity fields.
- **fP (Anti-Cheat Detector) — lifecycle + packet route pinned (70→75%)**:
  `aaj` = `gg.aaj()` (63 `hF.bdK` scans, 3 listeners bound via `hF.bdL` = the
  three `@hG` methods) then `aWq()` last; `YO` = `gg.YO()` then `aWp()` last;
  `aWt` fires once per inbound S2C packet, watermark → `gL.bcf()`, no in-game
  guard (per-handler). aWr/aWs unobserved (gN fired 0×, gM never loaded).
- **fQ, eg**: zero entries are structural — fQ's only native is the class-init
  stub (native methods produce no JVMTI MethodEntry) and eg declares no
  behavior handler (DLL swing patch outside the payload). No capture possible
  via this tracer for either.
- **dH, dT, dN, fU, eh**: handlers never fired; capture conditions recorded in
  the impl javadocs (open a sign edit screen; pre-motion tick + attack key +
  item use; press Q on a locked slot; middle-click a player; hold use key with
  an exp bottle).
- Cross-cutting trace facts: listener dispatch is by event type only (handlers
  filter inside); `gg.bab()` guard presence is per-handler (fW yes, fP no);
  chat (gN) and frame (gM) events fired 0× all session.
- Compile: `.\gradlew.bat compileJava -q --offline` PASS. PARITY.md rows +
  "Trace re-check — utility group A" subsection updated.

## 2026-10-17 (Windows): trace re-check - utility group B + world (fh, fR, dD, ec, en, ea, dL, dP, eU, fd, dK)

Second trace-evidence re-review wave against the 2026-10-17 dump session
(`analysis/traces/2026-10-17/`; per-module windows via the programmatic
driver). Report: `analysis/port/reports/audit-2026-10-17/trace-recheck-utility-b-world.md`.

- **en (Anti Ghost) - enable-cooldown message recovered (85-88%)**: `aaj` ran
  once; first action `mT.cpC(J) -> true` (cPtuD = mT.cpA(), no reset), then
  the VM decrypted a 101-char constant = `'5'` (53) length byte + "You are on
  cooldown wait a moment before trying again" with integrity markers 6..52
  interleaved. `onEnable` now runs the debounce gate first (500 ms placeholder
  for the unrecovered threshold) and emits the recovered message on the
  cooldown path; `atp` untriggered (capture: break a block).
- **fh (Attribute Swap) - tick body pinned (60-70%)**: `aJf` 3x, identical
  body = `fg.aIW()` sentry -> `gg.bab()` in-game gate -> `ol.cER(Return
  Delay)` scheduler poll (-> 0; nested `cEX -> 12`, `cEW -> 0`). onTick now
  mirrors the gate/poll order. `aJg` untriggered (capture: attack an entity).
- **ec (Ghost Hand) - in-game gate fixed (85-88%)**: `arz` 2x = `ee.arS()`
  sentry -> `gg.bab() -> 1`; the gate now checks all four bab() terms
  (networkHandler added). interactBlock untriggered (capture: use-key a wall
  container).
- **eU (Air Anchor) - prologue + disable pinned (60-65%)**: `aDC` 2x =
  `eV.aEq() -> 0` (Auto Crystal gate; polarity unrecovered) + `gg.bab() -> 1`
  + `HyfoP.crA()`; `YO` = `gg.YO()` + `HyfoP.crA()`. The mW gate reset is
  mirrored (tick prologue + disable, claimed on placement); networkHandler
  added to the gate. `aDI` untriggered (capture: anchor place attempt).
- **fd (Auto Dripstone) - disable path pinned (55-60%)**: `YO` = `gg.YO()` +
  `aId()` where `aId = rD.dma().dcB(this)` (qN module-action unregister, nested
  `qL.dcb() -> 1`) - supersedes the spec's "state reset candidate" reading.
  aHU/plans untriggered (capture: player on a closed trapdoor + dripstone).
- **dP (Block Piercer) - disable path pinned (45-50%)**: `YO` = `ee.arS()`
  sentry + `gg.YO()`; aoR/aoS/aoT untriggered (capture: use-key place through
  an entity).
- **dK (Auto Lever Replace)**: `YO` 1x = `gg.YO()` only; ana/anc/anb/and/ane/
  anf untriggered (capture: tick + block update + render with a lever target).
- **fR, dD, ea, dL**: never enabled in-session (class load only) - capture
  conditions recorded (play a sound; right-click an item frame; tick while
  breaking a block; mine through an entity with a pickaxe).
- Cross-cutting trace facts: payload-wide sentry reads (`gg.baA`, `mT.cpK`,
  `fg.aIW`, `ee.arS`, `eB.avS`) precede most behavior methods; `gg.bab()` is
  the 4-term in-game gate; `gg.baa` toggle = aaj (on) / YO (off, always) with
  `hF.bdM` deregistration inside YO.
- Compile: `.\gradlew.bat compileJava -q --offline` PASS. PARITY.md rows +
  "Trace re-check - utility group B + world" subsection updated.

## 2026-10-17/18 (Windows): waves 2-3 full-module audit merged (batches 6-29) + live-bug integration fixes

- **Waves 2-3 complete.** Batches 6-29 (112 modules) audited + fixed by parallel
  auditor/fixer passes; reports `analysis/port/reports/audit-2026-10-17/
  batch-06.md` … `batch-29.md` (+ batch 30, below). Batches 28-29 were the giant
  single-class modules (dt Nametags 94% - old impl rendered nothing, full 1:1
  rewrite with DES-recovered literals; fS Name Protect 92% - full text engine +
  validated decryptor, 76/76).
- **Case-twin incident:** batch 19's list said `ff dq` but its pass audited the
  case twins `fF`/`dQ` (both already covered deeper by batches 12/9 - kept);
  the real `ff` (Fake Lag) and `dq` (Storage ESP) were dispatched as **batch 30**
  to close the gap.
- **Ledger merge:** `analysis/tools/audit/wave23-rows.tsv` + `Apply-AuditRows.ps1`
  stamped 110 rows (`verified 2026-10-17, parity NN%`; Status refreshed);
  ff/dq rows stamp after batch 30. PARITY.md gained the "Re-audit 2026-10-17
  (waves 2-3)" section and **divergence wave 4** (fs/er/de/ee/dQ/dM/category
  partition + folded spec corrections).
- **Spec corrections folded** (flagged by batches 13/19/21/22/23/29):
  casesafe/handlers/{dz,dQ_}.md, handlers/{dv,fS,de,dh,cZ}.md,
  modules/{fX,dn}.md.
- **Live-bug integration fixes (found by user testing of the built jar):**
  - **Left-click dead (since the first build):** `EventBridge`'s
    `ClientPreAttackCallback` returned `!cancelled()` - Fabric cancels vanilla
    attack handling (entity attack + block breaking + swing) when the callback
    returns true, so every attack was cancelled. Fixed to return
    `cancelled()` only.
  - **ClickGUI rendered off-screen:** `ClickGuiScreen.centre()` ran in the
    constructor when `Screen.width/height` are still 0 (degenerate design
    scale), producing negative coordinates; now re-centres in `init()` when the
    screen opens/resizes.
  - **Crash on silent rotations (StackOverflowError):** `ClientConnectionMixin`'s
    packet-replacement branch re-sent the replaced packet through `send()` —
    which re-entered the event and let replacement listeners (RotationManager
    look rewrite) replace their own output forever. Fixed with a ThreadLocal
    re-entrancy guard around dispatch + re-send (listener-replaced packets go
    out un-reposted; listener-initiated sends inside a dispatch do not recurse).
  - **Right-click settings dead:** `ClickGuiScreen.onMouseClicked` gated the
    whole card/tab/header block on `button == LEFT`, making the
    `RIGHT -> openSettings` branch unreachable; gate widened (left toggles,
    right opens the settings popup; tabs/header drag stay left-only).
- **General framework review (2026-10-18)** — report
  `analysis/port/reports/audit-2026-10-17/general-framework-review.md`; 6 runtime
  fixes landed:
  - **Config persistence was a silent no-op**: `ConfigManager.save()` wrote a
    bare `{moduleId: state}` map while `load()` parsed a different shape - Gson
    skipped every module property, so settings/binds/enable states never loaded.
    Fixed to `{"modules": {...}, "friends": [...]}` (legacy maps still accepted;
    settings -> bind -> enable order so `onEnable` sees loaded values).
  - **RotationManager froze silent rotations at the first submission**
    (same-owner requests only extended expiry while `tick()` re-synced from the
    stale head; 25 modules submit per tick). Fixed to mirror `sixtwo.mt#cmc`
    (bytecode-verified): replace the same-owner request.
  - **EventBus rethrew listener exceptions**, aborting the whole dispatch loop;
    fixed to swallow + `printStackTrace` per listener (`hH#bdV`-verified).
  - **Kill Aura default bind 82** added (`fr` registry bind=82 was missing).
  - **Friends list persisted** (now saved/loaded via ConfigManager).
  - `fabric.mod.json` dead icon removed; 7 keybind lang entries added.
  Verified in the same pass: 162/162 registry <-> Modules <-> impls <-> PARITY
  rows; 5/5 boot flags; 18/18 mixins with javap-verified injection/accessor
  targets; all 17 events fired + subscribed with enable/disable lifecycle;
  Fabric callback return conventions; the packet re-entrancy guard; cross-module
  links. Follow-ups resolved by a fixer pass
  (`analysis/port/reports/audit-2026-10-17/framework-followups.md`): ff
  `setBind(82)` added (javap-verified; all 7 registry-bound modules now match);
  `cR` Particles hardened to `CopyOnWriteArrayList` (the original carries the
  same latent netty-thread race on a plain `ArrayList` — documented divergence,
  spawn timing preserved); `CollisionShapeMixin` guard now `ThreadLocal`; `dl`
  `isOutliningActive` documented (the original sets it only inside the
  outline-framebuffer batch `ki.bPi` -> `ki.bPk` -> `kn.bQo`, which has no
  consumer in the rebuild — no provable true-window exists). eV gate (native,
  polarity unrecovered) + GUI-side gaps remain documented.
- **Aggregate parity computed** (162-module mean): **78.1%** (median 80%, range
  45-100%; 73 ported / 89 partial) — added to `README.md` ("Parity status"
  section + refreshed Stats line).
- **General GUI review (2026-10-18)** (`general-gui-review.md`): the "garbled
  settings popup" root cause proven from the user's screenshot — `Popup.openAnim`
  was never advanced per frame (`openFor()` snaps it to 0 and nothing ticked it),
  so the panel drew at half scale with alpha-0 themed colors (invisible panel +
  half-scale rows = dense glyph noise; the data was clean). Fixed with a
  per-frame `Widget.updateAnimations()` hook (`az.su` = `fX` + `bV` contract);
  verified with offline reproduction renders (stuck-t0 mush vs fixed-t1 crisp).
  Also: panel width corrected to the recovered 127 (`bd.BcpIo`), open position
  `window.right + 10, window.top` (`bg.CQ`) + [G] viewport clamp, the module
  toggle row (`bd` ctor), the missing 5th MSDF sheet `bold` baked (byte-exact
  recipe), scroll reset on re-target, conditional header dot/subtitle; the real
  payload logo (grim reaper from `raster-assets.bin`) shipped as
  `assets/opengrim/icons/logo.png` and drawn at (5, 7.5, 30, 30). `c`'s ~135
  literals: static recovery conclusively attempted and ruled out (no dump
  record, native `<clinit>`, no key algebra reproduces the known keys) — a
  hooked run with the settings screen open remains the only path.
  Follow-up round (2026-10-18b): **the settings popup drew off-screen because
  `GuiDraw.pushTransform` scaled about the origin instead of the pivot** —
  `jH.bId` ends with the closing `translate(-cx,-cy)` (the port's own
  `WheelDraw.pushScaleAbout` already did it right); at `t=1` the popup was
  displaced by `(x+w/2, y+h/2)`. Fixed; verified with a geometry harness
  (3 viewports) + a layout sketch. The orchestrator's `Tween.update`
  one-shot-init fix was also verified with a compiled-class harness (pill
  converges in 150 ms, hover in 120 ms, popup sequence reaches t=1; easings
  exact, no NaN) — the accent pill now slides to the selected tab.
- **Crash #3 — ChinaHat pose leak (2026-10-18, 10:56/11:08)** (`crash-2026-10-18b.md`):
  `drawCone` requested two `VertexConsumerProvider.Immediate` buffers before
  writing either (fill `debugFilledBox()` then `lines()`); `Immediate` keeps one
  non-dedicated layer building, so the second `getBuffer` ended the first →
  `"Not building!"` → thrown → the EventBus swallowed it → `matrices.pop()` was
  skipped → vanilla `"Pose stack not empty"` crash. Fixed: two sequential passes
  (no consumer outlives a `getBuffer` call) + `try/finally` around the push/pop;
  also a 1:1 correction of the closing rim line (angle-0 point, last segment's
  color, ky.java:221). Same-class scan: no other module requests two live
  buffers; **37 push sites lacked `try/finally`** (latent same crash on any
  swallowed throw) — hardening sweep **completed: 37/37 wrapped across 23 files**
  (no skips; all 39 push sites now `try/finally`-protected; sole note:
  `Trajectories.java` restores `bobView` after the finally — non-crash state
  leak, documented for later).
- Compile: `.\gradlew.bat compileJava -q --offline` PASS; `build` + jar copied
  to the Prism instance for testing.
- 2026-10-21: **Licensing/policy change (owner's direction).** `LICENSE` removed; project metadata is now `All Rights Reserved`; clean-room/no-verbatim rules retired in favor of 1:1 translation and direct reuse of original code/assets. Extracted the original renderer's 31 GLSL shaders from `bootstrap/offline/shaders/shader-map.bin` and imported them to `src/main/resources/assets/opengrim/shaders/`.
## 2026-10-21 (Linux): GUI category/page parity — original `gh` mapping restored

- **Recovered the original category of all 162 modules** from each module
  constructor's `super(gf.aZL(..., gh.X))` (CFR trees under
  `analysis/decompiled/{payload-named-cfr,casesafe/payload-named-cfr,payload-cfr,
  casesafe/payload-cfr,...}`; case-collision twins resolved by the declared
  class). The `gh` constants map: `xwjCw`=Combat, `xgeEn`=Movement,
  `qBzlZ`=Player, `nOCvV`=Visuals, `KfAlY`=Client. `eJ` (Auto Trap) and `eK`
  (Auto Web) have no `gh` call of their own — they extend the block base `eL`,
  whose constructor passes `gh.xwjCw` (Combat), so both are Combat.
- **Counts now match the originals exactly:** Combat 57, Movement 23, Player
  34, Visuals 37, Client 11 (previous port: Combat 44, Movement 27, World 16,
  Render 43, Utility 32; 43/162 modules were on the wrong page — 98 constructor
  arguments change textually once the RENDER→VISUALS / UTILITY→CLIENT /
  WORLD→PLAYER renames are counted). Full table:
  `analysis/artifacts/gui-reference/category-map.tsv` (id, module,
  original_page, port_category, corrected).
- **Enum renamed to the original pages/order** (`ModuleCategory.COMBAT,
  MOVEMENT, PLAYER, VISUALS, CLIENT`); `GuiTheme`'s per-category constants and
  switch updated to match (still one accent for every category, as before).
  `ClickGuiScreen.Page` now maps 1:1 (Player→PLAYER, Visuals→VISUALS,
  Client→CLIENT); sidebar order/labels unchanged and re-verified against the
  frames (Combat, Movement, Player, Visuals, Client | Friends | Hud).
- **Card order:** the original `aC` page panel iterates the module map
  (`rD.dlJ().aZz().values()` in `aC.<init>`/`aC.dY`), and the three populated
  frames show that order is the obfuscated class id (registry.tsv row order:
  `cX,dA,dB,…` / `cP,cQ,cR,…` / `fN,fO,fP,…`). `Modules.registerAll()` was
  therefore reordered from the ad-hoc port order to registry order; the Click
  GUI now draws every page in that order (tick order becomes registry order
  too, which removes the known "registration order, not the original's id
  order" framework divergence).
- **First-screen verification against the frames:** Player 16/16 cards and
  order (`page-client.png`), Visuals 16/16 (`page-movement.png`), Client 11/11
  (`page-friends.png`) — exact set + exact position, no residual difference.
  `page-player.png` (Movement) and `page-hud.png` (Client) are empty /
  mid-transition frames and cannot confirm membership. The prompt's Combat
  reference `image.png` (repo root; not under gui-reference) shows a live
  **port** screenshot, not the original: its first 16 cards are exactly the
  port's old registration-order Combat list (Trigger Bot, Auto Logout, …,
  Mace Elytra Target), unlike every original frame's class-id order, and it
  carries the port's extra close control and a different account (`maczoo`).
  Original Combat membership (57) is proven by the constructors; its first
  class-id screen would be Spear Reach, Spear Lunge, Spear Dash, Spear Double
  Tap, Auto Trap, Auto Web, …, Auto Crystal. That page has no original frame.
- **Build:** `JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava`
  → BUILD SUCCESSFUL (JDK 21, Fabric Loom 1.13.6).
- **Remaining gaps:** no original Combat frame (first-screen order for Combat
  rests on the class-id rule proven by the other three pages); Movement frame
  empty; HUD page has no populated frame; `image.png` cannot be used as
  original evidence (documented above).

## 2026-10-21 (Linux): recovered `shape` shader — first real pipeline (vertical slice)

- **Shape pipeline live for rounded fills/strokes.** `GuiDraw.fillRounded`
  (`lC.cdm`) and `strokeRounded` (`lC.cej`) now submit one quad per primitive
  through `dev.opengrim.gui.render.ShapeGuiElementRenderState`; the fragment
  math is `shape.glsl`'s SDF + mask, copied verbatim (rectangle/squircle
  branches, outline thickness, the same 1 px-fringe smoothstep).
- **Uniform transport.** 1.21.11's deferred GUI renderer batches by
  `RenderPipeline` and has no per-draw scalar-uniform hook (vanilla
  `SimpleGuiElementRenderState` only carries pipeline/texture/scissor). The
  recovered uniform values therefore travel in the vertex stream, with
  `POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL`: `UV0`=size, `UV1/UV2`=radius
  TL/BL/TR/BR fixed-point 8.8 (matching `ke.bOi`'s upload order),
  `Normal`=smoothness/innerSmoothness/thickness (normalized bytes), `Position.z`
  = cornerSmoothness, `Color`=vertex colour. `fragCoord` still comes from
  `gl_VertexID` exactly like `position_tex_color_vertex.glsl`.
- **Values** (kg's `jO` defaults + `ke.bOi`): smoothness 0.75, innerSmoothness
  0.75, thickness 1.0, cornerSmoothness 5.0; radius = the GuiDraw argument
  clamped to half the smaller side. FILL = `MASK_FILL`; OUTLINE = `MASK_OUTLINE`
  + thickness 1.0.
- **Pipelines:** `opengrim:pipeline/gui_shape_fill` / `_outline`, built from
  `RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET`, TRANSLUCENT blend,
  `POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL` QUADS, `NO_DEPTH_TEST`, no
  depth write. Shaders `assets/opengrim/shaders/gui_shape.vsh/.fsh` (the
  original `shape.glsl` is untouched; solid fill only — gradients/texture fill
  remain in the original file for the next pass).
- **Fallback:** if the shaders are absent/uncompilable the old inset-square
  DrawContext fill and 1 px stroke remain, gated by
  `GuiShapePipelines.available()`.
- **Runtime verification:** `runClient` on JDK 21 logs
  `shape pipelines ready (gui_shape fill/outline, …)` after the resource
  reload; no shader/pipeline errors. `glslangValidator` compiles the base,
  outline and squircle variants and links each stage pair.
- **Build:** `JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava`
  → BUILD SUCCESSFUL.
- **Next:** MSDF text (`msdf.glsl` + `msdf_vertex.glsl`, per-draw uniforms
  `range/thickness/smoothness/outline/fadeout`) is the remaining half of the
  ClickGUI typography path; then gradients/shape fillType 1/2, blur, glass.

## 2026-10-21 (Linux): native settings-popup recovery — bd.BO / bd.BR / bd.bV / bd.dn

- **New targeted j2cc recovery tool** under `analysis/tools/j2cc/`
  (`pe.py`, `j2cc_cfg.py`, `j2cc_lift.py`, `README.md`). It follows direct
  jumps, relocation-resolved continuation slots and `jmp [table+idx*8]`
  (extent from the dominating compare or the relocation run), resolves the
  decrypted j2cc constant pool, names the JNI vtable calls and symbolizes the
  Windows-x64 stack slots into pseudo-Java. Ghidra's full auto-analysis of the
  280 MB DLL is bypassed entirely; `bd.bV` (142 KB, 2880 blocks) explores in
  ~25 s.
- **Recovered bodies** (image addresses; full evidence in
  `analysis/artifacts/gui-native/`):
  - `bd.BO` `0x18f15c990..0x18f15ceac` — close glyph:
    `ceo(lf.PqdjL, f1+f3-17.5, f2+9.5, 8, 8, 6, white)`; bV passes
    `(panelX, panelY, panelWidth)`.
  - `bd.BR` `0x18f122fd0..0x18f1237da` — glyph button: shadow stroke
    `ld.all(2)`, `cdg(x-1,y-1,size+2,size+2)`, `cem(glyph,x,y,size,color)`;
    **no call site** and `BR` is absent from bd's pool class descriptor → the
    helper is unused in this build.
  - `bd.dn` `0x18f122150..0x18f122e86` — exact panel height
    `min(200, 18 + Σ oH·dn + 51)`; `bd.Cc()`=`fNXMn`, `bd.Cd()`=`LaFgq`.
  - `bd.bV` draw order/geometry: shadow `cej` radius 7 + `ld.all(7)`, fill
    `cdm` radius 7 + `ld.all(3t+4)`, title `ceI(gg.bad(), x+7+2t, y+8+2t,
    size 7+2t)` then the same at `(x+9,y+10)`, global tint `jF.bHz(1,1,1,t)`,
    `BO` close glyph, `dn/oH/sW/su` row loop, `ah` scrollbar.
  - Row heights: 18 (bool/mode/string/module), 28 (numeric slider), 122
    (colour), computed for `ct`; handlers listed in the spec.
- **Port:** `gui/screen/SettingsWindow.java` rewritten from the recovered
  body (127 wide; `min(200, 69+Σdn)` height with the `bk` row reserved;
  radius 7; two-pass title at the recovered insets/size; close glyph 8×8 at
  `(x+w-17.5, y+9.5)`; row stack at `y+18` with exact heights; invented
  subtitle/dot removed). `gui/ui/ModuleWidgetFactory.java` now carries the
  recovered 18/28/122 heights and a list-based `populateRows`; `ToggleWidget`
  label inset aligned to `ak.oF` (`+9.0`).
- **Evidence:** `analysis/artifacts/gui-native/bd-settings-spec.md` plus
  `bd.{BO,BR,dn}.{cfg,pseudo}.txt`, `bd.bV.{drawcalls,linear}.txt`.
- **Build:** `JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava`
  → BUILD SUCCESSFUL.
- **Gaps:** theme colour property mapping (`ii.bjb/bjd/bje`), title font
  family (`lE.WxpHL`), the first two rows' labels/actions (`v` glyph literal,
  `bk.bV`), scrollbar paint (`ah.bV` track geometry), shadow pipeline and the
  `bd` input natives — itemized in the spec.  The configs screen `c`
  (`sixtwo_4.java`, 46 natives, 5 `ap` popups + `Q` search + the DES literals)
  was **not** attempted in this pass; the same CFG/lift tooling applies, but
  it is a separate multi-thousand-block job.

## 2026-10-21 (Linux): recovered MSDF text pipeline — second real pipeline (vertical slice)

- **Real MSDF text is live.** `MsdfFont` now loads the original msdfgen RGB
  sheets (`analysis/decompiled/bootstrap/offline/fonts/*.metadata` →
  `assets/opengrim/fonts/msdf/{regular,medium,semibold,bold,icons-4.4}.png`)
  and draws every glyph through `opengrim:pipeline/gui_msdf`, which reproduces
  `msdf.glsl`'s `median(rgb)` / `range` / `pixels` / `smoothstep` math. The
  baked-alpha sheet remains only as the fallback when the pipeline or a sheet
  is unavailable.
- **Uniform transport** (deferred GUI has no per-draw scalar hook):
  - `UV0` = atlas texcoord
  - `UV1.x` = range (8 bits, 0..12) | thickness (8 bits, -1..1)
  - `UV1.y` = smoothness (8 bits, 0..4) | outlineThickness (8 bits, 0..4)
  - `UV2.x/.y` = outline RGBA packed 8/8/8/8
  - `Normal.xy` = fadeoutStart/End; `Position.z` = normalized
    `(x - textPosX) / maxWidth`; `Color` = text colour.
  The original scalar `textPos`/`maxWidth` formula is precomputed per vertex,
  so the fadeout maths is unchanged.
- **Values** from the recovered renderer (`lk.bZd` var11/var12 +
  `atlas.distanceRange`): thickness 0.05, smoothness 0.5, range 10 (text) /
  12 (icons); outline/fadeout off for the wired path.
- **Pipelines:** `opengrim:pipeline/gui_msdf`, `_outline`, `_fadeout`,
  `_outline_fadeout`, built from `TRANSFORMS_AND_PROJECTION_SNIPPET`,
  `POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL` QUADS, `TRANSLUCENT`,
  `NO_DEPTH_TEST`, sampler `Sampler0`; the original sheet is bound with a
  LINEAR/CLAMP sampler. The outline/fadeout variants are registered and
  precompiled for the next text pass; only the plain variant is wired.
- **Runtime verified:** `runClient` logs the MSDF pipeline ready and all five
  sheets ready (dims/ranges match the atlases, including the RGB icons sheet);
  no shader errors. Clean in-world F2 screenshot with the ClickGUI open:
  `run/screenshots/2026-10-21_18.32.00.png`.
- **Visual comparison against `page-movement.png`:** glyph advances/baselines
  are unchanged and text is crisp with no channel fringing; card names are
  visibly semibold, descriptions regular. Remaining renderer deltas: the
  header separator is still the old rasterized `fillCircle` (looks jagged at
  ~2x), the window is a flat dark fill (no blur/glass), and the sidebar logo
  tile is the transparent white-on-dark asset instead of the reference's light
  tile. The original reference's window is also wider (~569 units at 1.5 px/unit
  vs the port's 465), which is why the reference leaves empty space right of
  the card columns; layout was not changed in this pass.
- **Build:** `JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava`
  → BUILD SUCCESSFUL.
- **Next:** wire the outline/fadeout variants to the HUD/list call sites, then
  blur + liquid_glass, gradients, and the remaining shape primitives
  (arc/annular/checker/bezier/shadow).

## 2026-10-21 (Linux): `bk` module row + scrollbar/theme resolution

- **`bd` child order completed.** `bk.bV` (image `0x18ef9aa70..0x18ef9b82c`,
  94 blocks / 889 insns) recovered: `tDliG.dhc(ti(lC))` hover tween, inherited
  `ak.oF(lC, BcpIo-21)` label, and `cel(lf.cuxpa, MCnYt+BcpIo-16,
  pNyTQ+2.5, 7)` icon. `lf.cuxpa` = EDIT pencil. The row has no background of
  its own. `bk.dk` builds `bh.<init>(FFFLsixtwo/gg;)` (110×80, two `ab`
  toggles) — out of slice. Port: `SettingsWindow.ModuleRow` skeleton (exact
  geometry/icon/hover; module name substituted for the unrecovered static
  glyph-array label).
- **Scrollbar resolved as absent.** `ah` is pure Java; `javap -c ah.bV`
  computes only dead thumb geometry and contains no `lC` call; `bd.bV` only
  uses `nQ/nH/nG`. The original panel has no visible scrollbar — the port
  intentionally does not draw one.
- **Panel fill mapping resolved.** `ii.bjb`=text, `bjd`=background (bhH
  5,5,8), `bje`=panel (bhI 8,10,20), `bjf`=accent2, `bip`=accent (from
  `ig`/`ie`). `cdm` fill = `bjd().cob(…).coc(bje(), 0.3f)`; the port uses
  `background.lerp(panelColor, 0.3)` scaled by the open tween.
- **Evidence:** `analysis/artifacts/gui-native/{bk.bV.keyblocks.txt,
  ah.bV.javap.txt}`, updated `bd-settings-spec.md`.
- **Build:** `JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava`
  → BUILD SUCCESSFUL.
- **Gaps:** `bk`'s glyph-array label literal (native `Eo/Em` bootstrap) and its
  `bh` editor popup; `v`'s same-class label literal; title font family
  `lE.WxpHL`; row open animation; shadow stroke widths.

## 2026-10-21 (Linux): arc SDF, real backdrop blur, liquid glass (renderer slice)

- **Correction to the previous entry:** `page-movement.png`'s window is
  x≈216..912 = 696 px; at 1.5 px/unit that is ~464 design units (height 458 px
  ≈ 305.3). The card columns span x≈383..907 and fill the 355-unit content
  width. The right-hand area is outside the window (chat overlay/other UI), not
  an empty window margin. `WINDOW_W/H` and the card grid were not changed.
- **Arc/circle pipeline.** `opengrim:pipeline/gui_arc` (`gui_arc.vsh/fsh`
  adapted verbatim from `arc.glsl`, sixtwo.lC.cdw/cdx). Channels: `UV0` size,
  `UV1` thickness (/32) + startAngle (/256), `UV2` endAngle (/256) +
  smoothness (/256), Color. `GuiDraw.fillCircle` now draws a filled disc with
  the arc SDF (quad enlarged by the AA smoothness; thickness = quad size gives
  an exact disc boundary) and keeps the raster fallback. The header separator
  dot is now a smooth 2.75-unit circle; a 2× crop confirms a round dot instead
  of the previous jagged blob.
- **Real Blur branch (lC.ccW `fX.aYf()`).** `BackdropBlur` captures the main
  framebuffer during GUI extraction (the current frame's world is already
  rendered; the deferred GUI is still queued), runs two separable
  `gui_blur` passes into offscreen ping/pong `SimpleFramebuffer`s and exposes
  the final texture. Weights are exactly `kk$uf.dsw`:
  `w[i] = 1/sqrt(2πσ²)·exp(-i²/(2σ²))`, `σ = radius/2`, normalised in-shader;
  radius follows `32·pow(blurPercent/100, 0.43)`. `gui_blur` uses a std140
  `Blur { texelSize, direction, radius, pad, vec4 weights[64]; }` UBO (the
  original's `weights[256]` flattened by four) and a fullscreen POSITION quad.
  `gui_blur_backdrop` masks the blurred texture with the shape SDF and mixes it
  with the theme background by the recovered style opacity (0.75 for Blur).
- **Liquid Glass branch (lC.ccW `fX.aYe()` / kd.IbNTv).**
  `opengrim:pipeline/gui_glass` (`gui_glass.vsh/fsh`) keeps the full recovered
  `liquid_glass.glsl` bevel/refraction/light/dispersion model verbatim. Window
  size/radius/cornerSmoothness/tint/opacity travel as attributes; `Sampler0`
  is the same blurred backdrop; the glass config constants are refraction 100,
  depth 5, lightIntensity 80, lightAngle −45, lightSize 2, dispersion 0,
  splay 0, tint = `Theme.glassFill()`, light = white. The original raw id
  values 100/100/1.5 are not directly usable as bevel depth/light size (they
  make the corner-normal radius the whole half-size), so depth/lightSize are
  documented tunings; the blurred input, SDF/light model and 100-scale
  refraction are recovered.
- **Wiring:** `ClickGuiScreen` picks Liquid Glass → `gui_glass`, Blur →
  `gui_blur_backdrop`, Solid → the existing opaque fill. `GuiDraw.themedBackground`
  and popups keep their existing fill until the next pass.
- **Runtime verified:** main-menu `runClient` logs the shape, MSDF, arc,
  blur/backdrop and liquid-glass pipelines ready. In-world F2 captures:
  `run/screenshots/2026-10-21_18.46.37.png` (Blur: blurred world visible under
  the window mask, sharp world outside) and
  `run/screenshots/2026-10-21_18.52.43.png` (Liquid Glass: clear beveled glass
  with rim light and refracted blurred world). No shader/draw exceptions.
- **Remaining gaps:** shape gradients (`FILL_GRADIENT`/stops/angle), texture
  fill, loading stripes; Blur tint mix and glass depth/lightSize need exact
  `ii` config recovery; glass alpha is 1.0 rather than the style's 0.2 to keep
  the blurred backdrop from showing through sharply; popups/settings panels
  still use the opaque themed fill; shadow/annular/checker/bezier pipelines
  remaining. Header dot now uses arc SDF instead of the original shape-SDF
  circle (`cdc`/`cdh`), same visible circle.
- **Build:** `JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava`
  → BUILD SUCCESSFUL.

## 2026-10-21 (Linux): decoded native settings labels

- **`v` toggle label = "Enabled"**, **`bk` row label = "Keybind"** — decoded
  by running the classes' own int resolver in the existing Wine/JVM sandbox
  (`win/tmp/LabelDump.java`, no client):
  `bd` key `aAWpI=96992212900949`, seed `0x26D3D2F10863`; length site 20856→7,
  values `[69,110,97,98,108,101]` + indexed 31284→100 at index 6;
  `bk` key `KbsrP=37233083650712`, seed `0x113C1EBEC7C7`; length 21192→7,
  values `[75,101,121,98,105,110]` + indexed 12618→100 at index 6.
  The resolver accepts exactly `rawConst ^ classKey ^ seed`; all other
  derivations throw AIOOBE (recorded).
- **Port:** `SettingsWindow` toggle row uses `"Enabled"`; `ModuleRow` uses
  `"Keybind"` — the `module.getName()` substitution is gone.  No other
  changes.
- **`bk.dk`/`bh`:** spec only — `bh` is a 110×80 native popup
  (two `ab` toggles over `gg.bai()/baj()`, native `bV`/`dk`), not ported.
- **Evidence:** `analysis/artifacts/gui-native/labels-decrypt.txt`,
  `analysis/tools/decryptor/LabelDump.java`, updated spec.
- **Build:** JDK 21 `compileJava` → BUILD SUCCESSFUL.

## 2026-10-21 (Linux): theme-style wiring, recovered glass uniforms, three branch captures

- **Interface.style is wired.** `Interface.onTick` now maps the ModeSetting
  value (`liquid_glass` / `blur` / `solid`) through
  `Theme.get().setBackgroundStyle(...)` before the module's screen checks. It
  runs every tick, so a saved config applies on the first tick after
  `CONFIG.load()` and a ModeWidget change applies on the next tick. Blur remains
  the default (`Theme.BackgroundStyle.defaultStyle() == BLUR`).
- **All three branches verified in-world** (`--quickPlaySingleplayer "New World"`,
  F2 captures):
  - `analysis/artifacts/gui-reference/port/blur-default-2026-10-21.png` (default,
    config `"style": "blur"`) — two-pass blurred world under the window mask.
  - `analysis/artifacts/gui-reference/port/liquid-glass-2026-10-21.png`
    (`"style": "liquid_glass"`) — recovered glass composite.
  - `analysis/artifacts/gui-reference/port/solid-2026-10-21.png`
    (`"style": "solid"`) — flat themed fill.
  The Blur capture has the F2 "Saved screenshot..." toast for the previous
  capture; it is otherwise the full 465×305.5 ClickGUI.
- **Blur-vs-reference comparison:** after the window-width correction the port
  geometry matches `page-movement.png`: 465×305.5 window, 100-unit sidebar,
  28-unit header, 175×28 cards with 5-unit gaps, same content origin and text
  sizes. The visible difference is the backdrop: the port's test world is a
  bright day scene, so the 75% background tint over the blurred world reads
  blue/green at the top/bottom; the reference frame was captured against a dark
  world and therefore reads uniformly dark gray. Card/sidebar/header geometry,
  text advances and the now-smooth separator dot match.
- **Recovered glass uniforms (replaces the previous depth 5 / lightSize 2
  tunings).** `lC.ccW` passes `ii2.bji()..bjp()` through `bOO..bOV`; the
  builder → `jP` → uniform mapping used:
  | builder | source | glass uniform | value |
  |---|---|---|---|
  | `bOO` | `ii.bji` = `id.bhg` innerRadius | `refraction` | 100 (shader /100 = 1.0) |
  | `bOP` | `ii.bjj` = `id.bhh` outerRadius | `depth` | 100 (design units; clamped to half-size) |
  | `bOQ` | `ii.bjk` = `id.bhi` borderInset | `splay` | 100 (shader /100 = radial) |
  | `bOR` | `ii.bjl` = `id.bhj` | `dispersion` | 0 |
  | `bOU` | `ii.bjo` borderWidth × `(1 − f7/2)` | `lightSize` | 1.5 (base; f7 is the caller's 0..1 factor) |
  | `bOV` | `ii.bjp` = `id.bhf` | `lightColor` | white |
  | `bOW` | `ii.bjn` = `id.bhe` | `tintColor` | transparent |
  | `bLu` | `jP` default `NKhaE` | `lightIntensity` | 80 (shader /100 = 0.8) |
  | `bLv` | `jP` default `tkEVM` | `lightAngle` | −45° |
  | `bLh` / `bLi` | `kg` defaults `KfgfI` / `txGdU` | `innerSmoothness` / `thickness` | 0.75 / 1.0 |
  | `bLk..bLn` | `jP` defaults | innerRadius / outerRadius / startAngle / endAngle | 0 / 0 / 0 / 2π |
  The `jV`/`jP` uniform-name literals are DES-encrypted; this mapping is
  recovered from the builder call order, `kg.bPg` field order and the shader's
  value semantics. `shapeType=SHAPE_SQUIRCLE`, `maskType=MASK_FILL`,
  `hasUniformCorners=1`; the skipped `bON(ii.bjm)` field is only used by the
  annular/outline paths.
- **Build:** `JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava`
  → BUILD SUCCESSFUL. `run/config/opengrim.json` restored to `"style": "blur"`.
- **Remaining gaps:** `shadow` pipeline and rounded-shadow draw; shape gradient
  fill (FILL_GRADIENT stops/angle), texture fill, loading stripes; popup surfaces
  still use the opaque themed fill; `shadow/annular/checker/bezier` pipelines.
