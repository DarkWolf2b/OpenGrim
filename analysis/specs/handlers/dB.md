# Full Bright (sixtwo.dB) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_dB.c` — 4 handlers (`YO`, class-init `_f7fbba41d4bdcfa4718fbfba01af58cf`, `aaj`, `akq`) + 34 continuation blocks, 0 unresolved table targets. All citations are image addresses (`0x18xxxxxxxx`, runtime base `6ffff5c1xxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/dB.java` (CFR) — fields `double oxuOm`, static seeds `VwWZg`/`SyrBJ`; natives `aaj()`, `YO()`, `akq(MatchException)`, class-init.
- Structural spec: `analysis/specs/modules/dB.md`; registry row: `sixtwo.dB|Full Bright|Changes gamma value|key=71|bind=-999`; category `gh.qBzlZ` = **Misc** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny` — verified below per token; class names via `analysis/reference/intermediary-to-yarn-classes.tsv`.
- Pool re-resolution: `analysis/tools/resolve_pool_blob.py` against `analysis/ghidra/dumps/jna-decrypted-v2.dll`, pool base RVA `0x301ee50`. Decrypted constants: **no `sixtwo.dB` entries in `analysis/decrypted/full-dump.jsonl`** (0 indy sites recorded — dB's constructor id is runtime-decrypted via `Loader.doInit`, not an in-class BSM).
- Framework context: `00-framework.md`; enable/disable hook semantics verified in `gg.java` (`aaj()` → `hF.bdI(this)` = register listeners / on-enable; `YO()` → `hF.bdM(this)` = unregister / on-disable).

### Recoverability caveat

Both behavior hooks (`aaj`, `YO`) decrypt into the j2cc bytecode VM and dispatch through unstitched jump tables; no float literal survives. What IS recoverable: the exact Minecraft settings API surface (12-token pool run), the state field, and the enable/disable split.

## Runtime model

- `dB extends gg`. Constructor `[decompiled dB.java:10-13]`:
  - `long var1 = VwWZg ^ 119200707173484L` — key-mix seed (payload-decryptor `gb.aYR` chain) `[decompiled]`.
  - `super(gf.aZL((int)SyrBJ, false, gh.qBzlZ))` — module id `(int)SyrBJ` runtime-decrypted (registry: **71**), flag `false` (unrecovered meaning, universal), category **Misc** `[decompiled + registry]`.
- No settings constructed (see Settings section) `[decompiled]`.
- Registry bind `-999` = unbound; toggle via the `gg` base machinery (`gc.aZd(int)` code compare, `gd` toggle/hold enum) `[decompiled + framework]`.
- Two lifecycle overrides, both native-blocked:
  - `aaj()` — on-enable hook (base `gg.aaj()` registers `hF` listeners first, then the override body runs) `[decompiled gg.java:375-376]`.
  - `YO()` — on-disable hook (base removes listeners) `[decompiled gg.java:518-519]`.
- No tick/packet listeners — Full Bright has no per-tick work; it acts purely at toggle time `[decompiled stub]`.
- **Own pool run** `POOL[0x9076,0xb4)` (the slice `aaj` decrypts is `[0x9056,0x197]`; window starts exactly `class_token − 0x20` = `0x9056`, per the eA/ew precedent). 12 tokens with per-token offsets from `resolve_pool_blob`:

| offset | token | resolution |
|---|---|---|
| `[0x9076]` | `sixtwo/dB` | self class name |
| `[0x9080]` | `VwWZg` | seed field (stub-matched) |
| `[0x9086]` | `field_1690` | `GameOptions.options` — tiny row `f Lnet/minecraft/class_315; field_1690 options` |
| `[0x9091]` | `Lnet/minecraft/class_315;` | `GameOptions` field type |
| `[0x90ab]` | `net/minecraft/class_315` | `net.minecraft.client.option.GameOptions` |
| `[0x90c3]` | `method_42473` | `getGamma()` — `m ()Lnet/minecraft/class_7172;` |
| `[0x90d0]` | `()Lnet/minecraft/class_7172;` | `getGamma` descriptor |
| `[0x90ed]` | `net/minecraft/class_7172` | `net.minecraft.client.option.SimpleOption` |
| `[0x9106]` | `method_41753` | `SimpleOption.getValue()` — `m ()Ljava/lang/Object;` |
| `[0x9113]` | `oxuOm` | dB's `double` field (stub-matched) |
| `[0x9119]` | `akq` | rethrow name (stub-matched) |
| `[0x911d]` | `method_41748` | `SimpleOption.setValue(Object)` — `m (Ljava/lang/Object;)V` |

  - Tokens after `[0x911d]` (`sixtwo/dC` `[0x912a]`, `quonG`, `sixtwo/gl`, `baU`, `()Lnet/minecraft/class_1268;` = `Hand`, `baZ`, `()Lnet/minecraft/class_4587;` = `MatrixStack`, `dEZDK`, `akt`, `dMxZz`, `lrzzl`, `SyrBJ`, `pBWki`, `lHKkw`, `LfvJD`, `SJQkW`, `DwJFs`, `qHQrv`, `sixtwo/gt`, `bbt`, `kdvZK`, `nqkJs`, `ETsKP`, `PBkMX`) belong to **dC (View Model)**, the next registry neighbor — dC's run starts at `sixtwo/dC` `0x912a`; they are in dB's window only as decrypt-window over-coverage `[decompiled stub match + registry order]`.
  - Window prefix `[0x9056,0x9076)`: `ZujIH`, `aBJpx`, `oahUV`, `WJnaE`, `akj`, `akn` — tail of dA (Elytra Target) run `[slice]`.
- Interpreted contract: `aaj` (on-enable) touches `GameOptions.getGamma()` → `SimpleOption<Double>`, reads it (`getValue`), stores the original into `oxuOm`, writes a high value (`setValue`); `YO` (on-disable) restores `oxuOm` `[inferred from run + registry "Changes gamma value"]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `YO()V` | `[18e005f20]` | `[0xb1,0x5]` | on-disable: restore gamma |
| `_f7fbba41d4bdcfa4718fbfba01af58cf()V` | `[18e0067b0]` | `[0x226,0xd]` | class-init stub |
| `aaj()V` | `[18e0006c0]` | `[0x9056,0x197]` | on-enable: gamma boost |
| `akq(MatchException)MatchException` | `[18e006720]` | — | identity rethrow |

