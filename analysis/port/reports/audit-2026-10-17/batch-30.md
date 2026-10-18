# Batch 30 audit — ff (Fake Lag) + dq (Storage ESP)

Session 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-30 subagent.
This batch closes the batch-19 mix-up: batch 19 was assigned `ff dq` but audited the
case twins `fF` (Trigger Bot) / `dQ` (Hit Sounds). `ff` and `dq` had never been audited.

Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (after both rewrites).

## Case-collision verification (done before any read)

Byte-level scan of the ground-truth classes (`jar-casesafe`, Latin-1 search of the
declared `sixtwo/<id>` constant-pool string):

| file | size | declares |
|---|---|---|
| `jar-casesafe/sixtwo/ff.class` | 21881 | `sixtwo/ff` |
| `jar-casesafe/sixtwo/fF_.class` | 14478 | `sixtwo/fF` |
| `jar-casesafe/sixtwo/dq.class` | 29608 | `sixtwo/dq` |
| `jar-casesafe/sixtwo/dQ_.class` | 6695 | `sixtwo/dQ` |

Decompile trees:
- `analysis/decompiled/payload-decrypted/sixtwo/ff.java` declares `public class ff`
  (line 69) and **is** Fake Lag (packet queue + Mode/Packet Interval/Lag Range Distance
  ctor) — usable. Its on-disk twin `fF.java` has the same MD5
  (`ADAC2FBDC517C572F018EFCC2F11EEA5`) and also declares `class ff`, i.e. the on-disk
  `fF.java` is a collapsed copy of the ff file; the real fF (Trigger Bot) decompile is
  `casesafe/payload-decrypted/fF_.java` (declares `public class fF`, line 31).
- **`analysis/decompiled/payload-decrypted/sixtwo/dq.java` declares `public class dQ`**
  (line 27) — it is the Hit Sounds twin, NOT Storage ESP. Its twin `dQ.java` is the same
  file (MD5 `935889FD2D393586490E1FC6217E8EF2`). The real Storage ESP decompile is
  `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dq.java` (declares
  `public class dq`, line 70, 1130 lines) and was used throughout.
- Helper classes were likewise resolved by declared name, not path: `cA_`, `cC_`, `cJ_`,
  `ct` (casesafe), `cG` (on-disk `payload-decrypted/cG.java`, declares `class cG`),
  `gb` (casesafe `payload-named-cfr/gb.java`), `kH`/`kH$up`, `kN`, `mT_`, `oh`, `of`,
  `ja` (casesafe), `jJ`, `jc` (casesafe), `lG`, `of`, `hw$tw` (bootstrap mixin).

## Summary

| id | status | parity | fixed |
|---|---|---|---|
| ff | partial (kx indicator + `aIo` render not ported) | ~90% | yes |
| dq | ported (chunk-iteration/item-set widget stand-ins; one [G] interval) | ~95% | yes |

### ff — Fake Lag

**post-fix parity: ~90% | status: partial | fixed: yes (full rewrite of
`src/main/java/dev/opengrim/modules/movement/FakeLag.java`)**

- Source: `analysis/decompiled/payload-decrypted/sixtwo/ff.java` (declared class
  verified: `public class ff extends gg`, ff.java:69; ctor 97-238, handlers
  365-1072). Handler spec `analysis/specs/handlers/ff.md`; structural spec
  `analysis/specs/modules/ff.md` (stale — see corrections).
- Bytecode ground truth: `javap -c -p` on `jar-casesafe/sixtwo/ff.class`
  (scratch copy, 3568 lines) — used for `aIl` (CFR failed), and to re-derive
  `aIo`/`aIp`/`aIq`/`aIm`/`aIn`/`aIj`/`aIk`/`aaj`/`YO` branch order against the
  CFR mangling. Helpers: `mT_` (cpC = `elapsed > arg` strictly, cpF, cpB),
  `cu.SZ()`, `cA.UM/UN/UP/UW`, `cG`, `kH$up`/`kN` (for dq).
