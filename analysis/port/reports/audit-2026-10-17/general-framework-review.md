# General framework & coherence review — audit 2026-10-17

Reviewer: general-framework subagent (framework/core, event wiring, cross-module
integration, coherence). Scope: `core`-equivalent files (`OpenGrimClient`,
`module/`, `modules/Modules.java`), `event/`, `rotation/`, `config/`+`settings/`,
`keybind/`, `util/FriendsManager`, non-module `mixin/`,
`src/main/resources/{fabric.mod.json,opengrim.mixins.json,assets/**}`, plus the
cross-module integration points listed in the task. `gui/**` and module impls
owned by the running re-verify agents were read-only.

Evidence base: the decompiled original (`analysis/decompiled/**`, case-safe
trees), `analysis/specs/00-framework.md`, `analysis/ghidra/framework-findings.md`,
`analysis/specs/registry.tsv`, `javap` against the yarn
`1.21.11+build.6` merged jar, the Fabric API 0.139.4 sources, and two standalone
runtime probes run against `build/classes/java/main`.

Compile: `.\gradlew.bat compileJava -q --offline` → **exit 0** (only a
deprecation note from `modules/world/AutoMlg.java`, a foreign file).

---

## 1. Fixes applied (provable, surgical)

### 1.1 [BROKEN] Config persistence never loaded — load/save format mismatch

* `ConfigManager.save()` wrote the bare module map
  (`GSON.toJson(states)`, old line 81) while `load()` parsed the file into
  `ConfigManager.class` (old line 41) — a type whose only field is `states`.
  Gson maps JSON properties to fields by name, so every top-level
  `"<module id>"` property was silently skipped and `parsed.states` stayed
  empty: **config load was a no-op for modules, binds and settings**.
* Impact: every setting, bind and enable state was lost on restart (the file
  was written but never read).
* Fix (`config/ConfigManager.java`): file shape is now
  `{"modules": { "<id>": {enabled, bind, settings} }, "friends": [...]}`;
  `load()` parses the `modules` object (and still accepts a bare module map for
  files written by the old, unreadable layout), `save()` writes the wrapper.
  Load order is now bind → settings → enable, so `onEnable()` sees the loaded
  values instead of defaults (`ConfigManager.java:74-86`).
* Verified by a standalone Gson probe (`CfgTest`): new shape round-trips
  (`roundtrip ok=true`) and the legacy bare-map shape still parses
  (`legacy ok=true`).

### 1.2 [BROKEN] RotationManager froze silent rotations at the first submission

* `submitRotation` kept the first queue entry for an owner and only extended its
  expiry, while `tick()` re-synced `pending = head.rotation()`. A module that
  submits a new silent rotation every tick (25 modules do: KillAura, AimAssist,
  Hitbox, AnchorMacro, Nuker, …) therefore had its rotation **frozen at the
  first value submitted after enable**.
* Original evidence: `sixtwo.mt#cmc` removes every entry of the same owner and
  then adds the new request (`casesafe/payload-named-cfr/sixtwo/mt.java:146-150`,
  bytecode-verified) — newest submission wins.
* Fix (`rotation/RotationManager.java:95-109`): `queue.removeIf(existing ->
  existing.owner() == owner); queue.add(new RotationRequest(...))`.
  `RotationRequest.extendExpiry` became dead and was removed.
* Verified by a standalone probe (`RotTest`, reflection on the private queue):
  `resubmission replaces pending = true`, `resubmission does not grow queue =
  true`, `expired clears pending = true`, `disabled owner purged = true`.

### 1.3 [RISKY] EventBus rethrew listener exceptions — original swallows them

* `EventBus.post` rethrew `RuntimeException`/`Error` from a listener, aborting
  the dispatch loop and the calling game tick. The original's `hH#bdV`
  dispatches in a `try { … } catch (Throwable) { t.printStackTrace(); }` per
  listener (`casesafe/payload-named-cfr/sixtwo/hh.java` bytecode; confirmed by
  `javap` on `jar-casesafe/sixtwo/hH_.class`: exception table `50→76 Throwable`,
  handler `Throwable.printStackTrace`), i.e. one broken handler never kills the
  loop.
