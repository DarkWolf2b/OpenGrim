# Mace Aura (sixtwo.eP) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/eP` ("Mace Aura"), derived from native handler
decompiles + decrypted-token evidence. Companion to the structural spec `analysis/specs/modules/eP.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-full/sixtwo_eP.c` | PRIMARY: 31 native handler decompiles (one per declared method of `sixtwo/eP`) |
| `analysis/ghidra/continuations/sixtwo_eP_cont.c` | continuation blocks reachable from the handlers (almost entirely j2cc VM stubs ending in `halt_baddata`) |
| `analysis/decompiled/payload-named/sixtwo/eP.java` + `payload-decrypted/…/eP.java` | exact settings wiring (decrypted literals in `payload-decrypted`) |
| CFR sources of helpers: `og.java`, `og$vf.java`, `og$vf$wk.java`, `oh.java`, `of.java`, `jg.java`, `fo.java`, `pe.java`, `ph.java`, `oW.java`, `oW$vp.java`, `qP.java`, `qL.java`, `mT.java`, `eQ.java`, `eS.java`, `eT.java` | recovered semantics of the support classes the virtualized eP bodies call into |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | intermediary→Yarn method/field names |
| `analysis/decrypted/full-dump.jsonl` | no eP-relevant hits for enum display names |

Handler → pool-blob usage map (decrypt call `FUN_190dd72e0(env, POOL_RVA+off, len)`, POOL base `0x301ee40`):

| Blob (off,len) | Handlers |
|---|---|
| `0xf325,0x298` | `aBA aBB aBC aBD aBE aBF aBG aBI aBJ aBK aBL aBM aBN aBP aBQ aBT aBU aBX aCa` (shared interpreted-body pool for all virtualized eP logic) |
| `0x3806,0xbf` | `YO` |
| `0xa4f2,0x1d0` | `aBO` |
| `0xb1,5` | `aBH` |
| `0x857,0x26` | `aBZ`, `aCc` (indy bootstraps) |
| `0x226,0xd` | `_0a8c9c238fa83059f98b98698224cc7d` (class-init) |
| none (pure 2-way dispatch stubs) | `aBR aBS aBW aBY aCb` |
| fully recovered (no VM) | `aBV` |

The `0xf325` blob is decrypted by every virtualized eP handler and then a single JNIEnv call
(`(*param_1 + 0x720)` — the j2cc entry) is made; the decompiled tail is a 2-way indirect jump
`treatment table + (cond==0)*8` — the actual body is interpreted lazily by the VM and is not
statically recoverable from the handler stubs. Token evidence below comes from reading the
extended pool region `0xf325…0xfb25` (tokens 55–~176 are eP's; eM window starts `0xf315`,
eN `0xf34d`, eO `0xf3df`, eQ section from ~token 172).

No `rdtsc` reads appear in any eP handler or continuation (anti-trace noise is absent in this
class; timing logic that does exist is the `mT` millisecond timer, recovered in Java).

## Runtime model

### Identity

- `eP extends gg` (module base). Constructor: `super(gf.aZL(120, false, gh.xwjCw))` — registry key
  **120**, not keybound (**bind −999**), category `gh.xwjCw`. Decrypt seed for the class is
  `zBBpC ^ 30746758989336L`.
- All behavior lives in j2cc-virtualized method bodies; every substantive handler is
  `decrypt(0xf325) → VM`. What IS recoverable per handler: the signature, the pool blob, and
  (from token analysis) the exact support-API surface each body touches.

### State (fields, exact names)

| Field | Type | Role |
|---|---|---|
| `ZpjWv` | `LivingEntity` | current target |
| `NTGZO`, `rqlbi` | `boolean` | internal phase flags (roles unrecovered; read/written by the 0xf325 bodies only) |
| `SKXmj` | `static float` | static float (read/written by 0xf325 bodies; purpose unrecovered) |
| `tORnN` | `mT` | millisecond timer, `mT.cpz()` in ctor; `mT.cpC(long)` = `System.currentTimeMillis() - vJZlo - l2 > 0`, `cpB()` resets |
| `AoABv` | `og` | target scanner (`new og()` in ctor) |
| `NCCFN` | `pe` | attack-point solver (`new pe()` in ctor, wrapped in try/catch `MatchException` → `aBV`) |
| `LuzRg` | `static int[]` | set via `aBT(int[])`, read via `aBU()`; seeded from `aCc<"j">` key-constants in ctor |

