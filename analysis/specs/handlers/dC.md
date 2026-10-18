# dC — View Model (module id 95)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/dC.md`; registry row
  `sixtwo.dC|View Model|Changes player View Model|key=95|bind=-999` (primary key 95,
  active bind −999 = unbound), category `gh.nOCvV` (Render).
- Java shell: `analysis/decompiled/payload-decrypted/sixtwo/dC.java` (440 lines,
  Vineflower, DES literals folded to `(int)` char codes) — full settings tree + listener
  declarations.
- Native: `analysis/ghidra/handlers-full/sixtwo_dC.c` — 7 handler stubs, all
  decrypt-then-VM-dispatch (`FUN_190dd72e0` → `(*env+0x720)` → indirect jump); no bytecode
  statically recoverable. Mixed class: Java-visible settings/UI, native behavior bodies.
- Pool window: decrypt call is `FUN_190dd72e0(env, POOL_RVA+off, len)`, POOL base RVA
  `0x301ee40`, image `analysis/ghidra/dumps/jna-decrypted-v2.dll`. Yarn map:
  `analysis/jars/yarn-1.21.11+build.6.tiny`.

Handler → pool-blob usage map:

| Blob (off,len) | Handlers | Addresses |
|---|---|---|
| `0x910a,0x19a` | `akr` `aks` (+ literal helpers `akv`/`aky`, 4 decrypt sites) | akr `[0x18df99450]`, aks `[0x18df9f980]`, akv `[0x18dfe6840]`, aky `[0x18dff17a0]` |
| `0x226,0xd` | `_0e4bb2ce906b33207e6d0df4d0a853af` (class-init) | `[0x18dfa1aa0]` |
| `0x857,0x26` | `akx` `akA` (indy bootstraps → MutableCallSite) | `[0x18dfeece0]`, `[0x18dffd9b0]` |

Verbatim exclusive token run of `0x910a,0x19a` (constant-pool order, not semantic order):
`od_41753 oxuOm akq method_41748 sixtwo/dC quonG sixtwo/gl baU ()Lnet/minecraft/class_1268;
baZ ()Lnet/minecraft/class_4587; dEZDK akt dMxZz lrzzl SyrBJ pBWki lHKkw LfvJD SJQkW DwJFs
qHQrv sixtwo/gt bbt kdvZK nqkJs ETsKP PBkMX Chpem net/minecraft/class_4587 method_46416
net/minecraft/class_7833 field_40714 Lnet/minecraft/class_7833; lYAof sbWzr rotationDegrees
(F)Lorg/joml/Quaternionf; ybEWa method_22907 (Lo…` (tail truncated mid-descriptor).

Yarn resolutions used below: `method_46416` = `MatrixStack.translate(float,float,float)`;
`class_7833` = `net.minecraft.util.math.RotationAxis`, `field_40714` =
`RotationAxis.POSITIVE_X`; `rotationDegrees(F)→Quaternionf`; `method_22907` =
`MatrixStack.multiply(Quaternionf)`; `method_41748` = `Map.Entry.setValue(Object)`,
`method_41753` = `Map.Entry.getValue()`.

## Runtime model

- `gf.aZL(95, false, gh.nOCvV)` [dC.java:46] — registered disabled at boot, category
  `nOCvV` (Render).
- The module transforms the first-person hand/item render model: per-hand position offsets,
  per-hand rotations, and an overall scale, driven by the two hand-render events
  (`gl` = first-person hand render: `baU()`→`Hand`, `baZ()`→`MatrixStack`; `gt` =
  shared MatrixStack event: `bbt()`→`MatrixStack`). Registry: "Changes player View Model".
- Listener inventory (2 `@hG` handlers, both native):
  - `akr(gl)` [dC.java:434] — hand-render transform handler `[0x18df99450]`
  - `aks(gt)` [dC.java:430] — MatrixStack transform handler `[0x18df9f980]`
- Both handlers share the same interpreted pool blob (`0x910a,0x19a`), i.e. the same
  interpreted body region reads the same slider fields for both events.
- Enable gate `bab()` and the setting read-backs are VM-interpreted; the Java shell shows
  only field declarations (dC.java:11-32) and the indy/literal helpers.

## Per-handler semantics

1. `public dC()` [dC.java:45-411] — constructor: registers module id 95 (disabled, Render);
   builds 21 widgets (see Settings); wires visibility: Scale + Main Pos/Rot + Off Pos/Rot
   visible when `dEZDK` "Work On Items" is checked (`.Vf(this.dEZDK::WF)` [dC.java:386-398]),
   Arm Pos/Rot visible when `DwJFs` "Work On Arm" is checked (`.Vf(this.DwJFs::WF)`
   [dC.java:399-405]). No behavior logic in Java.
