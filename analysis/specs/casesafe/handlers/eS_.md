# Auto Stun Slam (sixtwo.eS) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/eS` ("Auto Stun Slam" — registry: "Breaks
opponent's shield and proceed to slam with mace"), derived from native handler decompiles,
decrypted-token evidence and CFR helper sources. Companion to `analysis/specs/modules/eS.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_eS.c` | PRIMARY: 35 native handler decompiles (all dispatcher stubs into the j2cc VM) |
| `analysis/decompiled/payload-named/sixtwo/eS.java` | constructor wiring (fully decompiled: settings, fields, event targets) |
| `analysis/decompiled/payload-named/sixtwo/eP.java`, `oW.java`, `oY.java`, `ol.java` | combat-plan engine + slot-switch helper eS plugs into |
| `analysis/specs/modules/eS.md` + `analysis/decrypted/full-dump.jsonl` | setting display names; suffix literal `" blocks"` (bsm `aDq`, args `[23673, …]`) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | `method_66281` → `LivingEntity.stopGliding()` |

Handler → pool-blob usage map (POOL base rva `0x301ee40`):

| Blob (off,len) | Handlers |
|---|---|
| `0xf558,0x29d` | every behavior handler: `aCN aCO aCP aCQ aCR aCS aCT aCU aCV aCW aCX aCY` — shared interpreted-body pool (window straddles into the eP/eQ/eT mace-cluster token run) |
| `0x3806,0xbf` | `YO` — module base slice, shared `gc`/`gd {ipLAD,zlSAY}` tick-gate enum |
| `0x857,0x26` | indy bootstraps (`aDq`/`aDt` bsm tables) |
| `0x226,0xd` | `_6c3f9fef805ed141ce14c78ae08c1661` class-init |

The `0xf558` blob is decrypted by every behavior handler, followed by `JNI->ExceptionCheck`
and an indirect jump into the shared VM interpreter (`UNK_181d3fdd0`-family tables →
`FUN_190dd72e0` cluster). Zero fp/behavior ops survive statically; per-handler semantics below
are the recoverable API contract only.

## Runtime model

eS is a client-side combat module coordinated by the **eP (Mace Aura) attack-plan engine**:

- Own attack-plan record: `sixtwo/oW` — holds target `LivingEntity`, an `ov` movement
  engine handle, the owning `gg` module, floats `VmFjJ`/`ImLms`, sub-plans `pa$vq`/`pb$vr`/
  `qN$vO`, int `NPnTK`, and 7 booleans. Built through static factory `oW.cLd(LivingEntity,
  ov, gg) → oW$vp` with chained setters `oW$vp.dwX(F)` and `oW$vp.dxf(Z)`, finalized by
  `oW$vp.dxk() → oW` [pool `0xf558`; `oW.java`].
- Plan executor: `sixtwo/oY` — holds `pa` + `pb` sub-engines, subscribes `@hG cLO(gM)`,
  validates plans via `cLT(oW) → Z` (plus private `cLU/cLV/cLW/cLX(oW)`, entity checks
  `cLQ(Entity) → Z` / `cLR(Entity) → Z`) [pool `0xf558`; `oY.java`].
- Point/rotation math inside plans is the shared `pe` point engine
  (`pe.cNa(Entity, ov, Vec3d, ph, F, Z) → Vec3d`, `ph.cNl(I) → ph`).
- Cross-module handoff (same pool window, owners confirmed via `eP.java` declarations):
  `eP.aBG(LivingEntity, eQ)V`, `eP.aBH(LivingEntity) → oW`, `eP.aBF(eQ, Z, qL) → ov`,
  `eP.aBE(Z, eQ)V`, `eP.aBD(eQ)V`, `eP.aBO(LivingEntity, ov, qL)V`, `eP.aBN() → Z` —
  i.e. eS participates in the same mace-slam orchestration as eQ "Mace Elytra Target"
  (`eP.aBH` returns an `oW` plan for a LivingEntity). `eT.aDw(PlayerEntity) → Z` is a
  sibling eligibility check in the same window.
- `LivingEntity.stopGliding()` (`method_66281`) appears in the shared window — the slam
  sequence cancels elytra gliding before/during the mace strike (matches eQ's elytra-mace
  combo) `[0xf558 window, token 'method_66281']`.

Module state (`eS.java` constructor, fully decompiled):
- `cVZni : ol` — hotbar/inventory slot-switch helper instance (`ol(gg)`; owns its own `mT`
  timer `NkPYR`, `boolean HnMZs`, `int CMPIc = -1` selected slot; static int registry
  `cEV/cEW/cEX`), exposed via `aDg()`.
- `Dwgkb : mT` — stopwatch (`mT.cpz()`), exposed via `aDh()`.
- `VYWYG : mW` — 2-flag state ticker, exposed via `aDi()`.
- `cRMrD`, `EiuGH : boolean` — phase flags (native-driven; `JNI->SetBooleanField` appears
  in continuations).
- `UKQaD : int = -1` — phase/target index (native-driven; `JNI->SetIntField` present).

## Per-handler semantics

