# No Miss Delay (sixtwo.dX) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_dX.c` — 3 handlers (class-init `_dc712199d397ef37fc388e58624e7196`, `aqT(gH$th)`, `aqU`) + 21 continuation blocks, 0 unresolved table targets. Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff543xxxxx`/`6ffff544xxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/dX.java` — static seeds `ZznWO`/`lCCBd`; natives: class-init, `aqT(gH$th)` `@hG`, `aqU(MatchException)`.
- Structural spec: `analysis/specs/modules/dX.md`; registry row: `sixtwo.dX|No Miss Delay|Removes delay after miss|key=69|bind=-999`; category `gh.qBzlZ` = **Misc** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny`; pool re-resolution via `analysis/tools/resolve_pool_blob.py` (pool base RVA `0x301ee50`).
- Decrypted constants: **no `sixtwo.dX` entries in `analysis/decrypted/full-dump.jsonl`**.
- Neighbor runs pinned by class tokens: `sixtwo/dZ` `[0xc0d3]`, `sixtwo/ea` `[0xc196]`, `sixtwo/eb` `[0xc216]` (registry: dZ Fast Place, ea No Break Delay, eb Chest Stealer).

### Recoverability caveat

`aqT`'s body is decrypt → VM dispatch; dX's own run is 5 tokens and the recovered contract is a single-field reset. Neighbor attribution inside the shared window is fully resolved (below).

## Runtime model

- `dX extends gg`. Constructor `[decompiled dX.java:9-12]`:
  - `long var1 = ZznWO ^ 98986576443194L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)lCCBd, false, gh.qBzlZ))` — module id runtime-decrypted (registry: **69**), flag `false`, category **Misc** `[decompiled + registry]`.
- One `@hG` listener: `aqT(gH$th)` — **pre-motion client-tick** (phase verified `er.md`) `[decompiled + er.md]`.
- No settings, no `aaj()`/`YO()` overrides; `hF` bus registration via the inherited base hook `[decompiled]`.
- **Own pool run** `POOL[0xc091,0x42)` (window `[0xc072,0x20c]` starts at `class_token − 0x20`; per-token offsets):

| offset | token | resolution |
|---|---|---|
| `[0xc091]` | `sixtwo/dX` | self class name |
| `[0xc09b]` | `ZznWO` | seed field (stub-matched) |
| `[0xc0a1]` | `aqU` | rethrow name (stub-matched) |
| `[0xc0a5]` | `mixin/accessors/MinecraftAccessor` | generated accessor pair |
| `[0xc0c7]` | `setMissTime` | `Minecraft.missTime` writer |

  - `mixin/accessors/MinecraftAccessor#setMissTime` — a generated mixin accessor writing `Minecraft.missTime` (the client field that counts down after a swing that hit nothing, gating the next block-interaction attempt). Vanilla behavior: a miss sets `missTime = 10`, and while positive, left-click interactions are suppressed `[vanilla semantics, inferred]`.
  - Window prefix `[0xc072,0xc091)`: `KEfhe`, `XK`, `lrbSD`, `ZRHhR`, `aqQ`, `fkNRQ` — tail of dW (Freecam) run, obfuscation-only tokens `[slice]`.
  - **dZ (Fast Place) run** `[0xc0d3,0xc196)`: `dxMyh`, `reyBC`, `ard`, `sixtwo/gO$tl` (a `gO` tick-family event variant; `gO$tl`/`tm` phases per eW.md), `dpo`, `lCCBd` (dX's seed 2 — demonstrable cross-boundary scatter), `arb`, `whhdh`, `tfzyX`, `uafIf`, `UN`, `hSAvy`, `getRightClickDelay`, `vmwmS`, `setRightClickDelay`, `AKRql`, `GXLKq`, `jJpjG`, `arf`, `Wkwey`, `wJISY`, `RfFUJ`, `net/minecraft/class_1811` (`RangedWeaponItem`), `MCipD` — Fast Place's item-use-cooldown reset + bow-charge surface `[slice + registry order]`.
  - **ea (No Break Delay) run** `[0xc196,0xc216)`: `sixtwo/ea`, `xPCiw`, `are`, `arj`, `rzTvo`, `mixin/accessors/MultiPlayerGameModeAccessor`, `getDestroyDelay` `[0xc1e0]`, `setDestroyDelay` `[0xc1f0]`, `CORiV`, `ADNhJ` — the block-breaking destroy-delay accessor pair `[slice]`.
  - **eb (Chest Stealer) run** from `sixtwo/eb` `[0xc216]`: `pLesr`, `hXOHM`, `arr`, `ZDMzF`, `cJT`, `SuQfI`, `BALtD`, `net/minecraft/class_…` (cut at window end) `[slice]`.
  - Important negative: `MinecraftAccessor`+`setMissTime` sit **inside dX's run** (before `sixtwo/dZ`), so the miss-time reset is dX's, while `getDestroyDelay/setDestroyDelay` are ea's and `getRightClickDelay/setRightClickDelay` are dZ's — three distinct delay systems, three distinct modules `[decompiled slice + stub match]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_dc712199d397ef37fc388e58624e7196()V` | `[18d8320b0]` | `[0x226,0xd]` | class-init stub |
| `aqT(Lsixtwo/gH$th;)V` | `[18d82e2c0]` | `[0xc072,0x20c]` | pre-motion tick listener (whole behavior) |
| `aqU(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18d832020]` | — | identity rethrow |

- **class-init [18d8320b0]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck` (vtable `0x720`), dispatch `UNK_1822a7980[(cVar1=='\0')*8]` at `18d83218f`. No module behavior `[decompiled]`.
- **`aqT(Lsixtwo/gH$th;)V` [18d82e2c0]** — decrypts `POOL[0xc072,0x20c]`, `ExceptionCheck`, dispatch `UNK_1822a6890` at `18d82e381`. Virtualized body; only determinable action: write `Minecraft.missTime` via the mixin accessor — registry semantics "Removes delay after miss" imply resetting it to 0 every pre-motion tick while the module is enabled, so a missed swing never gates the next interaction `[slice + registry, inferred]`. Whether the write is unconditional or gated on a fresh miss is VM-resident `[uncertain]`.
- **`aqU(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18d832020]** — `return param_3;` identity rethrow `[decompiled]`.
- Continuation blocks (21): generic `ExceptionCheck` 2-way dispatchers; `IsInstanceOf` (`0x100`) at `18d8319e0`; `CallStaticObjectMethodA` (`0x3a0`) at `18d831caf`; `FUN_190ddfc90` variant decrypt re-entry at `18d831e37`; `ThrowNew` (`0x70`) thunks; `SetByteArrayRegion` (`0x680`) + `GetArrayLength` (`0x558`) with `length < 2` bound check (byte-array decrypt plumbing, `18d8342e2`/`18d8348a9`); one block with key cookie `0x7c025648a8fd` (`18d83243c`); `swi(3)` trampolines; bare `return`s. No dX-specific logic beyond the decrypt plumbing `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `dX.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)lCCBd, false, gh.qBzlZ))` `[decompiled dX.java:9-12]`.
- No `full-dump.jsonl` entries for dX (0 indy sites) — no hidden setting names recoverable `[decompiled absence]`.
- Consequence: unconditional fixed behavior while enabled — the rebuild may add a toggle for gating, but parity with Grim 4.4 is "always reset" `[inferred]`.

## Cross-module interplay

- Category peers (Misc, `gh.qBzlZ`): dZ Fast Place and ea No Break Delay are the sibling "delay" modules sharing this window; eb Chest Stealer follows.
- The three delay systems are independent client-side fields: `Minecraft.missTime` (dX), `Minecraft.itemUseCooldown` (dZ, via right-click-delay accessors), `MultiPlayerGameMode.destroyDelay` (ea). No cross-writes are evidenced between them `[slice]`.
- Interaction with combat modules: dX has no `hw$tv` attack listener, so it does not react to the attack event; the reset is tick-driven only `[decompiled stub]`.

## Unrecovered

1. **Module id 69** — registry-sourced; `(int)lCCBd` has no dump verification.
2. **Write value and gating** — "reset to 0" is inferred from the accessor name + registry description; the actual constant written and any conditional (e.g. only after an attack event) are VM-resident.
3. **`missTime` field id** — only the mixin accessor name is attested (no `field_XXXX` token in the run); the exact intermediary field is not citable from the slice.
4. **Ordering vs dZ/ea** — whether dX's tick also triggers when dZ/ea are active (ordering between the three `gH$th` listeners) is not determinable from this class.
5. **Flag `false` in `gf.aZL(69, false, gh.qBzlZ)`** — meaning unrecovered.

## Shared helpers cited (one line each)

- `gg`/`iS` — module base; `hF` bus registration on enable.
- `gH$th` — pre-motion tick event (phase verified `er.md`).
- `mixin/accessors/MinecraftAccessor` — generated accessor pair used by the client mixin layer (`setMissTime`).
- `gf`/`gh` — metadata + category enum (`qBzlZ` = Misc).
- Neighbors in window: dZ (Fast Place), ea (No Break Delay), eb (Chest Stealer) — surfaces above; see their own specs when written.

---
Confidence: MEDIUM-HIGH on the surface (clean 5-token run, unambiguous accessor, no neighbor confusion) and MEDIUM on behavior (the "0 every tick" model is inference from name + registry, not bytecode).