- Trace 2026-10-17: `by-class-casesafe/ff.jsonl` = load → `aaj` → `aIl` ×2 →
  `YO` → `aIp` (disable flush); `digests/ff.txt` = aIl 4 / aaj 2 / aIp 2 / YO 2;
  `n-evidence.tsv` has no `ff` rows. **Capture conditions for the unobserved
  methods**: `aIn` needs ticks with the module on; `aIm` needs outbound play
  packets while enabled; `aIq`/`aIr` need a target inside Lag Range Distance in
  Lag Range mode; `aIk` needs an attack on an entity in Lag Range mode; `aIj`
  needs a world disconnect; `aIo` needs the kx indicator toggle on.

#### Fixed (all cited)

1. **De-invented the Normal-mode cycle gate.** The old `onTick` had an invented
   `resetTime`-based start gate plus `cycleStartMs`/`lastReleaseMs` state; the
   original `aIn(gH$th)` (ff.java:947-1021, bytecode 3048-3123) is: `bab()` →
   (Lag Range: `aIq()` ⇒ `aIp(); aIs(); lseaG = draw; return`) →
   `uiKAR.cpC(lseaG)` ⇒ `aIp(); aIs(); lseaG = draw`. The CFR "redraw" block at
   ff.java:1009-1019 is the obfuscator's never-taken branch (the redraw only
   happens after a flush). Rewritten 1:1.
2. **`aIp()` flush** (ff.java:530-574) now bails on `!bab()` (in-game, gg.java:393-458:
   player + world + interactionManager + networkHandler), drains the queue through
   `ClientPlayNetworkHandler#sendPacket`, clears `IydTB`, resets the stopwatch and
   re-anchors `qBKIn` (the old version cleared the queue instead of bailing).
3. **`aIm(gL$tj)` packet capture** (ff.java:679-872): correct check order
   `bab()` → `IydTB` → interaction instanceof chain (the five exact classes, no
   class-name string matching) → Lag Range release/freeze → queue + `bdX(true)`.
   The old impl tested `isInteraction` by `getSimpleName().contains(...)` (it also
   matched unrelated packet names) and had a different release order.
4. **`aIl(gL$tk)` receive resets** (ff.java:877-899, recovered from the bytecode
   tableswitch): explosion → `if (!fFKwZ) return; flush(); lseaG = draw`;
   own velocity update → entity-id check **before** the `bAadz` toggle, then
   `flush(); lseaG = qyvvJ.VC()` (the fixed Reset Time, not the random draw);
   health update → `if (!Bfvhw) return; flush(); lseaG = draw`. The old impl
   redrew unconditionally and drove an invented `lastReleaseMs`/`cycleStartMs`.
5. **`aIq()` release test** (ff.java:576-670) rewritten to the bytecode order:
   no target ⇒ true; distance outside the band ⇒ `nlYuR = false`, true;
   `nlYuR` ⇒ true; `frozenBox == null` ⇒ false; else
   `d(frozenCenter, targetBox) < d(liveCenter, targetBox)`.
6. **`aIr()` target scan** (ff.java:936-938 = `oh.cCY().cDb(FUqia).cDg(of.ahXwo)
   .cDm()`) now matches `oh` exactly (oh.java:217-348): all `world.getEntities()`,
   exclude the local player, `LivingEntity` only, `!isDead()`, invisible entities
   **kept** (the `iepqN` default true, analysis/specs/handlers/eP.md:75), band on
   `jg.bBJ(eyePos, box)`, nearest by `of.ahXwo` = `comparingDouble(e ->
   e.distanceTo(player))` (of.java:69 — see spec correction below). The old impl
   used a ±range AABB query and ignored the `isDead`/band shape.
7. **Lifecycle**: `aaj()` (ff.java:365-374) = clear queue, `qBKIn = player pos`,
   `lseaG = draw`, stopwatch reset, `Stryf = null`, `nlYuR = false` — the old impl
   had an invented `lastReleaseMs = now`. `YO()` = `aIp()` (flush on disable).
8. **`aIj(gM)`** (ff.java:1024-1027) ported as the repo's world-null convention
   (`held.clear()` + `setEnabled(false)`, i.e. packets are **dropped**, not
   flushed) — the old impl had no such path.
