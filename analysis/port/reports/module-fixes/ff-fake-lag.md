# ff — Fake Lag: range settings + attack-post event

Date: 2026-10-21 · Module: `sixtwo.ff` → `src/main/java/dev/opengrim/modules/movement/FakeLag.java`
Status: two-handle ranges wired; attack-post event wired; `kx` indicator remains native `[N]`

## Evidence base

- `analysis/decompiled/payload-decrypted/sixtwo/ff.java`
  - Settings: Mode `ct` with Normal/Lag Range (99-133), Packet Interval `cA
    .UG(5.0).UE(0.0).UF(2000.0).UI(100.0,150.0).UH(" ms")` (136), Lag Range
    Distance `cA .UG(0.1).UE(1.0).UF(6.0).UI(1.0,3.6).UH(" blocks")` (156),
    Reset On Knockback (176), Reset Time (188), Reset On Explosion (208),
    Reset On Health Update (232).
  - `aIm(gL$tj)` 679-872 (C2S hold/cancel), `aIl(gL$tk)` 877-899 (S2C resets,
    recovered from bytecode), `aIn(gH$th)` 947-1021 (tick gate), `aIp()`
    530-574 (flush), `aIq()` 576-670 (Lag Range release), `aIr()` 936-938
    (target scan), `aIs()` 940-943 (latch reset), `aIk(hw$tw)` 1030-1064
    (attack latch).
- Range widget contract (`analysis/decompiled/casesafe/payload-named/sixtwo/cA_.java`):
  - handles stored as `MutablePair<Double,Double>` (22-24), `UP(0/1)` exposes
    them (201-210), `UI(low,high)` → `UJ` (248-…, step-clamped through `US`),
    `UM(d)` = `left <= d <= right` (391-410), `UN()` = `mU.cpR` (557-559),
    and `mU.cpR` = `random.nextDouble() * (right - left) + left` (mU.java:214-219)
    i.e. **uniform** over the handles.
  - Target scan `oh.cDb(cA)` copies `UP(0)`/`UP(1)` as the band
    (oh.java:334-338); its distance filter uses the same inclusive bounds
    (oh.java:283-322).
- Attack-post point: the shell's `hw$tw` is constructed with the target at
  **TAIL of `ClientPlayerInteractionManager#attackEntity`** (Yarn
  `class_636.method_2918`), not `PlayerEntity#attack`:
  `analysis/decompiled/bootstrap/mixin/accessors/InteractionEventBridgeMixin.java`
  :40-53 (`offline$attackPost`). `ff.aIk` only reads the bare event (mode gate
  then `nlYuR = true`), so the target payload is unused, as in the original.

## Changes

- `RangeSetting` (new, `src/main/java/dev/opengrim/settings/RangeSetting.java`):
  low/high handles with step/min/max/suffix, `setLow`/`setHigh`/`setHandles`,
  `randomValue()` (`ThreadLocalRandom.nextDouble(low, high)`, matching
  `mU.cpR`), `contains()` (the `UM` predicate), and map serialization for the
  JSON config.
- `RangeSliderWidget` (new, `src/main/java/dev/opengrim/gui/ui/widgets/`):
  two-knob numeric row, label `low - high + suffix`, nearest-knob drag;
  geometry follows the existing numeric slider (the original knob geometry is
  native and was never recoverable — `[S]`, documented in its javadoc).
  Registered in `ModuleWidgetFactory` under `case RangeSetting`.
- `FakeLag`:
  - Packet Interval → `RangeSetting(5.0, 0.0, 2000.0, 100.0, 150.0, " ms")`.
    Every redraw now uses `randomValue()` (`lseaG = qWnBv.UN().intValue()`,
    ff.java:370/993/1019 and the S2C reset paths).
  - Lag Range Distance → `RangeSetting(0.1, 1.0, 6.0, 1.0, 3.6, " blocks")`.
    The release test is `!contains(distance)` (matching `!FUqia.UM(d3)`) and
    the scanner filter uses the full inclusive band instead of the former
    upper-bound-only check.
  - `onAttackEntity(AttackEntityEvent)` → `onAttackEntityPost(AttackEntityPostEvent)`;
    body unchanged (in-game guard, Lag Range mode gate, `inRangeLatch = true`).
- `AttackEntityPostEvent` (new) + `ClientPlayerInteractionManagerMixin` (new;
  registered in `opengrim.mixins.json`): `@Inject` at `@At("TAIL")` of
  `attackEntity(Lnet/minecraft/entity/player/PlayerEntity;Lnet/minecraft/entity/Entity;)V`
  posts the event. This replaces the pre-attack `AttackEntityEvent` stand-in.
- `Reset Time` stays a `DoubleSetting` (it is a single `cC` value, ff.java:188).

## Unrecovered / remaining

- `[N]` the embedded `kx AhpMu` indicator (ff.java:233) and its
  `aIo(go$sX)` world-render handler (ff.java:440-501) are still not ported:
  toggle label is an unsolved 22-char DES literal, `kr` option semantics are
  not decompilable, and the draw body is native. The sibling Backtrack port
  omits its `kx` for the same reason.
- `[U]` `of.ahXwo` comparator identity (target sort order) remains native; the
  port keeps "nearest by `Entity#distanceTo`".
- `[U]` `gM` (disconnect) has no bus event; the world-null tick guard still
  performs `clear()` + disable without flushing.

## Build

```
JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava
```

Result: **PASS** (`BUILD SUCCESSFUL`). No formatting or mixin-target errors.

## Files

- `src/main/java/dev/opengrim/settings/RangeSetting.java` (new)
- `src/main/java/dev/opengrim/gui/ui/widgets/RangeSliderWidget.java` (new)
- `src/main/java/dev/opengrim/gui/ui/ModuleWidgetFactory.java` (range binding)
- `src/main/java/dev/opengrim/event/impl/AttackEntityPostEvent.java` (new)
- `src/main/java/dev/opengrim/mixin/ClientPlayerInteractionManagerMixin.java` (new)
- `src/main/resources/opengrim.mixins.json` (mixin registered)
- `src/main/java/dev/opengrim/modules/movement/FakeLag.java`

Not modified: `PARITY.md`, `PROGRESS.md`, `privacy.md`, `.gitignore`, git
state; no other module and no render/GUI render pipeline file.
