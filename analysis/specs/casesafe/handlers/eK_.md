# Auto Web (sixtwo.eK) — handler-derived behavior spec

Class: `sixtwo/eK` · display name **Auto Web** · registry description "Automatically
places webs at enemies" · primary key 10, active bind -999 [registry].
Superclass: `eL` (shared auto-crystal-family *block-placement base*, `eL extends gg`;
see eL.java for the base pipeline). Constructor: `super(10)` (constant 10 decoded
from `azN("l",8721,…)` [full-dump] — matches registry key).

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_eK.c` — **28 native handlers + 290
   continuation blocks**, 0 unresolved table targets (tables-not-in-tables list is
   decryptor scratch, not dispatch tables).
2. Structural: `analysis/specs/modules/eK.md`, Java shell
   `analysis/decompiled/payload-named/sixtwo/eK.java` (CFR; only the constructor is
   decompiled in full — every behavior method is `native`).
3. Runtime constraint: like the rest of the payload, all behavior bodies are
   decrypt-preamble → `BLOB_DECRYPTOR` pool window → indirect jump into the VM
   interpreter (`FUN_190dd…`/`FUN_190de…` continuation blocks, generic one-JNI-op
   trampolines shared across classes; ~5.9k lines of them, with `rdtsc()` reads that
   are VM-interpreter noise and gate nothing in this class).
4. **Pool windows** (offsets into the global pool at image `+0x18301ee50`):
   - `_80c677…` `<clinit>` [18c4f3270]: `POOL[0x226,0xd]` — infra fragment.
   - **Shared placement core** — `ayB, ays, ayt, ayx, ayy, azE, azF, azG, azI` all
     decrypt the *same* window `POOL[0xa5c3,0x1d6]` (470 bytes).
   - `ayv (ItemStack)Z` [18c50e180]: `POOL[0x9b3c,0x1b9]`.
   - `ayw ()Lsixtwo/oI;` [18c50e470]: `POOL[0x9b6d,0x1ba]` (overlaps ayv's window).
   The 0xa5c3 window straddles eJ (Auto Trap) programs — tokens are attributed
   per-group and flagged (standard per sibling specs fr/fH).
5. Yarn mapping (tiny 1.21.11+build.6): `method_49638`=`BlockPos.ofFloored(Position)`,
   `method_2902`=`ClientPlayerInteractionManager.updateBlockBreakingProgress(BlockPos,
   Direction)`, `method_6104`=`LivingEntity.swingHand(Hand)`, `method_46558`=
   `Position.toCenterPos()`, `method_33571`=`Entity.getPos()`, `method_26215`=
   `AbstractBlockState.isAir()`, `method_31574`=`ItemStack.isOf(Item)`,
   `method_23481`=`KeyBinding.setPressed(boolean)`; classes `class_2341`=
   **WallMountedBlock** (cobweb's block superclass in 1.21.x), `class_3959`=
   RaycastContext (+`$class_3960` ShapeType, static `field_17558`), `class_2374`=
   Position, `class_2680`/`class_2338`/`class_2350`/`class_1268`/`class_3965`=
   BlockState/BlockPos/Direction/Hand/BlockHitResult, `class_498`/`class_7744`=
   SignEditScreen/HangingSignEditScreen, `class_465`=HandledScreen,
   `class_746`=ClientPlayerEntity, `class_304`=KeyBinding (`field_1904` : KeyBinding).
   Items constants: `field_8281`=**OBSIDIAN**, `field_8786`=**COBWEB** (both proven
   via payload-named usages, eJ.java:97 / fJ.java:198); `field_8550`, `field_8705`,
   `field_8187` unattributed Items constants from the shared slot cluster.
6. Decrypted constants: 62 `azN("l",…)` ints reconstruct every eK constructor string
   (decoded char-by-char in `analysis/decrypted/full-dump.jsonl`, class `sixtwo.eK`).

## Runtime model

- **Event wiring**: eK declares exactly one `@hG` listener: `azv(gv)` [18c499f50] —
  the client-tick entry. The render listeners (`azO(gH$th)` 2-D stage,
  `azP(go$sX)` world stage) and `YO()` are inherited from `eL` (native in eL,
  registered through `gg.YO()` → `hF.bdM` re-registration on every toggle).
- **Base pipeline contract** (`eL`, all native): subclasses supply
  `ayB() → List<BlockPos>` (candidate positions), `ayx(oD)` (per-target placement
  logic; `oD` = 3-constant enum `pxPhl/hAkBH/xBObQ` — mode selector),
  `ayy(oD) → oz` (rotation/placement candidate; `oz` = record `(BlockPos,
  BlockHitResult)`, oz.java), `ayu()`/`ayv(ItemStack)` (gates/item filter),
  `ayw() → oI` (hotbar slot wrapper). Base services used: `oj` block-place engine
  (`qpOsU = new oj()`), `mT.cpz()` timer, plus helpers `azW(List<BlockPos>)` place,
  `azZ(List<oz>)` best-candidate pick, `azY(oz)` double, `azS()/azV(boolean)` Hand,
  `azT()→oD`, `azU()→oB` (2-constant enum), `aAb(BlockState)`, `aAc(Hand)`,
  `azQ(boolean)`, `azR(mw)`, `azX()`.
- **Slot/item selection stack** (from the ayv/ayw window): `sixtwo/oK` abstract slot
  wrapper (`cIu() ItemStack`, `cIv() int`, `cIV(Predicate<ItemStack>)`,
  `cIU(Item)`), `oQ<T extends oK>` hotbar query (`cJv(Predicate)` filter,
  `cJu(Item)`, `cJx(Predicate, ToDoubleFunction)` best-slot pick), `oI extends oK`
  concrete wrapper (`cIE()` slot index). `sixtwo/oT` (statics `UgZrs/DpyXs`; `cKN()
  → oz` current placement, `cKG(oz)` set, `cKP(Hand)` swing) is the shared
  placement-executor state; window refs `oT|dwN|(Z)Lsixtwo/oT$vo;` touch its
  inner state record.

## Per-handler semantics

- **`azv (Lsixtwo/gv;)V` — tick entry [18c499f50]**. Shared core window
  `POOL[0xa5c3,0x1d6]`. Contract: per client tick while enabled (`aAa()`,
  `sixtwo/eK|aAa` is in-window), iterate targets, compute web positions, submit
  placement via the `oj` engine (`aAM ()Lsixtwo/oj;` + `oj|cEy|cEE|anf` cluster).
  Everything between gate and submission is VM bytecode — unrecovered.
- **`ayB ()Ljava/util/List;` — candidate positions [18c51a810]**. Shared window.
  Returns the block positions to fill with webs. Window surface maps to:
  `method_49638` `BlockPos.ofFloored(Position)` around `aAe` (the base `cC` range
  setting getter, eL `Motwu` — step 0.01, min 2.0, max 6.0, default 4.5), enemy
  position from `method_33571` (`getPos`), `method_46558` `toCenterPos`,
  `cnd`/`mB.cnd` (Direction helper), `method_26215` `isAir`,
  `sixtwo/eJ|cnb` (Auto Trap interleaved — neighbor, not eK's). Position pattern
  (Legs/Head/Surround/Upper Surround rings, see settings) is VM bytecode —
  unrecovered.
- **`ayx (Lsixtwo/oD;)V` — per-target logic [18c50e940]** and **`ayy (Lsixtwo/oD;)
  Lsixtwo/oz;` — candidate selector [18c513fd0]**. Shared window. The cluster
  `class_2341` (WallMountedBlock — cobweb's superclass), `method_6104`
  (`swingHand(Hand)`), `class_3959`+`ShapeType`+`field_17558` (RaycastContext —
  line-of-sight/interior raycast for the placement), `method_2902`
  (`updateBlockBreakingProgress` — interaction-manager surface; plausibly the
  web-break/left-click arm, owner unproven) is attributable to eK or eJ —
  the isAir/raycast/execute triple fits both; flagged.
- **`azI (Lnet/minecraft/class_2680;)Z` — block predicate [18c4b4060]**. Shared
  window; assigned as `this.QStQW = this::azI` (eK.java:139). Role: the `Predicate
  <BlockState>` filter used to detect blocks that already contain / accept a web
  (cobweb WallMountedBlock check) — exact test unrecovered.
- **`azE (Lnet/minecraft/class_2338;)Z` static [18c4a0f10]** / **`azF
  (Lnet/minecraft/class_2338;)Z` [18c4a6510]** — position validity checks. Shared
  window; which is "is air/replaceable" vs "is within reach/placeable" unrecovered.
- **`azG (Lnet/minecraft/class_746;)Ljava/lang/Boolean;` — self-check
  [18c4aa9e0]**. Shared window. Returns a boxed Boolean for the local player
  (boxed ⇒ nullable three-state, typical of a chainable pause check); exact check
  unrecovered.
- **`ayv (Lnet/minecraft/class_1799;)Z` — item filter [18c50e180]**. Own window
  `POOL[0x9b3c,0x1b9]`: `class_1802` Items constants `field_8550`, `field_8281`
  (OBSIDIAN), `field_8786` (**COBWEB**), `field_8705`, `field_8187`;
  `method_31574` (`ItemStack.isOf`); `oT|dwN|(Z)LoT$vo;`; `class_3965` ctor `cKF`
  (BlockHitResult creation); `class_304`+`method_23481` (`KeyBinding.setPressed`)
  +`field_1904`; `sixtwo/dH|stgmn`; `class_7744`/`class_498` (sign screens);
  `sixtwo/dJ|amJ|BBSYk|amG(Lclass_465;)Z` (HandledScreen test). Contract: accept
  the stack that Auto Web may place with (COBWEB is the only item eK itself needs;
  OBSIDIAN belongs to the interleaved eJ program). The `setPressed` + screen
  tokens belong to the shared "simulate click while no screen open" helper family
  (dH/dJ neighbors), not provably eK.
- **`ayw ()Lsixtwo/oI;` — slot provider [18c50e470]**. Own window
  `POOL[0x9b6d,0x1ba]` (shifted copy of ayv's window — same token groups). Returns
  the `oI` hotbar-slot wrapper holding the web stack, found via the
  `oQ.cJv(Predicate)` query — i.e. "first hotbar slot containing cobwebs".
- **`ayu ()Z` [18c50e0f0]** — **fully recovered**: `return 1;` (constant true).
  The only handler in the class with a complete body. (eL-family subclass pins
  this gate to true.)
- **`ays ()Z` [18c49fa80]** / **`ayt ()Z` [18c4af9a0]** — shared-window gate
  booleans (pause/eligibility). Unrecovered.
- **`azH (Lsixtwo/oD;Lnet/minecraft/class_2338;)Lsixtwo/oz;` [18c4b3a30]** —
  builds the placement record for a position; pure jumptable stub, no window.
  Contract only: `(mode, pos) → (BlockPos, BlockHitResult)`.
- **Setting getters** (pure jumptable stubs, no windows): `azw ()cv` → `NMgGy`
  [18c529610]; `azx/azy/azz/azA ()cw` → the four `cw` toggles in unknown order
  (`GDZTu`/`MeIjx`/`wBiWF`/`zlXZx`) [18c4a0110, 18c4a0310, 18c4a0510, 18c4a0710];
  `azB ()cJ` → `OBXLo` [18c4a0910]; `azC ()cC` → `mPPOF` [18c4a0b10];
  `azD ()Predicate` → `QStQW` [18c4a0d10].

### Infrastructure (no module behavior)

`_80c677…` clinit [18c4f3270] `POOL[0x226,0xd]`; `azJ (MatchException)
MatchException` [18c4b9d10] identity rethrow; `azK ([B)String` [18c4b9da0] string
decoder stub; `azL (IJ)I` [18c4e43f0] the class's int-constant table (~8k lines MBA
mixing — anti-analysis noise, source of all decrypted ints); `azM`/`azN`
[18c4ef550, 18c4f0560] invokedynamic bootstraps.

## Settings → behavior mapping

All own settings, verbatim chains (chars decoded from the full-dump; module md
misses two names — see anomaly below):

| field | setting | chain (verbatim) | behavior role |
|---|---|---|---|
| `NMgGy` | Placement Options | `cv(this, "Placement Options").Tm(1)` | group, ≥1 min children |
| `GDZTu` | Legs | `cw(NMgGy, "Legs").Tz()` | place a web at the target's feet block (`.Tz()` = default on) |
| `MeIjx` | Head | `cw(NMgGy, "Head").Tz()` | place a web at the target's head block (default on) |
| `wBiWF` | Surround | `cw(NMgGy, "Surround")` (no `.Tz()`) | ring of webs around the target's feet (default off) |
| `zlXZx` | Upper Surround | `cw(NMgGy, "Upper Surround")` (no `.Tz()`) | ring of webs at head level (default off) |
| `OBXLo` | Predict Position | `cJ(this, "Predict Position").WE(false)` | extrapolate the target position before placing (default off) |
| `mPPOF` | Prediction Ticks | `cC(this, "Prediction Ticks").Vy(1.0).Vw(1.0).Vx(6.0).VA(3.0).Vz(EbxJv)` — step 1, min 1, max 6, default **3**, unit suffix from static `EbxJv` (native-decrypted; per registry family almost certainly `" ticks"` — unproven) | tick lookahead for Predict Position; visible only while `OBXLo` is on (visibility wiring native — inferred from group structure, not proven) |

Base-class (`eL`) settings also present on the module (ranges verbatim from
eL.java): `Motwu` Range `cC` `.Vy(0.01).Vw(2.0).Vx(6.0).VA(4.5)` — the
`aAe()` getter consumed by the position window; `HOTIG` `cC`
`.Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0)`; `YvQUU`/`YGuMi` `cG` render colors with
`.Uh(false)`; `sknnu`/`YluPK`/`pIXpJ` `cJ` toggles (default off); `iQyQO` `cv`
render group with `pbSUq/giOjd/TUVIE` `cw` children. Names for all eL settings are
encrypted in eL itself and were **not** reconstructed in the dump — unresolved.

## Unrecovered / uncertain

1. **All placement arithmetic**: web-position computation (Legs/Head/Surround/
   Upper Surround geometry), tick-prediction math for Predict Position ×
   Prediction Ticks, and the `oj` submission call are VM bytecode. No float/double
   op survives.
2. **Shared-window attribution**: `POOL[0xa5c3,0x1d6]` straddles eJ (Auto Trap);
   only `sixtwo/eK|aAa` is provably eK's. The WallMountedBlock / RaycastContext /
   swingHand / updateBlockBreakingProgress cluster is attributed to eK-or-eJ, not
   proven. The 5 Items constants in the ayv/ayw windows belong to the eL-family
   slot cluster; only OBSIDIAN (eJ) and COBWEB (eK) are pinned.
3. **`ayu() == true` semantics** — recovered as constant-true, but which gate of
   the base pipeline this pins (and why) is unrecovered.
4. **azE vs azF vs azG** exact check semantics unresolved (position validity
   ×2, boxed self-check).
5. **`field_17558` (RaycastContext.ShapeType)** constant identity (VISUAL/
   COLLIDER/OUTLINE) unresolved; likewise `field_1904` (KeyBinding) and Items
   `field_8550/8705/8187`.
6. **Module-md anomaly**: `analysis/specs/modules/eK.md` lists "Surround" +
   "Upper Surround" but omits the decoded "Legs"/"Head" child names; the char
   arrays in the constructor decode unambiguously to Legs/Head (values via
   full-dump indices 22003/25220/12550/29704 and 28746/25220/28099/9520). Treat
   the module md name list as incomplete.
7. **azL int table** (~8k lines) and `rdtsc` reads in continuation blocks are
   anti-analysis/VM noise; no timing gate found in this class.
