# Sprint (sixtwo.eC) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_eC.c` — 20 JNI handlers, **229 continuation blocks**, all reachable blocks stitched. Image addresses cited inline like `[18cbdf940]`. (The stitched file was removed from the workspace mid-analysis during repo reorganization; a verbatim copy of the continuation-block region, lines 1270–6176, is preserved at `/tmp/ec_cont.c` for re-verification. All handler headers and pool annotations below were read from the original file before removal.)
- Decisive cross-reference — the **offline bootstrap shims**, which consume eC through its exact public surface and therefore pin three of the four proven gates:
    - `analysis/decompiled/bootstrap/mixin/accessors/ClientEventBridgeMixin.java` — `restoreMovementModules()` contains the verbatim core sprint loop (quoted in full in Runtime model).
    - `analysis/decompiled/bootstrap/mixin/accessors/LocalPlayerEventBridgeMixin.java` — three `@Redirect`s on `class_746` that call `eC.bag()` + `eC.awe()/awf()/awg()`; this is what *proves* the meaning of `awe`, `awf`, `awg`.
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/eC.java` (CFR) — settings construction, listener registration, lifecycle. No `eC$*.java` exists (no inner classes).
- Structural spec: `analysis/specs/modules/eC.md` (11 settings listed there; this spec corrects the count to **12** — `Air` and `Chance` were missed); framework spec: `analysis/specs/modules/00-framework.md`.
- Decrypted names/values: `analysis/decrypted/full-dump.jsonl` — **134 `sixtwo.eC` records**; every setting name, builder constant, module id and category is reconstructed from it.
- Symbol translation: `analysis/jars/yarn-1.21.11+build.6.tiny` (tiny v2). Pool blobs re-resolved with `analysis/tools/resolve_pool_blob.py` (binary at `analysis/tools/__pycache__/resolve_pool_blob.cpython-312.pyc`; the `.py` was likewise removed).
- Tagging convention (as in sibling specs): `[decompiled]` = visible in Java/mixin source; `[slice]` = verified pool-window contents; `[inferred]` = inferred from descriptor + slice + framework contract; `[uncertain]` / `[unrecovered]` = not attributable; never guessed.

### Recoverability caveat

Every behavior handler is a *dispatcher stub*: it decrypts a constant-pool blob slice with the shared `BLOB_DECRYPTOR(image-addr,resolved-ptr,len)`, calls `JNI->ExceptionCheck`, and tail-dispatches through a jump table into continuation fragments that perform the actual JNI vtable calls against the Java object graph. The fragment chains were stitched (229 blocks) but the resulting bodies are dominated by constant-pool-decryption arithmetic over `_DAT_1833xxxxx` scratch and payload-runtime bootstrap calls (`FUN_190ddce00`, `FUN_190dd72e0`, `FUN_190dd9df0`, `FUN_190de3220`, `FUN_190ddfc90`, `func_0x000180001044` — payload runtime, noted only, not analyzed). The JVM-level *calls* each chain makes are recoverable (that is where the pool census below comes from); exact branch order inside the unrecovered predicates is not. eC is unusual among modules in that three of its gates are externally pinned by the bootstrap mixins, which is why this spec has more `[decompiled]` than sibling specs.

## Runtime model

`eC` = module **"Sprint"** — registry `sixtwo.eC|Sprint|Automatically sprints|key=34|bind=-999`. Constructor `gf.aZL(34, false, gh.xgeEn)` — module id **34**, category `gh.xgeEn` (same constant as eA "Strafe" and ez "No Fall": the movement category) `[decompiled]`. Key-mix seed: `micYo ^ 89550695304652L` `[decompiled]`. Primary bind **-999** (unbound) `[registry]`. Module id 34 is itself an indy-decrypted int: `aws(13776)=34` (`full-dump.jsonl:10258`) `[decompiled]`.

### Ownership of the client sprint flag

Sprint **owns** the sprint flag while enabled. The offline shim `LocalPlayerEventBridgeMixin` redirects vanilla `ClientPlayerEntity.tickMovement` (`method_6007`) at its `setSprinting(boolean)` call (`method_5728(Z)V`):

```java
eC var3 = rD.dlJ().aZx(eC.class);
boolean var4 = var2 && (var3.bag() && var3.awg() || !var3.bag() && rD.dlX().dbT());
var1.method_5728(var4 ? false : var2);
```

i.e. while eC is enabled (`bag()`), `awg()` decides whether vanilla's sprint-start is **discarded** (redirect writes `false`) — the module then drives the flag itself. `rD.dlX().dbT()` is the fallback gate used when eC is *disabled* (shared rotation/global manager `rD` — semantics unrecovered, see §Unrecovered). With the module disabled the redirect is a no-op passthrough (`setSprinting(var2)`).

### Core loop — omni-sprint condition (verbatim shim)

`ClientEventBridgeMixin.restoreMovementModules()`, executed at the TAIL of every client tick (`method_1574` `@Inject TAIL`, after the `sixtwo.gH$ti` post-tick event dispatch) — this mirrors the native `awc(hk)` listener's job:

```java
Class var7 = Class.forName("sixtwo.eC", true, var3);
Object var8 = var4.getClass().getMethod("aZx", var7).invoke(var4, eC.class);
if ((Boolean)eC.class.getMethod("bag").invoke(var8)) {
   Object var9 = var2.getClass().getField("field_3913").get(var2);      // player.input
   Object var10 = var9.getClass().getMethod("method_3128").invoke(var9); // Input.getMovementInput()
   float var11 = var10.getClass().getField("field_1343").getFloat(var10); // x = sideways
   float var12 = var10.getClass().getField("field_1342").getFloat(var10); // y = forward
   if (var11 * var11 + var12 * var12 > 1.0E-4F) {
      var2.getClass().getMethod("method_5728", boolean.class).invoke(var2, true);
   }
}
```

Wrapped in `try { … } catch (Throwable) { report("movement-module-fallback", …); }`. Translation (`yarn-1.21.11+build.6.tiny`): `field_3913` = `ClientPlayerEntity.input`, `method_3128` = `Input.getMovementInput()` (returns `class_241` = `Vec2f`), `field_1343` = `Vec2f.x` (sideways), `field_1342` = `Vec2f.y` (forward), `method_5728` = `LivingEntity.setSprinting(boolean)`.

**So: if `sideways² + forward² > 1.0E-4F`, force `setSprinting(true)` every tick while enabled.** Note the constant is `>` **1.0E-4F** (not `>=`), and it is the squared magnitude, not a length-normalized check — an all-directional ("omni") sprint: any non-deadzone movement input, including pure strafe or pure backward, triggers sprint. This is the vanilla-equivalent of `Input.hasForwardMovement()` (`method_20622`), which is also present in eC's pool window — the payload native uses the same threshold.

### Ignore group (suppressors) — all three pinned by `@Redirect`s

The module removes vanilla sprint *preconditions*; each is a child toggle of the `Ignore` setting group:

1. **Hunger** — `@Redirect` on `method_74047` (sprint-hunger path) at `method_76458()Z` (`canSprintOrFly`, reached via `PlayerSprintAccessor.offline$invokeCanSprint()`): if `eC.bag() && eC.awe()` → return **true**, i.e. hunger can never block sprinting. Pool carries `method_7344` (`HungerManager` getter) → `method_7586` (`getFoodLevel`) on `class_1702` — the native reads food level directly (`awe` handler) `[decompiled gate, slice internals]`.
2. **Collision** — `@Redirect` on `method_65949` (should-stop-sprinting check) at the `field_5976:Z` field read (`Entity.horizontalCollision`): if `eC.bag() && eC.awf()` → return **false**, i.e. hitting a wall no longer stops the sprint. No range check is visible in the redirect — the payload does not appear to use the "sprint into blocks at distance" pattern here; it simply cancels the stop condition `[decompiled]`.
3. **Blindness** — `field_5919` = `StatusEffects.BLINDNESS` sits in eC's own member pool slice, so the blindness-ignore check is performed natively by eC (not pinned by a shim). The consuming predicate (`awh` or `awj`) is unrecovered `[slice, unrecovered]`.

### Stop conditions

`Stop On` (`ldLRq`) group with children **Ground** (`MeYau`) and **Air** (`OqeVu`) — when enabled, sprinting stops in the named phase. The native consumer is among the unrecovered predicates (`awj`/`awh`/`awg` family) `[unrecovered]`. **Sneaking is not represented by any recovered evidence**: no sneak-related symbol (`method_5715`/`isSneaking`, `field_3945`, input `field_3910`…) appears in either eC pool window, and no shim gates on sneaking — if the payload stops sprinting while sneaking, it is vanilla's own behavior surviving (or a native check with no surviving symbol). Record as designer discretion.

### Keep Sprint subsystem (Keep Sprint + Motion % + Motion When Hurt % + Hurt Time + Chance)

Pool window carries `LivingEntity.forwardSpeed` (`field_6250`), `LivingEntity.sidewaysSpeed` (`field_6212`), `Entity.updateVelocity(F, Vec3d)` (`method_5724`) and the `Vec3d.getX/getY/getZ/length` quartet (`method_10216/10214/10215/1033`) — the classic momentum-preservation math: when the player takes damage, keep the pre-damage horizontal velocity component by re-deriving `forwardSpeed`/`sidewaysSpeed` (or re-invoking `updateVelocity`) so the knockback does not cut speed `[slice, inferred]`. The numeric settings that scale it (all visibility-gated to `Keep Sprint` via `.Vf(this.AjuCa::WF)` on `eC.java:159-162`):

- **Motion** (`paKVr`, cA): step 1.0, min 0.0, max 100.0, default **100.0**, suffix `" %"`.
- **Motion When Hurt** (`KmNkh`, cA): step 1.0, min 0.0, max 100.0, default **100.0**, suffix `" %"`.
- **Hurt Time** (`BgMhY`, cA): step 1.0, min **1.0**, max **10.0**, default **1.0**, no suffix (unit implied ticks, not proven).
- **Chance** (`qFLIZ`, cC): step 1.0, min 0.0, max 100.0, default **100.0**, suffix `" %"` — a per-event probability roll.

`Keep Sprint` (`AjuCa`, cJ boolean) defaults **false** (`.WE(false)`). Exactly which member reads which setting is unrecovered; the `(D)Z` predicate `UM` adjacent to the numeric settings in the member slice is the only surviving double-consuming gate (candidate pair with the `awk()D` getter, e.g. "is preserved motion fraction above threshold") `[unrecovered]`.

### Packet-related behavior

The shared handler pool window contains `class_2828` (`PlayerMoveC2SPacket`) machinery: the `$Full` constructor `(DDDFFZZ)V` (`class_2828$class_2830`), the `$PositionAndOnGround` constructor `(DDDZZ)V` (`class_2828$class_2829`), the packet accessors `changesLook` (`method_36172`), `getYaw(F)` (`method_12271`), `getPitch(F)` (`method_12270`), `isOnGround` (`method_12273`), plus:

- `mixin/accessors/LocalPlayerAccessor.setPositionReminder` — sets `field_3923` (`ticksSinceLastPositionPacketSent`) on `ClientPlayerEntity`;
- `setY` — `ServerboundMovePlayerPacketAccessor.setY` (mutable `field_12886`, packet y);
- `setOnGround` (`field_29179` accessor) and `wasSprinting` (`field_3919`, `lastSprinting`, reached through `mU.cpN` reflective resolver).

So the module (or its immediate neighbors — the window is shared across the movement cluster, see below) constructs **spoofed full/position move packets**, rewrites packet `y` and `onGround`, and manages `ticksSinceLastPositionPacketSent` and `lastSprinting` for server-side consistency of the forced sprint state `[slice, inferred]`. The trigger conditions (when a spoofed packet is emitted — e.g. only during keep-sprint knockback, or every tick) are **unrecovered**. The yaw/pitch redirection into the rotation manager (`rD.dlX().dbX()` → `ov.cGI()/cGJ()` in `sendMovementPackets`/`tick`) is a shared global rotation feature, not eC-owned `[decompiled, not eC]`.

### Event wiring

- `awb(gH$ti)` — `@hG` listener for `gH$ti` = **post-tick** event (`ClientEventBridgeMixin` dispatches `sixtwo.gH$ti` at TAIL of `method_1574`, immediately before `restoreMovementModules()`). The shim's `restoreMovementModules()` is explicitly the offline fallback *for* movement modules that normally run on this event, so `awb` is (one of) eC's per-tick drivers `[decompiled, inferred]`.
- `awc(hk)` — `@hG` listener for `hk extends hH` (payload event). eC is the only module with an `hk` listener; the class's fields are native-side (no `hk$*.java` decompiles). Candidate: a movement-input event carrying the input snapshot consumed by the `mF` predicates `[inferred, uncertain]`.
- `YO()V` — lifecycle tick override; base `gg.YO()` = `hF.bdM(this)` (native module-tick dispatcher); 48 modules override it natively `[decompiled structure]`.

## Pool windows (per-handler symbol universes)

### Shared handler window `POOL[0xdd90, 0x270]`

All behavior handlers decrypt this same slice. It belongs to a **movement-cluster shared pool** with overlapping windows (ez = No Fall uses `[0xdd00,0x26d]`, eA = Strafe `[0xdd5a,0x26f]`) — attribution of individual tokens to eC vs. neighbors is approximate at the edges. Token-for-token, in verbatim order:

```
eld_6250 | field_6212 | oOQKe | GMvGu | sixtwo/eC | ldHfb | avo | method_10214 |
uYjwj | method_5724 | (FLnet/minecraft/class_243;)V | method_10216 | method_10215 |
XiPDK | Kqwum | avw | avT | xVfhc | field_7478 | method_1033 | LSmOj | raYeS |
EKwun | VCxLS | dHwGI | fjDMc | MoNPF | avv | avt | (Lnet/minecraft/class_2828;D)V |
avy | mixin/accessors/LocalPlayerAccessor | setY | method_36172 |
net/minecraft/class_2828$class_2830 | setPositionReminder | method_12271 |
method_12270 | method_12273 | field_5976 | (DDDFFZZ)V |
net/minecraft/class_2828$class_2829 | method_7248 | (DDDZZ)V | method_7318
```

Translations (yarn tiny v2):

| token | meaning |
|---|---|
| `eld_6250` | window opens **2 bytes inside** `field_6250` = `LivingEntity.forwardSpeed` (leading `f` cut off) |
| `field_6212` | `LivingEntity.sidewaysSpeed` |
| `method_5724` + `(FLnet/minecraft/class_243;)V` | `Entity.updateVelocity(float, Vec3d)` |
| `method_10216/10214/10215/1033` | `Vec3d.getX/getY/getZ/length` |
| `field_7478` | `PlayerAbilities.allowFlying` |
| `method_7248` | `PlayerAbilities.setFlySpeed(float)` |
| `method_7318` | `PlayerEntity.updatePose` |
| `field_5976` | `Entity.horizontalCollision` |
| `class_2828` + `class_2828$class_2830` + `(DDDFFZZ)V` | `PlayerMoveC2SPacket$Full` constructor |
| `class_2828$class_2829` + `(DDDZZ)V` | `PlayerMoveC2SPacket$PositionAndOnGround` constructor |
| `method_36172/12271/12270/12273` | packet `changesLook` / `getYaw(F)` / `getPitch(F)` / `isOnGround` |
| `setY` + `setPositionReminder` | `ServerboundMovePlayerPacketAccessor.setY` (`field_12886`) / `LocalPlayerAccessor.setPositionReminder` (`field_3923` `ticksSinceLastPositionPacketSent`) |
| `method_20622` | `Input.hasForwardMovement()` — present in the adjacent shared region (vanilla equivalent of the 1.0E-4 threshold) |
| `setOnGround` (`field_29179`) / `wasSprinting` (`field_3919`) | shared-region packet accessors (`wasSprinting` resolved reflectively via `mU.cpN`) |
| `avo avw avT avv avt avy` | 3-char lowercase vanilla obfuscation member names paired with the intermediary names above (decoy/alternate-name tokens) |
| `oOQKe GMvGu ldHfb uYjwj XiPDK Kqwum xVfhc LSmOj raYeS EKwun VCxLS dHwGI fjDMc MoNPF` | 5-char payload alias tokens (unresolved member names, mostly eC/eA/ez-adjacent) |
| `(Lnet/minecraft/class_2828;D)V` | unresolved method ref taking a `PlayerMoveC2SPacket` + a double — **no vanilla counterpart; unrecovered** |

`allowFlying`/`setFlySpeed`/`updatePose` are almost certainly neighbors' symbols (ez "No Fall" / eA "Strafe" territory) — flag before attributing them to Sprint.

### eC member slice `POOL[0xe111 … 0xe25e]`

eC's own member-symbol region (window end 0xe25e; length not independently re-resolved after the tooling removal). Token-for-token, verbatim order:

```
avV | NtVBJ | APZUd | vIQhT | rueqY | avU | avY | micYo | awl | dhEgs | avR |
AjuCa | awj | awk | awi | vCPTc | awh | AublY | MeYau | OqeVu | ZxBxP | dbT |
field_5919 | sixtwo/mF | cnH | cnI | method_7344 | ()Lnet/minecraft/class_1702; |
cnJ | net/minecraft/class_1702 | method_7586 | cnK | qFLIZ | sixtwo/mU | cpN |
wasSprinting | BgMhY | UM | (D)Z | KmNkh | paKVr | UrMwr | FkUjg | awn | dFmQY |
DjFuE | OVOKz | iOWmB | awm | awq
```

Notables: `field_5919` = `StatusEffects.BLINDNESS` → the blindness-ignore lives here; `method_7344` / `()Lnet/minecraft/class_1702;` / `method_7586` / `class_1702` = hunger-manager / food-level chain; `mF` + `cnH/cnI/cnJ/cnK` = the 4-flag input-snapshot record consumed by the `(Lsixtwo/mF;)Z` predicates; `dhEgs` = eC's private boolean state field (role unrecovered); `UM` + `(D)Z` = an unattributed double predicate sitting adjacent to the numeric settings; `cpN`/`wasSprinting` = `mU` reflective resolver for `field_3919`; `micYo` = key-mix seed; `UrMwr`/`iOWmB` (String[]), `FkUjg`/`OVOKz` (Map), `DjFuE` (long[]), `dFmQY` (Integer[]) = decrypt caches `[slice]`.

## Per-handler semantics

All handlers share the trampoline prologue: decrypt `POOL[0xdd90,0x270]` via the shared blob decryptor → `JNI->ExceptionCheck` → jump-table dispatch into continuations. Continuation blocks ending in `(*_DAT_xxx)()` or carrying `unaff_*` params are continuation tails — interpreted conservatively (only the JNI calls they issue are attributed). No `rdtsc`-gated logic was identified in this corpus (unlike eV); any timing reads present are anti-trace noise.

### Module behavior handlers

- **`YO()V` [18cbdf940]** — lifecycle tick override (base `gg.YO()` = `hF.bdM(this)`); called from `gg.baa(boolean)`/`gg.aZZ()`. VM-internal body; no module-level constants of its own recoverable `[decompiled structure, inferred]`.
- **`awb(Lsixtwo/gH$ti;)V [18cb71310]** — `@hG` post-tick listener (`gH$ti` = client-tick TAIL event, dispatched by `ClientEventBridgeMixin` right before `restoreMovementModules()`). Candidate driver of the per-tick sprint loop / Keep Sprint logic `[decompiled wiring, inferred body]`.
- **`awc(Lsixtwo/hk;)V [18cb758d0]** — `@hG` listener for `hk extends hH` (eC is the only module listening on `hk`; `hk`'s fields are native). Candidate: movement-input event feeding the `mF` snapshot predicates `[inferred, uncertain]`.
- **`awd(Lsixtwo/mF;)Z [18cbe4850]** — predicate over the 4-flag input-snapshot record `mF`; member slice pairs it with `cnH/cnI/cnJ/cnK`, which per the framework correspond to `forwardKey`/`backKey`/`rightKey`/`leftKey` (via `iX.Ergzg`). Plausibly "is there directional input" / "is the input all-forward-or-back" test feeding sprint/stop decisions. Which predicate of `awd`/`awi` is which is unrecovered `[slice, inferred, uncertain]`.
- **`awd`'s JNI surface**: continuation chain issues `GetDoubleField [18cb79c03]` and `CallVoidMethodA [18cb7a6a9]` — consistent with reading a double (speed/motion fraction) and invoking a void method (`setSprinting`/`updateVelocity`) `[slice-adjacent, uncertain]`.
- **`awe()Z [18cbe9000]** — **Ignore → Hunger**. PROVEN by `LocalPlayerEventBridgeMixin.offline$sprintHunger` (`@Redirect` on `method_74047` at `method_76458()Z`): `if (eC.bag() && eC.awe()) return true;` — hunger can never stop the sprint. Member slice backs it with `method_7344`/`class_1702`/`method_7586` (hunger manager food-level read) `[decompiled]`.
- **`awf()Z [18cbed060]** — **Ignore → Collision**. PROVEN by `offline$sprintCollision` (`@Redirect` on `method_65949` at the `field_5976` `horizontalCollision` read): `if (eC.bag() && eC.awf()) return false;` — walls no longer stop the sprint `[decompiled]`.
- **`awg()Z [18cbf1f40]** — **sprint-ownership gate** (Suppress vanilla sprint start). PROVEN by `offline$sprintState` (`@Redirect` on `method_6007` at `method_5728(Z)V`): vanilla's sprint-start is discarded iff `eC.bag() && eC.awg()`. I.e. `awg()` is the "this module takes over the sprint flag" toggle `[decompiled]`.
- **`awh()Z [18cbf77c0]** — unrecovered boolean predicate; candidates: blindness-ignore consumer (member slice carries `field_5919` = `StatusEffects.BLINDNESS` nearby) or a Stop On phase check `[unrecovered]`.
- **`awi(Lsixtwo/mF;)Z [18cc067f0]** — second `(Lsixtwo/mF;)Z` input-snapshot predicate; sibling of `awd` `[slice, uncertain]`.
- **`awj()Z [18cc0c950]** — unrecovered boolean predicate; candidates: Stop On Ground/Air consumer, or the Chance roll (`qFLIZ`, cC) gate for Keep Sprint `[unrecovered]`.
- **`awk()D [18cb7a820]** — double getter. Its chain issues `GetDoubleField [18cb79c03]` + `CallVoidMethodA [18cb7a6a9]`. Candidates: horizontal speed readout in the `iX.bxE` style (`Math.hypot(velX, velZ)`), or the current Motion-% fraction. Candidate pair with the unattributed `UM(D)Z` predicate in the member slice `[inferred, uncertain]`.

### String / int indy machinery (no module behavior)

- **`awl(Ljava/lang/MatchException;)Ljava/lang/MatchException; [18cb80970]** — decompiled body is identity: `return param_3;`. Rethrow trampoline for the Vineflower `MatchException` pattern `[decompiled]`.
- **`awm([B)Ljava/lang/String; [18cb80a00]** — byte[] → String decode helper used by the decryptors `[decompiled structure]`.
- **`awn(IJ)Ljava/lang/String; [18cba9b00]** — string-constant decrypt kernel (bsm `"a"`/`"v"`, descriptor `(IJ)`), ~470 lines of MBA arithmetic via mixing function `func_0x00018cbb0510`; decrypts pool slices into the `String[]` caches (`UrMwr`, `iOWmB`). Observable contract from full-dump.jsonl: `awn(int off, long key) → decrypted String`. **Anti-analysis machinery.** `[decompiled machinery]`
- **`awo(…) [18cbb05a0]** — `MutableCallSite` relay (indy cache invalidation re-bootstrap) `[decompiled machinery]`.
- **`awp(Lookup;String;MethodType;)CallSite [18cbb1490]** — string-indy bootstrap; decrypts `POOL[0x857,0x26]` containing `MethodHandle`/`Map` cache plumbing tokens `[decompiled machinery]`.
- **`awq(IJ)I [18cbb3f50]** — int-constant decrypt kernel (bsm `"l"`), ~120 decrypted ints via `func_0x00018cbbef90`. Observable contract: `awq(int off, long key) → decrypted int` — every builder constant in the settings table came through here. `[decompiled machinery]`
- **`awr(…) [18cbbf020]** — int relay (MutableCallSite re-bootstrap for int indies) `[decompiled machinery]`.
- **`aws(…) [18cbc0030]** — int-indy bootstrap (`CallSite`); produced `aws(13776)=34` (module id) per `full-dump.jsonl:10258` `[decompiled machinery]`.
- **`_c3fd5360cf80fc59f0809cb2d98aa0f3()V [18cbc2d40]** — native class-init stub; decrypts `POOL[0x226,0xd]` (resolves `java/lang/String` / `<init>` for the `Loader.doInit` path). No module behavior `[decompiled]`.

