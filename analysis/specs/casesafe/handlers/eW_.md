# Auto Hit Crystal (sixtwo.eW) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_eW.c` — 15 stitched handlers, 158 continuation blocks, 140 end in `halt_baddata()` (generic VM opcode trampolines), 3 `rdtsc` reads (all inside the `aEG`/`aEJ` decrypt plumbing — noise).
- Structural: `analysis/specs/modules/eW.md`; registry `sixtwo.eW|Auto Hit Crystal|Automatically pops crystals|key=29|bind=-999`.
- Java: `analysis/decompiled/payload-named/sixtwo/eW.java` + `payload-decrypted/sixtwo/eW.java` (settings chains verbatim).
- Cross-referenced helper: `sixtwo/qR.java` (crystal tracking) — partially decompiled, ties to eW's pool tokens.
- Yarn: class_1511=EndCrystalEntity, class_2824=PlayerInteractEntityC2SPacket, class_2879=HandSwingC2SPacket, class_2874=DimensionType, class_742=AbstractClientPlayerEntity, class_1937=World, class_1297=Entity, class_1268=Hand, class_243=Vec3d, field_8301=Items.END_CRYSTAL, method_8597=World.getDimension(), method_5838=Entity.setId(I), method_34208=PlayerInteractEntityC2SPacket.interactAt(Entity,Z,Hand,Vec3d), method_18456=ClientWorld.getPlayers().

## Runtime model

Module extends `gg`, category `gh.xwjCw`, primary key 29. All behavior bodies live in the `$mango$` VM; handlers are decrypt-stubs. The entire behavior vocabulary sits in ONE pool window POOL[0xfd30,0x2ae] used by the four functional handlers `aEA`/`aEB`/`aED`/`aEz`.

State fields (`eW.java`):
- `qcmQt`, `cCsEl` — `mT.cpA()` timers (shared mT one-shot/interval timers; pair naturally with Place Delay and Switch Delay).
- `LSGzZ` — `ol` shared CPS scheduler (backs Spoof CPS).
- `gdpqr`, `salDh`, `sXTCM` — boolean latches; `eresX` — int counter (tick/attack counters). Exact roles VM-hidden.
- Static decrypt plumbing: `hkKrh`, `viwpz`, `sdKFC`, `sbnXU`, `macbe`, `UnlEh`, `CdQxi`.

Crystal-prediction infrastructure: `sixtwo.qR` holds `Map<Entity,Boolean> EDYHm` of client-spawned ghost crystals, `ddR(Entity)→Z` = containsKey check ("is this crystal one of ours"), and an `@hG ddQ(hp)` entity-event listener that maintains the map. eW's window contains `sixtwo/qR`, `()Lsixtwo/qR;`, `ddR` — eW consults this registry to know which crystals it placed.

## Per-handler semantics

Trivial (group): `aEE` (MatchException identity rethrow), `aEF([B)→String` (string decoder), `aEG(IJ)→String` and `aEJ(IJ)→I` (seeded constant decryptors, ~550/650 decompiled lines of decrypt arithmetic each — plumbing only), `aEH`/`aEK` (MutableCallSite relays), `aEI`/`aEL` (CallSite bootstraps).

