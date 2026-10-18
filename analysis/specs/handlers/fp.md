# Backtrack (sixtwo.fp) — handler-derived behavior spec

Class: `sixtwo/fp` · display name **Backtrack** · registry description "Delays incoming
packets to gain advantage" · key 9, bind -999 (unbound) [registry].
Superclass `gg` (module base, `extends iS`); constructed with
`gf.aZL(id, false, gh.xwjCw).aZS(false)` — note the extra `.aZS(false)` (state flag
other combat modules don't set; likely "no auto-disable on world change") `[decompiled,
meaning uncertain]`.

## Evidence base

1. PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fp.c` — 52 native handlers, 716
   continuation references. Every behavior handler is the standard dispatcher stub:
   `BLOB_DECRYPTOR` → `JNI->ExceptionCheck` → 2-way indirect jump into the VM
   interpreter (`FUN_190dd72e0` ×102, `FUN_190dd9df0`, `FUN_190ddce00`, `FUN_190ddfc90`,
   `FUN_190de3220` — payload runtime, shared across the payload). No behavior bytecode
   is linearly recoverable.
2. **One shared pool slice** `POOL[0x12d6b,0x300]` (768 bytes, pool base rva
   `0x301ee40`) — decrypted by 15 handlers (aLF, aLG, aLH, aLI, aLJ, aLK, aLL, aLM, aLO,
   aLQ, aLR, aMt, aMu, aMv … everything behavioral). Remaining slices: `YO`/`aaj`
   module-base `POOL[0x3806,0xbf]`, clinit `POOL[0x226,0xd]`, indy plumbing
   `POOL[0x857,0x26]`. Token list fully resolved below.
3. Java shell `analysis/decompiled/payload-named/sixtwo/fp.java` (CFR; constructor +
   `aLP` + `aLS` decompiled), companion `fp$sQ.java` (constructor + `doY(gG)`
   listener decompiled), record `fp$sR.java` (packet + timestamp, fully decompiled).
   Shared render/spoof helpers `kw` (spoof config), `kt` (ghost-player renderer over
   `OtherClientPlayerEntity` + `PlayerEntityModel`), `kx`/`kr` (per-module spoof
   settings panel), `mW` (2-flag state ticker), `mT` (stopwatch), `fo` (player
   pause/exempt registry with 9 `Predicate<PlayerEntity>` sets).
4. Event semantics inherited from `analysis/specs/handlers/ey.md`: `gL$tk` = **inbound
   S2C packet** (carries `Packet` + `PacketListener`), `gH$th` = pre-motion client tick,
   `gM` = bare per-tick/frame marker, `go$sX` = render (`MatrixStack` + tick delta),
   `hw$tv` = entity event (carries `Entity`).
5. Yarn mapping (`yarn-1.21.11+build.6.tiny`): slice MC refs —
   `class_7439`=`GameMessageS2CPacket`, `class_7438`=`ChatMessageS2CPacket`,
   `class_7617`=`RemoveMessageS2CPacket`, `class_5900`=`TeamS2CPacket`,
   `class_7827`=`ProfilelessChatMessageS2CPacket`,
   `class_7597`=`ChatSuggestionsS2CPacket`,
   `class_2708`=`PlayerPositionLookS2CPacket`,
   `class_2661`=`DisconnectS2CPacket`, `class_8043`=`DamageTiltS2CPacket`,
   `class_2749`=`HealthUpdateS2CPacket`, `class_6373`=`CommonPingS2CPacket`,
   `class_7422`=`TrackedPosition`, `class_2596`=`Packet`, `class_1657`=`PlayerEntity`;
   `method_29504`=`isDead`, `method_11833`=`getHealth`,
   `method_43494`=`TrackedPosition.setPos(Vec3d)`.
6. Decrypted constants (`full-dump.jsonl`, 233 entries): 225 ints from `aMC("v",…)` and
   8 strings from `aMz("h",…)`: `' blocks'`, `' ms'`, `' ms'`, `' %'`, `' ticks'`,
   `' ms'`, `' ms'`, `' ms'` (setting-name chars + 8 units).

## Runtime model

- **Purpose**: holds back selected inbound S2C packets for a configurable latency
  window so the server's view of a target player lags behind what the client predicts;
  on flush, the target snaps back (classic lag-range/backtrack). Ghost rendering shows
  the delayed position.
