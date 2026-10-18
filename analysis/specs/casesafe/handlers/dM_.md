# Auto Market (sixtwo.dM) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/decompiled/payload-decrypted/sixtwo/dM.java` (1684 lines, CFR, DES literals folded). Companion: `analysis/decompiled/payload-named/sixtwo/dM.java`.
- **Hybrid recoverability**: dM's own class is pure Java (**0 JNI handlers**, coverage-matrix row `dM | Auto Market | 0 | 0 | 0`; `analysis/ghidra/handlers-stitched/sixtwo_dM.c` absent). However, **the entire market rule engine it drives is native-blocked**: `nA…nR`, `nH`, `iz`, `iy`, `iu`, `nK`, `nJ`, `nf`, `nc`, `ny`, `nu`, `nG` declare only `native` methods (see "Per-handler semantics" API-contract section). No image addresses exist for dM itself; citations are java line numbers.
- Registry: `dM | sixtwo.dM | Auto Market | Automatically buys and sells items on market | key=26 | bind=-999` (`analysis/specs/registry.tsv`).
- Structural spec: `analysis/specs/modules/dM.md`.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` (51 `sixtwo.dM` entries, bsm `aoj`, desc `(IJ)I` — ints only; the two `(IJ)J` **long** kernels used by `updateFallbackTimeout` are *not* in the dump).
- Helper classes read: `cI.java` (button setting: `Wx(Runnable)`), `cD.java` (keybind setting), `mA.java` (key enum, `OGQHF` constant, `cmO()` key code), `bz.java` (2412-line market GUI screen: `KE()` static open, `KR()` config, `KB(iy)`), `iu.java` (config store: `rD.dlV().bnM()` → `bmP()` → `Optional<iy>`), `iy.java` (market rule/config: `bon()/bor()` strings, `box/bos/bow/bou` flags, JSON round-trip), `iz.java` (market listing data: `bpi()…bpn()` string lists), `nK.java` (engine context: `cxC(...)` factory bundling all subsystems), `nO/nR/nP/nM/nE/nC/nD/nB/nA.java` (native engine subsystems), `nH.java` (abstract rule step: `cxv()`, `cxc/cwv/cwm/cwp/cwy/cwz/cwq`), `nJ.java` (step result, `cxz()` consumed flag), `gA.java` (input event, `bbP()/bbQ()` key codes), `gL$tk.java` (S2C packet event: packet + `PacketListener`), `gP.java` (bare event), `gM/gN.java` (bare events), `gq.java` (`lC` + `HandledScreen` payload), `jg.java` (`bBx(PlayerEntity)` = player-list latency in ms).

### Recoverability caveat

dM's Java is fully recovered; the engine it calls is not. Per-handler semantics below are exact for routing/lifecycle; the buy/sell decision math lives in the native `n*` classes and is documented as an API contract only, with `nH`'s step chain as the recovery frontier.

## Runtime model

- `dM extends gg` — module id **26** (`gf.aZL(26, false, gh.qBzlZ)`) [decompiled dM.java:124].
- Session state: `boolean QvQJq` (engine running) and `iz iYEBE` (listing snapshot handed to `nK`) [decompiled].
- Engine subsystems, constructed in the ctor and stored for `nK.cxC(...)`: `nO jrTfF` (order book / queue), `nR iDodN` (session timing: `czc()` timer, `cyZ(long)`, `cze()`, `czd()`), `nP kCRjC` (offer filtering: `cyN(List<ny>, long, iy)`), `nM dJbpX` (rule storage: `cxS(iy)` add, `cxT(nu)`), `nE oSkIt`, `nC aARvb`, `nD pDNOf`, `nB gwgQF`, `nA RGDyH` — five rule steps in `OgFsa = List.of(gwgQF, aARvb, pDNOf, RGDyH, oSkIt)` (order matters: `nB` first = S2C packet step, then `nC`, `nD`, `nA`, `nE`) [decompiled dM.java:142-152].
- Timer `mT aAIUc = mT.cpz()` [decompiled].
- Lifecycle: `aaj()` (enable) → `super.aaj(); anD(); rD.dlO().bpW();` where `anD()` resets every subsystem (`jrTfF.cyq(); iDodN.czb(); for nH in OgFsa: cwq();`) [decompiled dM.java:425-431, 763-774].

## Per-handler semantics

| handler | citation | role |
|---|---|---|
| `any(gM)` `@hG` | dM.java:378-407 | if `QvQJq`: `pauseSession()`; then `anD()` (full reset) |
| `anx(gN)` `@hG` | dM.java:472-474 | body is exactly `rD.dlO().bpW();` |
| `anz(gA)` `@hG` | dM.java:477-697 | keybind dispatcher (below) |
| `anA(gL$tk)` `@hG` | dM.java:697-744 | S2C packet event → engine |
| `anB(gP)` `@hG` | dM.java:775-826 | bare event → engine |
| `anw(gq)` `@hG` | dM.java:1128-1200 | screen event → engine |
| `anv(gH$th)` `@H` | dM.java:1201-1290 | tick → engine |
| `aaj()` | dM.java:425 | enable reset (above) |
| `runMarketOpenCommand(iy)` | dM.java:432-443 | `jd.bAn(iy.bon())` — opens the URL/string from the rule config |
| `updateFallbackTimeout()` | dM.java:454-459 | `max(longA, jg.bBx(player) * longB)` (below) |
| `pauseSession()` | dM.java:1593 | sets `QvQJq = false` (called at dM.java:396,1516; interface `nG.pauseSession()`) |
| `anE(iy)` private | dM.java:693-695 | `return nK.cxC(this, iy, jrTfF, iDodN, kCRjC, dJbpX, iYEBE);` — bundles context |
| `anJ()` private | dM.java:826-856 | `rD.dlV().bnM()` → `iu`; `iu.bmP().orElse(null)` → the `iy` market config (null ⇒ nothing runs) |
| `anK(HandledScreen)` private | dM.java:858-1010 | hovered-slot validation: via `AbstractContainerScreenAccessor.getHoveredSlot()`; builds `nf` (item id via `getTranslationKey()`) + `nc`; false when no slot / empty config |
| `anC(iy)` private | dM.java:1011-1070 | add rule: `dJbpX.cxS(iy2)` then iterates `OgFsa` |
| `anI(nK, gP)` private | dM.java:1071-1089 | `for nH in OgFsa: nJ = nH.cxc(nK, gP); if nJ.cxz() return;` — first-consuming-step chain |
| `anG(nK, gq)` private | dM.java:1090-1108 | same chain via `nH.cwp(nK, gq)` |
| `anF(nK)` private | dM.java:1109-1127 | same chain via `nH.cwm(nK)` |
| `anH(nK, gL$tk)` private | dM.java:744-762 | same chain via `nH.cwv(nK, tk)` |
| `anz(gA)` detail | dM.java:477-697 | key code `gA.bbP()` compared to `pdLuI.VP()` ("State Key") → toggle `QvQJq` (start/stop engine); key `gA.bbQ()` compared to `kUpne.VP()` ("Add Rule Key") → only when a container screen is open and `anK(screen)` passes: `anJ()` → `anC(iy)` (add rule from hovered market item) |

- The five-step chain runs identically for every event source; each step gets the same `nK` context and returns an `nJ` result whose `cxz()` flag short-circuits the remaining steps [decompiled dM.java:744-1127].
- All six engine listeners share the same entry guard: `!bab() || !QvQJq` → return; then `iy2 = anJ()` (null → return) [decompiled].

## Engine API contract (native-blocked; names verified, bodies unrecovered)

- `nH` (abstract rule step; each of `nB`,`nC`,`nD`,`nA`,`nE` overrides a distinct subset): `cxv()` boolean gate; `cxc(nK, gP)`, `cwv(nK, gL$tk)`, `cwm(nK)`, `cwp(nK, gq)` → `nJ` results; `cwy/cwz(nK)` side effects; `cwq()` reset [payload-named nH.java:9-16].
- `nK` context: `cxD()` nG host, `cxE()` the `iy` config, `cxF()` nO, `cxG()` nR, `cxH()` nP, `cxI()` nM, `cxJ()` iz; static factory `cxC(...)` [nK.java].
- `nR` session timing: `cyX(ScreenHandler)`, `cyY(HandledScreen<?>)`, `czc()` → `mT`, `cyZ(long)` deadline check, `cze()` int, `czd()` boolean, `cza()/czb()` reset.
- `nP` offers: `cyN(List<ny>, long, iy)` → filtered `List<ny>`; `cyO(ny, iy)` → `nf`.
- `nO` orders: `cyB(List<ny>)`, `cyE(ny)`, `cyD(nu)`, `cyu()` → nu, `cyx()` boolean, `cyH(boolean)`, `cyI(boolean)`, `cyq()` reset.
- `nM` rules: `cxS(iy)` add, `cxT(nu)` update.
- `iy` config flags: `box()`, `bos()`, `bow()`, `bou()` booleans; `bon()`, `bor()` strings; JSON via `fromJson/toJson` — exact flag meanings unrecovered.
- `iu` store: `rD.dlV().bnM()` → `bmP()` → `Optional<iy>`; also string lists `bmW/bne/bnf/bmV/bmX/bna`.

## Settings → behavior mapping

Names from folded literals [decompiled dM.java:126-160]:

| field | wrapper | name | chain |
|---|---|---|---|
| pdLuI | cD | `State Key` (83,116,97,116,101,32,75,101,121) | `.VO((int)-999)` (unbound) |
| kUpne | cD | `Add Rule Key` | `.VO(mA.OGQHF.cmO())` (default = `mA.OGQHF`'s key code; the enum constant's code is in `mA`'s static init, not visible) |
| BbKhB | cI | `Edit Market` | `.Wx(bz::KE)` — button that opens the `bz` market editor screen |

- No numeric sliders, no mode settings. Behavior gating is by `QvQJq` (State Key toggles it), not by any checkbox [decompiled].

## Unrecovered / uncertain

1. **Entire buy/sell decision math** — inside native `nA…nR`/`nH` step bodies (j2cc VM). The chain structure, context bundle, and `nJ.cxz()` short-circuit are verified; the pricing logic, offer ranking (`nP.cyN` filter predicate), and click sequencing are not [virtualized].
2. **`updateFallbackTimeout()` long constants** — `aom("q",29691,…)` and `aom("q",17688,…)` (form `max(min, latency_ms * multiplier)`) are `(IJ)J` DES kernels absent from `full-dump.jsonl`; the literal millisecond values are unrecovered [decompiled shape, values unknown].
3. **`gM` / `gN` / `gP` event identities** — bare `hH` subclasses with no payload; `any(gM)` resets the session and `anx(gN)` only calls `rD.dlO().bpW()`; which client moments these are (disconnect? world join? screen close?) is not visible [uncertain].
4. **`iYEBE` (iz) population** — the field is read by `nK.cxC` but its writer was not located in dM's Java; presumably set by an engine step via `nK` [uncertain].
5. `mA.OGQHF` default key code, `jd.bAn(String)` exact behavior (link open vs. chat), `rD.dlO()/dlV()` manager identities [uncertain].
6. The `false` flag in `gf.aZL(26,false,gh.qBzlZ)` [uncertain].