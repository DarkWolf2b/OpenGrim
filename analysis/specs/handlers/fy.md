# Totem Refill (sixtwo.fy) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fy.c` — 11 JNI handlers, 121 continuation blocks, 0 unresolved table targets, **20+ jump tables missing from tables.json** (`0x132e68`, `0x144c38`, `0x170c0`, `0x19c088`, `0x1a625b0`, `0x1a62dd8`–`0x1a62e58`, `0x1a63428`–`0x1a639e8`, …) → behavior bodies VM-internal.
- Java skeleton: `analysis/decompiled/payload-decrypted/sixtwo/fy.java` (Vineflower, literals folded) — full constructor and settings wiring; all behavior methods native.
- Structural spec: `analysis/specs/modules/fy.md`; framework: `analysis/specs/00-framework.md`.
- Pool slice re-resolved byte-exact with `analysis/tools/resolve_pool_blob.py`: main `[0x13f80,0x322]` — a **shared region** interleaving `fy`, `fz`, `fA`, `fB`, `fC` entries; fL-style single-class attribution is not possible for this window.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` — 89 `(IJ)I` ints + 2 `(IJ)Ljava/lang/String;` strings (`' slot'`, `' ticks'`) for `sixtwo.fy`.
- Yarn: `analysis/jars/yarn-1.21.11+build.6.tiny`.

Tags: `[decompiled]`, `[slice]`, `[inferred]`, `[uncertain]`.

## Runtime model

### Identity and lifecycle

- Registry: `sixtwo.fy|Totem Refill|Automatically refills totems|key=32|bind=-999` `[registry]`; id **32**; category `gh.xwjCw` = **Combat** `[decompiled]`.
- Key-mix seed: `omtcl ^ 123396450686666L` `[decompiled]`.
- State: `mT hSWnq = mT.cpz()` ms stopwatch `[decompiled]`. No lists/maps — the module is state-light; inventory scanning is delegated to the shared slot scanners.
- No `aaj()` enable override — only base enable path; no `YO()` override either (class declares neither; both lifecycle paths are base-class) `[decompiled]`.

### Settings tree (byte-exact)

- **`Totem Item`** (`cK` `jlVat`): `.WM(jc.WnbNG).WN(Items.TOTEM_OF_UNDYING).WT()` — an item-choice setting: filter set = `jc.WnbNG` (a `Set<Item>` built by native `jc.bzM()` — contents unrecovered), default **`Items.TOTEM_OF_UNDYING`**, terminated with `.WT()` `[decompiled]`.
- **`Totem Slot`** (`cC` `yhrdq`): `.Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(" slot")` — step 1.0, min 1.0, max 9.0, default 1.0, suffix **" slot"** (full-dump `aRP(30291,…)` = `' slot'`) `[decompiled]`.
- **`Mode`** (`ct` `HJKFq`) with options **"Normal"** (`cu` `hyyHb`) and **"Legit"** (`cu` `GffeC`) `[decompiled]`.
- **`Replace Current Item`** (`cJ` `VcMsR`): `.WE(false)` `[decompiled]`.
- **`Delay`** (`cA` `BpvnW`): `.UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(" ticks")` — step 1.0, min 0.0, max 20.0, default **0.0**, suffix **" ticks"** (full-dump `aRP(18038,…)` = `' ticks'`) `[decompiled]`.

### Pool surface

fY's own region in `[0x13f80,0x322]` contains **no `net/minecraft/…` tokens at all** — only its own field/method names (`sixtwo/fy | omtcl | aRL | yhrdq | jlVat | VcMsR | hSWnq | BpvnW | HJKFq | TtVtG | aRK | Egkrb | BkDbz | aRN | aRM | YfgMR | vfJqK | CHWJb | aRQ`) `[slice]`. The MC tokens in the shared window belong to neighbors:

- `method_5809 isOnFire` and `method_49107 getLastAttacker` sit between **fz's** fields (`EiuwG`, `uYazo`, `ZGNVq`, `QrNyB`) — attributed to `fz` (Auto Jump Reset's "Cancel In Fire" / "Only From Players"), not fy `[slice + fz.java field names]`.
- `method_5771 isInLava`, `mixin/accessors/ClientboundSetEntityMotionPacketAccessor`, `method_73085 getVelocity`, `setMovement`, `(DDI)D`, `(Lnet/minecraft/class_2743;DDD)V` — `fC` (Velocity) region `[slice + fC.java]`.
- `sixtwo/fA | pJNbd | aSb …` (`fA` = Potion Refill), `sixtwo/fB …` (Auto Shield Break), `sixtwo/fC | sLnpv | aSz` — pure neighbor bleed `[slice]`.
- `(Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture;` — a scheduled-completion descriptor at the region edge; owner unrecovered (scheduler-family helper, cf. `iU` scheduler) `[slice, uncertain]`.

### Shared helpers (one line each)

- `cK` — item-set setting wrapper (`WM(Set<Item>)` filter, `WN(Item)` default, `WT()` finish; internal `LinkedHashSet<Item>` ×2, `int mnYah`, `boolean nppnu` — all native accessors) `[decompiled contract]`.
- `cC` — float slider (framework: `Vw` min, `Vx` max, `Vy` step, `VA` default, `Vz` suffix) `[decompiled]`.
- `mT` — ms stopwatch (as in `fL.md`) `[decompiled]`.
- `jc` — item/enchant utility registry; `WnbNG`/`GjreY`/`FFgfM` = `Set<Item>` groups built by native code `[decompiled contract]`.

## Per-handler semantics

### Machinery

- **`_711a693dca6115e72fb85ef41f7a4485()V` [18b0f9740]** `[slice 0x226,0xd]` — clinit stub (`"ang/String;" + "<"`) `[decompiled]`.
- **`aRL(MatchException)MatchException` [18b1163c0]** — identity rethrow `[decompiled]`.
- **`aRN(IJ)Ljava/lang/String;` [18b13df80] / `aRQ(IJ)I` [18b1489c0]** — string/int constant-decrypt kernels (full-dump `aRP`/`aRS` entries) `[decompiled machinery]`.
- **`aRM([B)Ljava/lang/String;` [18b116450]** — byte-array decrypt trampoline `[decompiled stub]`.
- **`aRO(Lookup;MutableCallSite;String;[Object;)Object` [18b145010] / `aRR(…)I` [18b153f00]** — MutableCallSite re-bootstraps `[decompiled stubs]`.
- **`aRP(Lookup;String;MethodType;)CallSite` [18b145f00] / `aRS(…)CallSite` [18b154f10]** — indy bootstraps (String/int sites) `[decompiled machinery]`.

### Behavior handlers

- **`aRJ(gH$th)V [18b0efa30]`** `[slice 0x13f80,0x322]` — `@hG` **client-tick listener** (`gH$th` = `Minecraft.tick` pre). Natural role: per-tick inventory audit — count totems matching the `Totem Item` setting; when below threshold, move totems into `Totem Slot` (and per `Replace Current Item` also swap the offhand/current item), gated by `Delay` ticks via `hSWnq` `[inferred]`. Threshold/count logic, container access and movement method (click-window packets vs direct inventory mutation) are VM-internal `[uncertain]`.
- **`aRK()Item [18b0f8e10]`** — public native `Item aRK()` — the **configured item getter**: reads the `Totem Item` `cK` setting and returns the selected `Item` (default `Items.TOTEM_OF_UNDYING`). Public visibility implies cross-module consumers (sibling `fx` Auto Totem is the natural one), though no call site is visible in the decompiled tree `[decompiled signature, inferred role]`.

That is the entire declared behavioral surface — **fy is nearly fully virtualized**: 2 of 11 handlers carry module behavior, and neither body is recoverable.

## Settings → behavior mapping

| setting | wrapper | decrypted name | default(s) | behavior link |
|---|---|---|---|---|
| item | `cK` `jlVat` | **"Totem Item"** | default **`Items.TOTEM_OF_UNDYING`**, filter `jc.WnbNG` | the item counted/refilled; exposed via `aRK()` `[decompiled, inferred role]` |
| slot | `cC` `yhrdq` | **"Totem Slot"** | step 1.0, min **1.0**, max **9.0**, default **1.0**, suffix `" slot"` | destination hotbar slot for refills (1–9 = hotbar indices) `[inferred]` |
| mode group | `ct` `HJKFq` | **"Mode"** | — | Normal/Legit — Legit presumably uses slower/window-based inventory interaction; difference unrecovered `[inferred, uncertain]` |
| toggle | `cJ` `VcMsR` | **"Replace Current Item"** | **false** | when true, may evict the item currently in the target slot (or offhand) `[inferred, uncertain]` |
| delay | `cA` `BpvnW` | **"Delay"** | step 1.0, 0–20, default **0.0**, suffix `" ticks"` | refill cooldown in ticks; paired with `hSWnq` stopwatch `[inferred, uncertain]` |

## Unrecovered / uncertain

1. **All behavior bytecode.** Both behavioral handlers are VM dispatchers; 121 fragments unstitchable (missing jump tables). No inventory arithmetic survives statically.
2. **Refill trigger condition** — low-totem-count threshold (count value), whether it triggers on totem *consumption* (undying event) or purely on count audit.
3. **Inventory interaction mechanism** — window click packets (`ClickSlotC2SPacket`), swap packets, or direct `PlayerInventory` mutation; and whether scanning covers main inventory + containers.
4. **Mode Normal vs Legit** behavioral difference.
5. **`Replace Current Item` exact semantics** (evict current slot item vs offhand swap).
6. **`Delay` unit interaction** — `cA` stores doubles but the suffix is ticks; the ms stopwatch `hSWnq` coexisting with a ticks setting suggests the VM multiplies by 50 (tick = 50 ms) — **not recoverable, do not encode**.
7. **Consumers of `aRK()`** — no visible call sites in the decompiled tree; assumed cross-module getter.
8. **`jc.WnbNG` contents** (the `cK` filter set) — built by native `jc.bzM()`; not statically decodable.