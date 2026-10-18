# Glow (sixtwo.dy) — handler-derived behavior spec

Class `sixtwo.dy` extends `sixtwo.gg`. Registry: `sixtwo.dy|Glow|Adds glowing effect to entities|key=86|bind=-999` (`bootstrap/offline/features/metadata.txt:130`); decrypted constructor `super(gf.aZL((int)86, false, gh.nOCvV))` — module id **86**, category `gh.nOCvV`.

## Evidence base

| Input | Status |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dy.c` | **MISSING** — lowercase `d` classes have 0 natives declared/bound (`coverage-matrix.tsv`); `sixtwo/dy` absent from both runtime jsonl registries; no `native` methods; no image addresses to cite. |
| `analysis/decompiled/payload-decrypted/sixtwo/dy.java` | **PRIMARY, essentially complete** (261 lines): constructor with both setting names/defaults, plus the single public predicate `ajv(Entity)`. The handler is small enough that CFR's block structure was cross-checked against `javap -c` on `analysis/jars/payload-raw/sixtwo/dy.class` (offsets cited below). |
| Helper classes | `mr.clS(int[])` char-array→string name decoder; `cF` entity-set setting (`VX(entity)` membership); `cJ` boolean setting (`WF()` live value); `dh.afl()` panic/tamper array; `rD.dlmvG.player` (`MinecraftClient.player`, `field_1724`). |

## Runtime model

- **Predicate-only module**: no `@hG` handlers, no `aaj()` enable override, no `YO()` disable override, no state, no Minecraft rendering imports. The glow itself is applied by the bootstrap mixin / native layer, which calls `ajv(entity)` to decide whether an entity receives the glowing renderer treatment (vanilla glowing outline pipeline).
- The module's entire payload-side surface is one boolean query; every consumer decision beyond it lives outside the decompiled corpus (the native `dA–dZ` handler layer and/or bootstrap mixins — `dy` appears nowhere else in the decompiled payload).

## Per-handler semantics

### `public boolean ajv(Entity entity)` — glow-eligibility predicate (`dy.java:152-193`; bytecode offsets from `javap`)
Recovered truth table (bytecode-verified):

| Condition | Result | Offsets |
|---|---|---|
| panic (`dh.afl() != null`) | returns the raw intermediate: `VX(entity)` if the panic is seen after the set check (offset 23→37), `wHVjK.WF()` if seen after the toggle check (offset 57→78) | 13-37, 38-78 |
| `entity` **not** in "Entities" set (`fCwUr.VX(entity)` false) | `false` | 26→36 |
| `entity == rD.dlmvG.player` (self) | `false` — always, regardless of toggles | 45→81 |
| `entity != self` and `wHVjK.WF()` ("Self Glow") **true** | `false` | 67→81 |
| `entity != self` and "Self Glow" **false** | `true` | 67→77 |

i.e. the non-panic semantics are `ajv(e) = fCwUr.VX(e) && e != player && !wHVjK.WF()`.

**Interpretation caveat (documented, not guessed):** the recovered polarity is counterintuitive — with defaults ("Self Glow" = false) every set entity except the client player is glow-eligible, and flipping "Self Glow" **disables** eligibility for others. `ajv` never approves the client player, so a self-glow path must exist outside `ajv` (native layer reading `wHVjK.WF()` directly, or a separate mixin branch). The bytecode is unambiguous; the surrounding native design is the open question (see Unrecovered). The panic paths returning raw intermediates (`VX`/`WF` values) are j2cc control-flow artifacts, not meaningful behavior.

## Settings→behavior (exact — decrypted constructor, names re-folded verbatim from char arrays)

| Field | Class | Name | Value |
|---|---|---|---|
| `fCwUr` | `cF` entity set | `"Entities"` (69,110,116,105,116,105,101,115) | `.VS(jg$tJ.OCdZM)` preset binding; **no `.VT(...)` seed** — empty set by default |
| `wHVjK` | `cJ` toggle | `"Self Glow"` (83,101,108,102,32,71,108,111,119) | `.WE(false)` — see the polarity caveat above |

Registry keybind: **86**. Category `gh.nOCvV`.

## Unrecovered

- The consumer of `ajv`: which mixin/native site calls it, how often, and what "glowing effect" concretely does there (vanilla `GlowingVertexConsumer` team-color outline vs. a custom shader). No caller exists anywhere in the decompiled payload.
- The actual self-glow mechanism: `ajv` provably returns `false` for the client player, so whatever makes "Self Glow" work must live in the native layer (likely querying `wHVjK` via its own accessor or hardcoding the toggle name). The relationship between the recovered predicate and that path is unresolved — do not assume `Self Glow = true` also glows others or vice versa beyond the table above.
- Whether the panic-path raw returns (documented in the table) are reachable in practice — `dh.afl()` non-null indicates the tamper switch; the native glow layer may not even consult `ajv` then.
- `jg$tJ.OCdZM` preset constant for the empty "Entities" set.
- Glow color: no color setting exists in `dy` at all — the outline color presumably comes from vanilla team colors or the shared `jk.jEkxo`/theme constants elsewhere; nothing recoverable here.

## Helper contracts (one line each)

- `cF` — entity-type set setting; `VX(entity)` membership test, `VS(jg$tJ.OCdZM)` preset scope, no seed here (empty by default).
- `cJ` — boolean toggle; `WF()` live read.
- `dh.afl()` — panic/tamper probe; non-null returns are raw intermediates (see truth table).
- `rD.dlmvG.player` — `MinecraftClient.player` (`field_1724`), used for the self-exclusion test.
- Registry metadata: `bootstrap/offline/features/metadata.txt:130`: `sixtwo.dy|Glow|Adds glowing effect to entities|key=86|bind=-999` — primary keybind **86**, secondary bind **−999** (unbound). Two settings only, no colors, no numbers.

## Bytecode shape of `ajv` (verification record)

`javap -c` on `analysis/jars/payload-raw/sixtwo/dy.class`, method `ajv(Lnet/minecraft/class_1297;)Z`
(the descriptor names `Entity` as intermediary `class_1297`), shows the exact evaluation order:

1. `invokestatic dh.afl()` → `ifnonnull` → panic path (returns an intermediate).
2. `getfield fCwUr` → `invokevirtual cF.VX(entity)` → `ifeq` → `false`.
3. `getstatic rD.dlmvG` → `getfield player` → `if_acmpeq` → self → `false`.
4. `getfield wHVjK` → `invokevirtual cJ.WF()` → `ifne` → "Self Glow" on → `false`.
5. otherwise `iconst_1; ireturn`.

This is the basis for the truth table above; the polarity statement
`ajv(e) = fCwUr.VX(e) && e != player && !wHVjK.WF()` is a direct transcription of branches 2–4, not
an interpretation.

## Open question restated (the polarity problem)

Because branch 3 excludes the client player unconditionally and branch 4 excludes *all other* set
entities when "Self Glow" is on, no combination of payload-side logic reproduces a working
"Self Glow" feature. Three candidate resolutions exist and none is provable from this corpus:

1. The native layer calls `ajv` for non-self entities and consults `wHVjK` through a separate
   accessor (e.g. reflection by field name) for self.
2. "Self Glow" is handled by a second predicate or handler that was stripped from the payload.
3. The toggle name is misleading and the intended semantics are "glow everything except me when
   off / glow nothing when on" — i.e. a master switch with an inverted label.

Recording all three is intentional: the bytecode cannot discriminate, and inventing a resolution
would corrupt the spec.