# Runtime tracing of the original client (Phase 2b)

Status: **the original client boots, joins the local server, and renders its own
HUD with a JVMTI MethodEntry/Exit agent attached.** Everything below is
reproducible from the (gitignored) `win/` environment.

## Launch chain (original distribution)

The product is a 3-stage chain — never a plain Fabric mod:

1. `bootstrap.jar` (rebuilt from `analysis/jars/bootstrap-raw/`, 21MB) — Fabric
   mod id `offline_client_bootstrap`, entrypoints
   `offline.bootstrap.OfflinePreLaunch` / `OfflineClientInit`, mixins
   `offline.accessors.mixins.json`, nested `META-INF/jars/protected-payload.jar`
   (identical to `payload-orig.jar`), embedded `offline/stage2-runtime.jar`
   (jose4j + `natives/{data,info,Loader,Platform}` = 32.5MB chacha-encrypted
   `j2cc_natives.dll`).
2. `stage2-runtime.jar` extracted to `tmpdir` by preLaunch; `main.Loader.init`
   loads the 32.5MB DLL, `native.Loader.init` (payload) loads the 292MB
   `j2cc_natives.dll` from `-Doffline.client.nativePath=`
   (`Z:\workspace\win\tmp\native\jna1.21.11`).
3. `OfflineClientInit.onInitializeClient` → `OfflineIdentityOverride.apply`
   (sets `sixtwo.ry` singleton via `dkB`, session fields in `sixtwo.mC`) →
   `sixtwo.rD.dmn()` (module manager) → Fabric API `ClientTickEvents` hook.

Running `payload-orig.jar` directly as a mod does nothing: its
`fabric.mod.json` has no entrypoints. Only the bootstrap activates the payload.

## Patches needed (see `win/patch/`)

- `PatchForWine.java` — optional under Wine 11 (needed only for Wine 9):
  `java.base` `--patch-module` dir. Wine 9.0's iphlpapi/RPC traps every
  `net.dll` NIC native (`NetworkInterface.getAll`, `boundInetAddress0`,
  `getByInetAddress0` → JVM crashes). Wine 11.0 (`/opt/wine-stable/bin/wine`,
  prefix `win/prefix11`) handles all of them — final launcher needs no patch.
- `PatchBootstrap.java` — removes the
  `offline.bootstrap.NativeOverrides.overrideAccountChecks(Class)` call from
  `OfflineIdentityOverride.apply`. That native is the cracker's account-check
  patch; its JNI symbol is exported by NO DLL we have (both DLLs export only
  `*Loader_{bootstrap,initClass}`, `chacha_block*`, `fuckMyShitUp`). Without
  the patch, `apply` throws `UnsatisfiedLinkError` and the client entrypoint
  dies before `postInit`.
- Fabric API (`fabric-api.jar`, Modrinth 0.141.6+1.21.11) must be in `mods/` —
  the bootstrap's `installClientTickInitializer` resolves
  `net.fabricmc.fabric.api.client.event.lifecycle.v1.ClientTickEvents$EndTick`.
- `options.txt`: `onboardAccessibility:false` (skip GUI onboarding).

## Launch

`win/mc/run-client.sh` (Wine 11, prefix11, Xvfb :99, llvmpipe):

```
java.exe -agentpath:Z:\workspace\win\hook.dll \
  -Doffline.client.nativePath=Z:\workspace\win\tmp\native\jna1.21.11 \
  -Djava.io.tmpdir=Z:\workspace\win\tmp \
  -Djava.security.egd=file:/Z:/workspace/win/entropy.bin \
  -Xmx3G -cp <client.jar;libraries...> net.fabricmc.loader.impl.launch.knot.KnotClient \
  --gameDir Z:\workspace\win\mc --version 1.21.11 --username OpenGrimRE \
  --quickPlayMultiplayer 127.0.0.1:25565
```

Vanilla server: tmux session `mc-server` (`win/mc/server`, online-mode=false).
GUI automation: `xdotool windowfocus <win>` FIRST (X focus is otherwise on
window 1 — mouse motion hovers but clicks/keys do nothing), then
`xdotool key/keyDown`.

## JVMTI agent (`win/hook.c` → `win/hook.dll`)

- MethodEntry/MethodExit **do fire for the payload's native methods** (they are
  JNA-registered JNI natives; the earlier "no events for natives" suspicion was
  wrong — the real reason the first runs showed nothing is that the payload
  classes never loaded without the bootstrap chain).
- `TRACE_CLASSES` (comma-separated class-name prefixes; boundary-aware:
  `sixtwo/` matches packages, `Init` matches exact default-package names).
  Default traces `java/net/` + sixtwo + the Java shell classes.
- `TRACE_FILE` (default `Z:\workspace\win\trace.jsonl`), `TRACE_MAX` events,
  line-buffered. MethodExit dumps primitive return values (`"r":…`) — exact
  numeric ground truth for helper math that is VM-virtualized statically.
- Overhead: ~20x (unfiltered callbacks); client boot ≈ 12-18 min with agent.

## Evidence captured (2026-10-11)

- `OpenGrimRE joined the game` (server log), original HUD rendering:
  `Grim Client · 1337UID · OpenGrimRE` watermark, Discord Activity widget,
  enabled-module toasts (Client Sounds fR, Discord Activity fO,
  No Protocol Disconnect fQ).
- `win/trace.jsonl`: 8.7M events; 2.4M sixtwo calls — module registry
  (`sixtwo/gb` dominant during init: `aYY`/`aYX`/`b`), then per-tick module
  handlers. Next: enable modules via ClickGUI (fX bind=344 RSHIFT) with a
  target and capture per-module handler traces into `analysis/traces/`.
