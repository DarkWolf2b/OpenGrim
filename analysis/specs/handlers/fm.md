# Pearl Chaser (sixtwo.fm) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_fm.c` — 24 handlers (incl. 3 native-only `aKC/aKD/aKE` missing from the CFR shell), 96 continuation blocks (generic VM trampolines).
- Structure: `analysis/specs/modules/fm.md`, `analysis/decompiled/payload-named/sixtwo/fm.java`.
- Class pool window `POOL[0x123d5,0x2ea]` (+ overlapping continuation view `POOL[0x12545,0x2ec]`, full extent 0x123d5–0x12831), shared tail window `POOL[0x98a3,0x1b0]`.
- Window straddle: pool content past the `sixtwo/fn` token (and past `sixtwo/re`) belongs to neighboring group; the `POOL[0x98a3,0x1b0]` window is the shared eJ/eK/dA placement-engine cluster (`oT` singleton, `qP`, `ddp (Lsixtwo/oT;)Z`) — fm-attributable portion is the block-state checks (`Direction.offset`, `getBlockState`, `Blocks.LEVER` field_10363, `Block.isOf`), which may be shared with siblings; flagged below.
- Registry: `sixtwo.fm|Pearl Chaser|Automatically throws pearls after players|key=145|bind=-999`, category `gh.xwjCw` (combat).

## Runtime model

Tracks other players' thrown ender pearls, simulates each pearl's ballistic trajectory locally, predicts its landing position, and when a predicted landing threatens (lands near/on self) and own health exceeds a threshold, throws a pearl (rotations via `qL`-style aim, Vec2 rotation in `wPysa = ov.cGv(0.0F, 0.0F)`).

- Events: `aKp(gv)` client-tick [18c34dc20], `aKq(gH.th)` pre-motion tick [18c353ba0].
- Two independent timers: `ERRVP = mT.cpz()`, `OivbA = mT.cpz()` (throw cooldown / tracking refresh — assignment to roles not recovered).
- Trajectory engine (pool tokens, group `sixtwo/mc|mh|mi`): `ckg (Lsixtwo/mh; (Lnet/minecraft/class_3857;)...` = build point from ThrownItemEntity, `ckx (Lnet/minecraft/class_243;)Lsixtwo/mh;` = point from Vec3d, `ckJ (Lsixtwo/mi;)Lsixtwo/mh;`. Sim fields visible verbatim in pool: `waterDrag`, `airDrag`, `gravity`, `previousPosition`, plus a `(DDDDDD)V` initializer (6 double physics parameters — exact values unrecovered) and `net/minecraft/class_1667` in the same token group (mapping file says ArrowEntity; in a pearl module this is likely either a second simulated projectile type or a mapping drift — flagged uncertain).
- Physics/landing checks (verbatim tokens): `method_26227 ()Lnet/minecraft/class_3610;` (`getFluidState`), `net/minecraft/class_3486` (`FluidTags`), `field_15517` (`FluidTags.WATER`), `method_15767` (`isIn(TagKey)`) — water interaction in sim; `method_994 (Lnet/minecraft/class_238;)Z` (`Box.intersects`) — pearl path vs player hitbox; `method_10262 (Lnet/minecraft/class_2382;)D` (`getSquaredDistance`); `method_24921` (`EnderPearlEntity.getOwner`); `method_5707` (`squaredDistanceTo(Vec3d)`).
- Path evaluation: `aKA (Ljava/util/List;ZZ)Z` [18c36e5a0] over simulated `Vec3d` points, with `hypot (F)Z` threshold test and cached `vlFZY` (static double).
- Geometry helpers: `aKB (Vec3d, Vec3d) Vec3d` [18c3741f0]; `aKw(EnderPearlEntity) BlockPos` [18c3e4e90] (landing pos), `aKx(BlockPos) D` [18c3ee300], `aKy(BlockPos) F` [18c3effb0] (pos metrics), `aKz() BlockPos` [18c360a10] (own pearl target?).
- Player filter: `aKE (Lnet/minecraft/class_742;)Z` [18c378fd0] (AbstractClientPlayerEntity check — friend/skip test, ties to `HtBNt`).

