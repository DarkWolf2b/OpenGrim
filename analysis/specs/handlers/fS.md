# fS — Name Protect (module id 106, key=106, bind=-999)

## Evidence base

- Registry: `fS  sixtwo.fS  Name Protect  "Hides real player name"  key=106
  bind=-999` (`analysis/specs/registry.tsv`); coverage matrix row
  `fS  Name Protect  0 0 0`.
- `analysis/decompiled/payload-decrypted/sixtwo/fS.java` (1718 lines, CFR; all
  setting names/defaults present as plain int char arrays and string literals in
  the constructor; the three rewrite methods are fully visible Java).
- Runtime interception corpus: 76 `"sixtwo.fS"` records in
  `analysis/decrypted/full-dump.jsonl`, including `bsm:"aXl"`,
  `desc:"(IJ)Ljava/lang/String;"` with decrypted value `'protected.gg'` —
  independently confirming the Server Name default (also visible as a plain
  literal at [fS.java:138]).
- Helper sources verified: `payload-named/sixtwo/cw.java` (checkbox widget:
  `Tz()` enrolls the widget in the default-checked registry [cw.java:152-155],
  `TC()` returns checked state [cw.java:157]),
  `sixtwo/cy.java` (`Us()` string value getter [cy.java:237]),
  `sixtwo/qu.java` (`public static AtomicBoolean cmARD` [qu.java:15] — the only
  reader is fS),
  `sixtwo/ru.java` (`djF`/`djG` string-style transformers [ru.java:190, 283]),
  `sixtwo/jd.java` (`public static Pattern dCIsP` precompiled obfuscation-domain
  pattern [jd.java:23]), `sixtwo/fX.java` (`aYu()` anti-tamper probe used
  pervasively).
- Structural predecessor: `analysis/specs/modules/fS.md` (registered the setting
  names, found 0 listeners — the behavior layer below is new).
- **No native corpus**: no `sixtwo_fS.c` in `analysis/ghidra/handlers-stitched/`;
  fS is pure Java with no `@hG` listeners. All citations are Java line numbers.

## Runtime model

- Construction: `super(gf.aZL(106, false, gh.KfAlY))` [fS.java:83] — module id
  106, starts disabled, category token `gh.KfAlY` (distinct from the combat
  family `xwjCw`; exact category label not in this class).
- fS is a **text-rewrite filter** with three replacement channels — own player
  name, friend names, and the server identity — exported as public methods that
  the native render/mixin layer calls at text-draw sites. No Java-side caller of
  `aWR`/`aWS`/`aWQ`/`aWP` exists in the decompiled payload (checked), so the
  injection points are native; the rewrite logic itself is fully recoverable.
- Every rewrite path shares the same three-way gate: module enabled (`RliRe`)
  AND the channel's checkbox (`TC()`) AND `!qu.cmARD.get()`. `qu.cmARD` is an
  `AtomicBoolean` whose setter is not in the payload (native) — when true, all
  protection is bypassed and original text is returned (see Unrecovered).
- The general path `aWR(Text)` [fS.java:306-356] rebuilds a `Text` by visiting
  every styled literal and applying `aWQ(aWP(literal))`, preserving each
  segment's `Style`; empty input, disabled module, or `cmARD` returns the
  original instance unchanged.
- Exported state: `aWT()`→`cv lHFev` (the "Protect" group widget), `aWU()`→Name
  checkbox, `aWV()`→Friends checkbox, `aWW()`→Server checkbox, `aWX()`→Name
  string, `aWY()`→Friends Name string, `aWZ()`→Server Name string [fS.java:1328,
  1332, 1336, 1389, 1426, 1602, 1606], and `aXa()`→ the scoreboard-entry
  comparator [fS.java:1505].

## Per-handler semantics

