# Super Firework (sixtwo.ep) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/ep` ("Super Firework", registry line
`sixtwo.ep|Super Firework|Increases speed after firework use|key=113|bind=-999`, module id **113**,
unbound keybind), derived from native handler decompiles + pool-token evidence. Companion to
`analysis/specs/modules/ep.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_ep.c` | PRIMARY: 5 native handler stubs + 53 continuation blocks; 20 VM table RVAs not in tables.json (`0x20f1970`–`0x20f1a08`, step 8) |
| Pool window `0xd42b,0x24a` (POOL base RVA `0x301ee50`), dumped with absolute offsets | per-token position proof; family-shared region with `er` (Speed) and `eq` (Null Movement) |
| Neighbor corpora `sixtwo_{eo,eq,er}.c` | proves the overlap: `er`'s stubs `aub`/`auc`/`aud`/`aue`/`auf`/`aug`/`auj`/`aum` all decrypt `[0xd467,0x24c]`, overlapping ep's window; `eq`'s only stub is the class-init |
| `analysis/decompiled/payload-decrypted/sixtwo/ep.java` | full constructor with folded literals (id 113, "Boost Value", slider chain) |
| `analysis/decompiled/payload-named/sixtwo/ep.java` | identical tree plus the raw indy form `aua<"l">(6861, …)` |
| `analysis/decompiled/payload-named/sixtwo/{eo,eq,er,en,gw,mF,ou,mw,jg}.java` | token ownership checks for window attribution |
| `analysis/jars/bootstrap-raw/offline/features/metadata.txt:67` | registry line verbatim |
| `analysis/port/reports/batch6.md:27` | prior porting note (reconstruction, not native evidence) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names in the shared region |

Handler → pool-blob usage map:

| Blob (off,len) | Handler |
|---|---|
| `0x226,0xd` | `_a30b6b505e7cd15c6b5a9e05f022e45f` (class-init; identical stub in eq/er/eo) |
| none (pure 2-way dispatch) | `atX ()Lsixtwo/cC;` |
| `0xd42b,0x24a` | `atY (IJ)I` — the one substantive VM stub (family-shared token table) |
| none | `atZ` (indy fallback switch) |
| `0x857,0x26` | `aua` (CallSite bootstrap; identical blob in `er.aul`/`er.auo`) |

## Runtime model

### Identity

- `ep extends gg`. Constructor `super(gf.aZL(113, false, gh.xgeEn))` — module id **113**, flag
  `false` (meaning unrecovered), category `gh.xgeEn` — the **movement category** shared with
  `eA` Strafe (35), `eB` Flight (44), `eC` Sprint (34), `ez` No Fall (36) `[decompiled + registry]`.
- Registry: primary key **113** (this is the module id, same as `ej` key=43 / id 43), active
  bind **-999** = unbound `[metadata.txt:67]`. Description: "Increases speed after firework use".
- **Config-only shape** like `eg` (No Swing) / `ex` (Safe Walk): no `@hG` event listeners are
  declared in Java, no `rk` keybind object, no static packet-class references. All 5 methods are
  native; the behavior lives behind the VM (`atY` engine entry + indy machinery), so this spec is
  largely an API-contract spec.

### Pool window layout (offset-proven)

`atY`'s stub decrypts `POOL[0xd42b,0x24a]`. Token offsets (absolute pool offsets, `\0`-separated):

