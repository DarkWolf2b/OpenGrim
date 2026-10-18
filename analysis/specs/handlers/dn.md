# Firework Spots (sixtwo.dn) — handler-derived behavior spec

Class `sixtwo.dn` extends `sixtwo.gg`. Registry: `sixtwo.dn|Firework Spots|…` — module id **98**, category `gh.nOCvV` (`analysis/specs/modules/dn.md`).

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dn.c` | **MISSING** — lowercase `d` classes: 0 natives declared/bound (`coverage-matrix.tsv` row 52); `sixtwo/dn` absent from both runtime jsonl registries; no `native` methods. |
| `analysis/decompiled/payload-decrypted/sixtwo/dn.java` | **PRIMARY** (383 lines, read in full: constructor, both handlers). |
| Inner class `dn$sF` (`payload-named/sixtwo/dn$sF.java`) | read in full — per-spot record: `Vec3d MZUGo` (position), `long SAKLk` (creation `System.currentTimeMillis()`), `boolean uAOSS` (fading-out flag), `rk DUqGa` (fade animator). |
| Event `hu` (`payload-named/sixtwo/hu.java`) | read — bare Entity-carrier event (`bdj()`), fired for entity add/spawn. |
| Helpers | `jI.bIw(Vec3d)` world→screen projection (`Vec2f`, null when off-screen), `jI.bIs` (billboard), `lC` DrawContext wrapper: `ccW(x,y,w,h,fade,?,?,3.0f)` glow disc draw, `cdZ(Item, x, y, scale).bGv()` item-icon draw, `ld.all(float)` radius helper, `jH.bId/bIf` scale push/pop, `rk` fade animator (`dhd(float)` set, `dhj()` get, `dhc(bool)` target, `dhs(rj)` easing mode with `rj.XzDkv`/`rj.AYqck` in/out pair), `jf.bAH` random. |

## Runtime model

- `super(gf.aZL(98, false, gh.nOCvV))` (`dn.java:54`).
- Every spawned `FireworkRocketEntity` records a screen marker (firework icon + glow disc) at its spawn position. Markers auto-fade after a configurable number of seconds and are additionally trimmed by a quantity limit. State is `GtFRG : List<dn$sF>` (`dn.java:constructor`, cleared nowhere except by fade expiry).
- Rendering is delegated to `dn$sF.doJ(lC, seconds)`; the module only iterates and removes expired entries (`doK()`).
- Event payload consumed: `hu` entity-add event (`bdj()` → `Entity`) and `gk` HUD event (`baT()` → `lC` DrawContext wrapper, `.cfh()` delta unused here since markers use wall-clock time, not render time).
- Because positions are captured once at spawn (`getEntityPos()`), markers do **not** follow the rocket's flight — the spot is fixed where the rocket was created; the rocket's own vanilla render continues independently.
- Fade lifecycle per marker: fade-in on creation (target 1.0, easing `rj.XzDkv`), hold until `elapsed > seconds * ZOVgw`, then fade-out (target 0.0, easing `rj.AYqck`), removal on `doK()` (fade value 0 ∧ `uAOSS`). Two distinct easing constants for in/out — the same pair `do` (Arrows) uses.

## Helper contracts (one line each)

- `dn$sF` — per-spot record (`MZUGo` Vec3d position, `SAKLk` creation ms, `uAOSS` fading flag, `DUqGa` fade animator); methods `doJ(lC, int)` draw and `doK()` expiry.
- `hu` — bare entity-add event; `bdj()` returns the spawned `Entity` (shared consumer: `dp` for re-login detection).
- `jI.bIw(Vec3d)` — world→screen projection returning `Vec2f`, null behind camera/off-screen (same helper `di`/`dp` use).
- `lC` — DrawContext wrapper: `ccW(x, y, w, h, fade, 0.0f, radius, 3.0f)` glow/rounded disc, `cdZ(Item, x, y, scale).bGv()` item icon, `ceV/ceW` state pair.
- `ld.all(float)` — radius helper (`12.5f` = half the 25 px icon box).
- `jH.bId(lC, x, y, scale)` / `jH.bIf()` — scale push/pop around the icon draw; scale = `0.5f + 0.5f * fade` so the icon grows in as it fades.
- `jf.bAH(float, float)` — random helper; jitter range (16, 25) px applied to both icon offsets.
- `rk` — fade animator: `dhd(float)` set, `dhc(bool)` target, `dhj()` 0..1 value, `dhs(rj)` easing mode.
- `cC` — number setting; `VC()` int-rounded live read (both settings are passed as ints to `doJ`/cap math).

## Per-handler semantics

### `@hG ahb(hu)` — entity spawn (`dn.java:280-330`)
1. `entity = hu2.bdj()`; require `instanceof FireworkRocketEntity` (import `net.minecraft.entity.projectile.FireworkRocketEntity`).
2. `GtFRG.add(new dn$sF(fireworkRocketEntity.getEntityPos()))` — position captured at spawn time; `SAKLk = now`.
3. `n3 = GtFRG.size() - zMQfx.VC()` (Quantity Limit, int-rounded). If `n3 > 0`: for indices `0 … n3-1` (the **oldest** entries): `DUqGa.dhd(0.0f)` and `uAOSS = true` — force-immediate fade-out of the oldest markers when over the cap.

### `@hG aha(gk)` — HUD/world-overlay draw (`dn.java:209-235`)
Guard `bab()`; then for each `dn$sF`: `doJ(lC2, xTDBB.VC())` — passes "Time Before Disappear" (int value, seconds) as the fade-out deadline; then `if (doK()) iterator.remove()`.
`doK()` (`dn$sF`): true iff fade value `DUqGa.dhj() == 0` **and** `uAOSS` (finished fading out) — the entry is removed exactly once fully faded.

### `dn$sF.doJ(lC, int seconds)` — marker draw (`dn$sF.java:130…`)
1. Fade animation: `DUqGa.dhc(uAOSS)` target with easing mode `rj.XzDkv` when !uAOSS else `rj.AYqck`.
2. `elapsed = System.currentTimeMillis() - SAKLk`; if `elapsed > seconds * ZOVgw` (static long multiplier from `dn$sF`'s DES block — **value not folded, `1000L` presumed**) → `uAOSS = true` and `dhd(0.0f)` reset.
3. `Vec2f screen = jI.bIw(MZUGo)`; null (behind camera) → skip.
4. `f2 = 25.0f` (icon size px); `f3 = screen.x - 12.5f`, `f4 = screen.y`; icon at `(f3 + jf.bAH(16,25), f4 + jf.bAH(16,25))` (jitter offsets).
5. `jH.bId(lC, cx, cy, 0.5f + 0.5f * fade)` scale push; `lC.ccW(f3, f4, 25, 25, fade, 0.0f, ld.all(12.5f), 3.0f)` glow backdrop scaled by fade; `lC.cdZ(Items.FIREWORK_ROCKET, x, y, 1.0f).bGv()` draws the firework-rocket item icon; `jH.bIf()` pop.

## Settings→behavior (exact — folded literals verbatim)

| Field | Class | Name (char codes) | Params |
|---|---|---|---|
| `xTDBB` | `cC` number | `"Time Before Disappear"` (84,105,109,101,32,66,101,102,111,114,101,32,68,105,115,97,112,112,101,97,114) | step `.Vy(1.0)`, min `.Vw(1.0)`, max `.Vx(15.0)`, default `.VA(8.0)`, suffix `.Vz(AhEPk)` — suffix string runtime-decrypted (`dn.AhEPk`), seconds unit implied by `doJ` usage; **not** byte-verified |
| `zMQfx` | `cC` number | `"Quantity Limit"` (81,117,97,110,116,105,116,121,32,76,105,109,105,116) | step `.Vy(1.0)`, min `.Vw(1.0)`, max `.Vx(100.0)`, default `.VA(10.0)` |

Registry keybind: **98**.

## Registry metadata

`bootstrap/offline/features/metadata.txt:149`: `sixtwo.dn|Firework Spots|Renders used fireworks|key=98|bind=-999` — primary keybind **98**, secondary bind **−999** (unbound). Two number settings only. The description "Renders used fireworks" matches the observed model: the marker is dropped at the rocket's spawn position and persists after the rocket despawns, giving a recallable "spot" for rocket-jump / firework-boost movement.

## Unrecovered (continued)

- Whether `dn$sF` ever serializes to config (spots appear to be session-only: the list is constructed empty and there is no save/load path in the recovered code — persistence would require a `pG` JSON hook like `di`'s `cE`, which `dn` lacks).
- Exact easing curve formulas behind `rj.XzDkv` / `rj.AYqck` (native `rk`/`rj` internals; only the in/out pairing is observable).
- The ordering guarantee of `GtFRG` (append order = oldest first) is assumed by the cap-trim loop (`indices 0 … n3-1` fade first); no sort code exists, so this relies on `List.add` semantics only.
- The cap-trim arithmetic (`n3 = size - QuantityLimit.VC()`) runs on **every** spawn event, not only when over the cap; when under the cap `n3 <= 0` and the loop body is skipped, so the cost is one int subtraction per firework spawn.
- `Items.FIREWORK_ROCKET` is a compile-time constant import in `dn.java` — the icon identity is bytecode-verified, unlike the jitter/easing internals.

## Unrecovered

- `dn$sF.ZOVgw` — the ms-multiplier in `elapsed > seconds * ZOVgw`; DES-decrypted at class-load, not folded. `1000L` is the only value consistent with the "Time Before Disappear" seconds semantics (max 15 → ≤15 s), but it is inference, not a byte-verified literal.
- Suffix string `dn.AhEPk` (presumed `" seconds"` or `"s"`).
- The two `rk` easing enums `rj.XzDkv` / `rj.AYqck` (in/out) — exact easing curves live in `rk` (native).
- `jf.bAH(16.0f, 25.0f)` — random jitter range for the icon offsets; the distribution (uniform 0..arg?) is helper-internal.
- `lC.ccW` parameter meanings beyond (x, y, w, h, fade, 0.0f, radius, 3.0f) — the draw-call semantics of the shared `lC` wrapper are out of scope.