* Fix (`event/EventBus.java:71-79`): catch `Throwable`, `printStackTrace()`,
  continue with the remaining listeners.

### 1.4 [GAP] Friends list was never persisted

* `util/FriendsManager` was session-local ("persisted separately later",
  `FriendsManager.java:9`) and no framework code saved it. The original's friend
  store is the `qQ` name registry, serialized to config via `qQ.ddD()`
  (`analysis/specs/handlers/dm.md` "qQ / rD.dmc()") — the store read by the
  friend-aware modules.
* Fix (`config/ConfigManager.java:88-96,116-118`): the friend list is written as
  the top-level `friends` array and restored on load
  (`FriendsManager.clear()` + re-add). Covered by the CfgTest probe.

### 1.5 [BROKEN] Kill Aura default bind missing

* Registry: `fr sixtwo.fr Kill Aura … key=5 bind=82`
  (`analysis/specs/registry.tsv:155`); the port registered no bind.
* Fix (`modules/combat/KillAura.java:184`): `setBind(82)` (GLFW `R`), matching
  Elytra Target's registry bind (82) as in the original.
* Remaining: **Fake Lag (`ff`, bind=82, `registry.tsv:144`) is still unbound** —
  its own javadoc states "bind 82" (`modules/movement/FakeLag.java:32`) but the
  constructor never calls `setBind`; file is owned by batch 30 → follow-up, see
  §5.

### 1.6 [GAP] `fabric.mod.json` declared a non-existent icon; module keybinds had no translations

* `"icon": "assets/opengrim/icon.png"` — that file does not exist in
  `src/main/resources` (Fabric logs an invalid-icon warning at startup).
  Removed (`fabric.mod.json`); re-add once an icon asset exists.
* `assets/opengrim/lang/en_us.json` only had `key.opengrim.click_gui`, while
  `KeybindManager` registers `key.opengrim.<module id>` for every bound module
  (`keybind/KeybindManager.java:24`). Added the 6 registered module binds
  (kill_aura, elytra_target, freecam, air_stuck, auto_exp, interface) plus
  fake_lag for the pending bind fix, so the vanilla Controls screen shows names
  instead of raw keys.

### 1.7 [GAP] `MouseScrollEvent` javadoc contradicted its own wiring

* It claimed "(not a screen)", but the mixin fires at the head of
  `Mouse#onMouseScroll` for every scroll — which Mouse Tweaks' wheel transfer
  relies on (it acts only while a `HandledScreen` is open,
  `modules/utility/MouseTweaks.java:148-172`). Javadoc corrected.

---

## 2. Verified-correct (no change needed)

### 2.1 Registration completeness — 162/162

Scripted cross-check of `analysis/specs/registry.tsv` ↔
`modules/Modules.java` ↔ module impls:

| check | result |
|---|---|
| registry rows | 162 |
| `mgr.register(new X())` calls | 162 |
| impl classes declaring `super("<id>", "<name>", …)` | 162 |
| registry names without impl | none |
| impl names not in registry | none |
| impl files not registered | none |
| duplicate module ids | none |

Boot flags: `bootEnabled()` returns true for exactly Discord Activity (`fO`),
No Protocol Disconnect (`fQ`), Client Sounds (`fR`), Resource Pack Bypass
(`fT`), Interface (`fX`) — byte-verified against the `gf.aZL(<id>, true, gh.*)`
registrations in `casesafe/payload-named-cfr/sixtwo/{fT_,fX_}.java` and
`payload-named-cfr/sixtwo/{fO,fQ,fR}.java` (all other 157 modules register
`false`). ✓

Categories: 5 constants, 44/27/43/32/16 = 162 (cardinality matches the
original's `gh` enum of 5; the port's names are its own).

### 2.2 Mixin integrity — 18 files ↔ 18 json entries, all targets exist

* `opengrim.mixins.json` lists exactly the 18 classes present under
  `src/main/java/dev/opengrim/mixin/` (scripted set comparison: no orphans in
  either direction); all are `client`, `"mixins": []`, `required: true`,
  `JAVA_21`. No duplicate/conflicting injections (two `Entity` mixins, two
  `HeldItemRenderer` mixins etc. touch disjoint members).