| Offsets | Tokens | Attribution |
|---|---|---|
| `0xd42b–0xd44a` | `(IFF)V`, `dfyKP`, `CShYy`, `jOIOU`, `atU`, `atp` | **not ep's** — `dfyKP`/`CShYy`/`jOIOU`/`atU` are declared in `eo.java` (VM state statics + `atU (IJ)I`, eo.java:33–35,301); `atp` is `en.java:38` (`private native void atp()`). Tail of the en/eo family region. `(IFF)V` matches no Java member — VM-only descriptor |
| `0xd44b–0xd476` | `sixtwo/ep`, `QHFqR`, `JzJxD`, `uwsLE`, `IUUCe`, `atY`, `SdMAu` | **ep-exclusive** — every token is a declared member of ep.java |
| `0xd477–0xd486` | `sixtwo/eq`, `Ignfk` | eq (Null Movement) — `eq.java` fields `Ignfk`/`VLNez` |
| `0xd487–0xd672` | `sixtwo/er` + er members (`JyNdk`, `auh`, `HJQND`, `ylthu`, `VLNez`, `aue`, `CUcNd`, `aug`, `aqeay`, `auf`, `VEzGB`, `rJcqT`, `tmlzg`, `UGcHq`, `oxsCR`, `LjlKg`, `SdfDA`, `wCnjW`, `ZdKpi`, `qMlRb`, `eCLmu`, `hqvXq`, `qjOuA`, `GPmbA`, `rxcxT`, `aui`, `WEdTE`, `uyklF`, `fmmgC`) + `sixtwo/gw` section (`bbw`, `()Lsixtwo/mF;`, `bxH`, `(Lsixtwo/mF;)Z`, `bbA`) + `bBN` (`jg`) + `hrPmv` (`mw` enum) + Minecraft tokens (below) + `sixtwo/es` + `sixtwo/hd` | er (Speed) + family-shared helper surface |
| `0xd673–0xd674` | `ua` | truncated token at the window end (boundary artifact) |

Minecraft API tokens in the shared region (yarn-resolved): `method_5805` **isAlive**,
`method_7325` **isSpectator**, `method_1020` **Vec3d.subtract**, `method_1029` **Vec3d.normalize**,
`method_9499` **Block.getSlipperiness** (adjacent `net/minecraft/class_2248`),
`method_18799` **setVelocity** (descriptor `(Lnet/minecraft/class_243;)V`),
`field_6235` **LivingEntity.hurtTime**, `method_18112` **getEntities**, `net/minecraft/class_1309`
(LivingEntity), predicate descriptor `(Lnet/minecraft/class_1309;D)Z` on `jg.bBN`.

Because `er`'s stubs decrypt `[0xd467,0x24c]` — a sub-range of ep's window shifted forward — the
region is a **merged family table** (ep/eq/er programs share one token region; `er` even touches
`IUUCe`/`atY`/`SdMAu` at its window start). Individual Minecraft tokens therefore cannot be
assigned to ep vs er statically; the list above bounds the family surface.

### Shared support classes (one line each)

- `cC` — slider setting wrapper (`.Vy` step, `.Vw` min, `.Vx` max, `.VA` default, `.Vz` suffix).
- `mr.clS(int[])` — char-code → string decoder used for setting names.
- `gw extends hH` — movement-input event shell wrapping `mF` (4-boolean input-flag struct:
  `HlnYD/cGCUl/woOkz/dIjJq` with setters) plus two booleans; `bbw()` getter, `bbA/bbB` setters.
- `ou` — game-state wrapper (`os` + `ow` + int/bool config, default `2.0F` speed constant,
  static singleton `kxNyl`); `er`'s static `ou UGcHq`.
