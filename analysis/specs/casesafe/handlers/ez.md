# No Fall (sixtwo.ez) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_ez.c` — 3 handlers (class-init `_68031e82d871d8a4d8ec01dfaef42785`, `avk(gL$tj)`, `avl`) + 22 continuation blocks, 0 unresolved table targets. Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff491xxxxx`/`6ffff491a470`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/ez.java` — static seeds `LWMHR`/`EAkuj`; natives: class-init, `avk(gL$tj)` `@hG`, `avl(MatchException)`.
- Structural spec: `analysis/specs/modules/ez.md`; registry row: `sixtwo.ez|No Fall|Attempts to prevent you from taking fall damage|key=36|bind=-999`; category `gh.xgeEn` = **Movement** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny`; pool re-resolution via `analysis/tools/resolve_pool_blob.py` (pool base RVA `0x301ee50`).
- Decrypted constants: **no `sixtwo.ez` entries in `analysis/decrypted/full-dump.jsonl`**.
- Direction proof for `gL$tj`: `ey.md` (Blink) — three independent proofs that `gL$tk` = inbound (S2C) and `gL$tj` = outbound (C2S); ez hooking only `gL$tj` + referencing the `ServerboundMovePlayerPacketAccessor` is proof ② there.
- Neighbor runs: `sixtwo/eA` follows in the same window (eA.md documents the shared window `0xdd00…0xdfc9` covering ez/eA/eB).

### Recoverability caveat

`avk`'s body is decrypt → VM dispatch. ez's own run is 6 tokens (packet accessor + setter). The decision logic (when to spoof `onGround`) is fully VM-resident — zero float literals survive; the damage-threshold arithmetic is unrecovered.

## Runtime model

- `ez extends gg`. Constructor `[decompiled ez.java:8-11]`:
  - `long var1 = LWMHR ^ 94733397931267L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)EAkuj, false, gh.xgeEn))` — module id runtime-decrypted (registry: **36**), flag `false`, category **Movement** `[decompiled + registry]`.
- One `@hG` listener: `avk(gL$tj)` — the **outbound (C2S) packet event**, fired for every packet the client sends, carrying `(Packet, ClientConnection)` with getters `bcf()` (packet) and `dpm()` (connection) `[decompiled gL.java/gL$tj.java + ey.md proof]`.
- No settings, no `aaj()`/`YO()` overrides `[decompiled]`.
- **Own pool run** `POOL[0xdd00,0x7a)` per eA.md's boundary analysis (window `[0xdd00,0x26d]`; the slice over-covers eA and eB):
  - `sixtwo/ez` `[0xdd00…]`, `LWMHR` (seed), `avl` (rethrow name), `mixin/accessors/ServerboundMovePlayerPacketAccessor`, `setOnGround`, `EAkuj` (seed 2).
  - `mixin/accessors/ServerboundMovePlayerPacketAccessor#setOnGround` — a generated mixin accessor writing the `onGround` boolean of the client's movement packets (`ServerboundMovePlayerPacket` and its `PositionAndOnGround`/`Full`/`LookAndOnGround` subtypes; `class_2828$class_2829/2830/2831` tokens appear in eB's adjacent run).
  - Window tail (eA's run, `0xdd7a–0xde1a`, per eA.md): `field_6250/field_6212` (forward/sidewaysSpeed), `method_5724 (FLnet/minecraft/class_243;)V` (`Entity.updateVelocity`), `sixtwo/eC`, `uYjwj`, etc. — Strafe's surface, not ez's `[decompiled stub match]`.
  - Window head `[0xdd00,0xdd00)` — none; the window starts exactly at ez's class token region (compare eA's −0x20 model: ez's window here begins at the run start; the head tokens `_12274 | DjTne | MkRVk | SDMAX | avh | XF` in the stitched annotation belong to **ey (Blink)** — stub-matched `DjTne`/`MkRVk`/`SDMAX` are ey's statics — a cross-boundary scatter into ez's window prefix) `[slice + stub match]`.
- Contract (classic No Fall shape): on every outbound movement packet, rewrite the `onGround` flag via the accessor — setting `onGround = true` while falling (and/or landing-frame alignment) so the server never credits fall distance, preventing fall damage. Registry wording "Attempts to prevent" acknowledges it is best-effort `[slice + registry, inferred]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_68031e82d871d8a4d8ec01dfaef42785()V` | `[18cd0a470]` | `[0x226,0xd]` | class-init stub |
| `avk(Lsixtwo/gL$tj;)V` | `[18cd02f60]` | `[0xdd00,0x26d]` | outbound packet listener (whole behavior) |
| `avl(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18cd0a3e0]` | — | identity rethrow |

- **class-init [18cd0a470]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck` (vtable `0x720`), dispatch `UNK_1820770c8[(cVar1=='\0')*8]` at `18cd0a54f`. No module behavior `[decompiled]`.
- **`avk(Lsixtwo/gL$tj;)V` [18cd02f60]** — decrypts `POOL[0xdd00,0x26d]`, `ExceptionCheck`, dispatch `UNK_182074c90` at `18cd0302d`. Virtualized body. Determinable: reads the outgoing packet via `gL.bcf()` (the `gL`/`gL$tj` plumbing is inherited, no token needed), type-filters `ServerboundMovePlayerPacket` subtypes, and rewrites `onGround` via the accessor `[slice, inferred]`. Unrecovered: the packet-type discrimination set (`PositionAndOnGround` vs `Full` vs `LookAndOnGround` — the subtype ctor tokens in the window belong to eB's run), the spoofing condition (fall height, velocity, ground proximity), whether packets are additionally cancelled (`ClientConnection.send` gate has no token), and any landing "ground snap" arithmetic `[uncertain]`.
- **`avl(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18cd0a3e0]** — `return param_3;` identity rethrow `[decompiled]`.
- Continuation blocks (22): generic `ExceptionCheck` 2-way dispatchers; `FUN_190ddce00`/`FUN_190dd72e0` decrypt-reentry variants; `swi(3)` trampolines; bare `return`. No module-specific logic `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `ez.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)EAkuj, false, gh.xgeEn))` `[decompiled ez.java:8-11]`.
- No `full-dump.jsonl` entries for ez (0 indy sites) — no hidden setting names recoverable as ints `[decompiled absence]`.
- Consequence: a single hard-wired spoofing strategy with no user configuration; Grim 4.4's rebuild must pick a fixed mode (document divergence in PARITY.md) `[inferred]`.

## Cross-module interplay

| peer | relationship | evidence |
|---|---|---|
| eA (Strafe) | eA's run begins at `[0xdd7a]`, immediately after ez's 6-token run; eA's `field_6250/field_6212` movement tokens live in the shared window | `[slice]` |
| eB (Flight) | follows eA; its `class_2828` subtype ctor tokens (`class_2829/2830/2831`) sit in the same window `[0xdd00,0x26d]` | `[slice]` |
| ey (Blink) | window-head statics `DjTne`/`MkRVk`/`SDMAX`/`avh`/`XF` are stub-matched to ey, not ez — scatter into ez's prefix, not ez behavior | `[stub match]` |
| same-packet race | ez (C2S spoof) and ey (C2S hold) both listen on `gL$tj`; when both are enabled the queue-vs-rewrite order is bus ordering, not native-visible | `[inferred]` |

- Both ez and eB mutate `ServerboundMovePlayerPacket` state: ez via the mixin accessor `setOnGround`, eB via the packet classes directly. A faithful rebuild must define one canonical packet-rewrite hook.
- Grim 4.4's own anticheat treats forced `onGround=true` flight packets as a flag; the module's registry wording "Attempts to prevent" matches the client shipping this as best-effort against servers, not a guarantee.

## Unrecovered

1. **Module id 36** — registry-sourced; `(int)EAkuj` has no dump verification.
2. **Spoof condition and any damage math** — when `onGround` is forced true vs left alone; all float thresholds are VM-resident (the register-mixing kernels in the continuations contain only opaque constants).
3. **Packet subtype handling** — which of the three `ServerboundMovePlayerPacket` variants are rewritten; no subtype tokens in ez's own run.
4. **Packet cancellation/holding** — whether `avk` can cancel the send (like ey's Blink does via `BeDJP`); no Queue/cancel tokens in ez's run.
5. **`onGround` field id** — only the accessor name is attested.
6. **Flag `false` in `gf.aZL(36, false, gh.xgeEn)`** — meaning unrecovered.
7. **Fall-distance reset** — vanilla tracks `fallDistance` client-side too; whether ez also zeroes the local entity's fall-distance field (no `field_XXXX` token for it exists in the run) or only spoofs the wire flag is unrecovered.
8. **Seed arithmetic** — `LWMHR ^ 94733397931267L` feeds the id-decrypt key schedule; the schedule itself is VM-resident and undumped.

## Shared helpers cited

- `gg`/`iS` — module base; `hF` bus registration on enable via base `aaj()`.
- `gL`/`gL$tj` — outbound packet event: `bcf()` packet getter, `dpm()` `ClientConnection` getter (direction proof in `ey.md`).
- `mixin/accessors/ServerboundMovePlayerPacketAccessor` — generated accessor (`setOnGround`).
- `gf`/`gh` — metadata + category enum (`xgeEn` = Movement).
- Neighbors in window: eA (Strafe), eB (Flight) — their token runs are documented in `handlers/eA.md`.

---
Confidence: MEDIUM-HIGH on the API contract (exact accessor, exact event direction, stub-matched seeds) and LOW on the decision logic (fully VM-resident, zero numeric evidence).