* Note: this build produces **no refmap** (Loom 1.13 default) and no Mixin AP
  target validation is visible in the compile output, so a successful
  `compileJava` does not prove the injection points resolve — every target was
  therefore checked with `javap` against the yarn build.6 jar:

| mixin | target (verified) |
|---|---|
| `ClientConnectionMixin` | `send(Packet)V`, `channelRead0(ChannelHandlerContext,Packet)V` ✓ |
| `CameraMixin` | `Camera.update(World,Entity,boolean,boolean,float)` ✓ |
| `CollisionShapeMixin` | `AbstractBlockState.getCollisionShape(BlockView,BlockPos)` ✓ |
| `EntityPushMixin` / `PushOutOfBlocksMixin` / `EntityTargetingMarginMixin` | `Entity.pushAwayFrom(Entity)` ✓ / `pushOutOfBlocks(double,double,double)` (protected) ✓ / `getTargetingMargin()F` ✓ |
| `HeldItemRendererMixin` | `renderFirstPersonItem(AbstractClientPlayerEntity,FFHand,FItemStack,FMatrixStack,OrderedRenderCommandQueue,I)` ✓, `renderArmHoldingItem(MatrixStack,OrderedRenderCommandQueue,IFFArm)` ✓, inner `renderItem(LivingEntity,ItemStack,ItemDisplayContext,MatrixStack,OrderedRenderCommandQueue,I)` ✓ |
| `ItemRendererMixin` | static `renderItem(ItemDisplayContext,MatrixStack,VertexConsumerProvider,II[IList,RenderLayer,ItemRenderState$Glint)` ✓, `getItemGlintConsumer(…)` ✓, private static `getSpecialItemGlintConsumer(…)` ✓ |
| `HandledScreenAccessor` | `focusedSlot` (protected) ✓, private `getSlotAt(DD)` ✓ |
| `ItemInHandRendererAccessor` | `equipProgressMainHand/OffHand`, `mainHand`, `offHand` ✓ |
| `LimbAnimatorAccessor` | `animationProgress` ✓ |
| `LivingEntityAccessor` | static `HEALTH` ✓, protected `setLivingFlag(I,Z)` ✓ |
| `ModelPartAccessor` | `cuboids`, `children` ✓ |
| `ClientWorldAccessor` | `pendingUpdateManager` ✓ |
| `MouseMixin` | private `onMouseScroll(JDD)` ✓ |
| `PlayerListEntryMixin` | `getSkinTextures()`, `getProfile()` ✓ |
| `SoundManagerMixin` | `play(SoundInstance)` → `SoundSystem$PlayResult` ✓ |
| `InteractionRangeMixin` | `getBlockInteractionRange()`, `getEntityInteractionRange()` ✓ |

### 2.3 Event vocabulary — every event fired, every event subscribed

17 event classes; each has a real firing site and ≥1 real subscriber
(registration happens on module enable, `module/Module.java:64-70`; nothing
subscribes in a constructor — the only `EventBus.register` callers in the tree
are `Module.setEnabled` and `RotationManager.init`):

| event | firing site | subscribers |
|---|---|---|
| `AttackEntityEvent` | `EventBridge` (Fabric `AttackEntityCallback`) | 14 |
| `AttackPressEvent` | `EventBridge` (Fabric `ClientPreAttackCallback`) | 4 |
| `UseItemEvent` | `EventBridge` (Fabric `UseItemCallback`) | 1 |
| `WorldRenderEvent` (AFTER_ENTITIES/BEFORE_TRANSLUCENT/END_MAIN) | `EventBridge` (`WorldRenderEvents`) | 28 (all on AFTER_ENTITIES) |
| `PacketSendEvent` | `ClientConnectionMixin.send` | 11 (incl. RotationManager) |
| `PacketReceiveEvent` | `ClientConnectionMixin.channelRead0` | 21 |
| `CollisionShapeEvent` | `CollisionShapeMixin` | 3 |
| `EntityPushEvent` / `PushOutOfBlocksEvent` | `EntityPushMixin` / `PushOutOfBlocksMixin` | 1 / 1 |
| `TargetingMarginEvent` | `EntityTargetingMarginMixin` | 1 |
| `InteractionRangeEvent` | `InteractionRangeMixin` | 2 |
| `CameraUpdateEvent` | `CameraMixin` | 2 |
| `HandRenderEvent` / `HandTintEvent` | `HeldItemRendererMixin` / `ItemRendererMixin` | 1 / 1 |
| `SkinTexturesResolveEvent` | `PlayerListEntryMixin` | 2 |
| `SoundPlayEvent` | `SoundManagerMixin` | 1 |
| `MouseScrollEvent` | `MouseMixin` | 1 |

