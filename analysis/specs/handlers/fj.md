# Projectile Aim Bot (sixtwo.fj) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_fj.c` — 15 stitched handlers, 164 continuation blocks, 127 end in `halt_baddata()` (typical VM-opcode trampolines), 0 `rdtsc` reads.
- Structural: `analysis/specs/modules/fj.md` (module id 111); registry `analysis/specs/registry.tsv` `fj  Projectile Aim Bot`.
- Java source: `analysis/decompiled/payload-named/sixtwo/fj.java` + `payload-decrypted/sixtwo/fj.java` (folded literal variant — settings defaults verified there).
- Pool blob windows resolved against `analysis/tools/resolve_pool_blob.py` and `analysis/decrypted/full-dump.jsonl`.
- Yarn mappings via `analysis/jars/yarn-1.21.11+build.6.tiny` / `analysis/reference/intermediary-to-yarn-classes.tsv`.

Key mapping used below: class_746=ClientPlayerEntity, class_742=AbstractClientPlayerEntity, class_1753=BowItem, class_1764=CrossbowItem, class_3726=ShapeContext, method_7935=getMaxUseTime(LivingEntity), method_7722=getPullProgress(I)F, method_18456=ClientWorld.getPlayers(), method_5838=setId(I), method_34208=PlayerInteractEntityC2SPacket.interactAt(Entity,Z,Hand,Vec3d), class_2879=HandSwingC2SPacket, method_6052=getAttacking(), method_6065=getAttacker(), method_5858=squaredDistanceTo(Entity), method_1005=Box.getCenter(), method_37267=Vec3d.horizontalLength(), method_23320=Entity.getEyeY(), method_17821=MathHelper.lerpAngleDegrees(FFF).

## Runtime model

Static module (no per-instance handler state beyond one target field). Lifecycle:

- Ciphertext constructor: `(xoring with WnKso ^ 89478313119806L)` + `PRoWq`/`pUNav`/`iPtle` decryptor caches — standard j2cc preamble; `aJI` decodes a string blob, `aJJ` decodes an int blob, `aJH` is an identity rethrow, `aJK`/`aJL` are bootstrap stubs. No module logic.
- Core helper cluster `aJA`/`aJB`/`aJC`/`aJF`/`aJG`/`aJy`/`aJz` shares one pool window POOL[0x11f81,0x2e3], which contains the entire prediction/trajectory API surface.
- Two event hooks per the module class: `go$sX` world render (outline/fill drawing) and `gH$th` render marker (per-frame update).

State fields:
- `zGyRN` — `PlayerEntity` target field (set by target acquisition, consumed by aim/render).
- Statics `WnKso`, `zVHFr` (setting suffix String), `PRoWq`, `pUNav`, `iPtle` — decrypt/cache plumbing, not behavior.

## Per-handler semantics

Trivial (group): `aJH` (identity rethrow), `aJI` (string decode), `aJJ` (int decode), `aJK`/`aJL` (bootstraps). All bodies are decrypt-preamble → indirect jump; continuations are generic VM opcode blocks.

