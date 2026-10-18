# Spear Dash (sixtwo.eH) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/eH` ("Spear Dash" — registry: "Automatically
dashes in given direction with spear"), derived from native handler decompiles, decrypted
tokens and CFR sources. Companion to `analysis/specs/modules/eH.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_eH.c` | PRIMARY: 33 native handler decompiles (dispatcher stubs into the j2cc VM) |
| `analysis/decompiled/payload-named/sixtwo/eH.java` | full constructor: settings, dependency wiring, fields, events |
| `analysis/decompiled/payload-named/sixtwo/rB.java`, `ol.java`, `eG.java` | movement-state enum, slot-switch helper, sibling "Spear Lunge" module |
| `analysis/decrypted/full-dump.jsonl` + `modules/eH.md` | setting display names |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | MC surface mapping (below) |

Handler → pool-blob usage map (POOL base rva `0x301ee40`):

| Blob (off,len) | Handlers |
|---|---|
| `0xe623,0x283` | all 10 behavior handlers (`axs axt axu axv axw axx axy axz axL axM axN axO` cluster) — shared interpreted-body pool |
| `0x3806,0xbf` | `YO` — module base slice (`gc`/`gd {ipLAD,zlSAY}` tick-gate enum) |
| `0x857,0x26`, `0x226,0xd` | indy bootstraps / class-init |

MC surface recovered verbatim from the shared window `POOL[0xe623,0x283]`:
`net/minecraft/class_8143` = `EntityDamageS2CPacket`, `method_49071` =
`EntityDamageS2CPacket.createDamageSource(World) → DamageSource` (class_1282 =
`DamageSource`), `comp_1267` = `entityId` (packet record component), `method_5529` =
`getAttacker() → Entity` (class_1297), `method_8469` = `World.getEntityById(int) → Entity`.

## Runtime model

- Spear-dash state machine with private fields `LEHlc`, `vtmes`, `jDAtT : boolean` and
  `DMfOE : double` (a position/offset accumulator — `JNI->Get/Set*Field` traffic in
  continuations; the `bxP (Z)D` member ref in the window suggests a state→double probe).
- Movement-state enum `sixtwo/rB` with constants `ahPNi`, `HbZxW`, `TfMBm`, `iSmge`
  (`rB.java`); obtained per-module via `cKp (Lsixtwo/gg;)Lsixtwo/rB;` [pool `0xe623`] —
  a per-module dash-phase marker (idle/dashing/return/…; constant meanings not decrypted).
- `ol zKCfJ` — per-module hotbar/inventory slot-switch helper (same class eS uses; holds
  its own `mT` timer and `int CMPIc = -1` slot), used for the armor swap/restore sequence
  (settings "Change Armor"/"Restore Armor"), exposed via `axK()`.
- Sibling coupling: `iS[] iSArray = eG.axm()` in the constructor with
  `if (iSArray == null) iS.bwK("h90Wjc")` — eH consults the shared registry of **eG
  "Spear Lunge"** (`eG.axm() → iS[]`, native); pool tokens `sixtwo/eI | ayb | HWETW | ayl`
  indicate further refs into eI.
- `EntityDamageS2CPacket` handling: `comp_1267 entityId`, `createDamageSource(world)`,
  `getAttacker()`, plus `World.getEntityById(int)` — the dash trigger/eligibility path
  resolves damage packets to entities (dash on being hit, or on hitting; direction chosen
  per settings) [pool `0xe623`].

## Per-handler semantics

Accessors `axA–axK` `[18c8a1670, 18c80cad0–18c80dcd0]`, status probes `axL/axM/axN`
`[18c818290, 18c818490, 18c818690]`, infra (`axP–axW`, class-init `_f2533e0…`
`[18c865ff0]`, `YO` `[18c80c5f0]`) are boilerplate. Behavior handlers, all dispatcher
stubs over `POOL[0xe623,0x283]`:

- `axt(gA)` `[18c80ded0]` — input event; services the **"Activation Key"** keybind
  (`esiKf`, default bind −999 = unbound): dash fires on key activation.
