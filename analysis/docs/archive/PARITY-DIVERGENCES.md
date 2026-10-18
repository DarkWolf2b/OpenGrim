# PARITY-DIVERGENCES — OpenGrim vs Grim 4.4

Each line: module (or framework), what differs from the decompiled original,
and why. Items here are limited to genuinely unrecoverable behavior (native
method bodies, encrypted strings) or the minimum needed to function on this
stack (event wiring, vanilla API differences). Everything else must match
the decompile exactly.

## Wave 1 — rotation manager + ei/er/fr/eV (2026-10-11)

- rotation/RotationManager (sixtwo.qL): native method bodies
  (dbH/dbJ/dbG/dbI/dbR/dbS/dbQ/dbL/dbK/dbU/dbT/dbD/dbM/dbO/dbP/dbZ/dbF/dbW,
  ou/ot/ow/os/mw natives, qL.java:50-104,141) are not recoverable statically;
  submit/tick/expiry/send-rewrite are ported from the Java-visible contract
  (qL.java:32-39,62-67,106-172; mt.java:13-158). The gufEg/adYOd slots
  (qL.java:35-36) and dbY/dbZ/dbF/dbW/dbV/dbT/dbU/dbD readouts have no port.
- rotation/RotationManager: request lifetime defaults to 2 ticks; the native
  expiry driver (mt$uN#dkmea source) is unrecovered.
- rotation/RotationPriority (sixtwo.mw, mw.java:15-20): backing int values come
  from native cmD(); ordering here is declaration ordinal.
- rotation/Rotation (sixtwo.ov): cGF smoothing (ov.java:206-212, needs native
  qL.dbZ + mZ.csr step) and the equals control-flow obfuscation
  (ov.java:45-128) are not ported.
- rotation/RotationManager: driven from OpenGrimClient after
  ModuleManager.tick() instead of the native hF bus + gH.th/gv phases —
  event-wiring deviation required by our stack.
- rotation/RotationManager.effectiveRotation: returns a neutral rotation when
  the player is null; the original dereferences the player unconditionally
  (qL.java:151) — vanilla-API safety deviation.
- ei Scaffold: click points are face centers; the original samples sub-square
  [0.15, 0.85] points (oE.DNYow/XZnzz) with best/random pick (oB.LwHxs/FXGPX)
  — DES-encrypted counts N1/N2 unrecovered.
- ei Scaffold: no oU.Xrdom dedupe map, no cHY/cHZ reach-and-raycast
  validation, no qL.dbI silent-aim submit, hotbar-only block search; the
  Both-hands fallback and Client/Server swing mapping follow the natural
  reading (ei.md items 8, 14 unrecovered).
- ei Scaffold: asG gate suppresses while using items or mining (ingredients
  from the asG pool slice); the exact boolean formula is unrecovered.
- er Speed: mode selectors are exclusive dropdowns; the original uses
  independent Collision / Collision Target / Matrix toggles plus independent
  Ground / Air / Constant toggles (er.java:51-90,120-146).
- er Speed: per-tick physics (collision probe via jg.bBN, target loop,
  friction term, Matrix profile, yaw injection through qL) is native and
  unrecovered; velocity multipliers/additive boost are the natural reading
  of the setting names and ranges.
- fr Kill Aura: attack-point engine (pe/pc(0.15)/pd jitter), aim smoothing
  (Normal/Snap, Unrestricted/Adaptive), Sprint/Move-Correction modes, crit
  forcing (isOnGround/isGliding/jump cluster), weapon/slot/shield/click and
  screen/use gates, render modes and Target Lock integration are native and
  unrecovered.
- fr Kill Aura: Targets selector is a players/mobs/all category mode; the
  native cF multiselect contents are encrypted (fr.java:555).
- fr Kill Aura: the rD.dlZ().dbt() arbitration gate (fr.java:1102-1112) has
  no counterpart.
- eV Auto Crystal: damage model, target scan order, CPS-spoof shaping,
  kill-pause timing, predicted-id attacks and the ti-phase role (aDP) are
  native and unrecovered; place/break int tick counters stand in for the
  three mT wall-clock timers (tick quantum fCqJQ unrecovered — not assumed).
- eV Auto Crystal: break/place ranges (4.5 reach, 8.0 search) are the natural
  reading; no range token was recovered.

## Wave 2 — Combat, Movement, Render & Utility 1:1 Reconstruction (2026-10-12)

### Combat & Radial GUI
- KillAura: pe/pc/pd attack-point engine, aim-smoothing math, sprint/move-correction movement, crit forcing, Break Shield axe-swap, target-render shapes, theme-fed color default, encrypted Targets/Slots contents are native-blocked; all Java-visible logic, setting trees, and tick gates ported 1:1.
- Criticals: Web-Lag packet-hold queue (aQo) packet-hold target set is native-only.
- EmoteWheelScreen (sixtwo.bD): wheel open/selection/hover durations use timed linear ramps instead of obfuscated rk/rj state curves; pointer and click dispatch use vanilla mouse events.
- WheelDraw (sixtwo.lC): annular-arc and shader pipelines mapped to vanilla DrawContext matrix-stack fill and line draws.
- SettingPersistence / RpJson (sixtwo.cB, rp): JSON persistence uses typed schema preserving on-disk opengrim.json compatibility.

### Movement
- Sprint (sixtwo.eC): exact spoofed C2S movement packet generation sequence and internal native helper predicates beyond awe/awf/awg are native-blocked inside j2cc bytecode VM; omni-sprint condition, vanilla sprint overrides (hunger/collision/blindness), Stop On gates, and Keep Sprint momentum preservation are ported 1:1.
- Strafe (sixtwo.eA): floating-point math sequence inside j2cc VM jump table is native-blocked; reconstructed using recovered constant pool tokens.
- NoSlow (sixtwo.eo): anticheat-specific bypass packet timing state machines are native-blocked; Grim V3 slot packet dispatch ported from recovered pool tokens.
- NoFall (sixtwo.ez): outbound wire flag rewrite on PlayerMoveC2SPacket subtypes ported directly from decompile and mixin accessor evidence.
- NoPush (sixtwo.es): native collision patch hooks hd/hq ported to framework packet and collision events with riptide spin attack exemption.
- NoJumpDelay (sixtwo.ew): uses cached reflection on LivingEntity.jumpingCooldown to zero jump delay every tick.
- NullMovement (sixtwo.eq): unslowed horizontal velocity restored during obstructed movement via tick physics simulation.
- SafeWalk (sixtwo.ex): edge clamp enforced via client velocity check and ground prediction in onTick.
- WaterSpeed (sixtwo.el): scales swim velocity with Depth Strider, IceBlock, and Speed effect bonuses.
- TridentBoost (sixtwo.eu): invokes boost velocity and plays trident sounds during active channeling.
- KnockbackDisplacement (sixtwo.fs): client-side velocity packet rewrite and full Java state fields and accessors preserved.
- PearlChaser (sixtwo.fm): standard ballistic simulation for ender pearl projectile physics wired to landing prediction (aKw).
- SpearDash (sixtwo.eH): activation key edge detection and spear release triggers preserved along with all state fields.
- SuperFirework (sixtwo.ep): triggered via PacketSendEvent on firework rocket use and client use key state.
- WindHop (sixtwo.eR): inventory hotbar scan for Items.WIND_CHARGE used directly in downward charge launch.

### Render
- HitParticles (sixtwo.dc): custom billboard shader textures mapped to vanilla matrix billboard quad pass with ColorSetting ARGB.
- HoleEsp (sixtwo.dj): bedrock, obsidian, mixed, and void safety levels mapped to the 4 recovered ColorSettings with box and fade quad passes.
- JumpCircle (sixtwo.db): circle uses standard expanding ring/quad geometry with configured circleScale and circleColor.
- LogoutSpots (sixtwo.dp): rendered as 3D bounding box with height, background fill, and positionColor matching sixtwo.dp outline path.
- Nametags (sixtwo.dt): tags compiled into TagChip, PlayerTag, and ItemTag records with exact chip ordering, colors, and vanilla nametag suppression.
- Outlines (sixtwo.dl): entity set, all 11 shader settings, dynamic visibility rules, and isOutliningActive nameplate suppression flag ported 1:1. Residual divergences: glow batch (`ki.bPi` + `kn.YNOIY` window) is not reproducible in the rebuild framework, so the module publishes the outlined entity set to the render consumer instead; entity scan uses `world.getOtherEntities` + `isAlive` in place of `jJ.bIB` (no distance cap, matching the original).
- Particles (sixtwo.cR): custom batched texture shader pass mapped to WorldRenderEvent billboard quads with glow pass.
- PearlPrediction (sixtwo.dg): reconstructed as world-space billboard at landing position with identical text and time calculation.
- PopChams (sixtwo.cT): reconstructed with vanilla 1.21.11 translucent entity layer for PlayerEntityModel.
- ShieldStatus (sixtwo.cY): state machine and progress calculations ported directly in Java with gradient transition lerp.
- SkeletonEsp (sixtwo.cV): standard line buffer with exact 8-bone topology and Euler angles from kq.java.
- SoulEffects (sixtwo.cZ): dual-pass particle and glow quads in WorldRenderEvent.
- SoundEsp (sixtwo.da): world-space fading box markers for spatial sound visualization.
- StorageEsp (sixtwo.dq): loaded chunk iteration via client world chunk API with 9 storage types and 18 outline/fill color settings.
- SwingAnimations (sixtwo.cQ): hand render transform exposed for HeldItemRenderer.
- TargetEsp (sixtwo.dz): 4 particle rendering styles (Circle, Soul, Ghosts, Crystals) with hurt-flash tracking and bloom pass.
- Tracers (sixtwo.du): line rendering utilizes RenderLayers.lines() with exact view vector origin offset and body anchor heights.
- Trails (sixtwo.cU): sample history retention, camera frustum culling, and fading ribbon quad strip.
- Trajectories (sixtwo.cP): authentic first-person held item trajectory simulation with drag, gravity, multishot spread, and collision raycasts.
- TrapEsp (sixtwo.cW): pre-motion tick clutter scanning, cluster merging into TrackedCluster with centroid accumulator.
- ViewModel (sixtwo.dC): MatrixStack operations transformHand and transformArm applying translation, rotation, and scale matching native VM handler execution order.
- XRay (sixtwo.dk): disables chunk culling while active, triggers reloadChunks() on toggle, provides 19-ore filter predicates.

### Utility
- HotbarRestorer (sixtwo.dO): snapshot hotbar buffer, delay gating, inventory search, and container restoration clicks.
- Interface (sixtwo.fX): emote key listener with F3 debug suppression opening Click GUI, theme style opacity query.
- ItemFrameBlocker (sixtwo.dD): cancel PlayerInteractEntityC2SPacket targeting ItemFrameEntity with weapon tag checks.
- MiddleClickFriend (sixtwo.fU): middle-click crosshair target detection and friend list membership toggle.
- MouseTweaks (sixtwo.dJ): RMB drag deposit, LMB drag combinator, mouse wheel slot-to-slot transfer.
- MultiTask (sixtwo.dT): attackBlock driven on crosshair block during active item use.
- NameProtect (sixtwo.fS): 3-channel text rewrite (own name, friends, server hostname) with styled visitor.
- NoProtocolDisconnect (sixtwo.fQ): cancellation of inbound DisconnectS2CPacket.
- NoSignScreen (sixtwo.dH): screen listener closing SignEditScreen and HangingSignEditScreen immediately.
- NoSwing (sixtwo.eg): client swing animation suppression and outbound HandSwingC2SPacket cancellation.
- ResourcePackBypass (sixtwo.fT): inbound ResourcePackSendS2CPacket interception, address filter, and virtual thread ACK dispatch.
- SelfDestruct (sixtwo.fV): module teardown, chat wipe, memory string cleanup, and self-disable.
- SkinProtect (sixtwo.fN): protectSkin transformer evaluating own/other player protection rules.
- SlotLock (sixtwo.dN): drop key suppression and packet drop cancellation for locked hotbar slots.
- Spammer (sixtwo.dE): tick loop, disconnect/leave gates, random/sequential message selection, anti-spam suffix decoration, and split message transmission.
- Transactions (sixtwo.fW): passive observation of KeepAliveS2CPacket and CommonPingS2CPacket, screen handler syncId tracking, and transaction counter.

### World
- AirAnchor (sixtwo.eU): fabricated packet dispatch replaced by client.interactionManager.interactBlock per Vanilla 1.21.11 pipeline; native packet assembly via unexported sequences is sandboxed.
- AnchorMacro (sixtwo.eX): 16 settings and 3-step state machine (PLACE_ANCHOR -> CHARGE -> DETONATE) with Safe Anchor checks ported 1:1.
- AntiGhost (sixtwo.en): block break tracking via reflection for currentBreakingPos; native aaj/atp hooks reproduced with identical packet structure and gating.
- AutoDrain (sixtwo.fw): fluid still check, cobweb below check, 6-face bounding box projection, raycast, bucket slot auto-switch; fg.aIW() TargetLock token relaxation evaluated via module existence.
- AutoDripstone (sixtwo.fd): trapdoor player search, Pointed Dripstone placement, secondary trapdoor use; module arbitration registry qN.dcC/dcB omitted as native-only in grim-cs runtime.
- AutoLeverReplace (sixtwo.dK): 2-radius lever search, raycast gating with Ignore Walls, rotation submission, attackBlock destruction; qL.dbI custom attack request mapped to rebuild RotationManager + interactionManager attackBlock.
- AutoMlg (sixtwo.fM): fall-damage gate on Threshold, hurtByWater LivingEntity safety check, ground scan down to 16 blocks; fall-damage estimation arithmetic inside j2cc VM ported via standard vanilla fall distance and ground scan.
- AutoTrap (sixtwo.eJ): 7 settings/groups, ring and roof candidate generation with double-place offsets, nearest-target sorting, per-tick budget placement; eJ::azo comparator score and eL native target filter mapped to distance-to-target scoring and player targeting.
- AutoWeb (sixtwo.eK): 7 settings, nearest target search within 4.5 blocks, velocity extrapolation by Prediction Ticks, candidate placement across feet/head/surround/upper-surround; eL candidate pipeline and rotation submission mapped to RotationManager and support face checks.
- BlockPiercer (sixtwo.dP): crosshair entity filter, raycasting past target entity to hit solid block behind within block reach; VM dispatch for aoR/aoS/aoT mapped to Vanilla RaycastContext.
- CartAssist (sixtwo.fb): rail hold trigger, 4-phase state machine (Place Rail -> Place Minecart -> Place Protect -> Return To); VM-internal plan records fb$sM/fb$sN ported as Java state machine.
- CartRefill (sixtwo.fc): delay timer gate, hover screen check, missing TNT minecart scan, slot randomization, SWAP inventory clicks; encrypted suffix literal XcqMh and shared fa buffer omitted.
- FastPlace (sixtwo.dZ): 8 settings, itemUseCooldown set via cached reflection on field_1752 when use key held and gates pass.
- GhostHand (sixtwo.ec): camera look vector ray-march 0.25 to 4.5 blocks testing hasBlockEntity() and Inventory, deduplication set, BlockHitResult with Direction.UP; native VM handler arz bytecode ported via ray-marching.
- LeverReplace (sixtwo.dF): lever/button target scan, allowed items check in legit mode, instant mode useKey press, slot cache and restoration, rotation submit; native builder oT mapped to interactionManager.interactBlock.
- NoBreakDelay (sixtwo.ea): blockBreakingCooldown set to destroy_delay via cached reflection on field_3716.
- NoEntityClip (sixtwo.dL): ItemTags.PICKAXES gating, raycasting past targeted EntityHitResult with ShapeType.OUTLINE, rotation submit, attackBlock breaking through entity hitbox.
- Nuker (sixtwo.dI): 12 settings, alM mining engine with delay gate, alK face refresh, alJ target scanner, fastest mode packet sweep, faster mode WorldRenderEvent overlay; native rotation option ou mapped to RotationManager priority.


## GUI port (av/bl/c framework, 2026-10-12)

- screen/ClickGuiScreen (sixtwo.c): status updated 2026-10-13 - the
  runtime-decompiled win/gui-src/sixtwo_4.java recovers the full CONSTRUCTOR
  (exact widget inventory: 5 ap popups z 0-4 with the WpzHJ/iKApR title+subtitle
  style split, panel->popup bindings pXzKY->ItmaE / ReKgb->EknuQ / TPXYP->cJonW
  / OPcaS->uFsRc, 4 cJ toggles, cC slider 1.0-10.0 step 1 dec 2, cL
  .Xk(0.5,1.0).Xl(0.5,0.0), search Q with lf.blMVg=IMPORT glyph, ld.all(6.0f)
  padding, muted-text mG3 = biq().cob(0.3f), manager callback aV). The behavior
  methods (x/s/m/o/p/t/v/q/w/u/r/y/E) remain native-dispatched even in the
  runtime dump, and the popup titles/subtitles + toggle labels are encrypted
  literals inside those native bodies (0 of c's ~135 N/Q sites captured - the
  ClickGUI was never opened during the hooked run). Panel geometry and design
  viewport remain approximated (540x300).
- gui/ui/Popup (sixtwo.ap): status updated 2026-10-13 - the runtime decompile
  (win/gui-src/sixtwo_5.java) recovers the field set (pdPyE children list,
  mjUwZ close callback, IwVym/DfYWQ/hVUFA flags, LnWsJ drag state), the
  constructor chain (default size (0,0,90.0f); 4-arg ctor sets x/y/w/h and
  FHbTC=true; default padding/4th arg 2.0f) and the full fluent-builder API
  (pW/pX/pY/qb/qa/qk/ql/qm/qn/qh/qg/qf/qd title variants, pV(az)/pU(cB)
  children, qp(bool), qr(float), qo(Runnable), sP(int) z-order). Behavior
  bodies (oa/od/oe/bV/dl/dm/dk/dB/eK/fC/pT/pS and the qs/qt/qw/qx/qy/qz/qu/qv
  synthetics) remain native-dispatched.
- gui/ui/GuiDraw: rounded-corner fills and strokes are approximated with
  layered quads; the original hardware rounded-rect shader path is not
  reproducible in our renderer.
- gui/ui/Theme: Liquid Glass and Blur background styles (fX styles idx 0/1) are
  rendered as translucent panels - backdrop blur/glass refraction is not
  reproducible; style opacities (0.2 / 0.75 / 0.85) are preserved.
- gui/ui/IconGlyph (sixtwo.lf): the glyph ENUM is now recovered 1:1 (2026-10-13)
  - 67 constants with semantic names and codepoints 59905-59971 - obtained by
  running the original lf class against its native decryptor (DES pool in
  lf.bXW; procedure in win/tmp/GlyphDump.java). Rendering diverges: the icon
  font itself is packed inside the payload DLL (no font asset in the payload
  jar), so call sites keep text stand-ins ("x" for the close CROSS glyph).
- gui/anim/Easing: rj curves recovered exactly from the runtime decompile
  (win/gui-src/sixtwo_24.java): AYqck = dgk(1.70158f) ease-in-back,
  XzDkv = dgl(1.70158f) ease-out-back, MBpuQ = ease-out cubic, Xmkbr linear.
  No approximation remains for the curves the GUI uses.
- gui/ui/AnimatedScreen (sixtwo.av): the keybind re-press open trigger av.si()
  is not implemented; opening happens via the Interface module open path only.
- gui/ui/ModuleWidgetFactory: color settings render as an RGBA swatch plus
  four R/G/B/A sliders; the original color-picker widget control flow is
  native-blocked.

## Module hook completion (2026-10-13)

The last six partial modules gained their engine hooks via new mixins
(PushOutOfBlocksMixin, EntityPushMixin, InteractionRangeMixin,
PlayerListEntryMixin, ItemRendererMixin; all in opengrim.mixins.json).

- No Push (sixtwo.es): aup(hd)/auq(hq) bodies are native; the rebuild cancels
  the vanilla engine paths Entity#pushOutOfBlocks and Entity#pushAwayFrom
  through cancellable events, preserving the recovered riptide exemption. The
  previous velocity-packet cancel heuristic was removed (it also cancelled
  ordinary knockback, which the original's push handlers do not).
- Reach (sixtwo.fK): the crosshair-target scan and attack-range checks read
  PlayerEntity#getBlockInteractionRange/getEntityInteractionRange attributes;
  InteractionRangeMixin publishes them and Reach applies its sliders while
  enabled (off state leaves vanilla values untouched, matching fK "Runtime
  model"). Server-side validation still applies in multiplayer, as original.
- Cape (sixtwo.ee): qG.dam native fetch rebuilt as CapeTextureManager
  (background download of the resolved preset/custom URL to opengrim:cape) +
  SkinTexturesResolveEvent replacing the cape asset; Hide Wings nulls the
  elytra asset. Divergence: texture load failures keep the previous cape and
  retry on a 250 ms cooldown instead of the original's error surface.
- Hand Chams (sixtwo.de): the per-effect shader passes (ki.bPi Online branch,
  kj glass/water/chrome/liquid-metal facades) are not reproducible; the rebuild
  maps each effect to a uniform color/alpha multiplier on the first-person held
  item's vertex consumer (ItemRendererMixin TintedVertexConsumer). The arm
  (empty-hand) render is not tinted - the original tints both item and arm.
  Glass translucency is approximated at alpha 0.55, water 0.8.
- Auto Clicker (sixtwo.fn): inventory clicking now uses the hovered
  HandledScreen slot (PICKUP via interactionManager.clickSlot) matching the
  recovered HandledScreen/Slot pool tokens; the "Click Pattern" ring cadence
  (diT/diS/diU) remains native-blocked and the ring buffers are kept but idle.
- Double Tap (sixtwo.eM): structure verified against the true eM decompile
  (payload-named tree, recovered case-safely): boolean XOnBS phase, mT.cpz()
  timer, aAY(hw) HIGH-priority and aAZ(gH) listeners. Behavior bodies
  stay native-blocked; the mace/wind-charge aerial combo heuristic is
  designer discretion per the spec note.