### Target acquisition (recovered via `og`/`oh`/`og$vf` — fully Java-visible)

1. `og.cCR(float range, of cmp)` (`og.java` `[cCR]`): first `range = oV.cLc(range)` — the slider
   value passes through a **native transform** `oV.cLc(F)F` (formula unrecovered). If
   `cCT(range)` — i.e. current target non-null **and** `jg.bBI(target) <= range`, where
   `jg.bBJ(eyePos, box)` = Euclidean distance from the player's eye position to the **closest
   point of the target's bounding box** (`bBK` clamps the eye pos into the box, `bBH` =
   `distanceTo`) — the current selection is kept; otherwise `cCP()` clears it.
   In both cases the candidate stream is rebuilt:
   `CzIJX = oh.cCY().cCZ(range).cDg(cmp).cDk()`.
2. `oh` scan (`oh.java`): `cCY()` seeds from `rD.dlmvG.player`; `cDo()` = all
   `world.getEntities()`, excluding the seeding player, keeping `LivingEntity` only, dropping
   dead entities, dropping invisible entities unless flag `iepqN` (`cDc`) is set; `cDp` drops
   friends (`rD.dmc().ddy`) if flag `PuphK`, friends-list players (`fo.aLp`) if flag `uQZIO`,
   moving entities (`iX.bxD`: `getVelocity().lengthSquared() > 0.08`) if flag `EGfIe`, then
   applies a caller predicate; final filter keeps entities with
   `qXURN <= bBJ(eye, box) <= DbtdA` (min/max range set by `cCZ(float)`). `cDk()` sorts by
   `of.cCG()` comparator.
3. `og.cCQ(Predicate)` (`og.java`): if the Target Lock module (`fg`) is enabled (`bag()`) and has
   a locked entity (`aIU()`) that passes the predicate → select it directly; else
   `cCS(predicate).findFirst()` from the candidate stream; afterwards, if the current selection
   fails the predicate → clear (`cCP()`).
4. Predicate = `og$vf.dvZ` built by `og$vf$wk` (`og$vf$wk.java`, `og$vf.java` `dvZ` @ line 491).
   Exclusion order and gating:

   | Step | Check | Gate | eP uses? |
   |---|---|---|---|
   | `dwa` | entity is the scanning player | unconditional | yes |
   | `dwb` | `isDead()` | unconditional | yes |
   | `dwc` | invulnerable (incl. `abilities.invulnerable`) | unconditional | yes |
   | `dwh` | naked: all four `EquipmentSlot` (FEET/LEGS/CHEST/HEAD) `isEmpty()` (`jg.bBD`) | flag `EPMeP` (builder `dzA`) | **yes — "Ignore Naked"** |
   | `dwd` | `rD.dml().aLp(player)` = Friends module enabled (`fo.bag()`) **and** player in its list `fo.OiqRK` (`fo.java` line 118) | **unconditional** (no builder flag) | yes |
   | `dwe` | `rD.dmc().ddy(player)` (friend list of `dmc`) | flag `bOwtv` (builder `dzz`) | **yes — "Ignore Friends"** |
   | `dwi` | `jg.bBP(e)` = actively shielding (`bBQ`: shield in main/off hand **and** `isBlocking()` **or** (`isUsingItem()` **and** active item is shield)) **and** facing away from the player (`bBL`: `dot(targetFacing(pitch=0, headYaw), normalize(playerPos→targetPos, XZ)) >= 0`) | flag `vVVob` (builder `dzC`) | **no** (eP never calls `dzC`) |
   | `dwg` | `iX.bxD(e)`: `getVelocity().lengthSquared() > 0.08` | flag `uHUsD` (builder `dzB`) | **no** |
   | `dwj` | outside FOV cone: `Math.toDegrees(Math.acos(clamp(dot(cameraLook(pitch,yaw), normalize(targetEye−playerEye)), −1, 1))) > BAgaj/2` | flag `cicip` (builder `dzD`), half-angle = `BAgaj`/2 (builder `dzE(F)`) | **yes — "Limit FOV" + "FOV" slider** |
   | `dwf` | `jg.bBC(e)` wall LOS (raycast sampled box points, OUTLINE/NONE, any non-MISS hit ⇒ blocked) | flag `hpPzD` (builder `dzy`) | **no** |
   | `dwk` | `cF.VX(e)` entity-type filter | builder `dzx(cF)`; null filter ⇒ pass | **yes — "Targets"** |

   Net effect: eP's scanner excludes self/dead/invulnerable/naked(if set)/Friends-list(always)/
   friends(if set)/out-of-FOV-cone(if set)/wrong-entity-type, and does **not** filter by walls,
   movement, or shield-facing.