Trivial accessors `[18be50cc0–18be73d70]` (one per field: `aCZ→ct Trigger`, `aDa→cu`,
`aDb→cu`, `aDc→cJ Change Armor`, `aDd→cC irxdG`, `aDe→cA Return Delay`, `aDf→cC FXDzg`,
`aDg→ol`, `aDh→mT`, `aDi→mW`, `aDj/aDk→Z`, `aDl→I`) plus string/indy infra
(`aDm–aDt`, class-init `_6c3f9fef…` `[18bec3440]`, `YO` toggle `[18be3f3f0]` over the
shared `gc`/`gd` tick-gate slice) are boilerplate. Behavior handlers, all dispatcher stubs
over `POOL[0xf558,0x29d]`:

- `aCN(gM)` `[18be3f6e0]`, `aCO(gZ$tt)` `[18be6e2e0]`, `aCP(gH$th)` `[18bea5180]` — the three
  subscribed events (marker tick / attack-click / pre-motion tick). `aCO` is the entry point
  for the "On Attack" trigger path; `aCN`/`aCP` drive the slam state machine and the `ol`
  slot-switch timers.
- `aCW(LivingEntity) → Z` `[18be3f8d0]` — public predicate consumed by the eP engine
  (the same `(Lnet/minecraft/class_1657;)Z` ref appears in eP/eQ/eT pool windows): "is this
  living entity a valid stun-slam victim" (shield check / mace-in-hand gate).
- `aCQ(PlayerEntity) → Z` `[18bedf500]`, `aCU(PlayerEntity) → Z` `[18bef10e0]` — private
  player predicates (shield-up check and eligibility/success check; exact split native-blocked).
- `aCR(PlayerEntity) → V` `[18bee9cb0]` — private act-on-player step (shield break / attack
  dispatch against the held target).
- `aCS()V` `[18bef0320]`, `aCT()V` `[18bef0790]`, `aCV()V` `[18bef6fc0]` — private state-machine
  steps (arm/execute/return phases over `cRMrD`/`EiuGH`/`UKQaD`).
- `aCX() → Z` `[18be45400]`, `aCY() → Z` `[18be4b700]` — public status probes (exposed to
  consumers; exact meaning native-blocked).

## Settings → behavior mapping

Constructor chains verbatim (encrypted name arrays resolved per `modules/eS.md`):

| Field | Widget | Chain |
|---|---|---|
| `ZPhzU` | `ct` group | `new ct(this, mr.clS(names))/*.SO(0)` — **"Trigger"** group, index 0 |
| `eQeWA` | `cu` child | child of Trigger — 4-entry name array; option list for the Trigger selector (individual entries not decrypted; **"On Attack"** is one of them) |
| `ZDYKK` | `cu` child | second child of Trigger — 8-slot sparse name array (option list; contains **"On Attack"** among ~6 entries) |
| `dVnxZ` | `cJ` bool | **"Change Armor"** → `.WE(false)` (default off) |
| `FXDzg` | `cC` numeric | **"Min Fall Distance"** → `.Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz(" blocks")` (suffix decrypted `" blocks"`, bsm `aDq` args `[23673, 8519540645019550200]`) |
| `GEHFQ` | `cA` numeric | **"Return Delay"** → `.UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms")` |
| `irxdG` | `cC` numeric | **"Chance"** (name from decrypted list; field not statically bound) → `.Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz("%")` |

Mapping to behavior (names + recovered engine surface; exact gates native-blocked):
- Trigger option lists select when the stun-slam arms (attack-click event `aCO` for
  "On Attack"; the `mW` ticker + `mT` stopwatch gate the timed path).
- `Min Fall Distance` (0.0–12.0 blocks, step 0.1, default 1.5) gates the mace slam on
  required fall height — combined with the `stopGliding()` reference, the sequence drops
  the player onto the target.
- `Return Delay` (0–1000 ms, step 10, dual default 50/100) feeds the `ol`/`mT` timers that
  restore the previous state (slot/armor) after the slam.
- `Chance` (1–100%, default 100) probabilistically gates slam execution.
- `Change Armor` (default off) enables the `ol` slot-switch path to swap armor as part of
  the sequence.

## Unrecovered / uncertain

- All arithmetic/comparisons live in the j2cc VM; no fp ops survive — exact trigger
  conditions, fall-distance comparison, chance roll, and slam timing are unknown.
- The two Trigger option lists (`eQeWA`, `ZDYKK`): individual option display names are not
  in the decrypted dump beyond "On Attack"; their array sizes (4 and 8-slot sparse) are exact.
- "Chance" / "Min Fall Distance" field-name binding is inferred from ranges/suffixes
  (`%`, `" blocks"`) since the constructor does not bind the names statically.
- Exact split between `aCQ`/`aCU` predicates, the roles of `aCX`/`aCY`/`aDl`, and the
  meaning of `UKQaD`'s int phases are native-blocked.
- `aBG`/`aBH` etc. are private natives of `eP` (confirmed via `eP.java`), so eS ↔ eP
  coupling is real, but the exact call direction through the VM (eS→eP privates vs
  eP→`eS.aCW`) is not fully separable from the shared pool window.
