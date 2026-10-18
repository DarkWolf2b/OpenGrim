# Double Tap (sixtwo.eM) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_eM.c` — 4 handlers (class-init `_00a84fada65ad00e7d3bea41bbe99f6a`, `aAY(hw$tv)`, `aAZ(gH$th)`, `aBa`) + 35 continuation blocks, 0 unresolved table targets; 5 jump-table targets missing from `tables.json` (`0x1a718`, `0x1dd9ca8`–`0x1ddd6d8`). Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff3d3xxxxx`/`6ffff3d4xxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/eM.java` — fields `boolean XOnBS`, `mT Zrjec` (init `mT.cpz()` in ctor); static seeds `oIeWA`/`Nsfxs`; natives: class-init, `aAY(hw$tv)` `@hG(priority=mw.HIGH)`, `aAZ(gH$th)` `@hG` (NORMAL), `aBa(MatchException)`.
- Structural spec: `analysis/specs/modules/eM.md`; registry row: `sixtwo.eM|Double Tap|Performs Aerial D-Tap automatically|key=121|bind=-999`; category `gh.xwjCw` = **Combat** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny`; pool re-resolution via `analysis/tools/resolve_pool_blob.py` (pool base RVA `0x301ee50`).
- Decrypted constants: **no `sixtwo.eM` entries in `analysis/decrypted/full-dump.jsonl`**.
- Cluster context: `analysis/specs/handlers/eP.md` (Mace Aura — window `0xf325`, shared `LuzRg/aBU` static array, `og`/`pe` helpers) and `analysis/specs/handlers/eN.md` (Mace Swap — window `0xf34d`, `FtkJb` `ol` armor controller, eQ attack pipeline `aBD/aBE/aBF/aBO/aBG/aBH`).
- Event semantics: `hw$tv` = attack event `(Entity)` with one-shot cancel flag `VibZH` (`dps()` read / `dpt()` set) `[decompiled hw.java/hw$tv.java]`.

### Recoverability caveat

Both listeners decrypt the same window `[0xf315,0x297]` into the VM. eM's stub-matched tokens are 6; the rest of the window is the shared mace-cluster pipeline. Zero float literals survive.

## Runtime model

- `eM extends gg`. Constructor `[decompiled eM.java:9-12]`:
  - `long var1 = oIeWA ^ 123810452278406L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)Nsfxs, false, gh.xwjCw))` — module id runtime-decrypted (registry: **121**), flag `false`, category **Combat** `[decompiled + registry]`.
  - `this.Zrjec = mT.cpz()` — a millisecond timer (`mT.cpC(long)` = `System.currentTimeMillis() - vJZlo - l2 > 0`; `cpB()` resets) `[decompiled + mT.java]`.
- Two listeners: `aAY(hw$tv)` at **HIGH** priority (early intercept of the attack pipeline) and `aAZ(gH$th)` (pre-motion tick, NORMAL) `[decompiled]`.
- No settings constructed (see Settings section) `[decompiled]`.
- **Window layout** `POOL[0xf315,0x297]` (starts at `class_token − 0x20` = `0xf315`; end `0xf5ac`). Per-token offsets (partial):
  - Prefix `[0xf315,0xf335)` — tail of eL's run: `HIiGm`, `byoBS`, `IthPd`, `sudfc`, `aAR`, `aAV` (obfuscation-only; none stub-matched to eM) `[slice]`.
  - **eM's own (stub-matched)**: `sixtwo/eM` `[0xf335]`, `oIeWA` `[0xf33f]` (seed), `aBa` `[0xf353]` (rethrow name), `XOnBS` `[0xf35b]` (the boolean), `Zrjec` `[0xf367]` (the mT timer), `Nsfxs` `[0xf37d]` (seed 2).
  - **Cluster references in-window** (attribution to named siblings per their stubs and specs):
    - `sixtwo/eP` `[0xf345]` + `aBU` `[0xf34f]` — eP's `public static native int[] aBU()` returns the shared static config array `LuzRg` (set once via `eP.aBT(int[])`); eM reads the cluster's shared configuration through it (eP.md: "seeded from `aCc<"j">` key-constants") `[stub match eP.java:36-48]`.
    - `sixtwo/eN` `[0xf36d]` + `FtkJb` `[0xf377]` — eN's `ol` armor/controller field (public getter `eN.aBk()`); eM participates in the swap-restore cycle `[stub match eN.java + eN.md]`. eN's settings tokens (`DrFpA`, `RajOD`, `Mazxu`, `tjNtC`, `EifDU`, `AhcDq`, `PxteY`) also sit in-window `[0xf38d–0xf3b7]` — readable state for the Double Tap decision or over-coverage of eN's run; flagged `[uncertain]`.
    - `sixtwo/eO` `[0xf3ff]` (Auto Pearl Catch), `field_49814` `[0xf3f3]` = `Items.MACE`, `field_49098` `[0xf41f]` = `Items.WIND_CHARGE` — the two combo items `[tiny]`.
    - `sixtwo/eQ` `[0xf49e]` (Mace Elytra Target — the shared attack-sequence component) + pipeline descs: `aBD (Lsixtwo/eQ;)V` `[0xf4b0]`, `aBE (ZLsixtwo/eQ;)V` `[0xf4cd]`, `aBF (Lsixtwo/eQ;ZLsixtwo/qL;)Lsixtwo/ov;` `[0xf4e1]` (aim computation → `ov` rotation), `aBO (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V` `[0xf510]` (execute attack on `LivingEntity` with rotation + `qL` rotation manager), `aBG (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V` `[0xf586]`, `aBH (Lnet/minecraft/class_1309;)Lsixtwo/oW;` `[0xf5b3→]` (per-target slot/stack finder `oW`) — identical descs documented as eN's pipeline in eN.md; cluster-shared `[tiny + eN.md]`.
    - `sixtwo/eT` `[0xf548]` + `aDw (Lnet/minecraft/class_1657;)Z` (player check), `sixtwo/eS` `[0xf578]` + `aCW`/`aBG`; `NTGZO` `[0xf50a]`/`rqlbi` `[0xf4c9]` — eP's private phase booleans (stub-matched eP.java) — readable cluster state; flagged `[uncertain]`.
    - `Lnet/minecraft/class_1309;` `[0xf483]` = `LivingEntity` (target type) `[tiny]`.
    - Undeclared obfuscated tokens: `DpyXs` `[0xf361]`, `aAO` `[0xf357]`, `aBU`-adjacent `aYA/aYB/…`-family names — VM-internal or scattered; unrecovered `[uncertain]`.
- Contract: Aerial D-Tap = the wind-charge → mace smash combo executed automatically. The HIGH-priority attack listener intercepts the player's attack; the tick listener drives the state machine (`XOnBS` phase flag + `Zrjec` timer) that decides when to launch the target with a wind charge and land the mace hit, using the shared eQ attack pipeline, eN's swap controller, and the shared `eP.aBU()` config array `[inferred from registry + run]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_00a84fada65ad00e7d3bea41bbe99f6a()V` | `[18c137700]` | `[0x226,0xd]` | class-init stub |
| `aAY(Lsixtwo/hw$tv;)V` | `[18c12a500]` | `[0xf315,0x297]` | attack-event listener, priority HIGH |
| `aAZ(Lsixtwo/gH$th;)V` | `[18c130e80]` | `[0xf315,0x297]` | pre-motion tick listener (state machine) |
| `aBa(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18c137670]` | — | identity rethrow |

- **class-init [18c137700]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck` (vtable `0x720`), dispatch `UNK_181ddc820[(cVar1=='\0')*8]` at `18c1377df`. No module behavior `[decompiled]`.
- **`aAY(Lsixtwo/hw$tv;)V` [18c12a500]** — attack-event listener at HIGH priority. Decrypts `POOL[0xf315,0x297]`, `ExceptionCheck`, dispatch `UNK_181dd84c0` at `18c12a5f6`. Virtualized body. Determinable surface: the attack event's target entity (`hw.bdm()`), the mace/wind-charge item tokens, and the eQ attack pipeline descs — i.e. on each attack the module decides whether this hit is the D-Tap trigger and may drive the combo through the shared pipeline `[slice, inferred]`. The `dpt()` cancel flag of `hw$tv` suggests the original attack can be suppressed and replaced; whether eM cancels is VM-resident `[uncertain]`.
- **`aAZ(Lsixtwo/gH$th;)V` [18c130e80]** — pre-motion tick listener. Same slice, dispatch `UNK_181dda580` at `18c130f77`. Virtualized body; determinable surface: the `mT` timer (`Zrjec.cpC/cpB`) and `XOnBS` phase boolean — the tick-side state machine (arming the combo, timing the wind-charge launch vs mace hit, cooldown) `[slice, inferred]`. All timing constants unrecovered `[uncertain]`.
- **`aBa(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18c137670]** — `return param_3;` identity rethrow `[decompiled]`.
- Continuation blocks (35): generic `ExceptionCheck`/`IsInstanceOf` (`0x100`) dispatchers; `ExceptionOccurred` + decrypt re-entry; `CallStaticObjectMethodA` (`0x3a0`); `ThrowNew` (`0x70`) thunks; `swi(3)` trampolines. No module-specific logic beyond plumbing `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `eM.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)Nsfxs, false, gh.xwjCw))` + `Zrjec = mT.cpz()` `[decompiled eM.java:9-12]`.
- No `full-dump.jsonl` entries for eM (0 indy sites) — no hidden setting names recoverable `[decompiled absence]`.
- Consequence: eM is the only module of the mace family (eN/eP/eQ) with **no Java-visible settings**; its tunables must be either hard-wired VM constants or the shared `eP.aBU()` int-array config (`LuzRg` — seeded from eP's indy key-constants, so its values ARE decryptable in principle but no eM entry exists in the dump) `[inferred]`.

## Unrecovered

1. **Module id 121** — registry-sourced; `(int)Nsfxs` has no dump verification.
2. **Combo decision logic** — trigger conditions (target airborne? holding mace? wind charge in inventory?), hit order, and every timing constant: fully VM-resident.
3. **`eP.aBU()` (`LuzRg`) semantics** — the shared int[] is written by eP (`aBT`) and read here; the meaning of its slots is unrecovered (no eM/eP dump entries; eP.md lists it as VM-seeded).
4. **Whether `aAY` cancels the original attack** (`hw$tv.dpt()` usage) — no cancel-flag token in the run.
5. **Attribution of eN's settings tokens inside eM's window** — readable state vs. over-coverage of eN's run; flagged (see Runtime model).
6. **Undeclared symbols** `aAO`/`DpyXs`/`aAR`/`aAV`/`HIiGm`/`byoBS`/`IthPd`/`sudfc` — VM-internal or scattered; unrecovered.
7. **Flag `false` in `gf.aZL(121, false, gh.xwjCw)`** — meaning unrecovered.

## Shared helpers cited (one line each)

- `mT` — millisecond timer: `cpz()` factory, `cpC(long)` elapsed-check, `cpB()` reset `[decompiled mT.java]`.
- `og` — target scanner: `cCR(range, comparator)` keeps target while `jg.bBI` eye-to-box distance ≤ range, `cCP()` clears, `cCQ(Predicate)` filters `[decompiled og.java + eP.md]`.
- `pe` — attack-point solver (best hit point on target box) `[eP.md]`.
- `qL` — rotation manager: `dbD/dbH/dbJ(ov, mw, gg)` submit rotations with priority; `dbN(gH$th)` per-tick motion processor; `dbR/dbS` smoothing `[decompiled qL.java]`.
- `ol` — armor/item swap controller (eN's `FtkJb`) with timed restore `[eN.md]`.
- `oW` — per-target hotbar slot/stack finder (`aBH(LivingEntity) → oW`) `[eN.md]`.
- `ov`/`ot` — rotation (yaw/pitch) value holders used by the pipeline descs.
- `hw`/`hw$tv` — attack event: `bdm()` target, `dps()`/`dpt()` one-shot cancel flag `[decompiled hw$tv.java]`.

---
Confidence: MEDIUM on the API contract (6 stub-matched tokens + a fully-identified shared pipeline) and LOW on the combo logic itself (all decisions and timings VM-resident).