5. Target priority (`of.java`): `of.cCF(ct)` maps the "Target Priority" radio to a comparator:
   index 0 → `ahXwo = comparingDouble(e -> e.distanceTo(rD.dlmvG.player))` ("Distance", `lRWug`);
   index 1 → `FraBu = comparingDouble(LivingEntity::getHealth)` ("Health", `xKdBS`);
   otherwise `OGxYa = (a,b) -> 0` (no-op).

### Attack-point selection (recovered via `pe`/`ph` — partially)

- `pe.cNa(entity, ov, fromPos, ph, maxDist, bool)` (`pe.java`): `extra = bool ? 0.0f : 3.0f`;
  delegates to `cMZ(...)`, which samples `pf.cNi(fromPos, entity.getBoundingBox(), N)` (N =
  encrypted constant), drops points with `squaredDistanceTo(fromPos) > maxDist²` unless
  `!ph.cNo()`, and picks either the **minimum-score** candidate
  (`pe.cNb(point, fromPos, ov, ph, box)` — **CFR decompilation failed**, switch over the `ph`
  enum ⇒ "Best Vector", `zhiUo`) or the first **visible** candidate
  (`pe.cNc(point, fromPos)`: if `ph.cNp()` then require `point.squaredDistanceTo(fromPos) < 1e-5`,
  else raycast OUTLINE/NONE from the player caster, MISS = visible ⇒ "Nearest Vector", `oGBUC`).
- The `ph` enum has exactly 3 constants (`pvrFV`, `izpdM`, `iXNlP`) with DES-encrypted display
  names (not in the decrypted dump) — the "Attack Point" ("Best Vector"/"Nearest Vector") radio
  selects between scoring modes; which `ph` constant eP passes is decided inside the 0xf325 VM
  body and is **not** statically recoverable.

### Rotation (recovered API, virtualized driving logic)

- `qL` = rotation manager singleton (`rD.dlX()`). eP's virtualized bodies reference
  `qL.dbG(ov, LivingEntity, ou, mw, gg)` (rotate toward a point of a living entity) and the
  `aBO` blob additionally references `qL.dbI(Vec3d, ou, mw, gg)`, both with priority constant
  `mw.uWTdl`. `aBF(eQ, boolean, qL) -> ov` returns a rotation (`ov`) — signature-wise the
  "compute the rotation for this tick" coordinator between Mace Aura and Mace Elytra Target.
- `YO()`'s blob (`0x3806,0xbf`) tokens: `gg.baf() -> gc` (per-module rotation manager),
  `gc.aZg() -> gd` (mode enum, constants `ipLAD`/`zlSAY`), `gc.aZi(gd) -> gc` (set mode), and
  `mG.cnP(FFF) -> mG` (RGBA color factory). Purpose (enable/GUI hook) unrecovered.

### Cross-module coordination (from 0xf325 token section, exact refs)

- `sixtwo/eQ` (Mace Elytra Target): calls/read of `eQ.aCk() -> cu` (setting),
  `eQ.aCn() -> cC`, `eQ.aCm() -> cC`. eP handlers `aBD(eQ)`, `aBE(Z,eQ)`, `aBF(eQ,Z,qL) -> ov`,
  `aBG(LivingEntity,eQ)` all take an `eQ` — Mace Aura is driven/partly driven by Mace Elytra
  Target.
