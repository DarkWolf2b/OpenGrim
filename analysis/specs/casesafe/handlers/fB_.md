# Auto Shield Break (sixtwo.fB) — handler-derived behavior spec

Class: `sixtwo/fB` · display name **Auto Shield Break** · registry description
"Automatically breaks shield" · primary key 3, active bind -999 (unbound) [registry].
Superclass: `gg` (module base). Constructed via `super(gf.aZL(3, false, gh.xwjCw))`
(same encrypted category constant `gh.xwjCw` as fr/fG).

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fB.c` — **18 native handlers** +
   **193 continuation blocks**, 0 unresolved table targets; **157/193 blocks end in
   `halt_baddata()`** (Ghidra truncated the indirect-jump chains). As everywhere in
   the payload, behavior bodies are compiled into the embedded bytecode VM
   (`$mango$6dc686caab50ed59` + `Loader.doInit`); handlers are decrypt-stubs.
   - JNI-op census (all in continuation blocks, all generic VM opcode
     implementations): `ExceptionCheck` ×71, `ExceptionOccurred` ×14,
     `IsInstanceOf` ×13, `ThrowNew` ×6, `ExceptionClear` ×3, `CallVoidMethodA` ×3,
     `AllocObject` ×3, `GetStaticObjectField` ×2, `GetArrayLength` ×2, and ×1 each
     `Throw`, `SetBooleanField`, `NewString`, `NewObjectArray`, `GetStaticLongField`,
     `GetObjectField`, `GetObjectArrayElement`, `CallStaticObjectMethodV`,
     `CallStaticObjectMethodA`.
   - **`rdtsc` ×2** — both inside one continuation block belonging to the `aSq`
     string-decryptor chain, sandwiched around a `NewString` opcode
     (`uStack…0xb8 = 0x66002f006f0077`, a wide-char literal fragment). Anti-analysis
     noise adjacent to the decryptor, not time-gated logic.
2. `analysis/decompiled/payload-named/sixtwo/fB.java` + literals-folded
   `payload-decrypted/sixtwo/fB.java` — complete Java skeleton (21 settings, 3 helper
   wirings, 4 visibility couplings, native declarations). All labels below re-decoded
   char-by-char from the folded arrays and cross-checked against
   `analysis/decrypted/full-dump.jsonl` (class `sixtwo.fB`).
3. Supporting payload types: `hw`/`hw$tv` (attack/entity event), `gH$th` (shared
   render-stage marker), `ol` (shared per-module CPS/attack scheduler used by dR, eF,
   eG, eH, eI, eN, eO, eS, eW, fB — owns `mT NkPYR` timer, `cER(cA)` takes a CPS
   range setting), `mW` (one-shot attack gate: `crx(int)` latches
   `ISQse = mU.cpN(n2)`; users eS, eU, fB, fp), `cA` **range slider** (UG=step,
   UE=min-bound, UF=max-bound, UI=default-min,UI-default-max — all four cA settings
   here use distinct min/max defaults, e.g. CPS `4.0–6.0`).
4. Yarn mapping: `analysis/jars/yarn-1.21.11+build.6.tiny` —
   `method_5771` = `Entity.isInLava()Z`; `class_1297` = Entity,
   `class_1657` = PlayerEntity.

## Runtime model

- **Pool windows** (global pool at image `+0x301ee50`):
  - `YO ()V` [18af91a90]: `POOL[0x3806,0xbf]` — the gg/HUD-widget neighborhood
    (`gg.baf/gc.aZg/aZi`, `gd` state `ipLAD/zlSAY`, `mG.cnP(FFF)` color factory),
    identical window fr.YO()/fG.aaj() decrypt; per-class attribution inside it
    uncertain.
  - `<clinit>` [18afd9500]: `POOL[0x226,0xd]` — decrypt-bootstrap infra.
  - **Shared behavior core** `POOL[0x140ab,0x325]` — used by **8 handlers**
    (`aSg, aSh, aSi, aSl, aSm, aSn` + fB token coverage in the decryptors). fB's own
    token group, in pool order: `sixtwo/fB | XVRCB | WFFVU | pKMKg | NSrLe | UkpKz |
    aSc | aSo | snORa | bApwx | aSi | zlYES | qRPky | EFLIl | itUea | HBnKR | cHl |
    MeJvD | RsARQ | XUAcx | vOaqN | FOTTj | ZabSq | bzn | aSq | LDZVd | JTphg | SotCh |
    aSp | aSj | XNMmn | YSeRv | aSt | mldcd | aSk | PEgLw | ftPwi`. After it, the
    **fC (Velocity) token group** begins: `sixtwo/fC | sLnpv | aSz | pltDm |
    method_5771 | bwT | (Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;
    Ljava/util/function/Predicate;Ljava/lang/Object;)Ljava/util/concurrent/
    CompletableFuture; | oUOJc | hXcoz | mixin/accessors/ClientboundSetEntityMotionPacketAccessor`.
    The window truncates inside fC's group. Attribution: `method_5771`
    (isInLava), the `CompletableFuture` scheduler signature (the **iU scheduler**'s
    schedule-with-cancel-predicate call), and the `ClientboundSetEntityMotionPacket`
    accessor belong to fC's neighborhood — flagged fC, though `bwT` (the scheduler
    method name) could be invoked by either class's VM code.
  - `aSj`/`aSk` [18b01fdf0, 18b01ffe0] — **no pool window**: pure null-check +
    2-way jumptable trampolines (private native void helpers invoked from the VM).
- **Events** (`@hG`):
  - `aSg(hw$tv)` [18af92170] — attack/entity event (same event fG/eM/fh/eF consume).
  - `aSh(gH$th)` [18aff72d0] — shared render-stage marker.
- **Internal helpers** (VM-called): `aSi(Entity)` [18b000a60] — per-entity work
  entry; `aSl(PlayerEntity, PlayerEntity) → boolean` [18b020450] — pairwise player
  predicate (structurally the target-validity check — e.g. "other is an enemy player
  whose shield we should attack"); `aSm(Z, Entity)` [18b021760] — static
  boolean+entity callback, same shape as fG's `aTh(Z, eD)` cross-module bridge, no
  Java caller; `aSn() → Boolean` [18b026220] — visibility supplier wired
  `vOaqN.Vf(this::aSn)` (Auto Switch Delay visibility).
- **State**: `WFFVU` (boolean), `XVRCB = new ol(this)` (CPS scheduler), `XUAcx =
  mT.cpz()` (module timer, mT), `pKMKg = new mW()` (one-shot attack gate). Pool-only
  names not declared in fB.java: `NSrLe`, `aSc`, `aSd` (see §Unrecovered). Statics
  `UkpKz` (class VM key: ctor uses `UkpKz ^ 0x2412C93DDF5DL`), `JTphg/FOTTj` (String[]),
  `ZabSq/mldcd` (Map), `YSeRv` (long[]), `XNMmn` (Integer[]) — decryptor caches.

## Per-handler semantics

All behavior handlers decrypt the shared core window then dispatch into the VM; the
recoverable contract is below, the arithmetic is not.

- **`aSg (Lsixtwo/hw$tv;)V` — attack-event entry [18af92170]**. On each attack
  event against an entity: gate on enabled + `Cancel On Use` + target validity
  (`aSl`), and drive the shield-break attack loop through `ol`/`mW`/`mT`. Contract
  only.
- **`aSh (Lsixtwo/gH$th;)V` — render-stage marker [18aff72d0]**. Same window; no
  render-specific tokens recovered. Candidate consumer: state feedback/visuals —
  unrecovered.
- **`aSi (Lnet/minecraft/class_1297;)V` — per-entity attack step [18b000a60]**.
  Receives an Entity; structurally the "attack this entity until shield disables"
  worker feeding the `ol` CPS engine (Spam CPS 4–6 cps, LDZVd Spoof CPS toggle).
- **`aSl (Lnet/minecraft/class_1657;Lnet/minecraft/class_1657;)Z — pair predicate
  [18b020450]**. Two PlayerEntity args; the only Java-visible boolean decision
  surface. Settings it plausibly encodes: `Ignore Friends` (default true),
  `Ignore Walls` (default false), `Range` 2.5–3.0 blocks. Conditions unrecovered.