9. **`aIk(hw$tw)`** (ff.java:1030-1064) ported: in-game + Lag Range mode ⇒
   `nlYuR = true` (attack latch).
10. **Settings exactness (verified, kept verbatim).** The old file's seven chains
    already matched the decompile and are unchanged — Packet Interval
    `cA .UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH(" ms")` (ff.java:136),
    Lag Range Distance `cA .UG(0.1).UE(1.0).UF(6.0).UI(1.0, 3.6).UH(" blocks")`
    (ff.java:156, visible only in Lag Range mode, ff.java:237), Reset On Knockback
    false (ff.java:176), Reset Time `cC .Vy(5.0).Vw(0.0).Vx(1000.0).VA(100.0)
    .Vz(" ms")` (ff.java:188), Reset On Explosion true (ff.java:208), Reset On
    Health Update false (ff.java:232), Mode + Normal/Lag Range children in
    declaration order (ff.java:100/108/119). They are now cited per line; the only
    missing widget is the `kx` indicator toggle (gap below).
11. **State readouts added as the original's named getters** (`aIF` hold pos,
    `aIH` interval, `aII` frozen box, `aIG` flushing, `aIJ` latch, `aID` queue) —
    none existed before; repo-wide grep shows no readers, so this is a fidelity
    addition, not a compatibility break.

#### Remaining gaps

- **[U] the embedded `kx AhpMu` indicator and its `aIo(go$sX)` render handler
  (ff.java:233, 440-501) are not ported.** Evidence: the toggle label is a 22-char
  DES literal built through `kx.bSc("z", …)` whose class key comes from native
  `gb.aYR` (gb.java:60 `public static native ga aYR(long, long, Object)`); there
  are **no `sixtwo.kx` records** in `analysis/decrypted/full-dump.jsonl`
  (grep: 0) and none in `analysis/decrypted/gui-dump.jsonl` /
  `gui-strings.jsonl` / the runtime `strings-full.tsv`, so the key cannot be
  derived (GuiStrings.java derives it by *running* the class against the native
  DLL). `kr`'s option-list builder also failed to decompile and `kt.bQQ` draw
  body is native. The sibling port of `fp` (Backtrack, which also embeds a `kx`)
  likewise leaves it out. Capture condition: run the original with the indicator
  toggle visible, dump the `kx` bootstrap sites (PoolDump/GuiStrings with
  `POOLDUMP_DLL`) and log `bQZ/bRb/bQV/bQQ` arguments.
  Consequence: the indicator's own setting is absent from the ported tree and the
  world-render handler is not implemented (the port therefore draws nothing).
- **[S] `cA` two-handle ranges → single-value sliders.** `cA` is a range widget:
  `UI(lo, hi)` seeds `MutablePair` handles, `mU.cpR` draws
  `pcazh.nextDouble() * (hi - lo) + lo` on every redraw (mU.java:125-127, 215-219)
  and `cA.UM(d)` tests `lo <= d <= hi` (cA_.java:391-429). Our tree has no range
  widget, so the port keeps the left handle (100 ms / 1.0) as a plain
  `DoubleSetting` and drops the per-cycle random draw — the established peer
  reduction (WTap, SpearDoubleTap, AutoStunSlam, Ambience). For Lag Range
  Distance the single value is read as the **upper** bound
  (`d <= value`, `d <= lag_range_distance` in the target scan) because the
  original's lower handle equals the widget minimum (1.0); the original's band
  shape (release when the target is *closer* than 1.0) is therefore not
  reproduced. Capture condition: enable Lag Range mode with a target at
  < 1 block and compare hold behaviour.
- **[S] `mT` stopwatch inlined** (`System.currentTimeMillis()`; `cpC` strictly
  `>`, `cpF` elapsed, `cpB` reset — mT_.class javap). The original stores the
  stopwatch as a per-module object; behaviour identical.