- `sixtwo/eS.aCW(LivingEntity) -> boolean` (Auto Stun Slam — native, virtualized there too) and
  `sixtwo/eT.aDw(PlayerEntity) -> boolean` (Shield Drain — native) are referenced by eP's body
  pool as predicates.
- `LivingEntity.stopGliding()` (`method_66281`) is referenced by eP's body pool.
- Support-API surface: `oW.cLd(class_1309, ov, gg) -> oW$vp` (attack-context builder);
  `oW$vp.dwX(F)`, `dxf(Z)`, `dxb(F)`, `dxk() -> oW`; `pe.dxk() -> oW`; `qP.ddr() -> oY`,
  `qP.ddm(oW) -> boolean` (execute attack), `qP.ddm`/`ddn(Entity)`, `ddl(gH$ti)`, `ddk(gZ$tt)`;
  `qL` as above; `og$vf.dwr() -> og$vf$wk`, `wk.dzx/dzz/dzA/dzD/dzE/dzF`; `oK.cIU(Item)`;
  `os` ctor `(Lsixtwo/os;ZZZZ)V` (owner class unrecovered).
- Note: `Items.MACE` (`field_49814`) and `Items.WIND_CHARGE` (`field_49098`) appear in the
  **eN/eO** token windows (`0xf34d`/`0xf3df`), i.e. Mace Swap / Auto Pearl Catch — they are NOT
  confirmed inside eP's own token range.

## Per-handler semantics

