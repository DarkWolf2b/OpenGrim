# Logout Spots (sixtwo.dp) — handler-derived behavior spec

Class `sixtwo.dp` extends `sixtwo.gg`, implements `sixtwo.lA`, `sixtwo.lG`. Registry: `sixtwo.dp|Logout Spots|…` — module id **99**, category `gh.nOCvV` (`analysis/specs/modules/dp.md`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dp.c` | **MISSING** — lowercase `d` classes: 0 natives declared/bound (`coverage-matrix.tsv` row 54); `sixtwo/dp` absent from both runtime jsonl registries; no `native` methods. |
| `analysis/decompiled/payload-decrypted/sixtwo/dp.java` | **PRIMARY** (998 lines; constructor + all six `@hG` handlers + helper `ahx` read). |
| Helpers | `kt` (logout-spot record: `bQZ(Vec3d, AbstractClientPlayerEntity)` snapshot, `bQV(kw)` model bind, `bQQ(MatrixStack, float, AbstractClientPlayerEntity)` render), `ku.qnXgu` (record flavor constant), `kw.bRK()` model bake / `bRP(mG, kv, float)` recolor, `kv.CiCMa`/`kv.DESOY` texture modes, `mT.cpz()` (cooldown/timer utility: `cpC(long)`/`cpD(long)` checks), `gA` key event (`bbP/bbQ/bbR` ints + `KeyInput`/`MouseInput`), `lE.WTzbi.bYM(9.0f)` scaled font (`lq.cao(text)` width, `lq.cat()` height), `rD.dlM().bjb()` secondary theme color, `jI.bIw` projection, `lC.ccW` rounded rect, `lC.cez(font, text, x, y, color)` text draw, `jf.bAH` random. |

## Runtime model

- `super(gf.aZL(99, false, gh.nOCvV))` (`dp.java:110`).
- State: `FlxVs : List<AbstractClientPlayerEntity>` (players who left), `mBTku : List<AbstractClientPlayerEntity>` (players currently in world), `KrDsH : List<PlayerListEntry>` (last tab-list snapshot), `JTVMZ : Map<UUID, kt>` (logout spot per UUID), `YUykz = mT.cpz()` (timer).
- Detection (tick, throttled by Refresh Timer): a world player is "logged out" if their UUID is **absent from `networkHandler.getPlayerList()` profile-id set** and they are **not** a friend (`rD.dml().aLp`). Their last position is captured into `kt` (`computeIfAbsent(uuid, -> new kt(ku.qnXgu)).bQZ(pos, player)`).
- Rendering: a floating player-model hologram (world render, `ahu`) plus a name label (HUD render, `ahv`). Re-login removes the spot (`ahs` on entity-add event). Module disable/tick-out clears everything.

## Per-handler semantics

### `@hG ahs(hu)` — entity add/re-login (`dp.java:435-530`)
1. If `FlxVs` empty → return.
2. `entity = hu2.bdj()`; require `AbstractClientPlayerEntity`.
3. Friend check `rD.dml().aLp(player)` → return (friends never tracked).
4. If `FlxVs.contains(player)`: remove from `FlxVs` and `JTVMZ.remove(player.getUuid())` (spot cleared on return).
5. If `WYPZN` "Login Notification" is on: build a 3-part decrypted message around `player.getGameProfile().name()` and dispatch it (message literals runtime-decrypted via `ahM` — text unrecovered).

### `@hG aht(gH.th)` — tick rescan (`dp.java:534-627`)
1. Guard `bab()`; `networkHandler = rD.dlmvG.getNetworkHandler()`; bail if null.
2. Throttle: `int n2 = klXSH.VC() * <decrypt int>` (Refresh Timer seconds × tick-per-second constant — the decrypted multiplier, presumably 20, is **not folded**); guarded by `YUykz` timer (`mT`).
3. `collection = networkHandler.getPlayerList()`; `set = profile ids`.
4. `mBTku` players filtered by `!set.contains(uuid)` AND `!friend` → for each: `FlxVs.add(player)` and `JTVMZ.computeIfAbsent(uuid, -> new kt(ku.qnXgu)).bQZ(player.getEntityPos(), player)`.
5. `KrDsH.clear(); KrDsH.addAll(collection); ahx()` — `ahx` rebuilds `mBTku` from `world.getEntities()` filtered to `AbstractClientPlayerEntity`.

### `@hG ahv(gk)` — HUD name labels (`dp.java:627-709`)
Guard `bab()` and non-empty `FlxVs`. `lq font = lE.WTzbi.bYM(9.0f)`; `mG color = rD.dlM().bjb()`. Per spot: project `pos + (0, ClxmS.VB(), 0)` via `jI.bIw` (skip when null); `w = font.cao(name) + 8.0f`; `h = font.cat() + 4.0f`; rounded backdrop `lC2.ccW(x - w/2, y, w, h, 1.0f, 0.0f, ld.all(3.0f), 4.0f)`; text `lC2.cez(font, name, x - w/2, y + jf.bAH(font.cat(), h), color)`.

### `@hG ahu(go.sX)` — world-render holograms (`dp.java:710-799`)
Guard `bab()` and non-empty `FlxVs`. `kw2 = kw.bRK()`; `mG2 = EscPj.Wf()`; mode: `kv2 = wjLCc.SZ() ? kv.CiCMa : kv.DESOY`, `f2 = wjLCc.SZ() ? 0.5f : 0.0f` (Textured → alpha 0.5); `kw3 = kw2.bRP(mG2, kv2, f2)`. Per spot: `kt2 = JTVMZ.get(uuid)`; `kt2 = kt2.bQV(kw3)`; `kt2.bQQ(matrixStack, sX2.bbi(), player)` — renders the snapshot model at the logout position.

### `@hG ahw(gA)` — key event: Clear Spots hotkey (`dp.java:801-846`)
Branch 1 (key state `bbQ() == 1` press?): `n2 = 1` … guard return. Branch 2: `n3 = gA2.bbP()` (key code) vs `n2 = yDgej.VP()` (Clear Spots value); if equal → `FlxVs.clear(); JTVMZ.clear();`. Exact `bbP`/`bbQ` role mapping (code vs. action vs. scancode) is inferred — see Unrecovered.

### `@hG ahr(gM)` — tick clear (`dp.java:859-864`)
Unconditional `FlxVs.clear(); JTVMZ.clear();` (paired phase event like `di.afy`).

### `YO()` — not overridden; module disable path is `ahr`/`ahw` clears.

## Settings→behavior (exact — folded literals verbatim)

| Field | Class | Name | Params |
|---|---|---|---|
| `klXSH` | `cC` number | `"Refresh Timer"` (82,101,102,114,101,115,104,32,84,105,109,101,114) | step `.Vy(1.0)`, min `.Vw(0.0)`, max `.Vx(100.0)`, default `.VA(5.0)`, suffix `.Vz(" s")` (literal in source) |
| `WYPZN` | `cJ` toggle | `"Login Notification"` (76,111,103,105,110,32,78,111,116,105,102,105,99,97,116,105,111,110) | `.WE(false)` |
| `VLWfc` | `ct` mode | `"Position Render Mode"` (80,111,115,105,116,105,111,110,32,82,101,110,100,101,114,32,77,111,100,101) | options below |
| `SNclR` | `cu` option | `"Simple"` (83,105,109,112,108,101) | of VLWfc |
| `wjLCc` | `cu` option | `"Textured"` (84,101,120,116,117,114,101,100) | of VLWfc; selects `kv.CiCMa` + alpha 0.5 |
| `EscPj` | `cG` color | `"Position Color"` (80,111,115,105,116,105,111,110,32,67,111,108,111,114) | default `.Uf(mG.hoGuU)` (static color constant), `.Uh(false)` — no rainbow/gamma flag |
| `ClxmS` | `cC` number | `"Height"` | step `.Vy(0.1)`, min `.Vw(0.1)`, max `.Vx(3.0)`, default `.VA(2.8)`, suffix `" blocks"` |
| `kUvkk` | `cJ` toggle | `"Background"` (66,97,99,107,103,114,111,117,110,100 — folded pattern: `[B?]ckground` with `r,o,u,n,d` verified) | `.WE(false)`; **not referenced in any recovered handler** |
| `yDgej` | `cD` int | `"Clear Spots"` (67,108,101,97,114,32,83,112,111,116,115) | `.VO(-999)` — default unbound; consumed by `ahw` key event |

Registry keybind: **99**.

## Unrecovered

- The tick multiplier in `klXSH.VC() * <ahM("c", 31105, …)>` (presumed 20 ticks/s) and the two int literals inside the login-notification text (`ahM("c", 30404/9164, …)` + a 3-element char-array build) — runtime string/int decrypts, plaintexts absent from the folded file.
- Notification delivery mechanism (the decrypted message is built into `int[][]` char arrays and dispatched — target API, e.g. chat vs. `mT` notifier, not visible in the recovered fragment).
- `gA.bbP()` vs `bbQ()` exact GLFW roles (key code / action); the "press" branch structure is recovered but the action constant semantics are inferred.
- `kt.bQQ` render internals (pose interpolation from the `bQZ` snapshot; how long the model holds its pose) — helper class out of scope.
- `mG.hoGuU` literal RGBA (static constant on `mG`, native-decrypted) and `rD.dlM().bjb()` vs `bis()` theme accessors (both native).

## Helper contracts (one line each)

- `kt` — logout-spot record: `bQZ(Vec3d, AbstractClientPlayerEntity)` captures position + model snapshot, `bQV(kw)` binds a recolored model bake, `bQQ(MatrixStack, float, AbstractClientPlayerEntity)` renders the hologram.
- `ku.qnXgu` — flavor constant selecting the record variant (one of the `ku` factory flavors; other values unseen).
- `kw.bRK()` / `kw.bRP(mG, kv, float)` — model bake and recolor; `kv.CiCMa`/`kv.DESOY` are the two texture modes selected by the "Textured" option.
- `mT.cpz()` → timer facade; `cpC(long)` interval-elapsed check, `cpB()` reset (same throttle helper as `dq`).
- `gA` — key event; three int accessors `bbP/bbQ/bbR` plus raw `KeyInput`/`MouseInput` exposure; consumed here only for the Clear Spots hotkey.
- `lE.WTzbi.bYM(9.0f)` — scaled font accessor (9 px); `lq.cao(text)` width, `lq.cat()` height.
- `hu` — entity-add event, shared with `dn`; here it signals re-login (spot removal + optional notification).
- Registry metadata: `bootstrap/offline/features/metadata.txt:150`: `sixtwo.dp|Logout Spots|Renders boxes at where player logged out|key=99|bind=-999`. Note the display name says "boxes" but the recovered renderer draws a player-model hologram (`kt.bQQ`) plus a name label; no `kH.bTJ` box builder is referenced anywhere in `dp` — either the description predates the current renderer or the box shape lives inside `kt` (out of scope).