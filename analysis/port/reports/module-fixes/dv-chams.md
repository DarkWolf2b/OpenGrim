# dv — Chams: recovered shader passes implemented

**Status:** implemented (four effect modes live) · **Remaining native gap:** `ro.diF` preset tables only

## Evidence

| Piece | Evidence |
|---|---|
| Settings/modes/dispatch | `analysis/decompiled/casesafe/payload-decrypted/sixtwo/dv.java:118-734` (settings), `:938-1169` (`aiI`), `:1171-1173` (`aiL`) |
| Hide original | `dv.java:1266-1390` (`aiJ`), `:840-936` (`aiM`) |
| Original mask/composite launcher | `kj.java:161-200` (`bPv`), `:202-246` (`bPw`), `:319-336` (`bPs`), `:338-355` (`bPr`), `:357-370` (`bPt`), `:372+` (`bPu`) |
| Entity re-render | `kn.java:141-201` (`bQq`/`bQo`), `:299-371` (`bQu`/`bQr`/`bQt`) |
| Mask queue filter | `kn$uh.java` (`submitModel`/`submitModelPart`/`submitItem`/`submitCustom` only) |
| Composite primitives | `jC.java:166-198`, `lF.java`, `kR.java:186,208,255-258,271` |
| Shader sources | `src/main/resources/assets/opengrim/shaders/chams_glass.glsl`, `chams_water.glsl`, `chams_chrome.glsl`, `chams_liquidmetal.glsl` |
| Default selection | `cF.java:33-36` seeds `PLAYER`; `cF.java:181-185` `VT` adds to the universe, not the selection; `cF.java:230-268` `VX` |
| `aiS` self constant | class `gttrI` table + `aiQ` cipher → `15728880` (`0x00F000F0`); `gp$sZ.bbn()` is `LivingEntityRenderState.light` (field `field_61820` = `light`) |
| Label fallback | `analysis/decompiled/bootstrap/mixin/accessors/LivingEntityRenderEventBridgeMixin.java:87-115`: cancel `class_922.method_4054` at HEAD, then call `class_897.method_3936` (base leash+label) when `dv.aiM(entity)` |

## Feasibility

Feasible in 1.21.11 without native code. The original pipeline is entirely
screen-space:

1. copy the main colour target to a background target (`kj.bPv` / `bPw`);
2. clear the mask target colour+depth (`dVZad.caK/caM`);
3. re-extract each entity's render state and draw its model into the mask
   (`kn.bQt` → `EntityRenderDispatcher.render`), with `kn.YNOIY` set and the
   label/shadow/fire/leash/block/text filter of `kn$uh`;
4. restore the main target and draw one full-screen quad with the recovered
   fragment stage, binding `maskTexture`/`backgroundTexture`
   (`kn.bQr`).

The 1.21.11 equivalent of the `MinecraftAccessor.setMainRenderTarget` swap is
`RenderSystem.outputColorTextureOverride`/`outputDepthTextureOverride`, which
`RenderLayer.draw` honours for every immediate layer (the payload itself uses
the same redirection for GUI entity previews, `jr.java:120-140`). The entity
re-render uses a private `OrderedRenderCommandQueueImpl` + `RenderDispatcher`
mirroring `jC`, and a filtering queue mirroring `kn$uh`.

## Implementation

| Original | Port |
|---|---|
| `kj.bPv` background copy/clear/target swap | `ChamsRenderer.renderMask` |
| `kn.bQo`/`kn.bQt` entity re-render | `ChamsRenderer.renderMask` (`getAndUpdateRenderState` + `EntityRenderManager.render`) |
| `kn$uh` filter | `ChamsRenderer.FilteringQueue` / `FilteringCommandQueue` (model, model-part, item, custom only) |
| `kj.bPr/bPs/bPt/bPu` uniform order | `ChamsRenderer.composite` + `Chams.uniforms()` (12 std140 `vec4` slots) |
| `kn.bQr` full-screen quad | `ChamsRenderer.composite` (`RenderPass`, `POSITION` QUADS, no depth) |
| `aiJ` model cancel | `EntityRendererMixin` (marker) + `LivingEntityRendererMixin` (HEAD cancel + `aiM` label fallback) |
| `aiK` nameplate gate | labels are dropped by the mask filter; `Chams.shouldCancelNameplate()` keeps the shared `isChamsBatchActive` API |
| `aiI` collection | `Chams.onWorldRender` (frustum → universe → set → self rules) |