- **Instance state** `[decompiled]`:
  - `UlcPe : ConcurrentLinkedQueue<fp$sR>` — delayed-packet queue; `fp$sR` = record
    `(Packet<?> packet, long time)` with `time` stamped `System.currentTimeMillis()` at
    enqueue (fp$sR.java) `[decompiled]`.
  - `cDqQL : ConcurrentLinkedQueue<Packet>` — secondary packet queue (role split vs
    `UlcPe` unrecovered — plausibly "knockback-held" vs "general hold") `[uncertain]`.
  - `UBMuW : PlayerEntity` — tracked target; `wKloG : TrackedPosition` — the target's
    server-side tracked position snapshot; `wdMfF : Vec3d` — last tracked position
    `[decompiled fields, exact update math native]`.
  - `heFtE`, `fNonW : int` — **runtime delay copies** of settings: `fp$sQ.doY` writes
    `heFtE = yNflG.UN()` ("Latency") and `fNonW = AJNZt.UN()` ("Knock Delay") whenever
    both queues drain empty; constructor initializes `heFtE` from an indy int (value
    100? — the pair at full-dump index 6440/9 is the module id 9; the init constant is
    among the 225 ints, exact one unproven) `[decompiled write, init uncertain]`.
    Pattern: the working delay is only re-synced from the setting when idle, so
    changing Latency mid-hold does not disturb an in-flight hold.
  - `DcASC : boolean` — hold-active latch `[decompiled field, role inferred]`.
  - Timers `QSdNA, qDZPi, zLsnh : mT` (three stopwatches; `QSdNA` is reset by
    `aLP(…,bl4=true)` when the tracked target is dropped — candidate "Target Delay"
    clock; other two unrecovered) `[decompiled, assignment uncertain]`.
  - `iOmXC : mW` — small 2-flag state ticker, exposed via `aMs()` `[decompiled]`.
  - `YWHjQ : fp$sQ` — companion listener object, self-registered via `hF.bdI(this)` in
    its constructor (fp$sQ.java) `[decompiled]`.
  - `KAgcx : kx = new kx(this, ku.BEOyU)` — spoof/ghost-render settings subpanel
    (kx carries a `cJ` toggle `AwWpm`; `kx.bQX()` reads it; second flavor `ku.qnXgu`
    is used by ff/Skeleton ESP). fp's slice carries `sixtwo/kw`, `bRK ()Lsixtwo/kw;`,
    `bQV (Lsixtwo/kw;)Lsixtwo/kt;` — the handler builds a `kw` spoof config and fetches
    the `kt` ghost renderer for it `[decompiled helpers + slice]`.
- **Event wiring** (`@hG` native, default priority — fp.java:93-110):
  - `aLG(gL$tk)` — **inbound S2C packet event**: the core hook; decides hold vs pass.
  - `aLJ(gH$th)` — pre-motion tick (track target, evaluate flush windows).
  - `aLF(gM)` — per-tick/frame marker event.
  - `aLH(go$sX)` — render event (ghost/box drawing via `kt`).
  - `aLI(hw$tv)` — entity event (carries an `Entity`; candidate: entity removed/attack
    hook driving `aLM(PlayerEntity)` target-set).
  - `fp$sQ.doY(gG)` — decompiled, see below (`gG` = game-state event; the module-quit
    branch `aLP(true,true,true)` proves `doY` is the "everything dropped → flush/reset"
    handler).
- **Decompiled `fp$sQ.doY(gG)`** (the one fully recovered behavior, fp$sQ.java:28-127):
  1. If `fp.aMu(this)` fails (module disabled — `aMu(fp)Z` static native accessor):
     `mEqah.aLP(true, true, true)` and return — **full flush**: `aLN(true)`
     (remove-if-all on `UlcPe`), `UlcPe.clear()`, and if a target was tracked, reset
     timer `QSdNA`, then null out `UBMuW`, `wKloG`, `wdMfF`.
  2. Else if `aLS()` — target-validity gate, decompiled: `UBMuW != null &&
     UBMuW.isAlive() && aLQ(UBMuW)` (`aLQ(PlayerEntity)Z` native, likely the
     distance/target-mode check fed by "Min-Max Distance"/"Distance" via `oh.cDb(cA)`,
     cf. slice token `cDb (Lsixtwo/cA;)Lsixtwo/oh;`): `aLN(false)` (selectively drain
     expired tracks) then `aLP(true, false, true)`.
  3. `cDqQL.removeIf(fp$sQ::doZ)` — drain releasable packets from the second queue
     (`doZ(Packet)Z` native static predicate; candidate test: age ≥ `heFtE` ms).
  4. If both queues are empty: `heFtE = yNflG.UN()` (Latency), `fNonW = AJNZt.UN()`
     (Knock Delay).
