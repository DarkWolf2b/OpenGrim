# cS — China Hat: real player feature renderer + ky.bSd cone

**Status:** implemented (feature-renderer transform + fan/line geometry) ·
**Remaining DES:** `nUFUt` segment count, gradient triangle constants, `oK.cIT()` mapping

## Evidence

- Settings: `analysis/decompiled/payload-named-cfr/sixtwo/cS.java:43-83`
  (`Show For` group, `Self`, `Friends`, `Color`, `Gradient Speed`
  `Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0)`).
- Feature renderer: `qD.java:150-300` — player-only, `isInvisible` bail,
  Self/first-person and Friends gates, `kn.YNOIY` bail, head offset
  `oK.cIT() ? -0.43f : -0.5f`, `PlayerEntityModel.getHead().applyTransform`,
  translate, `NEGATIVE_Z 180`, `POSITIVE_Y 90`, then `ky.bSd`.
- Cone: `ky.java:87-286` — `TRIANGLE_FAN` fan (apex `(0,0.3,0)`, rim radius
  `player.getWidth()` at `(-sin,0,cos)`), per-segment `jk.bDm(i,color,speed)`,
  alpha `40.0f`, then a `DEBUG_LINE_STRIP` rim with the closing angle-0 vertex.
- Pipelines: `kR.CDFBk` (`kR.java:204`) and `kR.Uzcne` (`kR.java:205`) with
  `kS4`/`kS5` (`kR.java:193-194`): blend `lh.GpGUc`
  (SRC_ALPHA, ONE_MINUS_SRC_ALPHA, ONE, ZERO), depth `LEQUAL`; fan writes depth,
  line strip does not; cull false.

## Previous state

The port drew the hat from `WorldRenderEvent` using `getHeight() + offset` and
`debugFilledBox` quads; it had no feature-renderer hook, no exact head transform
and the wrong primitive.

## Implementation

- `ChinaHatRenderer.init()` registers a
  `LivingEntityFeatureRendererRegistrationCallback` for every
  `PlayerEntityRenderer`. The new `HatFeature` gets the same model/matrices stage
  as the original `qD`, applies
  `getContextModel().getHead().applyTransform(matrices)`, the recovered
  -0.43/-0.5 offset (sneaking → -0.5), and the two rotations.
- Gating is the recovered order: invisible bail, self → Self toggle +
  first-person, others → Friends toggle + `FriendsManager`, and the shared
  `kn.YNOIY` batch bail (so the hat is excluded from Chams/Outlines masks).
- The feature stage captures the exact `MatrixStack.Entry` (position + normal)
  and draw parameters; the original defers `ky.bSd` through `jo.bEt`, so the port
  draws the captures at `BEFORE_TRANSLUCENT` (after the entity pass and after the
  Chams/Outlines AFTER_ENTITIES composite) via `EffectDraw.drawCustom`.
- Fan and line geometry are emitted into `BufferAllocator`/`BufferBuilder`
  buffers and drawn through the recovered pipeline state:
  `TRIANGLE_FAN` + `DEBUG_LINE_STRIP`, `lh.GpGUc` blend, depth `LEQUAL`,
  depth write true/false respectively, cull false. The existing
  `circle_solid` stage supplies the POSITION_COLOR shader.
- The old world-render/box path and its head-height approximation are removed.

## Remaining gaps

- `[G]` `nUFUt` (segment count, `ky.java:41,96`) is DES; `SEGMENTS = 24` stays the
  high-probability guess.
- `[G]` `jk.bDm`'s triangle-wave constants (`180`/`360`/`0`) are DES; the
  existing 180/360 reading is kept.
- `[G]` `oK.cIT()` is a native predicate; the port reads it as sneaking
  (sneaking → -0.5, otherwise -0.43). The other offset branch is preserved.
- `[G]` `lT.ciQ().setLineSmoothing` has no OpenGrim equivalent; the line pass is
  drawn inline with the recovered pipeline, without the smoothing toggle.

## Files

- `src/main/java/dev/opengrim/modules/render/ChinaHat.java`
- `src/main/java/dev/opengrim/modules/render/ChinaHatRenderer.java` (new)
- `src/main/java/dev/opengrim/OpenGrimClient.java` (feature-renderer registration)
- Uses the existing `circle_solid` shader and `EffectDraw.drawCustom`

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava --rerun-tasks`
→ **BUILD SUCCESSFUL**.

Runtime was not exercised (no display); feature-renderer registration is the
same Fabric callback used by vanilla feature layers, so the matrices/model are
the original ones.
