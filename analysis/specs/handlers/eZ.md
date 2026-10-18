# Auto Double Hand (sixtwo.eZ) — handler-derived behavior spec

Class: `sixtwo/eZ` · display name **Auto Double Hand** · registry description
"Automatically does double hand" · primary key 30, active bind -999 (unbound)
[registry]. Superclass: `gg` (module base). Constructed via
`super(gf.aZL(30, false, gh.xwjCw))` (module id 30; category `gh.xwjCw`).

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_eZ.c` — **17 native handlers** +
   **173 continuation blocks**, 0 unresolved table targets; **137/173 blocks end in
   `halt_baddata()`**. Behavior bodies live in the embedded bytecode VM.
   - JNI-op census: generic VM opcode glue only (`ExceptionCheck`,
     `ExceptionOccurred`, `IsInstanceOf`, `ThrowNew`, `GetObjectField`,
     `GetArrayLength`, `AllocObject`, `CallVoidMethodA`, critical-array pairs).
     **No `rdtsc`**.
2. `analysis/decompiled/payload-named/sixtwo/eZ.java` — complete Java skeleton:
   7 settings (item selector, 5 toggles, 1 slider), 1 boolean state field, native
   declarations; imports `EndCrystalEntity`, `PlayerEntity`, `Item`, `Items`.
3. Supporting payload types: `gL`/`gL$tk` — **packet event**: `gL` wraps a
   `Packet<?>` (`bcf()`), `gL$tk` additionally carries the `PacketListener`
   (`dpn()`) — the receive-direction packet hook. `jj` — native-only helper class
   (no decompile exists): `jj.bCL(class_1309, class_243)F` and
   `jj.bBt(class_1309, F)Z` appear as pool tokens.
4. Yarn mapping — eZ's pool window resolves to a coherent MC surface:
   - `class_2663` = **`EntityStatusS2CPacket`** (s2c/play)
   - `method_11470` = **`EntityStatusS2CPacket.getStatus() → byte`**
   - `method_11469` = **`EntityStatusS2CPacket.getEntity(World) → Entity`**
   - `field_8288` = **`Items.TOTEM_OF_UNDYING`**
   - `method_8390` = **`World.getEntitiesByClass(Class, Box, Predicate) → List`**
   - `comp_2449` = a record component `value : double` (owner not in this window)
   - `findFirst` / `orElse` — `Stream` inventory-search pipeline
   - `class_6880` = `RegistryEntry` (in a truncated signature `…necraft/class_6880;)V`
     — a void method ending in a `RegistryEntry` param, owner unrecovered)
5. Decrypted constants (`analysis/decrypted/full-dump.jsonl`, class `sixtwo.eZ`):
   module id 30; all 7 setting labels reconstruct exactly from the char values
   (space count 11 = exact match across the 7 labels); the `Totem Slot` suffix
   (`AMrtH`, static String) is decrypted natively and is NOT in the dump.

## Runtime model

- **Pool windows** (global pool at image `+0x301ee50`):
  - `<clinit>` [18b6f14c0]: `POOL[0x226,0xd]` — decrypt-bootstrap infra.
  - **Shared behavior core** `POOL[0x1063a,0x2bf]` — used by **9 handlers**
    (`aFL, aFN, aFO, aFP, aFQ, aFR, aFS, aFT, aFU`; `aFV` has no window and is
    fully decompiled). fB-token group: `sixtwo/eZ | GGpPC | aFW | pLxzJ | XxhAs |
    IlOSr | aFO | WP | wTnCk | findFirst | field_8288 | aFP | lBfId | orElse |
    IwDsS | net/minecraft/class_2663 | iugJi | method_11470 | ()B | Cetgu |
    method_8390 | (Class;Box;Predicate;)List | aFM | method_11469 |
    (class_1937;)class_1297; | ZKrlo | aFR | (class_1511;)Z | sixtwo/jj | bCL |
    (class_1309;class_243;)F | bBt | (class_1309;F)Z | bxh | (truncated at
    `…necraft/class_6880;)V`, preceded by `comp_2449`).
    Unattributed tokens: `pLxzJ`, `WP`, `bxh`, `comp_2449` (not eZ.java members).
