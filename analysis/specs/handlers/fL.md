# Auto Tool (sixtwo.fL) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fL.c` — 12 JNI handlers, 130 continuation blocks, 0 unresolved table targets, but **20+ jump tables missing from tables.json** (`0x170c0`, `0x1974e60`, `0x1975528`–`0x19756c8`, `0x1975bc8`–`0x1975be8`, `0x197bd50`, …). Same behavior as sibling `fu`: every behavior handler is a decrypt-preamble + indirect-jump dispatcher into the j2cc bytecode VM whose fragments end in `halt_baddata`. No behavior body is linearly recoverable.
- Java skeleton: `analysis/decompiled/payload-decrypted/sixtwo/fL.java` (Vineflower, literals folded) — constructor, settings wiring, and all declarations fully visible; **every behavior method is `private native`/`public native`**.
- Structural spec: `analysis/specs/modules/fL.md`; framework: `analysis/specs/00-framework.md`.
- Pool slice re-resolved byte-exact with `analysis/tools/resolve_pool_blob.py`: `[0x14844,0x335]` (shared region with `fM`/`fI`/`fN` entries).
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` — 50 `(IJ)I` ints + 2 `(IJ)Ljava/lang/String;` strings (`' ms'` ×2) for `sixtwo.fL`.
- Symbol translation: `analysis/jars/yarn-1.21.11+build.6.tiny`; class map `analysis/reference/intermediary-to-yarn-classes.tsv`.

Recoverability tags: `[decompiled]`, `[slice]`, `[inferred]`, `[uncertain]`.

## Runtime model

### Identity and lifecycle

- Registry: `sixtwo.fL|Auto Tool|Automatically swaps to best tool when mining|key=22|bind=-999` `[registry]`. Module id **22**; category `gh.xwjCw` = **Combat** `[decompiled]`.
- Key-mix seed: `long var1 = nhtSN ^ 101916258574058L` `[decompiled]`.
- No `aaj()` enable override — the class only overrides `YO()` (disable/tick override; base = `hF.bdM(this)` unregister) `[decompiled]`. Enable uses the base-class path.
- State: `mT xBzWg = mT.cpz()` (ms stopwatch started at construction), `boolean aLWOy = true`, plus `ol CwHuM = new ol(this)` scanner `[decompiled]`.

### Settings (exact, byte-exact names)

- `Cooldown` (`cA` `CFGfw`): `.UG(10.0)` step, `.UE(0.0)` min, `.UF(1000.0)` max, `.UI(50.0, 100.0)` default pair, `.UH(" ms")` suffix (full-dump `aVl(10918,…)`/`aVl(4321,…)` = `' ms'`) `[decompiled]`.
- `Return Back` (`cJ` `ryfBX`): `.WE(false)` `[decompiled]`.
- `Return Delay` (`cA` `Hykwk`): same chain `.UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms")` `[decompiled]`.

