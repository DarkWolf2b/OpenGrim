# Batch 29 audit — fS (Name Protect)

Session 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-29 subagent.
Module: `fS` Name Protect (`src/main/java/dev/opengrim/modules/utility/NameProtect.java`).
Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (after the rewrite).

- **Post-fix parity: ~92% · status: ported (native text-pipeline call sites absent) · fixed: yes (full rewrite)**
- Source: `analysis/decompiled/payload-decrypted/sixtwo/fS.java` (1718 lines, CFR) —
  declared class verified first (`public class fS extends gg`, fS.java:63).
- Bytecode ground truth: `javap -c -p` on `jar-casesafe/sixtwo/fS_.class`
  (copied to its decoded name `fS.class` in a scratch dir: on Windows the literal
  name `fS.class` resolves to the colliding `fs.class` — the documented
  case-collision trap; the first javap run loaded `sixtwo.fs` and was discarded).
  Method offsets used below are javap line numbers of the correct class:
  constructor 34-980, aWR 1236-1288, aWS 1288-2104, aWQ 2105-2289,
  aWP 2290-2363, aXg 2424-2440, aXb 2442-2450, aWT/aWU/aWV 2451-2469,
  aWW 2687-2692, aWX 2835-2840, aXa 3186-3191, aWZ/aWY 3348-3358,
  aXe 3108-3185, aXd 3192-3257, aXc 3258-3307, aXf 3360-3455,
  `fS$sV` = style + StringBuilder + native `dpc()` length.
- Trace: `analysis/traces/2026-10-17/` — `digests/fS_.txt` is empty and
  `by-class-casesafe/fS_.jsonl` holds a single `load` record for `sixtwo/fS`
  (no method ran in the capture window), so no runtime evidence for the rewrite
  methods; the runtime decrypted pool did carry 76 `sixtwo.fS` records (below).

## Constant recovery (validated 76/76)

The three rewrite methods use DES-encrypted constants at every call site
(`value = aXm(seed, raw ^ (IRkCy ^ methodConst))`, index
`seed ^ (key & 0x7FFF) ^ 0x3DC5`; strings via `aXj`, index `^ 0x5488`).
I recovered the class key from the dump's `args^raw` pairs
(`IRkCy = 109988640382782`, single group over all 76 records) and reimplemented
the class's own decryptor (`aXi` modified-UTF8, `aXj` string table, `aXm` int
table — scratch tool `FsDecrypt.java`, JDK 21) — **validation: 76 ok / 0 bad**
against `analysis/decrypted/full-dump.jsonl`. All 76 records are constructor
sites (setting-name chars + the three default strings); no aWS/aWP/aWQ site was
ever evaluated at runtime, so the decryptor is what makes the aWS constants
recoverable:

| aWS call site (javap offset) | seed | decoded |
|---|---|---|
| host-label split `address.indexOf(...)` (171) | 25326 | **`':'` (58)** — the port separator, not `.` |
| walk-back 1 (1019) | 27750 | `'-'` (45) |
| walk-back 2 (1057) | 14958 | `'.'` (46) |
| walk-forward 1 (1127) | 26313 | `'/'` (47) |
| walk-forward 2 (1165) | 7479 | `'?'` (63) |
| walk-forward 3 (1203) | 23189 | `'='` (61) |
| walk-forward 4 (1253) | 26144 | `'&'` (38) |
| walk-forward 5 (1306) | 2165 | `'-'` (45) |
| walk-forward 6 (1337) | 31363 | `'_'` (95) |
| walk-forward 7 (1375) + trailing trim (1447) | 12699 | `'.'` (46) |
| regex prefix `x:(IJ)Ljava/lang/String;` (616) | 19383 | **`"(?:"`** |

