# Trigger Bot (sixtwo.fF) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fF.c` — 13 native handlers + 142 continuation blocks (5,991 lines).
- CFR sources: `analysis/decompiled/payload-named/sixtwo/fF.java`, `analysis/decompiled/payload-decrypted/sixtwo/fF.java` (literals folded — setting names recovered as exact char codes).
- Structure spec: `analysis/specs/modules/fF.md` (registry identity: `sixtwo.fF|Trigger Bot|Automatically hits entity when in range|key=1|bind=-999`).
- Supporting classes read in full/partially (all under `analysis/decompiled/payload-named/sixtwo/`):
  - `ox.java` — crosshair raycast builder (fully Java-visible body for `cHn()` — the core detection math).
  - `iX.java` (`bxM(PlayerEntity)` crit-feasibility check, real body), `jg.java` (`bBs` cobweb check, real body), `oV.java` (`cLb` native range transform).
  - `cF.java` (entity-type target filter), `ct.java`/`cu.java` (option group + option), `cz.java` (hotbar slot set), `cJ.java` (boolean toggle), `cD.java` (mouse-button int setting), `mA.java` (mouse-button enum), `jg$tJ.java` (3-constant enum).
  - Neighbor modules sharing fF's interpreted pool blob: `fE` = No Miss, `fG` = W-Tap, `fH` = Aim Assist, `fg` = Target Lock (`aIT(Entity)`).
- Framework context: `analysis/ghidra/framework-findings.md` (event bus `hF` is Java; module enable/disable = listener registration; j2cc handler bodies decrypt lazily against a live JVM).
- Decrypted strings: `analysis/decrypted/full-dump.jsonl` (no fF dropdown-option strings recovered there).

**Decompilation reality check (applies to every handler below):** each interpreted handler compiles to (a) a ~300–500-line keyed constant-mixing preamble (opaque whitelist arithmetic feeding global state), then (b) a `BLOB_DECRYPTOR(env, blob+off, len)` call that decrypts the method's constant pool, then (c) `JNI->ExceptionCheck` followed by a 2-way indirect jump through `&UNK_18xxxxxxx[(cond)*8]`. Ghidra flags every such jump as "did not pass sanity check". Per `framework-findings.md`, the true bytecode is decrypted lazily against a live JVM, so **the bodies of aST/aSU/aSV/aSW are not statically recoverable**. What IS recoverable and reliable: the decrypted pool contents (`/* POOL[off,len] */` annotations), which enumerate every field/class/method/descriptor the interpreted body touches, and the fully-Java-visible helpers (`ox`, `iX.bxM`, `jg.bBs`, `cF.VX`) they call into.

- No `rdtsc` reads occur anywhere in this corpus (unlike some other modules) — no anti-trace timing gates to discount.

## Runtime model

**Lifecycle.** `fF extends gg` (module base). Constructed with `gf.aZL(1, false, gh.xwjCw)` → registry key 1, not a toggle-by-default module. Per framework findings (`gg.baa`/`gg.aaj` → `hF.bdI`), the `@hG` handler `aST` is registered with the Java event bus when the module is enabled and removed on disable. `aST` is annotated `@hG(priority=mw.HIGH)`, so among tick listeners it fires before NORMAL-priority ones.

**Event.** `gH$th` (`gH.th`) is the client-tick event payload (empty shell class; payload carries no recoverable fields). One handler consumes it: `aST`.

**Detection = crosshair raycast, not proximity scan.** The interpreted tick body references `ox` method `cHk` and the descriptor `(Ljava/util/function/Predicate;)Lsixtwo/ox;`, i.e. it builds the fluent crosshair raycaster `ox.cGV()` and attaches a `Predicate<LivingEntity>` via `ox.cHk(...)`, then extracts the hit entity. `ox` is fully decompiled, so the exact detection math is known (below). Detection is therefore "whatever the camera is looking at", governed by the `Range` setting — not an entity scan.

Exact `ox.cHn()` math (from `ox.java:83–219`, Java-visible):

