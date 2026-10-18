# Click Action (sixtwo.dR) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_dR.c` — 20 handlers, continuation blocks all generic VM trampolines.
- Structure/setting names: `analysis/specs/modules/dR.md`, `analysis/decompiled/payload-named/sixtwo/dR.java` (constructor fully decompiled).
- Class pool windows: `POOL[0xb28f,0x1f2]` (dR main, dR-exclusive), `POOL[0xb245,0x1f0]` (apn — synthetic-enum window), `POOL[0x9b3c,0x1b9]` (shared oT/oI/oK/oQ slot cluster straddling eJ/eK/dA).
- Registry: `sixtwo.dR|Click Action|Uses item on click|key=60|bind=-999`, category `gh.qBzlZ` (utility).

## Runtime model

On a configured key press, switches the held slot to the matching item (ender pearl / firework rocket / splash potion), simulates the vanilla use-key press, then returns to the original slot after "Return Delay".

- Item identification (verbatim pool tokens): `field_8639` = `Items.FIREWORK_ROCKET` (module constant `doQ`), `field_8634` = `Items.ENDER_PEARL`, `field_8436` = `Items.SPLASH_POTION` (module constant `doP`) — one key setting per item.
- State machine: enum `sixtwo/dR$sI` with constants `qWbQG` (initial, per constructor), `ZfrpN`, `cgVae`, `UPeYL` (idle → using → restoring phases inferred); `eXNKU = dR$sI.qWbQG` initial state.
- Use simulation: `field_1904` = `KeyBinding.useKey` + `method_23481` = `setPressed(Z)` — sets the vanilla use key instead of sending packets.
- Cooldown gate: `method_7357` = `getItemCooldownManager` + `method_7904` = `isCoolingDown(ItemStack)`.
- Hand handling: `method_6079` = `getOffHandStack`, `field_5810` = `Hand.OFF_HAND` — off-hand-first search for the target item.
- Slot search engine: shared-cluster tokens `cJm ()Lsixtwo/oQ;`, `cJv (Ljava/util/function/Predicate;)Lsixtwo/oK;`, `cIE`, plus `oT` placement-executor singleton (`dwN (Z)Lsixtwo/oT$vo;`) — hotbar/inventory query via `qJ` slot manager.
- Controller: `MEsln = new ol(this)` — `ol` armor/step controller instance drives the swap-and-restore sequence; `klvjL = mT.cpz()` timer for Return Delay; `wSKUO` Runnable = deferred restore action; `app (ILnet/minecraft/class_1268;Lsixtwo/qL;Lnet/minecraft/class_1792;)V` takes the `qL` rotation manager (aim preserved during action).

## Per-handler semantics

All bodies are decrypt-preamble → VM dispatch.

- `YO()` [18da8a260] — listener registration (`gA` input, `gH.th` pre-motion tick).
- `apj(gA)` [18da8a550] — input event: matches key against `KnWWg` (Pearl Key), `jdDxa` (Firework Key), `HOwTg` (Potion Key); dispatches the matching item.
- `apk(gH.th)` [18dad3260] — pre-motion tick: state machine advance, cooldown check (`isCoolingDown`), timer vs Return Delay, then runs `wSKUO` restore.
- `apm(Predicate<ItemStack>) ItemStack` [18daf7350] — finds the first stack matching a predicate (hotbar/off-hand search).
- `apl(ItemStack) Z` [18daf2640] — stack validity check (item match + cooldown).
- `apn(Item, Predicate)` [18dafb390] and `apo(Item, Predicate)` [18dafcf00] — equip+use sequence for a target item (native-only `apt (class_1792;Predicate;)V` [18da947e0] is a sibling trampoline; `apu/apv/apw (ItemStack)Z` [18da949b0/18da99230/18da99520] are per-item predicates — pearl/firework/potion matchers; which maps to which is unrecovered).
- `app(int, Hand, qL, Item)` [18db02db0] — performs the click: slot index, hand (OFF_HAND support), `qL` rotation manager, target item.
- `apq(Hand)` [18db16ef0] — use action on the given hand (presses `useKey` via `setPressed`).
- `apr()` [18db1b600] — restore/cleanup step (returns to original slot).
- `aps()` [18da94130] — reset (returns `eXNKU` to `qWbQG`).
- `apx` (MatchException trap) [18da99810], `apy/apz/apA/apB` — j2cc decrypt boilerplate.

## Settings → behavior mapping

| setting (decoded) | field | wrapper / chain (verbatim) | behavior role |
|---|---|---|---|
| Pearl Key | KnWWg | `cD ... .VO(<decrypted int>)` | trigger: ender pearl (field_8634); default -999 (unbound) per registry |
| Firework Key | jdDxa | `cD ... .VO(<decrypted int>)` | trigger: firework rocket (field_8639) |
| Potion Key | HOwTg | `cD ... .VO(<decrypted int>)` | trigger: splash potion (field_8436) |
| Return Delay | PiCte | `cA .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(gcmeH)` | step 10, min 0, max 1000, randomized default range 50–100; suffix = static `gcmeH` (decrypted via bsm, value unrecovered) |

Key defaults are bsm-decrypted ints (`apB<"y">(18571/15383, …)`), not literal -999 in bytecode; registry bind -999 for all three keys is the effective value.

## Unrecovered / uncertain

- All bodies virtualized; the exact press→switch→use→restore ordering across `apn`/`apo`/`app`/`apq`/`apr` is unrecovered, as is whether use goes through `setPressed(useKey)` only or also interaction-manager calls.
- The three stack predicates `apu`/`apv`/`apw` ↔ pearl/firework/potion assignment is by constructor-adjacency only (not proven).
- Enum `dR$sI` constant names (`qWbQG`/`ZfrpN`/`cgVae`/`UPeYL`) are undecoded; phase meanings inferred from `aps` reset + `wSKUO` restore.
- `gcmeH` suffix string and the cA `.UI(50.0, 100.0)` semantics (randomized default 50–100 ms assumed from eG precedent "Return Delay") — unit not proven.
- `POOL[0x9b3c,0x1b9]` tail (`class_7744`, `class_498`, `dH/dJ`, `amJ`, `stgmn`, `aln`, `alD`, `ffcdF`, `gWobV`, `AlKzG`, `BBS`) straddles neighboring classes in the shared slot cluster and is excluded; `field_8281` (OBSIDIAN) / `field_8786` (COBWEB) / `field_8550`/`field_8705`/`field_8187` tokens in that window belong to the shared engine, not dR's item set.