- **`YO()V` [18e005f20]** — decrypts the trivial trampoline slice `POOL[0xb1,0x5]` (`"Tlzw"` — the shared 4-token mini-slice used by token-less VM bodies; same slice cited in dU.md), `ExceptionCheck`, dispatch `UNK_18244ec90[(cVar1=='\0')*8]` at `18e005f6c`. The on-disable body is fully VM-resident: it needs no pool tokens, which is consistent with a pure restore of the `oxuOm` double (VM-resident field arithmetic — `setValue(oxuOm)` needs no string token) `[decompiled + inferred]`.
- **`_f7fbba41d4bdcfa4718fbfba01af58cf()V` [18e0067b0]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck`, dispatch `UNK_18244f060` at `18e00688f`. No module behavior `[decompiled]`.
- **`aaj()V` [18e0006c0]** — decrypts `POOL[0x9056,0x197]` (the 12-token gamma run above), `ExceptionCheck`, dispatch `UNK_18244d120` at `18e000781`. Body virtualized. From the run it can only: obtain `GameOptions` (`field_1690`), call `getGamma()` (`method_42473`), `getValue()` (`method_41753`) — cache into `oxuOm` — and `setValue(Object)` (`method_41748`) with a boosted value `[slice, inferred]`. The boost value is VM-hidden (zero float literals survive) `[uncertain]`.
- **`akq(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18e006720]** — decompiled body is `return param_3;` — identity rethrow for the synthetic `MatchException` control-flow pattern. No behavior `[decompiled]`.
- Continuation blocks (34) are all generic: `ExceptionCheck`/`ExceptionOccurred`(+`FUN_190dd72e0` decrypt re-entry), `ThrowNew` (`0x70`) blocks, `CallVoidMethodA` (`0x1f8`) at `18e006637`/`18e009131`, `CallStaticObjectMethodA` (`0x3a0`) at `18e006afd`, `ReleasePrimitiveArrayCritical` (`0x6f8`) + `GetArrayLength` (`0x558`) with `length < 2` bound check at `18e009a92` (char-array decrypt), `swi(3)` breakpoint trampolines (`18e005df5`, `18e006665`), and 2-way `halt_baddata` dispatchers. `FUN_18e00629c` calls `FUN_184117d80` — a foreign helper (shared decrypt kernel), not module behavior `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `dB.java` declares no setting-wrapper fields (`cA/cC/cD/cJ/cu/ct`) and the constructor builds none:
  `[decompiled dB.java:10-13]` — constructor is exactly the seed mix + `super(gf.aZL((int)SyrBJ, false, gh.qBzlZ))`.
- No decrypted name-char sites exist for dB in `full-dump.jsonl` (0 entries), so no hidden setting name can be recovered as raw ints either (`mr.clS({...})`-style sites absent) `[decompiled absence]`.
- Consequence: Full Bright is a fixed-gamma toggle — the boost value and any hysteresis are hard-wired in VM bytecode `[inferred]`. If the rebuild wants configurability it must diverge (document in PARITY.md).

## Cross-module interplay

- Category peers (Misc, `gh.qBzlZ`): dC View Model (immediate next class), dD Item Frame Blocker, dH No Sign Screen, dT Multi Task, dX No Miss Delay, ec Ghost Hand, db/dh/dt/dx lowercase siblings.
- Gamma conflicts: any other module touching `GameOptions.getGamma()` would race dB's restore; no other spec in the corpus cites `getGamma`, so dB is the sole owner `[negative grep across specs]`.

## Unrecovered

1. **Module id 71**: registry-sourced; `(int)SyrBJ` has no `full-dump.jsonl` verification.
2. **The gamma value written on enable** (and any step/curve): the VM hides all float arithmetic; only the API surface (`SimpleOption.setValue`) is proven. Vanilla max gamma is 1.0 — the boost factor is unknown.
3. **Exact save/restore protocol for `oxuOm`**: which handler stores vs. reads it, and whether a mid-session config reload re-captures it, is VM-resident.
4. **`field_1690` usage shape**: the tiny row names it `options` on `GameOptions` (a self-typed field) — the token sits immediately before `method_42473 getGamma`; whether the VM reads the field directly or it is merely the receiver-chain entry is not decidable from the slice.
5. **Flag `false` in `gf.aZL(71, false, gh.qBzlZ)`** — meaning unrecovered (same across all sibling modules).

## Shared helpers cited (one line each)

- `gg`/`iS` — module base; `aaj()`/`YO()` = enable/disable hooks (verified `gg.java:375-376,518-519`); `gc`/`gd` bind machinery.
- `gf` — metadata record: `aZL(int,boolean,gh)`, accessors `aZM/aZO/…` all native.
- `gh` — category enum (`qBzlZ` = Misc).
- `gb` — native peer/state container; `aYR(long,long,Class)` clinit key derivation.

---
Confidence: MEDIUM-HIGH on the API contract (clean 12-token run, stub-matched fields) and lifecycle split; LOW on numeric behavior (target gamma, restore timing) — all VM-resident.