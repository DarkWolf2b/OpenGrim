# Spear Lunge (sixtwo.eG) — handler-derived behavior spec

Class: `sixtwo/eG` · display name **Spear Lunge** · registry description
"Automatically lunges with spear" · primary key 148, active bind -999 [registry].
Superclass: `gg` (`extends iS`), category constant `gh.xwjCw` (same category as
fr Kill Aura — combat). Constructor key constant decodes to 148 ✓.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_eG.c` — **26 native handlers +
   continuation blocks**, 0 unresolved table targets.
2. Structural: `analysis/specs/modules/eG.md`, Java shell
   `analysis/decompiled/payload-named/sixtwo/eG.java` (CFR; constructor
   decompiled, all behavior `native`).
3. **Pool window** — one shared behavior core `POOL[0xe3b8,0x27e]` (638 bytes)
   decrypted by `awU, awV, awW, awX, awZ, awY, axk` (+ more of the trivial
   set); plus `YO` `POOL[0x3806,0xbf]` (HUD neighborhood, fr.md notes apply),
   `axr` bootstrap `POOL[0x857,0x26]`, clinit `POOL[0x226,0xd]`.
4. Yarn mapping (tiny 1.21.11+build.6) — the window is unusually informative
   for this class:
   - `field_63257` = `TagKey` **SPEARS** (`class_6862`) — spear-item tag test.
   - `field_63420` = `RegistryKey` **LUNGE** (`class_5321`) — the lunge
     mechanic's registry key (owner registry unrecovered).
   - `class_12392` = `AttackRangeComponent`; `field_64680` = `DataComponentTypes
     .ATTACK_RANGE` (`class_9334`); `method_76734` = `AttackRangeComponent
     .defaultForEntity(LivingEntity)`; `comp_5261` = `maxRange` (float record
     accessor); `method_58694` = `get(ComponentType)`.
   - `method_5779` = `Entity.isPartOf(Entity)`; `method_18456` = getPlayers;
     `Stream`+`findAny`+`parallelStream` — player scan.
   - `class_3966` = EntityHitResult (`cHn ()Lnet/minecraft/class_3966;`).
   - `class_2874` = DimensionType + `method_8597` getDimension +
     `class_1511` EndCrystalEntity + `dlY ()Lsixtwo/qR;` (Crystal Aura `qR`
     singleton) — the window **tail** belongs to the neighboring eW program
     (dimension/crystal cluster), not eG.
   - `dbj (Lsixtwo/oI;ZLsixtwo/gg;)Z` — slot-arbitration request (oI slot
     wrapper, qJ-family manager `rD.dlZ()`): request a hotbar switch charged
     to this module.
   - `cGV ()Lsixtwo/ox;` / `cHe (D)Lsixtwo/ox;` — `ox` rotation-request
     builders (double parameter = yaw or range); `cHg` — rotation-family
     member.
   - `sixtwo/gY|bcn`, `sixtwo/hw$tv|dps|bco|TbGmd|bdm|dpt` — event/velocity
     helper members (unattributed; hw$tv is a marker event subclass of the
     `hw` family).
5. Decrypted constants: setting names decoded from the constructor
   (full-dump `sixtwo.eG` ints — names match the module md: Activation Key,
   Change Armor, Restore Armor, Start Flying After Restore, Return Back,
   Return Delay). The `xSSxj` unit string `SOwbe` (static String, decrypted
   natively) is unrecovered — almost certainly `" ms"` (unproven).

## Runtime model

- **Events** (`@hG`, via `gg.YO()` → `hF.bdM`):
  - `awV(gA)` [18c8a7b60] — **input event** (`gA` = MouseInput+KeyInput+3
    ints): reads the `TZAhh` "Activation Key" (`cD` int, default `.VO(-999)` =
    unbound) — the manual lunge trigger.
  - `awU(gM)` [18c8a1b60] — bare tick/frame marker event `gM` — the automatic
    lunge loop (registry: "Automatically lunges with spear").
  - `awW(gH$th)` [18c906290] — pre-motion client-tick event (`gH$th` marker;
    per er.md this fires before `gv`/motion processing) — movement-phase
    worker (lunge application / restore timing).
  - `YO()` [18c8a1870] — listener re-registration override.
- **State**: three booleans `yLAeQ`, `UGYqg`, `xDsLg` (lunge state machine:
  e.g. lunge-armed / armor-swapped / restore-pending; only `xDsLg` is
  provably in-window). `cqIYc = new ol(this)` — per-module `ol` controller
  (`ol(gg)`; API `cER(cA)`, `cEP(int)`, `cEQ/cET` void, `cES/cEU` boolean,
  `cEO`, static `cEV(int)`) — the armor/step controller the Change Armor /
  Restore Armor settings feed.
- **Slot/armor swap path**: window tokens `awJ ()Lsixtwo/oI;` (slot lookup)
  and `awR` → `dbj (Lsixtwo/oI;ZLsixtwo/gg;)Z` — switch into the spear slot
  through the shared slot-arbitration manager; armor swap through `ol`.
- **Range gate** (window, attributed eG): the held stack must be in the
  SPEARS tag (`field_63257`), then its effective reach is read from the
  ATTACK_RANGE data component (`method_58694` on `field_64680`) with fallback
  `AttackRangeComponent.defaultForEntity(player)` (`method_76734`), and the
  lunge only fires while a candidate is within `comp_5261` (maxRange). The
  candidate scan uses the player stream + `Entity.isPartOf` (`method_5779`)
  and produces an EntityHitResult (`cHn`); a rotation request is built with
  the `ox` builders (`cGV`/`cHe`).

## Per-handler semantics

- **`awU (Lsixtwo/gM;)V` — auto-lunge tick [18c8a1b60]**. Core window.
  Contract: per tick while enabled, if the held item is a spear (SPEARS tag)
  and a target is within the spear's maxRange (ATTACK_RANGE component), start
  the lunge sequence: request the spear slot (`awJ` → `dbj`), swap armor if
  `erPcw` ("Change Armor", default off — no `.WE()` call, `cw`-family default)
  via `ol`, lunge (RegistryKey LUNGE trigger), then schedule restore. All
  arithmetic/sequence is VM bytecode — unrecovered.
- **`awV (Lsixtwo/gA;)V` — input handler [18c8a7b60]**. Core window. Contract:
  on the configured Activation Key press, force the same lunge sequence
  (manual trigger). Details unrecovered.
- **`awW (Lsixtwo/gH$th;)V` — pre-motion tick [18c906290]**. Core window.
  Candidate roles: apply lunge motion at the movement phase, run the
  Return-Back timer (`xSSxj`), trigger armor restore (`DvcwW`) and optional
  flight restart (`TMKfZ`). Unrecovered.
- **`awX ()V` [18c913280]** — void worker (restore/finish step; in-window).
  **`awZ ()V` [18c91df50]** — void worker (start/init step; in-window,
  immediately followed by `huQXo`/`axn` seed tokens). Distinction unrecovered.
- **`awY ()Z` [18c918b40]** — state query (lunge-active candidate). In-window;
  unrecovered.
- **`axk ()Ljava/lang/Boolean;` [18c8a2b50]** — visibility supplier wired as
  `TMKfZ.Vf(this::axk)` ("Start Flying After Restore" — visible iff some
  condition; likely Restore Armor on). Comparison unrecovered.
- **Setting getters** (pure jumptable stubs, no windows): `axa ()cD` → `TZAhh`
  [18c91e8d0]; `axb ()cJ` → `erPcw` or `DvcwW` [18c91ead0]; `axc ()cJ`
  [18c91ecd0]; `axd ()cJ` [18c8a1d50]; `axe ()cJ` [18c8a1f50]; `axf ()cA` →
  `xSSxj` [18c8a2150]; `axg ()ol` → `cqIYc` [18c8a2350]. The four `cJ`
  getters map 1:1 onto `erPcw/DvcwW/TMKfZ/lQVHc` but not by name.
- **State queries** `axh ()Z` [18c8a2550] / `axi ()Z` [18c8a2750] / `axj ()Z`
  [18c8a2950] — pure jumptable stubs (public boolean state flags —
  "is lunging"/"is swapped"/"can lunge" candidates, unrecovered).
- **Infrastructure**: `axl ([Lsixtwo/iS;)V`/`axm ()[Lsixtwo/iS;`
  [18c8a7850, 18c8a79d0] — static iS[] stash (decryptor scratch, set in ctor
  `eG.axl(new iS[3])`); `axn` [18c8b1e40] identity rethrow; `axo ([B)String`
  [18c8b1ed0] decoder; `axp (IJ)I` [18c8dc680] int decryptor (~540 lines MBA
  noise); `axq`/`axr` [18c8e77b0, 18c8e87c0] indy helpers; `_c0d0…` clinit
  [18c8eb4d0]; `YO ()V` [18c8a1870] (HUD-window ambiguity as in fr).

## Settings → behavior mapping

| field | setting | chain (verbatim) | behavior role |
|---|---|---|---|
| `TZAhh` | Activation Key | `cD(this, "Activation Key").VO(-999)` | manual lunge trigger key (default unbound) |
| `erPcw` | Change Armor | `cJ(this, "Change Armor")` (no `.WE()` — default off) | swap to lunge-friendly armor before lunging (via `ol`); visibility-gates `DvcwW` (`DvcwW.Vf(this.erPcw::WF)`, eG.java:206) |
| `DvcwW` | Restore Armor | `cJ(this, "Restore Armor")` (default off) | restore the original armor after the lunge |
| `TMKfZ` | Start Flying After Restore | `cJ(this, "Start Flying After Restore")` (default off), visibility supplier `axk` | re-engage flight (elytra) after armor restore |
| `lQVHc` | Return Back | `cJ(this, "Return Back").WE(true)` (default on) | return to the previous hotbar slot after the lunge |
| `xSSxj` | Return Delay | `cA(this, "Return Delay").UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(SOwbe)` — step 10, min 0, max 1000, **default range 50–100** | delay before the return swap; unit string `SOwbe` unrecovered (almost certainly `" ms"`); visibility-gated by `lQVHc` (`xSSxj.Vf(this.lQVHc::WF)`) |

Note `UI(50.0, 100.0)` — unlike fr's `UI(0.9, 0.9)` (equal = single default),
eG's default is a 50–100 range; combined with step 10 this reads as a
randomized delay between 50 and 100 ms — inference, not recovered logic.

## Unrecovered / uncertain

1. **All lunge mechanics**: how the LUNGE RegistryKey is triggered (ability
   packet/use key simulation), lunge direction/motion math, and the exact
   range comparison against `comp_5261` are VM bytecode.
2. **Window attribution**: head tokens (`Stream|findAny|sixtwo/eF|vfMSC`,
   `field_63257/63420`) vs tail tokens (`sixtwo/eW`, `class_2874`,
   `class_1511`, `dlY ()Lsixtwo/qR;`) — the tail cluster (dimension/
   end-crystal/Crystal Aura) is attributed to the neighboring eW program, the
   middle cluster (ATTACK_RANGE/SPEARS/isPartOf/ox/dbj/awI–awR) to eG. The
   `awI–awR` method names do not appear in eG's CFR shell — they are either
   unseen eG natives or neighbor members; flagged.
3. **`ol` controller semantics** — `cER/cEP/cEQ/cES/cET/cEO/cEU/cEV` are all
   native; which are armor-slot operations vs step callbacks is unrecovered.
4. **The three booleans' roles** (`yLAeQ/UGYqg/xDsLg`) — state-machine order
   unrecovered.
5. **`awX` vs `awZ`**, `awY`/`axh`/`axi`/`axj` flag identities, and the
   `cJ`-getter→field mapping within `axb/axc/axd/axe`.
6. **`sixtwo/hw$tv` + `dps/bco/TbGmd/bdm/dpt` and `sixtwo/gY|bcn`** — helper
   members shared in-window; owner and role unresolved.
7. **`SOwbe` unit string** and `axk`'s visibility condition.