Fabric return conventions checked against the Fabric API 0.139.4 sources:
`ClientPreAttackCallback` returns true to cancel ✓; `AttackEntityCallback` /
`UseItemCallback` cancel with `FAIL` ✓ (the port's
`EventBridge.java:29-43` mapping is correct, including the previously fixed
inversion). `AttackPressEvent` ↔ `gZ$tt` at the head of `doAttack` is the
documented mapping (`modules/render/Hitbox.java:132-134`); Fabric fires it from
`handleKeybinds` for the pressed/press-count case, which is the closest
available hook.

### 2.4 ClientConnectionMixin re-entrancy guard — correct from first principles

* Guard: static `ThreadLocal<Boolean>` set before `EventBus.post`, reset in
  `finally` (`ClientConnectionMixin.java:23-44`); a listener replacement re-sends
  through `send(Packet)` with the guard set, so replacement output is not
  re-posted (the previous StackOverflow path). `ci.cancel()` suppresses the
  original only when cancelled or replaced; identity comparison means
  `setPacket(sameInstance)` is a no-op. ✓
* Other recursion candidates audited: `CollisionShapeMixin` has its own
  re-entrancy flag; `SoundManagerMixin` re-enters for the replacement sound but
  Hit Sounds' filter (`entity.player.attack`) does not match the replacement
  (`entity.experience_orb.pickup`) → terminates; `TargetingMarginEvent`,
  `InteractionRangeEvent`, `SkinTexturesResolveEvent`, `MouseScrollEvent`,
  `EntityPushEvent`, `HandRenderEvent`, `HandTintEvent` handlers do not call
  their own producers; no handler posts its own event class. No other event can
  self-recurse.
* Coverage: the 1-arg `send(Packet)` is the client play-phase entry point
  (`send(Packet)` → `send(Packet,listener)` → `send(Packet,listener,boolean)`,
  bytecode-verified). Only `ClientLoginNetworkHandler` calls the 2-arg form
  directly (client-side), i.e. login-phase sends bypass `PacketSendEvent` —
  harmless, modules need an in-game player. `RateLimitedConnection` is
  server-side only.

### 2.5 Keybinds / binds

* `KeybindManager` registers one vanilla `KeyBinding` per module with
  `bind >= 0`, polls `wasPressed()` per client tick and toggles
  (`keybind/KeybindManager.java:20-36`); `-999` = unbound (registry
  convention) is skipped. Config load runs **before** `init()`
  (`OpenGrimClient.java:25-28`), so saved binds are applied to the registered
  keybindings.
* Registry default binds (7 non-999): Elytra Target 82, Freecam 71, Auto Exp 74,
  Air Stuck 86, Interface 344, Kill Aura 82, Fake Lag 82. Port: the first five
  match; Kill Aura fixed here; Fake Lag missing (module-owned, §5).
* Conflicts are the original's own: key 82 is shared by Kill Aura / Elytra
  Target / Fake Lag, and 344 (Right Shift) is shared by Interface and the Click
  GUI key (`gui/GuiManager.java:35-37`). Matching the registry is correct; no
  dedup should be added.
* Not modelled (gaps, no data loss for defaults): the original's per-module
  bind is an `int[]` primary **and** secondary set (`gg.RcFWc`/`lRvVv`,
  `bap`/`baq`) plus a 2-constant toggle/hold mode enum in `gc`
  (`framework-findings.md` §2); the port has a single int bind and toggle-only
  behaviour. There is also **no in-game bind editor** (no `setBind` caller in
  `gui/**`), and mouse-button binds are not expressible: the original encodes
  mouse buttons in the same int space via `mA.cmN(button)` (0..7, e.g. Add Rule
  Key default 2 = middle mouse, `modules/utility/AutoMarket.java:73-78`), while
  `KeybindManager` uses `InputUtil.Type.KEYSYM` and skips negatives. Module-level
  key settings (AutoMarket, Interface Emote Key) poll GLFW directly and work.

