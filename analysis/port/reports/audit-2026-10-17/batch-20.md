# Batch 20 audit — cP (Trajectories), cW (Trap ESP)

Date: 2026-10-17 · Auditor: batch-20 subagent · Compile: `.\gradlew.bat compileJava -q --offline` → exit 0.

Method note: both modules are pure-Java payload classes with zero native methods, so the
"unrecovered" constants are DES slots (`cP#YC`/`cW#aag`/`cW#aad`/`cW$sr#dnP`/`rl#die`). These
were recovered **exactly** by executing the original's own decoders against the decrypted
native image (`analysis/ghidra/dumps/jna-decrypted-v2.dll`, patched copy loaded at its runtime
base 0x6FFFE7C10000; probe harness in the session temp dir). The mechanism was validated
against `analysis/decrypted/full-dump.jsonl`: `cP.YC(17563, 5174663421668020251)` returned 87,
matching the recorded site value.

---

## cP — Trajectories (`src/main/java/dev/opengrim/modules/render/Trajectories.java`)

Status: **ported** · post-fix parity: **97%** · fixed: **yes**

### Recovered constants (decoder probe, 2026-10-17)

| slot | decoder | value | use |
|---|---|---|---|
| 21567 | `cP#Yw` | **20** | pitch offset for splash/lingering potions + XP bottles (`cP.java:238-290`, used at `cP.java:842` as `pitch - Yw`) |
| 14295 | `mh#cky` arg | **150** | simulation step cap (`cP.java:945`) |

### Fixes applied

1. **Pitch offset sign corrected** — was `-20.0f`, now `+20.0f` (`getPitchOffset`). Original:
   `-sin((pitch - Yw)/180*pi)`, Yw = 20 (probe) → vanilla potion roll −20 reproduces exactly.
   This was a real behavioral bug (wrong launch arc for potions/XP bottles).
2. **Multishot branch corrected** — original bytecode (`cP_.class` `Yr` 307-408) draws 3 lines when
   `(offHand is CrossbowItem && jh.bCh(offHand, MULTISHOT)) || (mainHand is CrossbowItem && jh.bCh(mainHand, MULTISHOT))`,
   i.e. the off-hand check runs even when the active hand is the main hand. The impl only checked
   the active stack. Fixed to the off-hand-first OR.
3. **Entity-hit truncation removed** — original never truncates the path: it draws the entity box,
   sets the loop index to `positions.size()` and then draws the full polyline (`Ys` bytecode 947-1021).
   The impl deleted trailing points. Now: box the first intersecting entity, keep the full path.
4. **Landing box** — always drawn at the simulator's `finalPosition` (`cP.java:1023-1026`), not at a
   truncated list tail. Now the last simulated point (identical to `finalPosition` for the ported sim).
5. **Simulation order fixed** — `me#cjZ` (jar-casesafe `me.class` bytecode 325-563, defaults
   `KfLbf=true`, `gifiq=false`, `mi.CkcQW` = identity) applies **gravity then water drag before the
   move**, water-tested at the **step-start position**, and terminates at `pos.y <= -128`. The impl
   applied drag/gravity after the move and used `< -128`. Constants: 150 steps (recovered), −128.0,
   0.99, 0.8, raycast COLLIDER/NONE with block-hit snap to `hit.getPos()`.
6. **Fill alpha halved** — `iW#bxs` uploads the fill color with `con()[3] / 2.0f` (`iW.java:359-363`);
   the impl used the raw alpha. `drawFilledBox` now halves it.
7. **Pull-progress condition made exact** — `t > 1.0f || t == 0.0f` (`Ys` bytecode 405-451;
   previously `<= 0.0f`, equivalent for non-negative t, now literal).

### Verified unchanged (already 1:1)

Settings 4/4 (Line Color / Box Outline Color / Box Fill Color white + alpha 0.5 / Filled Box true,
registration order, no visibility gates) · hand selection order (main → off → return) ·
`Yv` multipliers (0.4/0.59/2.0/1.5) · `Yu` 1.0/0.4 · `Yt` throwable set · charge `(t²+2t)/3` ·
base velocity bow `t*2` / crossbow 2.2 / else 1.0 · on-ground velocity add · gravity 0.05 vs 0.03
(`item is Bow || mainHand is Crossbow`) · origin = eye − 0.1, ±0.16 hand side · bobView save/set
false/restore · 3-line yaw offsets ∓10 · hit box ±0.3 (float) · landing box ±0.3 (double) ·
entity skip (ArrowEntity, self) · path drawn before the landing box.

### Remaining gaps

