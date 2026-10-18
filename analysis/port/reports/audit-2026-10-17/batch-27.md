# Batch 27 audit - dj (Hole ESP)

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-27 subagent.
Module: `dj` Hole ESP (`src/main/java/dev/opengrim/modules/render/HoleEsp.java`).

Compile: `.\gradlew.bat compileJava -q --offline` -> exit 0 (after the rewrite).

Sources per id from `analysis/tools/audit/source-map.tsv`: `dj` =
`casesafe/payload-decrypted/sixtwo/dj.java` (declared class `sixtwo.dj` verified),
bytecode ground truth `javap -c -p` on
`analysis/decompiled/jar-casesafe/sixtwo/dj.class` and the four inner classes
(`dj$sB/sC/sD/sE`), helper bytecode `mG_.class`, `kH_.class`, `kN_.class`,
`jJ_.class`; helper decompiles `rk.java`, `rj.java`, `ct.java`, `cu.java`,
`kR.java` (all `analysis/decompiled/payload*/`). Trace
`analysis/traces/2026-10-17/`: `dj.txt` digest has only `YO` x2 and the JSONL only
`load` + `YO` enter/exit - **no runtime coverage of scan/draw for this module**;
the audit therefore rests on the decompile + bytecode + decrypted pool.

## Constant recovery (the two "Unrecovered" literals + the failed methods)

The class DES-encrypts every numeric/string constant per call site
(`agu(id, l2)` -> `ags(id, l2)`; `n3 = id ^ (l2 & 0x7FFF) ^ 0x2AA9`, ciphertext
`CvhLh[n3]`, key = the big-endian bytes of `l2`). `CvhLh` is built in the clinit
from two embedded ciphertext strings (constant-pool Utf8 #561 = 664 bytes,
#566 = 16 bytes) with key `UFHNj ^ 27466238224920`.

- **`UFHNj` recovered = 105647788442696**, derived independently from two
  `full-dump.jsonl` sites (`sixtwo.dj` has 211 records: 209 `agu`, 2 `agr`):
  site 25501 (constructor, dump `args[1] ^ ldc2_w` ^ 71136239241171) and site
  29385 (`age` buffer, `^ 113673690013170`) - both give the same key.
- Re-implemented the class's own decryptor (PowerShell + .NET DES/CBC/NoPadding
  over the constant-pool strings): **validated 29385 -> 16 and 25501 -> 147
  against the dump (2/2)**.
- Recovered from the validated decryptor:
  - `agu(15599)` = **300** - the `rk` fade duration in `afW` (dj.java:1531).
  - `agu(23746)` = **20** - `age`'s second `BufferAllocator` size multiplier
    (4 floor + 16 Outline-strip vertices per hole; dj.java:509).
  - (dump already had `agu(29385)` = 16, matching `age`'s four side quads,
    dj.java:433.)

## Post-fix parity: ~96%  status: ported  fixed: yes (full behavioral rewrite)

## Fixes (all 1:1, cited)

1. **`agc` safety classification rewritten from bytecode** (was an invented
   neighbour scan). javap 132-197: each floor/wing/wall cell must pass `agi`
   else the hole is rejected; then `hasBedrock && !hasNonBedrock` -> zrNsv,
   `hasBedrock` -> XoavU, else WBAxv. Enum ordinals (javap `dj$sD`:
   zrNsv, WBAxv, XoavU, btXid) + `agl` tableswitch pin the semantics:
   **all-bedrock = Bedrock Color, no bedrock = Obsidian Color, mixed =
   Obsidian-Bedrock Color, btXid = Void Color**.
2. **`agl` recovered from bytecode** (decompile failed): ordinal 0/1/2/3 ->
   `vJCDp` "Bedrock Color" / `JMRnw` "Obsidian Color" / `QfgSU`
   "Obsidian-Bedrock Color" / `JaDoR` "Void Color". `colorFor` now matches;
   the old code guessed the pairing.