- `axu(gv)` `[18c85e010]`, `axs(gM)` `[18c80c8e0]`, `axv(gH$th)` `[18c882f10]` — client
  tick / marker tick / pre-motion tick: drive the dash movement, return phase and the
  `ol` armor-swap timers.
- `axw() → F` `[18c890f50]` — public float probe (dash progress/velocity factor; exact
  meaning native-blocked).
- `axx()V` `[18c8958e0]`, `axz()V` `[18c8a0cf0]` — private phase steps (dash / restore).
- `axy() → Z` `[18c89bd80]` — public status probe (dash active?).
- `axO() → Boolean` `[18c818890]` — dependency predicate used in constructor wiring
  (`LAEkI.Vf(this::axO)`): controls visibility of "Start Flying After Restore" from
  runtime state.

## Settings → behavior mapping

Constructor chains verbatim (names from `modules/eS`-style decrypted list, `modules/eH.md`):

| Field | Widget | Chain |
|---|---|---|
| `esiKf` | `cD` keybind | **"Activation Key"** → `.VO(-999)` (unbound default) |
| `pzTmJ` | `ct` group | **"Dash Direction"** → `.SO(0)` |
| `YlpsE` | `cu` child | **"Movement"** — child of Dash Direction (option list) |
| `MncIp` | `cu` child | **"Direction"** — child of Dash Direction (option list) |
| `gNXNZ` | `cC` numeric | **"Given Direction"** → `.Vy(1.0).Vw(-180.0).Vx(180.0).VA(0.0).Vz(<suffix>)` — degrees, step 1, −180…180, default 0 |
| `VjgnR` | `cJ` bool | **"Change Armor"** (no `.WE()` → default per cJ base) |
| `rxPTO` | `cJ` bool | **"Restore Armor"** |
| `LAEkI` | `cJ` bool | **"Start Flying After Restore"** |
| `gCPlB` | `cJ` bool | **"Return Back"** → `.WE(true)` (default on) |
| `fUesG` | `cA` numeric | **"Return Delay"** → `.UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms")` |

Constructor dependency wiring (exact, decompiled):
- `gNXNZ.Vf(this.MncIp::SZ)` — "Given Direction" is only relevant when the Direction
  option selects the manual ("Given") mode.
- `fUesG.Vf(this.gCPlB::WF)` (twice) — "Return Delay" only visible when "Return Back" is on.
- `rxPTO.Vf(this.VjgnR::WF)` — "Restore Armor" only visible when "Change Armor" is on.
- `LAEkI.Vf(this::axO)` — "Start Flying After Restore" visibility is a runtime predicate.

Behavior mapping (inferred; exact gates native-blocked): on Activation Key, if a spear is
held, dash along the configured direction (`Movement`/`Direction` options; "Given
Direction" degrees when manual), optionally swapping to armor ("Change Armor"/"Restore
Armor" via `ol`), then return to the origin (`DMfOE` accumulates the offset; "Return
Delay" ms wait; "Return Back" default true) and optionally re-enable flying ("Start
Flying After Restore").

## Unrecovered / uncertain

- All arithmetic lives in the j2cc VM: dash velocity/curve, exact `DMfOE` accumulation,
  packet send sequence, and the damage-packet trigger condition are unrecovered. The
  `EntityDamageS2CPacket`/`getEntityById` refs prove packet-driven entity resolution but
  not whether inbound damage triggers the dash or gates it.
- `rB` enum constant meanings (`ahPNi`, `HbZxW`, `TfMBm`, `iSmge`) not decrypted.
- `YlpsE "Movement"` / `MncIp "Direction"` option-list entry display names are not in the
  decrypted dump.
- Suffix strings of `gNXNZ` (bsm `axT` args `[23673, …]`) and `fUesG` (`[17316, …]`) —
  `" ms"` for the delay is taken from the identical eS setting; `gNXNZ`'s suffix unverified.
- Roles of `axL`/`axM`/`axN` probes and `axw()` float are native-blocked.
- Meaning of `sixtwo/eI` refs (`ayb`, `ayl`) and `eG.axm()`'s `iS[]` contents unknown.
