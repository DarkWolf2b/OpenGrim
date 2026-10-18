# Auto Potion (sixtwo.fl) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-full/sixtwo_fl.c` — all 28 native handler decompiles for `sixtwo/fl` (the task's stated `handlers-stitched/` path does not exist in this corpus; `handlers-full/` + `continuations/` are the stitched equivalents). Continuations: `analysis/ghidra/continuations/sixtwo_fl_cont.c` — 315 fragment blocks, 240 ending in `halt_baddata`-truncated indirect jumps; largest fragment is 32 lines. Inner class: `analysis/ghidra/handlers-full/sixtwo_fl$sP.c` (5 handlers) + `sixtwo_fl$sP_cont.c`. All addresses in this doc are image addresses, cited inline like `[18c5e9080]`.
- Java skeleton: `analysis/decompiled/payload-decrypted/sixtwo/fl.java` (CFR, literals folded — authoritative for decrypted constants) and `payload-named/sixtwo/fl.java`, `fl$sP.java`.
- Structural spec: `analysis/specs/modules/fl.md`; framework context: `analysis/specs/modules/00-framework.md` and the sibling spec `analysis/specs/handlers/fa.md`.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` — 98 `bsm aKo (IJ)I` int constants and 3 `bsm aKl (IJ)Ljava/lang/String;` string constants (`" deg"`, `" ms"`, `" ms"`) for `sixtwo.fl`.
- Pool blobs re-resolved with `analysis/tools/resolve_pool_blob.py` (run from `analysis/tools/__pycache__/resolve_pool_blob.cpython-312.pyc`; source file absent) at pool base `0x301ee40` (`*plRam000000018301ee50`).
- Symbol translation: `analysis/jars/yarn-1.21.11+build.6.tiny` (tiny v2).
- Framework classes read directly: `cB`, `cC`, `ct`, `cu`, `cv`, `cw`, `mT`, `mz`, `gv`, `gH`, `gH$th`.

### Recoverability caveat (read first)

Every behavior handler in this class is a *dispatcher stub*: it decrypts one constant-pool blob slice with the blob decryptor (`FUN_190dd72e0(env, poolPtr+off, len)`), calls `(*JNIEnv+0x720)` (`JNI->ExceptionCheck`, vtable index 228), and tail-dispatches through a jump table (`(**)(&UNK_181fXXXXX + (cond)*8)`, "Jumptable … did not pass sanity check") into tiny continuation fragments that each perform one JNI vtable call with `unaff_RSI` register state and end in truncated jumps. Ghidra cannot stitch the fragment chain, so **no Java-level bytecode body of any behavior method is linearly recoverable from this corpus**. Tagging:

- `[decompiled]` — logic visible directly in CFR/decompiler output (Java-side only; all of `aJQ()` and the constructor).
- `[slice]` — handler verifiably decrypts the named pool slice (verified by offset/length).
- `[inferred]` — inferred from descriptor + slice contents + framework contract; NOT from a recovered body.
- `[uncertain]` — cannot be attributed with confidence.

## Runtime model

**What the module is:** `fl extends gg` (module base) with `super(gf.aZL(127, false, gh.xwjCw))` — module id **127**, flag `false`, category `gh.xwjCw` `[decompiled]`. Registry: "Auto Potion — Automatically uses potions", key=127, active bind -999 (unbound). The module scans the player's potions, decides which status-effect potion to use from health/effect triggers, and uses it via a `(hotbarSlot, Hand)` plan.

**Plan type:** `fl$sP` is a record `(int hotbarSlot, Hand hand)` `[decompiled]` — the concrete "which slot, which hand" decision. The chosen (effect, plan) pair is carried in **`mz` = payload Pair record `mz(left, right)` with factory `mz.of(L,R)`** — *not* a map (`mz.java` is `record mz<L,R>(L left, R right)`, matching slice token `(Ljava/lang/Object;Ljava/lang/Object;)Lsixtwo/mz;`). `aJU()` returns `mz<RegistryEntry<StatusEffect>, fl$sP>`: a single (effect → potion plan) decision, or `null` when nothing qualifies `[decompiled signature, inferred]`.

**Trigger gate (the one fully decompiled behavior method):** `public boolean aJQ()` `[decompiled, fl.java:449-488]`:

```java
bl3 = this.NMaDj.SZ();               // "Activation→Auto" option selected? — value is DISCARDED below (junk-insertion artifact)
if (nArray != null) break block9;    // unconditional (nArray is a fresh array); j2cc junk
...
bl3 = fl2.VKJkY.cpC(this.kduLk.VC()); // timer elapsed > Per Potion Delay?
if (!bl3) return false;
if (fl2.aJU() == null) return false;  // no qualifying potion plan
return true;
```

- `VKJkY = mT.cpA()` — a **wall-clock timer** (`mT` wraps `System.currentTimeMillis()`; `cpA()` creates one *without* initializing its start time, i.e. `vJZlo = 0` until someone resets it via `cpB()/cpG(long)` `[decompiled]`).
- `mT.cpC(long delay)` returns `now - vJZlo - delay > 0` (strictly greater) `[decompiled]`. So the gate is "more than **Per Potion Delay** ms since the last timer reset". `kduLk.VC()` is `(int)` of the slider value (default **100**).
- `cu.SZ()` = `enabled && parentMode.SP(this)` — true when the `cu` option is the currently selected option of its `ct` parent `[decompiled]`. The decompiled `aJQ()` computes `NMaDj.SZ()` ("Activation→Auto" selected) and **does not use the result** (dead store under j2cc junk); whether "Auto" gates the trigger is **not recovered** `[uncertain]`.
- The timer reset (`cpB/cpG`) is presumably performed by native code after a potion use, so the effective period is `Per Potion Delay` ms between uses `[inferred, uncertain]` — notably the fl pool slice contains the field token `VKJkY` but **no `mT` method tokens**, so the reset path is not statically attributable.

**Per-effect cooldown state:** `Map<RegistryEntry<StatusEffect>, Long> LKcpH` `[decompiled]` — effect → timestamp (role: per-effect next-allowed-use or last-use, feeding the **Potion Type Delay** behavior) `[inferred, uncertain]`. **Potion Type Delay** defaults to **250 ms** (min 200, max 500, step 10, suffix `" ms"`).

**Buff map:** `AujWt = Map.of(StatusEffects.STRENGTH, cimiv, StatusEffects.SPEED, eLmhr, StatusEffects.FIRE_RESISTANCE, dnrRK)` — the "Buffs" effect → toggle wiring, built in Java `[decompiled]`. The Regeneration side uses the pool token `field_5924` = **`StatusEffects.REGENERATION`** (`Lnet/minecraft/class_6880;`) `[slice]`.

**Health inputs:** the fl slice carries exactly three MC numeric getters on the player: `method_6032` = `LivingEntity.getHealth() → F`, `method_6067` = `getAbsorptionAmount() → F`, `method_6063` = `getMaxHealth() → F` `[slice]`. Both threshold sliders are **percent of max** (suffix `%`, max `100.0`), so the threshold comparison is against effective health `getHealth() (+ getAbsorptionAmount())` vs `getMaxHealth() × pct/100` — the exact formula (whether absorption counts, `<` vs `<=`) is in the VM `[inferred, uncertain]`.

**Events (2 `@hG` listeners, native):**
- `aJP(gH.th)` — `gH$th` is the bare player-tick event marker class `[decompiled]`. Main per-tick driver: evaluate triggers, rebuild the plan `[inferred]`.
- `aJO(gv)` — `gv` is the bare event the aim module (`qL`) fires *immediately before applying a rotation* (`qL.dbN`: `new gv().bdV(); this.dbK()`) `[decompiled]`. Registration implies fl participates in rotation control — consistent with its **Throw Angle (Up/Down)** and **Required Angle** (default **25.0 deg**, max **45.0 deg**) settings (pitch adjustment for splash-throwing at the player's own position) `[inferred, uncertain]`.

**Use mechanism:** no packet class, no `interactionManager`, no swing token appears in fl's slice. The slice does contain the `fl$sP` record constructor descriptor `(ILnet/minecraft/class_1268;)V` and accessors `hotbarSlot` / `hand`, and the module framework's hotbar swap is the standard route. Whether the final use is a hotbar swap + `ItemStack` use (client-side interaction producing `PlayerInteractItemC2SPacket`) and whether splash potions are thrown vs drinkable potions drunk is **not recovered** `[uncertain]`.

### Pool slices (per-handler symbol universes)

| slice (off,len at pool base 0x301ee40) | handlers |
|---|---|
| `[0x3806,0xbf]` — module-base tick slice (shared with all modules, cf. fa.md) | `YO` only |
| `[0x226,0xd]` = `"ang/String;"` + `"<"` | `_1c83e6a4562c3f0af764d393c794ca89` (fl) + all 5 `fl$sP` record handlers |
| `[0x1221a,0x2e8]` — **fl's own symbol table** | aJO, aJP, aJR, aJS, aJT, aJU, aJV, aJW, aJX, aJY, aKa, aKc, aKd, aKe, aKf, aKj, aKm (17 handlers) |
| `[0xb5e7,0x1f7]` — straddles neighboring classes (`ji`, `dS`, `hm`, `dT`, `dU`) | aJZ only |
| `[0x857,0x26]` — indy bootstrap plumbing | aKl, aKo |
| (no blob decrypt) | aKb, aKg, aKi, aKk, aKn |

fl's own slice `[0x1221a,0x2e8]` token-for-token (resolved; tokens after `sixtwo/fm` belong to the next class and are excluded):

```
zVHFr | hotbarSlot | aJI | hand | diCgu | sixtwo/fl | LKcpH | OIIeM | aKh | yCMVU | aJQ |
GrPLO | VGOXA | method_6032 | method_6067 | bBu | oaKvu | VKJkY | dDKQL | kduLk | PfBXr |
method_6063 | aJU | ()Lsixtwo/mz; | sixtwo/mz | aJX | (Lnet/minecraft/class_6880;Lsixtwo/fl$sP;)Z |
rfngy | aJS | WlEOU | aJY | (Lnet/minecraft/class_6880;)Lsixtwo/fl$sP; | aJR | aJV | aJW | aJT |
AujWt | YdqGo | (Ljava/lang/Object;Ljava/lang/Object;)Lsixtwo/mz; | field_5924 | BrVSe | DDOas |
(ILnet/minecraft/class_1268;)V | qXCVd | ZVwSV | VWFIx | aKj | HmfOk | OUXFV | ruNqF | ZeDtJ |
aKi | aKm
```

Reliable MC API surface from this slice `[slice]`:

- `method_6032` = `LivingEntity.getHealth() → F`; `method_6067` = `getAbsorptionAmount() → F`; `method_6063` = `getMaxHealth() → F`.
- `field_5924` = `StatusEffects.REGENERATION` (`Lnet/minecraft/class_6880;`) — the only status-effect constant in the slice; Regeneration logic is native, Strength/Speed/FireResistance come from the Java-built `AujWt`.
- `mz` = Pair record; token `(Ljava/lang/Object;Ljava/lang/Object;)Lsixtwo/mz;` = `mz.of(Object,Object)`.
- `fl$sP` ctor `(ILnet/minecraft/class_1268;)V` (`int, Hand`) + accessors `hotbarSlot`, `hand`.
- Unresolved obfuscated tokens: `zVHFr`, `aJI` (a `fl$sP`-adjacent member), `diCgu`, `bBu` `[uncertain]`. (`method_5707` = `Vec3d.squaredDistanceTo(Vec3d) → D` sits **after** the `sixtwo/fm` boundary token — it belongs to neighbor class `fm`, not fl.)

## Per-handler semantics

### Framework / obfuscation machinery (no module behavior)

- **`YO()V` [18c5e9080]** `[slice 0x3806,0xbf]` — native tick override (base `gg.YO()` = `hF.bdM(this)`). Tick slice tokens (identical to `fa.YO`): `ipLAD`, `Lsixtwo/gg;`, `baf ()Lsixtwo/gc;`, `sixtwo/gc`, `aZg ()Lsixtwo/gd;`, `aZi (Lsixtwo/gd;)Lsixtwo/gc;`, `cnP (FFF)Lsixtwo/mG;`, `gx`. Reads the per-module tick-gate container (`gg.baf()` → `gc`), reads/writes the 2-state tick enum `gd` (`gc.aZg()` / `gc.aZi(gd)`), can construct an RGB color via `mG.cnP(float,float,float)`, and references the bare event marker `sixtwo/gx`. Whether the gate is flipped per tick and any color values are **not recovered** `[inferred]`.
- **`_1c83e6a4562c3f0af764d393c794ca89()V` [18c665220]** `[slice 0x226,0xd]` — native clinit stub (`Loader.doInit(fl.class)` plumbing; slice resolves `java/lang/String` / `<init>`). No module behavior `[decompiled]`. The same slice serves all 5 `fl$sP` record handlers [18c6bb900 equals, 18c6bccf0 hand, 18c6ba770 hashCode, 18c6bcaf0 hotbarSlot, 18c6b96c0 toString] — record plumbing `[decompiled structure]`.
- **`aKh(MatchException)MatchException` [18c60cfe0]** — decompiled body `return param_3;` — identity rethrow for the CFR `MatchException` pattern. No behavior `[decompiled]`.
- **`aKj(IJ)I` [18c64b2a0] and `aKm(IJ)I` [18c655e00]** — the two j2cc **int-constant decrypt kernels** (desc `(IJ)I`, matching full-dump `bsm aKo` entries for `sixtwo.fl`). ~500 lines each of key mixing over globals `uRam1833 0fxxx` / `uRam1833 0fxxx` with verbatim constants including `0xca6ea16f69755315`, `0x84222325`, `0x84225cda`, `0x2e0060c93284b8fd`, `0x5aa63505d8ce02eb`, `0x6992c510ff27c4bd`, `0x16005977ffda2f`, popcount/clz-style bit tricks, rotates by `0x1d`/`0x3a`/`0x1b`/`0x15`/`0x18`/`0x3c`, and repeated calls to the payload PRNG helper `func_0x18c6523c0` / `func_0x18c661470`. Both decrypt fl's main slice `[0x1221a,0x2e8]` at their tails and tail-dispatch. **Anti-analysis machinery — not module behavior.** Observable contract (full-dump.jsonl): `(int off, long key) → decrypted int`; 98 constants recovered, e.g. module id `127` (args `[8801, 3170240928462631932]`), and the ASCII bytes of all setting names `[decompiled machinery]`.
- **`aKi([B)Ljava/lang/String;` [18c622d00]** — byte[]→String decryptor for the static obfuscation string arrays `ruNqF`/`ZVwSV` (both `String[]` statics in fl). No blob decrypt; two-way jump-table tail `[decompiled structure]`.
- **`aKk(Lookup;MutableCallSite;String;[Object;)Object` [18c652450] / `aKn(... )I` [18c661500]** — indy bootstrap + `MutableCallSite` re-bootstrap fallbacks (cache invalidation). Empty decompiles `[decompiled stub]`.
- **`aKl(Lookup;String;MethodType;)CallSite` [18c653340] / `aKo(...)` [18c662510]** `[slice 0x857,0x26]` — indy bootstraps; slice tokens `"odHandle;"` (tail of `Ljava/lang/invoke/MethodHandle;`), `"iUrOn"`, `"Ljava/util/Map;"` — standard bootstrap plumbing. `aKo` is the bootstrap used by all 98 decrypted ints and the 3 decrypted strings (`" deg"`, `" ms"`, `" ms"`) `[decompiled machinery]`.

### Event listeners (behavior bodies in VM)

- **`aJP(gH.th)V` [18c60d070]** — player-tick listener `[decompiled signature]` `[slice 0x1221a]`. Main slice contains the complete trigger/plan symbol set (`method_6032/6067/6063`, `field_5924`, `LKcpH`, `AujWt`, `VKJkY`, `kduLk`, `aJU/aJW/aJX/aJY`, `fl$sP` ctor/accessors), so the tick path can read health/absorption, evaluate the Regeneration trigger (`REGENERATION`), consult per-effect cooldowns, and consume plans `[inferred]`. Sequence not recovered `[uncertain]`.
- **`aJO(gv)V` [18c5e94b0]** — pre-rotation event listener (fired by aim module `qL` before it applies a rotation) `[decompiled signature]` `[slice 0x1221a]`. Consistent with rotation control for splash throw angle (`Throw Angle` Up/Down, `Required Angle` 25.0/45.0 deg) `[inferred, uncertain]`.

### Triggers / predicates (all `→ boolean` / `→ Boolean`, single VM decision)

- **`aJU()Lsixtwo/mz;` [18c690910]** `[slice 0x1221a]` — build/return the current plan `mz.of(effect, new fl$sP(hotbarSlot, hand))` (both the `mz.of` descriptor and the record ctor descriptor are in the slice); `null` when nothing qualifies. The scan input (hotbar only vs full inventory) is not recoverable from the slice — the `hotbarSlot` record field suggests hotbar-first selection `[slice, inferred, uncertain]`.
- **`aJW()V` [18c6acd40]** `[slice 0x1221a]` — the action: consume the current plan (select `hotbarSlot`, use `hand`). Slice contains `aJW` between `aJV` and `aJT`; no MC interaction tokens are exposed, so the exact use call is in the VM `[inferred, uncertain]`.
- **`aJX(RegistryEntry<StatusEffect>, fl$sP)Z` [18c6b3cc0]** `[slice 0x1221a]` — plan validator: is the plan for this effect still valid (potion still there / effect still wanted) `[inferred]`.
- **`aJY(RegistryEntry<StatusEffect>)Lsixtwo/fl$sP;` [18c5f2960]** `[slice 0x1221a]` — lookup: which `(hotbarSlot, hand)` provides the given effect `[inferred]`.
- **`aJZ(RegistryEntry, ItemStack)Z` [18c5f9ec0]** `[slice 0xb5e7,0x1f7]` — potion-stack ↔ effect test. The straddling slice carries `Lnet/minecraft/class_6880;` and `(Lnet/minecraft/class_1799;Lnet/minecraft/class_6880;)Z` (an arg-swapped twin, neighbor helper `ji.bCw`), i.e. "does this ItemStack (potion) contain this RegistryEntry<StatusEffect>" `[slice, inferred]`.
- **`aKa(int, Map$Entry)Z` [18c5fa050]** — synthetic stream filter `(int, Map.Entry) → boolean` `[decompiled signature, slice 0x1221a]` — candidate filter while iterating (index, entry) pairs during the potion scan `[inferred, uncertain]`.
- **`aJR()Z` [18c680b60], `aJV()Z` [18c6a0cb0]** `[slice 0x1221a]` — unwired boolean gates. Typical roles: module-enabled / prerequisites-met checks `[inferred, uncertain]`.
- **`aJS()Z` [18c6876c0], `aJT()Z` [18c68bbb0]** `[slice 0x1221a]` — wired as GUI visibility suppliers: `oMlyx("Healings").Vf(this::aJS)` and `SOdOD("Buffs").Vf(this::aJT)` respectively (`cB.Vf(Supplier<Boolean>)` stores the supplier as the setting's visibility predicate) `[decompiled wiring, inferred]`.

### Setting-visibility suppliers (`()Ljava/lang/Boolean;`)

All six are wired in the constructor via `Vf(Supplier<Boolean>)` and are pure VM decisions; each hides/shows its setting in the GUI `[decompiled wiring]`:

- **`aKb() [18c5fb550]`** — visibility of `VGOXA` **"Potion Type Delay"** (no blob decrypt).
- **`aKc() [18c5fb9a0]`** — visibility of `DDOas` **"Regeneration Trigger"** `[slice 0x1221a]`.
- **`aKd() [18c600260]`** — visibility of `BrVSe` **"Regeneration Threshold"** `[slice 0x1221a]`.
- **`aKe() [18c604550]`** — visibility of `oaKvu` **"Heal Threshold"** `[slice 0x1221a]`.
- **`aKf() [18c6088b0]`** — visibility of `rKSxQ` **"Heal Until"** `[slice 0x1221a]`.
- **`aKg() [18c60cb90]`** — visibility of `WlEOU` **"Required Angle"** (no blob decrypt).

## Settings → behavior mapping

Verified semantics of the `cC` builder chain from `cC.java`: `Vy(d)` = **step/increment** (`HqniU`, floored at 0, values rounded to a multiple of it), `Vw(d)` = **min** (`bYxsv`), `Vx(d)` = **max** (`WhuQX`), `VA(d)` = **current/default value** (clamped to [min,max]), `Vz(s)` = **suffix string**. `VC()` returns `(int)` of the value; `VD()` the long form. `ct` = exclusive mode setting (`List<cu>` options + selected index, default **0**); `cu.SY()` makes that option the selected default; `cv` = multi-select group of `cw` toggles; `cw.Tz()` adds the toggle to the group's *selected* list → **default ON** `[decompiled]`.

| field | type | name (exact) | builder chain (verbatim) | derived semantics |
|---|---|---|---|---|
| `dDKQL` | ct | `Mode` | `new ct(this, mr.clS({77,111,100,101}))` | Potion strategy mode; options below; default index 0 → **Heal** `[decompiled, inferred]` |
| `rVExA` | cu | `Heal` | `new cu(dDKQL, {72,101,97,108})` | Mode option: healing potions only |
| `GGmyQ` | cu | `Buff` | `new cu(dDKQL, {66,117,102,102})` | Mode option: buff potions only |
| `MEzpo` | cu | `Both` | `new cu(dDKQL, {66,111,116,104})` | Mode option: both |
| `yCMVU` | ct | `Activation` | `new ct(this, {65,99,116,105,118,97,116,105,111,110})` | Activation behavior; default index 0 → **Auto** `[decompiled, inferred]` |
| `NMaDj` | cu | `Auto` | `new cu(yCMVU, {65,117,116,111})` | Option; read (then discarded) by `aJQ()` — role not recovered `[uncertain]` |
| `vqHqt` | cu | `Look` | `new cu(yCMVU, {76,111,111,107})` | Option — plausibly "only when looking/at target" `[inferred, uncertain]` |
| `GrPLO` | ct | `Throw Angle` | `new ct(this, {84,104,114,111,119,32,65,110,103,108,101})` | Pitch direction for splash throws; default index 0 → **Up** `[decompiled, inferred]` |
| `tyFzT` | cu | `Up` | `new cu(GrPLO, {85,112})` | Throw looking up |
| `jvMbr` | cu | `Down` | `new cu(GrPLO, {68,111,119,110}).SY()` | Throw looking down — **default selected** |
| `SOdOD` | cv | `Buffs` | `new cv(this, {66,117,102,102,115})` | Buff-potion group (wired to `aJT` visibility) |
| `cimiv` | cw | `Strength` | `new cw(SOdOD, {83,116,114,101,110,103,116,104}).Tz()` | Use Strength potions — default ON; mapped to `StatusEffects.STRENGTH` in `AujWt` |
| `eLmhr` | cw | `Speed` | `new cw(SOdOD, {83,112,101,101,100}).Tz()` | Use Speed potions — default ON; `StatusEffects.SPEED` |
| `dnrRK` | cw | `Fire Resistance` | `new cw(SOdOD, {70,105,114,101,32,82,101,115,105,115,116,97,110,99,101}).Tz()` | Use Fire Resistance potions — default ON; `StatusEffects.FIRE_RESISTANCE` |
| `oMlyx` | cv | `Healings` | `new cv(this, {72,101,97,108,105,110,103,115})` | Healing group (wired to `aJS` visibility) |
| `rfngy` | cw | `Instant Healing` | `new cw(oMlyx, {73,110,115,116,97,110,116,32,72,101,97,108,105,110,103}).Tz()` | Use Instant Healing potions — default ON |
| `YdqGo` | cw | `Regeneration` | `new cw(oMlyx, {82,101,103,101,110,101,114,97,116,105,111,110}).Tz()` | Use Regeneration potions — default ON; pairs with `field_5924` = `StatusEffects.REGENERATION` in the native logic |
| `DDOas` | ct | `Regeneration Trigger` | `new ct(this, {82,101,103,101,110,101,114,97,116,105,111,110,32,84,114,105,103,103,101,114})` | When to consider a regen potion; default index 0 → **No Effect** `[decompiled, inferred]` |
| `TTfND` | cu | `No Effect` | `new cu(DDOas, {78,111,32,69,102,102,101,99,116})` | Trigger when the player has **no** Regeneration effect (`method_5707`-style `hasStatusEffect` check is in the VM) `[inferred, uncertain]` |
| `qXCVd` | cu | `Threshold` | `new cu(DDOas, {84,104,114,101,115,104,111,108,100})` | Trigger based on the `Regeneration Threshold` slider instead |
| `BrVSe` | cC | `Regeneration Threshold` | `Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%")` | step 0.1, min 1.0, max 100.0, **default 60.0 %** (wired to `aKd` visibility) |
| `WlEOU` | cC | `Required Angle` | `Vy(0.1).Vw(1.0).Vx(45.0).VA(25.0).Vz(" deg")` | step 0.1, min 1.0, max 45.0, **default 25.0 deg** (wired to `aKg`; consumed by the rotation path `aJO`) |
| `rKSxQ` | ct | `Heal Until` | `new ct(this, {72,101,97,108,32,85,110,116,105,108})` | Healing stop condition; default index 0 → **Reaches Threshold**; wired to `aKf` |
| `PEysr` | cu | `Reaches Threshold` | `new cu(rKSxQ, {82,101,97,99,104,101,115,32,84,104,114,101,115,104,111,108,100})` | Keep healing while below threshold |
| `PfBXr` | cu | `Full Health` | `new cu(rKSxQ, {70,117,108,108,32,72,101,97,108,116,104}).SY()` | Heal all the way to full health — **default selected** |
| `oaKvu` | cC | `Heal Threshold` | `Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%")` | step 0.1, min 1.0, max 100.0, **default 60.0 %** (wired to `aKe`) |
| `VGOXA` | cC | `Potion Type Delay` | `Vy(10.0).Vw(200.0).Vx(500.0).VA(250.0).Vz(" ms")` | step 10.0, min 200.0, max 500.0, **default 250.0 ms** (wired to `aKb`) |
| `kduLk` | cC | `Per Potion Delay` | `Vy(10.0).Vw(0.0).Vx(1500.0).VA(100.0).Vz(" ms")` | step 10.0, min 0.0, max 1500.0, **default 100.0 ms** — the global gate delay used verbatim by `aJQ()` (`VKJkY.cpC(kduLk.VC())`) `[decompiled]` |

Instance state carried across ticks `[decompiled]`: `AujWt` (buff effect→toggle map), `LKcpH` (`Map<RegistryEntry<StatusEffect>, Long>` — per-effect cooldown timestamps `[inferred]`), `VKJkY` (`mT` wall-clock timer). Statics `OIIeM` (long, key-mix seed used as `OIIeM ^ 0x2E0EE2DFDB1DL` in the ctor and `OIIeM ^ 0x27DE6A2F186DL` in `aJQ`), `ruNqF`/`ZVwSV` (`String[]`), `VWFIx`/`ZeDtJ` (`Map`), `OUXFV` (`long[]`), `HmfOk` (`Integer[]`) are obfuscation-runtime state `[decompiled]`.

Reconstructed trigger sketch (framework contract only; every comparison lives in the VM):

```
on gH$th tick:                        [18c60d070]
  if aJQ():                            // timer > Per Potion Delay && plan exists
      plan = aJU()                     // mz(effect, fl$sP(hotbarSlot, hand))
      if aJX(effect, plan): aJW()      // validate, then use
  per-effect gating via LKcpH + Potion Type Delay (250 ms default)
on gv (pre-rotation):                  [18c5e94b0]
  adjust/validate pitch vs Throw Angle (Up/Down) + Required Angle (25.0/45.0 deg)
```

## Unrecovered / uncertain

- **All VM bodies.** Every behavior handler (`YO`, `aJO`, `aJP`, `aJR`, `aJS`, `aJT`, `aJU`, `aJV`, `aJW`, `aJX`, `aJY`, `aJZ`, `aKa`, `aKb`, `aKc`, `aKd`, `aKe`, `aKf`, `aKg`) is a decrypt-slice → `ExceptionCheck` → jump-table stub; the 315 continuation fragments (largest 32 lines) each hold ≤2 JNI vtable calls with `unaff_RSI` state and end in `halt_baddata`-truncated jumps. No linear recovery.
- **Exact health formula.** `getHealth` / `getAbsorptionAmount` / `getMaxHealth` are all in the slice, but whether absorption is added, and the exact comparison direction at `Heal Threshold` / `Regeneration Threshold` (60.0 % defaults), is not recovered.
- **Hotbar vs inventory scan.** `fl$sP.hotbarSlot` is an `int` slot; whether the scan covers the full inventory (`aKa`'s `(int, Map.Entry)` filter suggests an indexed iteration) and how the swap back happens is unrecovered. The exact "use" call in `aJW` (client interaction → which packets) is unrecovered — no packet/interaction tokens exist in any fl slice.
- **Splash vs drink.** Nothing in the slices distinguishes splash-throwing from drinking; the `Throw Angle`/`Required Angle` rotation path (`aJO`) implies self-splash throws, but the mapping from `Mode` (Heal/Buff/Both) and potion type to throw vs drink is not recovered.
- **`aJQ()` dead store.** `NMaDj.SZ()` ("Activation→Auto" selected) is computed and discarded in the decompiled `aJQ()`; the real bytecode may or may not gate the trigger on it.
- **Timer reset path.** `VKJkY` is created via `mT.cpA()` (start time = 0); the `mT.cpB/cpG` reset call is not attributable to any fl slice token, so the exact period semantics of `Per Potion Delay` are inferred.
- **`LKcpH` value semantics** (last-use time vs next-allowed time, and which of `Potion Type Delay` / `Per Potion Delay` feeds it) — unrecovered.
- **Unresolved slice tokens:** `zVHFr`, `aJI`, `diCgu`, `bBu` (fl slice); the `Tlzw`-style small-token guard pattern seen in siblings does not appear here.
- **`YO()` tick-gate behavior** — whether `YO` flips the 2-state tick enum (`gd {ipLAD, …}`) each tick, and the `mG.cnP(FFF)` color values, are unrecovered.
- **Two decrypt kernels** (`aKj` @ [18c64b2a0], `aKm` @ [18c655e00], both `(IJ)I`) — duplicate j2cc machinery; neither is module behavior. `rdtsc` pairs inside them and in continuation [18c679718] are anti-trace noise; none gate recovered logic.
