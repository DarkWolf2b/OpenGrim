# Aim Assist (sixtwo.fH) — handler-derived behavior spec

Class: `sixtwo/fH` · display name **Aim Assist** · registry description
"Automatically aims at entity" · primary key 8, active bind -999 (unbound) [registry].
Superclass: `gg` (module base). Implements `lA`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fH.c` — all **59 native handlers** +
   **589 continuation blocks**, 0 unresolved table targets (corpus header). Structural
   facts that govern recoverability:
   - The obfuscator (mango blob `$mango$6dc686caab50ed59` + `Loader.doInit`) compiles
     every Java method body into an **embedded bytecode VM**. Each behavior-bearing
     handler is a two-stage stub: `BLOB_DECRYPTOR` materializes the class constant pool
     `POOL[0x144f6,0x32c]` (812 bytes) → `JNI->ExceptionCheck` → indirect jump into a
     per-opcode continuation block. The 589 continuation blocks are **VM interpreter
     fragments** (one JNI op / one register op each, then `(*_DAT_… )()` dispatch);
     **230 of 589 end in `halt_baddata()`** (Ghidra truncated the indirect-jump chains).
   - **50 of 589 blocks contain a semantic JNI call** (beyond the exception guards
     `ExceptionCheck/Occurred/Clear`, `ThrowNew`, `Throw`, `IsInstanceOf`). Histogram:
     `GetObjectField` ×27, `GetArrayLength` ×4, `CallVoidMethodA` ×3, `AllocObject` ×3,
     `NewStringUTF` ×2, and ×1 each of `GetFloatField`, `SetBooleanField`,
     `GetStaticObjectField`, `GetStaticLongField`, `CallObjectMethodA`,
     `CallStaticObjectMethodA`, `NewString`, `NewObjectArray`, `SetCharArrayRegion`,
     `SetByteArrayRegion`, `GetPrimitiveArrayCritical`,
     `ReleasePrimitiveArrayCritical`. All of these are **generic VM opcode
     implementations**, not module logic: e.g. `[18ad47a47]` = the VM's "read float
     field" opcode (GetFloatField + ExceptionCheck), `[18ad47c08]`-family = "read
     object field" opcode (GetObjectField ×27 across blocks).
   - **Zero floating-point arithmetic or float constants survive anywhere in the 589
     blocks.** The rotation smoothing math (interpolation factors, angle deltas,
     easing) lives in the encrypted VM bytecode stream and is *not* recoverable from
     this corpus. See §Unrecovered.
   - **No `rdtsc`** in this class. The heavy arithmetic visible in the aUv/aUy handler
     bodies `[18ad79700, 18ad83fb0]` (add/xor/rotate whitening, popcount tricks,
     constants like `0xe5bc7eaa885f7ba8`, `0xfdbd7ebb1e7d7e8d`, `0xa467b8aac706c6bf`,
     `0x7fff`) is the **string/int decryption PRNG** — anti-analysis noise, not module
     logic.
   - Helper census (payload runtime, not analyzed): `FUN_190dd72e0` ×114 (pool constant
     fetch), `FUN_190dd9df0` ×36, `FUN_190ddce00` ×9, `FUN_190ddfc90` ×6,
     `FUN_190de3220` ×2, plus `FUN_184117d50` ×3, `FUN_184117d80` ×2.
2. `analysis/decompiled/payload-named/sixtwo/fH.java` (CFR) — Java-side skeleton: field
   declarations, native method list, and the only non-native behavior in the class, the
   constructor (settings tree, helper wiring). `analysis/decompiled/payload-decrypted/sixtwo/fH.java`
   has the char arrays folded to literals; every setting name below was re-decoded
   char-by-char from it and cross-checked against `analysis/decrypted/full-dump.jsonl`
   (610 `aUA("y",…)` int constants + 4 `aUx("y",…)` strings for this class).
3. Supporting payload types read for vocabulary: `gg` (module base), `gk`/`lC`
   (2D render event + context), `go`/`go$sX` (world render event), `gH`/`gH$th`
   (shared render-stage marker event), `og` (target selector), `pe` (raycast
   utility), `ox` (entity-search builder), `mV` (smooth-noise generator),
   `iW` (world-path renderer), `cz/cJ/cC/cu/cw/ct/cv/cG/cD/cF` (setting wrappers).
4. Yarn mapping: `analysis/jars/yarn-1.21.11+build.6.tiny`,
   `analysis/reference/intermediary-to-yarn-classes.tsv`.

**Decoded constant-pool blob** `POOL[0x144f6,0x32c]` (identical in every behavior
handler — it is fH's whole name table for the VM):

```
KEbwq | NDFbm | dPMvB | MdrLn | aTo | aTs | sixtwo/fH | gKjqs | aUt | aTx | JXduj |
xZaeo | RpKwK | sYBzd | pNnvx | CBxhI | hjLsk | Rscmj | BkSML | ZuWds | AcJyQ | gMClj |
jdxNC | gywhN | uqpih | maPUy | JdqkJ | ZIaqt | mMTcv | SGIKe | bxt |
(Lnet/minecraft/class_4587;Ljava/lang/Iterable;Lsixtwo/mG;)V | NURBy | AwNUJ | sixtwo/gk |
baT | cHj | PBZrn | MTMNI | rWorD | sZDRi | objof | mcave | OYFtx | iznEa | loMXv | KIJQr |
oURtD | UxVgK | iywBD | Lsixtwo/mV; | sixtwo/mV | cqG | uOqTy | ClWRz | MEfRH | KLTHe |
rglYd | BtIDI | rSkxN | method_36457 | UHjXn | aUv | VEcSt | YaVXm | fPCKo | BtGgs | Zx
```

Resolved tokens (the only externally-visible APIs the VM bytecode names):

| token | resolution |
|---|---|
| `method_36457` | **`Entity.setPitch(F)V`** (class_1297, yarn `net/minecraft/entity/Entity`) — the only Minecraft method name in the pool |
| `bxt` + `(Lnet/minecraft/class_4587;Ljava/lang/Iterable;Lsixtwo/mG;)V` | `iW.bxt(MatrixStack, Iterable<Vec3d>, mG)` — static polyline renderer for a `Vec3d` path with color `mG` |
| `cqG` | `mV.cqG(FF)F` — smooth-noise sample (2-arg) |
| `baT` | `gk.baT()` — fetches the `lC` 2D render context from the event |
| `cHj` | `ox.cHj(Predicate<Entity>)` — attaches a validity predicate to the shared entity-search builder |
| `aTo`/`aTs`, `UHjXn`/`VEcSt`/`YaVXm`/`fPCKo`/`BtGgs`/`Zx`, `aUv` | the string-decryption cache machinery (same cache shape as `fG.aTo/aTs`) — runtime infrastructure, not module logic |
| remaining tokens | fH's own fields (`JXduj`, `CBxhI`, `KIJQr`, `oURtD`, all setting fields) and decryptors |

## Runtime model

**Events (all three native, all render-side; no tick and no packet handler exists).**

| handler | event | carries |
|---|---|---|
| `aTw(go$sX)` `[18ad1f430]` | world render | `MatrixStack` + partial tick (`go.bbh()/bbi()`) |
| `aTy(gk)` `[18ad3f5a0]` | 2D render | `lC` = `DrawContext` + 2 doubles + a float (fetched via `baT`, pool token) |
| `aTv(gH$th)` `[18ad18850]` | shared render-stage marker | empty; same event ~90 other modules subscribe to (`fr.md` calls it "render handler") |

Which of the three performs the actual rotation update is **not determinable** from the
stubs (see §Unrecovered). What the pool proves: the world-render path renders a cached
`Vec3d` polyline via `iW.bxt` (the `CBxhI` prediction path), the 2D path consumes the
`DrawContext` event, and somewhere the VM calls `Entity.setPitch(F)`.

**Native vs Java.** Everything except the constructor and `<clinit>` is native
(59 handlers). The constructor (`fH.java` lines 228–699, Java) builds 35 settings
objects, the three helpers, and wires visibility couplings. Handlers `aTA`…`aUg`,
`aUi`…`aUk`, `aTz`, `aUa`…`aUh` are **setting-object getters**: thin null-check +
field-return trampolines — their bodies are just the dispatcher
`(**(code **)(&UNK_1819xxxx + (param_2 == 0) * 8))()`, i.e. "if field null throw, else
return". They expose the private settings tree to other payload classes (e.g. GUI).

**Receiver state cached across calls** (fields, from `fH.java` + pool):

- `JXduj : LivingEntity` — current target (returned by `aUl`/`aTx`).
- `CBxhI : Pair<ClientPlayerEntity, ArrayList<Vec3d>>` — cached prediction path
  (player + predicted positions), returned by `aUm`; rendered by the world-render
  handler through `iW.bxt`.
- `KIJQr : float = 0.0f`, `oURtD : float = 1000.0f` (sentinel-style init) — float
  state exposed via the `()F` accessors `aUn`/`aUo` (one of them reads a float field
  with the VM's GetFloatField opcode `[18ad47a47]`; which accessor maps to which field
  is not determinable).
- `static long gKjqs` — class key: constructor string decryption uses
  `gKjqs ^ 0xEF0928E2225L`; set by native `<clinit>` (`_f35fd70486682bf72c3c3fd96d3f755f`
  `[18ad93800]`, decrypts `POOL[0x226,0xd]` = tail of `"…lang/String;\0<"`).
- Static decryptor caches `ZxCgN`, `UHjXn` (String[]), `VEcSt`, `BtGgs` (Map),
  `fPCKo` (long[]), `YaVXm` (Integer[]).

**Helpers owned by the constructor** (all shared payload utilities, not fH logic):

- `JdqkJ = new og()` — target selector: keeps `Stream<LivingEntity>`, filters through a
  `Predicate<LivingEntity>`, range-checks (`og.cCT(float)`), caches last pick
  (`og.cCU()`).
- `rWorD = new pe()` — raycast/line-of-sight utility (imports `RaycastContext`,
  `RaycastContext$ShapeType`, `BlockHitResult`, `Box`) — the "Ignore Walls" machinery.
- `iywBD = new mV()` — deterministic smooth-noise generator, configured in the
  constructor: `cqr(new Random().nextInt())` (seed), `cqs(0.05f)` (frequency),
  `cqw(3)` (3 octaves), `cqv(mV$uX.AjjgB)` (mode). Sampled through `mV.cqG(FF)F`
  (pool token `cqG`). This is what the `Randomization` setting drives.

**Target selection.** Pool token `cHj` proves the VM builds a shared `ox` entity
search and attaches fH's own predicate `aUp(Entity) → boolean` (`ox.cGV()…cHj(fH::aUp)`-shaped).
`aUp` and the player gate `aUq(ClientPlayerEntity) → Boolean` are VM bodies — their
internal conditions do not survive (§Unrecovered).

## Per-handler semantics

### Event handlers (VM bodies — semantics bounded, not decoded)

- **`aTv(gH$th)` `[18ad18850]`** — shared render-stage callback. Stub decrypts the pool
  blob and dispatches. Exact stage behavior not recoverable.
- **`aTw(go$sX)` `[18ad1f430]`** — world render (`MatrixStack` + partial tick). Pool
  evidence: holds `bxt` + `(Lnet/minecraft/class_4587;Ljava/lang/Iterable;Lsixtwo/mG;)V`,
  and the field `CBxhI` (the `ArrayList<Vec3d>` path) and `SGIKe` (Prediction Color)
  are in the same name table. Bounded reading: when **Render Prediction** is on and a
  prediction path has been cached, the world-render pass draws it as a `Vec3d`
  polyline through `iW.bxt(matrixStack, path, predictionColor)`. The exact color/line
  math is inside the VM.
- **`aTy(gk)` `[18ad3f5a0]`** — 2D render event; the stub fetches the `lC` context via
  `baT` (pool token). The `lC` type wraps `DrawContext` + 2 doubles + a float and
  exposes polyline/box drawing primitives (`lC.ceI/ceo/cen`, `kg`…). This is the
  natural place for the **FOV circle** (`Draw Fov` + `Fov Color`) and any 2D overlay,
  but attribution of specific draws is **not provable** from the stubs.
- **`aTx() → LivingEntity` `[18ad35920]`** / **`aUl() → LivingEntity` `[18ad47500]`** —
  target accessors for `JXduj` (aTx is `private`, aUl public; both null-check
  trampolines or VM reads of the same field).
- **`aUm() → Pair<ClientPlayerEntity, ArrayList<Vec3d>>` `[18ad47700]`** — prediction
  path getter (`CBxhI`).

### Predicates / gates (VM bodies)

- **`aUp(Entity) → boolean` `[18ad47d20]`** — per-candidate target-validity predicate,
  fed into `ox.cHj(Predicate<Entity>)` (pool token `cHj`). By construction of the
  settings tree it must encode the `Target Options` filters (`Ignore Walls`,
  `Ignore Friends`, `Ignore Naked`) — but the *decoded conditions do not survive*; this
  attribution is structural, not decoded.
- **`aUq(ClientPlayerEntity) → Boolean` `[18ad483d0]`** — player-condition gate (VM
  body; conditions not recoverable). Structurally the counterpart of settings like
  `When Holding`, `Hold Key`, `Items To Use`, `Cancel In Screens`, `Weapon Only`.
- **`aUr() → Boolean` `[18ad4d370]`** — visibility supplier wired as
  `this.hjLsk.Vf(this::aUr)` (the `Slots` setting).
- **`aUs() → Boolean` `[18ad4d7c0]`** — visibility supplier wired as
  `this.SGIKe.Vf(this::aUs)` (the `Prediction Color` setting; structurally gated by
  `Predict Position`, like its sibling `RpKwK`/`maPUy` which are wired directly to
  `xZaeo::WF`).

### Float accessors

- **`aUn() → float` `[18ad47900]`**, **`aUo() → float` `[18ad47b10]`** — return the
  float state fields `KIJQr`/`oURtD` (order not determinable; one chain contains the
  VM's GetFloatField opcode at `[18ad47a47]`). `oURtD` initializes to `1000.0f`
  (a "no value yet" sentinel); `KIJQr` initializes to `0.0f`. Given the module's
  purpose these are most plausibly the current smoothed yaw/pitch offset or current
  noise sample state — **not decodable**.

### Trivial group — setting getters (null-check trampolines, no logic)

Getters cluster by wrapper type; within a cluster the address order matches the
constructor's field order (inferred, not proven — bodies are the same one-line
dispatcher):

| getters | type | fields (constructor order) |
|---|---|---|
| `aTA, aTB, aTC, aTE, aTG, aTM` | `cC` (slider) | `ZIaqt` Range, `gywhN` FOV, `PBZrn` Randomization, `sZDRi` Horizontal Speed, `OYFtx` Vertical Speed, `RpKwK` Prediction Ticks |
| `aTD, aTF, aTK, aTL, aTN, aUd, aUe, aUg` | `cJ` (toggle) | `MTMNI` Horizontal, `mcave` Vertical, `NURBy` Aim While On Target, `xZaeo` Predict Position, `maPUy` Render Prediction, `sYBzd` Cancel In Screens, `AwNUJ` Draw Fov, `BkSML` When Holding |
| `aTH, aTT, aTX, aUa` | `ct` (category/mode group) | `objof` Aim Point, `pNnvx` Items To Use, `mMTcv` Target Priority, `uqpih` Target Mode |
| `aTI, aTJ, aTU, aTV, aTY, aTZ, aUb, aUc` | `cu` (option) | `iznEa` Best Vector, `loMXv` Nearest Vector, `ClWRz` Weapon Only, `MEfRH` Custom Slots, `KLTHe` Distance, `rglYd` Health, `BtIDI` Switch, `rSkxN` Locked |
| `aTQ, aTR, aTS` | `cw` (option-checkbox) | `ZuWds` Ignore Friends, `AcJyQ` Ignore Naked, `jdxNC` Ignore Walls |
| `aTP` | `cv` | `uOqTy` Target Options |
| `aTO, aUf` | `cG` (color) | `SGIKe` Prediction Color, `UxVgK` Fov Color |
| `aTW` | `cz` (slot set) | `hjLsk` Slots |
| `aTz` | `cF` (entity-list) | `Rscmj` Target |
| `aUh` | `cD` (keybind) | `gMClj` Hold Key |
| `aUi, aUj, aUk` | `og, pe, mV` | `JdqkJ`, `rWorD`, `iywBD` (helper getters) |

### Decryption / bootstrap handlers (not module logic)

- `_f35fd70486682bf72c3c3fd96d3f755f` `[18ad93800]` — `<clinit>` helper; decrypts
  `POOL[0x226,0xd]` (`"ang/String;\0<"`), feeds the class-decrypt bootstrap.
- `aUA` `[18ad90af0]`, `aUx` `[18ad814f0]` — `CallSite` bootstraps (int/string constant
  decryption via MutableCallSite).
- `aUw` `[18ad80600]`, `aUz` `[18ad8fae0]` — MutableCallSite relays (object/int).
- `aUv(IJ) → String` `[18ad79700]`, `aUy(IJ) → int` `[18ad83fb0]`, `aUu([B) → String`
  `[18ad52170]` — the decryptor primitives proper; bodies are the whitening PRNG
  (anti-analysis noise, see Evidence base).
- `aUt(MatchException) → MatchException` `[18ad520e0]` — identity: `return param_3`
  (try/finally rethrow machinery of the obfuscator's `MatchException` pattern).

## Settings → behavior mapping

Exact constructor chains from the decrypted source (`payload-decrypted`, literals
folded). Wrapper types: `cC` slider (Vy=step, Vw=min, Vx=max, VA=default, Vz=suffix),
`cJ` toggle (`WE`=default), `ct` category / mode group, `cu` option, `cw` checkbox
option, `cv` group, `cG` color (`Uf`=default color), `cD` keybind, `cF` entity-list
(`VS`=entity filter), `cz` slot-set.

| field | name | construction (verbatim) | use in behavior (as far as evidenced) |
|---|---|---|---|
| `Rscmj` | Target | `new cF(this, "Target").VS(jg$tJ.OCdZM)` | entity filter for the `ox` search |
| `ZIaqt` | Range | `… .Vy(0.1).Vw(3.0).Vx(10.0).VA(6.0).Vz(" blocks")` | search radius (structurally; exact use in VM) |
| `gywhN` | FOV | `… .Vy(1.0).Vw(10.0).Vx(360.0).VA(180.0).Vz(" deg")` | aim FOV limit (structurally) |
| `PBZrn` | Randomization | `… .Vy(1.0).Vw(0.0).Vx(100.0).VA(5.0).Vz(" %")` | drives the `mV` smooth-noise amplitude feeding `cqG(FF)F` |
| `MTMNI` | Horizontal | `… .WE(true)` | gate; visibility-parent of Horizontal Speed |
| `sZDRi` | Horizontal Speed | `… .Vy(0.1).Vw(0.1).Vx(20.0).VA(1.0)` | yaw smoothing rate (structurally) |
| `mcave` | Vertical | `… .WE(true)` | gate; visibility-parent of Vertical Speed |
| `OYFtx` | Vertical Speed | `… .Vy(0.1).Vw(0.1).Vx(20.0).VA(1.0)` | pitch smoothing rate (structurally) |
| `objof` | Aim Point | category | parent of Best/Nearest Vector |
| `iznEa` | Best Vector | `new cu(this.objof, …)` | aim-point mode (hitbox "best" vector) |
| `loMXv` | Nearest Vector | `new cu(this.objof, …).SY()` | aim-point mode — **default** (`.SY()` marker) |
| `NURBy` | Aim While On Target | `… .WE(true)` | gate (structurally: keep rotating while crosshair already on target) |
| `xZaeo` | Predict Position | `… .WE(false)` | gate; visibility-parent of Prediction Ticks + Render Prediction |
| `RpKwK` | Prediction Ticks | `… .Vy(1.0).Vw(1.0).Vx(5.0).VA(2.0).Vz(" ticks")` | prediction horizon |
| `maPUy` | Render Prediction | `… .WE(false)` | gate for drawing the cached path |
| `SGIKe` | Prediction Color | `new cG(…).Uf(rD.dlM().bjG().bis())` | path color for `iW.bxt` |
| `uOqTy` | Target Options | group | parent of the three filters |
| `ZuWds` | Ignore Friends | checkbox | filter in `aUp` (structural) |
| `AcJyQ` | Ignore Naked | checkbox | filter in `aUp` (structural) |
| `jdxNC` | Ignore Walls | checkbox | filter via `pe` raycast (structural) |
| `pNnvx` | Items To Use | category | parent of Weapon Only / Custom Slots |
| `ClWRz` | Weapon Only | option | held-item gate (structural) |
| `MEfRH` | Custom Slots | option | enables the Slots filter |
| `hjLsk` | Slots | `new cz(this, "Slots")` (chars 83,108,111,116,115) | hotbar-slot set (`cz.Uz(PlayerEntity)`, `Uw(int…)`, `UC(Set)`); visibility supplier `aUr` |
| `mMTcv` | Target Priority | category | parent of Distance / Health |
| `KLTHe` | Distance | option | priority comparator (default side of the group) |
| `rglYd` | Health | option | priority comparator |
| `uqpih` | Target Mode | category | parent of Switch / Locked |
| `BtIDI` | Switch | option | mode: re-evaluate targets (no `.SO` ⇒ default) |
| `rSkxN` | Locked | option | mode: keep current target |
| `sYBzd` | Cancel In Screens | `… .WE(true)` | suspend when a GUI is open (structural) |
| `AwNUJ` | Draw Fov | `… .WE(false)` | gate for the FOV circle; visibility-parent of Fov Color |
| `UxVgK` | Fov Color | `new cG(…).Uf(rD.dlM().bjG().bis())` | FOV circle color |
| `BkSML` | When Holding | `… .WE(false)` | gate (structural: aim only while a mouse button held) |
| `gMClj` | Hold Key | `new cD(this, "Hold Key").VO(mA.sCBUa.cmO())` | hold-key binding |

Constructor visibility couplings (Java, exact):
`sZDRi.Vf(MTMNI::WF)`, `OYFtx.Vf(mcave::WF)`, `RpKwK.Vf(xZaeo::WF)`,
`maPUy.Vf(xZaeo::WF)`, `SGIKe.Vf(this::aUs)`, `hjLsk.Vf(this::aUr)`,
`UxVgK.Vf(AwNUJ::WF)`.

## Unrecovered / uncertain

1. **The rotation smoothing math — entirely unrecovered.** No floating-point
   operation or constant (no `atan2`, no interpolation factor, no easing curve, no
   `0.5`, no `180.0`) exists in any of the 589 continuation blocks; the module's
   arithmetic is inside the encrypted VM bytecode stream interpreted by those blocks.
   Concretely unknown: per-tick delta formula, how `Horizontal Speed`/`Vertical Speed`
   (0.1–20.0, default 1.0) map onto rotation increments, whether smoothing is
   frame-rate normalized, how `FOV` (10–360, default 180) gates targeting (angle
   between view vector and target), and how `Range`/`Randomization` enter the final
   angles. **Never guess these** — any clean-room implementation must pick values and
   document them as divergence (the existing rebuild in
   `modules/combat/AimAssist.java` already documents its own substitutions).
2. **The only evidenced rotation primitive is `Entity.setPitch(F)V`**
   (`method_36457`, in the pool blob). No yaw setter, no `changeLookDirection`, no
   mouse-delta call appears in the pool — the yaw application route (direct field
   write, `setYaw`, mouse smoothing, or a payload wrapper resolved by a token outside
   this blob) is not determinable.
3. **`aUp`/`aUq` conditions** (target-validity and player-gate predicates): VM bodies;
   which of `Ignore Walls/Friends/Naked`, `Weapon Only`, `Slots`, `When Holding`,
   `Hold Key`, `Cancel In Screens` is checked where, and their exact tests (e.g. how
   "naked" is decided), do not survive. Attribution of settings to these predicates is
   structural (settings-tree shape), not decoded.
4. **Which event drives aiming vs rendering**: `aTv`/`aTw`/`aTy` are all render-side;
   none is a tick event. Whether rotation is updated per-frame in one of these (and
   which), or via an inherited `gg`-base hook, is not determinable from the stubs.
   The earlier structural spec's guess that `aTy` is "per-tick aim update" is not
   supported by the handler evidence — `gk` carries a `DrawContext`.
5. **`aUn()`/`aUo()` ↔ `KIJQr`/`oURtD` attribution** and the semantic meaning of the
   two floats (smoothed offsets? noise samples? timing state? `oURtD = 1000.0f`
   sentinel suggests a "far/none" initial value). Only one `GetFloatField` opcode
   block (`[18ad47a47]`) exists; the mapping is unresolved.
6. **Prediction math** (`CBxhI` path construction, `Prediction Ticks` horizon use,
   per-tick advancement) is VM bytecode; only the render call `iW.bxt` and the cache
   getter `aUm` are evidenced.
7. **`aTv(gH$th)` stage semantics** — the event is an empty marker shared by ~90
   modules; its firing stage (which render phase of the frame) is defined by the event
   bus, not by this class, and was not decoded here.
8. Getter→field mapping *within* each type cluster (e.g. which of `aTA/aTB/…` returns
   which `cC`) is inferred from address/constructor order, not proven; the trampoline
   bodies are all identical one-line dispatchers.
