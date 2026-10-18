# Auto Armor (sixtwo.fv) — handler-derived behavior spec

Class `sixtwo.fv` extends `sixtwo.gg` (module base). Registry: `sixtwo.fv|Auto Armor|Automatically replaces armor|key=16|bind=-999` (from `analysis/specs/modules/fv.md`). Module id obtained at clinit via `gf.aZL(16, false, gh.xwjCw)` — the literal `16` is the second arg of `aQW("n",7331,2,7431,8,0,109,2)` (string-decrypt invocation: `aQW("n",7331,...)` decrypts to a string; the int constant `16` is passed directly in `gf.aZL(16,false,gh.xwjCw)` in the Java clinit skeleton, so key = **16** verbatim) `[decompiled]`.

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_fv.c` | **MISSING** (not on disk). Substituted with `analysis/ghidra/handlers-full/sixtwo_fv.c` (all 25 raw handler decompiles, read in full) + `analysis/ghidra/continuations/sixtwo_fv_cont.c` (≈270 continuation fragments, 196 KB, read in full). |
| `analysis/specs/modules/fv.md` | read — registry entry + decrypted setting names, no behavior. |
| `analysis/decompiled/payload-named/sixtwo/fv.java`, `fv$sS.java` | read in full — module skeleton, settings wiring, native method inventory. |
| `analysis/reference/intermediary-to-yarn-classes.tsv`, `analysis/jars/yarn-1.21.11+build.6.tiny` | mappings verified (see Per-handler section). |
| `analysis/decrypted/full-dump.jsonl` | no fv-specific entries beyond the setting names already in `modules/fv.md`. |
| `analysis/tools/resolve_pool_blob.py` | **MISSING** (only a `.pyc` exists, not executable source). Worked around: parsed `analysis/ghidra/dumps/jna-decrypted-v2.dll` directly (PE, image base `0x180000000`; decrypted-string pool base image VA `0x18301ee40` → file offset `0x301d640`) and dumped pool slices by hex offset. All pool token listings below are byte-verified reads of that DLL. |

No handler in fv contains real arithmetic on game state: 24 of 25 handlers are dispatcher stubs (`FUN_190dd72e0(env, poolPtr+off, len)` → decrypt slice → `JNI->ExceptionCheck` → jump-table dispatch into continuation fragments). The only rdtsc reads in fv are two anti-trace bursts at `[18bb17015]` that gate nothing. One handler (`aQR`) and one handler (`aQU`) are the string/int constant-decrypt kernels themselves. **Every continuation fragment terminates in a `(*_DAT_181cxxxxx)()` tail or a truncated indirect jump, so no fragment reveals its successor** — the full call graph is unlikable statically. Everything below is therefore derived from (a) exact pool tokens, (b) exact JNI vtable calls observed in fragments, (c) the Java skeleton's field/method wiring, and (d) Yarn mapping of the referenced intermediary names. Formulas are never guessed.

### Pool slices (byte-verified, token-for-token)

**Shared slice `[0x139a4,0x31b]`** — used by aQA, aQB, aQC, aQD, aQE, aQF, aQG, aQI, aQJ, aQK, aQL, aQM, aQN, aQO, aQQ, aQR, aQU. NUL-separated tokens, verbatim:

```
pe, sourceSlot, currentArmorEmpty, sixtwo/fv, PnkFl, aQJ, aQP, aQB, keyzc, LHgKa,
aQC, aQD, ()Lsixtwo/fv$sS;, net/minecraft/class_418, PAzfu, aQG, (Lsixtwo/fv$sS;)V,
AiGiJ, aQI, gbLQO, RteRC, aQL, (I)Lnet/minecraft/class_8051;, method_48399,
()Lnet/minecraft/class_1304;, aQE, aQF, (Lnet/minecraft/class_8051;Z)I, vrDDR,
(ILnet/minecraft/class_8051;IZ)V, ZmNIx, cKm, (Lnet/minecraft/class_8051;)Ljava/util/LinkedList;,
java/util/LinkedList, SOlCc, ftGho, cJM, (I)Lsixtwo/oJ;, cJZ, (IIZ)V, Ocrqg, aQK,
(Lsixtwo/fv$sS;)I, getFirst, dcy, uFkOC, aQH, YeKOG, field_41934, field_41936,
field_41937, KWINT, Ibyhc, jVFDV, bzc, (Lnet/minecraft/class_1799;)Lnet/minecraft/class_8051;,
()Lnet/minecraft/class_8051;, FLlXG, qhqRX, etUrB, aQQ, aQR, SgsTt, oKGOX, elceJ,
aQU, hghbx, sixtwo/fw, QmxeW, aRe, FbvPk, NrVzh, WJJbs, cEz, sGDWO, aRb, cEw,
net/minecraft/class_1269, field_5811, L
```

Trailing `L` is the first byte of the next slice's descriptor prefix (`Ljava/...`). This slice is the module's entire symbolic contract: it names every field, setting, helper method, and MC class the module touches.

**aQH slice `[0x13965,0x31a]`** — same tokens as the shared slice, preceded by 6 extra tokens:

```
fJTkl, wkefr, OPeMM, pFjbu, aQx, aQt, sixtwo/fv$sS, armorIndex, armorType,
<sourceSlot, currentArmorEmpty, ...shared tail...>
```

(`sixtwo/fv$sS`, `armorIndex`, `armorType` are the record accessors of `fv$sS`; the leading 6 are opaque identifiers, presumably obfuscated members on `gg`/`gw` used only by aQH.)

**YO slice `[0x3806,0xbf]`** — handler `[18b9a5f70]` only; identical content to module fa's YO slice (tick-engine plumbing on the `gg` base):

```
;, ipLAD, GLrDe, Lsixtwo/gg;, wLrDR, sixtwo/gg, baf, ()Lsixtwo/gc;, DJXfP,
sixtwo/gc, aZg, ()Lsixtwo/gd;, ynopW, ePBBz, aZi, (Lsixtwo/gd;)Lsixtwo/gc;,
nbZRc, ijbRx, bad, FalZQ, dhh, cnP, (FFF)Lsixtwo/mG;, NLFhJ, gx
```

**clinit slice `[0x226,0xd]`** — `ang/String;\0<` (loader plumbing). **aQT/aQW slice `[0x857,0x26]`** — `odHandle;\0iUrOn\0Ljava/util/Map;\0java/l` (indy bootstrap plumbing).

### Yarn mapping verification (from `yarn-1.21.11+build.6.tiny`)

- `class_8051` = `net.minecraft.item.equipment.EquipmentType`
- `class_1304` = `net.minecraft.entity.EquipmentSlot`
- `class_1799` = `net.minecraft.item.ItemStack`
- `class_1269` = `net.minecraft.util.ActionResult`; `field_5811` = `ActionResult.PASS`
- `class_418` = `net.minecraft.client.gui.screen.DeathScreen`
- `method_48399()Lnet/minecraft/class_1304;` = `EquipmentType.getEquipmentSlot()`
- `field_41934` = `EquipmentType.HELMET`, `field_41936` = `LEGGINGS`, `field_41937` = `BOOTS`. **`field_41935` (CHESTPLATE) does NOT appear anywhere in fv's slices.**

### JNIEnv vtable mapping (derived empirically; hooked table has 2 extra slots after IsInstanceOf)

| Offset | Function (evidence) |
|---|---|
| `+0x68` | Throw |
| `+0x70` | ThrowNew (fragments `[18bb2a877]`, `[18bb30b30]` pass pool-decrypted messages) |
| `+0x78` | ExceptionOccurred |
| `+0x88` | ExceptionClear |
| `+0xd8` | NewLocalRef slot (uncertain — their index 27) |
| `+0x100` | IsInstanceOf (`[18bb55717]`) |
| `+0x1f8` | CallVoidMethod (`[18bb1b333]`, `[18bb31131]`) |
| `+0x3a0` | CallStaticObjectMethod (`[18bb1abf0]`, `[18bb30b30]`) |
| `+0x418` | CallStaticIntMethodA (`[18bb21393]`) |
| `+0x488` | CallStaticVoidMethodA (`[18bb1b048]`, `[18bb30e46]`) |
| `+0x518`/`+0x560`/`+0x570` | array/string ctor family (uncertain which is which) |
| `+0x558` | GetArrayLength (bounds checks `< 1` at `[18bb1a603]`, `[18bb302f2]`, `[18bb35bc5]`) |
| `+0x580` | NewByteArray (`[18bb35bc5]` allocates then length-checks the result) |
| `+0x6f0` | GetPrimitiveArrayCritical (`[18bafa895]`) |
| `+0x6f8` | ReleasePrimitiveArrayCritical (always mode `2` = `JNI_ABORT`) |
| `+0x720` | ExceptionCheck — the universal post-decrypt check emitted by `FUN_190dd72e0` |

## Runtime model [inferred from wiring + slice tokens; fragment bodies unrecovered]

**What the module does per tick.** `aQA(gH$th)` is the only event entry (`@hG public native void aQA(gH.th var1)`; `gH$th` is the player-tick event payload). Every tick it evaluates the player's four armor slots and schedules replacements. The plan object is the record `fv$sS(int armorIndex, EquipmentType armorType, int sourceSlot, boolean currentArmorEmpty)`.

**Evaluation pipeline** (each step is a native method whose slice tokens prove the call targets):

1. For each armor index `0..3`, `aQL(I)Lclass_8051;` maps index → `EquipmentType` (`(I)Lnet/minecraft/class_8051;` in slice). The exact ordinal→type table is virtualized.
2. `bzc(Lclass_1799;)Lclass_8051;` classifies an ItemStack as an armor `EquipmentType` (`(Lnet/minecraft/class_1799;)Lnet/minecraft/class_8051;` in slice).
3. `method_48399()Lclass_1304;` (`EquipmentType.getEquipmentSlot()`) converts a type to the `EquipmentSlot` the swap targets — this is how armorIndex reaches the inventory layer.
4. `aQE(Ljava/lang/Object;)Z` (declared with `class_1799`-flavored tokens) is the per-item eligibility/durability test; `YeKOG` ("Minimum Durability", a `ct` string setting) is wired to listener `aQO`, so the threshold feeds this test. **Exact threshold formula unrecovered** (j2cc-VM arithmetic).
5. `aQF(Lclass_8051;Z)I` is the source-slot scorer: given the target `EquipmentType` and the emptiness flag, returns the inventory slot (or -1/none) to pull from. **Exact scoring math unrecovered.**
6. The result is packed into `fv$sS` via its accessors (`armorIndex`, `armorType`, `sourceSlot`, `currentArmorEmpty` — all four names in the aQH slice; `sourceSlot`/`currentArmorEmpty` also in the shared slice).
7. Per-slot pending plans live in `LinkedList`s: `cKm(Lclass_8051;)Ljava/util/LinkedList;` returns the queue for a type and `getFirst` peeks it — i.e. one queued plan per equipment type, FIFO.
8. Execution: `aQG(fv$sS)V` / `aQI(fv$sS)V` stage/flush the plan, `aQH(fv$sS)V` performs the actual swap, and `aQK(fv$sS)I` queries a plan (returns int — plausibly a slot or success code). The swap executes through the inventory helper `sixtwo.oJ`: `cJM(I)Lsixtwo/oJ;` fetches it, and the token `(ILnet/minecraft/class_8051;IZ)V` / `(IIZ)V` are its swap entry signatures (slot index, equipment type, integer flag, boolean flag — the boolean plausibly the Silent/Client mode flag).

**Timing.** Three timers taken at construction: `keyzc = mT.cpA(); SOlCc = mT.cpA(); gbLQO = mT.cpA();`. Combined with the settings `Ocrqg` ("Open Delay"), `LHgKa` ("Close Delay", 0–5000 range), `RteRC` (second delay, 0–1000) and `ZmNIx` ("Swap Cooldown", 1.0–50.0 default 15.0), the model is: **open inventory → wait Open Delay → perform swaps → optionally wait → close inventory → wait Swap Cooldown before the next swap**. Which timer binds to which phase is inferred from names only `[uncertain]`.

**Inventory handling.** `ftGho` ("Auto Open Inventory", default **true**) and `uFkOC` ("Close After Swap", default **true**) bracket the open/close behavior; `uFkOC.Vf(this::aQM)` makes `aQM()Ljava/lang/Boolean;` the listener that decides closing. `vrDDR` ("Ignore Elytra", default **false**) is read somewhere in the eligibility check. Inventory Mode is a 3-value enum: `SgsTt` = "Normal", `KWINT` = "Client", `jVFDV` = "Silent"; both Client and Silent register the same listener `KWINT::SZ` (`Ocrqg.Vf(this.KWINT::SZ); RteRC.Vf(this.KWINT::SZ)` — the delay settings re-fire on mode change, i.e. changing mode resets/re-evaluates the delays).

**Guards.** The shared slice carries `net/minecraft/class_418` (DeathScreen) and `net/minecraft/class_1269`/`field_5811` (`ActionResult.PASS`), so the module at minimum queries the death screen and an `ActionResult.PASS` value in its tick path. Plausibly: no swapping while the death screen is open, and PASS as the "no-op" return of a click path `[inferred, uncertain]`. **No packet classes appear in any fv slice** — swaps appear to go through the client-side inventory helper `sixtwo.oJ` rather than raw packets; whether oJ sends packets internally is out of fv's evidence.

## Per-handler semantics

All 25 handlers, with decrypt slice and image address. `FUN_190dd72e0(env, poolPtr+off, len)` = the common decrypt stub; "→ dispatch" = 2-way jump table into continuation fragments.

| Method | Descriptor | Image addr | Slice | Semantics |
|---|---|---|---|---|
| `aQA` | `(Lsixtwo/gH$th;)V` | `[18b9a6260]` | `[0x139a4,0x31b]` | Player-tick event entry. The only handler that consumes game events; drives the whole evaluation pipeline above. |
| `aQB` | `()Z` | `[18bb1b460]` | shared | Boolean predicate on module state (name `aQB` also referenced from aQJ's fragment context). Body unrecovered. |
| `aQC` | `()V` | `[18bb516e0]` | shared | Void action; one CallVoidMethod-family fragment reaches it. Body unrecovered. |
| `aQD` | `()Lsixtwo/fv$sS;` | `[18bb57660]` | shared | Returns the current plan record (signature `()Lsixtwo/fv$sS;` in slice). IsInstanceOf check on the constructed record at `[18bb55717]`. |
| `aQE` | `(Ljava/lang/Object;)Z` (ItemStack arg per slice) | `[18bb5cb70]` | shared | Eligibility/durability test for one stack; consumes `YeKOG` Minimum Durability + `vrDDR` Ignore Elytra. **Formula unrecovered.** |
| `aQF` | `(Lnet/minecraft/class_8051;Z)I` | `[18bb62a20]` | shared | Source-slot scorer: EquipmentType + emptiness flag → slot int. **Formula unrecovered.** |
| `aQG` | `(Lsixtwo/fv$sS;)V` | `[18bb6a330]` | shared | Consume/stage a plan. |
| `aQH` | `(Lsixtwo/fv$sS;)V` | `[18bb72d80]` | `[0x13965,0x31a]` (6 extra tokens `fJTkl, wkefr, OPeMM, pFjbu, aQx, aQt`) | The swap performer — the only handler with a private slice, containing extra gg/gw-side identifiers plus the `fv$sS` accessors. |
| `aQI` | `(Lsixtwo/fv$sS;)V` | `[18bb742f0]` | shared | Second plan consumer (queue flush vs stage, order uncertain). |
| `aQJ` | `()V` | `[18b9ac8f0]` | — (no decrypt) | Only handler with no decrypt stub: calls `(**(code**)(&UNK_181c46e40 + (param_2==0)*8))()` — a 2-entry function table selected by a condition. Plausibly the enable/disable toggle hook. |
| `aQK` | `(Lsixtwo/fv$sS;)I` | `[18b9acd30]` | shared | Query a plan → int. |
| `aQL` | `(I)Lnet/minecraft/class_8051;` | `[18b9b2d80]` | shared | armorIndex → EquipmentType. |
| `aQM` | `()Ljava/lang/Boolean;` | `[18b9b3680]` | shared | `uFkOC` (Close After Swap) change listener → Boolean. |
| `aQN` | `()V` | `[18b9b8230]` | shared | `PAzfu` (Inventory Mode) change listener. |
| `aQO` | `()V` | `[18ba52ae0]` | shared | `YeKOG` (Minimum Durability) change listener. |
| `aQP` | `(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18bae7ec0]` | — | Identity rethrow: body is literally `return param_3;` (switch-exhaustiveness helper). |
| `aQQ` | `([B)Ljava/lang/String;` | `[18bae7f50]` | shared | byte[] → String. Real work in the large string-VM fragments `FUN_18baf4dd9` (330 lines), `FUN_18baecb64` (323), `FUN_18baeb748` (200), `FUN_18bafa895` (537), `FUN_18baeb710` (210), `FUN_18baec626` (135), `FUN_18baf24ce` (296): byte reads via GetPrimitiveArrayCritical (index `unaff_RBP[0x15]`, release mode 2), length bounds checks with ThrowNew on failure, decimal digit loop (`switch(unaff_ESI<10)`). String-decrypt machinery, not module behavior. |
| `aQR` | `(IJ)Ljava/lang/String;` | `[18bb132e0]` | shared | String-constant decrypt kernel: 850 lines inline in the handler; constants `0xcbfc2bf7cffd7072, 0xe665434be0f6f745, 0x97ff26b7fef5ff7f, 0xae7cb8f6500e7fcb, 0x6abb7593f1735465, 0xf27d0919c82a9c04, 0x6e5ced09d2ad944b, 0x3a07d16925199771, 0x84222325, 0x2eb25702a936f8fd, 0x654f20fc669fca5b`; popcount/clz bit-tricks; rotation `<<0x1d|>>0x23`; helper `func_0x00018bb1a4e0`. |
| `aQS` | `(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;` | `[18bb1a570]` | — | Indy bootstrap target (object flavor); GetArrayLength<1 check `[18bb1a603]`; CallStaticObjectMethod `[18bb1abf0]`; CallStaticVoidMethodA `[18bb1b048]`; CallVoidMethod `[18bb1b333]`; decrypt-then-check families `FUN_190dd72e0`/`FUN_190ddce00`/`FUN_190ddfc90`/`FUN_190de3220`/`FUN_190dd9df0`; ThrowNew at `[18bb2a877]`. |
| `aQT` | `(Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite;` | `[18bb221f0]` | `[0x857,0x26]` | CallSite factory (String flavor). |
| `aQU` | `(IJ)I` | `[18bb24cb0]` | shared | Int-constant decrypt kernel: inline giant with helper `func_0x00018bb301c0`; constants `0x04c90731a8fb1f45, 0xe1e208352cd62e9f, 0x270adb5fa2f9dc01, 0x84225cda, ...`; CallStaticIntMethodA `[18bb21393]`; GetArrayLength<1 `[18bb302f2]`. |
| `aQV` | `(Lookup;MutableCallSite;String;[Object;)I` | `[18bb30250]` | — | Indy bootstrap target (int flavor); NewByteArray + GetArrayLength<1 `[18bb35bc5]`; ThrowNew at `[18bb30b30]`; CallStaticObjectMethod `[18bb30b30]`; CallStaticVoidMethodA `[18bb30e46]`; CallVoidMethod `[18bb31131]`. |
| `aQW` | `(Lookup;String;MethodType;)CallSite` | `[18bb31260]` | `[0x857,0x26]` | CallSite factory (int flavor). |
| `<clinit>` | `_010dcddc5ae532c6d7a5020cc90bba46` | `[18bb33f70]` | `[0x226,0xd]` | Static init: builds `PnkFl`(long), `etUrB`/`FLlXG`(String[]), `qhqRX`/`hghbx`(Map), `elceJ`(long[]), `oKGOX`(Integer[]) key material; calls `gf.aZL(16,false,gh.xwjCw)`; starts `keyzc/SOlCc/gbLQO = mT.cpA()`. |

Fragment notes applicable to all handlers: blocks ending in `(*_DAT_xxx)()` or carrying `unaff_*` params are continuation tails — read conservatively; the two `rdtsc()` bursts at `[18bb17015]` are anti-trace noise (no gated logic).

## Settings → behavior mapping

All constants copied verbatim from `fv.java`.

| Setting | Type | Constructor args (verbatim) | Decrypted name | Wired to | Behavior role |
|---|---|---|---|---|---|
| `YeKOG` | `ct` | `Vy(50.0), Vw(0.0), Vx(5000.0), VA(0.0)` | "Minimum Durability" | `YeKOG.Vd(this::aQO)` | Durability threshold consumed by `aQE` |
| `Ibyhc` | `cu` | — | *(not in modules/fv.md list)* | none observed | Unknown toggle |
| `SgsTt` | `cu` | — | "Normal" | none | Inventory Mode value 0 |
| `PAzfu` | `ct` | — | "Inventory Mode" | `PAzfu.Vd(this::aQN)` | Selects Normal/Client/Silent |
| `KWINT` | `cu` | — | "Client" | `KWINT::SZ` (×2, via Ocrqg+RteRC listeners) | Mode value 1; `SZ` re-fires delay listeners on mode change |
| `jVFDV` | `cu` | — | "Silent" | none | Mode value 2 |
| `ftGho` | `cJ` | default **true** | "Auto Open Inventory" | none observed | Whether the module opens the inventory itself |
| `uFkOC` | `cJ` | default **true** | "Close After Swap" | `uFkOC.Vf(this::aQM)` | Whether to close after swapping; `aQM` returns the Boolean |
| `vrDDR` | `cJ` | default **false** | "Ignore Elytra" | none observed | Skip elytra protection/repair swaps when true |
| `LHgKa` | `cC` | `Vy(50.0), Vw(0.0), Vx(5000.0), VA(0.0)` | "Close Delay" | none observed | Close-phase delay (ms-range 0–5000) |
| `Ocrqg` | `cC` | `Vy(10.0), Vx(1000.0), VA(0.0)` | "Open Delay" | `Ocrqg.Vf(this.KWINT::SZ)` | Open-phase delay (0–1000) |
| `RteRC` | `cC` | `Vy(10.0), Vx(1000.0), VA(0.0)` | *(unnamed in modules/fv.md; second delay)* | `RteRC.Vf(this.KWINT::SZ)` | Second phase delay (0–1000) |
| `ZmNIx` | `cC` | `Vy(1.0), Vx(50.0), VA(15.0)` | "Swap Cooldown" | none observed | Min gap between swaps (1.0–50.0, default **15.0**) |

(`Vy/Vw/Vx/VA` = the `cC` slider's four numeric constructor slots; exact meaning per slot — step/min/max/default vs min/max/step/default — is not recoverable from the skeleton, only the numeric quadruples are exact.)

Timer-to-phase assignment (`keyzc`, `SOlCc`, `gbLQO` ↔ Open Delay / Close Delay / Swap Cooldown) is name-based inference `[uncertain]`.

## Unrecovered / uncertain

1. **Every native method body.** All 25 handlers are decrypt-stub + jump-table dispatch; every continuation fragment ends in `(*_DAT_xxx)()` or a truncated indirect jump, so no successor block can be linked. The control-flow graph of the real logic is statically unlikable with the current dump.
2. **Exact durability threshold formula (`aQE`)** — whether "Minimum Durability" compares absolute points, percentage, or damage fraction; and how `vrDDR` (Ignore Elytra) interacts. j2cc-virtualized arithmetic.
3. **Exact source-slot scoring (`aQF`)** — which inventory ranges are scanned, priority order, tie-breaking; return convention for "no source" (0? -1?). Unrecovered.
4. **armorIndex → EquipmentType table (`aQL`)** and the ordinal layout of Inventory Mode (Normal/Client/Silent). Constants live in the VM.
5. **Swap transport**: fv's slices contain `sixtwo/oJ`, `(ILnet/minecraft/class_8051;IZ)V`, `(IIZ)V`, `net/minecraft/class_1269`/`field_5811` (ActionResult.PASS) — but no packet classes. Whether swaps are click-simulation, `oJ`-mediated slot moves, or packets sent inside `oJ` is not decidable from fv evidence.
6. **DeathScreen / ActionResult.PASS guard semantics** — where class_418 and field_5811 are consulted (pre-swap guard vs post-swap check) is inferred, not proven.
7. **Timer ↔ phase binding** (keyzc/SOlCc/gbLQO ↔ Open Delay/Close Delay/Swap Cooldown) and the role of `RteRC` (no decrypted name found for it in `modules/fv.md`).
8. **CHESTPLATE (`field_41935`) absence** from all fv slices while HELMET/LEGGINGS/BOOTS (`field_41934/41936/41937`) are present. Documented, not explained — do not guess.
9. **aQH's 6 private tokens** (`fJTkl, wkefr, OPeMM, pFjbu, aQx, aQt`) — owners unrecovered.
10. **aQJ's 2-entry function table** at `UNK_181c46e40` selected by `(param_2==0)*8` — likely enable/disable, unproven.
11. **JNIEnv slots** `+0xd8`, `+0x518`, `+0x560`, `+0x570` — family identification uncertain (see vtable table).
12. **`Ibyhc` (`cu`)** — no decrypted name and no observed wiring.
13. **`aQB`/`aQC`/`aQD`/`aQK` bodies** — signatures and slice membership are proven; semantics are inferred from signature shape only.