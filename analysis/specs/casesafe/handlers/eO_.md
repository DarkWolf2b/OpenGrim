# Auto Pearl Catch (sixtwo.eO) — handler-derived behavior spec

Class: `sixtwo/eO` · display name **Auto Pearl Catch** · registry description
"Catches pearl with wind charge in the air" · primary key 118, active bind
-999 (unbound) [`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage
matrix: `eO | Auto Pearl Catch | 9 | 9 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_eO.c` — **9 native handlers** +
   continuation blocks. Main behavior slice `POOL[0xf3df,0x29a]` (decrypted by
   4 handlers); `YO` decrypts the module-base disable slice
   `POOL[0x3806,0xbf]`. Citations are image addresses.
2. Java skeleton: `payload-named/sixtwo/eO.java` + decrypted
   `payload-decrypted/sixtwo/eO.java`.
3. Helper contracts: `ol` (per-module CPS/action scheduler: `cER(cA)`,
   `cEP(int)`, `cEQ/cET/cES/cEO/cEU`, static `cEW/cEX`), `mT` (timer),
   `qL` (rotation manager), `ov` (rotation/aim carrier), `oW`/`oW$vp`
   (block-placement engine builder), `eQ` (pearl-target record),
   `eT`/`eS` (companions: `eT.aDw(PlayerEntity)Z`, `eS.aCW`,
   `eS.aBG(LivingEntity,eQ)V`, `eS.aBH(LivingEntity)→oW`).
4. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/eO.md`.

## Runtime model

- `super(gf.aZL(118, false, gh.xwjCw))` — id 118, category `gh.xwjCw`
  `[decompiled eO.java:23]`.
- Settings (names decrypted verbatim):
  - `UHgUi` — **"Activation Key"** (`cD` int/key setting): `.VO(-999)` —
    default -999 (unbound) `[decompiled, decrypted eO.java:27-44]`;
  - `aQBZI` — **"Wind Charge Delay"** (`cC`): `.Vy(10.0).Vw(150.0).Vx(500.0).VA(250.0)`
    — step 10, min 150, max 500, default 250 `[decrypted eO.java:45-61]`;
  - `GzaZR` — **"Return Slot"** (`cJ`): `.WE(true)` — default **true**
    `[decrypted eO.java:62-71]`;
  - `ecyXJ` — **"Return Delay"** (`cA`): `.UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0)`
    — step 10, min 0, max 1000, default pair (50, 100), callback
    `.Vf(this.GzaZR::WF)` (toggling Return Delay enables Return Slot)
    `[decrypted eO.java:72-88]`.
- State: `vLCax = new ol(this)` (action scheduler), `QiVfT = mT.cpz()`
  (timer), `ARHoZ` boolean latch, `UGXfF` long obfuscation static
  `[decompiled]`.
- Three `@hG` listeners: `aBt(gA)` — **mouse event** (`gA` carries
  `MouseInput`, `KeyInput`, and 3 ints; activation-key matching);
  `aBu(gv)` — **pre-rotation event** (empty marker class, dispatched before
  `qL` applies rotations per `er.md` order); `aBv(gH$th)` — tick. Plus a
  `YO()` override (disable path) `[decompiled]`.
- eO's own symbol run (between `sixtwo/eO` and the `class_1309` cluster):
  - `field_49814` → **`Items.MACE`**, `field_49098` →
    **`Items.WIND_CHARGE`** — the two items of the technique
    `[slice, tiny-mapped]`.
  - `Lnet/minecraft/class_1309;` → `LivingEntity`.
  - `sixtwo/eQ` with methods `aBD(eQ)V`, `aBE(Z,eQ)V`, `aBF(eQ,Z,qL)→ov`,
    `aBN`, `aCk` — pearl-target record + rotation computation through the
    `qL` rotation manager producing an `ov` aim carrier `[slice]`.
  - `aBO (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V` — commit aim on
    a living entity `[slice]`.
  - `sixtwo/eT` (`aCm`, `aDw (Lnet/minecraft/class_1657;)Z` — player
    predicate), `sixtwo/eS` (`aCW`, `aBG (Lnet/minecraft/class_1309;
    Lsixtwo/eQ;)V`, `aBH (Lnet/minecraft/class_1309;)Lsixtwo/oW;`),
    `sixtwo/oW` placement engine: `cLd (LivingEntity, ov, gg) → oW$vp`,
    `oW$vp` builder `dwX (F) → vp`, `dxf (Z) → vp` (float + boolean builder
    options) `[slice]`.
- Technique (registry + item pair): when the player's thrown ender pearl is
  mid-air, throw a **wind charge** at the pearl's predicted position so the
  wind-charge explosion catches the pearl (teleport) — mace held for the
  fall-attack afterwards `[registry, slice, inferred]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `YO()V` | `[18c06d210]` | disable: base `gg` state/`gc`/`gd` teardown (`POOL[0x3806,0xbf]`: `baf()→gc`, `aZg()→gd`, `aZi(gd)→gc`, `(FFF)mG`) |
| `_bd3b7df63a6bf9bfb887cf3169c6ebf3()V` | `[18c091590]` | native clinit stub |
| `aBt(Lsixtwo/gA;)V` | `[18c06d720]` | mouse listener: Activation Key detect (virtualized) |
| `aBu(Lsixtwo/gv;)V` | `[18c074540]` | pre-rotation listener: aim computation (virtualized) |
| `aBv(Lsixtwo/gH$th;)V` | `[18c078bd0]` | tick listener: pearl tracking + throw + slot return (virtualized) |
| `aBw(MatchException)MatchException` | `[18c082530]` | identity rethrow |
| `aBx(IJ)I` | `[18c0825c0]` | int-constant decrypt kernel |
| `aBy(Lookup;MutableCallSite;String;[Object;)I` | `[18c08d870]` | MutableCallSite re-bootstrap |
| `aBz(Lookup;String;MethodType;)CallSite` | `[18c08e880]` | indy bootstrap |

- Division of labor across the three listeners is inferred (they share one
  symbol slice); all bodies are VM-dispatched (`18c06d7e0/18c074600/
  18c078c90` jump tables) `[inferred, uncertain]`.
- `ol` scheduler + `mT` timer gate the wind-charge throw to **Wind Charge
  Delay** and the hotbar return to **Return Delay** (step 10 units, consistent
  with ms at 10 ms granularity) `[inferred]`.

## Settings → behavior

| field | wrapper | chain (verbatim) | notes |
|---|---|---|---|
| `UHgUi` | `cD` | `"Activation Key" .VO(-999)` | key-code setting; -999 = unbound |
| `aQBZI` | `cC` | `"Wind Charge Delay" .Vy(10.0) .Vw(150.0) .Vx(500.0) .VA(250.0)` | no suffix |
| `GzaZR` | `cJ` | `"Return Slot" .WE(true)` | default true |
| `ecyXJ` | `cA` | `"Return Delay" .UG(10.0) .UE(0.0) .UF(1000.0) .UI(50.0, 100.0)` → `Vf(GzaZR::WF)` | default 50, current 100 |

- Decrypted name constants verified in `full-dump.jsonl` (class `sixtwo.eO`):
  "Activation Key", "Wind Charge Delay", "Return Slot", "Return Delay"
  `[full-dump]`.
- Registry: id 118, bind -999, description above `[registry]`.

## Unrecovered

1. Pearl-tracking math: pearl position prediction, wind-charge aim point, and
   the `ov`/`qL` rotation interpolation — all inside the VM; the `aBF
   (eQ, Z, qL) → ov` signature is the only recovered shape.
2. Which slot-switch packets implement Return Slot (no packet tokens in the
   slice — switching likely via `ol`/hotbar machinery).
3. Exact time units of Wind Charge Delay (150–500) and Return Delay (0–1000)
   `[uncertain]`.
4. Role of `eT.aDw(PlayerEntity)Z` and the `oW$vp` builder options
   (`dwX(F)`, `dxf(Z)`) — the placement engine's contract is only
   signature-level.
