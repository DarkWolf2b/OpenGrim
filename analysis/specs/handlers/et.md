# et — Anti Web (module id 42)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/et.md`; coverage-matrix row
  `et|Anti Web|0|0|0` — pure Java, no native handler stubs, so **no image addresses exist**
  for this class; citations are Java line numbers in
  `analysis/decompiled/payload-decrypted/sixtwo/et.java` (456 lines, literals already
  folded to `(int)` char codes).
- Minecraft API surface (from the CFR import list + bodies): `Blocks.COBWEB`,
  `CobwebBlock`, `BlockState`, `Blocks.DIRT#getDefaultState()`, `MinecraftClient.options`
  (`jumpKey`, `sneakKey`), `LivingEntity`, `Vec2f`, `player.setVelocity`,
  `player.getVelocity`, `player.input.getMovementInput()`.
- Helpers: `jg.bBs(LivingEntity)` [payload-named/sixtwo/jg.java] — iterates
  `floor(minX..maxX) × floor(minY..maxY) × floor(minZ..maxZ)` over the entity bounding box
  (with `Box.contains(BlockPos)`), returns true if any contained position's block state
  `isOf(Blocks.COBWEB)` ⇒ **"player intersects a cobweb"**; `iX.bxO(double)` [iX.java:250]
  — converts `player.input.getMovementInput()` (Vec2f x=strafe, y=forward) into a
  camera-yaw-relative movement direction (`rD.dlX().dbC().cGI()` = current yaw) scaled by
  the argument speed; settings widgets `ct/cu` (mode list), `cC` (numeric slider);
  events `gH.th` (client tick) and `gS` (collision block-state rewrite event exposing
  `bcg()` current BlockState and `bci(BlockState)` replacement); `eB.avS()` static tripwire.

## Runtime model

- `gf.aZL(42, false, gh.xgeEn)` [et.java:56] — registered disabled at boot, category
  `xgeEn` (note: not `qBzlZ`; et sits in its own UI category).
- The module neutralizes cobwebs client-side with three selectable strategies:
  - **Vanilla** — no behavior code touches this mode (pure passthrough).
  - **Flight** — while the player intersects a cobweb, gravity is zeroed and WASD + jump
    + sneak become free 6-directional flight at configurable speeds (tick handler `auv`).
  - **Solid** — cobweb collision is rewritten to a full solid cube by substituting
    `Blocks.DIRT.getDefaultState()` in the collision event (`auw`), so webs behave like
    normal solid blocks (walkable/collidable, no slowdown).
- Listener inventory (2 listeners, both `@hG` default priority):
  - `auv(gH.th)` — client tick [et.java:298-385]
  - `auw(gS)` — collision rewrite [et.java:388-425]
- Enable gate: both handlers start with `this.bab()` (module enabled check, `gg` base).
- No packets, no cross-module calls, no state fields besides the five settings.

## Per-handler semantics

1. `public et()` [et.java:55-157] — constructor: registers module id 42 (disabled,
   category `xgeEn`); builds settings (see below); wires visibility predicates
   (`zhqoi.Vf(() -> this.qHibw.SQ(1))` and `vEDmd.Vf(... SQ(1) || SQ(2) ...)`).
2. `@hG public void auv(gH.th th)` [et.java:298-385] — tick handler, runs only when all of:
   - `bab()` (enabled),
   - `jg.bBs(player)` (player box intersects a COBWEB block),
   - `qHibw.SQ(1)` (Mode == **Flight**; if Flight is not selected the handler exits —
     Vanilla/Solid have no tick behavior).
   Flight behavior, in order [et.java:356-383]:
   - `Vec2f dir = iX.bxO(this.vEDmd.VB())` — WASD input direction at Horizontal Speed;
   - `player.setVelocity(dir.x, 0.0, dir.y)` — zeroes vertical velocity, applies
     horizontal motion;
   - if `options.jumpKey.isPressed()`: `velocity.add(0.0, +this.zhqoi.VB(), 0.0)`
     (climb at Vertical Speed);
   - if `options.sneakKey.isPressed()`: `velocity.add(0.0, -this.zhqoi.VB(), 0.0)`
     (descend at Vertical Speed).
   Note the vertical speeds are additive per tick (no normalization visible); both use the
   same `zhqoi` slider.
