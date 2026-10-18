# China Hat (sixtwo.cS) — handler-derived behavior spec

Class: `sixtwo/cS` · display name **China Hat** (module id 122).
Superclass `gg` (module base: `bab()` enabled gate, `aaj()` on-enable,
`YO()` unregister). **Zero native methods declared** (javap-verified;
coverage matrix `natives_declared=0`) — pure-Java payload class; the payload
is not j2cc-virtualized and no image addresses (0x18xxxxxxx) exist to cite.
Note: unlike most classes in this batch, the *behavior* of cS is almost
entirely in the Java **shell** FeatureRenderer `qD` (draw calls out of
scope); cS itself is the settings + API-contract surface.

## Evidence base

1. `analysis/decompiled/payload-named/sixtwo/cS.java` (283 lines; the
   decrypted-literal variant was not produced for cS — this is the only
   decompile, so all setting names below come from `int[]`-ASCII literals
   read directly in this file).
2. `analysis/decompiled/payload-named/sixtwo/qD.java` — shell
   `FeatureRenderer` that consumes cS getters (read; summarized below).
3. `analysis/specs/modules/cS.md` structural spec.
4. Registry entry (module id 122) for display name.
5. Helpers (one-liners): `cv` multi-group (`Za()`/`SZ()` selection);
   `cw` multi-select (`Tz()` default-on, `TC()` active); `cG` color
   (`Wh()` int); `cC` numeric (`VC()` int / `VB()` float); `gg` base;
   `gb.aYR` DES seed derivation (unrecoverable); `jo.bEt(Runnable)`
   deferred-render task; `ky.bSd` shell cone-draw entry.

## Runtime model

- cS declares **no `@hG` event listeners** (confirmed: zero listener
  registrations in the constructor). All runtime behavior is driven from
  the shell renderer `qD`, which polls the getters exposed here.
- Render contract recovered from `qD` (shell, summarized for the contract):
  on the world-render path it translates to the local player position with
  vertical offsets **translate(0, −0.43, 0)** / **−0.5** (pose-dependent),
  rotates `NEGATIVE_Z` 180° and `POSITIVE_Y` 90°, then **defers the actual
  cone draw to `ky.bSd` via `jo.bEt`** (deferred-render task). No draw
  calls exist in cS itself.
- Getter mapping (decompile-verified): `Za()` → `PDKAy` (style group),
  `Zb()` → `OHlmP`, `Zc()` → `mjpkN` (multi-selects), `Zd()` → `Ccjvo`
  (color), `Ze()` → `BdlMa` (numeric).

## Per-handler semantics

Only getter/dispatcher methods exist (all Java, decompile-verified):

- `cS()` constructor [cS.java:28–92] — builds the settings tree (below). No
  event wiring, no listeners.
- `Ze()` [190] — returns `BdlMa` (numeric setting, consumed by `qD`).
- `Zc()` [194] — returns `mjpkN` (first multi-select).
- `Zb()` [198] — returns `OHlmP` (second multi-select).
- `Zd()` [202] — returns `Ccjvo` (color setting).
- `Za()` [206] — returns `PDKAy` (group setting; `qD` uses it to select the
  hat style).
- `Zf/Zg/Zh` [210–282] — DES-int/string decode plumbing (`gb.aYR` seeds;
  plaintexts unrecovered, see Unrecovered).
- `YO()` — inherited unregister; no per-class teardown.

## Settings→behavior

Exact values from the constructor (field order; names [uncertain] where the
literal is DES-only):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| (group, `cv PDKAy`) | multi-group / style selector | child option strings DES-only in this variant | first child | [cS.java:28+] |
| (`cw mjpkN`) | multi-select | toggle set consumed by `qD` | `Tz()` default-on set | [cS.java:~30s] |
| (`cw OHlmP`) | multi-select | toggle set consumed by `qD` | `Tz()` default-on set | [cS.java:~40s] |
| (color, `cG Ccjvo`) | color | — | decrypted default (DES; plaintext not dumped) | [cS.java:63] |
| (numeric, `cC BdlMa`) | numeric | step **1.0**, min **1.0**, max **10.0** | **5.0** | [cS.java:91] |

Naming caveat: because cS lacks the decrypted-literal decompile variant, the
child option strings of `PDKAy`/`mjpkN`/`OHlmP` and the color/numeric
display names are present only as DES ciphertext in this variant; the field
identities and all numeric bounds are certain, the display strings
[uncertain].

## Unrecovered

- **DES string family** (static seed `NdBwP =
  gb.aYR(-3814145772088858924L, 6326010710559167094L, ...)`
  [cS.java:23]) — all setting display names except the numeric one
  (recovered as a literal `int[]`) are behind this seed; plaintext list
  open.
- The `ky.bSd` cone-draw parameters (radius/height, whether scale follows
  `BdlMa` directly or is derived) live in the shell; only the offsets and
  rotations listed in Runtime model are contract.
- Whether `OHlmP` vs `mjpkN` maps to (visible-to-others, render-self) or
  (sneak behavior, style) is [uncertain] — `qD` consumes both without
  naming.
- Whether the −0.43 vs −0.5 vertical offset distinguishes sneaking or a
  different pose — [uncertain] (branch condition lives in `qD`).