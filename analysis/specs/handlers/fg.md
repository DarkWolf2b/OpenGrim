# Target Lock (sixtwo.fg) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_fg.c` — 14 stitched handlers, 143 continuation blocks, 113 `halt_baddata()`, 1 `rdtsc` (inside the `aJc` decryptor — noise).
- Structural: `analysis/specs/modules/fg.md`; registry `sixtwo.fg|Target Lock|Allows to lock on a single target|key=136|bind=-999`.
- Java: `analysis/decompiled/payload-decrypted/sixtwo/fg.java` — settings names are plain char-array literals, fully decoded.
- Yarn: class_1297=Entity, class_1657=PlayerEntity, class_1309=LivingEntity; method_24828=Entity.isOnGround(), method_6128=LivingEntity.isGliding(), method_6043=LivingEntity.jump().

## Runtime model

Module extends `gg`, key 136, category `gh.xwjCw`. Small module: it holds ONE locked target and exposes it to the rest of the payload; the kill/attack chain lives in other modules that query it.

State (`fg.java`):
- `jhTSv` — `PlayerEntity` locked-target field (the module's product).
- Static plumbing: `rThNx`, `pUjym`, `OHbUD`, `sgzRQ`, `dwOGE`, `ITvOw`, `pvmGK`, `oOvPJ`.

Public surface (visible in both Java and native handler list):
- `aIT(Entity)→Z` — target validity predicate (public; used by the lock loop and presumably callable from other modules).
- `aIU()→PlayerEntity` — locked-target getter. Its handler [18ca36650] has NO pool preamble (pure VM dispatch) — no new pool vocabulary, pure field read.
- `aIV([I)V` (static setter) [18ca36850] / `aIW()→[I` (static getter) [18ca369d0] — an int-array shared state. Consistent with publishing locked-target identifiers (entity ids) to sibling modules; exact element meaning unrecovered. Both share the module window.

Pool window: POOL[0x8e00,0x18d] (used by `aIS`, `aIT`, `aIV`, `aIW`). Trailing token list truncated after `ne`.

## Per-handler semantics

Trivial (group): `aIX` (MatchException identity rethrow), `aIY([B)→String` (string decoder), `aIZ(IJ)→String` / `aJc(IJ)→I` (seeded constant decryptors), `aJa`/`aJd` (MutableCallSite relays), `aJb`/`aJe` (CallSite bootstraps), `_c2d16b45…` clinit [18ca17400] over POOL[0x226,0xd] (clinit infra).

- `aIS(gA)` [18c9ecc70] — input-event handler. `gA` is the payload's input event (same event class fG W-Tap listens on). Semantics (from window + settings): watch the `Lock Keybind` (`vJxZS`, `cD .VO(-999)` — cD keybind-style setting) and on press run target selection: enumerate entities within `Select Range`, apply `aIT` validation, store the winner in `jhTSv`. The window contains the framework module-registry vocabulary used for cross-module enumeration: `()Lsixtwo/ge;` (manager singleton), `aZx (Ljava/lang/Class;)Lsixtwo/gg;` (module-by-class lookup), `sixtwo/cM` + `NAnkv` + `[Lsixtwo/cM;` + `xFxGY ()[Lsixtwo/cM;` (module-entry array + accessor) — the scan iterates the module/registry entries rather than (only) the world entity list; also references modules `sixtwo/fr` (with its `YO` lifecycle), `sixtwo/dA`, `sixtwo/ee` and child-setting wrapper `Lsixtwo/cu;` (`thWij`) — consistent with reading other modules' states during selection. Entity state checks in-window: `method_24828` isOnGround, `method_6128` isGliding, `method_6043` jump, `()Lnet/minecraft/class_1309;` (LivingEntity-returning getter, alias `aOQ`).
- `aIT(Entity)→Z` [18ca073a0] — validation predicate over the same window. Provable ingredients: class check toward PlayerEntity (module imports `net.minecraft.entity.player.PlayerEntity`; `jhTSv` is a PlayerEntity), plus the isOnGround/isGliding family in-window. Attribution of those three LivingEntity methods to `aIT` vs a window-sharing sibling is uncertain (below).
- `aIU()→PlayerEntity` [18ca36650] — locked-target getter; the integration point other modules consume (this is how "lock on a single target" reaches attack modules).

## Settings → behavior mapping

Decoded from `payload-decrypted/sixtwo/fg.java`:

- `vJxZS` = "Lock Keybind" — `cD .VO(-999)` (default unbound).
- `bkcAZ` = "Select Range" — `cC .Vy(0.1).Vw(3.0).Vx(10.0).VA(5.0).Vz(" blocks")` → step 0.1, min 3.0, max 10.0, default 5.0, suffix " blocks".
- `VEiCg` = "Select Through Walls" — `cJ .WE(false)`; when off, candidates without line-of-sight are rejected during selection.

## Unrecovered / uncertain

- **Selection order/tie-break**: how candidates within Select Range are ranked (nearest? crosshair angle?) is VM-hidden.
- **`aIT` condition set**: the exact predicate (player-only? alive? not-self? isOnGround/isGliding relevance) is unrecovered; isGliding/jump/isOnGround tokens may belong to a neighboring module sharing POOL[0x8e00,0x18d].
- **`aIV`/`aIW` int-array meaning**: element layout (entity id? slot indices?) unrecovered; the static setter/getter pattern implies cross-module broadcast.
- **Lock release**: no token or handler clearly handles unlock (keybind release, target death, range exit) — the reset path is VM-hidden.
- **Cross-module refs** in-window (`sixtwo/fr`, `sixtwo/dA`, `sixtwo/ee`, `cM` registry): which of these are actually consulted by fg vs belong to a window-sharing sibling is per-group uncertain.
- Pool-only/unattributed tokens: `RnPb`, `Sp`, `RK`, `Ss`, `orwtF`, `bag`, `uVCNi`, `RJ`, `dzTse`, `cbCbj`, `WCwDP`, `MENWL`, `NevtZ`, `wsPfp`, `arS`, `bab`, `aki`, `bbQ`, `bbP`, `pWbaz`, `bzx`, `srWas`, `RliRe`, `MQFiv`, `ne`.