All handlers except `aBV` follow the same skeleton: optional pool-blob decrypt
(`FUN_190dd72e0(env, *plRam000000018301ee50 + OFF, LEN)`), one JNIEnv vtable call at index
`0x720/8 = 228` (j2cc VM entry), then a 2-way indirect jump `(&UNK_x + (cond==0)*8)` into the
continuation. The decompiled stub bodies carry no arithmetic; semantics below combine the stub
evidence (cited) with the token/API analysis of the decrypted blob.

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `YO()V` | `18bfc1d10` | `0x3806,0xbf` | Public override (`@Override` in CFR). Blob tokens: `gg.baf()->gc`, `gc.aZg()->gd`, `gc.aZi(gd)->gc` (rotation-mode enum `ipLAD`/`zlSAY`), `mG.cnP(FFF)->mG` color factory. Lifecycle hook configuring the module's rotation mode and a color; exact trigger unrecovered. `[18bfc1d10]` |
| `_0a8c9c238fa83059f98b98698224cc7d()V` | `18c030c10` | `0x226,0xd` | Class-init trampoline called from `<clinit>` after `Loader.doInit(eP.class)`; blob tokens `ang/String; | <` (string/class bootstrap infra). `[18c030c10]` |
| `aBA(gM)V` | `18bfc2000` | `0xf325,0x298` | `@hG` event handler for event shell `gM`. Body virtualized. `[18bfc2000]` |
| `aBB(gv)V` | `18bfda010` | `0xf325,0x298` | `@hG` event handler for event shell `gv`. Body virtualized. `[18bfda010]` |
| `aBC(gH$th)V` | `18c024690` | `0xf325,0x298` | `@hG` **main tick event handler** (`gH.th`). This is the per-tick driver: target scan (`AoABv`), attack-point solve (`NCCFN`), attack-context build, rotation request, attack execution, all via the token surface in Runtime model. Control flow inside the VM is unrecovered. `[18c024690]` |
| `aBD(eQ)V` | `18c055b60` | `0xf325,0x298` | Callback taking the Mace Elytra Target module instance; body reads `eQ.aCk()` (`cu` setting). Role: receive/act on elytra-target events. `[18c055b60]` |
| `aBE(Z,eQ)V` | `18c056700` | `0xf325,0x298` | Same, with a boolean flag (enable/phase). `[18c056700]` |
| `aBF(eQ,Z,qL) -> ov` | `18c05ad50` | `0xf325,0x298` | Returns a rotation (`ov`); coordinates with `eQ` and the `qL` rotation manager. Likely the shared "aim vector for the current attack" computation. `[18c05ad50]` |
| `aBG(LivingEntity,eQ)V` | `18c0607f0` | `0xf325,0x298` | Per-target action carrying `eQ` context. `[18c0607f0]` |
| `aBH(LivingEntity) -> oW` | `18c066090` | `0xb1,5` | Builds the `oW` attack context for a target (blob contains only token `Tlzw`; the real work is `oW.cLd(target, ov, gg)` + `oW$vp.dwX(F)/dxf(Z)/dxb(F)/dxk()` per token section). `[18c066090]` |
| `aBI(oW,qP)V` | `18c066f10` | `0xf325,0x298` | Attack pipeline stage 1 on an `oW` context + `qP` executor. `[18c066f10]` |
| `aBJ(oW,qP)V` | `18bfc21f0` | `0xf325,0x298` | Attack pipeline stage 2. `[18bfc21f0]` |
| `aBK(oW,qP)V` | `18bfc2c00` | `0xf325,0x298` | Attack pipeline stage 3. `[18bfc2c00]` |
| `aBL() -> Z` | `18bfc8330` | `0xf325,0x298` | Boolean predicate (name-pattern family `aBL/aBM/aBN` = internal gates; exact conditions unrecovered). `[18bfc8330]` |
| `aBM() -> Z` | `18bfcefc0` | `0xf325,0x298` | Boolean predicate. `[18bfcefc0]` |
| `aBN() -> Z` | `18bfcf4d0` | `0xf325,0x298` | Boolean predicate. `[18bfcf4d0]` |
| `aBO(LivingEntity,ov,qL)V` | `18bfd0a10` | `0xa4f2,0x1d0` | Rotation-driven action with block-breaking tokens in its blob (`BlockPos.ofFloored` = `method_49638`, `updateBlockBreakingProgress` = `method_2902`, `sixtwo/oo` ctor `(os,ZZZIZ)`, `BlockState.isAir` = `method_26215` via `gV.bcl()`). **Caveat:** blob `0xa4f2,0x1d0` is also decrypted by `sixtwo_fr`, `sixtwo_ou`, `sixtwo_qL` handler files, so the breaking tokens may belong to the shared pool rather than eP's own body — attribution must stay conservative. `[18bfd0a10]` |
| `aBP() -> LivingEntity` | `18bfd1350` | `0xf325,0x298` | Target getter/selector (returns `class_1309`). `[18bfd1350]` |
| `aBQ() -> F` | `18bfd5790` | `0xf325,0x298` | Private float getter (reads a setting or `SKXmj`); exact source unrecovered. `[18bfd5790]` |
| `aBR()V` | `18bfd9720` | — | Pure 2-way dispatch stub, no decrypt. `[18bfd9720]` |
| `aBS() -> LivingEntity` | `18bfd9e10` | — | Pure 2-way dispatch stub (returns target). `[18bfd9e10]` |
| `aBT([I)V` | `18bfdfe00` | `0xf325,0x298` | Static `int[]` setter (`LuzRg`), called from the constructor with `aCc<"j">`-derived constants. `[18bfdfe00]` |
| `aBU() -> [I` | `18bfdff80` | `0xf325,0x298` | Static `int[]` getter (`LuzRg`). `[18bfdff80]` |
| `aBV(MatchException) -> MatchException` | `18bfe0110` | — | **Fully recovered: identity function** `return param_3;` — the MatchException rethrow wrapper used by every try/catch in the class. `[18bfe0110]` |
| `aBW([B) -> String` | `18bfe01a0` | — | Pure dispatch stub (byte[]→String string builder). `[18bfe01a0]` |
| `aBX(I,J) -> String` | `18c00a880` | `0xf325,0x298` | Keyed string decryptor: large opaque constant-mixing state machine (hundreds of j2cc VM steps, anti-trace) then decrypts `0xf325`. `[18c00a880]` |
| `aBY(Lookup,MutableCallSite,String,Object[]) -> Object` | `18c011a60` | — | invokedynamic bootstrap (dispatch stub). `[18c011a60]` |
| `aBZ(Lookup,String,MethodType) -> CallSite` | `18c012950` | `0x857,0x26` | String-literal indy bootstrap (`aBZ<"z">` in ctor decrypts " blocks"-suffix literals); blob tokens `odHandle; | iUrOn | Ljava/util`. `[18c012950]` |
| `aCa(I,J) -> I` | `18c015410` | `0xf325,0x298` | Keyed int-constant decryptor (same opaque state-machine shape as `aBX`), used as `aCc<"j">` behind the ctor's setting-name/string decoding. `[18c015410]` |
| `aCb(Lookup,MutableCallSite,String,Object[]) -> I` | `18c020970` | — | invokedynamic int bootstrap (dispatch stub). `[18c020970]` |
| `aCc(Lookup,String,MethodType) -> CallSite` | `18c021980` | `0x857,0x26` | Int-literal indy bootstrap (`aCc<"j">`); same blob as `aBZ`. `[18c021980]` |