- **Cross-module consumers**: `bQ.java` (HUD "backtrack" indicator widget) reads
  `rD.dlJ().aZx(fp.class)` → `aLL()` (boolean, drives the indicator's active state) and
  `aMq()` (int, shown as the widget value, colored `mG.cnP(185.0F, 28.0F, 28.0F)` —
  red). `aMq()` is most plausibly the current held/delay amount (packets or ms)
  `[decompiled consumer, meaning inferred]`.

## Per-handler semantics

All behavior handlers below decrypt the shared slice `POOL[0x12d6b,0x300]` and dispatch
into the VM; bodies unrecovered. Addresses are image addresses from the stitched corpus.

- **`aLG (Lsixtwo/gL$tk;)V` — S2C packet receive [18c15d9f0]** — main hook. Slice
  gives the full decision surface: `class_2596` (Packet), `time`, `UlcPe`/`cDqQL`
  queues, and the **exempt-packet cluster** `class_7439` (GameMessage),
  `class_7438` (ChatMessage), `class_7617` (RemoveMessage), `class_5900` (Team),
  `class_7827` (ProfilelessChatMessage), `class_7597` (ChatSuggestions),
  `class_2708` (PlayerPositionLook), `class_2661` (Disconnect),
  `class_8043` (DamageTilt), `class_2749` (HealthUpdate), `class_6373` (CommonPing).
  Reconstruction: on each inbound packet, if it is one of the chat / disconnect /
  ping / position-look / damage-tilt / health-update types, pass through immediately;
  otherwise enqueue as `fp$sR(packet, now)` (delayed). These are exactly the packet
  types that must not be withheld (chat/teams/suggestions render state, disconnect +
  ping liveness, position-look + damage-tilt + health-update player-critical state)
  `[inferred from type cluster, strongly supported]`.
- **`aLJ (Lsixtwo/gH$th;)V` — pre-motion tick [18c1e15a0]** — tracking loop: select/
  maintain `UBMuW` (via `aLK()` selector / `aLM(PlayerEntity)` setter), snapshot its
  position into `wKloG` (`TrackedPosition`, `method_43494 setPos(Vec3d)`) and
  `wdMfF : Vec3d`, evaluate hold duration against `heFtE`/`fNonW` via the `mT`
  timers, and flush `UlcPe`/`cDqQL` when the hold window expires `[inferred]`.
- **`aLK ()Lnet/minecraft/class_1657;` — target selector [18c1e8510]** — slice carries
  `dml ()Lsixtwo/fo;` (= `rD.dml()`, the pause/exempt player registry; `fo.aLp(Player)`
  is used by every targeting module to skip paused/fake players), the `oh` query token
  `cDb (Lsixtwo/cA;)Lsixtwo/oh;` (attach the Min-Max Distance `cA` range to an `oh`
  target query), `method_29504` (`isDead`), `method_11833` (`getHealth`). So
  selection = world players, not dead, not paused per `fo`, within the
  "Min-Max Distance" band, Target Mode children Hit|Distance `srhrA` picking the
  comparator `[inferred]`.
- **`aLQ (Lnet/minecraft/class_1657;)Z` [18c147d60] / `aLR ()Z` [18c1571f0]** —
  boolean gates: candidate "target still within band" / "still holding"; slice has
  `DcASC`, `heFtE`, `fNonW` `[inferred, uncertain]`.
- **`aLO (Lnet/minecraft/class_2596;)I` — packet classifier [18c1428c0]** — takes a
  `Packet`, returns an int: candidate "held time remaining" or "queue id/size"
  `[inferred, uncertain]`.
- **`aLM (Lnet/minecraft/class_1657;)V` [18c1ef420]** — set tracked target.
- **`aLL ()Z` [18c1ea770]** — public active/holding flag (consumed by HUD `bQ.MH()`).
- **`aMt (ZLsixtwo/fp$sR;)Z` — removeIf predicate [18c16cbe0]** — `aLN(bl)` =
  `UlcPe.removeIf(aMt(bl, r))`; with `bl=true` flush everything (decompiled call
  shape), with `false` drop only expired tracks (age ≥ delay). The exact age test is
  native `[inferred]`.
- **`aLH (Lsixtwo/go$sX;)V` — render [18c172dc0]** — ghost drawing through the
  `kx`/`kw`/`kt` cluster (`bRK ()Lsixtwo/kw;`, `bQV (Lsixtwo/kw;)Lsixtwo/kt;`):
  render the tracked player's delayed pose as a spoofed `OtherClientPlayerEntity`
  model at `wdMfF`/`wKloG` `[inferred]`.
- **`aLI (Lsixtwo/hw$tv;)V` — entity event [18c1dc260]** — entity-scoped hook (target
  attack/despawn); role beyond nulling the target unrecovered `[uncertain]`.
- **`aLF (Lsixtwo/gM;)V` [18c15c130] / `aaj ()V` [18c141e60] / `YO ()V`
  [18c142390]** — marker-tick / lifecycle stubs; `YO`/`aaj` use the module-base
  `POOL[0x3806,0xbf]` tick-gate slice (gc/gd 2-state enum + `mG.cnP(FFF)` color,
  same as every sibling).

### Trivial accessors (grouped)

26 zero-arg getters, pure stub → jumptable, no pool window: `aLT/aLU/aLV` (`cA`:
`huobG`/`yNflG`/`AJNZt` in some order), `aLW/aLY/aLZ/aMa` (`cC`:
`rdFoG`/`gpLin`/`FOTEE`/`EWyLd`), `aLX`/`aMe` (`cJ`: `ntstt`/`qpbJT`), `aMb` (`ct`
`YicAd`), `aMd`/`aMc` (`cu`), `aMg` (`kx`), `aMh`/`aMi` (the two queues), `aMj`/`aMk`/
`aMl` (`mT`), `aMm` (`fp$sQ`), `aMn` (`PlayerEntity`), `aMo` (`TrackedPosition`),
`aMp` (`Vec3d`), `aMq`/`aMr` (int), `aMs` (`mW`), plus `aMv` (MatchException identity
rethrow) and `aMw`/`aMx`/`aMA`/`aMB`/`aMC`/`aMz`/`aMy`/`aMu` (decryptor/indy/bridge
machinery). Type groups match the field census; per-getter identity inside type groups
is unrecovered.

### Infrastructure (no module behavior)

- `_c8f2c988338e235deec38f96a636d182()V` [18c1bda60] — native clinit stub
  (`POOL[0x226,0xd]`, `java/lang/String` fragment).
- `aMw ([B)String` [18c17a4b0] — byte[]→String decryptor stub; `aMx (IJ)String`
  [18c1a48b0] and `aMA (IJ)I` [18c1af030] — the string/int constant decrypt kernels
  (MBA mixing, ~560/~600 lines — anti-analysis).
- `aMC`/`aMz [18c1bad50, 18c1ac570]` + `aMB`/`aMy [18c1b9d40, 18c1ab680]` — indy
  bootstraps and `MutableCallSite` re-bootstraps.
- `rdtsc` appears in 3 continuation blocks; none gate recoverable logic (noise).

## Settings → behavior mapping

| field | setting | chain (verbatim) | behavior link |
|---|---|---|---|
| `huobG` | Min-Max Distance | `cA .UG(0.1).UE(0.0).UF(10.0).UI(2.0, 3.5).UH(" blocks")` — step 0.1, min 0.0, max 10.0, dual default 2.0/3.5 | distance band for target selection; the dual default feeds `oh.cDb(cA)` (min–max range query token in slice) `[inferred]` |
| `yNflG` | Latency | `cA .UG(10.0).UE(0.0).UF(2500.0).UI(100.0, 500.0).UH(" ms")` | main hold window; copied into working field `heFtE` when idle (`fp$sQ.doY` step 4) `[decompiled]` |
| `RnQWk` | Track Delay | `cA .UG(10.0).UE(0.0).UF(2000.0).UI(500.0, 500.0).UH(" ms")` | how long a target stays tracked after last contact (pairs with "Last Attack Time"/target delay); exact role native `[inferred]` |
| `EWyLd` | Chance | `cC .Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(" %")` — step 1, 1–100, default 100 | probability a track/hold is applied (suffix "%" uniquely matches) `[inferred]` |
| `ntstt` | Pause On Hurt Time | `cJ .WE(true)` — default **true** | pause holding while the local player is in hurt time; slice carries `DcASC` + `class_8043` (DamageTilt) + `class_2749` (HealthUpdate) pass-through `[inferred]` |
| `rdFoG` | Hurt Time | `cC .Vy(1.0).Vw(0.0).Vx(10.0).VA(3.0).Vz(" ticks")` — step 1, 0–10, default 3 | the hurt-time threshold used by the pause gate (ticks) `[inferred]` |
| `gpLin` | Target Delay | `cC .Vy(10.0).Vw(0.0).Vx(5000.0).VA(1000.0).Vz(" ms")` | max ms to keep delaying a held target before forced flush; candidate `QSdNA`/`zLsnh` timer budget `[inferred]` |
| `FOTEE` | Last Attack Time | `cC .Vy(10.0).Vw(0.0).Vx(2000.0).VA(150.0).Vz(" ms")` | retention window tied to the last attack on the target (only track recently-attacked players) `[inferred]` |
| `YicAd` | Target Mode | `ct` group | mode selector |
| `sCGqe` | — Hit | `cu` child (chars `{72,105,116}` = "Hit") | track only targets we hit (ties to "Last Attack Time") `[inferred]` |
| `srhrA` | — Distance | `cu` child (chars `{68,105,115,116,97,110,99,101}` = "Distance") | track by distance band (uses `huobG`) `[inferred]` |
| `qpbJT` | Delay Knockback | `cJ .WE(false)` — default **false** | additionally delay the knockback-affecting packets in `cDqQL`; copied into working field `fNonW` = "Knock Delay" budget `[decompiled write]` |
| `AJNZt` | Knock Delay | `cA .UG(25.0).UE(0.0).UF(9000.0).UI(2500.0, 2500.0).UH(" ms")` | hold window for the knockback queue (`cDqQL`) `[inferred]` |

Ghost-render panel `KAgcx = new kx(this, ku.BEOyU)` adds the shared spoof settings
(cJ toggle `AwWpm` + `kr` panel contents `WRPii`/`vgDNV` — names encrypted in kx's own
constants) `[deconstructed wiring, kx internals in kx.java]`.

## Unrecovered / uncertain

1. **All hold/flush math.** Enqueue filter (beyond the exempt-type cluster), the
   expiry predicate `aMt`, the classifier `aLO`'s return value, and the flush trigger
   (timer vs queue size) are VM bytecode — no formulas survive.
2. **Queue split.** Why two `ConcurrentLinkedQueue`s (`UlcPe` of `fp$sR` records vs
   `cDqQL` of raw packets) and which packets go to `cDqQL` ("Delay Knockback" enabled?)
   is unrecovered; the `fp$sQ.doZ` predicate body is native.
3. **Working-delay re-sync init.** The constructor's initial `heFtE` indy constant and
   whether `fNonW` starts at 0 are unproven (only the `doY` re-sync write is
   decompiled).
4. **Timer assignment.** `QSdNA` is provably the target-drop reset timer; `qDZPi`/
   `zLsnh` ↔ Track Delay/Target Delay/Last Attack Time mapping is unproven.
5. **`hw$tv` handler role** (`aLI`) and the exact trigger that calls `aLM` (target set)
   are unrecovered.
6. **Ghost-render config**: which `kw` parameters (color, animation, opacity — kw has
   `DDOla=1.0`, `gQrYP=0.75`, `iXIAG=0.75` defaults) fp passes, and whether the ghost is
   shown always or only while holding, are native.
7. **`aZS(false)` flag** in the super call (module-base boolean no other checked module
   sets) — semantics unrecovered.
8. **`mW iOmXC`** state ticker's two booleans and `crx(int)` consumer — unrecovered.
9. Slice tokens are fp-exclusive (shared window starts inside fp's token run and spills
   into `net/minecraft/class_7597`+ chat classes and `huobG`/`rdFoG` fields — all fp);
   the trailing `net/…` fragment at the window edge is the next class's leak and is not
   attributed.