No groups, no modes: 3 flat settings. The two `cA` settings are ms-denominated (both pair with the ms stopwatch `xBzWg` and with `ol`'s `cER(cA)` cooldown check `[inferred]`).

### Pool surface and cross-module calls

Slice `[0x14844,0x335]` interleaves three class regions; attribution per token:

- **fL's own region** (verified against its declared field/method names): `sixtwo/fL | CwHuM | nhtSN | aVh | Hykwk | aLWOy | xBzWg | CFGfw | method_7924 (Lnet/minecraft/class_2680;)F | ryfBX | aVg` `[slice]`.
  - `method_7924` = **`Item.getMiningSpeedMultiplier(BlockState)F`** (`net/minecraft/class_1792`, yarn) — the tool-scoring API: compare held vs candidate tool mining speed against the block being mined `[slice, inferred]`.
- **fI bleed** (window head): `jcHIy | XvFOI | AWYJz | gftdG | aUG | aUK` — all declared in `sixtwo/fI.java` (Auto Logout), not in fL `[verified by grep]`.
- **fM bleed** (mid-window): `sixtwo/fM | vSOfS | aVr | method_2920 getCurrentGameMode | method_8386 isCreative | hurtByWater | SLIME_BLOCK/HONEY_BLOCK/HAY_BLOCK/SWEET_BERRIES (field_8828/field_21086/field_17528/field_16998 on class_1792 Items)` — Auto MLG's block palette `[slice + yarn]`.
- **fN bleed** (tail): `sixtwo/fN$sU | net/minecraft/class_7920 PlayerSkinType | texture | Lnet/minecraft/class_12079$class_12081; | model` `[slice]`.
- `method_2920 getCurrentGameMode` / `method_8386 isCreative` sit adjacent to fM's tokens; a "don't run in creative" guard would fit Auto Tool, but attribution to fL vs fM is not provable from the window `[uncertain]`.

### Shared helpers (one line each)

- `ol` — per-module click/slot scheduler (`ol(gg)`, `cER(cA)` cooldown-elapsed check against an ms `cA` setting, `cEP(int)`, `cEQ/cET/cEO` tick workers, `cES/cEU` status queries, static `cEW/cEX/cEV`); all native.
- `mT` — ms stopwatch (`cpz()` ctor, `cpF()` elapsed, `cpC(ms)` elapsed≥ms, `cpB()` reset) `[decompiled]`.
- `cA`/`cJ` — numeric/boolean setting wrappers (framework contract, `00-framework.md`).

## Per-handler semantics

Handler addresses are image addresses (base `0x180000000`).

### Machinery (no module behavior)

- **`_31c3a3d62932965f4ffe30371de80c96()V` [18ac2ca20]** `[slice 0x226,0xd]` — native clinit stub; slice = `"ang/String;" + "<"` (resolves `java/lang/String`/`<init>` for the `Loader.doInit(fL.class)` path) `[decompiled]`.
- **`aVh(MatchException)MatchException` [18ac51560]** — body `return param_3;` — identity rethrow for the Vineflower `MatchException` pattern `[decompiled]`.
- **`aVj(IJ)Ljava/lang/String;` [18ac7b830] / `aVm(IJ)I` [18ac86350]** — invokedynamic string/int constant-decrypt kernels (descs match full-dump `aVl`/`aVo` entries; ~500 lines of key-mixing over globals, PRNG calls — runtime machinery, do not analyze) `[decompiled machinery]`.
- **`aVi([B)Ljava/lang/String;` [18ac515f0]** — byte-array→String decrypt trampoline (null-guard jump only) `[decompiled stub]`.
- **`aVk(Lookup;MutableCallSite;String;[Object;)Object` [18ac829a0] / `aVn(…)I` [18ac91710]** — empty decompiles; `MutableCallSite` re-bootstrap cache invalidation `[decompiled stub]`.
- **`aVl(Lookup;String;MethodType;)CallSite` [18ac83890] / `aVo(…)CallSite` [18ac29d10]** — indy bootstraps (String/int sites) `[decompiled machinery]`.

### Lifecycle

- **`YO()V` [18ac1ff00]** `[slice 0x3806,0xbf]` — disable override (base = `hF.bdM(this)`). Slice carries only the module-base tick-gate tokens (`Lsixtwo/gg; | baf ()Lsixtwo/gc; | aZg ()Lsixtwo/gd; | aZi (Lsixtwo/gd;)Lsixtwo/gc; | cnP (FFF)Lsixtwo/mG;`) shared with all modules' `YO`/`aaj` slices — the `gc`/`gd` 2-state gate and `mG` color construction are framework contract. Any fL-specific disable behavior (e.g. restoring the original hotbar slot) is VM-internal `[inferred, uncertain]`.

### Behavior handlers (bodies VM-internal; roles from descriptor + wiring + slice)

- **`aVf(gH$th)V [18ac20330]** `[slice 0x14844,0x335]` — `@hG` **client-tick listener** (`gH$th` = `Minecraft.tick` pre-bridge, see `ClientEventBridgeMixin`). Slice carries the `ol` reference `CwHuM`, both `cA` settings (`CFGfw` Cooldown, `Hykwk` Return Delay), `ryfBX`, `aLWOy`, `xBzWg`, and `method_7924 getMiningSpeedMultiplier`. Natural role: per-tick mining watcher — read the block currently being mined, gate on `Cooldown` ms, and drive the tool swap (and, when `Return Back` is on, schedule the return after `Return Delay` ms via `ol`) `[inferred]`. Exact trigger source (crosshair target vs `PlayerEntity.blockBreakingProgress` state) unrecovered `[uncertain]`.
- **`aVg(BlockState)V [18ac47cc0]** `[slice 0x14844,0x335]` — private native worker taking a `net.minecraft.block.BlockState` (`class_2680`). Called from within the tick path (no event carries a BlockState). Role: per-block tool selection — score candidate hotbar items with `Item.getMiningSpeedMultiplier(state)` and swap slots `[inferred]`. Which inventory range is scanned and how ties/`Cooldown` interact are VM-internal `[uncertain]`.

### No packet/event listeners besides `aVf`

The class declares exactly one `@hG` method. No packet, attack, or render events are wired `[decompiled]`.

## Settings → behavior mapping

| setting | wrapper | decrypted name | default(s) | behavior link |
|---|---|---|---|---|
| cooldown | `cA` `CFGfw` | **"Cooldown"** | step 10.0, min 0.0, max 1000.0, `UI(50.0, 100.0)`, suffix `" ms"` | gate for swap/return actions; pairs with stopwatch `xBzWg` and `ol.cER(cA)` `[inferred, uncertain]`. The `UI` pair is most plausibly a randomized default range 50–100 ms (cf. `fu` "Lag Delay") `[inferred, uncertain]` |
| toggle | `cJ` `ryfBX` | **"Return Back"** | **false** | when true, after mining stops the previous slot is restored `[inferred, uncertain]` |
| cooldown | `cA` `Hykwk` | **"Return Delay"** | step 10.0, min 0.0, max 1000.0, `UI(50.0, 100.0)`, suffix `" ms"` | delay before the return swap; same UI-pair caveat as Cooldown `[inferred, uncertain]` |

## Unrecovered / uncertain

1. **All behavior bytecode.** 12 handlers are dispatcher stubs into the thread-code VM; 130 continuation fragments unstitchable (20+ missing jump tables). No float/latency arithmetic survives statically.
2. **Swap trigger source** in `aVf` (crosshair `BlockHitResult` vs `player.currentBreakingPos` vs mining-progress state) and whether swaps happen mid-mine or on block change.
3. **Inventory scan scope** for `aVg(BlockState)` (hotbar only vs whole inventory; offhand considered?) and tie-breaking between equal mining speeds (durability/efficiency considerations unrecovered).
4. **`ol` division of work**: which of `Cooldown`/`Return Delay` feeds `ol.cER(cA)`, and what `cEP(int)` records (likely the pre-swap slot for Return Back).
5. **Roles of `aLWOy` (boolean, initialized true)** and the statics (`XugXT/HzpGA/njIli/zhmCi/nDlqe/SNXwO` are decryptor runtime, not module state).
6. **Attribution of `method_2920 getCurrentGameMode` / `method_8386 isCreative`** — plausible "skip in creative" guard for fL, but the tokens sit in fM's window segment `[uncertain]`.
7. **Any per-block special cases** (e.g. shears on leaves, sword on cobweb) — nothing in the slice besides the generic `getMiningSpeedMultiplier` API.