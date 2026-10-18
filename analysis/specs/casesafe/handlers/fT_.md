# Resource Pack Bypass (sixtwo.fT) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/fT` ("Resource Pack Bypass" — registry:
"Allows to bypass required server texture pack"), derived from native handler decompiles,
decrypted tokens and CFR sources. Companion to `analysis/specs/modules/fT.md`. Category
`gh.KfAlY` (same constant as fN Skin Protect); constructed with the second
`gf.aZL(name, **true**, category)` argument — the only module in this batch whose base
flag is `true` (likely enabled-by-default; flag semantics per 00-framework.md).

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_fT.c` | PRIMARY: 29 native handler decompiles |
| `analysis/decompiled/payload-named/sixtwo/fT.java` | full constructor: settings, listener wiring, `hF.bdI(this)` registration |
| `analysis/specs/modules/fT.md` + `analysis/decrypted/full-dump.jsonl` | setting display names |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | MC surface mapping (below) |

Handler → pool-blob usage map (POOL base rva `0x301ee40`):

| Blob (off,len) | Handlers |
|---|---|
| `0x15094,0x349` | 16 behavior handlers — fT's own field/method pool |
| `0x857,0x26`, `0x226,0xd` | indy bootstraps / class-init |

MC surface recovered verbatim from the pool window:
- `ResourcePackSendS2CPacket` (class_2720) — inbound packet fT reacts to.
- `ResourcePackStatusC2SPacket` (class_2856) with nested status enum (class_2856$class_2857):
  ctor `(UUID, class_2856$class_2857)V` plus enum constant refs `field_13016 ACCEPTED`
  and `field_13017 SUCCESSFULLY_LOADED` (siblings `DECLINED`, `FAILED_DOWNLOAD`,
  `INVALID_URL`, `DISCARDED`, `FAILED_RELOAD` exist in the enum).
- String machinery: `StringBuilder`, `String.length`, `String.split(String) → String[]`,
  `String.lastIndexOf`, `String.start…` (`startsWith`) — server-list parsing.
- `java.lang.Thread.sleep` + `java.lang.InterruptedException` — delayed spoofed reply.
- Async request builder `sixtwo/qu`: factory `qu.cYC() → qu`, option builders
  `qt.cYw(I) → qt`, `qu.cYF(qt) → qu`, `qu.cYE(Z) → qu`, `qu.cYD(String) → qu`,
  `qu.cYH(Z, String) → qu` — the same async URL-fetch builder family fN (Skin Protect)
  uses via qq/qu.
- Cross-module tokens: `sixtwo/fU` (`bVEnw`, `aXQ`), `sixtwo/gy` (`bbD`, `bbC`, `qvWvL`,
  `ddC`, `YJICs`, `KrrAc`, `aXR`, `aXS`).

## Runtime model

- fT intercepts the server's forced resource pack (`ResourcePackSendS2CPacket`), decides
  per configuration whether to bypass it, and forges a `ResourcePackStatusC2SPacket`
  (`new ResourcePackStatusC2SPacket(id, ACCEPTED)`, later `SUCCESSFULLY_LOADED`) through
  a delayed thread (`sleep` + `InterruptedException` handling) so the server believes the
  pack was applied while the client never loads it.
- Server targeting: the `NKPoi` text setting ("Servers") holds a parsed list —
  `split`/`lastIndexOf`/`startsWith` normalizations (`aXy`/`aXz(String) → String`
  normalizers, `aXB`/`aXx(String, String) → Z` matchers, `aXA(String) → Z` predicate)
  compare the current server address against the configured entries.
- State/infra: `hF.bdI(this)` (same registration call as `oY`), `aXt()` bound via
  `.Vd(...)` to both the group and the text field as an on-change callback (config
  persistence/re-parse).

## Per-handler semantics

Accessors `aXC–aXF` `[18a859aa0–18a85a0a0]`, probes `aXu/aXv/aXw → Z`
`[18a8d47d0, 18a8d49d0, 18a8d8a60]`, string helpers `aXA` `[18a82be20]`,
`aXB` `[18a83f4c0]`, `aXx` `[18a804950]`, `aXy` `[18a80dec0]`, `aXz` `[18a81a240]`,
infra (`aXH–aXO`, class-init `_0de1305b…` `[18a8a2fd0]`, `YO` `[18a8048c0]`,
`aaj` `[18a804830]`, `aXt` `[18a8cfe80]`) are boilerplate. Behavior handlers, all
dispatcher stubs over `POOL[0x15094,0x349]`:

- `aXs(gL$tk)` `[18a8ca280]` — inbound S2C packet event: intercepts
  `ResourcePackSendS2CPacket`.
- `aXG(ResourcePackSendS2CPacket)` `[18a85a2a0]` — dedicated handler for the pack packet
  (native dispatch; builds/spawns the spoofed status response thread).
- `aXr(gM)` `[18a8ca0b0]` — marker tick: lifecycle of the pending spoof reply.
- `aXq(gN)` `[18a8c9ec0]`, `aXp(gR)` `[18a85edf0]` — bare-event hooks (both `extends hH`
  with no fields; likely connect/disconnect or screen events — gR is also consumed by
  `ee.arI(gR)`, dl, L, lO, lR, pp; gN by df, di, dM, fP, om, X. Exact semantics not
  statically decidable).

## Settings → behavior mapping

Constructor chains verbatim (names from `modules/fT.md` decrypted list):

| Field | Widget | Chain | Setting |
|---|---|---|---|
| `UpGbN` | `ct` group | no `.SO()` | mode group (display name not decrypted) |
| `HRntz` | `cu` child | 8-slot sparse name array | **"Enable For All"** option |
| `IVIuI` | `cu` child | `.SY()` default marker | **"Specific Servers"** option — default |
| `NKPoi` | `cy` text | `.Un(<len>).Uo(<placeholder>).Up(<default>)` (all encrypted args) | **"Servers"** text field |

Dependency wiring (exact): `NKPoi.Vf(this.IVIuI::SZ)` — the "Servers" text field is only
visible when "Specific Servers" is selected. `UpGbN.Vd(this::aXt)` and
`NKPoi.Vd(this::aXt)` — on-change callbacks.

Behavior mapping: "Enable For All" bypasses every forced pack; "Specific Servers" (the
default) applies bypass only to addresses matched against the parsed "Servers" text
field (split into entries, normalized, prefix/substring matched by `aXB`/`aXx`).

## Unrecovered / uncertain

- Which status constant is sent first (ACCEPTED vs SUCCESSFULLY_LOADED) and the reply
  delay length live in the VM; only the presence of the enum constants, the `(UUID,
  status)` ctor and `Thread.sleep` are proven.
- `cy` builder arguments (`Un` max length, `Uo` placeholder, `Up` default) are encrypted
  ints/strings — unresolved (the `.Up("")` default seen in other classes suggests an
  empty default).
- Semantics of `gN` and `gR` events (and of `aXu`/`aXv`/`aXw` probes) are native-blocked;
  gR is subscribed by many modules (dl, ee, L, lO, lR, pp), gN by df, di, dM, fP, om, X.
- Roles of `sixtwo/fU` and `sixtwo/gy` token groups (`bVEnw`/`aXQ`, `bbD`/`bbC`/`qvWvL`/
  `ddC`/`YJICs`/`KrrAc`/`aXR`/`aXS`) are unresolved — window may straddle neighbors.
- Whether the pack URL/hash is inspected before spoofing is unknown.