### 2.6 Rotation manager vs `sixtwo.qL` / `sixtwo.mt`

* Queue: max-heap on priority with the original's comparator shape, strict
  owner-enabled + expiry purge (`mt#cmd`, bytecode-verified), tick-driven
  expiry advance (the native `dbK` step, unrecovered) and the fallback slot
  (`JYBGF`). Priority ranks follow `mw` declaration order (the original's ints
  are native-decrypted → documented divergence in `RotationPriority`).
* `effectiveRotation()` (port of `dbC`): bytecode of `dbC` returns `qkMAI` when
  `dcb()` is true and the client rotation only when `qkMAI == null`; the port
  keeps the invariant `pending != null ⇒ silentActive` (cleared on
  `setSilentActive(false)`/queue drain), so the reachable states agree.
* Send-path rewrite (`dbO(gL$tj)` role): replaces look fields of
  `PlayerMoveC2SPacket.Full`/`LookAndOnGround` from the pending silent rotation
  and preserves `onGround`/`horizontalCollision`; position-only packets pass
  through. Packet fields in 1.21.11 are absolute with `changesLook()` flags
  (`javap PlayerMoveC2SPacket`), so the `getX/getYaw(current)` idiom used by the
  rewrite is correct. Registration order (modules first, RotationManager last at
  equal priority) makes the silent look win over module rewrites (NoFall,
  Flight) while keeping their `onGround` flags; a module that *cancels* (FakeLag,
  Blink) runs first, and the held packet is re-dispatched on flush.
* Unused-but-contract API: `currentRequest()`, `setFallback()`,
  `setSilentActive()`, `isSilentActive()` have no callers (`rawPending()` is used
  by TriggerBot).

### 2.7 Cross-module links

| link | state |
|---|---|
| KillAura → `Nuker.isMining()` | connected (`KillAura.java:216`) |
| KillAura → `AutoPotion.isTriggerReady()` | connected (`KillAura.java:226`) |
| TargetMargin → EntityEsp `marginFor` | connected (`EntityEsp.java:109`); `marginFor` not gated on enabled, matching `ds.java:408-409` → `fJ.aUP` |
| Outlines → HealthIndicators `isOutliningActive` | **half-wired**: HealthIndicators reads it (`HealthIndicators.java:148,175`) but nothing ever sets it true (only `onDisable` clears it, `Outlines.java:116`); the original sets `kn.YNOIY` during the outline batch, which this rebuild does not render (documented gap in `Outlines` javadoc) → Health Indicators is never suppressed |
| FriendsManager shared store | connected (24 consumer sites across combat/render/utility/movement + GUI friends page) |
| Auto Crystal (`eV`) gate → Air Anchor (`eU`) / Anchor Macro (`eX`) | **not connected**: the original reads `eV.aEq()` in both modules (trace: `aDC` prologue `eV.aEq() → 0`, spec `casesafe/handlers/eU_.md`); the port documents the gate (`AirAnchor.java:42-54`) but neither `AutoCrystal` exposes an `aEq` analog nor do the consumers read it |
| NameProtect `fS` → `qu.cmARD` bypass | inert by design (`NameProtect.java:65,114`) — `qu` notification subsystem has no port |
| global panic `dh.afl` | no counterpart: `dh.afl()` is a static `iS[]` tamper probe set natively via `dh.afk(...)`, never set anywhere in the payload (verified in `payload-decrypted/sixtwo/dh.java:112,1157-1159,1477-1479`); modules that branch on it (Tracers, SpearReach, …) correctly keep the normal path |
| Cape ↔ SkinProtect skin composition | connected: both compose on `event.replacement()` (`Cape.java:158-166`, `SkinProtect.java:112-120`) |

### 2.8 Settings persistence & GUI state

