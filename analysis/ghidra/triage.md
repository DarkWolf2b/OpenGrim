# Ghidra triage — `j2cc_natives.dll` (jna1.21.11, 292MB)

Triage date: 2026-10-10. Method: Ghidra 12.1.4 headless import (PE loader,
`x86:LE:64:default:clangwindows`), targeted `NativeTriage.java` script
(`tools/ghidra/NativeTriage.java`) WITHOUT full auto-analysis (230MB code
section makes full analysis a 6h+ job; the REA full-analysis snapshot runs in
parallel for the deeper tier). Raw log: `../../analysis/ghidra/triage-headless.log`.

## Exports (6)

| Export | Address | Notes |
|---|---|---|
| `Java_native_Loader_bootstrap` | `183f5db30` | JNI: receives 48-byte key (from `native/info`), initializes decryptor [decompile timeout — see notes] |
| `Java_native_Loader_initClass` | `183f561b0` | JNI: per-class constant-pool decryption; decompiled (below) |
| `chacha_block` | `1834ffc80` | ChaCha block function (constant decryption primitive) |
| `chacha_block_8` | `183509d40` | 8x ChaCha variant |
| `fuckMyShitUp` | `183509d50` | 16 bytes after `chacha_block_8` — thunk/alias of the ChaCha pair (crude name, no distinct behavior) |
| `entry` | `180002ea4` | PE entry |

## Import / pattern scan — ALL CLEAN

Raw-memory scan over the whole image (16 indicators), **every one ×0 hits**:

- No URLs: `https://`, `http://`, `ws://` — zero
- No process/exec: `CreateProcess`, `ShellExecute` — zero
- No network: `WSAStartup`, `InternetOpen`, `WinHttpOpen`, `URLDownloadToFile` — zero
- No persistence: `regsvr32`, `schtasks`, `CurrentVersion\Run` — zero
- No keylogging/injection: `GetAsyncKeyState`, `SetWindowsHookEx`, `CreateRemoteThread`, `WriteProcessMemory` — zero

External import table: the PE references KERNEL32 etc. but they resolve at
load time (Ghidra project has no Windows system DLLs to link; import-by-name
scan of the raw image found no network/persistence/shell API names).

**Verdict: no network, no persistence, no injection, no keylogging primitives
in the native layer.** Consistent with the earlier triages (exit-hook.dll,
stage2 natives, launcher.exe — all clean).

Honest limitation: 230MB of j2cc-compiled code could in principle issue direct
syscalls without named imports; the pattern scan and decompiled exports show
no indication of that, but the full-coverage statement depends on the REA
full-analysis snapshot (running).

## `Java_native_Loader_initClass` decompilation (257 lines)

Confirmed mechanism — matches the Java-side observations exactly:
- Dense constant-mixing key schedule: XOR/rotate/multiply chains with fixed
  magic constants (`0xc811daf9`, `0xde849dbd`, `0x84222325`, `0xe2f1f8d0`, …),
  popcount-based mixes (`0x55555555…`, `0x3333…`, `0x1010101…`) — building
  per-class decryption keys in a global key table.
- Class-name lookup through the pool (`FUN_190dbc7d0` on the class pointer),
  then native method registration dispatch for the class's `_hash` stubs.
- No file, registry, network or process operations in the decompiled body.

`Java_native_Loader_bootstrap` decompilation timed out (60s limit in-script);
it is the key-schedule initialization driven by the 48-byte `native/info` key
(established from the Java-side loader flow + the working decryptor run).

## What this means for the rebuild

- The decryptor path is exactly what it appears: ChaCha-encrypted constant
  pools keyed per class — already broken at the JVM level (see
  `../../analysis/decrypted/full-dump.jsonl`, 23147 literals).
- The 43 fully-native classes' logic lives in j2cc-compiled machine code
  reachable only through `initClass`-registered natives; recovering it is the
  deep tier (REA full analysis running; per-class native tracing optional).

## Deep tier — runtime handler mapping (DYNAMIC, session 2)

**The class→handler mapping is solved** via a JVMTI `NativeMethodBind` agent
(`tools/decryptor/hook.c`, mingw-w64): run the decryptor driver under Wine
with `-agentpath:hook.dll` — the JVM reports EVERY native binding
`(class, method, sig, runtime address)` as the DLL registers it. No game, no
env-table patching, network off. First wave (13 classes): 643 sixtwo bindings
captured (`../../analysis/ghidra/native-handlers-runtime.json`), 100% coverage
of the 8 target classes + framework:

fr 89 · ad 75 · by 75 · eL 69 · br 61 · fH 59 · aZ 58 · eJ 58 · aj 43 ·
gb 21 · fZ 15 · fF 13 · iS 7

Those 643 handlers were decompiled via pyghidra (bounded, 60s/function):
`../../analysis/ghidra/handlers/sixtwo_*.c` (~4MB of C) — ~98% decompiled, a few
hostile functions fail per-function (documented inline).

**Full-corpus update:** the complete mapping + decompile pass covers the whole
payload — **6,610/6,615 natives bound across 446/449 classes, 6,603 handlers
decompiled, 0 failed** (log `../../analysis/ghidra/native-handlers-final.jsonl`;
per-class stitched corpora `../../analysis/ghidra/handlers-stitched/` and
JNI-annotated `handlers-full-annotated/`, case-safe copies in `casesafe/` after
the 2026-10-15 recovery — see `../docs/PROGRESS.md`). This remains the source
of truth for upgrading the fully-native modules' behavior specs.

Notes:
- Static scans (name/sig pointer tables) found nothing — registration
  structures are heap-transient; the runtime bind log is the only clean
  mapping source.
- Full auto-analysis is impractical for this binary (6h AND 12h budgets
  consumed by protection-amplified analyzer loops); the stripped-analyzer
  run + per-address decompilation replaces it.
- j2cc control flow: indirect jumps + computed dispatches; per-function
  decompiles work for small handlers, giant functions (bootstrap, some
  clinit stubs) time out.