- `aaj()V` [18b8113d0] — module lifecycle (on-enable). POOL[0x3806,0xbf] — the shared gg/HUD lifecycle window also used by fr.YO/fG.aaj/fB.YO/dK.YO/fd.YO; token attribution is per-group uncertain.
- `aEA(gO$tm)` [18b8596d0] — main tick handler. `gO` extends `hH` (base event with listener dispatch); `gO$tl`/`gO$tm`/`gO$tn` are tick-phase variants — exact phase of `tm` unrecovered. Body (via window): dimension gate via `World.getDimension()` (`method_8597` → `class_2874` DimensionType), then the place/hit cycle: spawn a client-side ghost `EndCrystalEntity` (ctor `(Lnet/minecraft/class_1937;DDD)V`), assign it a network id (`method_5838` setId) so it registers with the qR tracker, then submit the attack as `PlayerInteractEntityC2SPacket.interactAt(Entity, Z, Hand, Vec3d)` (`method_34208`) plus `HandSwingC2SPacket` (`class_2879`). Timing gated by `oYVcq` (Place Delay) and `mwZKu` (Switch Delay) timers.
- `aEB()Z` [18b85f4d0] — public predicate over the same window; consistent with a "ready/should-act" or state query exposed to other modules. Exact condition VM-hidden.
- `aEC()V` [18b863590] / `aED()V` [18b8638a0] — internal steps of the cycle (window aliases `aEC`, `aDQ`, `aDR` present). Pure VM dispatch stubs.
- `aEz(gH$th)` [18b8116c0] — render-marker frame hook; shares window. Performs the per-tick scan: `ClientWorld.getPlayers()` (`method_18456`) → `parallelStream` → `anyMatch` over `class_742` AbstractClientPlayerEntity — a safety/threat predicate evaluated each frame (exact predicate unrecovered, see below).

## Settings → behavior mapping

From `payload-decrypted/sixtwo/eW.java` (verbatim chains):

- `oYVcq` = "Place Delay" — `cA .UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(" ticks")` → step 1.0, min 0.0, max 20.0, default 0.0, suffix " ticks".
- `mwZKu` = "Switch Delay" — `cA .UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(" ticks")` → same bounds.
- `QUOiu` = "Spoof CPS" — `cJ .WE(false)`; when on, attack pacing routes through the `ol` CPS scheduler instead of the delay timers.
- `VBJFM` = "Activation Key" — `cD .VO(1)` — choice setting, default index 1; the option strings are in the encrypted blob (unrecovered).
- `vhDcM` = "Work With Items" — `cK .WM(jc.WnbNG)` pool = ALL Items (reflective `bzM()` LinkedHashSet over `Items` fields, minus AIR), preselected `.WN([NETHERITE_SWORD, DIAMOND_SWORD, IRON_SWORD, STONE_SWORD, GOLDEN_SWORD, WOODEN_SWORD])`. When the held stack is not in the selection, the module stands down (held-item gate feeding `field_8301` END_CRYSTAL comparisons).
- `NbNqt` = "Switch Back To Slot" — `cJ .WE(false)`; after a slot switch, restore the original hotbar slot.
- `wjYZb` = "Limit Crystal" — `ct .SO(2)` group with children `IMMQw`="Single" (index 0), `IAuqT`="Double" (index 1), `ABaQX`="Infinite" (index 2); `SO(2)` ⇒ default "Infinite" if children are declared in constructor order (uncertain, see below).
- `AYUNa` = "Cancel On Use" — `cJ .WE(true)`; default on — stop the cycle when the player uses an item.

## Unrecovered / uncertain

- **Exact tick-cycle order**: how the ghost-crystal spawn (ctor + setId) interleaves with the interactAt packet and the qR tracker registration is VM-hidden; only the ingredient set is proven.
- **Dimension gate**: `method_8597`/`class_2874` proves a DimensionType comparison exists, but which dimension(s) it requires is unrecovered (presumably excluding dimensions where crystals don't spawn — do not guess).
- **Player-scan predicate**: getPlayers/parallelStream/anyMatch proves a per-frame player safety check, but the condition (distance? line-of-sight? team?) is unrecovered.
- **`aEB()`** semantics and its callers.
- **`VBJFM` option names** and the **`wjYZb` child order → SO(2) default mapping** (declared order suggests Infinite, unconfirmed).
- **Pool-only tokens** in POOL[0xfd30,0x2ae] not attributable per-group: `n`, `BjiFk`, `nAtgG`, `XtwRQ`, `aDT`, `qpZMv`, `SYXBX`, `DcPJe`, `MuaJV`, `dlY`, `UVCdF`, `iexlJ`, `LtwQn`, `APBzk`. Some may be qR-owned (`dlY`, `bDN`) given the sixtwo/qR tokens in the same window.
- **`aaj` lifecycle window** POOL[0x3806,0xbf] is shared across ≥5 modules; the `mG` color token `(FFF)Lsixtwo/mG;` in it may belong to a sibling.