* Round trip verified by probe: bool/number/string/mode/color/group values
  survive (Gson maps numbers back to `Number`, handled by every
  `deserialize`). Group settings serialize as nested objects; no module has a
  duplicate registered setting id (scripted check over all 162 impls).
* `SettingPersistence` (`cB` port: change/post listeners, visibility gates,
  batching) is **dead code** — no setting, module or GUI references it. Settings
  changes are read live by modules, and visibility is refreshed per tick by the
  modules that need it (e.g. `Ambience.onTick`, `Hitbox.onTick`) or by anonymous
  `Setting.onChange` overrides (10 sites). This is a convention gap, not a
  regression; wiring `SettingPersistence` into `Setting` would need GUI
  coordination.
* GUI state: `config/UiThemeStore` + `RpJson` are unused (theme/scale/window
  layout never persisted); the Click GUI saves the config on close
  (`gui/screen/ClickGuiScreen.java:727`) — belongs to the GUI owner (§5).

### 2.9 Module lifecycle

* Register-on-enable / unregister-on-disable with no double registration
  (`Module.java:59-71`) mirrors `gg.baa` → `aaj()`→`hF.bdI` / `YO()`→`hF.bdM`
  (`framework-findings.md` §4). Register-before-`onEnable` matches the original's
  `super.aaj()` placement.
* `EventBus.register` deliberately accepts **any visibility** (original `bdK`
  requires `public`); several ported handlers are private
  (`Esp2D.onPacketReceive`, `HandNoClip.onCollisionShape`, `ChinaHat.onWorldRender`,
  `CustomCameraDistance.onCameraUpdate`, …) and would be silently dead under the
  original's rule. Keep the superset.
* `Interface.onDisable()` re-enables itself (port of `fX.YO()` → `baa(true)`,
  `modules/utility/Interface.java:80-82`); `setEnabled`'s state guard makes this
  terminate and leaves the module enabled. Matches the original's
  "effectively always on". Self-Destruct's disable-all loop inherits that.

---

## 3. Risky findings (documented, not changed)

### 3.1 [RISKY] `PacketReceiveEvent` is dispatched on the Netty event-loop thread

* `ClientConnectionMixin` injects at the head of `channelRead0`, which vanilla
  runs on the netty thread; each packet handler only reaches the main thread
  afterwards via `NetworkThreadUtils.forceMainThread` (bytecode of
  `ClientPlayNetworkHandler.onGameJoin` etc.). All 21 receive handlers therefore
  run off-thread.
* Cancellation must stay at the interception point (No Protocol Disconnect drops
  `DisconnectS2CPacket`, Ambience drops `GameStateChangeS2CPacket` /
  `WorldTimeUpdateS2CPacket`), so this cannot be "fixed" by posting on the
  client thread without losing those two features.
* Concrete exposure: `modules/render/Particles.java` mutates a plain
  `ArrayList` from `onPacketReceive` (`Particles.java:136,190`) that `onTick` /
  `onWorldRender` iterate/clear — a concurrent-modification crash is possible.
  `Ambience` writes plain float fields (`stashedRain/Thunder`,
  `Ambience.java:174-183`) read on the main thread (stale-read risk only).
  Other receive handlers use concurrent collections
  (`PopChams`/`SoulEffects`/`ShieldStatus`/`Backtrack`/`FakeLag`/`Blink`).
* Recommended follow-up: make `Particles`' list a `CopyOnWriteArrayList` (or
  buffer per-thread), or add a main-thread dispatch queue inside the mixin for
  non-cancelling subscribers. Note the original's receive hook thread is not
  statically recoverable, so no 1:1 claim can be made either way.

### 3.2 [RISKY] `CollisionShapeMixin` guard is a plain static boolean

* Nested calls on a *different* thread are treated as re-entrant and silently
  take the vanilla path (`CollisionShapeMixin.java:26-30`), i.e. Hand No Clip /
  Anti Web / Anti Trap shapes can be skipped in a concurrent query. A
  `ThreadLocal<Boolean>` (like the packet guard) would be strictly safer; the
  crash it prevents is verified (in-game StackOverflow 2026-10-17), so the guard
  itself is correct.

---

## 4. Coherence inventory