Uniform slot map (all four stages share the block):

| Slot | Glass | Water | Chrome | Liquid Metal |
|---|---|---|---|---|
| 0 | `screenSize`, `time` | same | same | same |
| 1 | refraction, depth, frost, dispersion | flowSpeed, flowScale, refraction, specular | speed, rimSharpness, rimIntensity | scale, noiseX, noiseY, noiseX2 |
| 2 | lightAngle, lightIntensity, splay | waveHeight, choppiness, waveFreq | — | noiseY2, warpX, warpY, brightness |
| 3 | — | — | — | speed, redShift, blueShift, contour |
| 4 | — | — | — | softness |
| 5 | tintColor | waterColor | chromeTint | — |
| 6 | colorModulator (1,1,1,1) | same | same | same |
| 7 | lightColor (bevel) | — | — | — |
| 8-11 | — | — | — | colorOne..colorFour |

Colors use the recovered `mG.con()` `{r,g,b,a}` 0..1 layout. `time` is
`GLFW.glfwGetTime()` exactly as `kj.bPs/bPt/bPu`.

## Hide original / nameplate behaviour

- `aiJ` is the **whole** `LivingEntityRenderer.render` cancel at HEAD, matching
  the bootstrap injection point; when `aiM` holds, the base
  `EntityRenderer.render` is re-run (leashes + `renderLabelIfPresent`), so the
  vanilla nameplate survives for non-self targets. Self cancellation keeps the
  original quirk (no label fallback).
- The recovered self branch: `bbn()` is the render-state light; if it equals
  `15728880` (`0x00F000F0`) the self model is **not** hidden. Otherwise the self
  model is hidden when `apply_to_own_player` is on, the entity is in the set, and
  the camera is not first person.
- The mask batch sets the shared `kn.YNOIY` equivalent (`Chams.isChamsBatchActive`
  and `Outlines.isOutliningActive`) so `aiJ` never cancels the mask re-render;
  the same window drives the nameplate suppression.
- Default selection is `{PLAYER}` (corrected from the earlier empty-set
  reading); universe is `jg$tJ.OCdZM` (living minus armor stands).

## Files

- `src/main/java/dev/opengrim/modules/render/Chams.java`
- `src/main/java/dev/opengrim/modules/render/ChamsRenderer.java` (new)
- `src/main/java/dev/opengrim/modules/render/ChamsRenderState.java` (new)
- `src/main/java/dev/opengrim/mixin/EntityRenderStateMixin.java` (new)
- `src/main/java/dev/opengrim/mixin/EntityRendererMixin.java` (new)
- `src/main/java/dev/opengrim/mixin/EntityRendererInvoker.java` (new)
- `src/main/java/dev/opengrim/mixin/LivingEntityRendererMixin.java` (new)
- `src/main/resources/assets/opengrim/shaders/chams.vsh` (new)
- `src/main/resources/assets/opengrim/shaders/chams_glass.fsh`, `chams_water.fsh`,
  `chams_chrome.fsh`, `chams_liquidmetal.fsh` (new; recovered `.glsl` bodies with a
  std140 `Chams` block)
- `src/main/resources/opengrim.mixins.json`

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava --rerun-tasks`
→ **BUILD SUCCESSFUL**. All five new shaders pass `glslangValidator` (vertex
`chams.vsh`, four fragment stages).

Runtime was not exercised (no display in this environment); the mask/composite
uses the same primitives as the already-working GUI backdrop blur and uses the
same override path as the payload's own GUI entity preview.

## Remaining gaps

- **`ro.diF` preset tables** (Liquid Metal Preset / `aiL`, `dv.java:1171-1173`):
  genuinely native; selecting a preset still does not rewrite the 18 liquid-metal
  settings. No data in the payload/dump.
- Mask colour alpha for translucent entity layers depends on the vanilla entity
  pipelines (same as the original); no custom mask shader exists to recover.
- The `chams_*` fragment bodies are recovered verbatim; only the loose uniform
  declarations were moved into a std140 block because `RenderPass` has no
  per-uniform upload (documented in each `.fsh` header).