```python
caster   = camera_entity                      # ox.cGV() = new ox(rD.dlmvG.getCameraEntity())
range    = configured_range                   # rnYFy, default 3.0; set via ox.cHe(double)
if XIKjc and caster == local_player:          # XIKjc default true
    range = oV.cLb(range)                     # NATIVE transform of the range (likely Reach-aware); formula unrecovered
start    = caster.getEyePos()
dir      = rD.dlX().dbC().cGH()               # camera look direction (Vec3d)
end      = start + dir * range
if not ignore_walls:                          # fmYuI, set by ox.cHf(boolean)
    blockHit = world.raycast(RaycastContext(start, start+dir*range, ShapeType.OUTLINE, FluidHandling.NONE, caster))
    if blockHit.type == BLOCK:
        d = blockHit.pos.squaredDistanceTo(start)
        if d < range*range:
            end = start + dir * sqrt(d)       # clamp end at the wall (squared compare, then Math.sqrt)
searchBox = caster.getBoundingBox().stretch(dir*range).expand(1.0, 1.0, 1.0)
hit = ProjectileUtil.raycast(caster, start, end, searchBox,
                             e -> e.isSpectator() || entityPredicate.test(e),
                             range*range)
```

Defaults in `ox` (if fF does not override them — see uncertainties): `range=3.0`, `ignoreWalls=false`, `ShapeType.OUTLINE`, `FluidHandling.NONE`, `XIKjc=true`.

**Trigger decision (reconstructed; bodies native).** On each tick where the module is active, the body:

1. Gating checks — reads `VImHE` (Cancel In Screens), `gBIsx` (Cancel On Use) + `LQzFK` (Cancel Use Mode), `HWaak` (When Holding) + `MftPL` (Hold Key mouse button). These plausibly suppress the trigger while a screen is open, while using an item (mode-filtered: `All Items` / `Allow Shielding`), and require the bound mouse button to be held (`When Holding`) [inferred — the checks are name-level only].
2. Target predicate — reads `cdAZQ` (`Target` entity-type filter, `cF.VX(Entity)`), `dsIVg`/`dsyYm`/`RObGI`/`kiwwU` (Ignore Walls→`ox.cHf`, Ignore Friends, Ignore Naked, Ignore When Shielding, Ignore In Damage Tick) and `fg.aIT(Entity)` (Target Lock's "is this the locked target" test) [inferred conjuncts; the pool proves only that these settings and `aIT` are referenced].
3. Attack execution — reads `jwWNp` (Simulate Clicks), `JEhiJ` (Un Press Shield), `sXFbg` (Upper Cut), `hdxUq` (Critical Mode), `iX.bxM(player)` crit-feasibility, and the hit-delay settings `rIJAy`/`eImKU`. It also touches `fG` (W-Tap) state fields `HrnPx`, `QYvrB`, `deLoo(long)` and `fH` (Aim Assist) target `aTx()`/field `JXduj` — exact cooperation semantics unknown (see uncertainties).

**Attack-cooldown modes ("Hit Delay Mode", `ct` option group).** Two options (child `cu`s): `Item Cooldown` (`gLvlK`) and `Timer` (`hMopD`). The two numeric sliders are visibility-bound to the interpreted callbacks `aSV` (Cooldown slider) and `aSU` (Timer slider), i.e. exactly one of them is active at a time [inferred from the `.Vf` visibility binding pattern and option names].

**Crit handling.** `Critical Mode` (`ct`) with options `None` / `Prioritize Crits` / `Only Crits` (children `oMwcs`/`oTXIW`/`AtBDT` — note: only the parent `ct` appears in the pool, consistent with index-based selection via `ct.SQ(int)` where the index constant is produced by the `(IJ)I` decrypt helper `aTc`). The pool references `iX.bxM(PlayerEntity)`, the client-side "cannot crit" environment check:

`iX.bxM(p)` returns **true** (crit impossible / attack discouraged) if any of:
- `p.hasStatusEffect(StatusEffects.BLINDNESS)`
- `p.hasStatusEffect(StatusEffects.LEVITATION)`
- inside cobweb — `jg.bBs(p)`: iterates `floor(minX..maxX) × floor(minY..maxY) × floor(minZ..maxZ)` of the bounding box, returns true if any contained block position's state `isOf(Blocks.COBWEB)`
- `p.isSubmergedInWater()`
- `p.isInLava()`
- `p.isClimbing()`
- `p.getAbilities().flying`

`Upper Cut` (`sXFbg`, default false) is a standalone toggle sitting next to `bxM` in pool order — most plausibly a forced jump-before-hit option [inferred].

## Per-handler semantics

All handlers: `(JNIEnv* env, ...)`; the `param_1` pointer is the JNIEnv. Image addresses cited as `[18xxxxxxx]`.

| # | Method (descriptor) | Image | What the decompile actually contains |
|---|---|---|---|
| 1 | `_a8e2baaa9a1887663570348d5ce6a137()V` — class init | [18ae684a0] | Decrypts init pool `POOL[0x226,0xd]` = fragment `"ang/String; | <"` (i.e. `java/lang/String;` + `<init>`); then ExceptionCheck 2-way jump. Bootstraps the class's decrypt infrastructure (`foCtx`, string tables `KkvzL`/`nWCXe`, caches `vQdJp`, `hDdWr`, `YpcbG`, `vfhdM`). |
| 2 | `aST(Lsixtwo/gH$th;)V` — **tick handler** | [18ae4c850] | ~10 lines: decrypts the shared method pool `POOL[0x1436a,0x32a]`, ExceptionCheck, jump. Real body interpreted (see pool analysis below). |
| 3 | `aSU()Ljava/lang/Boolean;` — visibility callback for `eImKU` (Timer ms) | [18ae64330] | Pure dispatch stub: 2-way jump `&UNK_1819e7320[(param_2==0)*8]` — only a null-vs-real-`this` test is visible; body interpreted. |
| 4 | `aSV()Ljava/lang/Boolean;` — visibility callback for `rIJAy` (Cooldown) | [18ae847f0] | Same shape as aSU (`&UNK_1819eb5b0`). |
| 5 | `aSW()Ljava/lang/Boolean;` — visibility callback for `QcPEg` (Slots) | [18ae84c40] | Same shape as aSU (`&UNK_1819eb790`). |
| 6 | `aSX(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | [18ae85090] | **Fully recovered — identity function: `return param_3;`.** The synthetic MatchException rethrow trampoline (obfuscation plumbing; not behavior). |
| 7 | `aSY([B)Ljava/lang/String;` — byte[] string decryptor | [18ae85120] | Dispatch stub; continuation blocks implement it with `GetArrayLength`/`GetPrimitiveArrayCritical`/`ReleasePrimitiveArrayCritical` and `SetCharArrayRegion` writes at [blocks near lines 4126/4206 of corpus]. Payload runtime — string-decryption plumbing, no module behavior. |
| 8 | `aSZ(IJ)Ljava/lang/String;` — table string decryptor `(int idx, long key)` | [18aeb33c0] | ~430 lines of opaque keyed mixing (per-site globals such as `0x84222325`, `0x912cb8378d051528`, rotations `<<0x1d`, `*0x2000`-masks, popcount chains) then pool decrypt + dispatch. This is the whitelist/constant-decrypt state machine — anti-trace noise, no module behavior. |
| 9 | `aTa(Lookup;MutableCallSite;String;Object[])Object` | [18aeb9c10] | Dispatch stub (`&UNK_1819f3ed0`). invokedynamic fallback bootstrap. |
| 10 | `aTb(Lookup;String;MethodType)CallSite` | [18aebab00] | Decrypts `POOL[0x857,0x26]` = `"odHandle; | iUrOn | Ljava/util/Map; | java/l"` (fragments of `java/lang/invoke/MethodHandle`, `java/util/Map`, `java/lang/invoke/…`); bootstrap infra only. |
| 11 | `aTc(IJ)I` — int decryptor `(int idx, long key)` | [18aebd5c0] | ~570 lines of the same opaque mixing pattern (globals `0x84222325`, `0x8cae0d97b4799800`, `0x7351f2684b866800`, …; popcount-based mask extraction); then pool decrypt + dispatch. Produces the decrypted int constants (e.g. option indices) consumed by interpreted bodies. |
| 12 | `aTd(Lookup;MutableCallSite;String;Object[])I` | [18ae64780] | Dispatch stub (`&UNK_1819e74f0`). invokedynamic int fallback. |
| 13 | `aTe(Lookup;String;MethodType)CallSite` | [18ae65790] | Same pool blob as aTb (`0x857,0x26`). Bootstrap for the `aTe("z", idx, key)` int-constant callsites used heavily in the (pre-fold) constructor. |

**The aST pool (`POOL[0x1436a,0x32a]`) — complete token list, with attribution.** This blob is shared by the interpreted bodies of the class group containing fE (No Miss), fF, fG (W-Tap), fH (Aim Assist); the annotation is truncated mid-token (`JXdu…`), so the tail is lost. Tokens:

- fF decrypt infra (not behavior): `aSX aSZ aSY aTc foCtx KkvzL nWCXe vQdJp hDdWr YpcbG vfhdM`
- **fF settings referenced by the tick body** (the load-bearing evidence): `VImHE` (Cancel In Screens), `Nlyhu` (Items To Use), `VtwAF` (Hit Delay Mode), `QcPEg` (Slots), `gBIsx` (Cancel On Use), `LQzFK` (Cancel Use Mode), `HWaak` (When Holding), `vQdJp`, `MftPL` (Hold Key), `cdAZQ` (Target), `dsIVg` (Ignore Friends), `dsyYm` (Ignore Naked), `RObGI` (Ignore When Shielding), `VvKfB` (Range), `pPuZs` (Ignore Walls), `sXFbg` (Upper Cut), `hdxUq` (Critical Mode), `rIJAy` (Cooldown), `eImKU` (Timer ms), `JEhiJ` (Un Press Shield), `jwWNp` (Simulate Clicks), `kiwwU` (Ignore In Damage Tick).
- Crosshair raycast: `cHk` (ox.cHk — attach `Predicate<LivingEntity>`) and the descriptor `(Ljava/util/function/Predicate;)Lsixtwo/ox;`.
- Target Lock interplay: `aIT` (fg.aIT(Entity) — "is this the locked target").
- Crit feasibility: `bxM` (iX.bxM(PlayerEntity), body fully recovered — see above).
- W-Tap interplay: `sixtwo/fG` + fields `HrnPx` (boolean), `QYvrB` (boolean), `deLoo` (long timestamp).
- Aim Assist interplay: `sixtwo/fH` + `aTx` (fH's private `LivingEntity aTx()` current-target getter) + `JXdu…` (truncated — fH's `JXduj` LivingEntity target field).
- No Miss / fE tokens (`HUW mcfaS JDHpD vDVkv zeyXv aSQ`) and fG decrypt helpers (`aTn aTo aTp aTs`, statics `UXeQf dPMvB SjiqK FpKBj KEbwq NDFbm MdrLn`, fields `xHSEs AqVee XOUKT XUvTV PWSXA RJFVs abWbk YNgob VqvZM DyNeX`) belong to the shared blob but to those classes' own bodies; do **not** attribute them to fF.

Notably absent from the pool: `ArEzX` (Weapon Only), `SYWdC` (Custom Slots), `xUGku` (Attack Options), `xkdUO` (Target Options), `oMwcs`/`oTXIW`/`AtBDT` (Critical Mode options), `Dkoqc` (All Items), `owwxU` (Allow Shielding), `gLvlK`/`hMopD` (Hit Delay Mode options). This is consistent with `ct` option groups being read via index checks (`ct.SQ(int)` with `aTc`-decrypted indices) and `cv`/`ct` headers being pure UI containers — the leaf *booleans* under `cv` (`cw` type) that ARE read appear individually. The `cu` option children under `ct` groups are only reachable through their parent.

## Settings → behavior mapping

Exact decrypted names (from the folded constructor, `payload-decrypted/sixtwo/fF.java`); builder chains verbatim (`UG`=step, `UE`=min, `UF`=max, `UI`=default, `UH`=suffix, `WE`=bool default, `VO`=default button, `Vy/Vw/Vx/VA`= step/min/max/default for `cC`):

| field | type | name | construction (exact) | behavioral role [confidence] |
|---|---|---|---|---|
| cdAZQ | cF | `Target` | `.VS(jg$tJ.OCdZM)` | Entity-type filter (`cF.VX(Entity)` checks `EntityType` membership in two sets; `VS` presets one of 3 enum modes `frJIr`/`OCdZM`/`iBGoL`, default the middle one). Pool-proven read. |
| Nlyhu | ct | `Items To Use` | — | Option group; children: Weapon Only, Custom Slots. Parent read pool-proven. |
| ArEzX | cu | `Weapon Only` | parent Nlyhu | Option of Nlyhu; not directly pool-read (index check via parent). |
| SYWdC | cu | `Custom Slots` | parent Nlyhu | Option of Nlyhu. |
| QcPEg | cz | `Slots` | `{83,108,111,116,115}` = "Slots"; `.Vf(this::aSW)` | Hotbar slot set (`cz.Uy()` = "current selected slot ∈ set"). Visible per `aSW` — most plausibly when `Items To Use` = Custom Slots [inferred]. |
| VtwAF | ct | `Hit Delay Mode` | — | Option group; children Item Cooldown / Timer. Pool-proven read. |
| gLvlK | cu | `Item Cooldown` | parent VtwAF | Option of VtwAF. |
| hMopD | cu | `Timer` | parent VtwAF | Option of VtwAF. |
| rIJAy | cA | `Cooldown` | `.UG(0.01).UE(0.0).UF(1.0).UI(0.9, 0.9)`; `.Vf(this::aSV)` | Slider 0.0–1.0 step 0.01 default **0.9**. Attack-cooldown-progress-style threshold (fraction of vanilla attack charge) [inferred from name + Item Cooldown mode]. Visible per `aSV`. |
| eImKU | cA | `Timer` | `.UG(1.0).UE(0.0).UF(1000.0).UI(600.0, 600.0).UH(" ms")`; `.Vf(this::aSU)` | Slider 0–1000 step 1 default **600 ms**. Minimum ms between triggered hits [inferred]. Visible per `aSU`. |
| xUGku | cv | `Attack Options` | — | Container. |
| JEhiJ | cw | `Un Press Shield` | parent xUGku | Release shield (stop blocking) before/around the triggered hit [inferred]. Pool-proven read. |
| jwWNp | cw | `Simulate Clicks` | parent xUGku | Press/release the attack button instead of swinging directly [inferred]. Pool-proven read. |
| xkdUO | cv | `Target Options` | — | Container. |
| pPuZs | cw | `Ignore Walls` | parent xkdUO | When true → `ox.cHf(true)` (skip the block-clamp so targets behind glass/walls count) [inferred mapping]. Pool-proven read. |
| dsIVg | cw | `Ignore Friends` | parent xkdUO | Exclude friend-list entities from the predicate [inferred]. |
| dsyYm | cw | `Ignore Naked` | parent xkdUO | Exclude entities with no armor [inferred]. |
| kiwwU | cw | `Ignore In Damage Tick` | parent xkdUO | Exclude entities that took damage this tick [inferred]. |
| RObGI | cw | `Ignore When Shielding` | parent xkdUO | Exclude blocking/shielded entities [inferred]. |
| hdxUq | ct | `Critical Mode` | — | Option group; children None / Prioritize Crits / Only Crits. Pool-proven read (index-based). |
| oMwcs | cu | `None` | parent hdxUq | Option. |
| oTXIW | cu | `Prioritize Crits` | parent hdxUq | Option. |
| AtBDT | cu | `Only Crits` | parent hdxUq | Option. |
| VImHE | cJ | `Cancel In Screens` | `.WE(false)` | Suppress trigger while a Screen is open [inferred]. Pool-proven read. |
| gBIsx | cJ | `Cancel On Use` | `.WE(false)` | Suppress trigger while using an item. Pool-proven read; also drives `LQzFK` visibility (ctor: `this.LQzFK.Vf(this.gBIsx::WF)` — the one fully-confirmed visibility binding). |
| LQzFK | ct | `Cancel Use Mode` | `.Vf(gBIsx::WF)` | Option group; children All Items / Allow Shielding. |
| Dkoqc | cu | `All Items` | parent LQzFK | Option. |
| owwxU | cu | `Allow Shielding` | parent LQzFK | Option. |
| VvKfB | cA | `Range` | `.UG(0.01).UE(1.5).UF(6.0).UI(3.0, 3.0).UH(" blocks")` | Raycast range: **step 0.01, min 1.5, max 6.0, default 3.0 blocks**. Pool-proven read; feeds `ox.cHe`. |
| HWaak | cJ | `When Holding` | `.WE(false)` | Only trigger while `Hold Key` button is held [inferred]. Pool-proven read. |
| MftPL | cD | `Hold Key` | `.VO(mA.sCBUa.cmO())` | Mouse-button int setting; default = `mA.sCBUa` = **mouse button 0 (left click)**. Pool-proven read. |
| sXFbg | cJ | `Upper Cut` | `.WE(false)` | Standalone crit-related toggle adjacent to `iX.bxM` in pool order [role inferred]. Pool-proven read. |

Registration defaults from registry: primary key 1 (category registration key), active bind −999 (unbound).

## Unrecovered / uncertain

**Not recoverable from static analysis (native-interpreted bodies, decrypted lazily against a live JVM):**

1. The exact control flow of `aST` — check order, all comparisons, and the attack invocation itself (swing vs. `KeyBinding` press, packet path, rotation handling). Everything in "Runtime model" steps 1–3 above the raycast math is name-level inference from the pool + setting names.
2. The visibility conditions computed by `aSU`/`aSV`/`aSW` (bodies are dispatch stubs). The ctor proves only `LQzFK ⇐ gBIsx.WF()`.
3. `oV.cLb(double)` — the native range transform applied to `Range` when the raycaster's caster is the local player (likely Reach-module-aware extension; formula unknown).
4. Whether fF overrides `ox` defaults (`ShapeType.OUTLINE`, `FluidHandling.NONE`, `XIKjc`, `fmYuI`) — only `cHk` (predicate) and the predicate descriptor are pool-proven; `cHe(range)`/`cHf(bool)` usage is inferred from `VvKfB`/`pPuZs` being read.
5. The exact semantics of the W-Tap (`fG.HrnPx`, `fG.QYvrB`, `fG.deLoo`) and Aim Assist (`fH.aTx()`, `fH.JXduj`) accesses inside the tick body — read vs. write, and what condition each gates. The pool proves the references, nothing more. (Plausible: cross-checks against W-Tap timing state and Aim Assist's current target, or writes that hand off a triggered hit — indistinguishable statically.)
6. What `fg.aIT(Entity)` gates exactly in fF's predicate (most plausibly "attack only the Target-Locked entity when locked"; the friends check for `Ignore Friends` would come from a different module not in the pool).
7. `cF.VS(jg$tJ)` preset contents — CFR decompilation of `VS` failed (switch/try confusion); the 3 enum constants' meanings (e.g. Players/Mobs/All) are unrecovered; only that `OCdZM` is the default is known.
8. Whether `Simulate Clicks`/`Un Press Shield`/`Upper Cut` map to the attack-key emulation, shield-release, and jump mechanics as named — the pool proves reads; the actions live in the interpreted body.
9. The interpreted bodies referenced from the shared blob for `fE/fG/fH` tokens (listed above) — outside this class's spec.
10. `handlers-summary.json` records 13 handlers for fF with no per-handler notes; `resolve_pool_blob.py` was not needed (all blobs already annotated in the corpus).

**Explicitly not guessed:** no attack cooldown constants beyond the setting defaults, no CPS values, no mode-name strings beyond the decrypted setting names (dropdown option strings for `ct` groups are the child `cu` names themselves — recovered; no other option strings exist for this class).