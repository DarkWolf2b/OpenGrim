# Wave-1 static re-verification, group A — audit 2026-10-17

Scope: batches **01 + 02 + 03** (30 modules): `eq fQ dH ez dX dB dT fW ev ew eM el ej ec en ep
eA fO dN fU ex dV ek ea eh eg dL eY fi ed`.
Baseline: `batch-01.md` / `batch-02.md` / `batch-03.md` parities, as folded through the
`trace-recheck-*.md` reports (PARITY.md "Re-audit 2026-10-17", lines ~335-564).
Pass type: **static** re-attack of the residual gaps ([V] constants, [G] guesses, statically
resolvable [U]). [N] (native/VM) and [S] (framework stand-ins) were not touched.

## Tooling used (new in this pass, reusable)

1. **Class-file constant-pool extractor** (`cparse.py`): parses `jar-casesafe` classes,
   decodes modified UTF-8 back to the original ISO-8859-1 byte values. Used to test whether a
   class still carries a DES ciphertext (see the [V] result below).
2. **DES call-site decryptor, validated** (`des.py`): Triple-DES with a repeated 8-byte key
   == single DES; `DES/CBC/PKCS5Padding`, zero IV, key = 8 big-endian bytes of the class key.
   Validated on the known case: `dv.class` pool `#730 = 97bea5c8bf6fe663`, key
   `IOGuL ^ 46605361488946` → `" deg"` (PKCS5 pad 04 04 04 04) — byte-exact.
3. **Native constant-pool resolver** (`pool.py`, generalising `analysis/tools/resolve_pool_blob.py`):
   reads the pool pointer at RVA `0x301ee50` from
   `analysis/ghidra/dumps/jna-decrypted-v2.dll` (pool RVA `0x301ee40`) and prints
   NUL-separated entries for any `(off,len)` blob.
4. **Intermediary→yarn resolver** (`yarn.py`): parses `analysis/jars/yarn-1.21.11+build.6.tiny`
   (owner-aware) so every pool token is reported as e.g.
   `field_6250 LivingEntity.forwardSpeed F`.
5. **Class-scoped pool runs**: for each module, the pool entries between the
   `sixtwo/<id>` marker and the next marker were read, then **validated against the class's own
   declared member names** (`javap -p`). Runs that contain the class's own fields/methods are
   the class's; entries belonging to a neighbouring class's run were rejected. This is the
   decisive attribution test used throughout — it also exposed one wave-1 misattribution
   (see `en`).

### Headline result on the [V] items (the wave-1 suffix gaps)

The four [V] suffixes — `dV.HnRzm` (Custom FOV), `ea.ENAXX` (No Break Delay),
`eh.QZqXr` (Auto Exp), `ed.XgLBB` (Custom Camera Distance) — are **not DES literals and are
not statically recoverable**. Proof (all four checked):

- Their class constant pools contain **no non-ASCII Utf8 entry at all** (no ciphertext — the
  DES-literal pattern that made `dv`/`dt`/`dz` recoverable is absent).
- Each class's `<clinit>` is `Loader.doInit(<cls>.class)` + a **native stub**
  (`_f41f24ca…` dV, `_9cc2c0b9…` ea, `_37a19136…` eh, `_a79940e0…` ed); the suffix field is
  never assigned in Java. The stub's corpus body is
  `BLOB_DECRYPTOR(pool + 0x226, 0xd)` (the shared clinit slice) + the class descriptor
  (dV n/a, ea `0xc177,0x211`, eh `0xcad0,0x226`, ed `0xc377,0x218`).
- The **native pool holds names/descriptors only** — resolving the descriptors (e.g. ed's
  `0xc377,0x218` = `sixtwo/ed | PQbtp | sixtwo/iY | … | XgLBB | aso | arE | …`) yields no
  string values, and the image contains none of the module setting names either.
- The value is therefore decrypted inside the j2cc VM from the class's own ChaCha-protected
  pool (keyed by `Loader.bootstrap`), i.e. **[N]**, not [V].

Consequence: the four suffix fields stay `null`; the gaps are re-classified [N] and documented
as such in each impl. `String.endsWith` for `fQ` (below) is the one genuinely new constant-side
recovery of this pass.

---

## Batch 01

### eq — Null Movement
re-verified 2026-10-17: parity 76% (was 75%) | fixed: partial

- fixed/added: **proven negative** — resolving the native pool at the `sixtwo/eq` marker gives
  a run containing only eq's own statics (`Ignfk`, `VLNez`, eq.java:11-12) and nothing else
  before the next class marker. There is **no Minecraft class/method/field token anywhere in
  eq's run**, upgrading the previous "no `sixtwo/eq` token run exists" claim to a proof that
  the mechanism has no Java/native-pool API footprint at all.
