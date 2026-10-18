# Elytra Target (sixtwo.dA) — handler-derived behavior spec

Class: `sixtwo/dA` · display name **Elytra Target** · registry description
"Automatically uses firework for target" · primary key 59, **active bind 82**
(the only module in this batch with a bound active bind) [registry].
Superclass: `gg` (`extends iS`), category constant `gh.qBzlZ` (same encrypted
category as dO/dE; display name unrecovered). Constructor key constant decodes
to 59 ✓.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_dA.c` — **25 native handlers +
   continuation blocks**, 0 unresolved table targets.
2. Structural: `analysis/specs/modules/dA.md`, Java shell
   `analysis/decompiled/payload-named/sixtwo/dA.java` (Vineflower; constructor
   decompiled, all behavior `native`).
3. **Pool windows** (global pool at image `+0x18301ee40`):
   - `YO ()V` [18e0111b0]: `POOL[0x3806,0xbf]` — HUD-widget neighborhood
     (fr.md notes apply verbatim).
   - **Shared behavior core** — `ajT, ajU, ajV, akh` (and window tail shared
     with the `oj` placement-engine cluster) decrypt `POOL[0x8ea3,0x191]`
     (401 bytes).
   - `akm`/`akp` bootstraps [18e052c70, 18e061600]: `POOL[0x857,0x26]`;
     clinit `POOL[0x226,0xd]`.
4. Yarn mapping — window tokens:
   - **Shared placement-engine cluster** (identical token family to eK's
     `POOL[0xa5c3,0x1d6]`): `CzAnG`, `method_6104` (`swingHand(Hand)`),
     `QiyGI/krUWC/MxRqJ/ann/gnfiQ`, `class_2341` (WallMountedBlock),
     `method_46558` (`Position.toCenterPos`), descriptor tail
     `…8;Lnet/minecraft/class_2350;)Z` (Direction). This is the neighboring
     eK/eJ program stream, not dA's own — flagged.
   - **dA-attributable cluster**: `method_33571` = `Entity.getEyePos()`,
     `class_3959` RaycastContext + `$class_3960` ShapeType (`field_17558`) +
     `$class_242` **FluidHandling** with `field_1348` = **NONE**,
     `(Lnet/minecraft/class_243;Lnet/minecraft/class_24…` (Vec3d-taking
     signature, truncated at window end) — a **visibility/aim raycast from
     the eye position** with fluid handling NONE.
5. Decrypted constants: 77 ints reconstruct all dA setting names (module md
   list confirmed exactly: Elytra Bounce, Firework Cooldown, Firework Key,
   Firework Use Mode, Follow Distance, On Bind, Overshoot, Overshoot Value —
   plus the decoded group children "None" and "Auto"). The 3 `akm<"x">` unit
   strings (suffixes for Follow Distance / Firework Cooldown / Overshoot
   Value) are raw-args only — plaintext unrecovered.

## Runtime model

- **Events** (`@hG`, via `gg.YO()` → `hF.bdM`):
  - `ajT(gH$th)` [18e011470] — pre-motion client-tick event (per er.md the
    `gH$th` marker fires in the motion phase): the firework-usage loop.
  - `ajU(gA)` [18e04e6a0] — input event (`gA` = MouseInput+KeyInput+3 ints):
    consumes the `pWbaz` "Firework Key" in **On Bind** mode.
  - `YO()` [18e0111b0] — listener re-registration override.
- **State**: `NevtZ` boolean (single state flag — "firework pending/cooldown
  armed" candidate); `akfwU = mT.cpz()` — mT timer gating `Firework Cooldown`.
- **Target coupling**: `ajV(LivingEntity)Z` is a public target-accept check —
  the reverse hook of fr's target cache (`fr.aOQ()` exposes the selected
  target; Elytra Target is the consumer implied by fr's shared-window
  isGliding cluster, see fr.md §aNw). The registry "for target" + the
  LivingEntity arg make dA a *client of the target-selector stack* (`og`/`oh`
  family), not an owner.
- **Firework submission**: no packet classes imported; the use action is
  native (item-use/simulation path). Given the mode group (Auto / On Bind /
  None), Auto mode uses the item automatically when the cooldown elapses and
  the player is gliding toward/away from the target.

## Per-handler semantics

- **`ajT (Lsixtwo/gH$th;)V` — pre-motion tick [18e011470]**. Core window.
  Contract: while enabled and gliding with a selected target, evaluate the
  eye-raycast cluster (`getEyePos` → RaycastContext(ShapeType `field_17558`,
  FluidHandling **NONE**) → Vec3d signature) for target visibility, and if
  the `akfwU` timer exceeds `Firework Cooldown` and the mode allows, use a
  firework toward the target. Overshoot (`MQFiv`) modifies the aim point by
  `Overshoot Value`. All math unrecovered.
- **`ajU (Lsixtwo/gA;)V` — input handler [18e04e6a0]**. Core window. On the
  configured Firework Key, trigger one firework use (On Bind mode). Details
  unrecovered.
- **`ajV (Lnet/minecraft/class_1309;)Z` — target check [18e080fd0]**. Core
  window; public predicate over a LivingEntity. Returns whether the entity
  qualifies as the firework target. Exact test unrecovered.
- **`akh ()Z` [18e01c550]** — state query (pure jumptable stub; "is
  targeting/cooldown active" candidate).
- **Setting getters** (pure jumptable stubs; typed unambiguously except the
  three `cu` children): `ajW ()cC` → `RaxVQ` [18e0866b0]; `ajX ()ct` →
  `woeNK` [18e0868b0]; `ajY ()cu`/`ajZ ()cu`/`aka ()cu` → `sGPoP` ("None") /
  `thWij` ("On Bind") / `QVTVw` ("Auto", `.SY()` default) in unknown order
  [18e086ab0, 18e086cb0, 18e086eb0]; `akb ()cC` → `mFDgP` [18e0870b0];
  `akc ()cD` → `pWbaz` [18e01bb50]; `akd ()cJ` → `srWas` [18e01bd50];
  `ake ()cJ` → `MQFiv` [18e01bf50]; `akf ()cC` → `qWvkv` [18e01c150];
  `akg ()mT` → `akfwU` [18e01c350].
- **Infrastructure**: `aki` [18e01c750] identity rethrow; `akj ([B)String`
  [18e01c7e0] decoder stub; `akk (IJ)String` [18e046b20] / `akn (IJ)I`
  [18e055730] pool decryptors (~490/~510 lines MBA noise); `akl`/`ako` indy
  transitions; `akm`/`akp` bootstraps; `_b817…` clinit [18e064310].

## Settings → behavior mapping

All 10 fields; names decoded (module md confirmed; children names added):

| field | setting | chain (verbatim) | behavior role |
|---|---|---|---|
| `RaxVQ` | Follow Distance | `cC .Vy(1.0).Vw(0.0).Vx(100.0).VA(10.0).Vz(<suffix>)` — step 1, min 0, max 100, default 10 | distance band kept to the target while gliding |
| `woeNK` | Firework Use Mode | `ct(this, "Firework Use Mode")` | mode group |
| `sGPoP` | — None | `cu(woeNK, "None")` | never auto-use |
| `thWij` | — On Bind | `cu(woeNK, "On Bind")` | use on `Firework Key`; visibility-gates `pWbaz` |
| `QVTVw` | — Auto | `cu(woeNK, "Auto").SY()` (**default**) | auto-use on cooldown; visibility-gates `mFDgP` (`mFDgP.Vf(this.QVTVw::SZ)`, dA.java:188) |
| `mFDgP` | Firework Cooldown | `cC .Vy(1.0).Vw(0.0).Vx(60.0).VA(2.0).Vz(<suffix>)` — step 1, min 0, max 60, default 2 | minimum interval between firework uses (enforced via `akfwU` mT timer) |
| `pWbaz` | Firework Key | `cD .VO(-999)` (unbound), visibility supplier `thWij::SZ` | keybind for On Bind mode |
| `srWas` | Elytra Bounce | `cJ .WE(false)` | bounce-off-target behavior (registry-name-only; mechanics unrecovered) |
| `MQFiv` | Overshoot | `cJ .WE(false)` | enable aim-point overshoot |
| `qWvkv` | Overshoot Value | `cC .Vy(0.01).Vw(0.0).Vx(5.0).VA(3.0).Vz(<suffix>)` — step 0.01, min 0, max 5, default 3 | overshoot magnitude (blocks-scale range) |

State wiring note: `qWvkv` (Overshoot Value) has **no Java visibility wiring**
(unlike pWbaz/mFDgP) — its gating on `MQFiv` must be native or absent; the
constructor ends after the two `.Vf` calls (dA.java:187-188).

## Unrecovered / uncertain

1. **All firework math**: aim point, Overshoot application, Follow Distance
   band enforcement, and the cooldown tick conversion are VM bytecode.
2. **Elytra Bounce semantics** — name only; no window evidence.
3. **Shared-window attribution**: the placement-engine cluster in
   `POOL[0x8ea3,0x191]` (swingHand/WallMountedBlock/toCenterPos + the five
   obfuscated members) is eK/eJ's program stream; only the
   getEyePos/RaycastContext/FluidHandling.NONE cluster is dA-attributable.
   Whether dA's window tail also touches more of its own program (the
   truncated Vec3d signature) is unresolved.
4. **`field_17558` ShapeType identity** (VISUAL/COLLIDER/OUTLINE) unresolved
   (same unknown as eK).
5. **The three unit suffix strings** (`akm<"x">` at 1203/18609/10134) —
   raw args only, no plaintext; likely " blocks"/" s"-family but unproven.
6. **`ajV` predicate vs `akh` flag** exact semantics; the three `cu` getters'
   order.
7. **How dA obtains its target** — fr's `aOQ()` cache is the inferred source
   (fr.md documents the reverse dependency); no direct token in dA's window
   proves the link.