- **`aSm (ZLnet/minecraft/class_1297;)V` — static bridge [18b021760]**. Boolean +
  Entity; no Java caller. Direction/meaning unrecovered (compare fG.aTh(Z, eD)).
- **`aSn ()Ljava/lang/Boolean; — visibility callback [18b026220]**. Wired as
  `vOaqN.Vf(this::aSn)`. Structural reading: Auto Switch Delay (a ticks-range
  setting) is visible only in a Switch Mode/Attack Mode combination (likely
  Switch Mode == Auto, consistent with `BRjKS.Vf(RsARQ::SZ)` hiding Switch Mode
  when Attack Mode == Manual). The comparison itself is VM bytecode.
- **`aSj ()V` / `aSk ()V` [18b01fdf0, 18b01ffe0]** — private native void helpers,
  null-check trampolines, no pool window. Unrecovered (state-reset/tick candidates).
- **`YO ()V` — lifecycle override [18af91a90]**. Same gg-container window as
  fr.YO()/fG.aaj(); whether fB initializes its `gd` state or a color, and whether
  the inherited registration runs, is unproven.

### Trivial / infrastructure

- `aSo (MatchException) → MatchException` [18b02a4f0] — identity rethrow stub.
- `aSp ([B) → String` [18af96a90] — byte-array string decoder stub.
- `aSq (IJ) → String` [18afbf9a0] / `aSt (IJ) → I` [18afc9fa0] — string/int
  decryptor primitives (whitening PRNG, ~430–500 lines each; anti-analysis noise,
  the class's only rdtsc pair sits in aSq's chain).
- `aSr/aSu` [18afc65f0, 18afd57e0] — MutableCallSite relink BSMs; `aSs/aSv`
  [18afc74e0, 18afd67f0] — invokedynamic bootstraps for the `aSv("x",…)` /
  `aSs("j",…)` decrypt calls.

## Settings → behavior mapping

All 21 settings, verbatim folded chains. `cA` = range slider (two defaults).

| field | setting | type / chain (verbatim) | behavior role (handler evidence) |
|---|---|---|---|
| `TUmhB` | Attack Mode | `ct` `"Attack Mode"` | attack trigger selector |
| `snORa` | — Auto | `cu` child (65,117,116,111 = "Auto") | first child ⇒ default |
| `zlYES` | — Manual | `cu` child (9 chars, `"Manual"…`) | |
| `BRjKS` | Switch Mode | `ct` `"Switch Mode"`; visibility `BRjKS.Vf(RsARQ::SZ)` (visible iff Attack Mode == Auto) | slot/weapon switching selector |
| `RsARQ` | — Auto | `cu` child (65,117,116,111) | first child ⇒ default |
| `YEDyf` | — Manual | `cu` child (`"Manual"…`) | |
| `vOaqN` | Auto Switch Delay | `cA`: `.UG(1.0).UE(0.0).UF(10.0).UI(1.0, 2.0).UH(" ticks")` — step 1, bounds 0–10, default **1–2 ticks** (range) | delay before the switch-back; visibility supplier `aSn` |
| `itUea` | Range | `cA`: `.UG(0.1).UE(1.0).UF(6.0).UI(2.5, 3.0).UH(" blocks")` — step 0.1, bounds 1–6, default **2.5–3.0 blocks** (range) | attack-distance gate |
| `SotCh` | Disable Mode | `ct` `.SO(1)` — default **index 1** | how the shield is broken |
| `xenvw` | — Single | `cu` child (7 chars, `"Single"…`) | index 0 |
| `QsGiD` | — Stun | `cu` child (83,116,117,110 = "Stun") | index 1 = default; visibility-parent of Stun Chance |
| `tWbtJ` | — Spam | `cu` child (83,112,97,109 = "Spam") | visibility-parent of Spam CPS |
| `PEgLw` | Stun Chance | `cC`: `.Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(" %")` — step 1, min 1, max 100, default 100 % | chance parameter for the Stun mode; visibility `PEgLw.Vf(QsGiD::SZ)` |
| `ftPwi` | Spam CPS | `cA`: `.UG(1.0).UE(1.0).UF(20.0).UI(4.0, 6.0).UH(" cps")` — step 1, bounds 1–20, default **4–6 cps** (range) | click rate fed to the `ol` CPS engine; visibility `ftPwi.Vf(tWbtJ::SZ)` |
| `HBnKR` | Ignore Walls | `cJ` `.WE(false)` | line-of-sight filter (candidate input to `aSl`) |
| `LDZVd` | Spoof CPS | `cJ` `.WE(false)` | spoof-vs-real clicking toggle (pairs with `ol`/`mW`) |
| `bApwx` | Return Delay | `cA`: `.UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms")` — step 10, bounds 0–1000, default **50–100 ms** (range) | delay before returning to the previous slot |
| `MeJvD` | Ignore Friends | `cJ` `.WE(true)` | friends filter (candidate input to `aSl`) |
| `qRPky` | Cancel On Use | `cJ` `.WE(false)` | suspend while use key held |
| `EFLIl` | Cancel Use Mode | `ct` | scope of Cancel On Use |
| `XlqCA` | — All Items | `cu` child (9 chars, `"All Ite…"`) | |
| `CeUWS` | — Allow Shielding | `cu` child (17 chars, `"Allow Sh…"`) | |

Wired references (Java, exact): `XVRCB = new ol(this)`, `XUAcx = mT.cpz()`,
`pKMKg = new mW()`, `PEgLw.Vf(QsGiD::SZ)`, `ftPwi.Vf(tWbtJ::SZ)`,
`BRjKS.Vf(RsARQ::SZ)`, `vOaqN.Vf(this::aSn)`.

## Unrecovered / uncertain

1. **All decision arithmetic.** When the axe-switch happens, how `Disable Mode`
   Single/Stun/Spam alter the attack stream, how `Stun Chance` (a percentage, default
   100) is rolled, what "Single" does (single attack? single target?), the CPS loop
   shape (`ol.cER(cA)` semantics), and the switch-back choreography with
   `Auto Switch Delay` (1–2 ticks) and `Return Delay` (50–100 ms) — all inside the
   VM. No float operation or constant survives.
2. **`aSl(PlayerEntity, PlayerEntity)` conditions** — attributed structurally to the
   Ignore Friends/Walls/Range gates; decoded conditions do not survive. Which
   argument is self vs other is also unproven.
3. **fC-scoped tokens in the shared window.** `method_5771` (isInLava), the
   iU-scheduler `CompletableFuture` signature (`(Runnable,JJ,I,TimeUnit,Predicate,
   Object)→CompletableFuture`, name `bwT`), and
   `mixin/accessors/ClientboundSetEntityMotionPacketAccessor` sit in the window's
   tail; the accessor is clearly fC (Velocity). Whether `bwT`'s scheduler call is
   made by fB (e.g. delayed switch-back via iU) or by fC is not attributable.
4. **Pool-only names `NSrLe`, `aSc`, `aSd`** — in fB's token group but absent from
   `fB.java` (no field `NSrLe`, no methods `aSc`/`aSd` declared). They are either
   CFR-dropped synthetic members or VM-resolved aliases; unassignable.
5. **`aSm(Z, Entity)` bridge** — no Java caller; direction and flag meaning
   unrecovered (compare fG.aTh(Z, eD)).
6. **`aSj`/`aSk` semantics** — no pool window, no evidence.
7. **`aSh(gH$th)` role** — no render-specific tokens; what is drawn (if anything)
   unrecovered.
8. **`WFFVU` state meaning** — single boolean; candidates (shield-broken latch,
   mid-sequence flag) are type-based inference only.
9. **`YO()` attribution** — same shared gg-container window as fr/fG; per-class
   behavior unproven.
10. **`mW.crx(int)` / `mU.cpN(int)`** — the one-shot gate's return value feeds the
    attack decision, but `mU.cpN`'s meaning (a native global) is unrecovered.