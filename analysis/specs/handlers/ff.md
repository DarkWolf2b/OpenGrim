# ff — Fake Lag (module id 18)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/ff.md`; registry row key=18 bind=82
  (a keybind exists per registry, but no `cD` widget is built in this class — see
  Unrecovered). Coverage-matrix `ff|Fake Lag|0|0|0` — pure Java, **no image addresses**;
  citations are Java line numbers in
  `analysis/decompiled/payload-decrypted/sixtwo/ff.java` (1165 lines) plus bytecode
  disassembly of `payload-named.jar` for `aIl(gL.tk)` (CFR failed on it).
- Minecraft API: `Packet`, C2S packets `PlayerInteractEntityC2SPacket`,
  `HandSwingC2SPacket`, `PlayerInteractBlockC2SPacket`, `PlayerInteractItemC2SPacket`,
  `ClickSlotC2SPacket`; S2C packets `ExplosionS2CPacket`,
  `EntityVelocityUpdateS2CPacket#getEntityId()`, `HealthUpdateS2CPacket`;
  `ClientPlayNetworkHandler#sendPacket`, `Vec3d`, `Box`, `AbstractClientPlayerEntity`.
- Helpers (one line each): `cA` — random-range numeric widget (`UG(step)/UE(min)/UF(max)/
  UI(lo,hi)/UH(unit)` builders, `UN()` current draw as Number, `UM(double)` in-range
  test, backing `MutablePair<Double,Double>`); `cC`/`cJ`/`ct`/`cu` standard widgets;
  `mT` — millisecond timer (`cpz()` factory, `cpB()` reset, `cpC(long)` elapsed≥arg gate,
  `cpF()` elapsed ms); `kx extends kr extends kt` — fake-lag position indicator renderer
  (`ku.qnXgu` render type; `bQZ(Vec3d, player)` set anchor, `bRb(Vec3d, player)` set
  release point, `bQV(kw)` set color, `bQX()` render-enabled = its own `cJ` toggle,
  `bQQ(MatrixStack, float, player)` draw; `kr` carries its own embedded mode-list + color
  settings injected into the owning module via `bQO(gg)`); `kw` — RGBA color builder
  (`bRK()` factory, `bRO(f, 1.0f, 0.5f, 0.0f)` gradient stop); `oh` target scanner
  (`cCY()` instance, `cDb(cA)` range, `cDg(of)` comparator, `cDm()` result LivingEntity);
  `of` — enum of 3 LivingEntity comparators (`OGxYa`, `ahXwo`, `FraBu`); `jg.bBJ(Vec3d,
  Box)` closest-point distance; events `gH.th` tick, `go.sX` world render
  (`bbh()/bbi()` = MatrixStack/tick-delta), `gL.tj` C2S packet (`bcf()` packet,
  `bdX(bool)` cancel, `dpm()` connection), `gL.tk` S2C packet (`bcf()`, `bdW()` cancelled),
  `gM` bare event, `hw.tw` bare Entity-event subtype (`hw` carries an `Entity`).

## Runtime model

- `gf.aZL(18, false, gh.xwjCw).aZS(false)` [ff.java:99] — id 18, starts disabled,
  category `xwjCw`; `aZS(false)` sets an extra boolean module flag (exact meaning native;
  see Unrecovered).
- Core mechanism: outbound C2S packets are intercepted and queued
  (`ConcurrentLinkedQueue<Packet<?>> zkfXg`) instead of sent, the event is cancelled
  (`bdX(true)`), and the queue is flushed wholesale (`aIp()` →
  `networkHandler.sendPacket` loop) when a release condition fires. A timer (`uiKAR`)
  and a randomized interval (`lseaG`, drawn from `Packet Interval` via `cA.UN()`) gate
  the flush in Normal mode; a proximity/line-of-play condition gates it in Lag Range
  mode. Incoming reset events (explosion / own velocity update / health update) flush
  immediately and re-draw the interval.
- Six `@hG` listeners: `aIm` (C2S), `aIl` (S2C), `aIn` (tick), `aIo` (world render),
  `aIj` (gM), `aIk` (hw.tw).
- State: `qBKIn` (held/fake position `Vec3d`, init `Vec3d.ZERO`), `IydTB` (flushing
  latch), `lseaG` (current interval in ms), `Stryf` (frozen `Box` snapshot of the player
  bounding box at hold start), `nlYuR` (in-range latch set by `aIk`).

## Per-handler semantics

1. `public ff()` [ff.java:97-238] — builds settings and wires `FUqia.Vf(this.NuoRm::SZ)`
   (Lag Range Distance visible only in Lag Range mode); creates indicator `kx` and timer.
