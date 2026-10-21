# cQ — Swing Animations: held-item-change trigger fix

Date: 2026-10-21 · Module: `sixtwo.cQ` → `src/main/java/dev/opengrim/modules/render/SwingAnimations.java`
Status: trigger wired; `YF`/`YH` 1:1 · `YG` profile transform remains native `[N]`

## Evidence base

- `analysis/decompiled/payload-decrypted/sixtwo/cQ.java`
  - `YI()` gate 170-210 (`this.RliRe && rD.dlU().bmd().bkZ()`, line 197).
  - `YF(hc)` 213-301: on the event, both hands are tested independently;
    when the hand's predicate is true and `equipProgress - 1 <= 0`, the
    progress is set to `1.0f` and the renderer's cached stack is refreshed
    (`setItemStackMainHand/OffHand`, cQ.java:259-260, 292-299).
  - `YH(ItemStack)` 316-433: returns `false` for `AIR`, `FILLED_MAP`,
    `CROSSBOW`, `BOW`, `TRIDENT`, and for `UseAction.DRINK` / `EAT`; otherwise
    `true`. `YG` proceeds only when `YH` is true (cQ.java:456).
  - `YG(gm)` 436-545: reads `rD.dlU().blR(swingProgress)` and applies the
    `im` profile transform; all curve parameters are native.
- Event plumbing:
  - `hc` is a blank event (`analysis/decompiled/casesafe/payload-named/sixtwo/hc.java`:
    `public class hc extends hH {}`); dispatch is `hH#bdV` →
    `hF.bdO(hc.class)` listener list (`hH.java`).
  - The shell posts it at `ClientPlayerEntity.tick` HEAD:
    `analysis/decompiled/bootstrap/mixin/accessors/LocalPlayerEventBridgeMixin.java:121-137`
    (`Class.forName("sixtwo.hc")`, `bdV()`, optional `bdW()` cancel). This is
    the only `sixtwo.hc` construction point in the decompiled shell; the same
    conclusion is recorded in `analysis/docs/PROGRESS.md:549` ("hc = per-tick
    native event").
  - The per-hand predicates `YF` reads are `in.bkX()` / `in.bkY()`
    (cQ.java:240,266). `in` is native
    (`analysis/decompiled/casesafe/payload-named-cfr/sixtwo/in.java:148-150`);
    its flags and the `im`/`iq` profile registry are unrecovered.
- Vanilla held-item change point: `HeldItemRenderer#updateHeldItems`
  (Yarn `method_3220`), dispatched from `GameRenderer#render`. It caches
  `mainHand`/`offHand`, compares them by stack-object identity with the
  player's current hands, and is the only client code that resets
  `equipProgressMainHand/OffHand` on a swap. Bytecode inspected from
  `minecraft-merged-1.21.11-net.fabricmc.yarn.1_21_11.1.21.11+build.6-v2.jar`
  (`HeldItemRenderer.updateHeldItems` offsets 0-230).

Because `hc` carries no data and is dispatched every player tick, the actual
"did the hand change" information can only come from those native predicates.
The port therefore hooks the observable stack-change point instead of
re-deriving it every tick.

## Event / mixin hook

- New event: `src/main/java/dev/opengrim/event/impl/HeldItemChangeEvent.java`
  - Carries the player, both current stacks, and per-hand
    `mainHandChanged()` / `offHandChanged()` flags.
- `src/main/java/dev/opengrim/mixin/HeldItemRendererMixin.java` (already
  registered in `opengrim.mixins.json`; no config change needed):
  - `@Inject(method = "updateHeldItems()V", at = @At("HEAD"))`.
  - Two `@Unique` per-renderer cache fields hold the last observed stack
    objects; comparison is stack-object identity (`mainHand != lastMainHand`),
    matching vanilla's own `if_acmpeq` change test (not `ItemStack.areEqual`,
    so in-place durability/count changes do not re-fire the event).
  - The cache is updated on every `updateHeldItems` call, including while the
    module is disabled, so enabling mid-game does not emit a false change and
    the event fires exactly once per stack-object change.
  - Posting at HEAD means the listener snaps equip progress before vanilla's
    body runs; `instantEquip` also writes the renderer's cached stack, so
    vanilla's `this.mainHand != mainStack` target becomes `1.0` on the same
    frame and cannot overwrite the snap.
- `src/main/java/dev/opengrim/modules/render/SwingAnimations.java`:
  - `@Subscribe public void onHeldItemChange(HeldItemChangeEvent event)` calls
    the existing `instantEquip(...)` YF port with the event's per-hand flags.
  - Removed the former `onTick()` `ItemStack.areEqual` comparison, the
    `lastMainHand`/`lastOffHand` fields, and the enable/disable baselines.
  - `instantEquip` body itself is unchanged (same order, same `<= 1.0f`
    checks, same accessor calls).
  - `shouldAnimate` (YH) is unchanged: same `null`/empty guard, same five
    item exclusions, same `DRINK`/`EAT` exclusions.

Fallback: not retained. The event path is wired and the mixin is `required`
(`opengrim.mixins.json` `"required": true`), so a missing target fails loudly
at startup instead of silently reverting to a per-tick comparison. The old
per-tick approach is documented above only as the removed stand-in.

## Divergence / labeling

- `[G]` The native `in.bkX()/bkY()` per-hand predicates are represented by
  "this hand's stack object changed". This is the same substitution the
  previous port used; only the trigger moved from `END_CLIENT_TICK` polling to
  the renderer's actual change point.
- `[N]` `YG` is untouched: `RliRe`/`in.bkZ()` gating and the `iq.blR` → `im`
  curve accessors are native (`in.java:148-150`, `iq.java:170`,
  `im.java:18-94`). No curve constants were invented.
- `[U]` The single original setting is the `cI` action button "Edit Animation"
  (`cI.Wx(c::z)`, cQ.java:86); OpenGrim has neither action settings nor that
  editor, so the module still has no settings.

## Build

Command (JDK 21):

```
JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava
```

Result: **PASS** (verified with `--rerun-tasks`: `BUILD SUCCESSFUL`, one
pre-existing `WorldRenderEvent` deprecation warning). An earlier run failed on
`src/main/java/dev/opengrim/modules/render/HitParticles.java` (missing
`OverlayTexture` import, another agent's concurrent edit, not touched here);
the subsequent forced recompile of the whole tree passed after that file was
updated upstream.

## Files

- `src/main/java/dev/opengrim/event/impl/HeldItemChangeEvent.java` (new)
- `src/main/java/dev/opengrim/mixin/HeldItemRendererMixin.java` (new
  `updateHeldItems` bridge + unique cache fields)
- `src/main/java/dev/opengrim/modules/render/SwingAnimations.java` (event
  subscription, per-tick comparison removed, javadoc updated)

Not modified per instructions: `PARITY.md`, `PROGRESS.md`, `privacy.md`,
`.gitignore`, git state/remotes; no other module and no GUI renderer.