- `aJA(ItemStack)→D` [pool 0x11f81]: projectile charge/prol v evaluation. Tokens BowItem(class_1753)/CrossbowItem(class_1764), `method_7935` getMaxUseTime(LivingEntity), `method_7722` getPullProgress(I)F, plus Math `atan2/acos/toDegrees/isNaN/min`. Given a held stack, computes the launch angle/progress scalar used by the trajectory sampler. Exact branch wiring is inside the VM (see Unrecovered).
- `aJB(ItemStack,DD)→D` [pool 0x11f81]: same cluster; takes stack + two doubles (likely dx,dy or eye/target deltas) and returns a double — residual error term or corrected angle after one trajectory pass. Uses `method_1005` getCenter()Vec3d, `method_37267` horizontalLength(), `method_23320` getEyeY().
- `aJC(ItemStack,PlayerEntity,ov)→Box` [pool 0x11f81]: builds the predicted target hitbox. Takes the current rotation pair `ov` (from qL rotation manager vocabulary) and the stack; returns a Box. Includes a call signature ending `…;Lnet/minecraft/class_3726;)Z` — a raycast/`Box.raycast`-style check with `ShapeContext` (method_959 family). This is the "Render Prediction" hitbox source for the outline.
- `aJD(class_746)→Boolean` [pool 0x1805,0x55]: regex gate. Tokens `String.matches/(String)Z`, `Boolean`, `booleanValue`. Takes the local ClientPlayerEntity and returns whether it passes a name/regex-based filter. The pattern literal itself is inside the encrypted blob — unrecovered.
- `aJE(class_742)→D` [pool 0xfe16,0x2b1]: player threat metric. Tokens `method_18456` ClientWorld.getPlayers(), `parallelStream`, `anyMatch`, class_742 AbstractClientPlayerEntity, `method_5838` setId(I), `method_34208` PlayerInteractEntityC2SPacket.interactAt(Entity,Z,Hand,Vec3d), class_2879 HandSwingC2SPacket, `method_6052` getAttacking(), `method_6065` getAttacker(), `method_5858` squaredDistanceTo(Entity). Given an AbstractClientPlayerEntity, scans world players (parallel stream) and returns a double score. NOTE: this window straddles neighboring classes — several tokens in it (aEt, IMfWo, fCNWh, oMAUs, XacZe, Zznaj, aEs, aEw, aED, hkKrh, aEo, aEE, AYUNa, VBJFM, sXTCM, vhDcM, gdpqr, wjYZb, ABaQX, eresX, field_23152, salDh, NbNqt, LSGzZ…) are unattributable per-group; the getPlayers/parallelStream/anyMatch/interactAt cluster is attributed to fj with medium confidence because it matches the "predict other players attacking me/target" idiom of an aim bot.
- `aJF(class_742)→Z` and `aJG(class_742)→Z` [pool 0x11f81]: boolean filters over an AbstractClientPlayerEntity (valid-target and/or enemy-team checks); consume `NJTyK` (Ignore Walls) and `FzLhH` (FOV) fields in the same window.
- `aJy(gH$th)` render marker [pool 0x11f81]: per-frame update — runs target acquisition, updates `zGyRN`, and (when a target is locked and the held item passes `aJA`) feeds the computed rotation pair into the shared attack/rotation submission path (qL rotation manager vocabulary; `cGD(ov)F` smoothness token in window).
- `aJz(go$sX)` world render [pool 0x11f81]: draws the prediction. Reads `IMpen` (Render Prediction), `DRvrZ` (Filled), `WLOHi` (Outline Color), `OxgJE` (Fill Color); when Filled, draws the `aJC`-produced Box with the fill color at alpha 0.5 (`cob(0.5F)` in the OxgJE initializer); outline color from `Uf(...)` default.

## Settings → behavior mapping

From `payload-decrypted/sixtwo/fj.java` (folded literals):

- `NJTyK` = "Ignore Walls", toggle `cJ WE(false)` — passed to `aJF`/`aJG` filter cluster; when false, targets behind blocks are rejected (the ShapeContext raycast in `aJC`).
- `FzLhH` = "FOV", slider `cC Vy(1.0).Vw(10.0).Vx(360.0).VA(45.0).Vz(zVHFr)` — min 10.0, max 360.0, step 1.0, default 45.0, suffix String `zVHFr` (native-decrypted, unrecovered). Gates which entities `aJF`/`aJG` accept relative to the camera view vector.
- `IMpen` = "Render Prediction", toggle `cJ WE(false)`.
- `WLOHi` = "Outline Color", color `cG Uf(rD.dlM().bjG().bis()).Uh(false)` — default = theme/base color, alpha-off flag false.
- `OxgJE` = "Fill Color", color `cG Uf(rD.dlM().bjG().bis().cob(0.5F)).Uh(false)` — default = theme color with alpha 0.5.
- `DRvrZ` = "Filled", toggle `cJ WE(false)`; `WLOHi`/`OxgJE`/`DRvrZ` all visibility-gated `Vf(IMpen::WF)` (shown only when Render Prediction is on).

Behavior summary: on each render marker frame, filter world players via FOV + Ignore Walls + regex gate (`aJD`), score them (`aJE`), lock the best into `zGyRN`, compute the bow/crossbow pull-progress trajectory (`aJA`/`aJB`), and aim accordingly; optionally render the predicted hitbox (`aJC`) in world render.

## Unrecovered / uncertain

- **Trajectory formula**: `aJA`/`aJB` return doubles and the window proves Math.atan2/acos/toDegrees/isNaN/min + getPullProgress/getMaxUseTime are used, but the VM hides the exact branch/order. The standard MC arrow formula (angle = atan2 of horizontal/vertical terms with pull-progress velocity scaling) is *consistent* with the token set but NOT confirmed — do not treat as recovered.
- **`aJE` scoring formula**: which of squaredDistanceTo/getAttacking/getAttacker/interactAt feeds the double and with what weights is VM-hidden. Attribution of the getPlayers/parallelStream cluster to `aJE` (vs a sibling class sharing the window) is medium confidence.
- **`aJD` regex pattern**: literal unrecovered.
- **`FzLhH` suffix string** (`zVHFr`): native-decrypted static, unrecovered.
- **Unattributed window tokens**: `bxj`, `bxi`, `bBC`, `ckR(ItemStack,ov,Z)→ArrayList` (present in core window; name suggests trajectory-point sampler returning a list, but signature role unconfirmed), plus the long alias list under `aJE` above.
- **Attack submission**: no direct `qL.dbI` token was resolved in fj's windows; how the computed rotation pair reaches the attack path (shared qL rotation manager vs its own submission) is unconfirmed.