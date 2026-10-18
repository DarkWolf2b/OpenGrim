# Freecam (sixtwo.dW) — handler-derived behavior spec

Class: `sixtwo/dW` · display name **Freecam** · registry description "Detaches camera
allowing free movement" · key 76, **bind 71 (bound — the only module in this batch
with an active bind)** [registry]. Superclass `gg`; category constant `gh.qBzlZ`
(a **fourth** encrypted category constant — display name unrecovered);
`.aZS(false)` as in fp/eB.

## Evidence base

1. PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_dW.c` — 39 handlers, standard
   dispatcher stubs. Slices: main window `POOL[0xba06,0x201]` (11 handlers),
   damage-window `POOL[0xbd81,0x207]` (1 handler), machinery `POOL[0xb15,0x2c]`,
   indy `POOL[0x857,0x26]`, bootstrap `POOL[0x784,0x25]` ×2, base tick
   `POOL[0x3806,0xbf]`.
2. Java shell `analysis/decompiled/payload-named/sixtwo/dW.java` (constructor fully
   decompiled; note the **spoof-panel wiring**: `VqYYp = new kr(this, ku.qnXgu);
   VqYYp.bQV(kw.bRW(...).bRN(true))` — dW owns a `kr`/`kw` ghost-player config with
   `bRN(true)`, dW.java:96-97).
3. Yarn — the two windows give an unusually rich MC surface:
   `class_757`=`GameRenderer` (`field_1773 gameRenderer`),
   `method_19418`=`GameRenderer.getCamera()` → `class_4184`=`Camera`,
   `method_71156`=`Camera.getCameraPos()`, `method_73189`=`Camera.getEntityPos()`,
   `class_5498`=`Perspective` (`field_26666`=`Perspective.THIRD_PERSON_FRONT`),
   `field_1894`=`GameOptions.forwardKey`,
   `field_6014/6036/5969`=`Entity.lastRenderX/Y/Z`,
   `field_5982/6004`=`Entity.lastYaw/lastPitch`,
   `method_30950`=`Entity.getLerpedPos(F)`, `method_18805`=`Vec3d.multiply(DDD)`,
   `method_1019`=`Vec3d.add(Vec3d)`, `method_1023`=`Vec3d.subtract(DDD)`,
   `method_18376`=`Entity.getPose()` (`class_4050`=`EntityPose`),
   `class_4587`=`MatrixStack`, `class_742`=`AbstractClientPlayerEntity`.
4. Shared render helpers in the windows: `sixtwo/oq` with `bbh`,
   `bQQ (MatrixStack, F, AbstractClientPlayerEntity)V` + `(os)V` — the spoofed-player
   renderer call; rotation solvers `cGy (Vec3d)ov` / `cGz (Entity)ov` (`ov` =
   yaw/pitch pair); `sixtwo/mJ` (`field_1351`).
5. Event semantics (decompiled shells): `gv` tick; `gA` input (LOWEST priority);
   `hh` = event carrying a single float (`bcA()`) — camera/scroll-style event;
   `hn` = `(LivingEntity, float)` event (`bcT()/bcU()`) — candidate attack/hurt
   targeting event; `hv` = **damage event `(Entity, DamageSource)`** (`bdl()`);
   `gJ` = screen event (carries `Screen` — screen open/close);
   `gT` = bare marker event; `gH$ti` = post-motion tick; `go$sX` = render.
6. Decrypted constants: full-dump `dW` entries for `aqS("h",…)`; settings have no
   suffix strings (unitless `cC`).

## Runtime model

- **Purpose**: detach the camera from the player and move it freely; the real player
  stays put (optionally rendered as a spoofed entity via the `kr`/`kw` panel).
- **State** (dW.java:14-29, decompiled):
  - `tBVoR : cC` — camera speed (step 0.1, 1.0–10.0, default **3.0**, unitless).
  - `vWhWE : Perspective` — the player's perspective saved on enable, restored on
    disable (window carries `Perspective`/`THIRD_PERSON_FRONT` — the module forces a
    perspective while detached).
  - `FtQTF`, `cSmNg : Vec3d` — saved player position and current camera position
    (camera control math uses `multiply/add/subtract` — speed-scaled movement).
  - `pVZhY`, `eWyed : ov` — saved camera/player rotation pairs (Rotate setting
    governs whether mouse input rotates the camera — `joJfw` "Rotate" appears in the
    damage window beside the render tokens).
  - 7 booleans `QcpdD, XMIhN, uTfhD, hxajS, aDkxT, tTIWo, NLUKs` — key-state latches
    for the WASD camera movement (`field_1894 forwardKey` + the `iX.Ergzg` movement
    key family is the shared surface) and state flags. Roles not individually
    disambiguated.
  - `VqYYp : kr` (flavor `ku.qnXgu`) — ghost/spoof render panel (same flavor as
    ff/Skeleton ESP), configured with `kw.bRK().bRN(true)`.
- **Event wiring** (native; priorities as decompiled):
  - `aqu(hh)` — **`mw.LOWEST`** — float-carrying event (candidate: mouse scroll /
    FOV); LOWEST = runs first, can consume.
  - `aql(gA)` — **`mw.LOWEST`** — input event: camera movement keys + rotation
    (consumes input so the real player doesn't move).
  - `aqt(gv)` / `aqo(gM)` — tick; `aqk(gH$ti)` — post-motion tick (camera position
    application after the player's motion).
  - `aqp(hv)` — **damage event**: "Disable on Damage" — window `POOL[0xbd81,0x207]`
    carries `sixtwo/hv`, `bdk ()DamageSource`, and `xkmCl` (the setting) — on the
    local player taking damage with the setting on, disable the module (restore
    camera).
  - `aqr(hn)` — living-entity event (candidate: suppress attacks/interactions from
    the detached camera).
  - `aqm(gJ)` — screen event (candidate: release input while a screen opens).
  - `aqq(gT)` — marker event.
  - `aqs(go$sX)` — render: draw the spoofed player (`oq.bQQ (MatrixStack, F,
    AbstractClientPlayerEntity)V`) unless "Render Hand"-style hiding applies.
- **Camera application** (window `POOL[0xba06,0x201]`): `gameRenderer.getCamera()`
  (`method_19418`), `Camera.getCameraPos()`/`getEntityPos()` (`method_71156`/
  `method_73189`), lerp via `Entity.getLerpedPos(F)` + `lastRenderX/Y/Z`/`lastYaw/
  lastPitch` fields, perspective handling (`Perspective`, `THIRD_PERSON_FRONT`), and
  the spoof player placement `kr.bQZ (Vec3d, AbstractClientPlayerEntity)V`. The
  per-frame composition (which math runs in the tick vs render hooks) is native.

## Per-handler semantics

Bodies unrecovered (VM); slices and addresses:

- **`aqp (Lsixtwo/hv;)V` — damage event [see corpus] `[slice 0xbd81,0x207]`** —
  "Disable on Damage" path: read `xkmCl`, inspect `hv.bdl()` (DamageSource), disable
  + restore. The window's render/rotation tokens (`bQQ`, `cGy (Vec3d)ov`,
  `cGz (Entity)ov`, `go$sX`, `method_30950 getLerpedPos`, `method_18376 getPose`,
  `field_6014…field_6004` last-pose fields, `sixtwo/mJ`) indicate the restore path
  re-lerps the player entity and re-renders the spoof.
- **Main-window handlers `[0xba06,0x201]`** — `aqt(gv)`, `aqu(hh)`, `aql(gA)`,
  `aqk(gH$ti)`, `aqs(go$sX)`, `aqm(gJ)`, `aqq(gT)`, `aqo(gM)`, `aqn` (private void
  step), `aaj`/`YO` — camera tick/input/render/lifecycle. `aqv(double, double)` —
  move the camera (candidate: axis-relative translation), `aqx(float) → ov` (lerped
  camera rotation), `aqw(float) → Vec3d` (lerped camera position — exactly the
  getters a render hook needs).
- Machinery: `aqQ/aqR/aqS/aqP` — indy/decrypt kernels, MatchException rethrow.

### Public getters (exposed to other modules / mixins)

`aqy ()cC` (speed), `aqz/aqA/aqB (cJ)` (the three toggles), `aqC ()kr` (spoof
panel), `aqD ()Perspective` (saved perspective), `aqE/aqF ()Vec3d` (saved/camera
pos), `aqN/aqO ()ov` (saved rotations), `aqG/aqH/aqI/aqJ/aqK/aqL/aqM ()Z`
(state flags — candidate set: "camera detached", "input grabbed", "restoring").
Per-getter identity inside type groups unrecovered.

## Settings → behavior mapping

| field | setting | chain (verbatim) | behavior link |
|---|---|---|---|
| `tBVoR` | (cC, name unrecovered — candidate "Speed") | `cC .Vy(0.1).Vw(1.0).Vx(10.0).VA(3.0)` — step 0.1, 1–10, default **3.0** | camera movement speed (the `multiply(DDD)` scalar) |
| `joJfw` | Rotate | `cJ .WE(false)` — default **off** | mouse rotates the freecam (`ov` updates via `cGy (Vec3d)ov`-family solvers) |
| `xkmCl` | Disable on Damage | `cJ .WE(false)` — default **off** | `aqp(hv)` disable path |
| `KEfhe` | Render Hand | `cJ .WE(false)` — default **off** | keep rendering the hand/first-person overlay while detached |
| `VqYYp` | (kr spoof panel, `ku.qnXgu` flavor) | `new kr(this, ku.qnXgu)` + `kw.bRK().bRN(true)` | ghost-player rendering config for the real player while camera is detached |

## Unrecovered / uncertain

1. **Camera movement math** — the exact per-tick translation (direction basis from
   yaw, speed scaling, collision/no-clip choice) is VM bytecode; only the Vec3d
   arithmetic primitives (`multiply/add/subtract`, `getLerpedPos`) are evidenced.
2. **Which handlers map to which camera responsibilities** (the 11 main-window
   handlers beyond the decompiled wiring) — unrecovered.
3. **Boolean latch roles** (7 booleans) — inferred as input-key latches only.
4. **`hh` (float event) and `hn` (LivingEntity, float) semantics** — inferred from
   payload consumers; not proven for dW.
5. **Perspective handling** — whether dW forces `THIRD_PERSON_FRONT` or merely saves/
   restores, and the "Rotate" interaction with it, is native.
6. **`tBVoR` display name** — 5-char name not in the decrypted names list; "Speed" is
   an inference. Category `gh.qBzlZ` display name unrecovered.
7. `sixtwo/mJ`, `field_1351`, `sixtwo/oq`, `bbh`, `iNKRn`, `zwVyv`, `iuIKj`,
   `NlXtA`, `aqh`, `HnRzm`, `cGK`, `cGJ`, `cGL`, `aqg` are window-edge tokens shared
   with neighboring render/spoof programs; attributed to dW only where bound to its
   own fields above.