- **[S] the `aIm` connection-identity check** (`event.dpm() ==
  client.getNetworkHandler().getConnection()`, ff.java:710) is not expressible:
  our `PacketSendEvent` is posted from `ClientConnection#send` and carries only
  the packet (ClientConnectionMixin.java:26-44). The play connection is the only
  sender in practice.
- **[S] `aIk(hw$tw)` pre/post attack.** `hw$tw` is the attack-**post** event
  (bootstrap `mixin/accessors/InteractionEventBridgeMixin.java:39-51`, injected at
  the TAIL of `PlayerEntity#attack`; the cancellable pre event is `hw$tv`, same
  file 27-37). Our bus only exposes the pre-attack `AttackEntityEvent`
  (EventBridge.java:29-32), used as the stand-in.
- **[S] `aIj(gM)`**: `gM` is the `ClientWorld.disconnect` event (TargetEsp /
  JumpCircle / AutoMarket convention); no such event in the bus, so the body runs
  from the `client.world == null` guard at the top of `onTick` (before the
  `bab()` bail, because `bab()` is false while the world is null).
- **[U] `gf.aZL(18, false, gh.xwjCw).aZS(false)`** (ff.java:99): the second
  boolean flag `aZS(false)` has native semantics (00-framework.md:27-28); the
  repo keeps its semantic category assignment for `xwjCw` (PARITY.md:1019-1022).

#### Spec corrections (for the orchestrator)

- `handlers/ff.md` "Unrecovered": **`of.ahXwo` is recovered** — the enum
  comparators are visible in the decompile (of.java:68-70):
  `OGxYa = (a, b) -> 0`, `ahXwo = Comparator.comparingDouble(e ->
  e.distanceTo(rD.dlmvG.player))`, `FraBu = comparingDouble(LivingEntity::getHealth)`
  (the same table recovered for eP in `handlers/eP.md:107-109`).
- `handlers/ff.md` "Unrecovered": the `kx` toggle is **not** ~22 "chars" only —
  it is 22 chars by construction (`int[22]`), still unrecovered; no change of
  conclusion, but the reason is the native `gb.aYR` class key, not a missing dump
  entry alone (no `sixtwo.kx` records exist at all).
- `handlers/ff.md` per-handler 5 (`aIl`): confirmed against the bytecode —
  *and* note the interval redraw happens **only** when the toggle is on
  (explosion: `ifeq` → return before `aIp`; velocity: id check → toggle →
  `aIp` + `qyvvJ.VC()`; health: toggle → `aIp` + `qWnBv.UN()`).
- `handlers/ff.md` per-handler 6 (`aIn`): the "Normal mode" redraw is
  conditional on the stopwatch gate; the CFR block that redraws unconditionally
  (ff.java:1009-1019) is the obfuscator's never-taken branch.
- `modules/ff.md` "Settings (8 constructed)" is stale: it omits the `cC` Reset
  Time widget (ff.java:188) and the `kx` component (ff.java:233); it also lists
  the settings without Reset Time. Superseded by `handlers/ff.md` + this report.
- `modules/ff.md` "Event listeners (0 @hG methods)" is wrong: ff declares six
  `@hG` listeners (ff.java:440, 679, 877, 945, 1023, 1029).

#### Evidence

- `analysis/decompiled/payload-decrypted/sixtwo/ff.java` (cited line ranges).
- `javap -c -p` on `jar-casesafe/sixtwo/ff.class` (ctor 52-2020, aaj 2021-2055,
  YO 2057-2063, aIo 2253-2330, aIp 2415-2479, aIq 2480-2588, aIm 2589-2772,
  aIl 2773-2930, aIs 3038-3046, aIn 3048-3133, aIj 3134-3143, aIk 3144-3179).
- `javap -c -p` on `jar-casesafe/sixtwo/mT_.class` (cpC/cpF/cpB),
  `cu.class` (`SZ`), `ct.class` (`SL/SM/SP/SQ`), `kH_$up.class` + `kN_.class`
  (dq draw order), `of`/`oh` decompiles.
- `analysis/specs/handlers/ff.md`, `analysis/specs/modules/ff.md`,
  `analysis/specs/handlers/eP.md:63-99` (`oh` filter order + comparator table).
