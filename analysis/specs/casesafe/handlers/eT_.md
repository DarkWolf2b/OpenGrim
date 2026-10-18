# eT — Shield Drain (module id 156)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/eT.md`; registry row
  `sixtwo.eT|Shield Drain|Spams attacks at enemy shield to break it|key=156|bind=-999`
  (primary key 156, active bind −999 = unbound), category `gh.xwjCw` (Combat).
- Java shell: `analysis/decompiled/payload-decrypted/sixtwo/eT.java` (117 lines,
  Vineflower, DES literals folded) — slider + radio group + native declarations.
- Native: `analysis/ghidra/handlers-full/sixtwo_eT.c` — 7 handler stubs, all
  decrypt-then-VM-dispatch; no bytecode statically recoverable. Fully native-backed.
- Pool window: POOL base RVA `0x301ee40`, image
  `analysis/ghidra/dumps/jna-decrypted-v2.dll`. Yarn map:
  `analysis/jars/yarn-1.21.11+build.6.tiny`. Attack-suite vocabulary from `eP.md`
  (`oW`/`oW$vp`/`pe`/`ph`/`qP`/`qL`/`oY`).

Handler → pool-blob usage map:

| Blob (off,len) | Handlers | Addresses |
|---|---|---|
| `0xf528,0x29c` | `aDu` `aDv` `aDw` (shared window covering eT + eS + eP + attack helpers) | aDu `[0x18bddab80]`, aDv `[0x18bddff10]`, aDw `[0x18bde54c0]` |
| `0x226,0xd` | class-init | `[0x18be23cd0]` |
| `0x857,0x26` | `aDB` (indy bootstrap) | `[0x18be20fc0]` |

Verbatim token run of `0xf528,0x29c` (heads with the truncated tail of a preceding
descriptor `(Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V` — owner unrecovered):
`s_1309;Lsixtwo/ov;Lsixtwo/qL;)V sixtwo/eT aCm aDw (Lnet/minecraft/class_1657;)Z
sixtwo/eS aCW aBG (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V aBH
(Lnet/minecraft/class_1309;)Lsixtwo/oW; sixtwo/oW cLd (Lnet/minecraft/class_1309;Lsixtwo/ov;
Lsixtwo/gg;)Lsixtwo/oW$vp; AZdEq sixtwo/oW$vp dwX (F)Lsixtwo/oW$vp; OwGUK dxf
(Z)Lsixtwo/oW$vp; dxb NCCFN Lsixtwo/pe; dxk ()Lsixtwo/oW; aBI (Lsixtwo/oW;Lsixtwo/qP;)V
AyJJM sixtwo/ph cNl (I)Lsixtwo/ph; aBQ aBJ sixtwo/pe cNa (Lnet/minecraft/class_1297;
Lsixtwo/ov;Lnet/minecraft/class_243;Lsixtwo/ph;FZ)Lnet/minecraft/class_243; aBK ddr
()Lsixtwo/oY; sixtwo/oY cLT (Lsixtwo/oW;)Z ddm method_66281 aDc tORnN cIU gXxAz aBM QZFQM
NAanF KSp…`

Yarn: `method_66281` = `LivingEntity.stopGliding()`; `class_1657` = `PlayerEntity`;
`class_1309` = `LivingEntity`. Sixtwo contracts (per `eP.md`): `eS.aCW(LivingEntity)Z` =
"actively shielding" test; `oW.cLd(LivingEntity, ov, gg) → oW$vp` = attack-plan builder
with `oW$vp.dwX(F)`/`oW$vp.dxf(Z)` plan options; `pe.cNa(Entity, ov, Vec3d, ph, F, Z) →
Vec3d` = attack-point solver; `ph.cNl(I) → ph` = vector-choice enum by index; `qP.ddr() →
oY` (plan checker), `oY.cLT(oW)Z`, `qP.ddm(oW)Z` = execute attack; `qL` = rotation manager.

## Runtime model

- `gf.aZL(156, false, gh.xwjCw)` [eT.java:23] — registered disabled at boot, Combat.
- Registry behavior: **"Spams attacks at enemy shield to break it"** — on tick, find an
  actively-shielding enemy and repeatedly attack them (through the shared
  rotation/attack-point/execute suite) to burn the shield's durability.
- Listener inventory (1 `@hG` + 2 native predicates):
  - `aDu(gH$th)` — client tick, `@hG` [eT.java:102; sixtwo_eT.c:50]
  - `aDv(PlayerEntity)Z` — private native predicate [eT.java:107; sixtwo_eT.c:67]
  - `aDw(PlayerEntity)Z` — public native predicate, cross-referenced by **eP (Mace
    Aura)** [eT.java:114; sixtwo_eT.c:84]
- State: no Java-side fields besides settings; the window shows `NCCFN` (`pe` attack-point
  solver field) and `tORnN`-adjacent `cIU`/`aBM`/`aDc` tokens from the eP shared region —
  eT reuses the same interpreted region, so its internal state (if any) is VM-resident.
  (inferred)

## Per-handler semantics