### JNI surface of the continuation chains (census)

The 229 continuation blocks for eC issue, at minimum: `GetDoubleField [18cb79c03]`, `CallVoidMethodA [18cb7a6a9]`, `CallBooleanMethodA [18cb8070b]`, `GetStaticObjectField [18cbe295f]`, `GetObjectField [18cbe370c]`, `CallStaticObjectMethodA`, `GetStaticLongField`, `NewByteArray`, `GetPrimitiveArrayCritical`, `SetCharArrayRegion`, `AllocObject`, `NewObjectArray`. The pool census above is the authoritative symbol universe; this list only confirms the object-graph access patterns (field reads, boolean/void/static method invocations, array construction for string decryption).

## Settings → behavior mapping

All 12 setting names reconstructed from `full-dump.jsonl` (134 `sixtwo.eC` records; builder char-array lengths match name lengths). The structural spec's list of 11 missed `Air` and `Chance`.

| field | wrapper | name | builder chain (verbatim) | behavior link |
|---|---|---|---|---|
| `DpuAv` | cv | **Ignore** (len 6) | `new cv(this, mr.clS(…))` | group; children below |
| `ZxBxP` | cw | **Blindness** (9) | child of `DpuAv` | Ignore → Blindness; blindness status effect (`field_5919`) no longer stops sprint — consumed natively (`awh`/`awj`) `[slice, consumer unrecovered]` |
| `vCPTc` | cw | **Hunger** (6) | child of `DpuAv` | Ignore → Hunger; read by **`awe()`** — hunger never stops sprint `[decompiled]` |
| `AublY` | cw | **Collision** (9) | child of `DpuAv` | Ignore → Collision; read by **`awf()`** — `horizontalCollision` never stops sprint `[decompiled]` |
| `ldLRq` | cv | **Stop On** (7) | `new cv(this, mr.clS(…))` | group |
| `MeYau` | cw | **Ground** (6) | child of `ldLRq` | stop sprinting when on ground — consumer unrecovered `[inferred]` |
| `OqeVu` | cw | **Air** (3) | child of `ldLRq` | stop sprinting when airborne — consumer unrecovered `[inferred]` |
| `AjuCa` | cJ | **Keep Sprint** | `.WE(false)` → default **false**; visibility parent for the 4 numerics (`.Vf(this.AjuCa::WF)`, `eC.java:159-162`) | enables the momentum-preservation subsystem (forwardSpeed/sidewaysSpeed/updateVelocity math) |
| `paKVr` | cA | **Motion** | `.UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %")` | preserved-motion fraction (step 1.0, min 0.0, max 100.0, default 100.0, suffix `" %"`) — exact consumer unrecovered |
| `KmNkh` | cA | **Motion When Hurt** | `.UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %")` (suffix at dump index 22804) | motion fraction applied specifically on hurt — exact consumer unrecovered |
| `BgMhY` | cA | **Hurt Time** | `.UG(1.0).UE(1.0).UF(10.0).UI(1.0, 10.0)` (no suffix) | duration window after being hurt during which keep-sprint applies; step 1.0, min 1.0, max 10.0, default 1.0; unit implied ticks, not proven |
| `qFLIZ` | cC | **Chance** | `.Vy(1.0).Vw(0.0).Vx(100.0).VA(100.0).Vz(" %")` (Motion suffix at dump index 24833) | per-event probability (default 100.0 = always) — roll site unrecovered |

