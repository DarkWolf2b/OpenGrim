# Blink (sixtwo.ey) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_ey.c` — 14 native handlers + 143 continuation blocks, 0 unresolved table targets (same 14 handler bodies are also in `analysis/ghidra/handlers-full/sixtwo_ey.c`). All 12 non-trivial handlers decompile to the same protection pattern: one `BLOB_DECRYPTOR` call (`FUN_190dd72e0`) over the class pool `POOL[0xd9fb,0x25f]` + `JNI->ExceptionCheck` + an indirect tail-jump into a jumptable Ghidra could not sanity-check (`"Treating indirect jump as call"` → VM interpreter dispatch). **No Blink logic is directly decompilable**; behavior below is reconstructed from the pool symbol table, the event classes, the verified payload helpers those symbols resolve to, and the decrypted constructor constants — every such step is tagged `[inferred]`.
- The annotated window `POOL[0xd9fb,0x25f]` is truncated: it starts mid-string inside `pyxZq` (a symbol of neighbor class `ex`) and stops at 0xdc5a. The full contiguous pool region owned by `ey` is `[0xda1b, 0xdd20)` (773 bytes, 39 entries, `sixtwo/ey` … `XF`, with `sixtwo/ez` starting at 0xdd20), recovered from the decrypted-sweep image `analysis/ghidra/dumps/jna-decrypted-v2.dll`. The 7 entries before `sixtwo/ey` (`xZq OqVLr jBHTq xLPDH vtEAj auW kPBXI`) belong to `ex` — verified against `ex.java` fields/BSM (`kPBXI` = ex's static seed, `pyxZq` = ex's toggle, `auW` = ex's int BSM).
- Structural: `analysis/specs/modules/ey.md` (incomplete — listed only 3 of 6 settings), `analysis/decompiled/payload-named/sixtwo/ey.java`.
- Identity: `super(gf.aZL(avj(7933,…), false, gh.xgeEn).aZS(false))`; decrypted value of the `avj(7933,…)` call = **45** → module id/key **45**, category `gh.xgeEn`, registry "Cancels sending motion packets", key 45, bind −999 `[registry, full-dump.jsonl]`.
- All 6 setting labels recovered verbatim by resolving every `avj<"v">(idx,key)` call in the constructor against the 120 decrypted `sixtwo.ey` rows of `analysis/decrypted/full-dump.jsonl` (char-code arrays → strings; see Settings table).
- Event classes verified from the Java tree:
    - `gL extends hH` wraps a `Packet<?>`, accessor `gL.bcf() → Packet<?>`.
    - `gL$tk extends gL` carries `(Packet, PacketListener)` (`dpn()`); `gL$tj extends gL` carries `(Packet, ClientConnection)` (`dpm()`).
    - **Direction (key inference, three independent proofs):** ① `fW` "Transactions — *Reads the transactions the server sends you*" hooks only `gL$tk` ⇒ `gL$tk` fires for **inbound (S2C)** packets. ② `ez` "No Fall" hooks `gL$tj` and its pool references `mixin/accessors/ServerboundMovePlayerPacketAccessor` + `setOnGround` (C2S move packet) ⇒ `gL$tj` fires for **outbound (C2S)** sends. ③ `ey`'s own pool puts `gL$tk` directly before S2C `class_2743` (velocity) and `gL$tj` directly before a run of C2S packet classes. → `ava(gL$tk)` = receive listener, `avb(gL$tj)` = send listener. `[inferred, strongly supported]`
    - `gH$th` = pre-motion client-tick event (verified in `er.md` via `qL.dbN` dispatch order); `gM` and `go$sX` (render event, `MatrixStack`+tickDelta) are bare marker subclasses.
- Yarn mapping (`jars/yarn-1.21.11+build.6.tiny`, every symbol verified with owner class):
    - `method_5624 ()Z` (class_1297) → `Entity.isSprinting`
    - `method_5728 (Z)V` (class_1297) → `Entity.setSprinting`
    - `method_5660 (Z)V` (class_1297) → `Entity.setSneaking`
    - `method_36456 (F)V` (class_1297) → `Entity.setYaw`
    - `method_33574 (Lnet/minecraft/class_243;)V` (class_1297) → `Entity.setPosition(Vec3d)`
    - `method_5628 ()I` (class_1297) → `Entity.getId` (network entity id)
    - `method_11818 ()I` (class_2743) → `EntityVelocityUpdateS2CPacket.getEntityId`
    - `method_12269/12268/12274 (D)D` (class_2828) → `PlayerMoveC2SPacket.getX/getY/getZ`
    - `class_2828` → `PlayerMoveC2SPacket` (subtypes `class_2829` PositionAndOnGround, `class_2830` Full, `class_2831` LookAndOnGround, `class_5911` OnGroundOnly)
    - `class_2743` → `EntityVelocityUpdateS2CPacket` (S2C)
    - `class_6374` → `CommonPongC2SPacket` (C2S common), `class_2827` → `KeepAliveC2SPacket`, `class_2793` → `TeleportConfirmC2SPacket`, `class_2797` → `ChatMessageC2SPacket`, `class_2859` → `AdvancementTabC2SPacket`, `class_2799` → `ClientStatusC2SPacket` (all C2S)
- Payload helpers (verified bodies, not guesses):
    - `jg.bBA(Entity) → Box` (`jg.java:635`) = `jg.bBB(entity, entity.getLerpedPos(tickProgress))`; `jg.bBB` (`jg.java:1091`) builds `new Box(x − width/2, y, z − width/2, x + width/2, y + height, z + width/2)` — the axis-aligned box of an entity's lerped position. Pool pair `bBA | (Lnet/minecraft/class_1297;)Lnet/minecraft/class_238;` matches its exact descriptor.
- Setting builder semantics verified: `cC` (`Vy`=step→`HqniU`, `Vw`=min→`bYxsv`, `Vx`=max→`WhuQX`, `VA`=value→`LYVpX`), `cJ.WE/WF` (bool set/get), `cD.VO` (int/keybind), `cB.Vf(Supplier<Boolean>)` = visibility/enabled supplier `uexTC`.
- Hash-named natives `avg/avh/avi/avj` and `_ff214a0d…` are payload runtime (MatchException rethrow, invokedynamic int bootstraps, static init); listed per-handler but not module logic.
- Runtime helpers used only as opaque calls: `FUN_190dd72e0` (blob decryptor), `FUN_190ddce00`, `FUN_190ddfc90`, `FUN_190de3220`, `FUN_190dd9df0`, `FUN_184117d80`, `FUN_184117d50`, `FUN_1841196f0`, `FUN_1842a3a30` (payload MC-binding / VM dispatch layer).

## Runtime model

### State (verified initializers from the constructor)

| field | type | init | role |
|---|---|---|---|
| `BeDJP` | `ConcurrentLinkedQueue<Packet<?>>` | new | the held-packet queue (FIFO). Pool has `Ljava/util/Queue;` + `poll` → flush drains via `poll()`, preserving send order `[verified type/init, inferred role]` |
| `FTaWP` | `AtomicBoolean` | `false` | cross-thread flag; pool carries `AtomicBoolean` class+descriptor. Likely the "holding/active" guard between the netty-thread send event and client-thread flush `[inferred]` |
| `AOxxs`, `UMfxq` | `Vec3d` | `Vec3d.ZERO` | two captured positions `[inferred]` |
| `kYSPP` | `Box` | `null` | captured bounding box (pool pairs `kYSPP` + `Lnet/minecraft/class_238;` + `jg.bBA(Entity)→Box`) `[inferred]` |
| `OpYvN` | `float` | 0.0 | captured scalar — with `Entity.setYaw(F)` in the pool, most plausibly a captured yaw `[inferred]` |
| `TYnKu` | `boolean` | false | captured flag — with `isSprinting`+`setSprinting` in the pool, most plausibly a captured sprinting state `[inferred]` |
| `rLHZE` | `static long` | set by `_ff214a0d…` static init | BSM decryptor seed (`var1 = rLHZE ^ 50420067336684L`) `[verified]` |
| `MkRVk`/`DjTne`/`SDMAX` | `static long[]/Integer[]/Map` | — | obfuscation/BSM caches (pool-confirmed symbols) `[structure]` |

### Packet queueing (all `[inferred]` from pool + event semantics)

1. **Holding (send side).** `avb(gL$tj)` fires for every outbound packet. It gets the packet via `gL.bcf()` and type-checks it against the C2S packet classes in the pool. `class_2828` (PlayerMoveC2SPacket — the "motion packets" of the registry description) is present, plus a run of control packets `class_6374` (Pong), `class_2827` (KeepAlive), `class_2793` (TeleportConfirm), `class_2797` (ChatMessage), `class_2859` (AdvancementTab), `class_2799` (ClientStatus), and the subtype check `class_2828$class_2831` (LookAndOnGround). The natural reading (and the only one consistent with the pool ordering: movement classes then the `nEXgW`/control-class run) is: **motion packets are diverted into `BeDJP` instead of being sent; the control-packet run is the pass-through/whitelist set** (a Blink that also held KeepAlive/Pong/TeleportConfirm would be kicked within seconds). Which class maps to queue vs pass-through is order-evidence, not bytecode — see Unrecovered.
2. **Flush (re-send path).** Pool: `poll` + `avf`. Flush drains `BeDJP.poll()` repeatedly and hands each packet to the private native `avf(Packet<?>)` — the re-send primitive (the only JNI-visible send surface of the module). Queue order is preserved (ConcurrentLinkedQueue is FIFO), so the server receives held motion packets in original order.
3. **Flush triggers.**
    - **Pulse** (`cQjjl` toggle, default off): pool order places `cQjjl` → `yIJjF` ("Pulse Packets") → `ave` in one program run, i.e. while Pulse is on, `avb`/flush path calls `ave()` to release a burst sized by "Pulse Packets" `[inferred]`. Burst cadence is not recoverable.
    - **Auto Disable** (`GFFOu` toggle, default off) with **Disable Packets** (`mjbAe`, numeric): the two appear adjacently after `ave` in the pool; with the visibility dependency `mjbAe.Vf(GFFOu::WF)` (Disable Packets is only shown while Auto Disable is on), Auto Disable turns Blink off once the held-count reaches "Disable Packets", then flushes `[inferred]`.
    - **Disable on Velocity** (`sTmtd` toggle, default off): on the RECEIVE side, `ava(gL$tk)` reads `sTmtd`, takes `bcf()`, checks `instanceof class_2743` (velocity, S2C), compares `method_11818` (`getEntityId`) against `method_5628` (`Entity.getId` of the local player) — on match, Blink disables and the queued packets flush `[inferred]`.
    - **Cancel Key** (`nEXgW` cD keybind, default −999 = unbound): manual cancel; pool places `nEXgW` inside the send-handler class run. Whether "cancel" means flush-and-disable or drop-and-disable (revert) is not decodable — the state-reconstruction setters below are compatible with a revert-style cancel `[inferred, unresolved]`.
    - **Module toggle** (key 45 / `qXoKw` keybind in shared category `ku.qnXgu`): enable/disable lifecycle per framework.
4. **State reconstruction surface.** The pool carries the full set `Entity.setPosition(Vec3d)`, `setYaw(F)`, `setSprinting(Z)`, `setSneaking(Z)` alongside `PlayerMoveC2SPacket.getX/getY/getZ`, `Entity.isSprinting`, the captured `Vec3d`/`Box`/`float`/`boolean` fields, and `jg.bBA` (lerped-position box). This is a position/rotation/sprint/sneak snapshot-and-restore kit: either restoring the player to the enable-time state on cancel, or syncing the player to the position held in the last queued move packet on flush. Which of the two runs when cannot be determined statically `[inferred, unresolved]`.
5. **Client feedback.** Pool entry `XF` = `cN.XF(int[])` (`cN.java:18`, posts a message of type `cM.MENWL` into the client message queue) — the VM posts at least one client-side message; the message text is a natively decrypted int array and is unrecovered.

## Per-handler semantics

All addresses are image addresses (handler header form: `runtime 6ffff…`). Every behavior handler: `BLOB_DECRYPTOR(env, pool_base+0xd9fb, 0x25f)` → `JNI->ExceptionCheck` → unchecked indirect tail-jump (`&UNK_<group> + (cond)*8`) into the VM interpreter. The pool decrypt is idempotent across handlers (identical offsets in all 12).

- **`aaj()`** `[18cd14a50]` — on-enable override. Java super (`gg.aaj`) registers this module's `@hG` listeners via `hF.bdI(this)`; the toggle path also runs `rD.dmd().daT()` before it. ey's native body additionally (presumably) resets queue/flags — the reset is not decompilable `[verified wiring, inferred body]`. Tail continuation `FUN_18cd14b14` `[0xcd14b14]`: `FUN_190ddce00()` + jumptable dispatch.
- **`YO()`** `[18cd1aef0]` — on-disable override. Super unregisters listeners via `hF.bdM(this)`; toggle path runs `rD.dmd().daU()` after. Whether a final flush of `BeDJP` happens here is not decompilable `[verified wiring, inferred body]`. Tail `[18cd1afba]`.
- **`ava(gL$tk)`** `[18cd47d60]` — **receive listener** (`gL$tk` = S2C). Program surface: `sTmtd` ("Disable on Velocity") read → `sixtwo/gL$tk` → `bcf ()Lnet/minecraft/class_2596;` → `class_2743` (`EntityVelocityUpdateS2CPacket`) → `method_11818` (`getEntityId`) → `method_5628` (`Entity.getId`). Behavior: if the setting is on and the incoming velocity packet targets the local player's network id, disable the module (and thereby flush the queue) `[inferred]`. Tail `[18cd47be7]`.
- **`avb(gL$tj)`** `[18cdc04e0]` — **send listener** (`gL$tj` = C2S). Program surface: `sixtwo/gL$tj` → `bcf` → the C2S class run (`class_6374` Pong, `class_2828` PlayerMove, `class_2797` ChatMessage, `class_2793` TeleportConfirm, `nEXgW` Cancel Key, `class_2827` KeepAlive, `class_2859` AdvancementTab, `class_2799` ClientStatus) → `cQjjl` (Pulse) → `method_5628` → `class_2828`-family checks → `method_33574/36456/5728/5660` (setPosition/setYaw/setSprinting/setSneaking) → `yIJjF` ("Pulse Packets") → `ave()` call → `GFFOu` + `mjbAe` (Auto Disable + Disable Packets) → `class_2828$class_2831` (LookAndOnGround) → `method_12269/12268/12274` (getX/getY/getZ) → statics → `avh` → `XF` (`cN.XF` client message). Behavior: queue or pass each outbound packet per class; maintain Pulse/Auto-Disable counters; touch the state-snapshot surface `[inferred]`. Notable reachable continuations: `IsInstanceOf` type-check splits `[0xcd1ee5a, 0xcd1eed0, 0xcd1ef3b]`, `CallVoidMethodA`+`ExceptionCheck` (single void call — `ave()`/`avf()` call-site candidate) `[0xcd1acef, 0xcd2d1f1]`, `AllocObject` `[0xcd2d3ac]`, `CallStaticObjectMethodA/V` `[0xcd2d09a, 0xcd2c0d1]`, `GetArrayLength` bounds guards (`<1` `[0xcd2c3b2]`, plain `[0xcd2cdc8]`), `ThrowNew` paths `[0xcd1a326, 0xcd1a49e, 0xcd2c397, 0xcd2e738, 0xcd2e998]`, blob re-decrypt of `POOL[0x6fb,0x21]` `[0xcd24406]`, `SetByteArrayRegion` + `GetArrayLength < 6` guard (string-decrypt plumbing) `[0xcd2445b]`.
- **`avc(gH$th)`** `[18cdc7160]` — pre-motion client-tick listener (phase verified: all `gH$th` listeners run before `qL` motion processing). Program surface not decompilable; per-tick housekeeping (pulse timing, auto-disable counting, cancel-key polling) is the natural tenant `[inferred]`. Tail `[18cdc722a]`.
- **`avd(go$sX)`** `[18cdd4190]` — render listener (`go$sX` carries `MatrixStack` + tickDelta). Program surface not decompilable; nothing in the pool pins a render behavior (the captured `Box`/`Vec3d` fields would be drawable here) `[inferred]`. Tail `[18cdd4254]`.
- **`auZ(gM)`** `[18cd47b90]` — listener for bare marker event `gM` (no fields; purpose unrecovered — the tick/render/`gM` family is used identically by `fp`/`fs`). Tail `[18cd47be7]`.
- **`ave()`** `[18cdd9450]` — private native subroutine, referenced by name from `avb`'s program right after `yIJjF` ("Pulse Packets") — the burst-flush / cancel routine `[inferred]`. Tail `[18cdd951f]`.
- **`avf(Packet<?>)`** `[18cde33d0]` — private native re-send primitive, referenced from the flush loop (`poll` → `avf`); the only send surface of the module `[inferred]`. Tail `[18cde3494]`.
- **`avg(MatchException) → MatchException`** `[18cde72e0]` — identity (`return param_3`); synthetic exception-rethrow trampoline. No behavior. Pool entry `avg` confirms the VM uses it.
- **`avh(int, long) → int`** `[18cd21370]` — the `avj<"v">` int-constant decryptor engine. Body (~450 lines) is chained constant mixing over `uRam_18333xxxx` state words (rotate/multiply/xor, popcount, lzcnt patterns — the same key-schedule family as `er.aum`); ends in `ExceptionCheck` + tail-jump `[18cd2c280 helpers]`. Payload runtime, no module logic.
- **`avi(Lookup, MutableCallSite, String, Object[]) → int`** `[18cd2c310]` — int call-site bootstrap; falls through to shared `avh` continuations. Payload runtime.
- **`avj(Lookup, String, MethodType) → CallSite`** `[18cd2d320]` — int bootstrap ("v" tag); decrypts the 0x26-byte descriptor blob `POOL[0x857,0x26]` (`…odHandle; | iUrOn | Ljava/util/Map; | java/l…`) before dispatch `[18cd2d320]`. Payload runtime.
- **`_ff214a0d86f74f9bd03d9354287cf7b9()`** `[18cd30030]` — class static-init trampoline; decrypts the 13-byte blob `POOL[0x226,0xd]` (fragment `ang/String; | <`), ExceptionCheck, tail-jump `[18cd30118]`. Sets the `rLHZE` decryptor seed. Payload runtime.

### Anti-trace noise

No `rdtsc` reads occur in any ey handler or continuation block. `swi(3)` (int3) traps at `[0xcd2121f, 0xcd2feea]` are VM-dispatch anti-debug stubs; treat as noise.

## Settings → behavior mapping

All labels verified as decrypted char arrays (from `full-dump.jsonl`, 120/120 calls resolved); builder semantics verified from `cC.java`/`cJ.java`/`cD.java`/`cB.java`.

| field | label | type | exact builder chain | gates |
|---|---|---|---|---|
| `sTmtd` | **Disable on Velocity** | boolean `cJ` | `new cJ(this, clS([68,105,115,97,98,108,101,32,111,110,32,86,101,108,111,99,105,116,121])).WE(false)` | read by `ava` (receive side): incoming `EntityVelocityUpdateS2CPacket` for own `Entity.getId()` ⇒ disable + flush `[inferred]` |
| `cQjjl` | **Pulse** | boolean `cJ` | `new cJ(this, clS([80,117,108,115,101])).WE(false)` | read by `avb`; gates burst flushing and shows `yIJjF` (`yIJjF.Vf(this.cQjjl::WF)`) `[verified wiring]` |
| `yIJjF` | **Pulse Packets** | double `cC` | `new cC(this, clS([80,117,108,115,101,32,80,97,99,107,101,116,115])).Vy(1.0).Vw(1.0).Vx(1000.0).VA(17.0)` | burst size of the pulse flush (packets per release) `[inferred]`; visible while `Pulse.WF()` |
| `GFFOu` | **Auto Disable** | boolean `cJ` | `new cJ(this, clS([65,117,116,111,32,68,105,115,97,98,108,101])).WE(false)` | read by `avb`; gates auto-disable and shows `mjbAe` (`mjbAe.Vf(this.GFFOu::WF)`) `[verified wiring]` |
| `mjbAe` | **Disable Packets** | double `cC` | `new cC(this, clS([68,105,115,97,98,108,101,32,80,97,99,107,101,116,115])).Vy(1.0).Vw(1.0).Vx(1000.0).VA(17.0)` | held-packet count after which Auto Disable turns the module off `[inferred]`; visible while `Auto Disable.WF()` |
| `nEXgW` | **Cancel Key** | keybind `cD` | `new cD(this, clS([67,97,110,99,101,108,32,75,101,121])).VO(-999)` | manual cancel trigger inside the send-handler class run `[inferred]`; −999 = unbound default |

Both numeric settings share the exact chain step `1.0`, min `1.0`, max `1000.0`, default `17.0` — i.e. both default to a 17-packet window (~17 ticks of held motion), configurable 1–1000.

Keybind objects: module toggle `rk` on key **45** (registry `key=45`, bind −999); `qXoKw = new kr(this, ku.qnXgu)` — shared category keybind object `[structure]`.

## Unrecovered / uncertain

NEVER GUESSED — the following are explicitly not recovered:

1. **All queue/flush math.** Every handler body lives in the VM interpreter (unsanitized jumptables, `halt_baddata` truncations); no packet counts, tick intervals, or timing constants beyond the two setting defaults (17/17) can be stated. The native `avh`-decrypted integer constants inside the VM program are not in `full-dump.jsonl` (that dump covers only the Java-side BSM calls).
2. **Queue vs pass-through assignment per packet class.** `class_2828` (and `class_2831` LookAndOnGround) are near-certainly held; `class_6374`/`class_2827`/`class_2793`/`class_2797`/`class_2859`/`class_2799` form the control-packet run, but which are forwarded immediately vs conditionally (and whether ChatMessage/AdvancementTab/ClientStatus are held or passed) is not decidable from pool order alone.
3. **Purpose of the state-reconstruction block** (`setPosition`/`setYaw`/`setSprinting`/`setSneaking` + `getX/getY/getZ` + captured `AOxxs`/`UMfxq`/`kYSPP`/`OpYvN`/`TYnKu`): revert-to-enable-state on cancel vs sync-to-last-held-packet on flush; and which captured field feeds which setter (e.g. `OpYvN`→`setYaw`, `TYnKu`→`setSprinting` are plausible, not proven). There is no dedicated captured sneaking flag, so `setSneaking`'s argument source is unknown.
4. **`kYSPP` (Box) usage**: `jg.bBA` (lerped-position box) is proven in the pool, but whether the box is a collision probe for auto-disable, a render primitive for `avd`, or something else is unknown.
5. **Cancel Key semantics**: flush-and-disable vs drop-and-disable; also whether it reads `nEXgW` in a tick handler or the send handler.
6. **`cN.XF` message text** and message type `cM.MENWL`'s presentation (chat/actionbar) — native-only decryption.
7. **`gM` and `go$sX` handler behavior** (`auZ`, `avd`): no pool evidence separates their programs; their roles (and even whether they are no-ops for this module) are unknown.
8. **Pulse cadence**: whether the burst is per-tick, per-N-ticks, or on packet-count thresholds.
9. **`FTaWP` (AtomicBoolean) exact protocol**: which handler writes vs reads it (send event runs on a netty thread; flush on client thread is the plausible race being guarded).
10. **Whether `aaj`/`YO` flush or clear `BeDJP`** on enable/disable; a clear-on-enable + flush-or-drop-on-disable distinction is behaviorally significant and unrecovered.
11. **`gM`/`gH$th`/`go$sX` firing-thread and ordering relative to `qL` motion processing** for `avc` is inherited from `er.md`'s verified dispatch (all `gH$th` listeners → `gv` → `qL` motion step); ey's position within that order is default priority (no `mw` argument in ey's `@hG` annotations) = NORMAL.