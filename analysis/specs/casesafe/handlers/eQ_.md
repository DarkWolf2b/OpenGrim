# Mace Elytra Target (sixtwo.eQ) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/eQ` ("Mace Elytra Target" — registry:
"Follows target using firework and hits it with mace"), derived from native handler
decompiles, decrypted tokens and CFR sources. Companion to `analysis/specs/modules/eQ.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_eQ.c` | PRIMARY: 31 native handler decompiles (dispatcher stubs) |
| `analysis/decompiled/payload-named/sixtwo/eQ.java` | full constructor: settings, dependency wiring, state, `eP.aBU()`/`eP.aBT(new int[4])` registration |
| `analysis/decompiled/payload-named/sixtwo/hw.java`, `hw$tv.java`, `hw$tw.java` | entity-event semantics (both carry an `Entity`; `hw$tv` adds a handled flag `dps()/dpt()` initialized from `oX.cLK()`) |
| `analysis/decrypted/full-dump.jsonl` (bsm `aCB` `"n"`) | numeric suffixes: `[9669,…] → " blocks"`, `[11589,…] → " ticks"` |
| `analysis/specs/handlers/eP.md` | the Mace Aura orchestrator eQ registers into |

Handler → pool-blob usage map (POOL base rva `0x301ee40`):

| Blob (off,len) | Handlers |
|---|---|
| `0xf47e,0x29b` | 7 behavior handlers (`aCd aCe aCf aCg aCh aCi` + probes) — shared mace-cluster window (eP/eS/eT/oW/oY/pe tokens; identical window appears in `sixtwo_eS.c`/`sixtwo_eT.c`) |
| `0x3806,0xbf` | `YO` — module base slice (`gc`/`gd` tick-gate enum) |
| `0x857,0x26`, `0x226,0xd` | indy bootstraps / class-init |

Tokens in the shared window owned by eQ itself: `aBD(eQ)V`, `aBE(Z,eQ)V`,
`aBF(eQ,Z,qL)→ov`, `aBO(LivingEntity, ov, qL)V`, `aBN()Z` — wait, these are **eP**
privates (confirmed by `eP.java` declarations) operating on eQ instances; eQ's own
referenced members are the `aCk → cu` getter plus its fields. The window's engine surface:
`eP.aBG(LivingEntity, eQ)V` (hand a target to the orchestrator), `eP.aBH(LivingEntity) →
oW` (build an attack plan), `eT.aDw(PlayerEntity) → Z`, `eS.aCW(PlayerEntity) → Z`
(sibling eligibility checks), `oW.cLd(...)`/`oW$vp.dwX(F)/dxf(Z)/dxk()` plan builder,
`oY.cLT(oW) → Z` validator, `pe.cNa(...)`, `LivingEntity.stopGliding()` (`method_66281`).

## Runtime model

- eQ tracks a target entity (carried by `hw$tv`/`hw$tw` events) and, while gliding on
  elytra, follows it with firework boosts, then dives to hit with a mace. Movement
  solves go through the `pe` point engine (`pe.cNa(Entity, ov, Vec3d, ph, F, Z) → Vec3d`)
  and the `ov`/`qL` rotation/attack handles returned by `eP.aBF(eQ, Z, qL) → ov`.
- Plans are `oW` records built via `eP.aBH(LivingEntity) → oW` /
  `oW.cLd(LivingEntity, ov, gg) → oW$vp` and validated/executed by the shared `oY`
  executor (which itself ticks via `@hG oY.cLO(gM)`).
- `eP.aBU()` is called in the constructor and `eP.aBT(new int[4])` lazily — registration
  with the Mace Aura orchestrator (same integration as eS "Auto Stun Slam").
- State: `lRUvL : mT` stopwatch (firework/boost cooldown timing, exposed via `aCu()`),
  `dAcnc`, `gzCSp : boolean` phase flags.

## Per-handler semantics

Accessors `aCj–aCt` `[18bfc1710–18bf3f130]`, probes `aCv()→Z` `[18bf3f530]`,
`aCw()→Z` `[18bf48360]`, private `aCi()→Z` `[18bfbb260]`, infra (`aCA–aCE`, class-init
`_653fe65b…` `[18bf8e1f0]`, `YO` `[18bf3de80]`) are boilerplate. Behavior handlers, all
dispatcher stubs over `POOL[0xf47e,0x29b]`:

