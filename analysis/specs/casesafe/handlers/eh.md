# Auto Exp (sixtwo.eh) — handler-derived behavior spec

Class: `sixtwo/eh` · display name **Auto Exp** · registry description
"Throws exp bottles faster" · primary key 25, active bind **74** (bound!)
[`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`eh | Auto Exp | 7 | 7 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_eh.c` — **7 native handlers** +
   continuation blocks; the two behavior handlers (`asy`, `asA`) decrypt one
   class slice and tail-dispatch into the j2cc VM. Citations are image
   addresses.
2. Class slice `POOL[0xcad0,0x226]` resolved via
   `analysis/tools/resolve_pool_blob.py` (used twice: by `asy` and `asA`).
3. Java skeleton: `payload-named/sixtwo/eh.java` + decrypted
   `payload-decrypted/sixtwo/eh.java`.
4. Structural spec `analysis/specs/modules/eh.md`; framework
   `analysis/specs/00-framework.md`; Yarn tiny `1.21.11+build.6`;
   helper contract `mT` (timer) from `payload-named/sixtwo/mT.java`.

## Runtime model

- `super(gf.aZL(25, false, gh.qBzlZ))` — id 25, category `gh.qBzlZ`
  `[decompiled eh.java:23]`.
- Settings / state:
  - `GYRzq` — **"Cooldown"** (`cA` numeric): chain
    `.UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(QZqXr)` — step 1.0, min 0.0,
    max 10.0, default 0.0 (pair 0.0/0.0), suffix `QZqXr` (encrypted string,
    unrecovered) `[decompiled, decrypted eh.java:34-38]`.
  - `XWHiC = mT.cpz()` — per-module timer (mT: `cpC/cpD/cpE(long)` elapsed
    checks, `cpG(long)` reset, `cpI()` elapsed read) `[decompiled]`.
- One `@hG` listener `asy(gH$th)` — client tick `[decompiled]`.
- eh's own symbol run is compact; verified tokens:
  - `field_8287` → **`Items.EXPERIENCE_BOTTLE`** — the only Minecraft constant
    `[slice, tiny-mapped]`.
  - eh fields/natives: `GhdJL, asz, GYRzq, XWHiC, edZTg, aNeIU, asB, XmJDu`
    `[slice]`.
- Window straddle warning: from the `sixtwo/ei` marker onward (`Hbvpn`,
  `sixtwo/eB`, `avS`, `asG`, `QZqXr`-adjacent plumbing, `()Lsixtwo/oz;`,
  `sixtwo/oz | hitPoint`, `(Lsixtwo/oz;)Lsixtwo/oT$vo;`, `method_5715
  isSneaking`, `asI (Lnet/minecraft/class_1268;)Z`, `method_6115 isUsingItem`,
  `method_2923 isBreakingBlock`, `method_24515 getBlockPos`, `method_10074
  down`, `sixtwo/oD/oA/oB` block-search builders, `sixtwo/ej`) the tokens
  belong to **ei (Scaffold)** / **ej (Air Stuck)** / **eB (Flight)** runs.
  Exception: `QZqXr` is eh's own suffix field (String) interleaved by pool
  layout `[window straddle, stub-matched]`. eh therefore has **no** recovered
  MC surface beyond the item constant — the use/throw call sequence is fully
  virtualized.
- Registry bind 74: the module also has an explicit hotkey (throw trigger) —
  the keybind state machinery is in the `gg` base (`RcFWc`/`lRvVv` int arrays)
  `[registry + framework-findings]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_37a1913627cf415695d1ec468fdbedf4()V` | `[18d2fc690]` | native clinit stub (`POOL[0x226,0xd]`) |
| `asy(Lsixtwo/gH$th;)V` | `[18d2bc900]` | the entire behavior: tick listener (virtualized) |
| `asA([B)Ljava/lang/String;` | `[18d2c3420]` | string decryptor (suffix `QZqXr`; decrypts `POOL[0xcad0,0x226]`) |
| `asz(MatchException)MatchException` | `[18d2c3390]` | identity rethrow |
| `asB(IJ)I` | `[18d2ed990]` | int-constant decrypt kernel (register-mixing family) |
| `asC(Lookup;MutableCallSite;String;[Object;)I` | `[18d2f8970]` | MutableCallSite re-bootstrap |
| `asD(Lookup;String;MethodType;)CallSite` | `[18d2f9980]` | indy bootstrap (`POOL[0x857,0x26]`) |

- **`asy(gH$th)` [18d2bc900]** — decrypts `POOL[0xcad0,0x226]`,
  `ExceptionCheck`, VM dispatch at `18d2bc9c0`-ish. Reconstructable contract:
  each tick, if the module toggle + bind 74 are satisfied, the held/hotbar
  item is `EXPERIENCE_BOTTLE`, and the `mT` timer exceeds **Cooldown**
  (seconds, step 1, 0–10, default 0 = no wait), re-use the bottle (throw)
  without waiting for the vanilla use cooldown — "throws exp bottles faster".
  Which method performs the throw (`interactionManager.interactItem`,
  `ItemStack.use`, key-press simulation) is virtualized — no use/raycast
  tokens survive in eh's run `[slice, inferred, uncertain]`.
- The `mT` timer is reset after each throw (typical `mT` pattern; the reset
  call is virtualized) `[inferred]`.

## Settings → behavior

- **`GYRzq` — `"Cooldown"` (`cA`)** `[decompiled, decrypted]`:
  - `.UG(1.0)` step, `.UE(0.0)` min, `.UF(10.0)` max, `.UI(0.0, 0.0)`
    default pair, `.UH(QZqXr)` suffix (unrecovered literal).
  - Decrypted name constant verified: full-dump class `sixtwo.eh` folds spell
    "Cooldown" `[full-dump.jsonl]`.
  - Unit: seconds at 20 tps would make max 10.0 = 200 ticks; exact conversion
    in VM unrecovered `[uncertain]`.
- Registry: id 25, bind 74, description "Throws exp bottles faster"
  `[registry]`.

## Unrecovered

1. The throw mechanism inside `asy` (no `useItem`/`interactItem`/`swing` tokens
   in the slice) — flagged as the module's core unknown.
2. Suffix literal `QZqXr` (runtime byte[] decrypt).
3. Whether bind 74 throws a bottle directly on key press (event not visible —
   no `gA` mouse handler exists; likely the base `gg` bind → use-action
   machinery) `[uncertain]`.
4. Interaction with `isUsingItem`/`isBreakingBlock` tokens seen in the padded
   window: they are attributed to ei (Scaffold); any eh use is unproven.