- [S] Render plumbing: original flushes custom `RenderPipeline`s (`kR.YTwxL` DEBUG_LINES,
  `kR.ShkJj` TRIANGLE_STRIP, `kR.jLECJ` DEBUG_LINE_STRIP, POSITION_COLOR); the port uses
  `RenderLayers.lines()`/`debugFilledBox()` through the event's `VertexConsumerProvider`
  (framework layer requires POSITION_COLOR_NORMAL; quads instead of a strip). Visually equivalent.
- [G] Default colors are the original's *global theme* color at construction
  (`rD.dlM().bjG().bis()`; `ie.bhJ` text = white in the recovered default theme). The port hardcodes
  white/white/0.5-white — matches the default theme; a user-modified global theme color has no
  OpenGrim equivalent. Alpha 0.5 stored as 0x80 (0.502) vs the original's float 0.5.
- [S] Event phase: `go.sX` world render → `WorldRenderEvent.AFTER_ENTITIES`; tick delta via
  `getRenderTickCounter().getTickProgress(true)` (both established framework conventions).

### Evidence

`analysis/decompiled/payload-decrypted/sixtwo/cP.java` (constructor 93-156, Yw 238-290, Yv 300-364,
Yu 381-391, Yt 393-493, Yr 549-797, Ys 803-1027) · `jar-casesafe/sixtwo/cP_.class` (bytecode of Yr/Ys)
· `me.class` + `mh.class` (simulator, defaults, accessor mapping) · `iW.java:343-502/516-618`
(bxs/bxt) · `jI_.class` (`bIr` = translate(−cameraPos)) · decoder probe (values above; sanity
site 17563→87 vs `full-dump.jsonl`) · trace 2026-10-17: cP digest empty (module loaded only, no
callable evidence) — everything above is decompile/bytecode/probe-backed.

---

## cW — Trap ESP (`src/main/java/dev/opengrim/modules/render/TrapEsp.java`)

Status: **ported** · post-fix parity: **93%** · fixed: **yes (substantial rewrite)**

### Recovered constants (decoder probe, 2026-10-17)

| slot | decoder | value | use |
|---|---|---|---|
| 18913 | `cW#aad` | **"Trap Detected"** | card title (`cW.java:1182-1200`) |
| 29610 | `cW#aad` | **"OBJECTS"** | card label (`cW.java:1205`) |
| 28298 | `cW$sr#dnP` | **300** | rk fade duration ms (`cW$sr.java:46`) |
| 21556 | `cW$sr#dnP` | **300** | rg position-smoothing duration ms (`cW$sr.java:45`) |
| 1115 / 21912 | `rl#die` | **16 / 16** | chunk-section height / width (`rl.java:869,879`) |
| — | `cW.UBtqj` | **1000** | scanner registry hash (`cW.java:111`, `dhL` first arg; no behavioral role in the port) |

`lf.GHxLj` (card icon) = glyph **U+EA26** (icon-font private-use; palette `mG.hoGuU` = white
verified by probing all 14 `mG` statics).

### Fixes applied

1. **Scan rewritten to `rl#dhS` semantics** (`rl.class` bytecode 748-1004): iterate loaded chunks
   (`ClientChunkManager#getChunk(x, z, FULL, false)`), keep chunks whose **center**
   (`start + 8`) is within `Range` of the player X/Z (`rl#dhT`), then test **every non-air block**
   of every non-empty section (`ChunkSection#getBlockState`, `baseY = getBottomY() + i*16`,
   block-center `+0.5` positions) — the old port capped the scan at a 32-block sphere around the
   player and distance-filtered every block, which changed which clusters form. Entities are
   filtered by the **chunk center of their position**, not entity distance.
   Trace cross-check: 229,376 `ZX` calls / 6 `ZV` scans ≈ 38 k non-air predicate tests per scan
   (chunk scan, not sphere scan).
2. **Cluster lifecycle ported to the animation model** (`cW$sr` + `rk` + `rg`): unmatched clusters
   now fade out over 300 ms instead of a 10-tick counter guess — `dnJ` targets 1.0 with
   ease-out-back (`rj.XzDkv = dgl(1.70158)`), `dnK` targets 0.0 with ease-in-back
   (`rj.AYqck = dgk(1.70158)`), removal when `dnN` = dying && value ≤ 0 (`rk#dhd/dhe/dhc` semantics,
   `rk.java:54-134`). Card position is smoothed per axis over 300 ms with ease-in-out-cubic
   (`rj.ZIApv`), snapped on first use (`rg#dfE/dfA`, `rg.java:20-31`).