2. `@Override aaj()` [ff.java:365-375] — enable: clear queue; `qBKIn` = player pos;
   `AhpMu.bQZ(pos, player)`; `lseaG = qWnBv.UN().intValue()` (first random draw);
   `uiKAR.cpB()`; `Stryf = null`; `nlYuR = false`.
3. `@Override YO()` [ff.java:377-380] — disable: `aIp()` — flush everything still held.
4. `@hG aIm(gL.tj)` [ff.java:679-876] — C2S interception: bail unless enabled, unless
   `event.dpm() == client.getNetworkHandler().getConnection()`, or while `IydTB` (no
   re-capture during our own flush). If the packet is any of
   `PlayerInteractEntityC2SPacket | HandSwingC2SPacket | PlayerInteractBlockC2SPacket |
   PlayerInteractItemC2SPacket | ClickSlotC2SPacket` → `aIp()` (interactions are never
   delayed) and return. Otherwise, Lag Range mode: if `aIq()` says release → `aIp();
   aIs();` and return; if `Stryf == null` snapshot `Stryf = player.getBoundingBox()`,
   `qBKIn = pos`, `AhpMu.bQZ(...)`. Then `zkfXg.add(packet)` and
   `event.bdX(true)` — the packet is held (cancelled).
5. `@hG aIl(gL.tk)` [ff.java:877-899 decompile-fail; bytecode] — S2C resets; skipped when
   event already cancelled (`bdW()`):
   - `ExplosionS2CPacket` and `fFKwZ` (Reset On Explosion, default **on**) → `aIp()`;
     `lseaG = qWnBv.UN().intValue()` (fresh random draw).
   - `EntityVelocityUpdateS2CPacket` with `getEntityId() == player.getId()` and
     `bAadz` (Reset On Knockback, default **off**) → `aIp()`;
     `lseaG = qyvvJ.VC()` (fixed Reset Time value — the only non-random redraw).
   - `HealthUpdateS2CPacket` and `Bfvhw` (Reset On Health Update, default **off**) →
     `aIp()`; `lseaG = qWnBv.UN().intValue()`.
6. `@hG aIn(gH.th)` [ff.java:947-1000] — tick: bail unless enabled. Lag Range mode:
   if `aIq()` → `aIp(); aIs(); lseaG = qWnBv.UN().intValue()`. Normal mode:
   if `uiKAR.cpC(lseaG)` (elapsed ≥ current interval) → `aIp(); aIs();` then
   `lseaG = qWnBv.UN().intValue()` (interval re-randomized every cycle).
7. `@hG aIo(go.sX)` [ff.java:440-501] — world render: bail unless enabled or
   `AhpMu.bQX()` (indicator toggle off). Progress `f = lseaG > 0 ?
   min(uiKAR.cpF(), lseaG)/lseaG : 1.0f`; color `kw.bRK().bRO(f, 1.0f, 0.5f, 0.0f)`
   (gradient toward red as the hold ages); `AhpMu.bQV(color).bQQ(sX.bbh(), sX.bbi(),
   player)`.
8. `@hG aIj(gM)` [ff.java:1002-1006] — bare event `gM`: `zkfXg.clear()` (held packets are
   DROPPED, not flushed) and `this.baa(false)` (module switched off). No flush.
9. `@hG aIk(hw.tw)` [ff.java:1008-1028] — if enabled and Lag Range mode:
   `nlYuR = true` (latch: once triggered, holding continues regardless of the distance
   test until the next release).
10. `private aIp()` [ff.java:530-564] — flush: bail unless enabled; `IydTB = true`;
    drain queue via `sendPacket(poll())`; `IydTB = false`; `uiKAR.cpB()`;
    `qBKIn` = player pos; `AhpMu.bRb(pos, player)` (indicator release point).
11. `private boolean aIq()` [ff.java:576-670] — Lag Range release test:
    target `= aIr()` (`oh.cCY().cDb(FUqia).cDg(of.ahXwo).cDm()` — nearest living entity
    within Lag Range Distance under comparator `of.ahXwo`); null target ⇒ true (release);
    `d3 = jg.bBJ(player.getEyePos(), target.getBoundingBox())`; if `!FUqia.UM(d3)`
    (target out of the randomized distance range) ⇒ `nlYuR = false`, true (release);
    if `nlYuR` ⇒ true; if `Stryf == null` ⇒ false (nothing held yet); else compare
    `jg.bBJ(Stryf.getCenter(), target box)` (d4) vs
    `jg.bBJ(player box center, target box)` (d5): return `d4 < d5` — keep holding while
    the frozen position is closer to the target than the live position.