## Per-handler semantics

All bodies are decrypt-preamble → VM dispatch; semantics = token contract.

- `aKp(gv)` [18c34dc20] — client tick: pearl scan + sim update, throw decisions (touches `zPgOp`, `EnrbM`, `nHFuo`, `vfWoI`, `QVPeQ`, both timers, `xGUzz`, `HtBNt`).
- `aKq(gH.th)` [18c353ba0] — pre-motion tick: rotation/throw execution (touches `wPysa` rotation).
- `aKC (Lsixtwo/mc;Lnet/minecraft/class_243;)Lnet/minecraft/class_243;` [18c3788f0] and `aKD` same signature [18c378c60] — sim step variants (with/without water drag handling; exact split unrecovered).
- `aKE(class_742)` [18c378fd0] — player eligibility filter.
- `aKA(List<Vec3d>,boolean,boolean)` [18c36e5a0] — evaluates a simulated path (two boolean flags — likely "hit player box" / "hit water-or-blocks").
- `aKB(Vec3d,Vec3d)` [18c3741f0] — vector helper (interpolation/extrapolation).
- `aKw(EnderPearlEntity) BlockPos` [18c3e4e90] — predicted landing position of a pearl.
- `aKx(BlockPos) D` [18c3ee300], `aKy(BlockPos) F` [18c3effb0] — positional scoring of a landing block (distance / danger metric).
- `aKz() BlockPos` [18c360a10] — own-pearl landing/throw-target lookup.
- `aKr` [18c388400], `aKs() Z` [18c3c8530], `aKt` [18c3d2cf0], `aKu` [18c3dbee0], `aKv` [18c3e0f70] — state-machine steps (reset, ready-check, sim refresh, throw execution); grouping inferred from token membership only.
- `aKI/aKK/aKH/aKG/aKJ/aKL/aKF` [18c3856f0 etc.] — j2cc string-decrypt boilerplate.

## Settings → behavior mapping

| setting (decoded) | field | wrapper / chain (verbatim) | behavior role |
|---|---|---|---|
| Minimal Health To Throw | xGUzz | `cC .Vy(0.1).Vw(2.0).Vx(20.0).VA(5.0)` | own-health gate for throwing: step 0.1, min 2.0, max 20.0, default 5.0 (no suffix) |
| Ignore Friends | HtBNt | `cJ .WE(true)` | skip pearls owned by friends (default on; ties to `aKE` filter) |

No keybind-triggered logic (bind -999 unbound; `rk` not constructed).

## Unrecovered / uncertain

- All bodies j2cc-virtualized; no formulas recovered. In particular: the `(DDDDDD)V` trajectory-sim parameters (gravity/drag constants), the pearl-threat predicate (which `aKx`/`aKy` score vs `vlFZY`), and the throw aim computation are unrecovered — do not guess.
- `class_1667` (ArrowEntity per mapping) inside the pearl-sim token group is unexplained: either a second simulated projectile type or a decompiler-era mapping mismatch; flagged, not asserted.
- Assignment of the two timers (`ERRVP`, `OivbA`) and the five int state fields to specific roles (scan cooldown vs throw cooldown vs pearl entity id) is inferred, not proven.
- `Blocks.LEVER` (field_10363) and `Block.isOf` sit in the shared `POOL[0x98a3,0x1b0]` straddle-window (eJ/eK/dA placement cluster); whether fm itself checks lever blocks at landing sites is uncertain.
- `aKA`'s two boolean flags, `aKz()`'s purpose, and native-only `aKC` vs `aKD` split are inferred from signatures only.
- Pool content after the `sixtwo/fn` token (`re`, `deN (Lsixtwo/gH$th;)V`, `deO (Ljava/util/function/BooleanSupplier;)I`, `aLd`, `aKP`...) belongs to the neighboring fn group and is excluded from this spec.