Continuations (`analysis/ghidra/continuations/sixtwo_eP_cont.c`, 7372 lines): nearly all blocks
are j2cc VM stubs ending in `halt_baddata` (lazy-body truncation). The only token-bearing
continuations decrypt `0x2e9,0x12` (`ang/invoke/M` — MethodHandles infra), `0x6fb,0x21`
(`o/mG; | ptJfX | [Ljava/la`), and `0xb15,0x2c` (HashMap/Runnable infra). None contain eP game
logic.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/eP.java` (all literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Min Fall Distance" | `NAanF` (`cC`) | slider | step `0.1`, min `1.5`, max `12.0`, default `4.0`, suffix `" blocks"` | fall-distance gate before a mace smash (consumed inside 0xf325 bodies) |
| "Targets" | `ODZUf` (`cF`) | entity-type filter | default filter `jg$tJ.OCdZM` | `og$vf$wk.dzx(cF)` → scanner type filter (`dwk`) |
| "Target Options" | `OqtQM` (`cv`) | container | — | parent of the three toggles below |
| "Ignore Friends" | `AGzRp` (`cw`, child of OqtQM) | toggle | default per `cw` | `og$vf$wk.dzz(...)` → scanner `dwe` friends exclusion |
| "Ignore Naked" | `GJMaG` (`cw`) | toggle | — | `og$vf$wk.dzA(...)` → scanner `dwh` naked exclusion (all 4 armor slots empty) |
| "Ignore In Damage Tick" | `OwGUK` (`cw`) | toggle | — | consumed inside 0xf325 bodies (hurt-time gating); no scanner hook recovered |
| "Target Priority" | `PVTLs` (`ct`) | radio (container) | children: `lRWug` "Distance" (idx 0), `xKdBS` "Health" (idx 1) | `of.cCF(ct)`: 0 → `comparingDouble(distanceTo(player))`, 1 → `comparingDouble(getHealth)` |
| "Attack Point" | `AyJJM` (`ct`) | radio | children: `zhiUo` "Best Vector" (min-score via `pe.cNb`), `oGBUC` "Nearest Vector" (first visible via `pe.cNc`) | selects `pe.cNa` scoring mode; the `ph` constant chosen is inside the VM body |
| "Hit Distance" | `AZdEq` (`cC`) | slider | step `0.01`, min `2.5`, max `5.0`, default `3.0`, suffix `" blocks"` | attack-range gate (consumed inside 0xf325 bodies; likely also `oW$vp.dwX(F)`/`dxb(F)` floats) |
| "Change Armor" | `gXxAz` (`cJ`) | toggle | `WE(false)` (default off) | armor-swap behavior inside 0xf325 bodies |
| "Change View" | `KSprU` (`cJ`) | toggle | default off | view/rotation-change behavior inside 0xf325 bodies |
| "Limit FOV" | `OWsAx` (`cJ`) | toggle | default off | `og$vf$wk.dzD(...)` → scanner `dwj` FOV-cone exclusion |
| "FOV" | `rJCaB` (`cC`) | slider | step `1.0`, min `10.0`, max `360.0`, default `180.0`, suffix `" deg"` | `og$vf$wk.dzE(F)` → cone half-angle = FOV/2; at default 180 the cone excludes nothing (half-angle 90° covers the full front hemisphere and no angle can exceed 180°) |

Notes:
- The friends-list exclusion (`dwd`, `fo.aLp` = Friends module enabled + player in `fo.OiqRK`)
  is applied **unconditionally** by the scanner — there is no eP setting that turns it off.
- `NCCFN = new pe()` is wrapped in try/catch (MatchException → `aBV`), with anti-debug
  `iS.bwK("D1dXbc")` on the non-exception path.
- `aBU()` feeds `LuzRg` (`static int[]`) during construction; those ints are the setting-name /
  literal key table consumed by `aCc<"j">`.

## Unrecovered / uncertain

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **All 0xf325 interpreted bodies' control flow and arithmetic.** Every handler marked
   `0xf325,0x298` decrypts a shared blob and jumps into the j2cc VM; the continuation dump is
   `halt_baddata` stubs. The per-tick decision tree (when to scan, when to request rotation, when
   `qP.ddm(oW)` fires, how `NTGZO`/`rqlbi`/`SKXmj`/`tORnN` gate phases, how "Min Fall Distance"
   and "Hit Distance" and "Ignore In Damage Tick" are evaluated, how `stopGliding()`, `eS.aCW`,
   `eT.aDw` are consumed) is only known at the API-contract level.
2. **`pe.cNb(point, fromPos, ov, ph, box)` — the "Best Vector" score.** CFR decompilation failed
   (switch over the `ph` enum). Only the selection rule (minimum score among sampled box points
   within `maxDist²`) is recovered.
3. **`ph` enum constants (`pvrFV`, `izpdM`, `iXNlP`) display names** — DES-encrypted, absent from
   `analysis/decrypted/full-dump.jsonl`; also which `ph` constant eP passes to `pe.cNa`.
4. **`oV.cLc(F)F`** — native transform applied to the scanner range before use; formula
   unrecoverable (so effective scan radius in blocks is not provable from settings alone).
5. **`aBO` blob attribution** (`0xa4f2,0x1d0`): shared with `sixtwo_fr`, `sixtwo_ou`,
   `sixtwo_qL`; its block-breaking tokens (`method_2902`, `method_49638`, `sixtwo/oo` ctor,
   `method_26215`) may not belong to eP's body. eP's own use of `aBO(LivingEntity, ov, qL)` is
   unrecovered.
6. **`YO()` purpose**: tokens prove it touches the rotation-mode enum (`ipLAD`/`zlSAY`) and a
   color factory (`mG.cnP(FFF)`), but whether it runs on enable, disable, or GUI-open is
   unknown.
7. **`eS.aCW(LivingEntity) -> boolean` and `eT.aDw(PlayerEntity) -> boolean` internals** — both
   are native/virtualized in their own classes; only the call signature within eP's pool is
   known.
8. **`eQ.aCn() -> cC` / `eQ.aCm() -> cC` semantics** (which settings of Mace Elytra Target they
   are) and the exact direction of the eP↔eQ event flow (`aBD`/`aBE` = callbacks into eP vs.
   calls out).
9. **`Items.MACE` (`field_49814`) / `Items.WIND_CHARGE` (`field_49098`) attribution**: present in
   eN/eO token windows, not confirmed in eP's token range. eP's item logic (which slot/what it
   swaps to) is inside the VM.
10. **`oW$vp` builder field meanings** beyond the four setters in eP's token surface
    (`dwX(F)`, `dxf(Z)`, `dxb(F)`, `dxk()`): the remaining `dwU..dwY/dxa..dxi` setters are used
    by other modules; which oW fields eP populates with which values is unrecovered.
11. **`os` ctor `(Lsixtwo/os;ZZZZ)V` owner class** and the roles of the `of` enum constants
    `FraBu`/`OGxYa` display names (encrypted).
12. **`qP` executor internals** (`ddm(oW)`, `ddo/ddn(Entity)`, `ddp`, `ddr`, `dds`, `ddt`,
    `ddl(gH$ti)`, `ddk(gZ$tt)`) — entirely native; only the API is known.
13. **`SKXmj` (static float), `NTGZO`, `rqlbi`** exact roles; `aBL`/`aBM`/`aBN`/`aBQ` exact
    conditions/sources.
14. Continuation blocks ending in `(*_DAT_xxx)()` or with `unaff_*` params: interpreted
    conservatively as VM tails, not game logic.