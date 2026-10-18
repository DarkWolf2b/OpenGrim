# Framework follow-ups — audit 2026-10-17

Subagent: framework follow-up fixer. Input: `general-framework-review.md` §5 (follow-ups)
+ §3 (risky findings). Scope: the four provable items only — `ff` Fake Lag bind,
`cR` Particles packet-thread safety, `CollisionShapeMixin` guard, `dl` Outlines
`isOutliningActive` — plus classification of the remaining documented follow-ups.
`gui/**`, the wave-1 group-B module set, and the ledgers were not touched.

Compile: `.\gradlew.bat compileJava -q --offline` → **exit 0** (first try).
Bytecode of the three code changes re-verified with `javap` against
`build/classes/java/main` (see each item).

---

## 1. `ff` Fake Lag default bind — **FIXED**

* Registry: `ff sixtwo.ff Fake Lag … key=18 bind=82` (`analysis/specs/registry.tsv:144`;
  original client metadata `analysis/jars/bootstrap-raw/offline/features/metadata.txt:34`:
  `sixtwo.ff|Fake Lag|Creates lagging effect|key=18|bind=82`). The impl javadoc already
  stated "bind 82" (`FakeLag.java:32`) but the constructor never called `setBind`.
* Change (`modules/movement/FakeLag.java:139`):
  ```java
  setBind(82); // registry metadata.txt:ff key=18 bind=82
  ```
  (same call/comment shape as Kill Aura's `KillAura.java:184`).
* Verified: `javap -c FakeLag` shows `bipush 82` → `invokevirtual setBind:(I)V` in the
  constructor. With this, all 7 registry-bound modules match the registry (the other six
  were already correct; the review fixed Kill Aura).

## 2. `cR` Particles packet-thread safety — **FIXED** (hardened, documented divergence)

Evidence chain:

1. **Our receive path is the netty thread.** `ClientConnectionMixin.java:46-53` injects at
   `channelRead0` HEAD. Yarn 1.21.11 build.6 `javap`: `ClientConnection.channelRead0`
   calls `handlePacket(Packet, PacketListener)` inline (bci 45) and `handlePacket` is only
   `packet.apply(listener)` — no thread hop before it. So every `PacketReceiveEvent`
   subscriber runs on the netty event loop.
2. **The original's receive path is the same thread.** The original dispatches `gL$tk`
   from the bootstrap `ConnectionEventBridgeMixin` (`analysis/decompiled/bootstrap/mixin/accessors/ConnectionEventBridgeMixin.java:36-46`),
   which injects `method_10759` HEAD — `method_10759` = `ClientConnection.handlePacket`
   (`analysis/jars/yarn-1.21.11+build.6.tiny:42517`) — i.e. the identical netty-thread
   entry point. (This supersedes the general review §3.1 note that the hook thread was
   "not statically recoverable"; batch-21 reached the same conclusion.)
3. **`cR` itself uses a plain `ArrayList`.** Field `private final List<mq> ImFtb`
   (`cR.java:102`), constructed as `new ArrayList<mq>()` (`cR.java:268`); ground-truth
   bytecode confirms (`javap` on `jar-casesafe/sixtwo/cR_.class`: `putfield ImFtb:Ljava/util/List;`
   with `new java/util/ArrayList`). So the original carries the same latent
   concurrent-modification race between its receive handler (`YR`, `ImFtb.add` at
   cR.java:456) and the tick/render handlers (main thread: `removeIf` cR.java:530,
   `add` 668/711/727, `clear` 473/871, iterate 747).
4. **The original's own thread-safe pattern for this dispatch is cZ.** Soul Effects uses
   `new CopyOnWriteArrayList<cZ$su>()` and `ConcurrentHashMap.newKeySet()`
   (`cZ_.java:208-209`) — the port already mirrors that (`SoulEffects.java:146`).

Fix (`modules/render/Particles.java`): `activeParticles` is now a
`CopyOnWriteArrayList` (`Particles.java:152`), with the divergence documented in the
class javadoc ("Known gaps / divergences", Particles.java:105-112) and a field comment
(Particles.java:144-151). Chosen over a main-thread handoff because it is the minimal
change that preserves exact spawn timing (a handoff queue would defer the totem burst up
to one tick) and because the receive handler only ever **adds fresh instances** — all
field mutation of existing particles stays on the main thread (tick + render), so the
COW snapshot removes the CME without further synchronization. Cancellation semantics are
untouched (this handler never cancels).

Verified: `javap -c Particles` shows `new java/util/concurrent/CopyOnWriteArrayList`.
`removeIf`/`clear`/iteration on COW are all supported on Java 21.

Also checked (review §3.1 second exposure, no edit): `Ambience` writes plain `float`
fields from the netty path — 32-bit writes are atomic, worst case a stale read, no
collection involved; and its packet drops must stay at the interception point.

## 3. `CollisionShapeMixin` re-entrancy guard — **FIXED**

* Change (`mixin/CollisionShapeMixin.java:24-30`): the static `boolean` guard became
  `private static final ThreadLocal<Boolean> opengrim$resolvingReplacement =
  ThreadLocal.withInitial(() -> Boolean.FALSE)` — the exact pattern of
  `ClientConnectionMixin.java:24` (get/`Boolean.TRUE.equals`, set TRUE before the nested
  query, reset FALSE in `finally`). Same-thread nested calls still take the vanilla path
  (the StackOverflow fix is preserved); a concurrent query on another thread (client vs.
  integrated-server in singleplayer) is no longer misread as re-entrant and now gets the
  replacement shape.
* Verified: `javap -p CollisionShapeMixin` shows
  `private static final java.lang.ThreadLocal<java.lang.Boolean> opengrim$resolvingReplacement`.

## 4. `dl` Outlines `isOutliningActive` — **DOCUMENTED** (provably not settable now)

Recovered lifecycle of `kn.YNOIY` (the flag this field mirrors):

* `dl#agJ` (world render) collects the entity list; if non-empty it builds a `Runnable`
  (`dl.java:504-530`) that sets `kn.YNOIY = true` (dl.java:507), fills the outline batch
  (`lH.cgm(kn.bQt(entity, tickDelta, matrices))` per entity, `lH.cgp()` flush) and resets
  it in a `finally` (dl.java:527). The runnable is handed to `ki.bPi` (dl.java:531).
* `ki.bPi` → `ki.bPk` runs the runnable synchronously inside `kn.bQo(runnable)`
  (`ki.java:206-266`, run at 243) while the main render target is swapped to the outline
  framebuffer `ZtWVe` (241, restored in the finally at 246) and then composites through
  `kn.bQr(kR.MNKWu, ZtWVe, …)` (249). `kn.bQo` itself just runs the runnable
  (`kn.java:332-340`).
* Consumers: `dl#agK` cancels vanilla nameplates while it is true (`dl.java:538`) and
  `dr#aib` (Health Indicators) returns early (`dr.java:247`) — both fire while the batch
  draws entities (and their nameplates) into the framebuffer.
* So in the original the flag is true **only** during that outline framebuffer pass —
  nowhere else (the module's tick and collection never touch it).

In this rebuild there is no outline framebuffer/post-process consumer and the `ki.bPi`
dispatch is not executed (already documented gap), so **no window exists in which the
flag could provably be true**. Setting it true around the port's `onTick` collection
would diverge from the recovered behavior (the original does not set it there and the
port's Health Indicators render at `AFTER_ENTITIES`, not during any outline pass), so no
code sets it. Action taken: precise documentation only —

* `Outlines.java:49-52` (class javadoc): states the flag is set only inside the
  unexecuted batch and stays false.
* `Outlines.java:55-67` (field javadoc): full recovered lifecycle with line citations,
  and why `shouldCancelNameplate()` / the Health Indicators suppression
  (`dr.java:247` guard, read at `HealthIndicators.java:148,175`) remain inert until an
  outline batch consumer is wired.

---

## Remaining documented follow-ups — classification confirmed (no edits)

1. **`eV.aEq()` Auto Crystal gate — correctly not-fixable-now.** `eV.aEq()` is a
   `public static native boolean` (`eV.java:321`) with no recovered body; `eX` reads it
   in its constructor (`eX.java:226`) and the true branch calls `iS.bwK("T2qMoc")`
   (eX.java:340-342) — a notification whose DES literal is not decrypted in the dump;
   `eU`'s `aDC` prologue reads it too (trace observed 0/false). Fixing it needs
   (a) a runtime capture with Auto Crystal enabled to recover the polarity/semantics,
   (b) edits on both sides — `eU` (AirAnchor) is owned by the running wave-1 group-B
   agent — and (c) the notification subsystem (`qu`/`qt`/`cN`) is not ported, so the
   warning branch has no target. No accessor was added (an accessor without a consumer
   would be dead surface).
2. **GUI-side gaps — correctly deferred.** `setBind` callers are module constructors
   only (no in-game bind editor); `config/UiThemeStore` (+`RpJson`) has no references
   outside its own file, so theme/scale/window layout are still not persisted; the
   RShift collision (Interface bind 344 vs. `GuiManager`'s Click GUI key) is decided in
   `gui/**`. All three are GUI-owner items and `gui/**` is off-limits for this task.
3. **Dead framework surface — correctly classified harmless, no edits.** Grep-verified
   no external callers: `SettingPersistence`, `config/UiThemeStore`+`RpJson`,
   `keybind/KeyBindingHelperFacade`, `EventBus.listenerCount`,
   `RotationManager.{currentRequest,setFallback,setSilentActive,isSilentActive}`,
   `Rotation.{ofEntity,fromDirection,angularDistance,applyTo}` (`ofEntity` →
   `fromDirection` internal only). `WorldRenderEvent.BEFORE_TRANSLUCENT`/`END_MAIN` are
   posted with no subscribers (cheap; extension points). Wiring or deleting any of these
   is a framework design decision, not a provable follow-up fix.
4. **`Ambience` netty-thread floats (review §3.1)** — atomic 32-bit writes, stale-read
   only, no collection mutation; not a crash fix, no edit (not in the task's fix list).

## Files changed

| file | change |
|---|---|
| `src/main/java/dev/opengrim/modules/movement/FakeLag.java` | `setBind(82)` in the constructor |
| `src/main/java/dev/opengrim/modules/render/Particles.java` | `activeParticles` → `CopyOnWriteArrayList` + documented divergence |
| `src/main/java/dev/opengrim/mixin/CollisionShapeMixin.java` | guard → `ThreadLocal<Boolean>` |
| `src/main/java/dev/opengrim/modules/render/Outlines.java` | precise lifecycle documentation for `isOutliningActive` (no behavior change) |

No PARITY/PROGRESS edits, no git operations, no foreign files touched.

## Verification log

| step | command | result |
|---|---|---|
| compile | `.\gradlew.bat compileJava -q --offline` | exit 0 |
| FakeLag bind | `javap -c build/classes/java/main …FakeLag` | `bipush 82` → `setBind(I)V` |
| Particles list | `javap -c …Particles` | `new java/util/concurrent/CopyOnWriteArrayList` |
| guard | `javap -p …CollisionShapeMixin` | `ThreadLocal<java.lang.Boolean>` field |
| original list type | `javap -c jar-casesafe/sixtwo/cR_.class` | `new java/util/ArrayList`, `putfield ImFtb:Ljava/util/List;` |
| receive thread | `javap -c` yarn build.6 `net.minecraft.network.ClientConnection` | `channelRead0` → `handlePacket` inline; `handlePacket` = `packet.apply` only |
| bootstrap hook | `ConnectionEventBridgeMixin.java:36-46` + `yarn…tiny:42517` | `method_10759` = `handlePacket` |