- Trace 2026-10-17: `by-class-casesafe/ff.jsonl`, `digests/ff.txt`.
- `analysis/decompiled/bootstrap/mixin/accessors/InteractionEventBridgeMixin.java`
  (`hw$tv` = attack-pre, `hw$tw` = attack-post).
- `analysis/decrypted/full-dump.jsonl` (0 `sixtwo.kx` / `sixtwo.ff` records),
  `gui-dump.jsonl`, `gui-strings.jsonl`, `analysis/tools/decryptor/GuiStrings.java`
  (key derivation requires the native DLL).

### dq — Storage ESP

**post-fix parity: ~95% | status: ported | fixed: yes (full rewrite of
`src/main/java/dev/opengrim/modules/render/StorageEsp.java`)**

- Source: `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dq.java`
  (declared `public class dq extends gg implements lG`, line 70; ctor 107-609,
  handlers 716-1138). Handler spec `analysis/specs/handlers/dq.md` (accurate);
  structural spec `analysis/specs/modules/dq.md` (stale — see corrections).
- Bytecode ground truth: `javap -c -p` on `jar-casesafe/sixtwo/dq.class`
  (6620 lines): ctor, aaj 5711-5785, ahO 5786-5907, ahS 5908-5924,
  ahT 5925-5948, ahW 6296-6309, ahQ 6352-6607, ahP 6608-6669.
- Helper ground truth: `ja.java:42-44` (`byD` = `new ArrayList<>(
  chunk.getBlockEntities().values())`, `byG` native), `jJ.java:87-117`
  (`bIC` = `bIA(pos.toCenterPos())` = frustum box `new Box(pos)`),
  `lG.java` (`MMuss = new kN()`, `dJxyG = new kL()`), `kN_.class`
  (`bUS` draw order: `bUV` outline always → `bUW` fill gated by the 3rd
  `bTJ` flag → `bUX` third pass gated by the 4th flag), `kH$up`
  (`dtN`=outline, `dtO`=fill, `dtQ`=`bTQ`, `dtR`=`bTR`), `jc.FFgfM`
  (`Set.of` of SHULKER_BOX + the 16 colors, jc.java:2169-2187),
  `cC_.java:181-194` (`Vy`=step, `Vw`=min, `Vx`=max, `VA`=default, `Vz`=suffix).
- Trace 2026-10-17: `by-class-casesafe/dq.jsonl` = load → `aaj` → (`ahP` →
  `ahR` → `ahW`) ×6; `digests/dq.txt` = ahW 6 / ahR 6 / ahP 6 / aaj 2.
  Observed: every `ahP` reached `cpC` and returned elapsed (6/6 scans),
  `ahR` ran 113 ms-1.5 s off-thread, `ahW` swapped ~1.5 s later on the main
  worker. **Capture conditions for the unobserved methods**: `ahQ` needs a
  world-render frame with a non-empty list (the window's render path was not
  captured); the frustum/tracer branches need boxes in/out of view.

#### Fixed (all cited)

1. **Scan set is now item-exact.** The old `classify()` used `instanceof` (so
   blast furnaces and smokers also matched, because they share
   `AbstractFurnaceBlockEntity`, while their block items are `BLAST_FURNACE` /
   `SMOKER` and are therefore **not** shown by the original); the original keys
   strictly on `getCachedState().getBlock().asItem()` against
   `bZIEf` (dq.java:881-930) and additionally on `ahO(item)`. Rewritten: the nine
   seeded items + `jc.FFgfM` collapse (dq.java:773-825: `selected(item) ||
   (FFgfM.contains(item) && selected(SHULKER_BOX))`) — the old impl had no
   colored-shulker collapse, so colored shulkers did not follow the Shulker Box
   toggle.
2. **Loaded-chunk scan instead of a fixed 6-chunk radius.** `ja.byG()` is the
   native loaded-chunk list; the port snapshots the chunks around the player
   within the clamped view distance + 1 on the main thread (the list analogue of
   `byG`) and iterates their block entities on the scan executor.