(cA builder verbs: `UG`=step, `UE`=min, `UF`=max, `UI`=default, `UH`=suffix; cC verbs: `Vy`=step, `Vw`=min, `Vx`=max, `VA`=default, `Vz`=suffix. All % settings: step 1.0, min 0.0, max 100.0, default 100.0.)

Identity (not settings): module id **34** (`aws(13776)=34`), category `gh.xgeEn`, key-mix seed `micYo ^ 89550695304652L`, bind **-999**, key 34.

## Unrecovered / uncertain

The following are explicitly NOT recoverable from this corpus. Do not guess them in the clean-room rebuild; pick documented designer choices and record divergence in PARITY.md:

1. **Predicate body split.** The five boolean gates `awd/awi/awh/awj/awg` (`awg` alone is proven) partition: blindness-ignore, Stop On Ground, Stop On Air, Chance roll, and the input-snapshot tests. Which is which beyond `awg`/`awf`/`awe` is not recoverable.
2. **`awk()D` + `UM(D)Z` attribution.** One double getter and one double predicate sit adjacent to the numeric settings in the member slice; their exact math (hypot-style speed vs. motion fraction, threshold comparison) is unrecovered.
3. **`dhEgs`** — eC's private boolean state field; role unrecovered (last-direction memory? keep-sprint latch?).
4. **Packet-layer trigger conditions** and **cross-module attribution**: when spoofed `$Full`/`$PositionAndOnGround` packets are emitted, and which of `setOnGround`/`forwardSpeed`/`sidewaysSpeed`/`updateVelocity`/`allowFlying`/`setFlySpeed`/`updatePose` in the shared window belong to eC vs. eA (Strafe) / ez (No Fall).
5. **`(Lnet/minecraft/class_2828;D)V`** — method ref taking a `PlayerMoveC2SPacket` + a double with no vanilla counterpart; target unrecovered.
6. **`rD.dlX().dbT()`** — the fallback gate used when eC is disabled (shim line: `!eC.bag() && rD.dlX().dbT()`); semantics unrecovered (appears in eC's member slice as `dbT`, so it is at least addressed by eC-adjacent code).
7. **`awb(gH$ti)` vs `awc(hk)` phase split** — which listener drives the per-tick loop vs. per-input-event handling (`hk` fields are native, no decompile).
8. **Hurt Time unit** — ticks implied by the 1.0–10.0 range and the name, not proven.
9. **`eld_6250`** — the shared window opens 2 bytes into `field_6250`; the 2 preceding bytes belong to the neighboring class's window (attribution boundary, not a distinct symbol).
10. **Sneaking** — no sneak symbol survives in either pool window and no shim gates on sneaking; whether Sprint stops while sneaking is designer discretion (vanilla behavior survives the redirects only via `method_65949`'s other conditions).