* **Registry ↔ impl ↔ ledger**: 162 registry rows ↔ 162 impl classes ↔ 162
  `Modules.register` calls ↔ 162 PARITY.md module rows (scripted comparison of
  class ids; zero differences in all directions).
* **Mixins ↔ json**: 18 ↔ 18, no orphans.
* **Events**: 17 event classes, all 17 posted (WorldRenderEvent from its three
  phases), all with subscribers (table §2.3); 2 phases of `WorldRenderEvent`
  (BEFORE_TRANSLUCENT, END_MAIN) have no subscribers (dead posts, cheap).
* **Binds**: 7 registry-bound modules; port now 6 (Fake Lag pending); key 82 is
  triple-bound in the original (Kill Aura / Elytra Target / Fake Lag) and 344 is
  shared with the GUI key.
* **Boot flags**: 5 = 5 (§2.1).
* **Dead framework surface** (documented, harmless): `SettingPersistence`,
  `config/UiThemeStore`+`RpJson`, `keybind/KeyBindingHelperFacade`,
  `EventBus.listenerCount`, `RotationManager.{currentRequest,setFallback,setSilentActive}`,
  `Rotation.{fromDirection(called only internally),ofEntity,angularDistance,applyTo}`.
* **Not ported (framework level)**: `hF.BQuMu` global suspend flag
  (`bdH`/`bdP` clear the registry) — no payload caller, native-only; the
  notification subsystem (`qu`/`qt`/`cN`) — modules fall back to chat messages
  and document it; the `dh.afl` panic probe (§2.7); the original's binary `fZ`
  codec (documented divergence, JSON is the rebuild's format).
* **Tick order**: `ModuleManager.tick()` iterates registration order
  (`Modules.java`), not the original's id order; cross-module gates that read
  another module's per-tick state (KillAura → Nuker/AutoPotion) can be one tick
  behind depending on order. No evidence for the original's order → document
  only.

---

## 5. Follow-ups (not edited here)

1. **Fake Lag (`ff`, batch 30 file)**: add `setBind(82)` — javadoc and registry
   agree, only the call is missing.
2. **Auto Crystal gate (`eV.aEq()`)**: add the accessor to
   `AutoCrystal` and consume it in `AirAnchor` (`eU`, owned) and `AnchorMacro`
   (`eX`); polarity is unrecovered (trace observed 0/false) — the original's
   true branch feeds an incompatibility warning in `eX`. Needs both sides plus a
   capture with Auto Crystal enabled.
3. **`Outlines.isOutliningActive`**: set true while the outline pass renders
   once a post-process consumer exists; until then Health Indicators'
   suppression stays inert.
4. **`Particles` receive list** (§3.1) and **`CollisionShapeMixin` guard**
   (§3.2) — small hardening changes in foreign files.
5. **GUI owner**: bind editor (`setBind` has no caller), theme/GUI-state
   persistence (`UiThemeStore` unused), and the shared RShift key
   (`GuiManager` + Interface bind 344) are GUI-side items.
6. **Framework, optional**: model secondary binds / toggle-hold bind mode and
   mouse-button bind encoding (`mA` 0..7) if a future GUI exposes rebinding;
   wire `SettingPersistence` or delete it; drop the two unused
   `WorldRenderEvent` phases or keep them as extension points.

---

## 6. Verification log

| step | command | result |
|---|---|---|
| compile | `.\gradlew.bat compileJava -q --offline` | exit 0 |
| config round trip | standalone Gson probe (mirrors `ConfigManager`) | `roundtrip ok=true`, `legacy ok=true` |
| rotation queue | standalone probe against compiled classes (`RotTest`) | 9/9 checks true |
| mixin targets | `javap` vs `minecraft-merged-1.21.11 yarn build.6` | all present (§2.2) |
| Fabric semantics | Fabric API 0.139.4 sources (`ClientPreAttackCallback`, `AttackEntityCallback`, `UseItemCallback`, `MinecraftMixin`, `MultiPlayerGameModeMixin`) | port mapping correct |
| original bus | `javap -c jar-casesafe/sixtwo/hH_.class`, `hF_.java` | swallow+printStackTrace confirmed |
| registration | scripted registry ↔ Modules ↔ impls ↔ PARITY | 162/162/162/162 |
