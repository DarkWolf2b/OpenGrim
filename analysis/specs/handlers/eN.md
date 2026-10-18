# Mace Swap (sixtwo.eN) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_eN.c` — 19 handlers, continuation blocks all generic VM trampolines.
- Structure/setting names: `analysis/specs/modules/eN.md`, `analysis/decompiled/payload-named/sixtwo/eN.java` (constructor fully decompiled — sword/axe item list is plain Java).
- Class pool window `POOL[0xf34d,0x299]` (eN-exclusive, fully resolved incl. tail).
- Registry: `sixtwo.eN|Mace Swap|Automatically performs breach and windburst swap|key=115|bind=-999`, category `gh.xwjCw` (combat).

## Runtime model

On attack (intercepted at LOW priority via the `hw$tv` attack event), swaps to a mace for the breach-debuff hit and/or to a wind charge for the wind-burst follow-up, using the `ol` armor controller and `qL` rotation manager; the Allowed Items list defines which weapons count as "already correct" (no swap).

Pool-derived MC surface (verbatim from `POOL[0xf34d,0x299]`):

- `field_49814` = `Items.MACE`, `field_49098` = `Items.WIND_CHARGE` — the two swap-target items.
- Attack pipeline (shared combat plumbing around `sixtwo/eQ`, an attack-sequence component): `aBD (Lsixtwo/eQ;)V`, `aBE (Z,Lsixtwo/eQ;)V`, `aBF (Lsixtwo/eQ;Z,Lsixtwo/qL;)Lsixtwo/ov;` (aim computation returning a rotation `ov`), `aBO (Lnet/minecraft/class_1309;Lsixtwo/ov;Lsixtwo/qL;)V` (execute attack on LivingEntity with rotation), `aBG (Lnet/minecraft/class_1309;Lsixtwo/eQ;)V`, `aBH (Lnet/minecraft/class_1309;)Lsixtwo/oW;` (per-target item lookup — `oW` slot/stack finder).
- Neighbor modules in window: `sixtwo/eO`, `sixtwo/eT` (`aDw (Lnet/minecraft/class_1657;)Z` — player check), `sixtwo/eS` (`aCW`, `aBG`) — eN participates in the shared combat cluster (eO/eS/eT attribution not separable from this window; flagged).
- Armor controller: `FtkJb = new ol(this)`; Return Delay `DrFpA` feeds it (same `.UI(50.0, 100.0)` randomized default family as eG/eI).
- Static `String[] kVMtt`, `LJDck` — decrypted strings (no readable window).

## Per-handler semantics

All bodies are decrypt-preamble → VM dispatch.

- `YO()` [18c0b3c50] — listener registration (`gH.th` pre-motion tick; `hw$tv` attack event).
- `aBc(hw$tv)` [18c1161c0] — attack event, priority `mw.LOW`: intercepts the player's attack; if the held/target conditions match (mace/wind charge logic per `Mazxu`/`tjNtC` options), performs the swap-attack-swap cycle via `ol` and the eQ attack pipeline.
- `aBb(gH.th)` [18c0b4080] — pre-motion tick: state machine advance + Return Delay restore via `FtkJb`.
- `aBd()` [18c129700] → `RajOD` (group), `aBe()` [18c129900] → `Mazxu` (Breach), `aBf()` [18c129b00] → `tjNtC` (Wind Burst), `aBg()` [18c129d00] → `EifDU` (Windburst Threshold group), `aBh()` [18c129f00] → `AhcDq` (Allowed Items cK), `aBi()` [18c12a100] → `PxteY` (threshold slider), `aBj()` [18c12a300] → `DrFpA` (Return Delay), `aBk()` [18c0b7b80] → `FtkJb` (ol controller) — public getters for cross-module access.
- `aBl` (MatchException trap) [18c0b7d80], `aBm/aBn/aBo/aBp/aBq/aBr/aBs` — j2cc decrypt boilerplate.

## Settings → behavior mapping

| setting (decoded) | field | wrapper / chain (verbatim) | behavior role |
|---|---|---|---|
| (main group, label undecoded) | RajOD | `ct` (4-token name) | container group |
| Breach | Mazxu | `cu` child of RajOD | swap to MACE (field_49814) for breach hits |
| Wind Burst | tjNtC | `cu` child of RajOD | swap to WIND_CHARGE (field_49098) for wind-burst follow-up |
| Windburst Threshold (group) | EifDU | `cu` child of RajOD | gates the wind-burst branch; slider visible under it (`.Vf(EifDU::SZ)` wiring: `PxteY.Vf(this.EifDU::SZ)`) |
| (threshold slider) | PxteY | `cC .Vy(0.1).Vw(2.0).Vx(10.0).VA(3.0).Vz(aBp<"x">(28755,…))` | step 0.1, min 2.0, max 10.0, default 3.0 — fall-damage/health threshold scale for wind-burst trigger (exact formula unrecovered) |
| Allowed Items | AhcDq | `cK .WM(jc.WnbNG).WN(var10002)` | item whitelist: WOODEN_SWORD, STONE_SWORD, IRON_SWORD, GOLDEN_SWORD, DIAMOND_SWORD, NETHERITE_SWORD, WOODEN_AXE, STONE_AXE, IRON_AXE, GOLDEN_AXE, DIAMOND_AXE, NETHERITE_AXE (12 items, verbatim) |
| Return Delay | DrFpA | `cA .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(<bsm "x" string>)` | step 10, min 0, max 1000, randomized default range 50–100; suffix decrypted via bsm |

Note: the module md reports `.UH(" ms")` for Return Delay — the bytecode shows the suffix is a bsm-decrypted string, so the literal " ms" is plausible but not proven.

## Unrecovered / uncertain

- All bodies virtualized; the swap trigger conditions (when Breach vs Wind Burst fires), hit ordering, and the `PxteY` threshold formula are unrecovered — do not guess.
- `sixtwo/eQ` semantics (attack-sequence component shared with the combat cluster) and the role split of `aBD`/`aBE`/`aBG` are inferred from signatures only.
- Window tail (`sixtwo/eT`, `sixtwo/eS`, `aCm`, `aDw`, `aCW`) straddles the shared combat cluster; token attribution to eN vs eS/eT is uncertain.
- `RajOD` group label and `EifDU` label ("Windburst Threshold" per md name list) are per-group attributions, flagged per the shared-pool rule.
- Whether `ol` performs armor swap, weapon slot swap, or both here is unrecovered.