- **Events** (`@hG`):
  - `aFN(gL$tk)` [18b70bdf0] — **incoming-packet event**. The window's
    `EntityStatusS2CPacket` + `getStatus()` + `getEntity(World)` triple is the
    natural consumer: watch entity-status packets (the canonical totem-pop status
    byte is 35; the comparison constant is inside the VM and is NOT recovered).
  - `aFL(gH$th)` [18b6ac8b0] — shared render marker.
- **State**: `Cetgu` (boolean). Statics `GGpPC` (VM class key: ctor uses
  `GGpPC ^ 14793834209389L`), `AMrtH` (static String — Totem Slot suffix),
  `nLhLG` (long[]), `EleIt` (Integer[]), `ogUmi` (Map) — decryptor caches.
- **Predict machinery**: crystal prediction through
  `World.getEntitiesByClass(EndCrystalEntity.class, box, predicate)` (window)
  plus per-crystal predicates `aFR/aFS/aFV`; player prediction through the three
  `PlayerEntity` predicates `aFQ/aFT/aFU` with `jj.bCL/jj.bBt` helper calls (the
  `Check Players Look` surface). Item equip consumes the `Totem Item` selection
  (`field_8288` = TOTEM_OF_UNDYING) via `findFirst/orElse` over inventory
  (`Totem On Inventory` gate) and the `Totem Slot` index; `aFM() → Item` is the
  selection getter.

## Per-handler semantics

- **`aFN (Lsixtwo/gL$tk;)V — packet event entry [18b70bdf0]**. On each incoming
  packet: filter to `EntityStatusS2CPacket`, read `getStatus()`/`getEntity(World)`
  (window evidence), and on a totem-pop status for the local player trigger the
  totem (re-)equip when `Double Hand After Pop` allows it. Exact status constant
  and condition chain unrecovered.
- **`aFL (Lsixtwo/gH$th;)V — render marker [18b6ac8b0]**. Same window; no
  render-specific tokens; role unrecovered.
- **`aFQ (Lnet/minecraft/class_1657;)Z [18b728930]** / **`aFT (class_1657;)Z
  [18b7342b0]** / **`aFU (class_1657;)Z [18b734cb0]** — three player predicates
  (`Sword Predict` / `Check Players Look` candidate gates: "is this player an
  attacker", "is this player looking at me", range/filter variants). Conditions
  unrecovered; `jj.bBt(class_1309, F)Z` (a boolean check per entity + float) and
  `jj.bCL(class_1309, class_243)F` (float per entity + point) sit in the window
  as the shared helpers these predicates likely call.
- **`aFR (Lnet/minecraft/class_1511;)Z [18b72d540]** / **`aFS (class_1511,
  class_1511) Z [18b734100]** — crystal predicates (`Crystal Predict` surface;
  `aFS` takes two crystals — pairwise comparison, e.g. same-position/threat
  dedup). Conditions unrecovered.
- **`aFV (Lnet/minecraft/class_1511;)Z [18b6b7e60]` — FULLY DECOMPILED: returns
  constant 1 (`true`).** The only complete body in the class: one of the crystal
  predicates is an unconditional accept (filter passes every crystal).
- **`aFM ()Lnet/minecraft/class_1792; [18b6b7530]** — `Totem Item` getter
  (trampoline, no pool window of its own).