Also decoded: the pattern-compile flags are literal `2` (CASE_INSENSITIVE), the
geometry tolerance is `1.5f`, the entry limit is vanilla's, and the constructor
name arrays (Protect/Name/Friends/Server/Name/Friends Name/Server Name) with
defaults `"Protected"` / `"Protected Friend"` / `"protected.gg"` (last confirmed
by the dump's `'protected.gg'` string record).

## Settings — 1:1

| port setting | original | citation |
|---|---|---|
| `GroupSetting("protect")` | `cv lHFev` "Protect" (group) | fS.java:93 |
| `BoolSetting("name", true)` | `cw JniNV` "Name" + `.Tz()` | fS.java:94 |
| `BoolSetting("friends", false)` | `cw serPq` "Friends" | fS.java:103 |
| `BoolSetting("server", false)` | `cw VNukw` "Server" | fS.java:111 |
| `StringSetting("name_alias", "Protected")` | `cy nVujd` "Name" `.Un(64).Up("Protected")` | fS.java:112 |
| `StringSetting("friends_name", "Protected Friend")` | `cy MSZPL` "Friends Name" | fS.java:126 |
| `StringSetting("server_name", "protected.gg")` | `cy IKiTs` "Server Name" | fS.java:139 |
| visibility `nameAlias ⇐ name`, etc. | `nVujd.Vf(this.JniNV::TC)` … | fS.java:141-143 |
| `scoreboardComparator` (aXa) | `oHxpG` value-desc/owner-CI comparator | fS.java:140 |

- Declaration/registration order = original construction order; the three text
  inputs are module-level settings (the original passes `this`, not the group,
  to `cy`) and the checkboxes are group children — both already matched.
- `.Un(64)` max length is not expressible in `StringSetting` — flagged (same as
  fV/fN).
- `.Vf(...)` visibility is a per-tick mirror (no supplier in this API —
  SelfDestruct precedent).
- Metadata: id 106 starts disabled (`gf.aZL(106, false, gh.KfAlY)`), bind −999
  (unbound), category KfAlY (the rebuild's UTILITY family) — all match.

## Fixes (this session)

1. **aWS rebuilt 1:1 from bytecode** (was a simplified approximation). Now:
   enabled → Server checkbox → candidates (title; address lower-cased and cut at
   the recovered `':'`; Server Name and its `djF` variant) → containment
   bail-out → geometry gate `abs(pos − (sidebarX + (sidebarWidth − oldWidth)/2.0f))
   <= 1.5f` → regex `Pattern.quote` alternatives, `Pattern.CASE_INSENSITIVE` →
   styled-segment engine (`aXf` visitor, `aXe` flush, `aXd` consume, `aXc`
   style lookup, `fS$sV` segment) → word-boundary walk with the recovered
   separators and the trailing `'.'` trim → one replacement char per matched
   width unit (`(int)((double)i / len * matchLen)`, `min(..., matchLen − 1)`)
   with the span-difference replacement choice → deletion/flush order and the
   fresh matcher per iteration (the opaque-predicate loop-back at javap 1693
   recreates the matcher at 935 each pass; `fX.aYu()` returns the non-null
   static `CgnEr` array, fX javap 996-999, so the loop-back is taken) →
   re-centre `xPosition.setValue((int)(sidebarX + (sidebarWidth − newWidth)/2.0f))`.
   Removed from the old port: the single-matcher-over-a-copy loop, the
   `xPosition += (old − new)/2` shift, the missing geometry gate and the
   invented per-segment merge heuristics.
2. **aWP / aWQ / aWR re-verified against bytecode** and de-invented: the extra
   null checks and the session-username fallback (`player.getGameProfile()`) are
   gone — the original dereferences directly (`rD.dlmvG.getSession().getUsername()`,
   javap 2328-2331); aWQ keeps the detection pass → replace pass with the same
   gates; aWR keeps `aWQ(aWP(...))` per visited segment.
3. **Removed inventions**: the `onEnable`/`onDisable`/`onTick` custom-name
   rewrite (fS has no listeners at all — no lifecycle methods in the bytecode
   listing) and the `sanitize(String)` convenience API (no callers, not in fS).
   `onTick` now only mirrors the `.Vf` visibility wiring.
4. aWQ friend source: `FriendsManager.all()` — the rebuild's shared friend store
   (the `rD.dmc().ddE()` / `qQ`+`mE` equivalent). Order caveat documented.
5. Getter surface `aWT`–`aXa` kept 1:1; the comparator verified against vanilla
   InGameHud's `SCOREBOARD_ENTRY_COMPARATOR` static init (same expression).

## Remaining gaps

- **[N] `qu.cmARD` bypass gate** (`qu.java:15`, `public static AtomicBoolean`):
  read by all four rewrite paths in the original (javap 61-77 aWP, 61-74 aWQ,
  55-68 aWR, 62-75 aWS). `qu` is a fully native class (casesafe/payload/sixtwo/qu.java)
  and no rebuild component owns such a flag, so the third gate is inert here —
  behaviour is identical while the flag is false. Scale: gate only.
- **[U] `jd.dCIsP`** (jd.java:23, set by jd's native initialiser, jd.java:33-36;
  0 records in the runtime dump): the alternative sidebar trigger
  (javap 354-421) and the `"(?:" + dCIsP.pattern() + ")"` regex prefix
  (javap 597-656) are omitted. Scale: titles that contain neither the address
  nor the host label but match the pattern are not rewritten.
- **[U] `ru.djG` / `ru.djF`** (payload-named/sixtwo/ru.java:190-281 / 283-342):
  carried as identity stand-ins. `ru.JJddW` comes from native `gb.aYR`
  (ru.java:40) and ru never initialised in the trace (no `sixtwo/ru` trace file,
  no dump record), so the char maps (sRJBt/cxxgt/VkWRj) are unrecoverable from
  the corpora. Both transforms are per-character, so match indices and the
  plain/normalised span comparison stay 1:1 for plain (ASCII) titles; stylised
  unicode titles are not normalised. Scale: stylised titles only.
- **[N→computed] `mO` sidebar accessors** (mO.java:6-9): the implementor is
  applied by the native loader and is not in the recovered corpora
  (no `mO` implementor in bootstrap/stage2/payload corpora — checked by
  byte-scan). The port computes the values with vanilla's own sidebar layout
  (InGameHud method_1757: `width = max(titleWidth, Σ entries…)`,
  `x = scaledWidth − width − 3`), which equals the drawn values at the title
  draw site. Capture condition: run the original and dump the mO implementor.
- **[N] native call sites** of aWR/aWS/aWQ/aWP: none exist in the payload
  (handler spec, re-verified), and the rebuild has no text-pipeline mixins, so
  the module is API-only — exactly like the original class itself. Capture
  condition: run the original with Name Protect on and log which render paths
  (tab list, chat, nametag, scoreboard/sidebar, bossbar, window title) call
  aWR vs aWS.
- **Framework**: `StringSetting` max length 64 not expressible (flagged);
  `FriendsManager` is a set (replacement order differs from the original's
  ordered list when one friend name contains another).

## Spec corrections (for the orchestrator to fold into the ledgers)

- `handlers/fS.md` §Per-handler aWS: the host-label split separator is **`':'`**
  (the address is cut at the port separator), not `.`; the "four DES-hidden
  separator characters" are in fact **2 walk-back chars (`-`, `.`) + 7
  walk-forward chars (`/`, `?`, `=`, `&`, `-`, `_`, `.`)** plus a trailing `.`
  trim; the regex prefix is `"(?:"`; the geometry gate is
  `abs(pos − (sidebarX + (sidebarWidth − width)/2.0f)) <= 1.5f` with the
  re-centre on the *new* width.
- `handlers/fS.md` §Runtime model: confirmed — fS has no listeners; the
  rewrite entry points are exported for the native layer.
- `modules/fS.md` §Structural: the "0 listeners" finding is confirmed; the
  "see 00-framework.md [inferred]" settings rows are now fully recovered.

## Evidence

- `analysis/decompiled/payload-decrypted/sixtwo/fS.java` (cited line ranges).
- `javap -c -p` on `jar-casesafe/sixtwo/fS_.class` (offsets above),
  `fS$sV` inner class, `fX_.class` (aYu → `CgnEr`), `jd.class` (dCIsP never
  written in bytecode), `qQ_.class` (friend list), `mE_.class` (entry name).
- `analysis/decrypted/full-dump.jsonl` — 76 `sixtwo.fS` records, decryptor
  validation 76/76; keys/args used for the table above.
- Vanilla ground truth: `minecraft-merged … yarn 1.21.11+build.6` InGameHud
  method_1757 bytecode + LVT (x = scaledWidth − width − 3, width over the 15
  sorted non-hidden entries), `SCOREBOARD_ENTRY_COMPARATOR` static init.
- Trace 2026-10-17: `by-class-casesafe/fS_.jsonl` (single `load`),
  `digests/fS_.txt` (empty) — no runtime rewrite calls to compare against.

## Changed files

- `src/main/java/dev/opengrim/modules/utility/NameProtect.java` — full rewrite
  (recovered constants, 1:1 aWS, de-invented aWP/aWQ/aWR/lifecycle, citations).

## Summary

| id | status | parity | fixed |
|---|---|---|---|
| fS | ported (native call sites absent) | ~92% | yes |
