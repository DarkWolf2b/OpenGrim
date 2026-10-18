# Skin Protect (sixtwo.fN) — handler-derived behavior spec

Class: `sixtwo/fN` · display name **Skin Protect** · registry description "Hides real
player skin" · key 142, bind -999 [registry]. Superclass `gg`. Category constant is
`gh.KfAlY` — a **second encrypted category** (most checked modules use `gh.xwjCw`);
plausibly the "Visuals"/"Misc" category `[decompiled, display name unrecovered]`.

## Evidence base

1. PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fN.c` — 41 handlers, standard
   dispatcher stubs. One shared behavior window `POOL[0x14a11,0x339]` (825 bytes)
   decrypted by 14 handlers, plus machinery slices (`POOL[0x784,0x25]` ×5, `0x857,0x26`
   ×2, `0xb15,0x2c`, `0x226,0xd`). This window is almost entirely fN's own (its token
   run interleaves fN's settings fields and methods with the SkinTextures API).
2. Java shell `analysis/decompiled/payload-named/sixtwo/fN.java` (constructor fully
   decompiled — the dynamic child construction loop is the key structural find) and
   record `fN$sU.java`: `record fN$sU(int[] name, TextureAsset texture,
   PlayerSkinType model)` — a skin-preset entry (label chars, texture asset, model).
3. Yarn: `class_8685`=`SkinTextures`, `class_7920`=`PlayerSkinType`,
   `class_12079`=`AssetInfo` (`class_12081`=`TextureAsset`,
   `class_12080`=AssetInfo ctor over `(Identifier, String)`),
   `class_2960`=`Identifier`; SkinTextures record components `comp_1627`=`cape`,
   `comp_1628`=`elytra`, `comp_1629`=`model`, `comp_1630`=`secure`;
   `method_4648`=`getSkinTextures(UUID)`.
4. The recovered SkinTextures **constructor** in fN's window:
   `(TextureAsset cape, TextureAsset elytra, TextureAsset …, PlayerSkinType model,
   boolean secure)V` — fN builds a replacement `SkinTextures` record. Plus
   `(Identifier, String)V` — the `AssetInfo.TextureAsset` factory for URL-loaded
   textures.
5. Shared helper: `sixtwo/qq` with builder chain `cXK`, `cXG (J, Runnable)Z`,
   `cYc (I)qu`, `cYF (qt)qu`, `cYE (Z)qu`, `cYD`, `cYG (String)qu`, `cYH (Z, String)qu`
   — an async-task/request builder (`qu` = pending request; `qn`, `ry`, `sixtwo/fO`,
   `aWj`, `RaFvq`, `zATNU`, `BkQJI`, `lEAyT` nearby). fN uses it to fetch skin
   textures by URL/UUID asynchronously `[decompiled shape, exact flow native]`.
6. Decrypted constants: full-dump `fN` entries for `aWi("y",…)`; the two `cy` text
   settings default `.Up("")`.

## Runtime model

- **Purpose**: replace the visible player skin (own and/or other players') with a
  default/custom texture so the real skin is hidden.
- **Settings tree** (fN.java:75-268, decompiled):
  - `TclUV` cv "Protect" — group with `bHviN` cw "Own Skin" (default **on**, `.Tz()`)
    and `pWupw` cw "Other Players" (default **on**, `.Tz()`).
  - `xuNWw` ct "Own Skin Source": `DPswU` cu "Defaults" (`.SY()` default marker) |
    `YESwS` cu "Custom"; `NYWkc` ct "Own Default Skin" — **dynamic children**: the
    constructor loops `for (fN$sU s : VJZzZ)` (static preset list populated by
    `fX.aYu()`, fX.java:222 — `fX` = Interface module skin presets) and builds one
    `cu` child per preset under BOTH `NYWkc` (own) and `BMcCi` (other) (fN.java:250-258).
  - `BMcCi` ct "Other Players Skin" — same dynamic preset children.
  - `iWgvu` ct "Other Skin Source": `lprwR` cu "Defaults" (default) | `smvRE` cu
    "Custom".
  - `TCPvX`, `mzdNu` cy (text settings, `.Un(<len>).Up("")`) — "Texture URL"
    (own) / "Other Texture URL" — default empty.
- **Cached state** (all `volatile` — written from async loaders, read on the render
  thread; fN.java:50-55): `SseFa`/`zvkmn : AssetInfo.TextureAsset` (own/other
  replacement texture) and `WHhIl`/`jUZJy`/`mRecC`/`HNAeJ : String` (URL/identifier
  caches).
- **Change callbacks** (fN.java:268-270): `xuNWw.Vf(bHviN::TC)`, `iWgvu.Vf(pWupw::TC)`
  (source flips revalidate Protect children); `NYWkc.Vf(this::aWa)`,
  `BMcCi.Vf(this::aVZ)` (preset selection → Boolean validation natives);
  `TCPvX.Vf(this::aVY)`, `mzdNu.Vf(this::aVX)` (URL text → Boolean validation —
  candidate: URL well-formed).
- **Skin replacement hook**: `aVx(SkinTextures, AbstractClientPlayerEntity) →
  SkinTextures` [native] and its public reversed-arg twin `aVw(AbstractClientPlayerEntity,
  SkinTextures)` — the mixin-facing transform: given a player's resolved textures,
  return the protected replacement. The window carries the full `SkinTextures`
  constructor shape (cape/elytra/…/model/secure) — fN rebuilds the record with swapped
  texture assets while keeping the model from the selected `fN$sU` preset
  (`comp_1629 model`, `comp_1630 secure` tokens) `[slice + record shape, assembly
  native]`.
- **Custom URL path**: `aVB(String) → String` (candidate: URL normalize/validate),
  `aVV(String, Identifier)`/`aVW(String, Identifier)` (candidate: async texture
  registration into the reload cache keyed by an Identifier), `aVz()`/`aVA()` private
  and `aVS()`/`aVP()` public TextureAsset getters (own/other). Which pair is own vs
  other is unproven.
- **Preset lookup**: `aVy(ct) → fN$sU` — resolve the selected dynamic child of a
  group back to its preset record.

## Per-handler semantics

Behavior handlers decrypt `POOL[0x14a11,0x339]`; bodies unrecovered (VM). Image
addresses:

- **`aVx (SkinTextures;AbstractClientPlayerEntity;)SkinTextures`** — texture
  replacement transform (see above). Public entry `aVw` (arg order flipped —
  consumer-facing).
- **`aVz ()TextureAsset` / `aVA ()TextureAsset`** — resolved replacement assets
  (own / other; order unproven).
- **`aVV (String;Identifier;)V` / `aVW (String;Identifier;)V`** — async texture
  load/commit steps.
- **`aVB (String;)String`** — URL/string transform.
- **`aVy (ct;)fN$sU`** — preset child → record resolver.
- **`aWa/aVZ/aVY/aVX ()Boolean`** — validation suppliers wired to the four
  change callbacks (see Runtime model).
- **`YO ()V`** [18b75d9e0-class] — module-base tick-gate slice (standard gc/gd
  2-state enum; fN's own address in the corpus).
- Machinery: `aWi`/`aWf` (indy bootstraps), `aWh`/`aWg` (int decrypt kernels),
  `aWd`/`aWc` (string decrypt), `aWe` (callsite cache), `aWb` (MatchException
  rethrow) — no behavior.

### Trivial accessors (grouped)

Stub-only getters for the 11 static settings + 2 text settings + volatile caches:
`aVM (cv)`, `aVD/aVE (cw)`, `aVI/aVF/aVJ/aVK (ct)`, `aVG/aVH/aVL (cu)`, `aVN/aVO
(cy)`, `aVR/aVT/aVQ/aVU (String)`, `aVS/aVP (TextureAsset)`. Type groups match the
field census; per-getter identity inside the `ct`/`cu` groups unrecovered (unique
types unambiguous: `aVM`→`TclUV` Protect, `aVN`/`aVO`→`TCPvX`/`mzdNu` URLs).

## Settings → behavior mapping

| field | setting | chain | behavior link |
|---|---|---|---|
| `TclUV` | Protect | `cv` group | master group |
| `bHviN` | Own Skin | `cw .Tz()` (default **on**) | replace own skin |
| `pWupw` | Other Players | `cw .Tz()` (default **on**) | replace other players' skins |
| `xuNWw` | Own Skin Source | `ct` | Defaults / Custom selector |
| `DPswU` | — Defaults | `cu` child, `.SY()` default | use the preset list |
| `YESwS` | — Custom | `cu` child | use `TCPvX` URL |
| `NYWkc` | Own Default Skin | `ct`; dynamic `cu` children from `VJZzZ` presets (fN.java:251) | which preset skin to show for self |
| `BMcCi` | Other Players Skin | `ct`; same dynamic children (fN.java:252) | which preset skin to show for others |
| `iWgvu` | Other Skin Source | `ct` | Defaults / Custom selector |
| `lprwR` | — Defaults | `cu` child, `.SY()` default | |
| `smvRE` | — Custom | `cu` child | use `mzdNu` URL |
| `TCPvX` | Texture URL | `cy .Un(<len>).Up("")` — default empty | custom own-skin URL |
| `mzdNu` | Other Texture URL | `cy .Un(<len>).Up("")` — default empty | custom other-skin URL |

(Preset name arrays and the `cy` length args are indy-decrypted; the preset list
itself is populated by `fX.aYu()` — Interface's skin gallery, fX.java:193-241.)

## Unrecovered / uncertain

1. **Which volatile field is own vs other** (`SseFa`/`zvkmn`,
   `WHhIl`/`jUZJy`/`mRecC`/`HNAeJ`) — the four strings pair into (own URL, own id) /
   (other URL, other id) but the pairing is unproven.
2. **The exact `SkinTextures` rebuild** — which fields fN overwrites (texture vs
   model vs `secure` flag) and whether the model comes from the preset record or is
   preserved from the original, are VM bytecode.
3. **The async fetch flow** through `qq`/`qu`/`qn` — what is requested by UUID
   (`method_4648 getSkinTextures(UUID)` token) vs by URL, and retry/cache policy.
4. **`aVV` vs `aVW`** and `aVB`'s transformation — unrecovered.
5. **Preset list contents** — `VJZzZ` is populated by `fX.aYu()` (Interface module);
   the actual presets (names/urls) live in fX's constants, not fN's corpus.
6. **Category `gh.KfAlY`** display name — unrecovered (second category constant).
7. Tail tokens `sixtwo/fO`, `sixtwo/qq`, `sixtwo/ry`, `dk`, `lEAyT`, `BkQJI`,
   `RaFvq`, `zATNU` sit at the window edge — qq/qu/qu builder is attributed to fN on
   positional interleave with `aVB`/`aVV`/`aVW`; `fO`/`ry`/`dk` are neighbor leakage
   (unattributed).
