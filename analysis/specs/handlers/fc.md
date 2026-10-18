# Cart Refill (sixtwo.fc) — handler-derived behavior spec

Class: `sixtwo/fc` · display name **Cart Refill** · registry description
"Automatically refills TNT minecarts" · primary key 165, active bind -999
(unbound) [`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`fc | Cart Refill | 7 | 7 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fc.c` — **7 native handlers** +
   continuation blocks; the single behavior handler `aHO` decrypts
   `POOL[0x116a1,0x2d6]`. Citations are image addresses.
2. Java skeleton: `payload-named/sixtwo/fc.java` + decrypted
   `payload-decrypted/sixtwo/fc.java`.
3. Partner module `fa` (Auto X-Bow, id 164): static shared buffer
   `fa.aGU(String[])` (setter) / `fa.aGV()` (getter) — fc's constructor calls
   `fa.aGV()` and, when `iS.bwL() == null`, `fa.aGU(new String[3])`
   `[decompiled fc.java:55, 105-109 + fa.java:59,138]`. `iS.bwL()` is a static
   native `String` (client singleton query).
4. Neighbor in window: `fd` (Auto Dripstone) + `fd$sO`
   (`dripstonePos`, `trapdoorPos`, `placeHitResult`, `secondaryUse`), `field_28048`
   → `Blocks.POINTED_DRIPSTONE`, `class_2533` → `TrapdoorBlock` — NOT fc
   `[window straddle, stub-matched]`.
5. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/fc.md`.

## Runtime model

- `super(gf.aZL(165, false, gh.xwjCw))` — id 165, category `gh.xwjCw`
  `[decompiled fc.java:22]`.
- Settings (identical template to `fA` Potion Refill — names decrypted
  verbatim):
  - `wkPDa` — **"Delay"** (`cA`): `.UG(5.0).UE(0.0).UF(1000.0).UI(0.0, 50.0).UH(XcqMh)`
    — step 5, min 0, max 1000, default pair (0, 50), suffix `XcqMh`
    (unrecovered) `[decrypted fc.java:24-44]`;
  - `NtoNy` — **"Hover"** (`cJ`): `.WE(false)` `[decrypted fc.java:45-54]`;
  - `TSAtI` — **"Randomize Slots"** (`cJ`): `.WE(false)`
    `[decrypted fc.java:56-76]`;
  - `MgsdP` — **"Slots To Refill"** (`cz`): `.Uw([0..8])` — all 9 hotbar
    slots `[decrypted fc.java:77-100]`;
  - `ISxRu = mT.cpz()` — timer (constructed inside a try block that mirrors
    the obfuscator's exception flow) `[decrypted fc.java:102-109]`.
- One `@hG` listener `aHO(gH$th)` — tick `[decompiled]`.
- fc's own symbol run (between `sixtwo/fc` and the `fd` cluster):
  - `cJy (Lnet/minecraft/class_1792;)Ljava/util/List;` — helper taking an
    **`Item`** and returning a `List` (find inventory stacks of that item —
    the TNT-minecart locator) `[slice]`.
  - `java/util/Collections` + `shuffle` — the **Randomize Slots** shuffle
    `[slice, tiny-mapped]`.
  - `field_7791` → **`ClickType.SWAP`** (`class_1713` `ClickType`) — the
    inventory operation is a SWAP click between hotbar slot and inventory
    slot `[slice, tiny-mapped]`.
  - fc fields/statics and plumbing `[slice]`.
- Technique: keep the selected hotbar slots stocked with TNT minecarts —
  when one is consumed, locate another TNT minecart stack in the inventory
  (`cJy`) and `ClickType.SWAP` it in after **Delay**, optionally shuffling
  slot choice (**Randomize Slots**) — the ammo line for `fa` (Auto X-Bow,
  "crossbow cart" technique) `[registry + slice, inferred]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_728d964e491b8d841b10e24b5de0af47()V` | `[18b38b400]` | native clinit stub |
| `aHO(Lsixtwo/gH$th;)V` | `[18b345390]` | the entire behavior: tick listener (virtualized) |
| `aHP(MatchException)MatchException` | `[18b3525d0]` | identity rethrow |
| `aHQ([B)Ljava/lang/String;` | `[18b352660]` | string decryptor (suffix `XcqMh`) |
| `aHR(IJ)I` | `[18b37ca00]` | int-constant decrypt kernel (decrypts `POOL[0x116a1,0x2d6]`) |
| `aHS(Lookup;MutableCallSite;String;[Object;)I` | `[18b3876e0]` | MutableCallSite re-bootstrap |
| `aHT(Lookup;String;MethodType;)CallSite` | `[18b3886f0]` | indy bootstrap |

- **`aHO(gH$th)` [18b345390]** — decrypts `POOL[0x116a1,0x2d6]`,
  `ExceptionCheck`, VM dispatch. Recovered shape: per tick, if timer >
  Delay, for each selected slot that is empty of the cart item, pick a
  source stack (`cJy` list, shuffled when Randomize Slots) and submit a
  `ClickType.SWAP` window click (via the screen-handler click path; the
  click submission itself is virtualized). The `String[3]` shared buffer
  with `fa` coordinates the crossbow-cart routine (slot bookkeeping for the
  three slots involved) `[slice, inferred, uncertain]`.

## Settings → behavior

| field | wrapper | chain (verbatim) | notes |
|---|---|---|---|
| `wkPDa` | `cA` | `"Delay" .UG(5.0) .UE(0.0) .UF(1000.0) .UI(0.0, 50.0) .UH(XcqMh)` | step 5 / min 0 / max 1000 / default 0, current 50 |
| `NtoNy` | `cJ` | `"Hover" .WE(false)` | default false |
| `TSAtI` | `cJ` | `"Randomize Slots" .WE(false)` | default false |
| `MgsdP` | `cz` | `"Slots To Refill" .Uw({0..8})` | hotbar slots 0–8 |

- Decrypted name constants verified in `full-dump.jsonl` (class `sixtwo.fc`):
  "Delay", "Hover", "Randomize Slots", "Slots To Refill" `[full-dump]`.
- Registry: id 165, bind -999, description "Automatically refills TNT
  minecarts" `[registry]`.
- Package-private fields (`cA wkPDa; cJ NtoNy; ...` — no `private`) — the
  twin module `fa`/`fA` family reads fc's settings directly
  `[decompiled, inferred]`.

## Unrecovered

1. Which `Item` constant identifies the TNT minecart (no `field_8xxx`
   item token in fc's own segment — the item flows in as `cJy`'s argument;
   `MinecartItem.TNT` constant lives in the VM).
2. The exact click-submission path for `ClickType.SWAP` (which
   `ScreenHandler.syncId`, which slot ids) and the role of `fa`'s
   `String[3]` buffer.
3. "Hover" semantics and the suffix literal `XcqMh`.
4. `iS.bwL()` contract (static native String) and why its null-ness gates the
   `fa.aGU(new String[3])` initialization `[uncertain]`.
