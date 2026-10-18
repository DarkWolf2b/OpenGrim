# Kill Aura (sixtwo.fr) — handler-derived behavior spec

Class: `sixtwo/fr` · display name **Kill Aura** · registry description
"Automatically attacks entities" · primary key 5, active bind 82 [registry].
Superclass: `gg` (module base, `extends iS`). Constructed via
`super(gf.aZL(5, false, gh.xwjCw))` — `gh.xwjCw` is one of the 5 encrypted category
constants (`gh`); category display name unrecovered.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fr.c` — all **89 native handlers** +
   **886 continuation blocks**, 0 unresolved table targets (corpus header, read before
   the stitched corpus was removed from the tree mid-run; all quantitative facts below
   were captured from it).
2. Structural: `analysis/specs/modules/fr.md`, Java shell
   `analysis/decompiled/payload-named/sixtwo/fr.java` (CFR; 2 methods decompiled in
   full — constructor and `aNB()`; everything else `native`).
3. Runtime constraint (governs all recoverability): like the rest of the payload, every
   `fr` behavior body is compiled into the embedded bytecode VM (`$mango$…` blob +
   `Loader.doInit`). Each handler is a stub: `BLOB_DECRYPTOR(env, pool_base + off, len)`
   materializes a constant-pool window → `JNI->ExceptionCheck` → indirect jump into the
   interpreter loop (`FUN_190ddce00`, `FUN_190ddfc90`, `FUN_190dd72e0`, `FUN_190dd9df0`,
   `FUN_190de3220` — payload runtime, not analyzed). The 886 continuation blocks are
   generic VM opcode micro-trampolines (one JNI op each, then `(*_DAT_…)()` dispatch),
   shared across all payload classes.
4. **Pool windows** (16 `BLOB_DECRYPTOR` prologues, all offsets into the global pool at
   image `+0x301ee50`, plaintext verified in `analysis/ghidra/dumps/jna-decrypted-v2.dll`):
   - `_2dea2065…` `<clinit>` helper [18bdbc090]: `POOL[0x226,0xd]` (`java/lang/String`
     fragment — infra).
   - `YO ()V` [18bd2fdd0]: `POOL[0x3806,0xbf]`.
   - `aOY`/`aPb` indy bootstraps [18bdaa3e0, 18bdb9380]: `POOL[0x857,0x26]`.
   - **Shared behavior core** — `aNA, aNr, aNs, aNt, aNu, aNv, aNw, aNx, aNy, aOW, aOZ`
     all decrypt the *same* window `POOL[0x8f09,0x194]` (404 bytes).
   - `aNz ()Lsixtwo/ou;` [18bdda020]: `POOL[0xa4f2,0x1d0]`.
   The pool is one global token stream shared by neighboring classes' VM programs
   (e.g. dA "Elytra Target", dK "Auto Lever Replace", dB "Full Bright" entries interleave
   around fr's), so window boundaries do not segment cleanly — token attribution below is
   done only where a token is provably fr's own member or is part of a cluster that
   behaviorally matches fr, and is flagged otherwise.
5. **Decrypted constants**: 1157 `aPb("i",…)` int constants (reconstructed to the full
   settings-string table; the two numeric suffix strings and 2 more come from 4
   `aOY("f",…)` calls: `" blocks"`, `" ms"`, `" blocks"`, `" deg"` — see
   `analysis/decrypted/full-dump.jsonl`, class `sixtwo.fr`).
6. Yarn mapping: `analysis/jars/yarn-1.21.11+build.6.tiny` — pool method refs resolved:
   `method_24828`=`Entity.isOnGround()Z`, `method_6128`=`LivingEntity.isGliding()Z`,
   `method_6043`=`LivingEntity.jump()V`, `field_1690`=`MinecraftClient.options`
   (`class_315` GameOptions), `method_26215`=`AbstractBlockState.isAir()Z`,
   `method_49638`=`BlockPos.ofFloored(Position)`, `method_2902`=
   `ClientPlayerInteractionManager.updateBlockBreakingProgress(BlockPos,Direction)Z`.
7. JNI-op census across fr's handlers + continuation blocks (VM opcode implementations,
   not module logic): `ExceptionCheck` ×336, `ThrowNew` ×68, `GetObjectField` ×53,
   `IsInstanceOf` ×15, `ExceptionOccurred` ×15, `GetArrayLength` ×7, `Throw` ×5,
   `ExceptionClear` ×4, `CallVoidMethodA` ×4, `SetObjectArrayElement` ×3,
   `AllocObject` ×3, `SetByteArrayRegion` ×2, `CallBooleanMethodA` ×2,
   `GetPrimitiveArrayCritical`/`ReleasePrimitiveArrayCritical` ×2, and ×1 each
   `SetObjectField`, `GetObjectArrayElement`, `NewByteArray`, `CallObjectMethodA`,
   `CallStaticObjectMethodV`, `CallStaticObjectMethodA`, `CallNonvirtualVoidMethodA`.
   The single `CallNonvirtualVoidMethodA` is consistent with the `super.YO()` call
   expected in `YO` (unproven). No `rdtsc` in this class's handlers.

## Runtime model

- **Events** (registered via `@hG` through the `hF` annotation bus; `gg.YO()` = Java
  `hF.bdM(this)`, re-run on every enable toggle — `gg.baa()` sets `RliRe` then calls
  `aaj()` + `YO()`, `gg.java:206-249, 519-521`):
  - `aNr(gv)` [18bd302e0] — client-tick event (`gv extends hH`), the main attack loop.
  - `aNs(gH$th)` [18bd40480] — render event, priority `mw.HIGH` (fr.java:1202).
  - `aNt(go$sX)` [18bd4c230] — world-render-stage event (`go` carries `MatrixStack`
    + partial-tick float).
  - `YO()` [18bd2fdd0] — native override of the listener-(re)registration hook.
- **Java vs native**: everything behavioral is native except the constructor (settings
  wiring), `aNB()` (pause gate, fully decompiled) and `aOQ()` (`return this.cslIX;`).
- **Cached receiver state**: `this.cslIX` (LivingEntity) — the selected target, cached
  across ticks; exposed by `aOQ()` and consumed from *other* modules' Java code
  (`dw.java:401` Circle ESP, `dz.java:1344` Target ESP, `bZ.java:326`). The inherited
  `gg.RliRe` boolean is the enabled flag (`gg.bag()`); statics `OTHes` (long VM seed),
  `PYAVO/OxsWw` (String[]), `PieGJ/XdhDb` (Map), `jxlIg` (long[]), `nUNYg` (Integer[])
  are decryptor caches, not behavior state.
- **Target selection stack**: fr owns `FEiPq = new og()` (per-module target manager,
  fr.java:964) and `RsWQP = new pe()` (attack-point engine, fr.java:965) seeded with two
  point providers `RsWQP.cMY(new pc(0.15))` and `RsWQP.cMY(new pd(0.15, 0.15, 0.15,
  0.05))` (fr.java:966-967). `og` contract (og.java, decompiled): `cCR(range, of)` keeps
  the current target while `jg.bBI(target) <= range` (distance from `player.getEyePos()`
  to the entity's **bounding box**, jg.java:278-281), else clears it, then refills the
  candidate stream via `oh.cCY().cCZ(range).cDg(of).cDk()` — `ClientWorld.getEntities()`,
  minus self, minus `isDead()`, range `[0, range]`, sorted by the `of` comparator
  (`of.OGxYa/ahXwo/FraBu`; fr offers Distance | Health). `og.cCQ(Predicate)` also gives
  the Target Lock module (`fg`) a forced target when its predicate passes.
- **Attack submission path** (from `aNz`'s pool window, see per-handler section):
  `rD.dlX()` → global `qL` rotation/attack manager → `qL.dbI(Vec3d, ou, mw, gg)`
  submits an attack at a hit `Vec3d` with a rotation request `ou` at a priority, charged
  to the calling module. `ou` wraps an `os` rotation provider (`oo`/`op` subclasses);
  `qL` owns the crit/placement context (`ot` list, `ov` current rotation,
  `dbR/dbS/dbQ` smoothing helpers).
- **Pause gate** (Java, exact): `aNB()` (fr.java:1001-1120) returns true (aura
  suspended) while: `dI` (Nuker) `amm() != null` (mining state active), or `eK` (Auto
  Web) `aAa()` (enabled), or `eJ` (Auto Trap) `aAa()`, or `fl` (Auto Potion) `bag()`
  (enabled) **or** `aJQ()` (potion queued/using), or `rD.dlZ().dbt()` (native boolean on
  `qJ`, the slot/rotation arbitration manager).
- **Exclusivity arbitration** (pool evidence, shared core window): `dma ()Lsixtwo/qN;` +
  `sixtwo/qN | dcz ()Lsixtwo/rB;` — `rD.dma()` is the module-action claim registry
  (`qN.dcw(gg)` register / `dcv(gg)` unregister / `dcy()` check, cf. oR.java:1079-1244);
  `qN.dcz()` returns the 4-constant state enum `rB` (`ahPNi, HbZxW, TfMBm, iSmge`).

## Per-handler semantics

### Behavior handlers

- **`aNr (Lsixtwo/gv;)V` — tick entry [18bd302e0]**. Decrypts the shared core window
  `POOL[0x8f09,0x194]`; reachable region contains only VM-loop tails (`FUN_190ddce00`,
  `(*_DAT_*)()`). Recoverable contract: per client tick, while enabled, evaluate the
  `aNB()` pause gate, work with the cached target through `fr.aOQ()`
  (`sixtwo/fr | aOQ | ()Lnet/minecraft/class_1309;` — the only fr member token in the
  window), and dispatch target selection/attack. Everything between gate and attack is
  VM bytecode — unrecovered.

- **`aNu ()Lnet/minecraft/class_1309;` — target selector [18bd54430]**. Same shared
  window. Returns the selected `LivingEntity` (cached into `cslIX`; `aOQ` is the getter
  other modules read). Selection semantics constrained by the `og`/`oh` framework it
  owns and its settings (see Settings table): range `[Search Distance]` (default 6.0,
  max 50.0), priority comparator Distance|Health, mode Switch|Locked — `Locked` keeps
  the current target while it stays within range (`og.cCT` uses the eye→bbox distance,
  og.java:94-136), `Switch` re-evaluates. Exact filter wiring (walls/friends/naked/
  damage-tick/shielding booleans → `oh.cDe/cDc/cDf/cDd` flags) lives in VM bytecode —
  unrecovered.

- **`aNv (Lnet/minecraft/class_1309;)V` — attack executor (target only)
  [18bd5d9a0]**. Same shared window. No fr-specific pool entries beyond `aOQ`; the body
  (~6.5k VM ops per the older handlers corpus) is unrecovered. Contract: perform the
  attack against the given entity.

- **`aNw (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V` — attack with rotation +
  crit context [18bd64d60]**. Same shared window. The window's MC-method cluster
  `method_24828` (`Entity.isOnGround`), `method_6128` (`LivingEntity.isGliding`),
  `method_6043` (`LivingEntity.jump`) around `net/minecraft/class_1309` is the only
  MC surface evidence in fr's windows. This cluster sits between fr's and dA's token
  groups — it is attributable to fr or to dA (Elytra Target needs `isGliding`; the
  isOnGround+isGliding+jump triple is exactly a crit-eligibility check
  (`isGliding`/airborne state) plus a forced `jump()` for crit placement, matching
  `Critical Mode` = None | Prioritize Crits | Only Crits). Attribution is stated as
  likely-fr, not proven. `ov` = (yaw, pitch) rotation pair; `qL` = the attack/crit
  coordinator. Exact math unrecovered.

- **`aNz ()Lsixtwo/ou;` — attack submission via rotation manager [18bdda020]**. Own
  window `POOL[0xa4f2,0x1d0]`; fr-attributable tokens, in pool order:
  `dlX ()Lsixtwo/qL;` (= `rD.dlX()`, the global `qL` singleton), `sixtwo/ou`,
  `sixtwo/oo`, `(Lsixtwo/os;ZZZIZ)V` (= `ou`'s 6-arg ctor `(os, boolean, boolean,
  boolean, int, boolean)`, ou.java:29-31 — fr builds a **custom** rotation request, not
  the `ou.kxNyl` default), `ane`, `sixtwo/mw`, `uWTdl`, `Lsixtwo/mw;`, `sixtwo/qL`,
  `dbI`, `(Lnet/minecraft/class_243;Lsixtwo/ou;Lsixtwo/mw;Lsixtwo/gg;)V`.
  Reconstructed call: `rD.dlX().dbI(point, new ou(provider, b, b, b, i, b), mw.uWTdl,
  this)` — submit the attack at a hit point `Vec3d` through the shared rotation/crit
  manager with priority constant `uWTdl` (4th of 6 `mw` constants, `mw.java:10-16`;
  if the enum runs LOWEST→CRITICAL, `uWTdl` = HIGH — inferred from ordinal order, not
  encrypted names). Returns the `ou`. Tokens fully or partially inside the window but
  NOT attributable to fr (they belong to the sequentially adjacent dK "Auto Lever
  Replace" / eJ "Auto Trap" / eK "Auto Web" / oj programs): `mB.cnc ()Vec3d`,
  `jg.bBG (Vec3d;F)Z` (eye-distance check `dist(player.getEyePos(), point) <= f`,
  jg.java:573-594 — likely reach validation for *someone* in this pool neighborhood,
  owner unproven), `gV.bcl/bck` (BlockPos+BlockState record), `eJ.cnb`, `sixtwo/eK`,
  `method_26215` (`isAir`), `aAa`, `aAM ()Lsixtwo/oj;`, `oj.cEy/cEE/anf`,
  `method_49638` (`BlockPos.ofFloored`), `mB.cnd ()Direction`, `method_2902`
  (`updateBlockBreakingProgress`).

- **`aNx ()F` [18bd6cf80] / `aNy ()F` [18bd738d0]** — private native float accessors,
  no pool window of their own. Unrecovered (rotation-state candidates — e.g. smoothed
  server-side yaw/pitch used by "Visualise Rotation" — but nothing in this corpus
  disambiguates them).

- **`aNs (Lsixtwo/gH$th;)V` — render event, `mw.HIGH` [18bd40480]**. Same shared window;
  no render-specific pool evidence recovered. Settings it plausibly consumes (draw the
  cached target `cslIX` in the configured capture style): `AaZvh` Target Render (default
  false), `UuMRr` Render Mode (default index 1) with children Capture Mark / Capture
  Rounded / Capture Triangle / Dashed Triangle, `hBHZf` Target Render Color (visible iff
  Target Render). The drawing itself is VM bytecode — unrecovered; treat the
  capture-style list as the option surface, not as recovered behavior.

- **`aNt (Lsixtwo/go$sX;)V` — world-render-stage event [18bd4c230]**. Same shared
  window. Candidate consumers from the settings surface: `KNaqi` Visualise Rotation
  (default true), `pboNi` Change View (default false), `RsWQP` point-engine preview.
  Which setting maps to which render path is unrecovered.

- **`aNA ()Lsixtwo/os;` — rotation-provider getter [18bd3a040]**. Returns an `os`
  provider (`oo`/`op` are the two subclasses; `oo` has static toggles `cFW/cFX/cFV`).
  fr declares no `os` field, so the instance is created/cache natively — which instance
  and how `cFU()`/`cFT()` are fed is unrecovered.

- **`aOR ()Boolean` [18bd72be0] / `aOS ()Boolean` [18bd73030] / `aOT ()Boolean`
  [18bd73480]** — setting-visibility suppliers wired in the constructor (fr.java:969-971):
  `drPlk` (Cooldown) visibility ← `this::aOS`; `TwxgO` (Timer) ← `this::aOR`;
  `lEEKm` (Slots) ← `this::aOT`. The comparisons themselves (presumably
  Hit Delay Mode == Item Cooldown / == Timer, Items To Use == Custom Slots) are VM
  bytecode — unrecovered.

- **`YO ()V` — toggle/re-registration hook [18bd2fdd0]**. Overrides `gg.YO()` (= Java
  `hF.bdM(this)` listener registration, gg.java:519-521). Window `POOL[0x3806,0xbf]`
  lies inside the HUD-widget (`sixtwo/J`) pool neighborhood: fr-attributable refs are
  `Lsixtwo/gg; | baf ()Lsixtwo/gc;` (module → settings container), `sixtwo/gc |
  aZg ()Lsixtwo/gd;` and `aZi (Lsixtwo/gd;)Lsixtwo/gc;` (read/write the container's
  `gd` 2-constant state, `gd.ipLAD`/`zlSAY`), `cnP (FFF)Lsixtwo/mG;` (RGBA color
  factory, mG.java:50-57 — clamps each component to 0–255, alpha defaults 255).
  Remaining tokens (`ipLAD, GLrDe, wLrDR, DJXfP, ynopW, ePBBz, nbZRc, ijbRx, bad,
  FalZQ, dhh, NLFhJ`) are members/aliases of `J.java` (the 130×75 HUD array widget
  holding `gg` + `rk` keybinds, J.java:10-24) — interleaved neighbors, not attributable
  to fr. The single corpus-wide `CallNonvirtualVoidMethodA` is consistent with
  (but does not prove) a `super.YO()` call.

### Trivial accessors (grouped)

26 + 22 zero-arg getters returning setting wrappers, all pure stub → jumptable
(no pool window): `aNC,aND,aNE,aNF,aNG,aNH,aNI,aNJ,aNK,aNL,aNM,aNN,aNO,aNP,aNQ,aNR,
aNS,aNT,aNU,aNV,aNW,aNZ,aOA,aOB,aOC,aOD,aOE,aOF,aOG,aOH,aOI,aOJ,aOK,aOL,aOM,aON,aOa,
aOb,aOc,aOd,aOe,aOf,aOg,aOh,aOi,aOj,aOk,aOl,aOm,aOn,aOo,aOp,aOq,aOr,aOs,aOt,aOu,aOv,
aOw,aOx,aOy,aOz` plus typed non-setting getters `aNA ()os`, `aOO ()pe`, `aOP ()og`,
`aOQ ()LivingEntity` (Java). Type counts match the field census exactly —
12×`ct`, 27×`cu`, 8×`cw`, 7×`cJ`, 3×`cC`, 2×`cA`, 2×`cv`, and one each `cz`, `cF`,
`cG` — but the pool carries no per-getter attribution, so getter→field identity inside
each type group is unrecovered (unique types are unambiguous: `aOj`→`Targets`,
`aOn`→`Slots`, `aOp`→`Target Render Color`, `aOO`→point engine, `aOP`→target manager).

### Infrastructure (no module behavior)

- `_2dea2065…()V` [18bdbc090] — VM clinit stub, `POOL[0x226,0xd]`.
- `aOU (MatchException)MatchException` [18bd78e60] — identity rethrow helper (switch
  desugaring). `aOV ([B)String` [18bd78ef0] — byte-array string decoder stub.
- `aOW (IJ)String` [18bda26a0] / `aOZ (IJ)I` [18bdacea0] — pool string/int decryptors;
  ~480/~549 lines of opaque-constant arithmetic (MBA mixing via `func_0x…`, popcount
  SWAR, `0x7fff` constants) — anti-analysis noise.
- `aOX`/`aOY`/`aPa`/`aPb` [18bda94f0, 18bdaa3e0, 18bdb8370, 18bdb9380] —
  invokedynamic bootstraps; `aPb`'s handler region is ~14.8k lines (the class's int
  constant table — source of all 1157 decrypted ints).

## Settings → behavior mapping

All 60 settings, verbatim builder chains from the decompiled constructor
(characters decrypted via `aPb`; suffixes via `aOY`):

| field | setting | type / chain (verbatim) | behavior role (handler evidence) |
|---|---|---|---|
| `uuiVA` | Search Distance | `cC`: `.Vy(0.1).Vw(2.5).Vx(50.0).VA(6.0).Vz(" blocks")` — step 0.1, min 2.5, max 50.0, default 6.0 | targeting radius fed to the `og`/`oh` query (`cCZ(range)` → `[0, range]` filter); also the Locked-mode retention radius (`og.cCT`). |
| `XPsdZ` | Aim Mode | `ct` group, children: | aim pipeline mode selector; per-mode behavior unrecovered |
| `gFhjZ` | — Normal | `cu` (child of Aim Mode) | |
| `qAqUI` | — Silent | `cu` (child of Aim Mode, chars `83,101,…` = "Silent") | |
| `loPKM` | Aim Smoothing Mode | `ct` group | smoothing mode selector; math unrecovered |
| `vnYZx` | — Unrestricted | `cu` child | |
| `xCupG` | — Adaptive | `cu` child | |
| `zZDPB` | Sprint Mode | `ct` group | |
| `QnRHK` | — Never | `cu` child (first char `78` = 'N') | |
| `hJKeY` | — Default | `cu` child | |
| `esnRH` | Move Correction | `cJ` `.WE(true)` (default on) | correction toggle; visibility-gates `kOSut` (`kOSut.Vf(esnRH::WF)`, fr.java:968) |
| `kOSut` | Correction Type | `ct` `.SO(1)` (default index 1) | |
| `lDjkh` | — Silent | `cu` child | |
| `vlCiC` | — Focused | `cu` child | |
| `kmSAT` | Critical Mode | `ct` `.SO(1)` (default index 1) | crit gating; the isOnGround/isGliding/jump cluster [shared window] is the matching MC surface (attribution likely-fr) |
| `ZacKI` | — None | `cu` child (first char `78` = 'N') | |
| `EsIxA` | — Prioritize Crits | `cu` child (default selection) | |
| `znCAf` | — Only Crits | `cu` child | |
| `rJhwq` | Hit Delay Mode | `ct` group | selects the attack-gating clock |
| `TSzIa` | — Item Cooldown | `cu` child | gates on attack-cooldown progress vs `drPlk` |
| `nuObX` | — Timer | `cu` child (first char `84` = 'T') | gates on fixed ms delay `TwxgO` |
| `drPlk` | Cooldown | `cA`: `.UG(0.01).UE(0.0).UF(1.0).UI(0.9, 0.9)` — step 0.01, min 0.0, max 1.0, default 0.9 | attack-cooldown-progress threshold; visible iff mode == Item Cooldown (supplier `aOS`) |
| `TwxgO` | Timer | `cA`: `.UG(1.0).UE(0.0).UF(1000.0).UI(600.0, 600.0).UH(" ms")` — step 1, min 0, max 1000, default 600 ms | fixed inter-attack delay; visible iff mode == Timer (supplier `aOR`) |
| `bjunC` | Attack Options | `cv` group | |
| `xYDCY` | — Break Shield | `cw` child | |
| `ufARj` | — Un Press Shield | `cw` child | |
| `bWNtd` | — Simulate Clicks | `cw` child | |
| `JmYqQ` | Target Options | `cv` group | the five filters below are exactly the `oh` predicate family (`cDe/cDc/cDf/cDd` + custom predicate `cDh`) |
| `aZsiY` | — Ignore Walls | `cw` child | line-of-sight filter |
| `CswPu` | — Ignore Friends | `cw` child | friends filter (shared FriendsManager) |
| `xIZYV` | — Ignore Naked | `cw` child | armor check |
| `waYha` | — Ignore In Damage Tick | `cw` child | `hurtTime`-based filter |
| `kGRXw` | — Ignore When Shielding | `cw` child | `isBlocking` filter |
| `wDjqt` | Targets | `cF` `.VS(jg$tJ.OCdZM)` | entity-type multiselect |
| `nMsgI` | Items To Use | `ct` group | weapon restriction |
| `JAwIX` | — Weapon Only | `cu` child | |
| `JWNzq` | — Custom Slots | `cu` child | visibility-gates `lEEKm` (supplier `aOT`) |
| `lEEKm` | Slots | `cz` (slot-range setting) | custom hotbar slots |
| `AaZvh` | Target Render | `cJ` `.WE(false)` (default off) | master switch for the render handlers; visibility-gates `hBHZf` and `UuMRr` (fr.java:970-971) |
| `hBHZf` | Target Render Color | `cG` (color picker) | color for `aNs` capture styles |
| `UuMRr` | Render Mode | `ct` `.SO(1)` (default index 1) | capture-style selector for `aNs` |
| `NRHKu` | — Capture Mark | `cu` child | |
| `HTLEq` | — Capture Rounded | `cu` child | |
| `GAmVW` | — Capture Triangle | `cu` child | |
| `CiqUj` | — Dashed Triangle | `cu` child | |
| `tBpfA` | Attack Distance | `cC`: `.Vy(0.01).Vw(2.5).Vx(5.0).VA(3.0).Vz(" blocks")` — step 0.01, min 2.5, max 5.0, default 3.0 | hit gate: maximum eye→point distance for the submitted attack (`jg.bBG(point, f)`-style check is the matching helper in this pool neighborhood — owner unproven) |
| `RAhFv` | Target Priority | `ct` group | comparator selector for `oh.cDg(of)` |
| `bqKDj` | — Distance | `cu` child (default per `of` default `OGxYa`) | |
| `AotRw` | — Health | `cu` child | |
| `WEzOU` | Attack Point | `ct` group | selects among `RsWQP` (`pe`) providers |
| `zgYYt` | — Best Vector | `cu` child | |
| `FWguf` | — Nearest Vector | `cu` child (`.SY()` default marker) | |
| `Zywer` | Cancel In Screens | `cJ` `.WE(false)` | suppress while a Screen is open (`class_437` current-screen check exists in the pool neighborhood — owner unproven) |
| `vdmvy` | Cancel On Use | `cJ` `.WE(false)` | suppress while use key held; visibility-gates `dlzgV` |
| `dlzgV` | Cancel Use Mode | `ct` group | |
| `MYpIA` | — All Items | `cu` child | |
| `jtUDD` | — Allow Shielding | `cu` child | |
| `pboNi` | Change View | `cJ` `.WE(false)` | render-path toggle (candidate consumer of `aNt`) |
| `vUmBx` | Target Mode | `ct` `.SO(1)` (default index 1 = **Locked**) | Switch vs Locked retention (`og.cCR`/`cCT`) |
| `tKSmQ` | — Switch | `cu` child | |
| `TRsxw` | — Locked | `cu` child (default selection) | |
| `KNaqi` | Visualise Rotation | `cJ` `.WE(true)` (default on) | render-path toggle (candidate consumer of `aNt`/`aNx`/`aNy`) |
| `ePFjw` | Limit FOV | `cJ` `.WE(false)` | FOV gate; visibility-gates `duWkt` |
| `duWkt` | FOV | `cC`: `.Vy(1.0).Vw(10.0).Vx(360.0).VA(180.0).Vz(" deg")` — step 1, min 10, max 360, default 180 | candidate-angle limit; `oh.cDb(cA)`/`cDa(f2,f3)` shows the query accepts a two-float angular window |

Point-engine seeding (not a setting but behavior-relevant, fr.java:966-967):
`RsWQP.cMY(new pc(0.15))` (fixed-offset provider, weight 0.15) and
`RsWQP.cMY(new pd(0.15, 0.15, 0.15, 0.05))` (randomized provider; `pd` carries static
constants `0.00942, 0.2332, -0.3008, 0.3492, 0.01328, 0.2445` + `SecureRandom` and a
lerp helper `cMK(d2,d3,d4) = d2 + (d3-d2)*d4`, pd.java:23-40, 177-186).

## Unrecovered / uncertain

1. **All attack/aim arithmetic.** No float/double operation from any behavior handler
   survives in the corpus — rotation smoothing (`Aim Smoothing Mode` Unrestricted /
   Adaptive), crit-window evaluation, hit-delay timing math and the `ov` rotation
   computation all live in the encrypted VM bytecode.
2. **Pool-token attribution in the shared window.** `POOL[0x8f09,0x194]` is shared by 11
   handlers and interleaves dA's (Elytra Target) token groups; only `sixtwo/fr | aOQ |
   ()Lnet/minecraft/class_1309;` is provably fr's. The isOnGround/isGliding/jump cluster
   is attributed to fr on behavioral grounds (crit logic) with the dA alternative stated;
   `dma ()Lsixtwo/qN;`/`dcz ()Lsixtwo/rB;` and the `(Ljava/lang/String;I
   Ljava/lang/String;Lsixtwo/mG;)V` constructor (owner not found in any decompiled
   class) are likewise unattributed.
3. **aNz hit-point source.** The `Vec3d` passed to `qL.dbI` is produced upstream of the
   window (`mB.cnc` sits just *before* the window start, likely dK's). How `aNz` derives
   the point (from `RsWQP`/`pe` or the target hitbox) is not recoverable.
4. **`aNv` vs `aNw` split.** Which path runs when (rotation-less vs rotation-aware
   attack), and what selects between them, is unrecovered.
5. **Getter→field identity.** The 48 zero-arg accessors map 1:1 by type but not by name;
   per-getter attribution within each wrapper-type group is unrecovered.
6. **`aNx`/`aNy` float semantics.** No evidence disambiguates yaw vs pitch vs another
   float state.
7. **`YO` color/`gd`-state initialization.** The window shows `gc.aZg/aZi` and the
   `mG.cnP(FFF)` color factory inside the `J.java` (HUD widget) pool neighborhood; what
   fr's YO initializes (its `gd` state? a color?) and whether it calls
   `super.YO()` (`hF.bdM`) natively is unproven.
8. **`of` comparator constants.** `of.OGxYa/ahXwo/FraBu` display names are encrypted;
   mapping Distance/Health onto specific constants is inference from the two-option
   setting, not evidence. Likewise `mw.uWTdl` = "HIGH" is ordinal inference.
9. **`qJ.dbt()` gate** (`rD.dlZ().dbt()` in `aNB`) — `qJ`'s semantics (slot/rotation
   arbitration) are inferred from its method surface (`dbp/dbm/dbn/dbo(int, boolean,
   mw, gg)`); what `dbt()` actually tests is unrecovered.
10. **Render handler bodies.** Neither `aNs` (gH$th) nor `aNt` (go$sX) has
    render-specific pool evidence; the gH$th-vs-gH$ti (2D vs 3D stage) distinction is
    not resolvable from this class's corpus.