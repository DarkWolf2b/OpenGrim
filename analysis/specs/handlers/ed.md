# ed — Custom Camera Distance (module id 74)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/ed.md`; registry row
  `sixtwo.ed|Custom Camera Distance|Changes camera distance from player|key=74|bind=-999`
  (primary key 74, active bind −999 = unbound), category `gh.qBzlZ` (Misc).
- Java shell: `analysis/decompiled/payload-decrypted/sixtwo/ed.java` (66 lines,
  Vineflower, DES literals folded) — one slider + one checkbox + enable override + two
  getters.
- Native: `analysis/ghidra/handlers-full/sixtwo_ed.c` — 6 handler stubs; `arB`/`arC` are
  blob-less field-return getters, only `aaj` has a decrypt call. Fully native-backed but
  behavior-poor: the module's mechanism is almost entirely VM/shell-resident.
- Pool window: POOL base RVA `0x301ee40`, image
  `analysis/ghidra/dumps/jna-decrypted-v2.dll`. Yarn map:
  `analysis/jars/yarn-1.21.11+build.6.tiny`. Neighbor straddle evidence from `ec.md`
  (Ghost Hand window analysis).

Handler → pool-blob usage map:

| Blob (off,len) | Handlers | Addresses |
|---|---|---|
| `0xc377,0x218` | `aaj()` (2 decrypt sites) | aaj `[0x18d55d7f0]` |
| none | `arB()` `arC()` (pure field returns) | arB `[0x18d682ed0]`, arC `[0x18d6830d0]` |
| `0x226,0xd` | `_a79940e05944d2ef07f1382edf83c8fc` (class-init) | `[0x18d6bde10]` |
| `0x857,0x26` | `arH` (indy bootstrap) | `[0x18d6bb100]` |

Verbatim token run of `0xc377,0x218` (heads truncated by the preceding section):
`…thod_1024 SRuur Ljava/util/Set; sixtwo/ed PQbtp sixtwo/iY method_5836 bxZ arD
method_1021 (D)Lnet/minecraft/class_243; net/minecraft/class_2350 field_11036
Lnet/minecraft/class_2350; (Lnet/minecraft/class_243;Lnet/minecraft/class_2350;
Lnet/minecraft/class_2338;Z)V method_2896 (Lnet/minecraft/class_746;Lnet/minecraft/class_1268;
Lnet/minecraft/class_3965;)Lnet/minecraft/class_1269; BpiUS HfVsU RqWGM fokqH TVqrW arF
sixtwo/ef DBoNw IrgCI cprxo XgLBB aso arE method_31549 ()Lnet/minecraft/class_1656;
net/minecraft/class_1656 field_7477…`

Yarn: `method_1024` = `Vec3d.rotateY(double)`, `method_1021` = `Vec3d.multiply(double)`,
`method_5836` = `Entity.getCameraPosVec`, `field_11036` = `Direction.UP`, the
`(Vec3d, Direction, BlockPos, boolean)` descriptor = `BlockHitResult` constructor,
`method_2896` = `ClientPlayerInteractionManager.interactBlock(PlayerEntity, Hand,
BlockHitResult) → ActionResult`, `method_31549` = `PlayerEntity.getAbilities()`,
`field_7477` = `PlayerAbilities.creativeMode`. **Per `ec.md`, this entire interaction
cluster (BlockHitResult ctor, `interactBlock`, `Direction.UP`, `getCameraPosVec`,
`getAbilities`/`creativeMode`, `sixtwo/ef`) belongs to the neighbor class ec (Ghost
Hand) whose window straddles ed's section** — it is NOT ed's behavior.

## Runtime model

- `gf.aZL(74, false, gh.qBzlZ)` [ed.java:21] — registered disabled at boot, Misc.
- Registry behavior: **"Changes camera distance from player"** — overrides the vanilla
  third-person camera distance (vanilla is a fixed 4.0) with a slider value, optionally
  without collision clipping.
- The module exposes **no event listeners**. Its only override is the on-enable hook
  `aaj()`; there is no tick/render/packet handler in the Java shell or the handler table.
  The application of the camera distance is therefore either performed inside the
  framework shell at consumption points or read from ed's getters by another component —
  no MC camera API token (`GameRenderer`, `Camera`, `GameOptions`) appears anywhere in
  ed's own window.
