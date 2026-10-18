# Hit Particles (sixtwo.dc) — handler-derived behavior spec

Class: `sixtwo/dc` · display name **Hit Particles** (module id 90).
Superclass `gg`, implements `lG` (batched render contract; `lG.XSRvt` shared
`kM` renderer). **Zero native methods declared** (javap-verified; coverage
matrix `natives_declared=0`) — pure-Java payload class; no image addresses
(0x18xxxxxxx) to cite. **Note**: CFR failed on the two main handlers
(`abY`, `abZ`); both were fully recovered from `javap` bytecode
(`/tmp/dc-bc.txt` — `abZ` at lines 3248–3424, `abY` at lines 3424–3610 of the
disassembly). Evidence cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/dc.java` (605 lines) where CFR
succeeded, plus javap offsets for the two failed methods.

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/dc.java` — settings tree
   readable; `abY`/`abZ` failed in CFR (confirmed via decompile stubs).
2. javap disassembly of `sixtwo.dc` from `analysis/jars/payload-named.jar` —
   the two handlers recovered from raw bytecode (`removeIf` target confirmed
   as `mq::clp` via BootstrapMethods).
3. Inner classes (payload-named): `mq` (abstract particle: pos/vel/physics
   `mp`/scale; `clL` interpolate by tick delta, `clp` expired test, `clq`/
   `clr` draw passes, static counters `clM/clO/clN`), `mm` (adds `cA`
   rotation angle/speed params), `mn` (variant), `mp` (physics enum:
   `vWdBW`, `YeaJV`, `czXTa`, `qIoJG`), `mo` (style enum with texture
   `clD()`: `TcnVB`, `KePbo`, `Vflfx`, `bkxjV`, `kbKRO`, `mDCeI`, `KyziQ`,
   `KyHOi`).
4. `analysis/specs/modules/dc.md` structural spec.
5. Helpers (one-liners): `mU.cpQ(f,f)` random float range;
   `mU.cpQ(y+height, y)` clamped vertical sample; `jJ.bIA(Vec3d)`
   visibility; `ob.cBv(String)` built-in texture lookup; `kS.bVG(
   DepthTestFunction.LEQUAL_DEPTH_TEST)` pipeline state; `cA` slider setting
   (`UG` step / `UE` min / `UF` max / `UI(default, anchor)` / `UH` suffix);
   `ct/cu` group tree; `cC` numeric; `cG` color; `cJ` boolean.

## Runtime model

- **`abY(gH.th)`** — pre-motion tick spawner [javap 3424–3610]:
  1. `DaBEE.removeIf(mq::clp)` (drop expired particles);
  2. map "Physics" `ST()` index → `mp`: 0 → `mp.vWdBW`, 1 → `mp.YeaJV`,
     2 → `mp.czXTa`, 3 → `mp.qIoJG`;
  3. for each world player (skip if **Only Self** && player ≠ self) with
     `hurtTime > 0`: spawn `Amount` particles per hurt tick:
     `mm(pos = (x, mU.cpQ(y+height, y), z), vel = (−Speed/50,
     cpQ(±Speed/50), cpQ(±Speed/50)), physics, Scale.VB(), Time.VC(),
     rGtqd (Rotation Angle), MrfWt (Rotation Speed))`.
- **`abZ(go.sX)`** — world render [javap 3248–3424]:
  1. map "Particles" `ST()` index → `mo` style: 0 → `TcnVB`, 1 → `KePbo`,
     2 → `Vflfx`, 3 → `bkxjV`, 4 → `kbKRO`, 5 → `mDCeI`, 6 → `KyziQ`,
     7 → `KyHOi`;
  2. `XSRvt.startBatch(style.clD(), kM.defaultState().bVG(
     DepthTestFunction.LEQUAL_DEPTH_TEST))`;
  3. visible list `jJ.bIA` over `mq.clL(tickDelta)` interpolated positions;
  4. draw `mq.clq(stack, tick, color)`; if **Glow**: flush, `swapTexture(
     ob.cBv(DES ~6951))`, glow pass `mq.clr`;
  5. `endBatch()`.
- **`acC`-family cleanup / `YO()`** — unregister + clear `DaBEE`.
- State: `List<mq> DaBEE`; spawn velocity X is exactly `−Speed/50` (leftward
  bias); Y/Z are random ±`Speed/50`.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 75–234):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Particles" (`ct ywyjh`) | group, 8 `cu` children | Stars, Snowflakes, Ghost, Hearts, Diamonds, Thunders, Moons, Clouds | first child | [dc.java:75–139] |
| "Color" (`cG dJxLo`) | color | — | `bjG().bis()` white | [dc.java:140] |
| "Physics" (`ct usOjR`) | group, 4 children | Fall, Rise, Burst, Fly | first child | [dc.java:142+] |
| "Scale" (`cC SynzG`) | numeric | step **0.01**, min **1.0**, max **10.0** | **3.0** | [dc.java:154] |
| "Speed" (`cC FsyXs`) | numeric | step **0.01**, min **1.0**, max **15.0** | **3.0** | [dc.java:155] |
| "Amount" (`cC QbLID`) | numeric | step **1.0**, min **1.0**, max **5.0** | **2.0** | [dc.java:163] |
| "Time Before Disappear" (`cC yEhAI`) | numeric | step **1.0**, min **1.0**, max **10.0** | **3.0**, suffix **" s"** | [dc.java:186] |
| "Only Self" (`cJ gyzDI`) | boolean | — | `false` (`WE(false)`) | [dc.java:197] |
| "Rotation Angle" (`cA rGtqd`) | slider | step **1.0**, min **0.0**, max **360.0**, default **0.0** (UI(0,180) anchor), suffix **" deg"** | [dc.java:213] |
| "Rotation Speed" (`cA MrfWt`) | slider | step **1.0**, min **0.0**, max **60.0**, default **0.0** (UI(0,60) anchor), suffix **" deg"** | [dc.java:229] |
| "Glow" (`cJ zbbPv`) | boolean | — | `true` (`WE(true)`) | [dc.java:230] |

## Unrecovered

- Glow texture plaintext: DES slot ~**6951** inside `ob.cBv(...)` — open.
- `mo` style texture identifiers behind `clD()` are shell-defined — actual
  texture file names open (enum field identities certain).
- `mm`/`mn` division of labor (which is used when) — [uncertain]; `mm` is
  the spawned class in `abY` bytecode, `mn` appears in the draw path.
- Static particle counters `mq.clM/clO/clN` purposes (telemetry vs id
  generation) — [uncertain].
- Physics constants inside `mp` (gravity/drag per physics mode) live in the
  shared particle shell — contract only, not guessable here.