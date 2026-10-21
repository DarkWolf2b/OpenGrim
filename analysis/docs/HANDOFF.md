# Cloud agent handoff — OpenGrim rebuild

This file IS the handoff brief. Read `PROGRESS.md` first — it has the full state.

## Toolchain install (cloud VM, first-time setup)
1. **JDK**: needs Java 21+ (JDK 26 tested locally). Check `java -version`; if
   missing: `sudo apt-get install -y openjdk-21-jdk` (or mise: `mise use java@21`)
2. **Ghidra 12.1.4**: download from https://github.com/NationalSecurityAgency/ghidra/releases
   (`ghidra_12.1.4_PUBLIC_<date>.zip`), unzip anywhere, then
   `export GHIDRA_INSTALL_DIR=/path/to/ghidra_12.1.4_PUBLIC`
   (the analyst's copy is at `binaries/ghidra/ghidra_12.1.4_PUBLIC`, excluded
   from git — downloading fresh is simpler)
3. **REA**: requires Node ≥24.11 (if `node -v` is older, install via
   `mise use node@26` or nvm, and use that node's npx). Then:
   `npx rea-agents@latest setup --client cursor --yes` with
   `GHIDRA_INSTALL_DIR` already exported. Verify with `rea mcp doctor`
   (expect `healthy: true`, 139 tools; a "host omarchy unsupported" warning is
   cosmetic and won't appear in the cloud VM)
4. **Java decompilers** (for remap + re-decompile work):
   Vineflower 1.11.1: https://github.com/Vineflower/vineflower/releases
   CFR 0.152: https://github.com/leibnitz27/cfr/releases/download/0.152/cfr-0.152.jar
   Use per-class timeouts (`timeout 60 java -jar ...`) — never a single
   unbounded run over the whole tree; that's what stalled the previous 4.0 attempt
5. **Fabric tools**: Yarn mappings `1.21.11+build.6` and tiny-remapper from
   https://maven.fabricmc.net/ (see work order step 1)
6. **Wine (optional, only for native decryptor runs)**: `sudo apt-get install -y wine64`;
   run the decryptor JVM inside it with no network. Cloud VMs are already
   isolated, so no bwrap needed there

## Mission
1:1 rebuild of "Grim 4.4" (a Minecraft Fabric 1.21.11 utility/cheat client) with
full parity of all 163 registered modules. Static analysis only — never run the
game. Translate decompiled behavior 1:1; original code/assets may be reused at
the owner's direction.

## What already exists (in this repo)
- `../../analysis/decompiled/stage2/`, `bootstrap/`, `payload/`, `payload-cfr/` — 100%
  decompiled Java sources (1111/1111 payload classes; `payload-cfr/` holds CFR
  fallbacks for classes Vineflower failed on; prefer CFR file when both exist
  for a class and the Vineflower file contains "Couldn't be decompiled")
- `../../analysis/jars/bootstrap-raw/offline/features/metadata.txt` — 163-module
  registry: `sixtwo.fF|Trigger Bot|<description>|key=N|bind=N`. Module ids map
  1:1 to payload classes (`sixtwo.fF` → `sixtwo/fF.java`)
- `PROGRESS.md` — environment, artifact map, malware triage (all clean so far),
  protection analysis, decisions log

## Known protection layers in the payload (do NOT rediscover manually)
1. Name obfuscation + Minecraft intermediary names (`class_310`, `class_243`…)
2. Encrypted constant pool implemented NATIVELY: literals are invokedynamic
   calls to per-class native bootstraps (`aUM`/`aUJ`/`aUI`/`aUL`); `<clinit>`
   calls `native/Loader.doInit(Class)` + native stub — pools/keys come from the
   292MB `j2cc_natives.dll`. The DLL is hosted as a release asset on this repo:
   `gh release download native-bins -p jna1.21.11 -R sequence3260/OpenGrim`
   (SHA-256 `9403e1fdd549fb34076c62d0cf92cfb4f23d99dc7e8ff5b6f9b4579c7bb72b2d`)
3. j2cc-compiled native method bodies (`private static native void _<hash>()`)

## Work order for you
1. **Toolchain**: JDK 21+ (26 tested), Fabric toolchain; download
   - Yarn mappings `1.21.11+build.6` (maven.fabricmc.net, yarn v2 tiny file)
   - Fabric tiny-remapper (maven.fabricmc.net) → remap
     `../../analysis/jars/payload-raw` classes intermediary→named, re-decompile
     (Vineflower 1.11.1 + CFR 0.152 fallback, per-class timeouts) → readable
     Minecraft references in all sources
2. **Module inventory**: for each of the 163 registry entries, map its class,
   read the deobfuscated logic, and write a behavior spec (settings, ranges,
   packets sent, render hooks). This spec — not the code — is the porting source.
3. **Native decryption (optional, best-effort)**: recovering encrypted literals
   needs the 292MB DLL — either Wine + sandboxed JVM running ONLY
   `Loader.doInit` + bootstrap decryptors per class (bwrap/network-off), or
   Ghidra emulation of the native bootstraps. Skip if blocked; behavior specs
   can be written from structure + remapped references + registry descriptions.
4. **Rebuild**: scaffold Fabric 1.21.11 mod (Yarn mappings), `All Rights Reserved`,
   package `dev.opengrim`; implement module framework + port modules against
   the spec list; track parity in a `PARITY.md` checklist of all 163 modules.

## Hard rules
- All Rights Reserved. 1:1 translation; original code/assets may be reused at
  the owner's direction.
- Never execute the game or the payload; any native decryptor run must be in a
  sandbox (bwrap, no network) and touch only the decryptor path.
- Malware stance: all triage so far found NO malware (see PROGRESS.md); keep
  flagging anything network/persistence-related in natives.
- The DLL and the original archives stay out of git (GitHub 100MB blob limit);
  the DLL is attached to the `native-bins` release for cloud access. Native
  analysis also needs Wine (for decryptor runs) or Ghidra, neither preinstalled.

## Environment notes (analyst machine, not cloud)
- REA 6.3.0 MCP + Ghidra 12.1.4 at `binaries/ghidra/ghidra_12.1.4_PUBLIC`
- Vineflower `~/.local/tools/vineflower-1.11.1.jar`, CFR `~/.local/tools/cfr-0.152.jar`
- Local Node 26.8.1 at `~/.local/opt/node-v26.8.1-linux-x64/bin` (for REA MCP)
- Archive credential for `Grim 4.4 Binary.zip`: recovered locally (redacted from the public ledger)