- `jg` — math helper; `bBN (LivingEntity, double)Z` distance predicate.
- `mw` — enum whose constant `hrPmv` appears in the family window.
- `es` (No Push) / `hd` (block-push event) — cross-module references in the family surface.
- `hH` — base event shell (cancelable via `bdX(true)`/`bdW()`).

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_a30b6b505e7cd15c6b5a9e05f022e45f()V` | `18cf878b0` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(ep.class)`; runs after `Loader.doInit`, `JNI->ExceptionCheck` (JNIEnv `+0x720`), 2-way jump on the check. Blob holds only a shared-type tail (`…ang/String;` + `<`) — same init stub body as `eq`/`er`/`eo`. `[18cf878b0]` |
| `atX ()Lsixtwo/cC;` | `18cf77860` | — | **Public native getter** returning the `Boost Value` slider (`QHFqR`). No token blob — body is a 2-way jump on `param_2 == 0` (`UNK_1820efa00` dispatch). This is the config API contract: the port layer reads Boost Value through `atX()`. `[18cf77860]` |
| `atY (IJ)I` | `18cf77a60` | `0xd42b,0x24a` | The class's single substantive VM stub: decrypt preamble → indirect jump into the bytecode VM; all continuations end in `halt_baddata`. Same `(IJ)I` shape as `eo.atU(IJ)I` and `er.aum(IJ)I` — the per-class VM engine / indy-literal decryptor entry (the constructor's `aua<"l">(6861, 2378227852126877481L ^ SdMAu…)` call sites fold to id 113 and the "Boost Value" char codes, i.e. this path is the constant-decryption engine). Whether it also dispatches module behavior is not statically decidable. `[18cf77a60]` |
| `atZ (Lookup, MutableCallSite, String, Object[])I` | `18cf83b90` | — | Indy fallback/re-target switch for the `MutableCallSite`-based constant decryptor; no blob. `[18cf83b90]` |
| `aua (Lookup, String, MethodType)CallSite` | `18cf84ba0` | `0x857,0x26` | **CallSite bootstrap** for the indy constants: blob tokens `…odHandle;` (MethodHandle tail), `iUrOn`, `Ljava/util/Map;`, `java/l…` — identical blob range used by `er.aul`/`er.auo`. `[18cf84ba0]` |

The 53 continuation blocks are all VM interpreter fragments ending in `halt_baddata`; no float
arithmetic survives statically anywhere in this class.

## Settings → behavior mapping

Exactly one setting, fully decrypted **in the constructor bytecode itself** (not the pool):

- Name literal (verbatim int array): `{66,111,111,115,116,32,86,97,108,117,101}` → **"Boost Value"**
  (`mr.clS(var10004)`).
- Builder chain (verbatim): `this.QHFqR = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(1.5).Vx(3.0).VA(1.5);`
  → step **0.01**, min **1.5**, max **3.0**, default **1.5**; no suffix (no `.Vz`).

Behavioral constraint implied by the registry + slider: the module scales/targets the player's
speed after a firework use to at least `Boost Value` (range 1.5–3.0, default 1.5 — the default
equals the minimum, so the slider only ever increases from a sane baseline). The prior port note
(`batch6.md:27`) reconstructs it as: "While gliding, a firework use (use key + rocket in hand)
opens a 40-tick window keeping horizontal speed ≥ Boost Value" — this is **reconstruction**, not
native evidence; the 40-tick constant exists in no decrypted literal.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **The trigger event.** No `@hG` listener exists in Java. Whether the boost is armed by a
   packet event (`gL$tk` S2C / `gL$tj` C2S), the interaction family (`gO$tm` use event), or a
   tick event (`gH$th`) is decided inside the VM. The port note says the native trigger is
   "packet detection" — unverifiable here.
2. **The boost math.** Zero float arithmetic survives. Whether `Boost Value` is a velocity
   multiplier applied via `setVelocity(Vec3d)` (`method_18799` is in the family surface), or a
   minimum-horizontal-speed clamp, is unrecoverable.
3. **Duration/window constants.** The 40-tick window (batch6.md) and any cooldown are VM-internal.
4. **`(IFF)V` descriptor owner** (`0xd42b`) — matches no member of the decompiled corpus; a
   VM-only call target.
5. **Family attribution.** Whether `setVelocity`/`gw` input-event/`getSlipperiness`/`hurtTime`
   tokens serve ep's program or belong solely to `er` (Speed)'s branches of the merged table.
6. **`gf.aZL`'s `false` flag** (module id 113, same flag across all sibling modules) — unrecovered.
7. **`atY`'s dual role** — constant decryptor only vs also module-behavior dispatcher.
8. **20 unresolved VM table RVAs** (`0x20f1970`–`0x20f1a08`) missing from `tables.json`.