3. **Tick/throttle shape** (dq.java:1078-1138): `bab()` → stopwatch `cpC` →
   `pvnDE` → `CompletableFuture.supplyAsync(scan, balhj).thenAcceptAsync(swap,
   Util.getMainWorkerExecutor())` → `cpB()`. The old impl used a
   `lastScanMs`/`System.currentTimeMillis()` pair and a `client` executor; the
   main-worker swap and the "restart after submission" order are now exact.
4. **`aaj()` enable body** (dq.java:716-721): `DJvpl.clear(); pvnDE = true;` —
   added; the old impl instead cleared on *disable* (the original has **no**
   disable override) and never set the ready flag.
5. **Render** (dq.java:945-1076): outline first, then the fill gated by Filled
   (kN.bUS order), the frustum gate `jJ.bIC` = `frustum.isVisible(new Box(pos))`
   added for the box pass only (tracers are **not** frustum-gated), tracer color
   = the pair's **outline**, tracer origin = first person `(0, 0, 75)` rotated by
   `rotateX(-pitch)`/`rotateY(-yaw)` + eye vs third person bare eye
   (dq.java:1020-1034), tracer target = `pos.toCenterPos()`. The old impl had the
   fill/outline order swapped, no frustum gate, and re-derived the colors from a
   `kind` string.
6. **Settings exactness**: `tracers_width` `cC .Vy(0.1).Vw(1.0).Vx(3.0)
   .VA(1.0)` (dq.java:168), `filled` false (dq.java:144), `tracers` false
   (dq.java:153), Tracers Width visible only with Tracers (dq.java:585), and the
   18 `cG` colors in declaration order with the theme defaults
   (`rD.dlM().bjG().bis()` white outline / `.bis().cob(0.5f)` 50 % white fill,
   dq.java:189-580). The `bZIEf` seeding order (CHEST, BARREL, the `FFgfM` loop,
   SHULKER_BOX wiring, ENDER_CHEST, FURNACE, TRAPPED_CHEST, BREWING_STAND,
   SPAWNER, HOPPER) and the nine seed items in the item-list setting
   (dq.java:126-135) are 1:1; per-color visibility is driven by `ahO(item)`
   (dq.java:842-850).
