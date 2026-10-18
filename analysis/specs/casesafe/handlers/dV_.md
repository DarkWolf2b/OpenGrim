# dV — Custom FOV (module id 53)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/dV.md`; registry row
  `sixtwo.dV|Custom FOV|Allows to set custom fov|key=53|bind=-999` (primary key 53, active
  bind −999 = unbound), category `gh.qBzlZ` (Misc).
- Java shell: `analysis/decompiled/payload-decrypted/sixtwo/dV.java` (61 lines, Vineflower,
  DES literals folded) — one slider + one field + overrides; no `@hG` listeners at all.
- Native: `analysis/ghidra/handlers-full/sixtwo_dV.c` — 5 handler stubs, all
  decrypt-then-VM-dispatch; no bytecode statically recoverable. Fully native-backed.
- Pool window: POOL base RVA `0x301ee40`, image
  `analysis/ghidra/dumps/jna-decrypted-v2.dll`. Yarn map:
  `analysis/jars/yarn-1.21.11+build.6.tiny`.

Handler → pool-blob usage map:

| Blob (off,len) | Handlers | Addresses |
|---|---|---|
| `0xb9c3,0x200` | `aaj` `YO` `aqd` (+3rd decrypt site; `aqe` shares the region) | aaj `[0x18d911b30]`, YO `[0x18d917450]`, aqd `[0x18d918c70]`, aqe `[0x18d918e70]` |
| `0x226,0xd` | `_f41f24ca18273d66e52f46718dd5f912` (class-init) | `[0x18d9512a0]` |
| `0x857,0x26` | `aqj` (indy bootstrap) | `[0x18d94e590]` |

Verbatim token run of `0xb9c3,0x200` (first 16 tokens = dV-exclusive):
`apX ouAAg nnzAd rYgca aqa KfSMK sixtwo/dV pPdLC aqf gShhH method_41808 iNKRn zwVyv iuIKj
NlXtA aqh` — then the window continues into the **neighbor dW section** (`sixtwo/dW XbNnT
field_1773 net/minecraft/class_757 method_19418 ()Lnet/minecraft/class_4184;
net/minecraft/class_4184 method_71156 FtQTF Lnet/minecraft/class_243; … sixtwo/kr bQZ
(Lnet/minecraft/class_243;Lnet/minecraft/class_742;)V method_31044 ()Lnet/minecraft/class_5498;
…`), whose GameRenderer/Camera/kr/`Perspective` tokens belong to dW, **not** dV. The
exception: `HnRzm` (mid-window) is dV's own static suffix-string field (declared
dV.java:14, consumed at dV.java:38).

Yarn resolutions used below: `method_41808` = `GameOptions.getFov()` returning
`net.minecraft.client.option.SimpleOption` (`class_7172`); `gShhH` is a dV `int` field.

## Runtime model

- `gf.aZL(53, false, gh.qBzlZ)` [dV.java:22] — registered disabled at boot, category
  `qBzlZ` (Misc).
- The module overrides the vanilla FOV `SimpleOption` while enabled and restores the
  original value on disable. It has **no event listeners**: behavior is entirely driven by
  the framework enable/disable lifecycle hooks `aaj()` (on-enable) and `YO()` (on-disable).
- Listener inventory (0 `@hG`; 2 lifecycle overrides, both native):
  - `aaj()` — on-enable override [dV.java:49; sixtwo_dV.c:35]
  - `YO()` — on-disable override [dV.java:60; sixtwo_dV.c:1]
- GUI accessors: `aqd()` → `cC` (the FOV slider getter) [dV.java:46],
  `aqe()` → `int` (the stored vanilla-FOV getter, inferred) [dV.java:51].

## Per-handler semantics

1. `public dV()` [dV.java:21-40] — constructor: registers module id 53 (disabled, Misc);
   builds the FOV slider `iNKRn` ("FOV", chars `70 79 86`) with
   `.Vy(1.0).Vw(30.0).Vx(150.0).VA(90.0).Vz(HnRzm)` [dV.java:26-38]; initializes
   `gShhH = 70` [dV.java:39] — the vanilla default FOV, used as the restore fallback.
2. `native aaj()` on-enable [dV.java:49; sixtwo_dV.c:35] — token evidence: `gShhH`,
   `method_41808` (GameOptions.getFov → `SimpleOption`), `iNKRn`, and the indy
   MutableCallSite machinery (`aqh`/`aqj` at `[0x857,0x26]`/`[0x18d942130]`). Behavior
   (inferred, token-ordered): read the current FOV `SimpleOption` via
   `options.getFov()`, stash its value into `gShhH`, then set the `SimpleOption` to the
   slider value `iNKRn.VB()` through the indy call-site (SimpleOption.setValue). The
   `setValue` method ref itself is not in the plaintext window — it is resolved through
   the indy bootstrap. (inferred)
3. `native YO()` on-disable [dV.java:60; sixtwo_dV.c:1] — same blob; restores the stored
   value: `options.getFov()` `SimpleOption` set back to `gShhH` (70 until the module has
   enabled at least once). (inferred, token-shared with aaj)
4. `aqd()` [dV.java:46] / `aqe()` [dV.java:51] — getters exposing the slider and the
   stored vanilla FOV to the GUI/other modules (cQ-style shell-read pattern, inferred).
5. Static: `aqg(byte[])`/`aqh(IJ)I` DES-literal helpers; `aqf(MatchException)` wrapper;
   class-init `[0x18d9512a0]`.

## Settings

- `cC iNKRn` = **"FOV"** (chars `70 79 86`): `.Vy(1.0).Vw(30.0).Vx(150.0).VA(90.0)` ⇒
  step **1.0**, min **30.0**, max **150.0**, default **90.0** [dV.java:26-37]. Unit
  suffix: `.Vz(HnRzm)` — `HnRzm` is a static DES-encrypted string that was **not
  decrypted** in this build; its value (very plausibly a degree/percent-style suffix) is
  unrecovered and must not be guessed.
- No keybind, no toggles, no groups, no radio options. One widget total.
- State field: `int gShhH`, init **70** [dV.java:39] — restore target for YO.

## Blockers / unknowns

- The `SimpleOption.setValue` call and any clamping/rounding applied when writing the FOV
  are inside the indy-resolved VM body — not statically recoverable. (inferred contract:
  `options.getFov()` → `SimpleOption` read on enable, write slider value, write-back on
  disable)
- Whether aaj snapshots `gShhH` from the live FOV on every enable or only applies the
  slider when its value differs from the default 90 is unrecovered (the 70-init and the
  `aqe()` int getter strongly suggest a snapshot + restore design).
- `.Vz(HnRzm)` suffix string: DES-encrypted static, **undecrypted** — stated explicitly,
  no guess made.
- Tokens from `sixtwo/dW` onward in the `0xb9c3` window (GameRenderer, Camera,
  `method_71156` = waypoint `getCameraPos`, `sixtwo/kr.bQZ(Vec3d, AbstractClientPlayerEntity)`,
  `method_31044` = `GameOptions.getPerspective` → `Perspective`) are neighbor **dW**'s
  section of the shared pool region and are NOT part of dV's behavior; dV's exclusive
  token set ends at `aqh`.