- **`aFO ()V [18b718ca0]` / `aFP ()V [18b7210c0]** — private void helpers on the
  shared window (equip/unequip step candidates; `aFP` adjacent to the
  `findFirst/field_8288` tokens). Unrecovered.
- **`aFW (MatchException) → MatchException` [18b6b7ef0]** — identity rethrow stub.
- Note: no `YO()` override exists for eZ (unlike fr/fB/fG/dK/fd) — the class has no
  lifecycle override; enable-time behavior is inherited.

### Infrastructure

- `_2b2fa1a0673f738aaf11f2543d15f4ac ()V` [18b6f14c0] — clinit stub.
- `aFX ([B) → String` [18b6b7f80] — string decoder stub; `aFY (IJ) → I`
  [18b6e1f00] — int decryptor primitive (whitening PRNG, ~580 lines — noise);
  `aFZ` [18b6ed7a0] — MutableCallSite relink; `aGa` [18b6ee7b0] — invokedynamic
  bootstrap for `aGa("s",…)`.

## Settings → behavior mapping

All 7 settings, verbatim folded chains (labels via dump; `cK` item selector:
WM=extra collection, WN=default item, WT=marker; `cJ` toggle WE=default; `cC`
slider Vy=step, Vw=min, Vx=max, VA=default, Vz=suffix).

| field | setting | type / chain (verbatim) | behavior role (handler evidence) |
|---|---|---|---|
| `IlOSr` | Totem Item | `cK` `.WM(jc.WnbNG).WN(Items.TOTEM_OF_UNDYING).WT()` — default **TOTEM_OF_UNDYING** | item to equip in offhand; pool confirms `field_8288` |
| `lBfId` | Double Hand After Pop | `cJ` `.WE(false)` (default off) | gate for the pop-triggered re-equip path (`aFN` packet branch) |
| `XxhAs` | Crystal Predict | `cJ` `.WE(true)` (default on) | gate for crystal-threat prediction (`aFR`/`aFS`/`aFV` + `getEntitiesByClass`) |
| `wTnCk` | Sword Predict | `cJ` `.WE(true)` (default on) | gate for player-attack prediction (`aFQ`/`aFT`/`aFU`) |
| `ZKrlo` | Check Players Look | `cJ` `.WE(true)` (default on) | gate: only treat players as threats if they look at the local player (structural) |
| `IwDsS` | Totem On Inventory | `cJ` `.WE(false)` (default off) | search the whole inventory (Stream `findFirst/orElse`) instead of the fixed slot |
| `iugJi` | Totem Slot | `cC`: `.Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(AMrtH)` — step 1, min 1, max 9, default 1; suffix native-decrypted (unrecovered) | hotbar slot index (1–9) when `Totem On Inventory` is off |

State: `Cetgu` boolean (equip-in-progress / popped-latch candidate). No keybinds,
no `og`/`pe` helpers.

## Unrecovered / uncertain

1. **Totem-pop status constant.** The `EntityStatusS2CPacket` handling is proven,
   but whether the compared status byte is 35 (the canonical totem pop), and
   whether the check is `== 35` for the local player or broader, is inside the VM.
   **Never guess the constant.**
2. **The equip action.** How the offhand stack is actually changed (click-window
   swap, `ClickSlotC2SPacket`, a mixin accessor, or an `IllegalArgumentException`
   -style exploit) is unrecovered; the truncated `…class_6880;)V` void signature
   (a method ending in a `RegistryEntry` param) hints at an item/equipment write
   but its owner is not attributable.
3. **Prediction formulas.** What "Crystal Predict"/"Sword Predict" actually
   compute (threat radius, timing offset, `comp_2449 value : double` owner), and
   how `Totem Slot`/`Totem On Inventory` interact with the Stream pipeline —
   all unrecovered.
4. **`jj.bCL/jj.bBt` semantics** — the class is native-only (no decompile); the
   (entity, Vec3d)→float and (entity, float)→boolean contracts are signature-only.
5. **Unattributed tokens** `pLxzJ`, `WP`, `bxh`, `comp_2449` — not eZ.java members;
   `comp_2449` belongs to some record consumed by a neighboring class's program.
6. **`aFQ/aFT/aFU` vs `aFR/aFS` assignment** — which player predicate maps to
   `Sword Predict` vs `Check Players Look` is structural, not decoded. `aFV`
   (always-true) proves at least one crystal filter is a no-op accept.
7. **`Cetgu` semantics** — single boolean; equip-latch candidates only.
8. **`aFL` role** — no render tokens; what (if anything) is drawn unknown.
9. **`Totem Slot` suffix** (`AMrtH`) — static native-decrypted; not in the dump
   (all 11 space chars are consumed by the 7 labels). Likely `" slot"`-style, NOT
   evidenced.