- `aCd(gM)` `[18bf3e140]` — marker tick: follow/boost state machine.
- `aCe(gH$th)` `[18bf3f730]` — pre-motion tick: flight/rotation adjustments.
- `aCf(hw$tv)` `[18bfa9ee0]` — cancellable entity event: target selection/override
  (can consume the event via the `hw$tv` handled flag).
- `aCg(hw$tw)` `[18bfb3100]` — plain entity event: secondary target reaction
  (acquire/drop; exact pairing native-blocked).
- `aCh(gA)` `[18bfb7610]` — input event: services the **"Firework Key"** bind
  (`zMwsj`, default −999 unbound) for the "On Bind" firework mode.

## Settings → behavior mapping

Constructor chains verbatim (names from `modules/eQ.md` decrypted list):

| Field | Widget | Chain | Setting |
|---|---|---|---|
| `SSNbc` | `ct` group | no `.SO()` | **"Hit Mode"** |
| `PeaJE` | `cu` child | — | **"Armor Swap"** option |
| `QeZfw` | `cu` child | — | **"Force Smash"** option |
| `OQBdr` | `cC` | `.Vy(0.1).Vw(7.0).Vx(25.0).VA(12.0)` (no suffix) | numeric — **"Follow Distance"** or "Firework Cooldown" (see uncertain) |
| `LXEid` | `cC` | `.Vy(1.0).Vw(0.0).Vx(100.0).VA(15.0).Vz(" blocks")` | numeric with **" blocks"** — **"Follow Distance"** (unit-consistent attribution; see uncertain) |
| `dgFao` | `ct` group | — | **"Firework Use Mode"** |
| `QVqek` | `cu` child | 4-entry list | option of Firework Use Mode |
| `ALqGX` | `cu` child | **"On Bind"** | option of Firework Use Mode |
| `acbMp` | `cu` child | 4-entry list, `.SY()` default marker | default option of Firework Use Mode |
| `maIlI` | `cC` | `.Vy(1.0).Vw(0.0).Vx(60.0).VA(10.0).Vz(" ticks")` | **"Fly Up For"** (0–60 ticks, default 10) |
| `zMwsj` | `cD` keybind | `.VO(-999)` | **"Firework Key"** |

Constructor dependency wiring (exact):
- `zMwsj.Vf(this.ALqGX::SZ)` — "Firework Key" only visible when Firework Use Mode is
  "On Bind".
- `maIlI.Vf(this.acbMp::SZ)` — "Fly Up For" only visible for the default (unnamed)
  Firework Use Mode option.

Behavior mapping (gates native-blocked): the module keeps distance "Follow Distance"
blocks from the target while elytra-flying, uses fireworks per the selected "Firework
Use Mode" (auto list option / "On Bind" key, honoring "Firework Cooldown"), climbs for
"Fly Up For" ticks when the default mode is active, optionally swapping armor ("Armor
Swap") before the dive, then performs the mace smash ("Force Smash" variant selected
under "Hit Mode"); `stopGliding()` is available in the shared engine window for the
dive handoff.

## Unrecovered / uncertain

- All flight math (boost vectors, dive trajectory, mace hit trigger) lives in the j2cc
  VM — unrecoverable; only the engine calls listed above are proven.
- Numeric setting attribution is ambiguous between `OQBdr` (7.0–25.0, step 0.1, default
  12.0, unitless) and `LXEid` (0.0–100.0, step 1.0, default 15.0, suffix `" blocks"`):
  the two remaining numeric names are "Follow Distance" and "Firework Cooldown".
  Primary attribution above is unit-consistent (`" blocks"` → Follow Distance); the
  alternative (OQBdr = Follow Distance 7–25 def 12; LXEid = Cooldown with a mis-suffixed
  unit) cannot be excluded.
- `QVqek` and `acbMp` are 4-entry Firework Use Mode option lists whose display names are
  not individually decrypted (only "On Bind" is).
- `hw$tv` vs `hw$tw` event semantics (acquire vs release target, or damaged vs attacked)
  are not separable statically; `hw$tv`'s handled flag can cancel propagation.
- Roles of probes `aCv`/`aCw`/`aCi` and the two phase booleans are native-blocked.