3. **`afX` recovered from bytecode** (decompile failed) and implemented - it was
   missing entirely:
   - hole still contained in the scan list (`soBDJ.contains`),
   - `center().squaredDistanceTo(player.getEntityPos()) <= Range^2`,
   - **"Ignore Self"** (declared but previously never read): reject when
     `player.getBoundingBox().intersects(hole.toBox(0.5))` (the old code
     compared the player's feet block against the cells - a guess),
   - safety toggle per type (zrNsv none, WBAxv Obsidian, XoavU Obsidian-Bedrock,
     btXid Void) then shape toggle (single/void always, XksfN Double, vzSwM Quad).
4. **Fade system implemented** (`afW`/`afT`, previously absent - the module
   drew instantly):
   - `afW` mints one `rk(300).dhs(rj.UPXqT)` animator per newly scanned hole,
     snapped to 0 via `rk#dhg` (dj.java:1519-1536);
   - `afT` advances `dhd(valid ? 1 : 0)` per render frame, removes entries whose
     invalid fade reached 0, skips fade == 0, frustum-culls, emits `dj$sB`
     (dj.java:1538-1627). New `Animator` mirrors `rk#dhd` (rk.java:54-134) with
     `rj.UPXqT(t) = (1 - cos(pi t)) / 2` (rj.java:69).
5. **Frustum culling implemented** (`jJ.bIA`, was missing): center +/-0.5 box
   against the captured frustum (javap `jJ_.class` 91-117). Repo convention
   applied: a null captured frustum renders (BlockEsp/Particles), documented.
6. **Void sweep fixed**: `afY` adds a hole for every block **at** `getBottomY()`
   that is BEDROCK (was: air), tags btXid/WdDaI, and performs no covered-set
   check (dj.java:1750-1813).
7. **Scan loop order fixed to y-outer / x-mid / z-inner** and the extra
   `world.isPosLoaded(pos)` guard removed (dj.java:1654-1731 has neither);
   `MathHelper.ceil` on both ranges; distance uses `toCenterPos()` vs
   `player.getEntityPos()` against `Range^2` (`agk`).
8. **`dj$sE#toBox` fixed** (javap dj$sE 858-239): `min(minY, minY+offset)` /
   `max(minY, minY+offset)` - the old `offset > 0 ? offset : 1` guess broke the
   Size range's negative half (-1.0..1.0). `center()` = `toBox(1.0).getCenter()`.
9. **Draw colours/alphas fixed in both pipelines**:
   - Boxes (`agd`/`kN#bUS`): wireframe colour
     `coa(max(alpha,100)).cob(fade)` (was full 255 alpha) drawn only with
     Outline on (`dtN` falls back to transparent `mG.UhgnI`), filled box
     `cob(fade)` **at half alpha** (`kN#bUW` `cob(0.5f)`, bytecode 66-79), and
     the fill is skipped when its alpha is 0 (`dtQ = !mG#cnW`).
   - Fade (`age`): buffer 1 now draws the four **side quads** with the
     bottom->top gradient (`agg`: bottom `cob(fade)`, top `coa(0)`), buffer 2
     the floor at `coa(170).cob(fade)` then `cob(0.35)` (was `alpha*0.35`,
     missing the 170 and the fade) plus the four Outline strips at
     `coa(170).cob(fade)` **at the floor's own y** (the old +0.005 offset was
     invented; dj.java:1399-1414).
10. **State/lifecycle**: `onDisable` clears both the scan list and the fade map
    (`YO` dj.java:1941-1946); the render path mints/advances fades per frame
    instead of per tick.
11. **Settings 1:1 kept and completed**: builder order/step/min/max/default/
    suffix verified against dj.java:125-265 (`Range`/`Range Y` " blocks",
    `Size` 0.01/-1..1/1 no suffix, colors 0x50FF0000 / 0x50FFFF00 / 0x5000FF00 /
    0x8CFF0000); `cG#Vf` visibility wiring added (`obsidianColor`?=Obsidian,
    `obsidianBedrockColor`?=Obsidian-Bedrock, `voidColor`?=Void).
12. **Double-hole cells** now sorted by the exact static comparator `cMEtP`
    (`comparingInt(getX).thenComparingInt(getY).thenComparingInt(getZ)`,
    dj.java:390-392) and copied via `List.copyOf`.

## Remaining gaps (labeled)

- [S] Render layers: `kR.oXKXV` + the `kN`/`kH` batch renderer are mapped to
  `RenderLayers.debugFilledBox()` / `RenderLayers.lines()` (repo-wide
  convention; blend/depth semantics of the original pipelines are not
  recoverable from the decompile). `MMuss.startBatch/endBatch` has no
  equivalent (VertexConsumerProvider batches).
- [S] Tick timing: `gH$th` is dispatched at `MinecraftClient.tick` HEAD
  (`bootstrap/mixin/accessors/ClientEventBridgeMixin#offline$tickPre`); the port
  scans in `onTick` (END_CLIENT_TICK) - same predicate sequence, one tick point
  later (TrapEsp precedent).
- [S] `jJ.bIA`'s null-frustum branch returns false; the port follows the repo
  convention that a null captured frustum renders.
- [G] The `ct` "Mode" group's per-option enable flag (`cu#IopEl`; `cu#SZ` =
  enabled && selected) has no `ModeSetting` equivalent - selection alone picks
  the pipeline. The two options' own `rk(300)` GUI animators are unused here.
- [S] The `agi`/`agh` world lookups are kept without an `isPosLoaded` guard
  exactly as the original (an unloaded chunk inside Range would NPE in the
  original too).
- Not implemented (no evidence of use in `dj`): none - all 18 recovered methods
  of `sixtwo.dj` are now represented.

## Evidence summary

- Decompile `dj.java` (payload-decrypted, casesafe): constructor 122-268,
  `age` 427-566, `aga` 624-767, `agd` 779-841, `agb` 847-988, `agc` 993-1094,
  `agf` 1377-1415, `afZ` 1137-1298, `agi` 1300-1375, `afU` 1451-1473,
  `afR` 1475-1502, `afW` 1519-1536, `afT` 1538-1627, `afY` 1633-1815,
  `afS` 1854-1939, `YO` 1941-1946.
- Bytecode (jar-casesafe, `javap -c -p`): `dj.class` (constructor, `agl`,
  `agc`, `afX`, `afW`, `afT`, `afR`, `afS`), `dj$sD`/`dj$sC` declaration order,
  `dj$sE#toBox/center`, `mG#cob/coa/cou/coh/cnW`, `kH` accessors, `kN#bUS/bUV/bUW`,
  `jJ#bIA/bID`.
- Decrypted pool: `analysis/decrypted/full-dump.jsonl` 211 `sixtwo.dj` records;
  sites 25501 = 147 and 29385 = 16 used to derive/validate the class key;
  23746 = 20 and 15599 = 300 recovered with the re-implemented decryptor.
- Trace `analysis/traces/2026-10-17/`: `digests/dj.txt` (`YO` x2),
  `by-class-casesafe/dj.jsonl` (load + `YO`) - no runtime coverage.
