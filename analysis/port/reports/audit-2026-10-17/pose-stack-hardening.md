# Pose-stack hardening — 37 push sites wrapped in `try/finally`

Follow-up to `crash-2026-10-18b.md` §5. Scope: `src/main/java/dev/opengrim/modules/**`
only. No GUI, event, or ledger files touched. No git operations.

## Mechanism

`EventBus.post` swallows listener `Throwable`s (parity with `hH#bdV`,
`EventBus.java:71-79`), so an exception raised between a pose-stack `push()` and its
`pop()` no longer unwinds the render callback. The leaked push then detonates at
`LevelRenderer#checkEmpty` as `IllegalStateException: Pose stack not empty` (the
ChinaHat crash, 2026-10-18 10:56:26). Every unprotected push is therefore a
guaranteed client crash on the first throwable in its body.

Fix pattern (same as the existing ChinaHat / StorageEsp fixes): body moved verbatim
into a `try` block one indentation level deeper; the `pop()` moved into the
`finally`. No draw statement, argument, color, or comment was changed — only the
pop's location (and the body's indentation). `continue`/early skips inside loops
are unaffected; per-iteration pushes pop once per iteration in both paths.

## Sites wrapped (37 of 37; post-edit push line numbers)

| # | file:line | notes |
|---|---|---|
| 1 | `render/BlockEsp.java:113` | straight-line |
| 2 | `render/Chams.java:227` | straight-line |
| 3 | `render/CircleEsp.java:287` | straight-line |
| 4 | `render/Esp2D.java:134` | straight-line |
| 5 | `render/FireworkSpots.java:159` | while-loop body inside try |
| 6 | `render/FriendIndicator.java:119` | per-friend push inside `for` loop; each iteration wrapped |
| 7 | `render/HealthIndicators.java:238` | straight-line |
| 8 | `render/HitParticles.java:269` | outer; inner per-particle sites 295, 308 also wrapped (3 total) |
| 9 | `render/HoleEsp.java:484` | straight-line if/else |
| 10 | `render/JumpCircle.java:260` | per-circle push inside `for` loop; each iteration wrapped |
| 11 | `render/LogoutSpots.java:234` | straight-line |
| 12 | `render/Particles.java:322` | outer; inner per-particle site 346 also wrapped (2 total) |
| 13 | `render/PearlPrediction.java:140` | outer; inner text-billboard site 165 also wrapped (2 total) |
| 14 | `render/PopChams.java:221` | straight-line if/else |
| 15 | `render/ShieldStatus.java:231` | straight-line |
| 16 | `render/SkeletonEsp.java:112` | outer; inner head/right leg/left leg/right arm/left arm sites 148, 158, 168, 178, 188 also wrapped (6 total) |
| 17 | `render/SoulEffects.java:291` | outer; inner per-particle site 303 also wrapped (2 total) |
| 18 | `render/SoundEsp.java:185` | while-loop body inside try |
| 19 | `render/TargetEsp.java:261` | "Circle" mode particle |
| 20 | `render/TargetEsp.java:317` | "Soul" mode particle |
| 21 | `render/TargetEsp.java:362` | "Ghosts" mode particle (inner double loop) |
| 22 | `render/TargetEsp.java:408` | "Crystals" mode particle |
| 23 | `render/TargetEsp.java:436` | "Crystals" bloom pass (5 sites total in file) |
| 24 | `render/Tracers.java:122` | straight-line |
| 25 | `render/Trails.java:102` | straight-line |
| 26 | `render/Trajectories.java:127` | straight-line |
| 27 | `world/Nuker.java:578` | straight-line |

All 37 crash-report sites are wrapped. Counts match the report exactly (23 files,
37 sites).

## Skipped

None. Every listed site was wrappable; none needed restructuring beyond nesting the
body in `try` (no variable declared between push and pop had to move, no site has an
early `return` between the pair).

Already protected (per instructions, left untouched, re-verified):

* `render/ChinaHat.java:98-126` — existing `try/finally` (crash fix 2026-10-18b).
* `render/StorageEsp.java:398-435` — existing `try/finally` (StorageEsp early-return fix).

## Verification

* Structural scan over all of `modules/**`: **39** `push()`/`pushMatrix()` sites
  (37 wrapped here + ChinaHat + StorageEsp); every `push` is immediately followed by
  `try {`, every `pop` is preceded by `} finally {` (ChinaHat's pop is behind a
  comment line inside its `finally` — false positive for the naive check, verified
  by reading), push/pop counts balanced 39/39.
* Early-return scan: no `return` statement occurs between any push/pop pair
  (`return` would leak the stack the same way).
* Compile: `.\gradlew.bat compileJava -q --offline` → **exit 0** (only the
  pre-existing "unchecked or unsafe operations" notes).

## Observations (not changed — out of scope, no pose-stack impact)

* `render/Trajectories.java:144` — `client.options.getBobView().setValue(prevBobView)`
  remains *after* the `try/finally` (only the `pop()` was moved into the `finally`,
  per the minimal-change constraint). If a trajectory draw call throws, `bobView`
  stays disabled until re-enabled — a state leak worth folding into the `finally`
  in a future pass, but not a crash path.
* For per-iteration pushes inside loops (FriendIndicator, JumpCircle, HitParticles,
  Particles, PearlPrediction, SkeletonEsp, SoulEffects, TargetEsp), a throw now pops
  the current frame's matrix and propagates to `EventBus.post` (printed, swallowed);
  remaining loop iterations are skipped, exactly as they would have been without the
  wrapper, but the stack stays balanced.
