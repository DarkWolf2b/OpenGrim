# Batch 10 audit report — audit 2026-10-17

Modules: eH (Spear Dash), ef (Elytra Swapper), eo (No Slow), fv (Auto Armor),
dO (Hotbar Restorer), eP (Mace Aura), dJ (Mouse Tweaks), eJ (Auto Trap),
fN (Skin Protect), dy (Glow).

All ten are j2cc classes: behavior bodies decrypt into the obfuscation VM. Parity is scored
against the recovered surface = settings tree (verbatim constructor chains) + dependency
wiring + listener declarations + pool-token API surface + runtime trace.
Compile: `.\gradlew.bat compileJava -q --offline` — clean after all edits (only the
pre-existing SkeletonEsp unchecked warning).

## Cross-cutting findings

- **`ct`/`cu` group semantics (re-read from ct.java/cu.java, payload-decrypted):** `ct` holds
  a single selected index (`kErPl = 0` default; `.SO(n)` sets it, `cu.SY()` selects the child
  at its declaration index); `cu`'s `IopEl` starts `true`, so `cu.SZ() = IopEl && parent
  selected` — an exclusive radio group. **`cv`/`cw` is the multi-toggle family**: `cw.RDnKR`
  starts `true` and `.Tz()` only *selects* the child (`cv.To` → selected list); `cw.TC() =
  RDnKR && cv.Tn(this)` — so no `.Tz()` = off, `.Tz()` = on. `cJ.LIkdP = false` by default
  (no `.WE()` = off). These were used to re-verify every settings default in this batch
  (notably: eH Change/Restore Armor/Start Flying are **false**, contra the stale PARITY row
  "change_armor(true), restore_armor(true)").
- **`cF` entity-set default (cF.java:34-36):** the selected set starts as
  `{EntityType.PLAYER}`, universe = all living types minus armor stands (`jg$tJ.OCdZM`).
  Glow's empty-set default was a real behavior bug (nothing ever glowed).
- **String recovery:** `full-dump.jsonl` reconstructs per-class constructor-order strings for
  eo (all 20 labels), eH (" deg"/" ms"), ef (all labels), fN (all 13 labels). ef's Swap Delay
  suffix `QXbWi` and eH's `fUesG` suffix are decrypted lazily and absent — eH's `" ms"` is
  plaintext in its dump, ef's is a labeled guess.
- **`rD.dml()` is Anti Bot (fo), not Friends** — the eP handler spec's "Friends module"
  reading of scanner filter `dwd` is wrong: `fo` per source-map is Anti Bot, and
  `fo.aLp(player)` is its verdict query (AntiBot.java:107). MaceAura now drops AntiBot-flagged
  players unconditionally. `rD.dmc()` = `qQ` (name-list friend store) is the gated
  "Ignore Friends" source and maps onto `FriendsManager`.
- **`HandledScreen.getSlotAt(double,double)` is private** (javap on the mapped 1.21.11+build.6
  jar) — the dJ slot lookup needs the @Invoker form, matching the original's
  `AbstractContainerScreenAccessor.invokeGetHoveredSlot(DD)`.
- Traces for this batch are thin: only eP (aBS ×144, aBU ×14 with 7 numeric exits = 0,
  aBR ×2), eJ (ayt ×2 → one exit 0; ayq ×2), fv (aQJ ×2), dJ (amJ ×2) show anything beyond
  class load + YO; eo/fN/dy have no entries.

---

### eH — Spear Dash
post-fix parity: 78% | status: partial | fixed: yes

fixed:
- **Spear identity re-mapped [G]**: `isSpear` now uses the `SPEARS` item tag
  (`field_63257`) — the recovered identity of the sibling Spear Reach (SpearReach.java:238-240,
  eF pool); the previous `TRIDENT || ATTACK_RANGE component` test was invented.
- **`axO()` visibility predicate labeled [G]**: "Start Flying After Restore" visibility is
  native (eH.java:286); the substitute (`Change Armor && Restore Armor`) is now documented as
  a high-probability guess instead of an unlabeled choice.
- Settings re-verified 1:1 against eH.java:123-287 (10 widgets: Activation Key `-999`;
  Dash Direction `SO(0)` → Movement; Given Direction `1.0/-180..180/0.0 " deg"`;
  Change/Restore/Start-Flying false; Return Back true; Return Delay
  `10/0-1000/50 " ms"`) — impl already matched (incl. the corrected cJ defaults).

remaining gaps:
- [U] The armor-swap/restore choreography behind Change Armor / Restore Armor (`ol` helper,
  `rB` phase enum, axt/axu/axs/axv bodies) — VM; impl only tracks `armorSwapPending`.
- [U] The dash impulse/return math (DMfOE accumulation, damage-packet trigger role).
- [N] axz/axL/axM/axN/axw bodies — VM. Trace 2026-10-17 (eH_.jsonl): YO and axz entered once
  each; capture: enable Spear Dash, hold a spear, press the activation key.

### ef — Elytra Swapper
post-fix parity: 78% | status: partial | fixed: yes

fixed:
- **Swap Delay suffix added [G]**: `" ms"` (was `null`). `QXbWi` is lazily decrypted and not
  in the dump; " ms" is the recovered suffix of the same-range delay settings in eH/eS/fv
  (labeled in javadoc).
- **Dead code removed**: unused `countItem(Item)` + `Item` import.
- Javadoc corrected: 9/9 top-level settings (13 original widgets; the two ct+cu groups
  collapse), default Legit/Client = index 0 (no `.SY()`/`.SO()` in ef.java:88-97), and the
  Client/Silent + choreography divergence documented.

remaining gaps:
- [U] The swap choreography (`asd/ase/asf/asg/asi`, `hGtSw` slot pair, `ol`/`oJ` plumbing) and
  the Silent inventory-mode packet path — VM.
- [N] arX(gA)/arY(gH$th) bodies — VM. Trace 2026-10-17 (ef.jsonl): one YO call only; capture:
  enable with an elytra in the inventory and press the Activation Key.

### eo — No Slow
post-fix parity: 65% | status: partial | fixed: yes

fixed:
- Javadoc rewritten with repo-relative citations (was stale `…\Temp\opencode\grim-cs\…` paths),
  the exact 20-widget tree + cw `.Tz()` semantics, and the **mechanism divergence** documented:
  the original rewrites the client input vector in the `hc` slowdown event via
  `ClientInputAccessor.setMoveVector` (handlers/eo.md); this rebuild has no such mixin/event
  and compensates velocity per tick.
- Settings re-verified 1:1 (mode order Grim/Matrix/Matrix 2/Matrix 3/NCP/Grim V3 with
  `.SY()` default = index 5; Main Hand `WE(true)`; Item Options Food/Shield/Chargeables
  `.Tz()` on; Block/Movement options all off) — impl already matched.

remaining gaps:
- [U] Per-mode algorithms (Grim/Matrix/NCP packet sequences, `atS(ov,I)` factory, slot re-sync
  sequences) — VM; the impl's mode branch is only the Grim V3 selected-slot resync.
- [G] Item/block classification (Food via FOOD component, shield, bow/crossbow/trident) and the
  velocity multipliers are reconstructions (pool only proves the `Items.*` set and
  `Block.getSlipperiness`).
- [N] atu/atv bodies — VM. Trace 2026-10-17 (eo.jsonl): no entries beyond class load.

### fv — Auto Armor
post-fix parity: 80% | status: partial | fixed: yes

fixed:
- **Armor slot map was reversed (real bug)**: PlayerScreenHandler slots are 5-8 for
  HEAD..FEET; impl had HEAD→8 … FEET→5. Fixed (fv swap clicks now target the right slots;
  ElytraSwapper's chest=6 is the same convention).
- **Swap Cooldown was used as a time gate only via the wrong setting**: the tick gate read
  `minimumDurability` (a 0-50 %) instead of `swapCooldown` (0-5000 ms). Fixed; Minimum
  Durability now only gates candidate eligibility.
- **Close-after-swap was a no-op** (`closeTimer` just set, so `elapsed >= closeDelay` was
  never true). Rewritten as a coherent phase flow: open-delay before opening → swap →
  close-delay before closing → swap-cooldown between swaps (fv.md's inferred model).
- **Visibility wiring added**: `openDelay`/`closeDelay` visible on Client inventory mode
  (`Ocrqg.Vf(KWINT::SZ)`, `RteRC.Vf(KWINT::SZ)` fv.java:224-225); `closeAfterSwap` on `aQM()`
  [G = Client mode, labeled].
- Settings re-verified 1:1 (Mode Legit/Normal idx 0; Inventory Mode Client/Silent idx 0;
  Auto Open Inventory true; Close After Swap true; Swap Cooldown `50/0-5000/0 " ms"`; Open
  Delay `10/0-1000/0 " ms"`; Close Delay `10/0-1000/0 " ms"`; Minimum Durability
  `1/0-50/15 " %"`; Ignore Elytra false).

remaining gaps:
- [U] `aQE` durability formula, `aQF` source-slot scoring, the armorIndex→EquipmentType table
  (`aQL`), DeathScreen/ActionResult.PASS guard placement, `aQM/aQN/aQO` predicates — VM.
- [N] aQA/aQG/aQH/aQI/aQJ/aQK bodies — VM. Trace 2026-10-17 (fv.jsonl): aQJ ×2 + YO; capture:
  enable Auto Armor with damaged armor and a spare piece in the inventory.

### dO — Hotbar Restorer
post-fix parity: 60% | status: partial | fixed: partial

fixed:
- Javadoc rewritten with repo-relative citations; **every invented name labeled [G]** (all
  setting names/defaults and the `FvAmO` suffix are absent from the dump — the two cD defaults,
  the 4-char group + 6/4-char children mapped as direct/swap, the 23-char cJ as auto_save,
  " ms" for the delay), plus the `aoI` visibility predicate left always-visible (native).
- Keybind bounds aligned with the cD convention (max 348, was 255).
- Settings structure re-verified: 6 widgets → 5 settings (ct+2cu collapsed), FvAmO
  `10/0-500/0` + `.Vf(this::aoI)`.

remaining gaps:
- [U] All six setting display names + defaults (dO absent from `full-dump.jsonl`), the
  save/restore trigger split (`aou`/`aos`/`aov`/`aot`), `aoF` vs `aoG` search strategy,
  `aoD` vs `aoE` comparator, worker roles (`aow/aox/aoy/aoz`), the `iX.HpSlL` key-synthesis
  path — VM.
- [N] aou/aov/aot/aos/aow… bodies — VM. Trace 2026-10-17 (dO_.jsonl): one YO call.

### eP — Mace Aura
post-fix parity: 80% | status: partial | fixed: yes

fixed:
- **Unconditional AntiBot exclusion added** (scanner `dwd`: `rD.dml().aLp` — `fo` is Anti Bot,
  source-map; AntiBot.java:107 `isBot`). Previously only the gated Friends filter existed.
- **Unconditional invulnerability exclusion added** (scanner `dwc`: `isInvulnerable()` or
  player `abilities.invulnerable`, og$vf.java:680-719).
- **Range gate corrected to eye→bounding-box distance** (`jg.bBJ`: clamp eye into box, then
  distance) instead of entity-origin distance.
- **"All" target branch now excludes armor stands** (cF OCdZM universe = living minus armor
  stands, jg.java:1400-1427).
- **Target Lock preference implemented** (og.cCQ: an enabled Target Lock whose locked entity
  passes the predicate is selected directly; the old `isTargetLockedElsewhere` was dead code
  that always returned false).
- Settings re-verified 1:1 (13 settings for 17 widgets; cF "Targets" → players/mobs/all with
  players default = the cF `{PLAYER}` seed; priority distance/health idx 0; attack point
  best/nearest idx 0; all four toggles default off; FOV `1/10-360/180 " deg"`).

remaining gaps:
- [U] The 0xf325 VM bodies: min-fall-distance/hit-distance evaluation, `oW`/`qP` attack
  pipeline, rotation coordinator `aBF`, `NTGZO/rqlbi/SKXmj` state, `pe` best-vector score.
- [G] The coarse players/mobs/all mapping of the entity-type multiselect; `oV.cLc(F)` range
  transform not applied; hurtTime gate is a reconstruction.
- [N] aBC/aBI/aBJ/aBK/aBO bodies — VM. Trace 2026-10-17 (eP_.jsonl): aBS ×144 (consumed by
  TargetEsp), aBU ×14 (7 numeric exits = 0 — the static int[] key table), aBR ×2, YO ×2.

### dJ — Mouse Tweaks
post-fix parity: 72% | status: partial | fixed: yes

fixed:
- **Hovered-slot lookup switched to the recovered accessor path**: new
  `HandledScreenAccessor.opengrim$invokeGetSlotAt(DD)` (@Invoker over the private
  `getSlotAt`, method_64240) replaces the reflection + manual slot-rect scan — the original's
  `amK` uses exactly this mixin accessor (handlers/dJ.md; the PARITY ledger's open "W" item).
- Javadoc rewritten (repo-relative paths; `.SY()` defaults First/Last → Last To First,
  Normal, Proportional confirmed; stack divergence for the click/drag input path documented).
- Settings re-verified 1:1 (4 toggles `WE(true)`, 3 radio groups with correct defaults).

remaining gaps:
- [U] clickSlot sequences (slot ids/buttons/action types per tweak), `amT` scroll scaling,
  `amR/amQ/amS` ordering/position-aware modes, `BundleItem` special case, the SignEditScreen
  token — VM.
- [G] Wheel transfer order/direction/scaling logic and the LMB/RMB drag semantics are
  reconstructions (spec "Behavior mapping" level).
- [N] amy/amz/amx/amA/amB/amF/amL bodies — VM. Trace 2026-10-17 (dJ_.jsonl): amJ ×2 + YO;
  capture: open a container and drag/scroll with the tweaks on.

### eJ — Auto Trap
post-fix parity: 68% | status: partial | fixed: yes

fixed:
- **Invented "Options" group removed**: the original tree is flat there (MIXlE is a top-level
  cJ between Blocks and Alternative Block, eJ.java:130) — `alternative_block_through_walls`
  is now a registered top-level setting (the group + unregistered child would have been
  invisible/unpersisted after the change).
- Javadoc rewritten: exact 13-widget tree (Trap Mode Box/Head/Legs; Blocks cK default
  OBSIDIAN; Alternative Block cK default CRYING_OBSIDIAN+OAK_PLANKS; Double Place Above/Below;
  Place Mode Single/Multi; Blocks Per Tick `1/2-12/8`), the eL-base divergence (TARGET_RANGE
  4.5 = the recovered Motwu default) and the native `ayE`/`azn` visibility predicates.

remaining gaps:
- [U] Trap-shape offsets (`azd/aze/azg/azi/azk`), candidate score `azo`, `azp/azq/aza/azb`
  predicates, the target filter (native in eL) — VM; box/head/legs ring layout is a
  reconstruction.
- [U] The shared eL placement base (~30 settings, `oj` executor, `azS/azV/azW` batch paths)
  is not ported; eJ's hardwired `ayu() ≡ false` and `ayt()` gate are not modeled.
- [N] ayq/ayB/ayC/ayy bodies — VM. Trace 2026-10-17 (eJ_.jsonl): ayq ×2, ayt ×2 (one exit 0).

### fN — Skin Protect
post-fix parity: 68% | status: partial | fixed: yes

fixed:
- **Visibility wiring added** (was absent): `ownSkinSource` ⇔ Own Skin, `otherSkinSource` ⇔
  Other Players (exact: `xuNWw.Vf(bHviN::TC)`, `iWgvu.Vf(pWupw::TC)`, fN.java:265-270);
  `ownDefaultSkin` ⇔ Defaults selected, `otherPlayersSkin` ⇔ Defaults selected, `textureUrl` ⇔
  Custom selected, `otherTextureUrl` ⇔ Custom selected [G — the aWa/aVZ/aVY/aVX predicates
  are native; labeled].
- Settings re-verified 1:1 against the dump (13 widgets → 13 settings; Protect group with
  Own Skin/Other Players `.Tz()` on; Own/Other Skin Source groups with Defaults `.SY()` /
  Custom; the two dynamic preset groups; Texture URL + Other Texture URL `cy` max 2048).
- Javadoc citations re-checked (repo-relative).

remaining gaps:
- [U] The dynamic preset children (`fN$sU` list: int[] name + TextureAsset + PlayerSkinType)
  are native-loaded — both preset groups register empty; Custom URL fetch/replace
  (`aVx`/`aVw` consumers, `qq/qu` async loader) not implemented (custom falls back to Steve).
- [N] aVx/aVw/aVy/aVz/aVA bodies — VM. Trace 2026-10-17 (fN_.jsonl): no entries.

### dy — Glow
post-fix parity: 88% | status: ported | fixed: yes

fixed:
- **Default selection was empty (real behavior bug)**: `cF` seeds its selected set with
  `{EntityType.PLAYER}` (cF.java:34-36) — impl now seeds `entityTypes` with
  `EntityType.PLAYER`, so players glow by default (previously nothing could ever glow).
- **Glow application added [G]**: the original's consumer is outside the payload
  (handlers/dy.md "Unrecovered" — no caller of `ajv` in the corpus); impl now applies
  `Entity.setGlowing` per tick for eligible entities and clears exactly the flags it set on
  disable (previously `isGlowEligible` had no callers at all — the module was inert).
- Predicate kept verbatim: `VX(e) && e != player && !selfGlow` (bytecode-verified,
  dy.java:152-193), including the counterintuitive polarity.
- Settings 1:1: "Entities" cF (`VS(jg$tJ.OCdZM)`, set API per repo convention) + "Self Glow"
  `WE(false)`.

remaining gaps:
- [U] The concrete render treatment (vanilla glowing outline vs custom shader), the self-glow
  mechanism and the `dh.afl()` panic paths — unrecovered (handlers/dy.md "Open question").
- [N] none — dy has no native methods; trace 2026-10-17 (dy.jsonl): class load only.

---

## Evidence summary

- Decompiles: `payload-decrypted` (+ `casesafe` twins for ef/eo/fv/eP, `payload-named-cfr`
  for dO) — class declarations verified inside each file before use.
- Specs: module + handler specs for all ten; two handler-spec corrections used here
  (eP `fo` = Anti Bot not Friends; fv's table swapped the Close/Swap Cooldown labels vs the
  CFR names — CFR read as authoritative).
- Framework classes read for defaults/wiring: `cJ` (LIkdP=false), `cw` (RDnKR=true, `.Tz()` =
  select), `ct`/`cu` (index radio + `.SY()`), `cF` (`{PLAYER}` seed, VS universe), `cD` (int
  widget).
- Constant pool: `analysis/decrypted/full-dump.jsonl` — eo/eH/ef/fN label reconstruction and
  the eH/ef suffix check (ef's `QXbWi` absent → labeled guess).
- Traces `analysis/traces/2026-10-17/`: digests + raw JSONL per module (notes above).
- Yarn 1.21.11+build.6 + javap on the mapped merged jar for
  `HandledScreen.getSlotAt(DD)` (private) and `Entity.setGlowing`.
