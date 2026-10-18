# Spear Double Tap (sixtwo.eI) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_eI.c` — 22 handlers, continuation blocks all generic VM trampolines.
- Structure/setting names: `analysis/specs/modules/eI.md`, `analysis/decompiled/payload-named/sixtwo/eI.java` (constructor fully decompiled).
- Single class pool window `POOL[0xe792,0x285]` (eI-exclusive, fully visible in annotation).
- Registry: `sixtwo.eI|Spear Double Tap|Performs spear and mace double tap|key=150|bind=-999`, category `gh.xwjCw` (combat).

## Runtime model

Detects own spear hit (via damage packets), then within the same attack cycle performs a second hit (mace-style), swapping armor (totem/armor protection swap, delegated to the `ol` controller) before/after the hit and optionally restoring it after "Return Delay".

Pool-derived MC surface (verbatim from `POOL[0xe792,0x285]`):

- `net/minecraft/class_8143` = `EntityDamageS2CPacket`, `method_49071` = `createDamageSource(World)`, `class_1282` = `DamageSource`, `method_5529` = `getAttacker`, `comp_1267` (damage-source component), `method_8469` = `getEntityById(I)` — packet event resolves damage packets to attacker/victim pairs to detect the spear hit.
- `method_76694` = `getActiveOrMainHandStack` — verifies the held item is the spear.
- `sixtwo/oh` singleton: `cCY ()Lsixtwo/oh;` + `ank ()Lsixtwo/mB;` — attack/hit-event tracker consulted for hit timing.
- Cross-module: `sixtwo/eL` tokens (`aAP`, `pAkkC`, `azr`, `anh`, `LNtEX`, `ddo`, `ofjNs`) — eI cooperates with the sibling spear module eL (relationship direction unrecovered).
- Armor controller: `otZOf = new ol(this)` (per-module `ol` armor/step controller instance) with `Eppcp` (Return Delay cA) feeding it.
- Public accessors `ayc/ayd/aye/ayf/ayg/ayh/ayi` expose the settings + `ol` controller to other modules (e.g. eL/eN coordination); `ayj()` is the public "engaged" predicate; `ayk()` returns the remembered target `yWkAS` (PlayerEntity).

## Per-handler semantics

All bodies are decrypt-preamble → VM dispatch; semantics = token contract.

- `YO()` [18c79da40] — listener registration (`gM` frame, `gL.tk` packet, `gH.th` pre-motion).
- `axX(gM)` [18c79dd30] — frame event: state-machine heartbeat (touching `NLSbB`, settings, `ol` controller).
- `axY(gL.tk)` [18c7d86d0] — packet event: parses `EntityDamageS2CPacket` → `createDamageSource` → `getAttacker`/`getEntityById` to detect the spear hit and capture the victim into `yWkAS`.
- `axZ(gH.th)` [18c7fbc50] — pre-motion tick: executes the double-tap (hit timing per "After Spear Hit"/"Before Mace Hit" options), armor swap/restore via `ol`.
- `aya()` [18c80aff0], `ayb()` [18c80bae0] — sequence steps (armor change / return; split unrecovered).
- `ayc()` [18c80bdf0] → `tOxMr` (Change Armor cJ), `ayd()` [18c80bff0] → `yTUFP` (Armor Change Timing ct), `aye()` [18c80c1f0] → `TEwfc` (After Spear Hit cu), `ayf()` [18c80c3f0] → `cKxMx` (Before Mace Hit cu), `ayg()` [18c79df20] → `ytGpS` (Return Back cJ), `ayh()` [18c79e120] → `Eppcp` (Return Delay cA), `ayi()` [18c79e320] → `otZOf` (ol controller) — plain getters for cross-module access.
- `ayj() Z` [18c79e520] — engaged/active predicate (public).
- `ayk() PlayerEntity` [18c79e720] — target getter (`yWkAS`).
- `ayl` (MatchException trap) [18c79e920], `aym/ayn/ayo/ayp` [18c79e9b0/18c7c9550/18c7d49b0/18c7d59c0] — j2cc decrypt boilerplate.

## Settings → behavior mapping

| setting (decoded) | field | wrapper / chain (verbatim) | behavior role |
|---|---|---|---|
| Change Armor | tOxMr | `cJ` (no `.WE` call — default off) | master switch for armor swapping |
| Armor Change Timing | yTUFP | `ct` group; `.Vf(tOxMr::WF)` (visible only when Change Armor) | container group |
| After Spear Hit | TEwfc | `cu` child of yTUFP | swap armor right after the spear connects |
| Before Mace Hit | cKxMx | `cu` child of yTUFP | swap armor before the second (mace) hit |
| Return Back | ytGpS | `cJ .WE(true)` | restore armor after the cycle (default on); Return Delay visible only when on |
| Return Delay | Eppcp | `cA .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(GGWXd)` | step 10, min 0, max 1000, randomized default range 50–100; suffix = static `GGWXd` (bsm-decrypted, unit unproven) |

## Unrecovered / uncertain

- All bodies virtualized; the double-tap hit timing (exact tick offsets vs the damage packet arrival), the hit-execution path, and which `ol` steps run are unrecovered — do not guess.
- "Mace" mechanics: no mace item token in the pool; the second hit's weapon/hand handling is unrecovered (pool only shows `getActiveOrMainHandStack`).
- `sixtwo/oh`/`mB` and `sixtwo/eL` token roles (`aAP`, `pAkkC`, `ddo`, `ofjNs`, `azr`, `anh`, `LNtEX`) are unattributed beyond module adjacency.
- Pool tokens `cVOuO`/`DbUgs`/`EIfSb`/`DQsrd`/`axU`/`axQ`/`cGX` are undecoded synthetic names.
- `comp_1267` (DamageSource record component) identity unresolved (attacker-id vs type flag); slot ordering of the two `cu` options ("After Spear Hit" first per md name order) is assumed.
