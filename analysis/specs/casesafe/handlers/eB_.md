# Flight (sixtwo.eB) — handler-derived behavior spec

Class: `sixtwo/eB` · display name **Flight** · registry description "Allows to fly" ·
key 44, bind -999 [registry]. Superclass `gg`; constructed with
`gf.aZL(id, false, gh.xgeEn).aZS(false)` — `gh.xgeEn` is a **third encrypted category
constant** (fr uses `gh.xwjCw`, fN uses `gh.KfAlY`); display name unrecovered.

## Evidence base

1. PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_eB.c` — 40 handlers, standard
   dispatcher stubs. Slices: shared behavior window `POOL[0xcb21,0x228]` (13 handlers
   — all of eB's behavior + machinery), a second window `POOL[0xaa9d,0x1e1]` (1
   handler, `avy`), indy `POOL[0x857,0x26]` ×2, bootstrap `POOL[0x784,0x25]`, base
   tick `POOL[0x3806,0xbf]`.
2. Java shell `analysis/decompiled/payload-named/sixtwo/eB.java` (constructor fully
   decompiled — settings with exact ranges, state inits `dHwGI = Double.MAX_VALUE`).
3. Yarn: `class_2828`=`PlayerMoveC2SPacket` (`avt`'s native descriptor is
   `(Lnet/minecraft/class_2828;D)V` — packet + double); window methods
   `method_5715`=`isSneaking`, `method_6115`=`isUsingItem`,
   `method_24515`=`getBlockPos`, `method_10074`=`BlockPos.down`,
   `method_55754`=`getBlockInteractionRange`, `method_1560`=`getCameraEntity`,
   `method_5745`=`World.raycast(DFZ)HitResult`.
4. **Shared-window warning**: `POOL[0xcb21,0x228]` interleaves eB's run with the
   neighboring **ei "Scaffold"** program — `sixtwo/ei` + its `asA…asX` methods,
   `sixtwo/ej` (Air Stuck), `sixtwo/ek` (Inventory Move), the shared block-use
   pipeline `oD`/`oA`/`oB` (`cHC (BlockPos, oD, Z) oA`, `cHF (oB) oA`), the `oz`
   block-hit record + `hitPoint`, `oT$vo` (`dwM (oz) oT$vo`), the `qL`-family
   rotation hook `sixtwo/iV | bxl (ov)V`, and `sixtwo/hc`. Only `sixtwo/eB`, `avS`
   (eB's static `String[]` getter) and the machinery tokens (`aNeIU, XmJDu, Hbvpn,
   QZqXr, VLSja, cNIJT, hAkBH, BhfJC, LwHxs, QhKIT, gnKgk, rzkkP, KBjlK, UqlCk,
   ISzxl, LqclE, hgJLy`) are eB-side; the MC-method cluster above is shared
   neighborhood surface (attribution to ei vs eB stated per case).
   `POOL[0xaa9d,0x1e1]` (used by `avy`) is the dN "Slot Lock"/dO "Hotbar Restorer"
   neighborhood (raycast, `bbK (class_304 KeyBinding)Z`, `field_1869`,
   `sixtwo/gz`, `sixtwo/iX` movement keys, `method_5438 getMainStack?`,
   `class_490`) — eB's `avy(Entity)Z` likely tests "is entity relevant" through that
   shared surface.
5. Event semantics: `gH$th` = pre-motion tick, `gH$ti` = the other motion stage
   (post-motion; the pair th/ti is the two-phase tick split, cf. ey.md), `gL$tj` =
   outbound C2S packet.
6. Decrypted constants: full-dump `eB` entries for `awa("y",…)` ints and 3
   `avX("b",…)` unit strings for the three `cC` settings (suffixes not independently
   verbatim-resolved here — see uncertain).

## Runtime model

- **Purpose**: grants flight. Two engine modes (Mode group `Kqwum`): **Abilities**
  (vanilla `PlayerAbilities`/ability packets — creative-style flying) and **Velocity**
  (client-side velocity injection each tick). "Anti Kick" defeats the vanilla
  flying-kick with its own mode selector (Normal / Packet / third child `fklcz`).
- **State** (eB.java:23-29): `LSmOj : boolean` (candidate flying-active latch),
  `EKwun`, `raYeS : int` (candidate anti-kick phase counters), `xVfhc : float`
  (candidate smoothed speed/last Y as float), `dHwGI = Double.MAX_VALUE` (candidate
  "last known ground Y" initialized to +inf — the anti-kick baseline; first tick
  always passes the comparison) `[decompiled init, roles inferred]`.
- **Event wiring** (native, default priority):
  - `avr(gH$th)` [18cc1fab0] — pre-motion tick: apply flight velocity / abilities
    before movement processing.
  - `avs(gH$ti)` [18cc29660] — post-motion tick: cleanup/anti-kick phase.
  - `avu(gL$tj)` [18ccb5e00] — **outbound packet listener**: intercept
    `PlayerMoveC2SPacket`s for the Packet anti-kick mode (candidate: flip
    `onGround`/inject downward Y so the server never sees sustained airborne flight).
  - `avt(PlayerMoveC2SPacket, double)` [18ccaea20] — packet mutator (packet + a
    double — candidate replacement Y coordinate).
- **Helpers**: `avv(double, double)Z` [18ccbea20] — two-double predicate (candidate:
  anti-kick comparison of current vs baseline Y); `avy(Entity)Z` [18cccb7f0] —
  entity predicate; `avw()`/`avx()` [18ccbed50, 18ccc4930] — void steps (candidate:
  reset anti-kick state / re-enable abilities); `avz ()F` [18cc190e0] — float getter
  (candidate current speed); `avQ ()D` — double getter (candidate `dHwGI`).

## Per-handler semantics

All behavior handlers decrypt `POOL[0xcb21,0x228]` (except `avy`:
`POOL[0xaa9d,0x1e1]`); bodies unrecovered (VM). Cited addresses above.

- **`avr(gH$th)`** — flight application (Abilities mode: set flying ability +
  send ability packet; Velocity mode: `player.setVelocity`/add velocity from the
  speed settings). Exact math unrecovered.
- **`avu(gL$tj)` + `avt(class_2828, D)`** — outbound packet rewrite path for Anti
  Kick (Packet mode): modify the move packet's Y/onGround before send. Unrecovered.
- **`avs(gH$ti)`** — post-motion bookkeeping (anti-kick counters `EKwun`/`raYeS`,
 Off Time timing). Unrecovered.
- **`avw`/`avx`/`avv`/`avy`/`avz`** — see Runtime model.
- **`YO ()V` / `aaj ()V`** — module-base lifecycle (tick-gate slice
  `POOL[0x3806,0xbf]`).
- Machinery: `avV (IJ)String` / `avY (IJ)I` (decrypt kernels), `awa`/`avX`
  (indy bootstraps), `avZ`/`avW` (callsite cache), `avU ([B)String`, `avT`
  (MatchException rethrow), `avR ([String)V`/`avS ()[String` (static String[]
  decryptor-table accessors — machinery, not behavior).

### Trivial accessors (grouped)

Stub-only getters for the 11 settings: `avB/avA (cJ)`, `avC/avD/avE (cC)`,
`avI/avF (ct)`, `avH/avG/avJ/avK/avL (cu)`, plus `avM ()Z` (boolean),
`avN/avO ()I` (ints), `avP ()F`, `avQ ()D`. Type groups match the field census;
per-getter identity inside type groups unrecovered (unique types unambiguous:
`avB`→`xPGtf` Anti Kick, `avA`→`hojzx` Vertical Speed Match, `avI`→`Kqwum` Mode,
`avF`→`MoNPF` Anti Kick Mode).

## Settings → behavior mapping

| field | setting | chain (verbatim) | behavior link |
|---|---|---|---|
| `xPGtf` | Anti Kick | `cJ .WE(false)` — default **off** | enable fly-kick bypass |
| `hojzx` | Vertical Speed Match | `cJ .WE(false)` — default **off** | match vertical speed to horizontal (consistent velocity) |
| `VCxLS` | (cC, name unrecovered — candidate "Vertical Speed") | `cC .Vy(1.0).Vw(1.0).Vx(20.0).VA(1.0).Vz(<unit>)` — step 1, 1–20, default 1 | vertical speed component |
| `fjDMc` | (cC, name unrecovered — candidate "Horizontal Speed") | `cC .Vy(1.0).Vw(1.0).Vx(200.0).VA(20.0).Vz(<unit>)` — step 1, 1–200, default 20 | horizontal speed component |
| `wBCaT` | (cC, name unrecovered — candidate "Velocity"/step) | `cC .Vy(0.01).Vw(0.01).Vx(3.0).VA(0.05)` — step 0.01, 0.01–3.0, default **0.05** | per-tick velocity magnitude (Velocity mode) |
| `Kqwum` | (ct group, 4-char name — candidates "Mode"/"Fly"; unrecovered) | `ct` | engine selector |
| `YqWYM` | Abilities | `cu` child of `Kqwum` (9-char name) | vanilla-abilities flight |
| `wKOWY` | Velocity | `cu` child of `Kqwum` | velocity-injection flight |
| `MoNPF` | Anti Kick Mode | `ct` (name array 16 chars = "Anti Kick Mode") | anti-kick strategy |
| `PgiSy` | Normal | `cu` child of `MoNPF` (6-char) | |
| `TJdZl` | Packet | `cu` child of `MoNPF` (6-char) | the `avt` packet-rewrite path |
| `fklcz` | (cu child, 4-char name — not in the decrypted names list; candidate "Jump") | `cu` child of `MoNPF` | third anti-kick strategy |

(Names list for eB: Abilities, Anti Kick, Anti Kick Mode, Normal, Off Time, Packet,
Velocity, Vertical Speed Match — "Off Time" is an unbound name: no remaining cA/cC
field carries it in the constructor, so it is either a decrypted-but-unconstructed
setting or a native-side child; flagged uncertain.)

## Unrecovered / uncertain

1. **All flight math** — velocity composition per mode, abilities toggling, and the
   anti-kick timing ("Off Time" on/off cycling) are VM bytecode. Do not guess
   formulas.
2. **The three `cC` setting names** and the `fklcz` child name are absent from the
   decrypted names list (assigned candidates above are shape inferences). The three
   unit suffix strings (`avX("b", 9465/19980/…)`) are not verbatim-resolved.
3. **"Off Time" setting** — in the names list but not matched to any constructor
   field; likely a native-declared numeric child of Anti Kick Mode. Unproven.
4. **Shared-window attribution** — `POOL[0xcb21,0x228]` is interleaved with ei
   (Scaffold)/ej/ek programs; the `oA/oB/oD` block-use pipeline, `oz`/`oT$vo`,
   `iV.bxl (ov)V` rotation call, and the raycast/getBlockPos cluster are only
   attributable to eB if positionally bound to eB's own tokens, which the window
   does not show. Treat the window's MC surface as movement-family shared context,
   not proven eB API use.
5. **`avy`'s window** (`POOL[0xaa9d,0x1e1]`) is the dN/dO neighborhood; what eB's
   entity predicate does with it (and whether `bbK (KeyBinding)Z` = "is our fly key
   held") is unproven.
6. **Roles of `LSmOj`/`EKwun`/`raYeS`/`xVfhc`** — inferred only.
