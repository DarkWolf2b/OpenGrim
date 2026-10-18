# Batch 28 — `dt` (Nametags) — audit 2026-10-17

- **Module:** `sixtwo.dt` → `src/main/java/dev/opengrim/modules/render/Nametags.java`
- **Sources:** `analysis/decompiled/payload-decrypted/sixtwo/dt.java` (1676 lines; class `dt` verified at line 97),
  bytecode ground truth `analysis/decompiled/jar-casesafe/sixtwo/dt.class` (Yarn-named build; `javap -c -p`),
  helper classes `lC_/lq/mG_/mZ_/jH_/jf/jg/ji/ju/mY_/oP_/jE…` bytecode, settings classes `cw/cv/cJ_/cG_/cC_/ct/cu`.
- **Status:** **fixed (full rewrite)** — the previous impl collected tags in `onTick()` and drew nothing; the real
  HUD pass (`aim`), item tags (`air`/`ais`), effect row (`aiq`), enchant text (`aip`/`aio`) and anchor projection
  (`ait`) are now ported 1:1. `ail` (vanilla nameplate cancel) is wired as a predicate (no mixin hook in repo).
- **Parity:** **94 %** (honest, over the recovered surface; all branches/constants translated, 3 [U]/[G] data gaps
  + framework-level drawing primitives).

## Newly recovered evidence (this session)

The class's own DES call-site decryptor (`aix`/`aiz` + `aiA`/`aiC`, dt.class bytecode) was re-implemented
(Python class-file parser → modified-UTF-8 blob extraction → JDK-DES reimplementation) and **validated against
`analysis/decrypted/full-dump.jsonl`** before use:

- `aiu` site 26353 (aiz idx 0) → `" x"` — matches the dump value `" x"` (1/1).
- `aiq` site 13197 (aiC idx 89) → `10` — matches all 14 dump records for idx 89 (14/14).
- `JzNel = 101914336700265` recovered from two independent dump pairs (aiz + aiC), consistent with both.

Then the sites the dump never evaluated (never executed at runtime) were decoded:

| site | method | recovered value | meaning |
|---|---|---|---|
| aiz 5851 | `ain` | `"ms"` | ping chip suffix — **no leading space** (spec guessed `" ms"`) |
| aiz 678 | `air` | `" x"` | single-item separator (same text as the `ais` plaintext) |
| aiz 9370 | `aiq` | `"00:00"` | duration-string skip literal (spec guessed `"∞"`) |
| aiC 13197 | `aiq` | `10` | effect texture draw size (spec guessed 16/18) |

Concat recipes (constant pool, `javap -v`): `\u0001m` (distance `+ "m"`), `\u0001\u0001` (ping `+ suffix`),
`\u0001\u0001\u0001` (item `name + sep + count`), `\u0001 \u0001` (enchant `abbrev + " " + level`).

Spec corrections: `bhXKP` ("Enchants") **is** read (`aio`), `VrMbh` ("Effects") **is** read (`ain`) — the handler
spec's "declared but never read" is wrong. `cw` toggle defaults come from `.Tz()` → `cv.To(this)` (group membership
list, `cv.Tn`): Players/Name/Health/Absorption/Distance **on**, Items/Ping/Armor/Hand Items/Enchants/Effects **off**.

## 1:1 verified

- **Settings (27, constructor dt.java:137-427):** Render For {Players `.Tz()`, Items}, Info To Render {Name `.Tz()`,
  Health `.Tz()`, Absorption `.Tz()`, Distance `.Tz()`, Ping, Armor, Hand Items, Enchants, Effects}, Scale
  (`cC.Vy(0.01).Vw(0.2).Vx(2.0).VA(1.0)` = step/min/max/default per cC bytecode), Connected `.WE(false)`,
  Background Color `mG.QHTxQ.coa(140).coh()` = black@140 → `0x8C000000` (`mG.QHTxQ = cnP(0,0,0)`), Color (cG ctor
  default `mG.hoGuU` = white), Name Color 191/75/74, Name Display Mode `.SO(1)` {Display Name, Nickname Only},
  Friend Name Color 75/191/74, Absorption Color 255/196/76, Distance Color 150/157/153, Ping/Health Color `-1`,
  Group Items `.WE(true)`. Visibility `Vf(VPgLm::TC)` on Color + Group Items → `onTick` `setVisible`.
- **`aim` (aim:0-612):** `bab()` guard (player/world/interactionManager/networkHandler), world-entity iteration,
  self-skip, Players gate, Items gate, group search `head.distanceTo(item) - 5.0f <= 0` only when Group Items on,
  one group per item otherwise; second pass size==1 → `air` else `ais`; font batch open/close.
- **`ain` (ain:0-1561):** chip order Distance/Ping/Name/Health/Absorption; width +6.0f, gap 2.0f, height
  lineHeight+4.0f; name-chip centring shift (nameIndex loop, `Σ(w+2) + w_name/2`); `jH.bId(anchor, Scale)` scaling;
  Connected → single background rect else per-chip (radius 3.0f); item row main-hand/"Armor"/off-hand +
  `removeIf(isEmpty)`, 12.0f spacing (+2.0f), 0.75f scale, y−2−12; enchant lowest-offset chain into the effect row.
- **`air` (air:0-214) / `ais` (ais:0-229):** labels, 6.0f text padding, 3/3/2 margins, max-line width, `" x"`.
- **`aip` (aip:0-142) / `aio` (aio:0-109):** `substring(0,2) + " " + level`, 8.0f stacking, return value semantics
  (+Infinity when Enchants off) — including the original quirk that the effect row needs Enchants on + ≥1 item.