- Listener inventory (0 `@hG`):
  - `aaj()` — on-enable override [ed.java:49; sixtwo_ed.c:18]
  - `arC()` — getter returning `cJ` (No Clip checkbox) [ed.java:51; sixtwo_ed.c:48]
  - `arB()` — getter returning `cC` (Distance slider) [ed.java:53; sixtwo_ed.c:35]

## Per-handler semantics

1. `public ed()` [ed.java:19-41] — constructor: registers module id 74 (disabled, Misc);
   builds `BpiUS` = **"Distance"** slider (chars `68 105 115 116 97 110 99 101`) with
   `.Vy(1.0).Vw(4.0).Vx(100.0).VA(4.0).Vz(XgLBB)` [ed.java:38]; builds `HfVsU` = **"No
   Clip"** checkbox (chars `78 111 32 67 108 105 112`) `.WE(false)` [ed.java:40].
2. `native aaj()` on-enable [sixtwo_ed.c:18] — ed-exclusive tokens in its blob are only:
   `PQbtp` (class seed), `sixtwo/iY` + `method_5836`-adjacent `bxZ` (the shared
   DES/classload helper `iY.bxZ`), statics `arD`/`arF`, the settings fields `BpiUS`/
   `HfVsU`, the suffix static `XgLBB`, and obfuscation names (`SRuur`, `RqWGM`, `fokqH`,
   `TVqrW`, `cprxo`, `aso`). No MC camera/render API is referenced. Behavior: (inferred)
   the enable hook primes the framework so the camera-consumption path begins reading
   `arB()`/`arC()`; the actual distance application is VM/shell-resident and not
   statically recoverable.
3. `arC()` [sixtwo_ed.c:48] and `arB()` [sixtwo_ed.c:35] — blob-less stubs returning
   `this.HfVsU` / `this.BpiUS` respectively: the cQ-style shell-read contract through
   which the camera-distance consumer (framework shell or mixin outside this pool window)
   obtains Distance and No Clip. (inferred consumption pattern; the getters themselves are
   directly evidenced by the blob-less handler bodies and the Java declarations)
4. Static: class-init `[0x18d6bde10]`, indy `[0x18d6bb100]`, literal helpers
   `arF(IJ)I`/`arE(byte[])`, `arD(MatchException)` wrapper.

## Settings

- `cC BpiUS` = **"Distance"** (chars `68 105 115 116 97 110 99 101`): `.Vy(1.0).Vw(4.0)
  .Vx(100.0).VA(4.0)` ⇒ step **1.0**, min **4.0**, max **100.0**, default **4.0** — the
  default equals the vanilla third-person camera distance [ed.java:38]. Unit suffix
  `.Vz(XgLBB)`: DES-encrypted static, **undecrypted**.
- `cJ HfVsU` = **"No Clip"** (chars `78 111 32 67 108 105 112`): `.WE(false)` — off by
  default [ed.java:40].
- No keybind, no groups, no radio options. Two widgets total.

## Blockers / unknowns

- The camera-distance application path is unrecovered: ed's window contains no
  GameRenderer/Camera/GameOptions tokens, and the class registers no tick or render
  listener. The consumer of `arB()`/`arC()` lives outside the recoverable pool region
  (framework shell, mixin, or a native camera component). (inferred shell-read design)
- "No Clip" semantics: presumably removes the camera's collision raycast so it can pass
  through walls at large distances — but the mechanism is not token-visible. (inferred)
- Whether the module supports first-person (perspective-0) handling or only modifies the
  third-person distance is unrecovered.
- All MC-flavored tokens in the `0xc377` window (`Vec3d.rotateY`, `interactBlock`,
  `BlockHitResult` ctor, `Direction.UP`, `getCameraPosVec`, `getAbilities().creativeMode`,
  `sixtwo/ef`) are attributed to neighbor ec (Ghost Hand) per `ec.md` and must not be
  read into ed's behavior.
- `.Vz(XgLBB)` suffix: DES-encrypted, **undecrypted** — stated explicitly.