3. **HUD cards implemented** (`ZW`, `cW.java:1131-1224`) — the module previously had **no visual
   output at all**. Registered via `HudElementRegistry` on enable / removed on disable (pattern:
   `Arrows`). Exact layout: 80×40 card, pad 5/4, title at size 7, distance `"<n>m"` right-aligned at
   size 6, "OBJECTS" at size 5, count right-aligned, 70×2.5 bar with `min(count/minCount, 1)`
   progress, 6 px icon, player coords `round(x) round(y) round(z)`; scale `0.5 + 0.5*fade` about the
   card anchor (`jH#bId` = translate·scale·untranslate), no text shadow (`ln#bZG` passes
   `iconst_0`), skip `fade == 0`, skip off-screen (`jI#bIw` returns null when `w <= 0`).
4. **Settings verified exact** (11): Scan For group + Paintings/Signs/Banners/Armor Stands/
   Minecarts/Falling Blocks default **on**, **Buttons/Levers/Decoration Pots default off**
   (only `.Tz()` chains present in `cW.java:137-222`; the handler spec's "all on" is stale) ·
   Minimal Count 1/1/100/6 · Cluster Radius 1/8/32/16 · Range 1/1/128/100 suffix " blocks".
5. **Block/entity predicates kept exact** (order and gating verified against `cW.java:802-1128`);
   greedy merge (nearest strictly-within radius, running-mean centers) and the min-count filter
   (`count >= minCount`) verified against `ZZ` (`cW.java:543-617`) and `ZV`.

### Remaining gaps

- [G] Colors: original reads global theme colors (`ii#bjb` text / `ii#bjf` accent / `ii#bje`
  background / `lC#ccW` card fill; alpha semantics `coa` = set 0..255, `cob` = multiply 0..1,
  verified in `mG_.class`). Mapped to the recovered GuiTheme constants (TEXT white, ACCENT
  151,71,255, BACKDROP 12,12,12, PANEL_HEADER 24,24,27); bar background alpha uses the 0.75-Blur
  style `(255−100·0.75)·0.7` (the framework has no global style switch; `fX.aYh()` not probed —
  needs the client).
- [G] Icon: glyph U+EA26 drawn as a 6×6 square (no icon font in the framework).
- [S] Rounded corners (`ld.all(4)` / `all(0.25)`) drawn as plain rectangles (`DrawContext#fill`).
- [S] Fonts 5/6/7 approximated by scaling the vanilla TextRenderer by size/9 (vanilla font height).
- [S] Projection: `P · cameraRotation · (pos − camPos)` (matches `jI#bIw` modulo the
  `RenderSystem` modelview factor, which is the frame's view transform in the original mixin);
  `GameRenderer#getBasicProjectionMatrix` at the base FOV (original uses the private
  `getFov(camera, tickDelta, true)`).
- [S] Scan is synchronous (original: async executor + one-tick-delayed results); the ZU(gM)
  rare clear (`cW.java:620-624`) has no framework event — state is cleared on disable only
  (trace: ZU fired 0× in the session, so the observable cadence is unaffected).

### Evidence

`analysis/decompiled/payload-decrypted/sixtwo/cW.java` (constructor 114-258, ZZ 543-617, ZU 620-624,
ZV 630-796, ZX 802-983, ZY 989-1128, ZW 1131-1224, YO 1227-1232) · `payload-named-cfr/sixtwo/cW$sq.java`
and `cW$sr.java` · `rl.java`/`rl.class` (dhL 346-478, dhS 748-1004, dhT 713-738) · `rk.java:24-366` ·
`rg.java:13-70` · `rj.java` (XzDkv 419, AYqck 418, ZIApv 142) · `jI_.class` (`bIw` projection,
`bIj` matrix capture via `analysis/decompiled/bootstrap/mixin/accessors/WorldRenderEventBridgeMixin.java:95`)
· `jH_.class` (`bId`/`bIf`) · `lC_.class` (`ccW`/`cdg`/`cez`/`ceP`/`cem`) · `mG_.class` (color math)
· `lf.class` (glyph enum) · decoder probe (table above) · trace 2026-10-17: `cW_.jsonl`/digest —
ZV ×6, ZZ ×6, ZX ×229,376, ZY ×186, YO ×2, **ZU ×0**.

---

## Compile

`.\gradlew.bat compileJava -q --offline` → **exit 0** (after both module edits).

## Changed files

- `src/main/java/dev/opengrim/modules/render/Trajectories.java`
- `src/main/java/dev/opengrim/modules/render/TrapEsp.java`