7. **Removed invented readouts** (`getFillColor(String)`, `getOutlineColor`,
   `Storage` record, `CHUNK_RADIUS`, `RESCAN_INTERVAL_MS`, the named scanner
   thread's semantics) in favour of `bZIEf`/`DJvpl` analogues; verified no other
   module referenced them (repo-wide grep).

#### Remaining gaps

- **[G] the rescan throttle `irQyF`.** A class-key DES literal
  (`2175719190397083330L`, dq.java:710-713) decrypted with the key derived from
  native `gb.aYR(-8878282971857989560L, 7372403609700005598L, dq.class)`
  (dq.java:618). There are **no `sixtwo.dq` records** in
  `analysis/decrypted/full-dump.jsonl` (grep: 0), so the key is unavailable
  statically; the only trace constraint is that every observed `cpC` returned
  elapsed (max observed gap 14.4 s), i.e. `irQyF <= 14.4 s`. The port uses
  **250 ms** (the old impl's value), labelled `[G]` in the javadoc.
  Capture condition: hook `mT.cpC`'s argument (or the `dq` bootstrap key) while
  running the original.
- **[S] `cK` item-set widget → `GroupSetting` + nine `BoolSetting`s** in seed
  order (the TrapEsp `scan_for` convention); the extra `cK.WQ()` flag
  (dq.java:136) has native semantics and no representation ([U]).
- **[S] `ja.byG()` (native loaded chunks)** approximated by
  `WorldChunkManager#getChunk(x, z, ChunkStatus.FULL, false)` over the clamped
  view distance + 1; `ja.byD(chunk)` is ported literally.
- **[S] `MMuss`/`dJxyG` batchers + `kH.bTJ`/`kF.bTn` builders** replaced by direct
  `VertexConsumer` draws on `RenderLayers.debugFilledBox`/`lines()` with the same
  geometry/order/colors; `kH.bTJ`'s 4th argument (constant `false`, the unused
  third pass gated by `bTR`, kN.bUS) has no equivalent.
- **[S] theme defaults** resolve to white / 50 % white — the theme object
  (`rD.dlM().bjG()`) is not statically recoverable; the peer ports use the same
  white convention (PopChams, SkeletonEsp, Trails).
- **[S] `cG` colors → `ColorSetting`**; the original's `mG` color object also
  carries a rainbow/alpha mode (`cob(float)`), not modelled.
- **[N] `ExecutorService balhj` creation details** (thread factory/daemon) are in
  a constructor branch CFR did not show; the port uses a single-thread daemon
  executor, matching the observed single `ahR`-at-a-time behaviour.

#### Spec corrections (for the orchestrator)

- `handlers/dq.md` cites `analysis/decompiled/payload-decrypted/sixtwo/dq.java`
  as PRIMARY — **that path holds the `dQ` (Hit Sounds) twin**; the correct file is
  `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dq.java` (the cited line
  numbers 107-1138 match the casesafe file). The old impl's javadoc repeated the
  wrong path.
- `handlers/dq.md` "Unrecovered": `jc.FFgfM` is **recovered** —
  `Set.of(SHULKER_BOX, WHITE, ORANGE, MAGENTA, LIGHT_BLUE, YELLOW, LIME, PINK,
  GRAY, LIGHT_GRAY, CYAN, PURPLE, BLUE, BROWN, GREEN, RED, BLACK_SHULKER_BOX)`
  (jc.java:2169-2187).
- `handlers/dq.md` per-handler `ahP`: step 1/2 description of `pvnDE` as a
  "previous scan finished" busy check is not what the bytecode does — `pvnDE` is
  only ever written `true` (dq.java:720 in `aaj`, 1128 in `ahW`; bytecode
  putfield at 5720 and 6308, read at 6641), so after enable the gate never
  blocks. The spec's "effective scan period is irQyF plus scan time" holds.
- `handlers/dq.md` "Concurrency model": confirmed (scan off-thread, swap on
  `Util.getMainWorkerExecutor()`).
- `modules/dq.md` "Settings (2 constructed)" is stale (it lists only Filled and
  Tracers; the class builds 22 settings) and its "Event listeners (0 @hG
  methods)" is wrong (two: `ahQ` dq.java:945, `ahP` dq.java:1078).
- `handlers/dq.md` helper line for `kH.bTJ`: the fourth argument is a *second
  draw pass* gate (`bTR`, unused by dq because `dtP` is never called), not
  "depth test" — kN.bUS javap.

#### Evidence

- `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dq.java` (cited ranges).
- `javap -c -p` on `jar-casesafe/sixtwo/dq.class`, `kH_.class`/`kH_$up.class`,
  `kN_.class`, `mT_.class`, `lG.class`.
- `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/{ja,jc,jJ}.java`,
  `payload-named-cfr/sixtwo/{cA_,cC_,ct,cu}.java` (casesafe copies),
  `payload-decrypted/sixtwo/cG.java`.
- `analysis/specs/handlers/dq.md`, `analysis/specs/modules/dq.md`,
  `analysis/specs/handlers/eP.md` (`oh`/`of` cross-check).
- Trace 2026-10-17: `by-class-casesafe/dq.jsonl`, `digests/dq.txt`,
  `raw/trace.jsonl` (`mT.cpC` return values around the six `ahP` calls).
- `analysis/decrypted/full-dump.jsonl` (0 `sixtwo.dq` records).

## Changed files

- `src/main/java/dev/opengrim/modules/movement/FakeLag.java` — full rewrite
  (settings order/chains, all handlers 1:1 from decompile+bytecode, gM/world-null
  and attack-post stand-ins labelled, kx indicator gap documented).
- `src/main/java/dev/opengrim/modules/render/StorageEsp.java` — full rewrite
  (22 settings 1:1, item-exact scan + shulker collapse, loaded-chunk snapshot,
  main-worker swap, frustum-gated box pass and ungated tracer pass in the
  original order, `[G]` 250 ms interval labelled).
