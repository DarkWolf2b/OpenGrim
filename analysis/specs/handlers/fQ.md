# No Protocol Disconnect (sixtwo.fQ) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fQ.c` — **1 handler** (class-init `_e4e61cf1cd02b1b2e46e5f297e1a41ef`) + 12 continuation blocks, 0 unresolved table targets; 10 jump-table targets missing from `tables.json` (`0x18c9238`–`0x18c92d8` family). Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff2544axxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/fQ.java` — static seeds `YXdPC`/`AXCPX`; the class declares **exactly one native** (the class-init) and **no `@hG` listeners, no `aaj()`/`YO()` overrides, no settings**.
- Structural spec: `analysis/specs/modules/fQ.md`; registry row: `sixtwo.fQ|No Protocol Disconnect|Prevents disconnections caused by invalid server packets|key=160|bind=-999`; category `gh.KfAlY` = **Client** (`analysis/port/reports/batch6.md`).
- Pool re-resolution: `analysis/tools/resolve_pool_blob.py` (pool base RVA `0x301ee50`). Decrypted constants: **no `sixtwo.fQ` entries in `analysis/decrypted/full-dump.jsonl`**.

### Recoverability caveat (read first)

`fQ` is **nearly fully virtualized with zero recoverable surface**: the only slice any handler decrypts is the shared clinit slice `POOL[0x226,0xd]`. There is no `sixtwo/fQ` token run, no MC class token, no packet token, no setting wrapper. Everything below beyond the stub facts is contract inference. This spec therefore states the API contract and the open questions; nothing is guessed.

## Runtime model

- `fQ extends gg`. Constructor `[decompiled fQ.java:7-10]`:
  - `long var1 = YXdPC ^ 88599291336626L` — key-mix seed (`gb.aYR` chain) `[decompiled]`.
  - `super(gf.aZL((int)AXCPX, true, gh.KfAlY))` — module id runtime-decrypted (registry: **160**), second ctor flag is **`true`** — notable: all 11 sibling classes in this batch pass `false`; among the wider payload `true` is rare (see Unrecovered), category **Client** `[decompiled + registry]`.
- No settings, no `@hG` listeners, no lifecycle overrides — the Java stub has no behavior surface at all `[decompiled]`.
- **Pool surface: none.** The single decrypt is `POOL[0x226,0xd]` (`"ang/String;"`, `"<"` — tails of `java/lang/String;`/`<init>`, the `Loader.doInit` path). No `sixtwo/fQ` class-name token is reachable from any fQ slice, and no packet classes (`class_2596`, `ClientConnection`, `class_2879`-family), no exception types, no network handler tokens appear `[slice absence]`.
- Contract (registry): "Prevents disconnections caused by invalid server packets". In vanilla, a malformed/invalid packet throws during decode/handle and `ClientConnection` disconnects the channel. The module's only sane implementation is an exception-swallowing/cancel hook on the packet pipeline. Given the event vocabulary of the payload (`gL$tk` receive / `gL$tj` send), fQ most plausibly registers a receive-side listener from the native layer (the VM can call `hF.bdI`-family registration without a Java-visible `@hG`), or installs a channel-level exception gate. **No token evidence exists for either** `[inferred, uncertain]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_e4e61cf1cd02b1b2e46e5f297e1a41ef()V` | `[18a934a80]` | `[0x226,0xd]` | class-init stub (only declared native) |

- **class-init [18a934a80]** — decrypts the shared clinit slice `POOL[0x226,0xd]`, calls `JNI->ExceptionCheck` (vtable `0x720`), tail-dispatches through `UNK_1818c8490[(cVar1=='\0')*8]` at `18a934b5f`. No module behavior statically visible. Whatever fQ does (listener registration, hook install) is inside this VM block or in the continuations' shared plumbing `[decompiled]`.
- **Continuation blocks (12)** — all generic:
  - `FUN_18a934b62` [rva 0xa934b62] — `FUN_190de3220()` + `ExceptionCheck` + 2-way `halt_baddata` dispatch.
  - `FUN_18a936700` [0xa936700] — `JNI->CallStaticObjectMethodA` (`0x3a0`) + `ExceptionCheck`: the invokedynamic bootstrap call shape (string/constant decrypt through a foreign BSM — fQ declares none itself, so its id/name constants decrypt through a shared bootstrap like `iY`-family plumbing) `[decompiled]`.
  - Remaining blocks — `ExceptionCheck` dispatchers, `ThrowNew` (`0x70`), decrypt re-entry (`FUN_190dd72e0`), `swi(3)` trampolines `[decompiled]`.
  - None of the blocks touches packet/network state (`ClientConnection`, `Packet`, channel fields) — the packet-level behavior has no static footprint `[slice absence]`.