- `public String aWP(String)` [fS.java:1242-1310] — **own-name rewrite**.
  Returns input unchanged unless enabled AND `JniNV.TC()` (Name checkbox) AND
  `!qu.cmARD.get()`. Otherwise replaces every occurrence of
  `rD.dlmvG.getSession().getUsername()` with `aWX().Us()` (the "Name" setting,
  default `"Protected"`).
- `public String aWQ(String)` [fS.java:1046-1236] — **friend-name rewrite**.
  Gate: enabled AND `serPq.TC()` (Friends checkbox) AND `!cmARD`. Two passes:
  first a detection pass over `rD.dmc().ddE()` (friend manager entries, `mE`
  objects, `cnD()` = friend name) — if no friend name is contained in the input,
  return it unchanged (no allocation); if any matches, replace each friend name
  with `aWY().Us()` ("Friends Name", default `"Protected Friend"`).
- `public Text aWS(Text, TextRenderer, MutableInt)` [fS.java:360-1041] —
  **sidebar/server-title rewrite**, the most elaborate path. Gate: enabled AND
  `VNukw.TC()` (Server checkbox) AND `!cmARD` → otherwise the original text is
  returned untouched. Then:
  1. Candidate strings: the text content (`getString()`), the current server
     address (`rD.dlmvG.getCurrentServerEntry().address`, lowercased, truncated
     at the port separator `':'` to the bare host label — corrected 2026-10-17, batch 29
     (not the first `'.'`),
     and the configured replacement `aWZ().Us()` ("Server Name").
  2. Bail-out if none of the title-cased/contains checks match (title contains
     host label or replacement, case-insensitive) and the precompiled pattern
     `jd.dCIsP` does not match the title or its `ru.djG`-transformed form.
  3. Geometry gate: computes the drawn width (`TextRenderer.getWidth`), the
     sidebar center x from the inGameHud mixin accessors
     `((mO)rD.dlmvG.inGameHud).getSidebarX()/getSidebarWidth()` [fS.java:619-621],
     and rewrites only when the incoming `MutableInt` x position matches the
     centered position within 1.5 px (`Math.abs(pos - center) - 1.5f > 0 →
     skip`) [fS.java:623-630] — i.e. only the *centered sidebar title* is
     rewritten, not arbitrary text.
  4. Match engine: builds a case-insensitive regex (`Pattern.compile(regex, 2)`)
     from optional `jd.dCIsP` pattern prefix + quoted host label + quoted
     replacement, visits the text accumulating per-style segments (`aXb`
     styled visitor [fS.java:1323-1325], `aXf` segment builder), scans the
     concatenated string with word-boundary logic (walk back/forward over
     non-letter/digit characters; walk-back `-`/`.`, walk-forward `/ ? = & - _ .`
     plus a trailing `.` trim — corrected 2026-10-17, batch 29), and
     replaces each match with the replacement string laid out **one character
     per matched-width unit** using the style function `aXc` [fS.java:1556-1592]
     — the replacement keeps the match's pixel width so column alignment in the
     sidebar is preserved.
  5. The replacement used per match is `ru.djF(ServerName)` when the matched
     span equals the plain replacement, else the plain Server Name
     [fS.java:986-999] (djF applies the shared fancy-text styling).
  6. Flush helpers `aXe`/`aXd` [fS.java:1458-1555] splice remaining untouched
     segments into the result `MutableText` preserving styles, and the method
     ends by re-centering: it re-measures the new width and
     `var3_3.setValue((int)(sidebarX + (sidebarWidth - newWidth) / 2.0f))`
     [fS.java:1030-1041] so the HUD keeps the title centered.
- `Comparator<ScoreboardEntry> oHxpG` [fS.java:138] — field initialized (not a
  handler):
  `Comparator.comparing(ScoreboardEntry::value).reversed().thenComparing(ScoreboardEntry::owner, String.CASE_INSENSITIVE_ORDER)`
  — score descending, then owner name case-insensitive ascending; exported via
  `aXa()` for the scoreboard render path.
- Static helpers are obfuscation infrastructure: `aXi` byte→char decoder
  [fS.java:1340-1368], `aXm`/`aXj` DES int/string table lookups (57-entry int
  table, index `idx = seed ^ (key & 0x7FFF) ^ 0x3DC5`; 4-entry string table,
  index `^ 0x5488`) [fS.java:1393-1421, 1430-1458], `aXo`/`aXn`/`aXl` indy
  bootstrap trio, `aXb`/`aXf`/`aXe`/`aXd`/`aXc` text-rebuild lambdas, `aXh`
  identity rethrow.

## Settings→behavior

All names from plain int char arrays in the constructor [fS.java:84-143].

- `cv lHFev` — `"Protect"` (80 114 111 116 101 99 116) [fS.java:89] — group
  widget containing the three toggles.
- `cw JniNV` — `"Name"` (78 97 109 101) [fS.java:94] `.Tz()` — checkbox,
  **default on** (Tz enrolls it in the default-checked set); drives `aWP`.
- `cw serPq` — `"Friends"` (70 114 105 101 110 100 115) [fS.java:103] — checkbox,
  default off (no `.Tz()`); drives `aWQ`.
- `cw VNukw` — `"Server"` (83 101 114 118 101 114) [fS.java:111] — checkbox,
  default off; drives `aWS`.
- `cy nVujd` — `"Name"` [fS.java:114] `.Un(64).Up("Protected")` — text input,
  max length 64, default `"Protected"`; replacement for the local player's own
  session username.
- `cy MSZPL` — `"Friends Name"` (70 114 105 101 110 100 115 32 78 97 109 101)
  [fS.java:119-130] `.Un(64).Up("Protected Friend")` — max length 64, default
  `"Protected Friend"`; replacement for friend names.
- `cy IKiTs` — `"Server Name"` (83 101 114 118 101 114 32 78 97 109 101)
  [fS.java:131-139] `.Un(64).Up("protected.gg")` — max length 64, default
  `"protected.gg"`; replacement for the server identity in the sidebar title
  (default confirmed by the runtime `'protected.gg'` string record).
- Visibility wiring: each text input is shown only when its checkbox is on —
  `nVujd.Vf(this.JniNV::TC)`, `MSZPL.Vf(this.serPq::TC)`,
  `IKiTs.Vf(this.VNukw::TC)` [fS.java:139-142].

## Unrecovered

- **Setter of `qu.cmARD`** (`public static AtomicBoolean` [qu.java:15]): the only
  reader in the payload is fS (true ⇒ return original text). The writer is
  native; by usage it is a temporary bypass flag (most plausibly a
  screenshot/capture mode), but the trigger is not in this class — open question.
- **`jd.dCIsP` pattern value**: the precompiled regex is DES-decrypted at class
  init from the fS string table (key `IRkCy` from native `gb.aYR`, not
  statically recoverable; no `(IJ)Ljava/lang/String;` record for it exists in
  the runtime dump). It is matched against sidebar titles as an alternative
  trigger and spliced into the replacement regex; its exact form (likely a
  common server-title decoration pattern) is unknown.
- **The four DES-hidden separator characters** used in the host-label split
  (first `'.'`) and word-boundary scan of `aWS` are `aXo`/`aXj`-decrypted int
  constants from the same undecryptable table — behaviorally they act as
  word-boundary/stop characters; exact values unrecovered.
- **`ru.djF` exact transform**: a shared fancy-text styling pass over the
  replacement string (used for the "matched span == plain replacement" case);
  the transform table is shared client-wide and was not decoded for this spec.
- **Call sites of `aWR`/`aWS`** are native; which render paths (tab list, chat,
  scoreboard, bossbar, window title) route through `aWR` vs `aWS` is inferred
  only from the method signatures (aWS takes the sidebar geometry) — the full
  call map is outside the payload.