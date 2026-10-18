# Jump Circle (sixtwo.db) — handler-derived behavior spec

Class: `sixtwo/db` · display name **Jump Circle** (module id 89).
Superclass `gg`, implements `lG` (batched-textured-quad render contract;
`lG.XSRvt` is the shared `kM` batched renderer instance). **Zero native
methods declared** — pure-Java payload class; no image addresses
(0x18xxxxxxx) to cite. Evidence cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/db.java`.

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/db.java` — fully decompiled
   with folded literals (tick + render handlers readable).
2. Inner class `db$sw` (one circle: position + fade animation + throttle +
   done flag).
3. `analysis/specs/modules/db.md` structural spec.
4. Yarn mappings: `PlayerEntity.isOnGround()`, texture/`AbstractTexture`
   paths.
5. Helpers: `ct/cu` group tree, `cy` string setting (`Un(2048)`), `cJ`
   boolean, `cC` numeric, `cG` color, `oe.cCd(url)` async image →
   `CompletableFuture<lv>` (`lv` = AbstractTexture from
   BufferedImage/NativeImage/bytes), `jd.bAm(url)` URL validation, `mT`
   texture registry (`cpA` singleton, `cpC(ms)` throttle, `cpB` upload),
   `ob.cBv(String)` built-in texture lookup, `rk`/`rj`/`mT.cpz()` animation,
   `RotationAxis.POSITIVE_X.rotationDegrees(90)`, `kG.bTv` flat-quad builder,
   `jI.bIs` translate, `mG.cnQ` color.

## Runtime model

- Two circle lists (per-player grounded circles + fading removal), managed by
  **`abD(gH.th)`** → `abG()` + `abF()`:
  - `abG()` — texture resolution: Custom → async `oe.cCd(url)` cached by URL
    string (`OlDHF` map), throttled `mT.cpA().cpC(1000)` ms and validated by
    `jd.bAm`; Default → `ob.cBv(DES ~27709)`, Glowing → `ob.cBv(DES
    ~11427)` (plaintexts unrecovered).
  - `abF()` — circle lifecycle: remove circles whose player left the world;
    add a circle for each grounded player (skip self when **Only Self**);
    when a tracked player leaves the ground (`!isOnGround`) spawn
    `db$sw(pos = (x, floor(y) + 0.001, z))`; prune circles with
    `PaBdV && pvrxH.dhj() ≤ 0`.
- **`abC(gM)`** — bare tick: clear both lists.
- **`abE(go.sX)`** — world render (below).
- **`YO()`** — unregister + clear.

## Per-handler semantics

`abE(go.sX)`:
1. gate `bab()` + non-empty list + resolved texture;
2. color `mG.cnQ(CCftK.Wh())`;
3. `XSRvt.startBatch(texture)`;
4. iterate newest → oldest; per circle:
   - fade: if `!PaBdV && QWqhb.cpC(DES long ~31128 lifetime)` →
     `dhs(rj.AYqck)` (reverse), `PaBdV = true`;
   - `dhc(!done)`; scale `= Circle Scale × dhj()`;
   - push MatrixStack; `jI.bIs(translate)` to circle position;
     `RotationAxis.POSITIVE_X.rotationDegrees(90)` (lay flat);
   - quad `kG.bTv(stack, −f4, −f4, 0, 2×f4, 2×f4).dtF(color).dtG()` via
     `XSRvt.bUH` (f4 = scaled half-size);
5. `XSRvt.endBatch()`.

`db$sw`: fields `AUTLH` (position), `pvrxH` (`rk` fade animation,
`mT.cpz()`-sourced), `QWqhb` throttle, `PaBdV` done flag.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Circle Scale" | `cC` numeric | step **0.1**, min **0.5**, max **5.0** | **1.0** | [db.java constructor] |
| "Only Self" | `cJ` boolean | — | `false` | [db.java constructor] |
| "Circle Color" | `cG` color | — | `bjG().bis()` white | [db.java constructor] |
| "Circle Texture" | `ct` group, `cu` children | Default, Glowing, Custom | Default | [db.java constructor] |
| "Texture URL" | `cy` string | max length **2048** (`Un(2048)`) | `""`; visible when `SQ(2)` (Custom); `Vf` validator `jd.bAm` | [db.java constructor] |

## Unrecovered

- DES strings not dumped: Default texture name (~**27709**), Glowing texture
  name (~**11427**), circle lifetime long (~**31128**) — the lifetime long is
  the one behavioral constant hidden (fade duration in ms); plaintexts open.
- Whether fade-in uses a forward phase before the reverse (`rj.XzDkv` seen in
  `db$sw` init) and its exact duration — [uncertain], tied to the
  unrecovered lifetime long.
- Whether circles render only for the local player's own jumps when
  "Only Self" (naming suggests yes; the code path skips others — confirmed)
  vs. showing self circles for other players' perspective [n/a client-side].