- remaining gaps: [N] `_95f35cd333be09af769faf93936605a8()V` (clinit + 9 continuations, VM);
  [U] the prevention mechanism (input rewrite vs velocity patch vs keybind forcing) — the
  tick heuristic (0.05/0.02/1.05/4.0, slow-block set) stays a labeled discretionary stand-in.
- evidence: `jna-decrypted-v2.dll` pool `sixtwo/eq` run; eq.class members; eq.jsonl = load only.

### fQ — No Protocol Disconnect
re-verified 2026-10-17: parity 84% (was 80%) | fixed: yes

- fixed/added: **new token recovered.** fQ's own pool run (bounded by fR's member run
  `foDkU/sxltZ/…`) is exactly
  `YXdPC | java/lang/String.endsWith | AXCPX` — both bounded entries are fQ's declared statics
  (fQ.java:9-10), so the run is fQ's. This recovers the class's only API-adjacent call:
  **`String.endsWith`**. The "invalid packet" predicate is therefore a *string-suffix test*,
  not a packet-class/channel test; a pure exception-swallowing guard is no longer the only
  reading (fQ.md "Unrecovered" #3/#4 narrowed).
- also: `bootEnabled()` (fQ.java:19 `true` flag) re-confirmed; spec citation
  (`analysis/specs/handlers/fQ.md`, not a case twin) re-confirmed.
- remaining gaps: [N] `_e4e61cf1cd02b1b2e46e5f297e1a41ef()V` (native clinit — JVMTI cannot see
  natives); [U] which string is tested and the hook point; [S] the receive-side
  `DisconnectS2CPacket` cancel remains the labeled design-level stand-in.
- evidence: pool run at `sixtwo/fQ`; fQ_.class members (`YXdPC`, `AXCPX`).

### dH — No Sign Screen
re-verified 2026-10-17: parity 85% (was 85%) | fixed: no — gaps remain [N]/[U]

- re-verified: dH's pool run at `sixtwo/dH` = `stgmn | class_7744 HangingSignEditScreen | alD |
  class_498 SignEditScreen` — **exactly the two sign screens, and no `setScreen`/`close`
  token**. This re-confirms both the type set and the fact that the close mechanism is
  unrecovered.
- remaining gaps: [N] `alC(gJ)` body; [S] no screen event on our bus (tick poll stand-in);
  [U] `setScreen(null)` vs `screen.close()` (no token either way — kept as labeled choice).
- evidence: pool run at `sixtwo/dH`; casesafe/handlers/dH_.md.

### ez — No Fall
re-verified 2026-10-17: parity 88% (was 88%) | fixed: no — gaps remain [N]/[U]

- re-verified: ez's own pool run = `LWMHR | avl | mixin/accessors/ServerboundMovePlayerPacketAccessor
  | setOnGround | EAkuj` — the accessor only. There is **no falling-condition token**
  (no `isOnGround`, no `fallDistance`, no `getVelocity`) anywhere in ez's run, so the port's
  falling gate is correctly labeled discretionary; nothing more is statically resolvable.
- remaining gaps: [N] `avk(gL$tj)` body; [U] spoof condition; [S] accessor→packet rewrite.
- evidence: pool run at `sixtwo/ez`; ez.jsonl (avk 3×, no cancel).

### dX — No Miss Delay
re-verified 2026-10-17: parity 90% (was 90%) | fixed: no — gaps remain [N]/[S]

- re-verified: dX's run = `ZznWO | aqU | mixin/accessors/MinecraftAccessor | setMissTime` —
  the accessor is the class's entire API surface, confirming the reflection target
  (`field_1771` = `MinecraftClient.attackCooldown`).
- remaining gaps: [N] `aqT(gH$th)` body (written constant); [S] accessor→reflection substitute.
- evidence: pool run at `sixtwo/dX`; yarn `field_1771`.

### dB — Full Bright
re-verified 2026-10-17: parity 92% (was 92%) | fixed: no — gaps remain [N]/[U]

- re-verified: dB's run = `VwWZg | GameOptions.options | getGamma()SimpleOption | getValue |
  oxuOm | akq | setValue(Object)V` — the 12-token surface already mirrored, and nothing else.
- remaining gaps: [N] `aaj()`/`YO()` bodies (the written gamma value, constrained to [0,1] by
  the vanilla slider — the 1.0 reading from the trace recheck stands); [U] save/restore nuances.
- evidence: pool run at `sixtwo/dB`; trace-recheck-movement-b-render.md (dB section).

### dT — Multi Task
re-verified 2026-10-17: parity 85% (was 85%) | fixed: no — gaps remain [N]/[S]

- re-verified: dT's own run = `HYicB | apJ | method_1434 KeyBinding.isPressed()Z | QxDnA |
  method_2910 MultiPlayerGameMode.attackBlock(BlockPos,Direction)Z` — the impl's core chain
  (`attackKey.isPressed()` → `interactionManager.attackBlock`) is **pool-proven**, and there is
  **no `isUsingItem` token** in the run, so that gate is correctly labeled a stand-in.
- remaining gaps: [N] `apI(gH$th)` body (target provenance, cooldown gating); [S] END_CLIENT_TICK
  phase substitute.
- evidence: pool run at `sixtwo/dT`; yarn `method_1434`/`method_2910`.

### fW — Transactions
re-verified 2026-10-17: parity 80% (was 80%) | fixed: no — gaps remain [G]/[S]/[N]

- re-verified: fW's run starts `zSGdC | aYa | HDivr` (fW's declared members) and continues into
  the `fY`/`fZ`/`ga` state-store helpers; **no packet class token** — matching the spec's
  negative finding. The `CommonPingS2CPacket` filter stays a high-probability guess and cannot
  be confirmed statically (a class-based filter would need a token).
- remaining gaps: [G] packet type; [S] `fZ`/`ga`/`gb` state-store layout; [N] latency math.
- evidence: pool run at `sixtwo/fW`; fW_.class members; trace-recheck-utility-a.md.

### ev — Collision Long Jump
re-verified 2026-10-17: parity 82% (was 82%) | fixed: no — gaps remain [N]/[U]

- re-verified: ev's run = `zMDWT | auS | class_1690 BoatEntity | yJtAG | method_5739
  distanceTo(Entity)F | bxN | auN` — BoatEntity + `distanceTo` only; **no jump-mechanism token**.
- remaining gaps: [N] `aaj()`/`auR(hq)` bodies (hq never fired in the session); [U] threshold,
  pair member choice, repeat gating; [S] no `hq` counterpart on our bus.
- evidence: pool run at `sixtwo/ev`; trace-recheck-movement-a.md.

### ew — No Jump Delay
re-verified 2026-10-17: parity 90% (was 90%) | fixed: no — gaps remain [N]/[S]

- re-verified: ew's run = `ffKNT | auU | mixin/accessors/LivingEntityAccessor | setJumpDelay |
  PkbYQ` — the accessor only; no constant token. The impl's intermediary fallback
  `field_6228` = `LivingEntity.jumpingCooldown` (int) re-verified against yarn.
- remaining gaps: [N] `auT(gH$th)` body (written value 0 is the "reset" reading); [S] accessor→
  reflection substitute.
- evidence: pool run at `sixtwo/ew`; yarn `field_6228`/`field_6243`.

---

## Batch 02

### eM — Double Tap
re-verified 2026-10-17: parity 88% (was 87%) | fixed: partial

- fixed/added: eM's own pool run contains eM's declared members (`oIeWA`, `aBa`, `XOnBS`,
  `Zrjec`) **plus `field_49814 Items.MACE` and `field_49098 Items.WIND_CHARGE`** — the
  mace/wind-charge item gates are now pool-proven (they were previously listed only as
  "mace-cluster tokens"); only the arithmetic and timings remain VM-resident.
- re-verified: HIGH-priority `aAY` wiring, `Zrjec = mT.cpz()`, zero settings, casesafe twin
  citation.
- remaining gaps: [U] combo decision logic + all timings (1500 ms, 5.0-block scan); [N]
  `aAY`/`aAZ` bodies; [U] whether `aAY` cancels the original attack.
- evidence: pool run at `sixtwo/eM`; eM_.class members; trace-recheck-combat.md.

### el — Water Speed
re-verified 2026-10-17: parity 90% (was 90%) | fixed: no — gaps remain [U]/[N]

- re-verified: el's run = `zseOG | field_6166 EquipmentSlot.FEET | Enchantments.DEPTH_STRIDER
  (field_9128) | jh.bCg(ItemStack,RegistryKey)Z | StatusEffects.SPEED (field_5904) |
  method_6059 LivingEntity.hasStatusEffect | …` — the whole recovered surface (and it continues
  with the block/IceBlock probes past the `sixtwo/jl` cross-reference, as the spec states).
- remaining gaps: [U] motion math (multiplier form/axes, Depth Strider gating-vs-scaling,
  Speed role, probe geometry) — the impl constants stay labeled; [N] `atb`/`atc`/`atd`.
- evidence: pool run at `sixtwo/el`; handlers/el.md.

### ej — Air Stuck
re-verified 2026-10-17: parity 90% (was 90%) | fixed: no — gaps remain [U]/[S]/[N]

- re-verified: ej's run = `KBjlK | asS | UqlCk | ISzxl | sixtwo/iV | bxl | (Lsixtwo/ov;)V |
  sixtwo/hc | …` — `iV.bxl(ov)` (the `PlayerMoveC2SPacket.Full` sender) is the recovered packet
  primitive, matching the trace-recovered body and the impl.
- remaining gaps: [U] timer constant, `ov` rotation source; [S] no `gM`/`hc`/`hv` equivalents;
  [N] `asP`/`asQ`/`asR` bodies.
- evidence: pool run at `sixtwo/ej`; trace-recheck-movement-a.md (asR reconstructed 1:1).

### ec — Ghost Hand
re-verified 2026-10-17: parity 88% (was 88%) | fixed: no — gaps remain [U]/[S]/[N]

- re-verified: ec's run contains `fIYBK | arA | method_18276 isInSneakingPose | method_31709
  hasBlockEntity | method_36455 getPitch | toRadians | esMqW | method_1037 Vec3d.rotateX |
  method_36454 getYaw | method_1024 Vec3d.rotateY | SRuur | Set` and (past the `sixtwo/ed`
  cross-reference) `method_5836 getCameraPosVec | method_1021 multiply(D) | Direction.UP |
  BlockHitResult(Vec3d,Direction,BlockPos,Z)V | method_2896 interactBlock` — the whole
  recovered pipeline the impl mirrors is confirmed token-by-token.
- remaining gaps: [U] through-wall selection, reach constant (4.5 + 0.25 step), `SRuur`
  lifecycle, `isInSneakingPose` gate direction; [S] `Hand` choice; [N] `arz` body.
- evidence: pool run at `sixtwo/ec`; ec.class members; trace-recheck-utility-b-world.md.

### en — Anti Ghost
re-verified 2026-10-17: parity 87% (was 88%) | fixed: partial (correction)

- **corrected (wave-1 misattribution):** the pool window `0xd0d7,0x240` used by batch 02 is a
  *cluster* slice, not an en-only run — it begins two bytes inside em's field `eXBkK` and ends
  inside eo's run. Bounding en's run by its own declared members (en.java:4-14:
  `XGcHI/cPtuD/kpGmO/atq/BCAKr/VqNdz/pFvmE/atr`) leaves exactly the
  `PlayerActionC2SPacket` / `Action.ABORT_DESTROY_BLOCK` (`field_12971`) block. The
  `field_6017` (fallDistance) and `method_11312` (getAnimationProgress) tokens sit in em's part
  of the same window, and **em declares
  `private native boolean atk(net.minecraft.block.entity.ShulkerBoxBlockEntity)`** — they
  cannot be attributed to en exclusively. The two gates in the impl are now labeled
  shared/uncertain instead of en-recovered; the `jd.bAo` sequenced-send token likewise belongs
  to eo.
- re-verified (unchanged): id 46, zero settings, `cPtuD = mT.cpA()` no-reset debounce, the
  trace-recovered 101-char enable-cooldown message, `atp()` never fired.
- remaining gaps: [U] the two gates (shared attribution), the true cooldown threshold; [S]
  `jd.bAo` sequenced send (eo-side, no ClientLevel accessor mixin); [N] `atp()` body.
- evidence: em.class (`atk(ShulkerBoxBlockEntity)`), en.class members, eo.class members;
  `handlers-stitched/sixtwo_en.c` (`0xd0d7,0x240`) vs `sixtwo_em.c` (`0xcf35,0x23a`).

### ep — Super Firework
re-verified 2026-10-17: parity 90% (was 90%) | fixed: no — gaps remain [U]/[N]

- re-verified: ep's run = its own fields/`atY` only (`QHFqR | JzJxD | uwsLE | IUUCe | atY |
  SdMAu`); no MC token in the bounded run, so the trigger/boost math stays unrecovered.
- remaining gaps: [U] trigger event + boost math; [N] `atX()`/`atY(IJ)I`.
- evidence: pool run at `sixtwo/ep`; full-dump sixtwo.ep (setting chain, already exact).

### eA — Strafe
re-verified 2026-10-17: parity 87% (was 85%) | fixed: partial

- fixed/added: eA's own bounded run = `lClZL | avn | field_6250 LivingEntity.forwardSpeed |
  field_6212 LivingEntity.sidewaysSpeed | oOQKe | GMvGu` — the two input-velocity fields are
  **eA's own tokens** (pool-proven), and **`Entity.updateVelocity` is *not* in eA's run** (it
  belongs to a neighbour's window). The impl's getVelocity/setVelocity approximation is
  therefore the correct documented stack adaptation, not a missing token.
- re-verified: "Speed" `0.05/0.25/2.0/0.25` exact (dump ids 1763/5475/21921/24792 = "Speed");
  id 35; single NORMAL tick handler.
- remaining gaps: [U] the `avm` arithmetic (where Speed enters, ground/air branching, camera
  alignment); [U] the `sixtwo.eC` interaction form; [S] updateVelocity/forwardSpeed not on our
  stack surface; [N] `avm` body.
- evidence: pool run at `sixtwo/eA`; eA_.class members; full-dump.jsonl sixtwo.eA.

### fO — Discord Activity
re-verified 2026-10-17: parity 80% (was 80%) | fixed: no — gaps remain [N]/[U]

- re-verified: fO's run = `aWj` + the `qq` scheduler cross-reference (`cXK`/`cXG(J,Runnable)Z`),
  matching the trace (`YO → qq.cXK`). `bootEnabled()` re-confirmed.
- remaining gaps: [N] `aWj()` body + the HTTP endpoint (a native-VM string, not recoverable
  statically — same class of gap as the [V] suffixes); [U] `qn` setter mapping.
- evidence: pool run at `sixtwo/fO`; trace-recheck-utility-a.md.

### dN — Slot Lock
re-verified 2026-10-17: parity 75% (was 75%) | fixed: no — gaps remain [S]/[N]

- re-verified: dN's run = `YAFsA | aoo | field_1869 KeyBinding.dropKey | sixtwo/gz | bbK |
  aop | class_490 InventoryScreen | … | method_7368 PlayerInventory.getHotbarSize |
  method_5438 getStack(I) | field_8037 ItemStack.EMPTY | sixtwo/gq | bbq()HandledScreen` —
  every recovered contract the impl mirrors.
- remaining gaps: [S] the `cz` "Locked Slots" action has no counterpart in our settings API
  (9-bool translation stands); [N] `aon(gz)` body (drop-path branch structure).
- evidence: pool run at `sixtwo/dN`; casesafe/handlers/dN_.md.

### fU — Middle Click Friend
re-verified 2026-10-17: parity 85% (was 85%) | fixed: no — gaps remain [S]/[U]/[N]

- re-verified: fU's run = `bVEnw | aXQ | sixtwo/gy | bbD | bbC | qvWvL | ddC | YJICs | KrrAc |
  aXR | aXS | sixtwo/qu (cYC/cYF/cYE/cYD/cYG/cYH/cYI) | sixtwo/qt (cYw)` — the friend-store
  statics (`KrrAc`/`qvWvL`), the string kernels (`aXR`/`aXS`) and the `qu`/`qt` notification
  builders, confirming the FriendsManager retarget and the chat-stand-in for notifications.
- remaining gaps: [S] `gy` pick event; [U] add-vs-remove trigger; [U] notification channel.
- evidence: pool run at `sixtwo/fU`; casesafe/handlers/fU_.md.

---

## Batch 03

### ex — Safe Walk
re-verified 2026-10-17: parity 90% (was 90%) | fixed: no — gaps remain [N]/[U]

- re-verified: ex's run = its own fields (`pyxZq | OqVLr | jBHTq | xLPDH | vtEAj | auW`) plus a
  `sixtwo/ey` cross-reference — **no MC token**, confirming the config-only Java surface and
  the DLL-side edge patch.
- remaining gaps: [N] no behavior handler exists in the payload; [U] edge geometry,
  "Release On Forward" polarity. The tick clamp stays labeled.
- evidence: pool run at `sixtwo/ex`; ex.java:41 `.WE(false)`.

### dV — Custom FOV
re-verified 2026-10-17: parity 96% (was 95%) | fixed: partial

- fixed/added: dV's own bounded run = `pPdLC | aqf | gShhH | method_41808 GameOptions.getFov()
  LSimpleOption; | iNKRn | zwVyv | iuIKj | NlXtA | aqh` — all declared members **plus the one
  API token `GameOptions.getFov()`**, positive evidence for the write target of `aaj()`/`YO()`.
- re-verified: `1.0/30.0/150.0/90.0`, `gShhH = 70`, dump sites 25009→70 / 27746→79 / 12819→86
  ("FOV"), 18355→70, 6809→53 (id 53).
- remaining gaps: [N] `aaj()`/`YO()` bodies; [U] rounding/clamping, snapshot-on-every-enable;
  suffix `HnRzm` **re-classified [V] → [N]** (native-VM-resident, proof above).
- evidence: pool run at `sixtwo/dV`; full-dump.jsonl sixtwo.dV (5 records).

### ek — Inventory Move
re-verified 2026-10-17: parity 85% (was 85%) | fixed: no — gaps remain [S]/[N]

- re-verified: ek's run = `LqclE | asX | asV | hgJLy | FjUNy | bxC` + the `sixtwo/gB` /
  `InputUtil` / screen-class cross-references (Anvil/CommandBlock/GenericContainer/ShulkerBox/
  StructureBlock) that the impl's exclusion list mirrors. The trace-fixed `asV()` contract
  (non-HandledScreen → true) is unchanged.
- remaining gaps: [S] "Block Clicks" consumer `asU` (no slot-click event on our bus);
  [N] `asT`/`asU`/`asV`/`asW` bodies.
- evidence: pool run at `sixtwo/ek`; trace-recheck-movement-a.md (asV 3× → 1).

### ea — No Break Delay
re-verified 2026-10-17: parity 92% (was 90%) | fixed: partial

- fixed/added: ea's own bounded run = `xPCiw | are | arj | rzTvo |
  mixin/accessors/MultiPlayerGameModeAccessor | getDestroyDelay | setDestroyDelay | CORiV |
  ADNhJ | arl | VZXHC` — **both** the getter and the setter are referenced, in that order, so
  the original demonstrably *reads* the field before writing it (a blind override would need
  only the setter). The cap reading is now the better-supported one; the comparison itself
  stays VM-resident and the write stays labeled.
- re-verified: `1.0/0.0/10.0/0.0`, dump 30947→57 (id 57) + "Destroy Delay" chars
  (19650/12989/7873/30511/12125/31943/27362/29594/1390/20181/18304/6715/24985),
  `field_3716` = `MultiPlayerGameMode.blockBreakingCooldown`.
- remaining gaps: [N] `ari(gH$th)` body; [U] cap-vs-override arithmetic, every-tick vs
  non-zero-only; suffix `ENAXX` **re-classified [V] → [N]**.
- evidence: pool run at `sixtwo/ea`; full-dump.jsonl sixtwo.ea (22 records); yarn `field_3716`.

### eh — Auto Exp
re-verified 2026-10-17: parity 87% (was 85%) | fixed: partial

- fixed/added: eh's own bounded run is exactly
  `GhdJL | asz | field_8287 Items.EXPERIENCE_BOTTLE | GYRzq | XWHiC | edZTg | aNeIU | asB |
  XmJDu` — every entry is eh's own declared member plus the one item constant, bounded by ei's
  run (ei's members `Hbvpn/asG/asJ/asK/asH/asI/VLSja/cNIJT/asM/QqXlu` follow). This proves the
  "no use/throw/interact token" negative that the impl's trigger stand-in relies on (the
  `isSneaking`/`isUsingItem`/raycast helpers in that neighbourhood are **ei (Scaffold)'s**, not
  eh's).
- re-verified: `1.0/0.0/10.0/0.0`, `mT.cpz()` timer, bind 74 (metadata.txt:90), dump
  "Cooldown" chars (29476/31099/31099/31782/32224/23856/24583/11017).
- remaining gaps: [N] `asy(gH$th)` body; [U] throw mechanism, trigger source, Cooldown unit;
  suffix `QZqXr` **re-classified [V] → [N]**.
- evidence: pool run at `sixtwo/eh`; ei.class members; full-dump.jsonl sixtwo.eh (12 records).

### eg — No Swing
re-verified 2026-10-17: parity 85% (was 85%) | fixed: partial (documentation-grade)

- fixed/added: eg's own run contains **no Minecraft token at all** — only its own members
  (`DdQgn`, `WgBhf`) and obfuscation statics. In particular there is no
  `HandSwingC2SPacket` (`class_2883`) and no packet/network class reference, so the payload
  class cannot host the C2S cancel; the DLL swing patch is the only host. The "Both" packet
  cancel stays a labeled stand-in with the negative now cited.
- re-verified: "Client" default true, "Both" default false (dump ids 21596/9418/1121/12475/3369/4628
  = "Client"; 21900/28580/23085/19682 = "Both"); id 77; getters `ast`/`asu`.
- remaining gaps: [G] "Both" suppression point; [N] DLL swing patch outside the payload.
- evidence: pool run at `sixtwo/eg`; eg.class members; full-dump.jsonl sixtwo.eg.

### dL — No Entity Clip
re-verified 2026-10-17: parity 70% (was 70%) | fixed: no — gaps remain [S]/[N]/[U]

- re-verified: dL's run head = `MvRUw | Vec3d | BlockPos.getX/getY/getZ | (DDD)V |
  ItemTags.PICKAXES (field_42614) | TagKey | BlockHitResult.Type.OUTLINE (field_17559) |
  method_31573 ItemStack.isIn(TagKey)` — the pickaxe gate and the OUTLINE raycast the impl
  mirrors; the spec's fuller run continues past the `sixtwo/hh` cross-reference with the
  camera/reach/`Entity.raycast` tokens.
- remaining gaps: [S] no `hh` counterpart on our bus (tick mining loop is the stand-in);
  [N] `anq(hh)` body; [U] `hh.bcA()` meaning, cancel semantics, raycast roles.
- evidence: pool run at `sixtwo/dL`; handlers/dL.md; dL.jsonl = load only.

### eY — Crystal Optimizer
re-verified 2026-10-17: parity 70% (was 70%) | fixed: no — gaps remain [G]/[N]

- re-verified: eY's run = `BGwTf | aFK | mixin/accessors/ServerboundInteractPacketAccessor |
  getEntityId | StatusEffects.WEAKNESS (field_5911) | aFF | method_6112 getStatusEffect | aFI |
  (Lclass_1511;)V | EntityAttributes (class_5134) | ATTACK_DAMAGE (field_23721) |
  method_45325 getAttributeValue | StatusEffectInstance (class_1293) | method_5578
  getAmplifier | aFH | (LItemStack;)D | StatusEffects.STRENGTH (field_5910) | aFG` — every
  damage-formula input the impl uses is confirmed as eY's own token, and the accessor mixin
  (not a raw field read) is the original's entityId path.
- remaining gaps: [G] the formula itself (still labeled); [N] `aFE`/`aFF`/`aFG`/`aFH`/`aFI`/
  `aFJ` bodies, crystal-step logic, attack-selection/cancel semantics.
- evidence: pool run at `sixtwo/eY`; yarn `field_12870` (= `class_2824.entityId`).

### fi — Shield Block
re-verified 2026-10-17: parity 78% (was 78%) | fixed: no — gaps remain [N]/[U]

- re-verified: fi's run = `aJw | mrGdR | aJx | aJq | JNPbj | aJo | nMxfO | aJp | aJs | bzI |
  method_7976 getUseAction | UseAction.NONE (field_8952) | aJt | (ItemStack,Item)Z |
  CONSUMABLE (field_53964) | method_57826 contains | aJv | BLOCKS_ATTACKS (field_56396) | aJr |
  KINETIC_WEAPON (field_63632) | ItemPlacementContext | EQUIPPABLE (field_54196) | aJu` — the
  component predicates the impl mirrors are exact, and `ol nMxfO`/`boolean JNPbj` are the
  state fields.
- remaining gaps: [N] `aJm`/`aJn`/`aJo`/`aJp`/`aJq`/`aJr`-`aJv`/`aJw` bodies; [U] `gM` phase,
  restore condition, slot picker. The trace-pinned `YO → aJw` restore is in place.
- evidence: pool run at `sixtwo/fi`; trace-recheck-combat.md.

### ed — Custom Camera Distance
re-verified 2026-10-17: parity 87% (was 85%) | fixed: partial

- fixed/added: ed's pool run (declared members `BpiUS/HfVsU/PQbtp/fokqH/RqWGM/TVqrW/arB/arC/
  arD/arE/arF` + `XgLBB`) contains **no Camera / GameRenderer / RenderSystem token**, which
  turns the handler spec's "no camera API token" statement into a verified negative: the
  camera-application consumer stays a high-probability guess.
- re-verified: `1.0/4.0/100.0/4.0` + `no_clip` false (dump ids 4470→74, 19133/25337/20366/
  30813/7567/20015/27922/17326 = "Distance", 16812/20874/16459/17837/301/32135 = "No Clip");
  `field_18712` = `Camera.pos`.
- remaining gaps: [G] the camera application + visual clip ray; [N] `aaj()` body; suffix
  `XgLBB` **re-classified [V] → [N]**.
- evidence: pool run at `sixtwo/ed`; full-dump.jsonl sixtwo.ed (21 records); yarn `field_18712`.

---

## Summary

| id | parity | was | fixed |
|---|---|---|---|
| eq | 76% | 75% | partial |
| fQ | 84% | 80% | yes |
| dH | 85% | 85% | no |
| ez | 88% | 88% | no |
| dX | 90% | 90% | no |
| dB | 92% | 92% | no |
| dT | 85% | 85% | no |
| fW | 80% | 80% | no |
| ev | 82% | 82% | no |
| ew | 90% | 90% | no |
| eM | 88% | 87% | partial |
| el | 90% | 90% | no |
| ej | 90% | 90% | no |
| ec | 88% | 88% | no |
| en | 87% | 88% | partial (correction) |
| ep | 90% | 90% | no |
| eA | 87% | 85% | partial |
| fO | 80% | 80% | no |
| dN | 75% | 75% | no |
| fU | 85% | 85% | no |
| ex | 90% | 90% | no |
| dV | 96% | 95% | partial |
| ek | 85% | 85% | no |
| ea | 92% | 90% | partial |
| eh | 87% | 85% | partial |
| eg | 85% | 85% | partial |
| dL | 70% | 70% | no |
| eY | 70% | 70% | no |
| fi | 78% | 78% | no |
| ed | 87% | 85% | partial |

Modules improved: **8** (fQ, eM, eA, dV, ea, eh, eq, ed) · one honest downward correction (en)
· 21 unchanged (no statically recoverable gap left in this pass).

Modules with **nothing new** (explicitly): `dH`, `ez`, `dX`, `dB`, `dT`, `fW`, `ev`, `ew`,
`el`, `ej`, `ec`, `ep`, `fO`, `dN`, `fU`, `ex`, `ek`, `dL`, `eY`, `fi` — no change; gaps remain
[N]/[U]/[S] as listed per module above (each was re-verified against the class-scoped pool run
and its own declared members, so the negatives are now cited rather than assumed).

## Changed files

- `src/main/java/dev/opengrim/modules/utility/NoProtocolDisconnect.java` — recovered pool run
  `YXdPC | String.endsWith | AXCPX` cited; gap list updated.
- `src/main/java/dev/opengrim/modules/world/NoBreakDelay.java` — get+set accessor pair cited
  (read-before-write); suffix re-classified [V] → [N].
- `src/main/java/dev/opengrim/modules/utility/AutoExp.java` — bounded run cited (EXPERIENCE_BOTTLE
  only; ei tokens excluded); suffix re-classified [V] → [N].
- `src/main/java/dev/opengrim/modules/render/CustomFov.java` — `GameOptions.getFov()` token
  cited; suffix re-classified [V] → [N].
- `src/main/java/dev/opengrim/modules/render/CustomCameraDistance.java` — camera-token negative
  verified; suffix re-classified [V] → [N].
- `src/main/java/dev/opengrim/modules/world/AntiGhost.java` — cluster-window attribution caveat
  (fallDistance / getAnimationProgress shared with em; em declares `atk(ShulkerBoxBlockEntity)`).
- `src/main/java/dev/opengrim/modules/movement/NullMovement.java` — proven zero-API-surface
  negative.
- `src/main/java/dev/opengrim/modules/movement/Strafe.java` — forwardSpeed/sidewaysSpeed
  pool-proven; `updateVelocity` correctly excluded.
- `src/main/java/dev/opengrim/modules/combat/DoubleTap.java` — MACE / WIND_CHARGE pool fields
  cited.
- `src/main/java/dev/opengrim/modules/utility/NoSwing.java` — no-Minecraft-token negative cited.

## Compile

`.\gradlew.bat compileJava -q --offline` from the repo root → **exit 0** (clean), run after the
final edit.

## Notes for the orchestrator

- The four wave-1 `[V]` suffix items (dV `HnRzm`, ea `ENAXX`, eh `QZqXr`, ed `XgLBB`) should be
  moved to the **[N] column** in PARITY.md's re-audit section; they are native-VM-resident and
  the wave-1 "[V] = recoverable DES literal" label is wrong for them. The DES route works only
  where the class's own `<clinit>` contains the Java cipher (`dv`, `dt`, `dz` family) — not for
  classes whose clinit is a `_<hash>()` native stub.
- The batch-02 `en` token attribution (fallDistance / ShulkerBox animation) should be corrected
  in the `casesafe/handlers/en.md` spec and, if the High Jump module (`em`) is re-audited, the
  same tokens should be credited there.
- Reusable tooling written for this pass lives in the temp workspace
  (`<temp-dir>`): `cparse.py`, `des.py` (validated DES),
  `pool.py` (native pool resolver), `yarn.py` (intermediary→yarn), `surf3.py` (class-scoped
  pool runs). Nothing under `analysis/` was modified except this report.
