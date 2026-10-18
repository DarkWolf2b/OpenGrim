# Nametags (sixtwo.dt) — handler-derived behavior spec

Class `sixtwo.dt` extends `sixtwo.gg`. Registry: module id **97**, category `gh.nOCvV` (decrypted constructor `super(gf.aZL((int)97, false, gh.nOCvV))`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dt.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv`); `sixtwo/dt` absent from both runtime jsonl registries; no `native` methods. No image addresses exist to cite. |
| `analysis/decompiled/payload-decrypted/sixtwo/dt.java` | **PRIMARY** (1712 lines; both `@hG` handlers + all private draw helpers readable; every setting name, default and layout constant visible as folded int/float literals). |
| `analysis/decompiled/payload-named/sixtwo/dt$sH.java` | Inner record (String text, mG color) — one tag "chip". |
| Helpers (one line each) | `lG.zXCXX = new kJ()` shared HUD font batcher (`bUa(lq)` start / `endBatch()`); `lE.WTzbi.bYM(6.0f)` shared 6.0f-pixel font (`cao` text width, `cat` line height, `cap` glyph-array width, `ces` glyph-array draw, `cer` text draw); `jI.bIw(Vec3d)` world→screen projection (null = off-screen); `jg.bBx(PlayerEntity)` → `PlayerListEntry.getLatency()` (0 when absent from tab list); `ji.bCv(StatusEffectInstance)` → `"m:ss"` remaining duration (infinite → one unrecovered constant string; format arg `String.format` with unrecovered literal); `mY.crP(int)` numeral-glyph int array; `oP.cJr(LivingEntity)` native armor-inventory query (`oQ<oJ>`; `.cJE()` = item list); `jH.bId(lC,x,y,scale)` / `jH.bIf()` = HUD `Matrix3x2fStack` translate→scale→translate-back push / pop; `jf.bAH(a,b)` centering helper; `mZ.csc(v,1)` 1-decimal rounding; `mG.hoGuU` white color constant; `fS` = **Protected** module (id 106, category `gh.KfAlY`, "Protect" group with "Name"/"Friends"/"Server" toggles + `cy` name-format settings "Name"→"Protected", "Friends Name"→"Protected Friend", "Server Name"→"protected.gg"). |

## Runtime model

- **HUD-composite nametags**: the module draws its own tags on the HUD layer (`gk` event, `.baT()` = `lC` DrawContext wrapper, `.cfh()` = tick delta) for players and item entities, and cancels the vanilla nameplate render (`gi` event, `.bdX(true)`) so the two never overlap.
- Entity anchor: `ait(entity, delta)` projects `entity.getLerpedPos(delta)` with a **+2.6f** vertical offset for `PlayerEntity` (0.0f for all other entities) through `jI.bIw`; `Optional.empty()` (off-screen) skips the entity.
- Every tag is a horizontal strip of chips (`dt$sH(text, color)`) over a rounded background; optional second row of held/armor items with enchantment text above, then a status-effect row above that. All geometry is in recovered literals (below).
- Panic switch `dh.afl()` non-null short-circuits both handlers before any drawing.

## Per-handler semantics

### `@hG aim(gk)` — HUD render (`dt.java:649-878`)
1. Guard `bab()`; `ctx = ev.baT()`, `delta = ev.cfh()`; `fS protected = rD.dlJ().aZx(fS.class)`; `lq font = lE.WTzbi.bYM(6.0f)`; `dt.zXCXX.bUa(font)` — open the shared font batch.
2. One pass over `rD.dlmvG.world.getEntities()`:
   - `PlayerEntity` → `ain(player, ctx, protected, delta)` immediately (players are never grouped).
   - `ItemEntity` → only when `VPgLm.TC()` ("Items") is on. If `KjFun.WF()` ("Group Items", default **true**) is on, the item joins the first existing group whose head satisfies `head.distanceTo(item) - 5.0f <= 0` (i.e. within **5.0f** blocks of the group head); otherwise a new group is opened. (When "Group Items" is off the recovered flow still funnels through groups — each item effectively lands in its own group; the `KjFun` check routes the search loop.)
3. Second pass over the groups: `size() == 1` → `air(single, ctx, delta)` (single-item tag); else `ais(group, ctx, delta)` (grouped tag).
4. `dt.zXCXX.endBatch()` in a finally-style close.

### `air(ItemEntity, lC, float)` — single item tag (`dt.java:879-934`)
Anchor `ait(...)`; label = `itemEntity.getName().getString() + <unrecovered literal, CFR-folded elsewhere as " x"> + stack.getCount()`; tag box: width = text width + **6.0f**, height = line height + **4.0f**, centered at `(x - w/2, y)`, background radius `ld.all(3.0f)` in `wRBRi.Wf()` ("Background Color"); text drawn centered in `uxHfK.Wf()` ("Color").

### `ais(List<ItemEntity>, lC, float)` — grouped tag (`dt.java:591-648`)
Anchor = projection of the **first** item of the group; per item a line `"name x<count>"`; box padding: horizontal margin **3** per side, vertical margin **3** top/bottom, line gap **2**; width = max line width + 3*2, height = `lines * lineHeight + max(0, lines-1) * 2 + 3*2`; each line drawn centered horizontally (`jf.bAH`) starting at `y + jf.bAH(contentH, boxH)`, in `uxHfK.Wf()`.

### `ain(PlayerEntity, lC, fS, float)` — player tag (`dt.java:1000-1491`)
1. Anchor `ait`; if empty → return.
2. Build chip list (order fixed):
   - `"Distance"` on → `mZ.csc(player.distanceTo(target), 1) + "m"`, color = `lFuNf` "Distance Color".
   - `"Ping"` on → `jg.bBx(target) + <unrecovered literal>` (suffix string, encrypted at this site — ais shows the sibling pattern `" x"`, so plausibly `" ms"`, **not verified**), color = `BmdVM` "Ping Color".
   - `"Name"` on → text: mode `bcjCz.SQ(0)` ("Display Name") → `getDisplayName().getString()`, else (mode 1 = "Nickname Only", default) → `getGameProfile().name()`; color: `rD.dmc().ddy(player)` (friends registry) → `MAUHJ` "Friend Name Color"; else if the Protected module `bag()` is enabled **and** `fS.aWV().TC()` (its "Friends" toggle) → text replaced by `fS.aWY().Us()` (the "Friends Name" format, default `"Protected Friend"`) with color `weKln` "Name Color"; else `weKln` "Name Color".
   - `"Health"` on → `mZ.csc(getHealth(), 1)`, color = `bocCI` "Health Color".
   - Absorption → only when `getAbsorptionAmount() > 0.0f` **and** `gxggV.TC()` ("Absorption"): `mZ.csc(amount, 1)`, color = `JdaIF` "Absorption Color".
3. Layout: chip width = text width + **6.0f**; total = Σ widths + **2.0f** × (n−1); tag height = line height + **4.0f**. If the name chip's text equals `getGameProfile().name()`, the strip is shifted so that chip is centered on the anchor (`Σ(widths before) + nameWidth/2`); otherwise centered as a whole.
4. `jH.bId(ctx, anchorX, anchorY, hSuAc.VB())` ("Scale", default 1.0) around the whole draw; `jH.bIf()` pops.
5. Background: `"Connected"` (`uuLKb`, default false) on → **one** rounded rect `cdh(x, y, totalW, h, ld.all(3.0f), bg, 2.0f)` spanning all chips; off → per-chip rounded rects of the same radius/height.
6. Item row (only when any row toggle yields items): list = main-hand stack (`ZhrcH` "Hand Items"), + `oP.cJr(target).cJE()` armor list (`JKWzw` "Armor"), + off-hand stack (`ZhrcH`); `removeIf(ItemStack::isEmpty)`; drawn at **12.0f** spacing (+2.0f gap) at 0.75f scale (`lC2.cea`/`lC2.ceb` item draws, `.bGw().bGv()`), 12.0f above the tag (`y − 2.0f − 12.0f`).
7. Enchantment text (`aip`, `dt.java:1583-…`): per item, for each enchantment of `EnchantmentHelper.getEnchantments(stack)`: `Enchantment.getName(entry, level).getString().substring(0, 2) + " " + level`, stacked upward 8.0f per line from `y − 12.0f`, in white `mG.hoGuU`; returns the lowest y reached so the effect row can clear it.
8. Status effects (`aiq`, `dt.java:935-999`): `new ArrayList(getStatusEffects())`, empty → return, sorted `Comparator.reverseOrder()`; row bottom = lowest item/enchant y − **5.0f**; row x starts at anchor − (n × **12.5f**) (right-aligned); per effect (right→left, x -= **25.0f**): texture drawn at `InGameHud.getEffectTexture(type)` via `ctx.cfe().drawGuiTexture(RenderPipelines.GUI_TEXTURED, id, 0, 0, W, W)` after `ceV/ceX` translate (W = encrypted int constant, unrecovered); duration string `ji.bCv(effect)` centered below at `x − w/2, y − 8.0f` white; amplifier glyphs `mY.crP(amplifier + 1)` at `x − w/2, y − 16.0f` white. Effects whose `ji.bCv` string is empty are skipped; one further special-case `string.equals(<unrecovered literal>)` also skips.

### `@hG ail(gi)` — vanilla nameplate suppression (`dt.java:1492-1546`)
Guard `bab()`; bail unless the event entity (`gi2.baL()`) is a `PlayerEntity`; bail if it is the client player; then `if (jtzDi.TC()) gi2.bdX(true)` — vanilla plate canceled only while the "Players" toggle ("Render For" group) is on.

## Settings→behavior (exact — decrypted constructor, names re-folded verbatim from char arrays)

| Field | Class | Name | Value |
|---|---|---|---|
| `bpDue` | `cv` group | `"Render For"` (82,101,110,100,101,114,32,70,111,114) | container for the two "who" toggles |
| `jtzDi` | `cw` toggle | `"Players"` (80,108,97,121,101,114,115) | `.Tz()` child of Render For; gates both `ain` and the `gi` cancel |
| `VPgLm` | `cw` toggle | `"Items"` (73,116,101,109,115) | child of Render For; gates item-entity tags; visibility-parent of `uxHfK` and `KjFun` |
| `vjqkH` | `cv` group | `"Info To Render"` (73,110,102,111,32,84,111,32,82,101,110,100,101,114) | container for the chip toggles |
| `vExdX` | `cw` | `"Name"` (78,97,109,101) | `.Tz()` |
| `zHaUb` | `cw` | `"Health"` (72,101,97,108,116,104) | `.Tz()` |
| `gxggV` | `cw` | `"Absorption"` (65,98,115,111,114,112,116,105,111,110) | `.Tz()` |
| `AbmMN` | `cw` | `"Distance"` (68,105,115,116,97,110,99,101) | `.Tz()` |
| `yhuFt` | `cw` | `"Ping"` (80,105,110,103) | — |
| `JKWzw` | `cw` | `"Armor"` (65,114,109,111,114) | — |
| `ZhrcH` | `cw` | `"Hand Items"` (72,97,110,100,32,73,116,101,109,115) | — |
| `bhXKP` | `cw` | `"Enchants"` (69,110,99,104,97,110,116,115) | **declared but never read in recovered code** (enchant text is drawn unconditionally under item stacks) — open question |
| `VrMbh` | `cw` | `"Effects"` (69,102,102,101,99,116,115) | **declared but never read in recovered code** (effect row is drawn unconditionally when effects exist) — open question |
| `hSuAc` | `cC` number | `"Scale"` (83,99,97,108,101) | step `.Vy(0.01)`, min `.Vw(0.2)`, max `.Vx(2.0)`, default `.VA(1.0)` |
| `uuLKb` | `cJ` | `"Connected"` (67,111,110,110,101,99,116,101,100) | `.WE(false)` |
| `wRBRi` | `cG` | `"Background Color"` (66,97,99,107,103,114,111,117,110,100,32,67,111,108,111,114) | `.Uc(mG.QHTxQ.coa(140.0f).coh())` — a static color constant (`mG.QHTxQ`) with channel op `coa(140.0f)` |
| `uxHfK` | `cG` | `"Color"` (67,111,108,111,114) | no explicit default; visible only when "Items" is on |
| `weKln` | `cG` | `"Name Color"` (78,97,109,101,32,67,111,108,111,114) | `.Uc(mG.cnP(191.0f, 75.0f, 74.0f).coh())` — RGB 191,75,74 |
| `bcjCz` | `ct` mode | `"Name Display Mode"` (78,97,109,101,32,68,105,115,112,108,97,121,32,77,111,100,101) | `.SO(1)` — default index 1 |
| `OHUtJ` | `cu` option | `"Display Name"` (68,105,115,112,108,97,121,32,78,97,109,101) | option 0 |
| `bgoRN` | `cu` option | `"Nickname Only"` (78,105,99,107,110,97,109,101,32,79,110,108,121) | option 1 — the default |
| `MAUHJ` | `cG` | `"Friend Name Color"` (…67,111,108,111,114) | `.Uc(mG.cnP(75.0f, 191.0f, 74.0f).coh())` — RGB 75,191,74 |
| `JdaIF` | `cG` | `"Absorption Color"` | `.Uc(mG.cnP(255.0f, 196.0f, 76.0f).coh())` — RGB 255,196,76 |
| `lFuNf` | `cG` | `"Distance Color"` | `.Uc(mG.cnP(150.0f, 157.0f, 153.0f).coh())` — RGB 150,157,153 |
| `BmdVM` | `cG` | `"Ping Color"` | `.Uc(-1)` — packed white |
| `bocCI` | `cG` | `"Health Color"` | `.Uc(-1)` — packed white |
| `KjFun` | `cJ` | `"Group Items"` (71,114,111,117,112,32,73,116,101,109,115) | `.WE(true)`; visible only when "Items" on |

Registry keybind: **97**.

## Unrecovered

- Three encrypted string literals resolved only through the DES call-site VM: the "Ping" suffix (`dt.aiz("j", 5851, 0x3E1671DA1DC4C067L)`, likely `" ms"`), the single-item separator (`dt.aiz("j", 678, …)` — the same text appears **unencrypted** in `ais` as `" x"`), and the `ji.bCv` skip-comparison in `aiq` (`dt.aiz("j", 9370, …)` — an effect-duration string special case, possibly `"∞"`). Never guessed in the settings table above.
- `dt.aiC("m", 13197, …)` — the status-effect texture draw width/height int (per-call-site DES int; likely 16 or 18 px, unverified).
- `mG.QHTxQ` — the static base color behind "Background Color" (very likely black given `coa(140.0f)` = alpha op to 140, but the RGB is not folded in `dt`).
- `mG.cnP(...).coh()` packing order and whether `.Uc(-1)` means opaque white — helper-internal (`mG` contract, native-decrypted).
- `ji.bCv`'s infinite-duration constant string and its `String.format` pattern literal (both DES call-site strings in `ji`).
- The exact `Comparator.reverseOrder()` key for `StatusEffectInstance` (natural ordering of the class; likely duration-based, not proven).
- `oP.cJr` is **native** — the armor slot list it returns (order: boots→helmet or helmet→boots) is not recoverable statically.
- Which branch consumes toggles `bhXKP` ("Enchants") and `VrMbh` ("Effects") — see settings table; either dead or handled in a Java shell class not in scope.
- `jH.bId`'s extra `uQzaj.push/pop` around the matrix stack (a second tracking stack) — helper-internal.