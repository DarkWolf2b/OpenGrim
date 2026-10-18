# Anti Blind (sixtwo.dx) — handler-derived behavior spec

Class `sixtwo.dx` extends `sixtwo.gg`. Registry: `sixtwo.dx|Anti Blind|Allows to disable screen effects|key=100|bind=-999` (`bootstrap/offline/features/metadata.txt:151`); decrypted constructor `super(gf.aZL(100, false, gh.nOCvV))` — module id **100**, category `gh.nOCvV`.

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dx.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv`); `sixtwo/dx` absent from both runtime jsonl registries; no `native` methods; no image addresses to cite. |
| `analysis/decompiled/payload-decrypted/sixtwo/dx.java` | **PRIMARY and essentially COMPLETE** (396 lines): constructor with all 8 toggle names and defaults visible as plain folded char arrays, plus 8 public accessors. |
| `analysis/decompiled/bootstrap/offline/features/metadata.txt` | Registry row confirming display name "Anti Blind" and description "Allows to disable screen effects". |
| Helper classes | `mr.clS(int[])` char-array→string (setting-name decoder); `cJ` boolean setting (`.WE(bool)` default). No render/tick/event helper is referenced by this class at all. |

## Runtime model

- **Pure settings holder** — this is the smallest shape in the render/ESP family. The class declares **no `@hG` handlers, no `aaj()` enable override, no `YO()` disable override** (verified by grep over the full file), no state fields, and no Minecraft imports.
- The behavioral half lives **outside the payload classes**: the eight toggles are published through public accessors (`ajr`…`ajk`, below) and consumed by the bootstrap mixin layer (screen/HUD overlay hooks) which is not part of the decompiled `sixtwo` corpus. This mirrors how other effect-suppressing modules expose settings to mixins.
- Because there is no event wiring, the module neither renders nor ticks; toggling it only changes what the mixin layer does on the next overlay evaluation. The `gg` base machinery still applies: `bab()` = enabled ∧ client player ∧ world; `bag()` = `RliRe` enabled flag; panic switch `dh.afl()` is irrelevant here.
- Module-level metadata: keybind primary **100**, bind −999 (unbound).

## Per-handler semantics

None declared. Documented API contract instead:

| Accessor | Field | Meaning |
|---|---|---|
| `ajk()` | `rNxMx` | "Disable Fire" — fire/flame overlay on the HUD |
| `ajl()` | `uiQvy` | "Disable Pumpkin Blur" — carved-pumpkin helmet overlay |
| `ajm()` | `MMhZn` | "Disable Freezing" — powder-snow freeze vignette |
| `ajn()` | `kKviC` | "Disable Nausea" — nausea portal warp effect |
| `ajo()` | `FAwHq` | "Disable Blindness" — blindness fog |
| `ajp()` | `kFBwN` | "Disable Darkness" — darkness pulse fog |
| `ajq()` | `EiPlS` | "Disable Suffocation Overlay" — in-block suffocation vignette |
| `ajr()` | `IeNYH` | "Disable Water Overlay" — underwater overlay tint |

Each accessor simply `return this.<field>;` (`dx.java:300-328`). No accessor is called anywhere in the decompiled payload (`grep` over `analysis/decompiled/**` finds no callers), confirming the consumers live in the bootstrap mixin/native layer.

The mapping from each toggle to a specific Minecraft overlay (e.g. `InGameHud`'s `renderPortalOverlay` / `PumpkinBlur` / fire vignette / `FogRenderer` darkness params) is **inferred from the setting names only** — the mixin sources that read these accessors are not in the decompiled corpus. Do not treat the per-toggle effect attribution above as bytecode-verified beyond the names.

## Settings→behavior (exact — decrypted constructor, names re-folded verbatim from char arrays)

| Field | Class | Name | Value |
|---|---|---|---|
| `rNxMx` | `cJ` toggle | `"Disable Fire"` (68,105,115,97,98,108,101,32,70,105,114,101) | `.WE(false)` |
| `uiQvy` | `cJ` toggle | `"Disable Pumpkin Blur"` (68,105,115,97,98,108,101,32,80,117,109,112,107,105,110,32,66,108,117,114) | `.WE(false)` |
| `MMhZn` | `cJ` toggle | `"Disable Freezing"` (68,105,115,97,98,108,101,32,70,114,101,101,122,105,110,103) | `.WE(false)` |
| `kKviC` | `cJ` toggle | `"Disable Nausea"` (…78,97,117,115,101,97) | `.WE(false)` |
| `FAwHq` | `cJ` toggle | `"Disable Blindness"` (…66,108,105,110,100,110,101,115,115) | `.WE(false)` |
| `kFBwN` | `cJ` toggle | `"Disable Darkness"` (…68,97,114,107,110,101,115,115) | `.WE(false)` |
| `EiPlS` | `cJ` toggle | `"Disable Suffocation Overlay"` (27 chars) | `.WE(false)` |
| `IeNYH` | `cJ` toggle | `"Disable Water Overlay"` (…87,97,116,101,114,32,79,118,101,114,108,97,121) | `.WE(false)` |

All eight default to **false** — the module ships inert; enabling the module alone (`bab()` true) has no payload-side effect. Every effect must be individually opted in.

Registry keybind: **100**. Category `gh.nOCvV`.

## Unrecovered

- The mixin/native consumer of the eight accessors: which overlay each toggle actually cancels, at which injection points (`InGameHud` render methods, fog controllers, `GameRenderer`), and whether the cancellation is unconditional or `bab()`-gated. The bootstrap mixin directory decompiles only a handful of accessor bridges (`EntityNameTagEventBridgeMixin`, `WorldRenderEventBridgeMixin`, etc.) — none reference `dx`.
- Whether the toggles take effect instantly or require a screen refresh (no code to inspect).
- Any interplay with the panic switch (`dh.afl()`) — the payload class never touches it; a native layer could.
- Confirming the exact `dx` class_id/module name pairing beyond `metadata.txt` + constructor id 100 (both agree; the stitched-corpus check is vacuous for lowercase classes).

## Helper contracts (one line each)

- `mr.clS(int[])` — char-array → string decoder used by every settings constructor in the payload.
- `cJ` — boolean toggle setting; `.WE(bool)` default, `WF()` live read; here only via the accessors.
- `gg` / `gf.aZL` — module base and registration factory; `dx` relies on the base only (no overrides), so `bab()`-gating semantics are inherited but unused payload-side.
- Registry metadata: `bootstrap/offline/features/metadata.txt:151`: `sixtwo.dx|Anti Blind|Allows to disable screen effects|key=100|bind=-999` — primary keybind **100**, secondary bind **−999** (unbound). Description matches the settings-tree shape (8 "Disable X" toggles).

## Accessor surface (bytecode shape)

Each accessor is a one-instruction field load (`dx.java:300-328`); the accessor order in the file
matches the constructor field order, i.e. Fire → Pumpkin Blur → Freezing → Nausea → Blindness →
Darkness → Suffocation → Water. There are no setters payload-side: the config UI writes the
`cJ` fields directly through the settings framework, and the accessors are read-only bridges
exactly like the mixin bridges the bootstrap layer exposes for other modules
(`EntityNameTagEventBridgeMixin`, `WorldRenderEventBridgeMixin` pattern).

## Comparison with sibling modules

- Like `dy` (Glow), `dx` has no handlers and its behavior lives in a native/mixin consumer; unlike
  `dy`, `dx` exposes its toggles through named accessors rather than a single query predicate,
  which suggests the mixin layer reads each effect independently (8 query points rather than 1).
- Unlike every other render-category class, `dx` imports nothing from `net.minecraft` — it cannot
  even name the effects it suppresses; all effect knowledge is consumer-side.