12. `private aIs()` [ff.java:1029-1034] — `Stryf = null; nlYuR = false;`.
13. Getters: `aIt/aIu/aIv/aIw/aIx/aIy/aIz/aIA/aIB/aIC/aID/aIE/aIF/aIG/aIH/aIJ` expose the
    widgets/state above (GUI + cross-module reads).

## Settings→behavior

All names decrypted verbatim from `payload-decrypted/sixtwo/ff.java` (char codes):

- `ct cehgg` = **"Mode"** (chars `77 111 100 101`) with `cu` options:
  - `dYwpF` = **"Normal"** (chars `78 111 114 109 97 108`) — timer-gated hold/release.
  - `NuoRm` = **"Lag Range"** (chars `76 97 103 32 82 97 110 103 101`) — proximity-gated.
- `cA qWnBv` = **"Packet Interval"** (chars `80 97 99 107 101 116 32 73 110 116 101 114
  118 97 108`): `.UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH(" ms")` ⇒ step **5.0**,
  min **0.0**, max **2000.0**, default random range **100.0–150.0 ms**, unit `" ms"`.
  Each cycle draws a new value via `UN()`.
- `cA FUqia` = **"Lag Range Distance"** (chars `76 97 103 32 82 97 110 103 101 32 68 105
  115 116 97 110 99 101`): `.UG(0.1).UE(1.0).UF(6.0).UI(1.0, 3.6).UH(" blocks")` ⇒
  step **0.1**, min **1.0**, max **6.0**, default random range **1.0–3.6 blocks**, unit
  `" blocks"`; visible only in Lag Range mode; also feeds the target scanner range and the
  `UM(double)` in-range test.
- `cJ bAadz` = **"Reset On Knockback"** (chars `82 101 115 101 116 32 79 110 32 75 110 111
  99 107 98 97 99 107`), `.WE(false)` ⇒ default **off**; on own
  `EntityVelocityUpdateS2CPacket` flush and set interval to **Reset Time**.
- `cC qyvvJ` = **"Reset Time"** (chars `82 101 115 101 116 32 84 105 109 101`):
  `.Vy(5.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz(" ms")` ⇒ step **5.0**, min **0.0**,
  max **1000.0**, default **100.0 ms**, unit `" ms"`. Consumed only by the knockback
  reset path (`qyvvJ.VC()`).
- `cJ fFKwZ` = **"Reset On Explosion"** (chars `82 101 115 101 116 32 79 110 32 69 120 112
  108 111 115 105 111 110`), `.WE(true)` ⇒ default **on**.
- `cJ Bfvhw` = **"Reset On Health Update"** (chars `82 101 115 101 116 32 79 110 32 72 101
  97 108 116 104 32 85 112 100 97 116 101`), `.WE(false)` ⇒ default **off**.
- `kx AhpMu` = indicator renderer of type `ku.qnXgu` with its own injected settings
  (`kr` base: mode list `WRPii`, options, color `vgDNV`, all visibility-gated by the kx
  toggle; toggle name encrypted, ≈22 chars — see Unrecovered).
- Keybind: registry says bind=82, but no `cD` widget is constructed here — the toggle
  binding may be handled by the framework from the registry metadata.

## Unrecovered

- The identity of events `gM` and `hw.tw` (both bare classes; `gM` drops the queue and
  disables the module — consistent with a disconnect/world-leave event; `hw.tw` latches
  `nlYuR` — consistent with an entity-interaction/attack event), and their publish points.
- The exact meaning of `gg.aZS(boolean)` (module flag set to `false` here) and of
  `gg.baa(boolean)` (called with `false` in `aIj`; assumed enabled-state setter — not
  verifiable in this class).
- `of.ahXwo` comparator identity (the enum's `Comparator` arguments are set in native
  enum init; only constant names survive). Which sort order selects the target.
- The `kx` indicator toggle's label (≈22 chars, DES literals `bSc<"z">`; no
  `sixtwo.kx` entries exist in `decrypted/full-dump.jsonl` to solve the key, unlike
  `sixtwo.ee`/`sixtwo.ff`/`sixtwo.et`) and the semantics of `kr`'s embedded mode-list
  options (CFR "Decompilation failed" on `kr`'s builder method).
- `cA.UN()` randomization distribution (uniform between lo..hi is implied by
  `MutablePair<Double,Double>` + min/max fields, but the draw math is in the widget's
  obfuscated update path).
- The keybind=82 wiring (no `cD` in-class; registry-driven binding assumed).