2. `@hG native akr(gl)` [dC.java:434; sixtwo_dC.c:35] — first-person hand-render event.
   Token evidence (`gl.baU` = Hand getter, `gl.baZ` = MatrixStack getter): the body reads
   the event's `Hand` and its `MatrixStack`, then applies transforms:
   - `MatrixStack.translate(F,F,F)` (`method_46416`) — Main Position X/Y/Z for
     `Hand.MAIN_HAND`, Off Position X/Y/Z for `Hand.OFF_HAND` (mapping inferred: the
     tokens alternate `gl` field access and slider fields `lrzzl/lHKkw/SJQkW` and
     `pBWki/LfvJD/qHQrv`).
   - `RotationAxis.POSITIVE_X.rotationDegrees(F) → Quaternionf` then
     `MatrixStack.multiply(Quaternionf)` (`method_22907`) — Main Rotation X/Y/Z
     (`nqkJs/sbWzr/CuhzR`) or Off Rotation X/Y/Z (`Chpem/ybEWa/NMqQj`) applied in degrees
     (sliders carry `.Vz(" deg")`).
   - Scale (`dMxZz`, 0.0–2.0 default 1.0) is read in the same body; its application path
     (a scale into the MatrixStack) is not token-visible — see Blockers. (inferred)
   - Work On Items gate: since "Work On Items" controls visibility of Scale/Main/Off, the
     Main/Off transforms are only applied while holding an item — the exact held-item test
     is VM-interpreted. (inferred from the setting name + visibility predicate)
3. `@hG native aks(gt)` [dC.java:430; sixtwo_dC.c:52] — shared MatrixStack event
   (`gt.bbt()` → `MatrixStack`): applies the Arm Position X/Y/Z (`kdvZK/ETsKP/PBkMX`) and
   Arm Rotation X/Y/Z (`lYAof/EqnCi/bWwHi`) transforms via the same
   translate + POSITIVE_X rotation + multiply sequence, gated by "Work On Arm". (inferred
   from shared blob + field token co-occurrence)
4. Static/init: class-init decrypts `[0x226,0xd]` `[0x18dfa1aa0]`; `akx/akA` are indy
   bootstraps (`[0x857,0x26]`) returning `CallSite`s for the MutableCallSite indy sites;
   `akv(IJ)String`/`aky(IJ)I` are the DES-literal decrypt primitives.

## Settings

All names decrypted verbatim from `payload-decrypted/sixtwo/dC.java` (char codes):

- `cJ dEZDK` = **"Work On Items"** (chars `87 111 114 107 32 79 110 32 73 116 101 109
  115`): `.WE(true)` — checked by default [dC.java:59].
- `cC dMxZz` = **"Scale"** (chars `83 99 97 108 101`): `.Vw(0.0).Vx(2.0).Vy(0.01).VA(1.0)`
  ⇒ min **0.0**, max **2.0**, step **0.01**, default **1.0** [dC.java:61-70].
- Main Position X/Y/Z (`lrzzl` `lHKkw` `SJQkW`): `.Vw(-3.0).Vx(3.0).Vy(0.01).VA(0.0)` ⇒
  min **−3.0**, max **3.0**, step **0.01**, default **0.0** [dC.java:90-124].
- Main Rotation X/Y/Z (`nqkJs` `sbWzr` `CuhzR`): `.Vw(-180.0).Vx(180.0).Vy(1.0).VA(0.0)
  .Vz(" deg")` ⇒ min **−180**, max **180**, step **1**, default **0** degrees
  [dC.java:140-176] — the only literal unit suffix in this class.
- Off Position X/Y/Z (`pBWki` `LfvJD` `qHQrv`): same −3.0/3.0/0.01/0.0 chain
  [dC.java:186-223].
- Off Rotation X/Y/Z (`Chpem` `ybEWa` `NMqQj`): same −180/180/1/0 + `" deg"` chain
  [dC.java:236-274].
- `cJ DwJFs` = **"Work On Arm"** (chars `87 111 114 107 32 79 110 32 65 114 109`):
  `.WE(false)` — off by default [dC.java:285].
- Arm Position X/Y/Z (`kdvZK` `ETsKP` `PBkMX`): −3.0/3.0/0.01/0.0 [dC.java:287-330].
- Arm Rotation X/Y/Z (`lYAof` `EqnCi` `bWwHi`): −180/180/1/0 + `" deg"` [dC.java:340-384].
- Visibility: Scale/Main-*/Off-* ⇐ `dEZDK::WF`; Arm-* ⇐ `DwJFs::WF` [dC.java:386-405].
- No keybind (`cD`), no groups (`ct`), no radio options.

## Blockers / unknowns

- Both behavior bodies are fully VM-interpreted; the per-hand transform order (translate
  before/after rotate), the application frame (whether transforms are applied to the
  event's own MatrixStack or a copy), and the exact held-item/empty-hand gating are not
  statically recoverable.
- Scale application: no `MatrixStack.scale` token exists in the shared window; the scale
  may be folded into the translate values or applied through a Quaternionf composition.
  (inferred) — unrecovered.
- Only `RotationAxis.POSITIVE_X` (`field_40714`) appears in the decrypted window; how the
  Y and Z rotation sliders produce their quaternions (other `RotationAxis` constants
  resolved dynamically vs. repeated X-axis multiplies) is unrecovered. (inferred:
  three-axis rotation composition using the same `RotationAxis` class)
- Token `SyrBJ` has no counterpart in the Vineflower field list (which has `CuhzR`/
  `NMqQj`/`EqnCi`/`bWwHi` where the window would expect them) — constant-pool aliasing of
  the obfuscator; exact field↔slider mapping inside the VM body is unrecovered.
- `method_41748/41753` (`Map.Entry.setValue/getValue`) suggest settings-map iteration
  inside the VM body; purpose unrecovered.
- No undecrypted DES suffix strings in this class (all `.Vz` uses are the literal
  `" deg"`); `quonG`/`akt`/`akq`/`od_41753`/`oxuOm` are obfuscation machinery.