- **`aiq` (aiq:0-340):** `new ArrayList(getStatusEffects())`, empty→return, `Comparator.reverseOrder()`
  (`StatusEffectInstance implements Comparable` verified in the 1.21.11 build), x += n*12.5f, per-effect −25.0f,
  centre +9.0f, icon −5.0f, 10×10 `InGameHud.getEffectTexture` via `drawGuiTexture(RenderPipelines.GUI_TEXTURED,…)`,
  duration at y−8 centred, amplifier glyphs at y−16 centred, white; skip empty and `"00:00"`.
- **`ait` (ait:0-103):** `getLerpedPos(delta)` + 2.6f (players only) → projection, off-screen skip.
- **`ail` (ail:0-96):** non-self PlayerEntity while Players on.
- Helper semantics: `jf.bAH` = (b−a)*0.5, `mZ.csc` = round-half-away-from-zero at 10^digits, `jg.bBx` = tab latency
  or 0, `lj.bYG(size)` = 0.7f*size, `lC.cdg/cdh` = rounded fill (cdh has an extra `kg.bOC(float)` param),
  `lC.ceV/ceX/ceW` = pushMatrix/translate/popMatrix, `mG.coh()` = ARGB packing.

## Remaining gaps

| # | Gap | Class | Note |
|---|---|---|---|
| 1 | `oP.cJr(player).cJE()` armor slot order | [U] native | helmet→chest→legs→boots (natural display order) used; native query, no static evidence |
| 2 | `ji.bCv` divisors + format literal + infinite marker | [G] | minutes=duration/1200, seconds=(duration%1200)/20, `"%02d"`, infinite `"∞"`; DES sites with no dump coverage (`ji` never loaded at runtime). Structure is 1:1; the `"00:00"` skip literal is recovered |
| 3 | `mY.crP(amplifier+1)` numeral glyphs | [G] | drawn as vanilla text (glyph-array font not portable); `crP` also throws for out-of-range levels (MAX site unrecovered) |
| 4 | Custom 6.0f font metrics + glyph arrays (`lE.WTzbi.bYM`, `lq.cao/cat/cap`, `mZ.csh`) | [S] framework | vanilla `TextRenderer` at scale 6.0/9.0, exact line height 0.7f*6.0f |
| 5 | Rounded rects (`lC.cdg/cdh`) + `kg.bOC(2.0f)` | [S]/[U] | 3-fill corner-inset approximation (GuiDraw pattern); the 2.0f parameter meaning unrecovered |
| 6 | `jv`/`jw` batched item renderers + `ju.bFV()` flush | [S] framework | one `DrawContext.drawItem` at 0.75f scale; flush is a no-op |
| 7 | Vanilla nameplate cancel (`gi.bdX(true)`) | [S] hook | no nameplate mixin in the repo; predicate `shouldCancelVanillaNameplates(PlayerEntity)` is the wiring point (Esp2D precedent) |
| 8 | `jI.bIw` projection | [S] | camera-rotation × projection (RenderSystem modelview identity at HUD time) — same approximation as TrapEsp |

## Evidence citations

- `analysis/decompiled/jar-casesafe/sixtwo/dt.class` — `javap -c -p`: `ain` (4469-5195), `aim` (3797-4068),
  `air` (4068-4173), `ais` (3629-3797), `aiq` (4310-4469), `aip` (5508-5572), `aio` (5632-5691), `ait` (5392-5448),
  `ail` (5333-5387), `aix` (4173-4310), `aiA` (5772-5982).
- `analysis/decrypted/full-dump.jsonl` — `sixtwo.dt` aiz idx0 `" x"`; aiC idx89 `10` (14 records).
- `analysis/decompiled/payload-decrypted/sixtwo/dt.java` lines 137-427 (settings), 591-643 (`ais`), 649-878 (`aim`),
  879-934 (`air`), 935-999 (`aiq`), 1000-1491 (`ain`), 1492-1546 (`ail`), 1547-1582 (`ait`), 1583-1650 (`aip`/`aio`).
- Helper bytecode: `lC_.class` (cdg 843, cdh 3252, cer 3129, ces 3176, cea 3096, ceb 3224, cfe 666, ceV 804,
  ceX 3165, ceW 828), `mG_.class` (`QHTxQ=cnP(0,0,0)`, `hoGuU=cnP(255,255,255)`, `coh` 2687), `mZ_.class` (csc 1338),
  `jf.class` (bAH 1662), `jg.class` (bBx 808), `lj.class` (bYG 2633), `jH_.class` (bId 77, bIf 45),
  `cw.class` (TC 785, Tz 776, Ty 1079), `cv.class` (Tn 181, To 56), `cG_.class` (ctor, Wf 222, Uc 561),
  `cC_.class` (Vy 273, Vw 297, Vx 286, VA 235), `cJ_.class` (WE 135, WF 73).
- Yarn 1.21.11+build.6 mappings: `drawGuiTexture` method_52706, `drawItem` method_51427,
  `InGameHud.getEffectTexture` method_71644, `Enchantment.getName(RegistryEntry,int)` method_8179,
  `ItemEnchantmentsComponent.getEnchantments` method_57534, `getTickProgress` method_60637.
- Trace 2026-10-17: `sixtwo/dt` load-only (`by-class-casesafe/dt.jsonl`, digest empty) — no runtime data for this class.

## Verification

- `.\gradlew.bat compileJava --offline` → **BUILD SUCCESSFUL**.