## Settings → behavior mapping

- **Zero settings constructed.** `fQ.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)AXCPX, true, gh.KfAlY))` `[decompiled fQ.java:7-10]`.
- No `full-dump.jsonl` entries for fQ (0 indy sites) — no hidden setting names recoverable `[decompiled absence]`.
- Consequence: fixed hard-wired behavior; any packet-allowlist/blacklist would be VM-resident `[inferred]`.

## Cross-module interplay

| peer | relationship | evidence |
|---|---|---|
| fV (Self Destruct) | registry-adjacent Client module; fV's run tail bleeds into fW's window (fV ≠ fQ's neighbor natively — fQ's window is the isolated clinit slice) | `[slice]` |
| fW (Transactions) | the other `KfAlY` Client-class module assigned here; fW *observes* the inbound pipeline fQ presumably *guards* — no shared tokens between the two classes | `[slice absence]` |
| ey (Blink) | ey holds outbound packets in a `Queue` (`BeDJP`); fQ's domain is the receive side — complementary halves of a network-failure strategy | `[ey.md]` |
| `gL$tk` consumers | all S2C-listening modules (fW, ez's mirror traffic, etc.) would benefit from fQ's exception gate; fQ's design implies a bus-wide or channel-level mechanism rather than per-module interception | `[inferred]` |

- Category `gh.KfAlY` = Client: these modules operate on the client/network lifecycle itself rather than gameplay, consistent with a connection-resilience feature.
- Because fQ declares no Java-visible listener, a faithful rebuild should treat it as an infrastructure concern (e.g. a `PacketDecoder`/`ClientConnection` exception handler in the mixin layer) and record the design decision in PARITY.md rather than emulating an unrecoverable VM body.

## Unrecovered (complete list — this module is a contract-only spec)

1. **Module id 160** — registry-sourced; `(int)AXCPX` has no dump verification.
2. **The hook point** — no event/hook tokens: cannot determine whether fQ listens on `gL$tk` (S2C receive), wraps `ClientConnection`/`PacketDecoder` exception paths, or replaces the channel's exception handler.
3. **The "invalid packet" predicate** — which failures are swallowed (decode exceptions, unknown packet ids, handle-time `Throwables`) vs left fatal: unrecovered.
4. **Whether disconnections are prevented by exception-clearing (JNI `ExceptionClear`-style at the mixin layer), packet substitution, or connection keep-alive injection** — no tokens; three plausible designs, zero evidence.
5. **The `true` flag in `gf.aZL(160, true, gh.KfAlY)`** — the only assigned module with `true`; meaning unrecovered (candidates: enabled-by-default, network-required, or a "dangerous module" marker — all unproven).
6. **Listener registration path** — no `@hG` method and no `aaj/YO` override; if fQ hooks anything, registration must originate inside the VM clinit block or from native loader code.
7. **Toggle semantics** — with no listeners and no settings, how the module's enabled state gates its behavior (or whether it is always-on once constructed) is unrecovered; the base-class toggle plumbing exists but fQ adds none.
8. **Seed arithmetic** — `YXdPC ^ 88599291336626L` feeds the `gb.aYR` clinit key derivation; the derived schedule is VM-resident.

## Shared helpers cited (one line each)

- `gg`/`iS` — module base (id/category/bind/toggle); `hF` event bus would deliver any VM-registered listener.
- `gf` — metadata record (`aZL(int,boolean,gh)`; accessors all native).
- `gh` — category enum (`KfAlY` = Client).
- `gb`/`ga` — native state-container peer and `gb.aYR` clinit key derivation.
- `gL`/`gL$tk`/`gL$tj` — packet events (directions proven in `ey.md`); the natural host events for this module's domain, though no token links fQ to them.
- `hF` — concurrent event bus (`bdI`/`bdM`); would deliver any listener the VM registers invisibly.

## Rebuild guidance (contract-only)

1. Port as a design-level requirement: install an exception-swallowing guard on the client packet decode/handle path (mixin on `PacketDecoder`/`ClientConnection` exception propagation), guarded by the module's enable state.
2. Log every swallowed packet (type id + exception) so divergence from the native black box is observable in testing.
3. Keep it out of the per-module listener pipeline unless a future decrypt dump reveals the true hook; this mirrors the native evidence (no Java-visible listener exists).

---
Confidence: LOW everywhere except the stub facts and the zero-surface finding (both HIGH). The module is effectively a black box at the API level; the rebuild should treat "prevent invalid-packet disconnects" as a design-level requirement (PARITY.md) rather than a port.