1. `public eT()` [eT.java:21-93] — constructor: registers module id 156 (disabled,
   Combat); builds:
   - `JIjdU` = **"Min Fall Distance"** (chars `77 105 110 32 70 97 108 108 32 68 105 115
     116 97 110 99 101`): `.Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz(QSxPs)` [eT.java:48];
   - `wSXQh` = `ct` group **"Click Mode"** (chars `67 108 105 99 107 32 77 111 100 101`)
     [eT.java:56] with radio children `uAaOS` = **"Vanilla"** (chars `86 97 110 105 108
     108 97`) [eT.java:66] and `mRyFn` = **"Blatant"** (chars `66 108 97 116 97 110 116`)
     [eT.java:76];
   - `YtRvz` = **"Hit Per Tick"** (chars `72 105 116 32 80 101 114 32 84 105 99 107`):
     `.VA(10.0).Vw(1.0).Vx(50.0).Vy(1.0)` with `.Vf(this.mRyFn::SZ)` — visible only when
     Blatant is selected [eT.java:90-91].
   No selection is marked `.SY()` in the shell, so the default radio index is inside the
   VM body (unrecovered).
2. `@hG native aDu(gH$th)` [sixtwo_eT.c:50] — client tick; the drain loop (order inferred
   from token sequence + eP suite contracts):
   - enabled check; scan for a target passing `eS.aCW(LivingEntity)Z` (actively shielding:
     shield in either hand and blocking/using it — `eP.md` `dwi` vocabulary);
   - the `aBH(LivingEntity) → oW` / `oW.cLd(LivingEntity, ov, gg) → oW$vp` plan-builder
     chain with `oW$vp.dwX(F)` (timing/plan float) and `oW$vp.dxf(Z)` (boolean plan flag,
     unrecovered meaning) configures the attack;
   - `pe.cNa(Entity, ov, Vec3d, ph, F, Z) → Vec3d` picks the attack point; `ph.cNl(I)`
     selects the vector-choice enum by index; `qL` (rotation manager, cf. the truncated
     `(class_1309, ov, qL)V` descriptor head) rotates toward it;
   - validation `qP.ddr() → oY` + `oY.cLT(oW)Z`, then execute via `qP.ddm(oW)Z`
     (`qP.ddn(Entity)` is the raw attack in the suite); repeated up to **Hit Per Tick**
     per tick in Blatant mode. (inferred counts)
   - `method_66281` = `LivingEntity.stopGliding()` is called within the region — most
     plausibly to force the target's shield state before/during attacks (the exact role
     is unrecovered; possibly on the local player to avoid glide-state interference).
     (inferred)
   - "Min Fall Distance" gates the drain: consistent with the module breaking shields
     when the blocker is falling (falling blockers can't keep the shield up under 1.21.x
     glide/fall rules — precise comparator against the target's or the attacker's fall
     distance is unrecovered). (inferred)
3. `native aDv(PlayerEntity)Z` (private) / `aDw(PlayerEntity)Z` (public) — the same blob
   interprets both; per the eP cross-reference, they answer "should Shield Drain engage
   this player" (shield-up + fall-distance gate). The vanilla/blatant mode split likely
   lives here too. (inferred)
4. Static: class-init `[0x18be23cd0]`, indy `[0x18be20fc0]`, literal helpers
   `aDz(IJ)I`/`aDy(byte[])`, `aDx(MatchException)` wrapper.

## Settings

- `cC JIjdU` = **"Min Fall Distance"**: step **0.1**, min **0.0**, max **12.0**, default
  **1.5** [eT.java:48]. Unit suffix `.Vz(QSxPs)` — DES-encrypted static, **undecrypted**
  (likely "blocks"-style suffix; not guessed here).
- `ct wSXQh` = **"Click Mode"** group with `cu uAaOS` = **"Vanilla"** (index 0) and
  `cu mRyFn` = **"Blatant"** (index 1); default selection unrecovered (no `.SY()` in the
  shell) [eT.java:56-76].
- `cC YtRvz` = **"Hit Per Tick"**: default **10.0**, min **1.0**, max **50.0**, step
  **1.0**; visible only when `mRyFn.SZ()` (Blatant selected) [eT.java:90-91].
- No keybind. Four widgets total.

## Blockers / unknowns

- All three native bodies share one interpreted region with eS/eP; per-handler token
  attribution inside the region is by co-occurrence only. The exact per-tick loop (how
  many plan/execute iterations in Vanilla vs Blatant), the `oW$vp.dwX(F)`/`dxf(Z)` plan
  option meanings, and the `ph` index used are unrecovered.
- "Min Fall Distance" comparator (target vs attacker fall distance; blocks) and the
  `stopGliding` call site (target vs self) are unrecovered. (inferred role)
- Default Click Mode selection is not visible in the Java shell.
- `.Vz(QSxPs)` suffix string: DES-encrypted, **undecrypted** — stated explicitly.
- `aCm`, `AZdEq`, `OwGUK`, `AyJJM`, `aBQ`, `aBK`, `aDc`, `cIU`, `gXxAz`, `aBM`, `QZFQM`,
  `NAanF` are obfuscator symbols / neighbor-section names in the shared window; no
  eR-style `qJ.dbm` arbitration token appears for eT (it presumably uses `qP.ddm`
  directly). (inferred)