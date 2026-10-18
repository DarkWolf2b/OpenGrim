# Fast Place (sixtwo.dZ) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_dZ.c` — 11 JNI handlers, 109 continuation blocks, 0 unresolved table targets, **20+ jump tables missing from tables.json** (`0x122a38`, `0x2296ef8`–`0x2296f38`, `0x229d500`, `0x229dba8`–`0x229dbc8`, `0x229e898`–`0x229e918`, `0x229ebf8`, …) → behavior bodies VM-internal.
- Java skeleton: `analysis/decompiled/payload-decrypted/sixtwo/dZ.java` (literals folded) — full constructor/wiring; all behavior methods native.
- Structural spec: `analysis/specs/modules/dZ.md`; framework: `analysis/specs/00-framework.md`.
- Pool slice re-resolved byte-exact with `analysis/tools/resolve_pool_blob.py`: main `[0xc0b4,0x20e]`, clinit `[0x226,0xd]`, bootstrap `[0x857,0x26]`.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` — 163 `(IJ)I` ints for `sixtwo.dZ`; **no String entries** → `MCipD` suffix literal unrecovered.
- Mixins: `analysis/decompiled/bootstrap/mixin/accessors/MinecraftAccessor.java`, `MultiPlayerGameModeAccessor.java` (both named verbatim in dZ's pool slice).
- Yarn: `analysis/jars/yarn-1.21.11+build.6.tiny`.

Tags: `[decompiled]`, `[slice]`, `[inferred]`, `[uncertain]`.

## Runtime model

### Identity and lifecycle

- Registry: `sixtwo.dZ|Fast Place|Removes right click delay|key=62|bind=-999` `[registry]`; id **62**; category `gh.qBzlZ` = **Misc** `[decompiled]`.
- Key-mix seed: `reyBC ^ 126376531928876L` `[decompiled]`.
- State: single `boolean dxMyh` (role unrecovered — likely an applied-latch) `[decompiled, uncertain]`.
- Enable = base `aaj()` path; disable = **`YO()` override** `[18d7c6430]` (base = `hF.bdM(this)` unregister) `[decompiled]`.

### Settings tree (byte-exact)

- **`Blocks`** (`cJ` `Wkwey`): `.WE(true)` `[decompiled]`.
- **`Items`** (`cJ` `RfFUJ`): `.WE(false)` `[decompiled]`.
- **`Only For Valid Blocks`** (`cJ` `whhdh`): `.WE(false)` `[decompiled]`.
- **`Valid Blocks`** (`cK` `tfzyX`): `.WM(jc.WnbNG)` — item-filter setting, no default item declared (empty default) `[decompiled]`.
- **`Right Click Delay`** (`cA` `uafIf`): `.UG(1.0).UE(0.0).UF(4.0).UI(0.0, 0.0).UH(MCipD)` — step 1.0, min 0.0, max **4.0**, default **0.0**; suffix `MCipD` unrecovered (vanilla `rightClickDelay` is 4 ticks ⇒ suffix almost certainly `" ticks"`, unverified) `[decompiled, uncertain]`.
- **`Only If You Can Place`** (`cJ` `AKRql`): `.WE(false)` `[decompiled]`.
- **`Only For Slots`** (`cJ` `hSAvy`): `.WE(false)` `[decompiled]`.
- **`Slots`** (`cz` `vmwmS`) — action/slot-selection setting; `cz` holds a `Set<Integer>` of slot codes (`cz.UA(Integer)` adds) `[decompiled contract]`.
- Visibility: `this.tfzyX.Vf(this.whhdh::WF)` — **`Valid Blocks` UI is shown/hidden by `Only For Valid Blocks`** `[decompiled]`.

### Pool surface — the decisive evidence

dZ's own region of `[0xc0b4,0x20e]` carries, interleaved with its fields:

- `mixin/accessors/MinecraftAccessor` with **`getRightClickDelay` / `setRightClickDelay` / `setMissTime`** — the accessor mixin on `net.minecraft.client.Minecraft` (`class_310`): `field_1752 rightClickDelay` get/set and `field_1771 missTime` set `[slice + MinecraftAccessor.java]`.
- `mixin/accessors/MultiPlayerGameModeAccessor` with **`getDestroyDelay` / `setDestroyDelay`** — `field_3716 destroyDelay` on `MultiPlayerGameMode` (`class_636`) `[slice + MultiPlayerGameModeAccessor.java]`.
- `sixtwo/gO$tl | dpo` — the item-use event payload (`dpo()` returns the `ItemStack`) `[slice]`.
- `net/minecraft/class_1811` = **`RangedWeaponItem`** `[slice + yarn]` — a ranged-weapon special case; role unrecovered (plausible: skip/bypass for bow/crossbow draw) `[uncertain]`.

Neighbor bleed (attributed, do not assign to dZ): `sixtwo/ea` (+ `arj`/`ark`/`arl`/`arr` = ea's methods, No Break Delay), `sixtwo/eb` (+ `pLesr`/`hXOHM`, Chest Stealer), `net/minecraft/class_476 GenericContainerScreen | class_495 ShulkerBoxScreen | method_25440 getTitle | net/minecraft/class_2371 DefaultedList` — eb's chest-scanning surface `[slice + registry]`.

### Shared helpers (one line each)

- `cK` — item-filter setting wrapper (as in `fy.md`); `WM(jc.WnbNG)` filter set.
- `cA`/`cJ`/`cz` — numeric / boolean / slot-selection setting wrappers (`cz` = `Set<Integer>` slots with `UA(Integer)`, callback via `.Vf`) `[decompiled contract]`.
- `gO$tm` — cancellable pre-use event (`Minecraft.startUseItem` `method_1583` PRE, fired by `ClientEventBridgeMixin`) `[decompiled mixin]`.
- `gO$tl` — item-use event payload `(ItemStack, Hand, ActionResult)` (`dpo`/`dpp`/`dpq` accessors); dispatch site is native-only (no bootstrap mixin constructs it) `[decompiled contract, uncertain dispatch]`.
- `gH$th` — client-tick event (`Minecraft.tick` pre) `[decompiled mixin]`.

## Per-handler semantics

### Machinery

- **`_2f96000a03dc0620ecce8d659f97acb2()V` [18d7c68e0]** `[slice 0x226,0xd]` — clinit stub `[decompiled]`.
- **`ard(MatchException)MatchException` [18d7f32b0]** — identity rethrow `[decompiled]`.
- **`arf(IJ)I` [18d81f420]** — int-decrypt kernel `[decompiled machinery]`.
- **`are([B)Ljava/lang/String;` [18d7f3340]** — byte-array decrypt trampoline `[decompiled stub]`.
- **`arg(Lookup;MutableCallSite;String;[Object;)I` [18d82a5a0]** — MutableCallSite re-bootstrap `[decompiled stub]`.
- **`arh(Lookup;String;MethodType;)CallSite` [18d82b5b0]** `[slice 0x857,0x26]` — indy bootstrap `[decompiled machinery]`.

### Behavior handlers (bodies VM-internal)

- **`arc(gH$th)V [18d7edfe0]`** `[slice 0xc0b4,0x20e]` — `@hG` client-tick listener. Natural role: while enabled (and per the Blocks/Items/Only-For gates), write `Minecraft.rightClickDelay = Right Click Delay` (default 0 = no delay) each tick via `MinecraftAccessor.setRightClickDelay`, and possibly also reset `missTime`/`destroyDelay` `[inferred]`. The exact write cadence (every tick vs on use) and which of the three accessors is used per gate combination are VM-internal `[uncertain]`.
- **`aqZ(gO$tm)V [18d7c66f0]`** — `@hG` **cancellable pre-use listener** (`startUseItem` PRE). Natural role: on use, zero `rightClickDelay` immediately (so the next right-click fires without vanilla's 4-tick wait) and/or cancel when `Only If You Can Place` fails `[inferred, uncertain]`. Note the handler has **no pool decrypt of its own** — it dispatches on shared state only.
- **`ara(gO$tl)V [18d7e0c40]`** `[slice 0xc0b4,0x20e]` — `@hG` item-use event listener `(ItemStack, Hand, ActionResult)`. Natural role: post-use adjustment keyed on the used item — e.g. the `Items` gate and the `class_1811 RangedWeaponItem` special case observed in the slice `[inferred, uncertain]`.
- **`arb(Item)Z [18d7e49e0]`** `[slice 0xc0b4,0x20e]` — native validity predicate `(Item) → boolean`: the **`Valid Blocks`** filter used when `Only For Valid Blocks` is on (checks the item against the `cK` set) `[inferred]`.
- **`YO()V [18d7c6430]`** `[slice 0x3806,0xbf]` — disable override; slice = shared module-base tick-gate tokens (`gg`/`gc`/`gd`/`mG`); behavior beyond listener removal VM-internal `[inferred, uncertain]`.

## Settings → behavior mapping

| setting | wrapper | decrypted name | default(s) | behavior link |
|---|---|---|---|---|
| toggle | `cJ` `Wkwey` | **"Blocks"** | **true** | apply delay removal to block interactions `[inferred]` |
| toggle | `cJ` `RfFUJ` | **"Items"** | **false** | apply to item uses (`gO$tl` path; `class_1811 RangedWeaponItem` token suggests special handling) `[inferred, uncertain]` |
| toggle | `cJ` `whhdh` | **"Only For Valid Blocks"** | **false** | gates use of `arb(Item)` filter; also toggles `Valid Blocks` visibility `[decompiled wiring]` |
| items | `cK` `tfzyX` | **"Valid Blocks"** | no default; filter `jc.WnbNG` | whitelist consumed by `arb(Item)Z` `[inferred]` |
| delay | `cA` `uafIf` | **"Right Click Delay"** | step 1.0, min 0.0, max **4.0**, default **0.0**, suffix unrecovered (likely `" ticks"`) | the value written to `Minecraft.field_1752 rightClickDelay` (vanilla 4) `[inferred, uncertain]` |
| toggle | `cJ` `AKRql` | **"Only If You Can Place"** | **false** | only zero the delay when the targeted placement would succeed `[inferred, uncertain]` |
| toggle | `cJ` `hSAvy` | **"Only For Slots"** | **false** | restrict effect to selected hotbar slots `[inferred, uncertain]` |
| slots | `cz` `vmwmS` | **"Slots"** | — | `Set<Integer>` of slot codes consumed with `Only For Slots` `[decompiled contract, inferred]` |

## Unrecovered / uncertain

1. **All behavior bytecode** — 11 handlers → VM; 109 fragments unstitchable. In particular no click-timing arithmetic survives statically (the module is purely accessor-driven, but the exact per-tick write policy is unknown).
2. **`MCipD` literal** (Right Click Delay suffix) — not in full-dump.
3. **Role of `class_1811 RangedWeaponItem`** — gate exception, trigger condition, or bleed-adjacent helper `[uncertain]`.
4. **Whether `setMissTime` / `destroyDelay` are touched by dZ itself** — both accessor names sit inside dZ's own slice window, but `ea` (No Break Delay) region begins at the window edge; the destroyDelay pair could serve ea `[uncertain]`.
5. **`dxMyh` boolean role** and the exact division between `aqZ` (pre-use) and `arc` (tick) writes.
6. **`gO$tl` dispatch site** — the event class exists and dZ listens to it, but no bootstrap mixin constructs it; produced by the native layer only.
7. **`Only If You Can Place` check method** (raycast/shape check vs ActionResult inspection).