3. `@hG public void auw(gS gS2)` [et.java:388-425] — collision event: returns unless
   `bab()`; takes `BlockState st = gS2.bcg()`; if `st.getBlock() instanceof CobwebBlock`
   AND `qHibw.SQ(2)` (Mode == **Solid**): calls `gS2.bci(Blocks.DIRT.getDefaultState())` —
   replaces the web's collision block-state with dirt (full cube shape). No change in
   Vanilla/Flight modes.
4. Getters for the GUI: `aux()` → qHibw [239], `auC()` → zhqoi [248], `auy()` → ISwMH
   [429], `auz()` → qAyzC [433], `auA()` → UayhT [437], `auB()` → vEDmd [440].
5. Static: DES literal kernels `auI`/`auH`/`auG` [259-296] (`idx = seed ^ (key & 0x7FFF)
   ^ 0x511F`, table `peEyv` long[54]) and `cfr_ldc_0()` MethodHandle workaround [444-451]
   — obfuscation machinery, no client behavior.

## Settings→behavior

All names decrypted verbatim from `payload-decrypted/sixtwo/et.java` (char codes):

- `ct qHibw` = **"Mode"** (chars `77 111 100 101`) with `cu` options:
  - `ISwMH` = **"Vanilla"** (chars `86 97 110 105 108 108 97`) — index 0, no behavior.
  - `qAyzC` = **"Flight"** (chars `70 108 105 103 104 116`) — `.SY()` ⇒ **default
    selected** (index 1).
  - `UayhT` = **"Solid"** (chars `83 111 108 105 100`) — index 2.
- `cC vEDmd` = **"Horizontal Speed"** (chars `72 111 114 105 122 111 110 116 97 108 32 83
  112 101 101 100`): `.Vy(0.01).Vw(0.1).Vx(2.0).VA(0.64)` ⇒ step **0.01**, min **0.1**,
  max **2.0**, default **0.64**; no unit string. Visible when Mode is Flight **or** Solid
  (`Vf` returns `SQ(1) || SQ(2)`) [et.java:125-157].
- `cC zhqoi` = **"Vertical Speed"** (chars `86 101 114 116 105 99 97 108 32 83 112 101 101
  100`): `.Vy(0.01).Vw(0.1).Vx(2.0).VA(0.64)` ⇒ step **0.01**, min **0.1**, max **2.0**,
  default **0.64**. Visible only in Flight mode (`Vf(() -> qHibw.SQ(1))`) [et.java:123].
- No keybind (`cD`), no toggles (`cJ`), no groups — five widgets total.
- Mode→behavior mapping: Flight ⇒ tick-based web flight (default); Solid ⇒ collision
  rewrite to DIRT; Vanilla ⇒ untouched cobweb behavior.

## Unrecovered

- The exact identity/publish point of event `gS` (bare fields `bcg()/bci(BlockState)`): it
  is the client collision block-state rewrite hook, but which engine path publishes it
  (block collision shape query vs. raycast vs. movement collision) is not visible from this
  class. Whether the DIRT substitution affects only collision (recommended by the event
  name) or also rendering/targeting depends on that publisher.
- Whether the Flight-mode `setVelocity` runs every tick unconditionally while in a web
  (it does per the handler body) interacts with server-side movement checks — no packet
  manipulation exists in this class, so anti-cheat interplay is out of scope here.
- `iX.bxO`'s normalization detail (whether diagonal input is renormalized to the speed or
  can exceed it — the body normalizes per axis against `getMovementInput()` components and
  scales by yaw rotation; the exact final normalization is partially obfuscated in iX but
  the call contract used here is `bxO(speed) → Vec2f direction`).
- `eB.avS()` tripwire semantics (static String[] accessor, always-null in this build).