# Transactions (sixtwo.fW) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fW.c` — 4 handlers (class-init `_e27dbabc392562b8b6f7e71e45ebe541`, `aXZ(gL$tk)`, `aYa`, `aYb([B)String`) + 32 continuation blocks, 0 unresolved table targets; 20 jump-table targets missing from `tables.json` (`0x186c340`–`0x186d988` family). Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff234daxxx`/`6ffff2353xxxxx`/`6ffff237cxxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/fW.java` — fields: static seed `zSGdC`, static `String HDivr`, static seed `JHUpj`; natives: class-init, `aXZ(gL$tk)` `@hG`, `aYa(MatchException)`, `aYb(byte[])String`.
- Structural spec: `analysis/specs/modules/fW.md`; registry row: `sixtwo.fW|Transactions|Reads the transactions the server sends you|key=109|bind=-999`; category `gh.KfAlY` = **Client** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny`; pool re-resolution via `analysis/tools/resolve_pool_blob.py` (pool base RVA `0x301ee50`).
- Decrypted constants: **no `sixtwo.fW` entries in `analysis/decrypted/full-dump.jsonl`**.
- Direction proof: `ey.md` proof ① — fW "Reads the transactions the *server sends you*" hooks only `gL$tk` ⇒ `gL$tk` = inbound (S2C).
- Helper APIs read: `fZ.java` (config-root singleton), `ga.java` (state-container interface), `fZ`/`gb` native table builders per `00-framework.md` §4.

### Recoverability caveat

`aXZ`'s body is decrypt → VM dispatch. fW's window is rich (~90 tokens) but contains **zero `net.minecraft` packet-class tokens** — the transaction-packet filter is VM-resident. What IS recoverable: the event wiring, the complete `fZ`/`ga`/`gb` state-container API surface, collection plumbing, and the native byte[]→String helper contract.

## Runtime model

- `fW extends gg`. Constructor `[decompiled fW.java:8-11]`:
  - `long var1 = zSGdC ^ 5459284988997L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)JHUpj, false, gh.KfAlY).aZS(false))` — module id runtime-decrypted (registry: **109**), flag `false`, category **Client**, plus `.aZS(false)` (same unrecovered metadata builder as ev/eB/dW/ey/cX) `[decompiled + registry]`.
- One `@hG` listener: `aXZ(gL$tk)` — the **inbound (S2C) packet event** (proof ① in ey.md), default NORMAL priority, carrying `(Packet, PacketListener)` with getters `bcf()` / `dpn()` `[decompiled gL.java/gL$tk.java + ey.md]`.
- No settings, no `aaj()`/`YO()` overrides `[decompiled]`.
- **Window layout** `POOL[0x153d1,0x353]` (end `0x15724`; per-token offsets, partial):
  - Prefix `[0x153d1,0x153f1)` — tail of fV (Self Destruct) run: `StG`, `LkpRK`, `pmRzS`, `aXW`, `byJrA`, `fVUJp` `[slice]`.
  - **fW's own (stub-matched)**: `sixtwo/fW` `[0x153f1]`, `zSGdC` `[0x153fb]` (seed), `aYa` `[0x15401]` (rethrow name), `HDivr` `[0x15405]` (static String field), `aYb` `[0x15423]` (the `([B)Ljava/lang/String;` native), `JHUpj` `[0x1542d]` (seed 2).
  - **fY helper**: `sixtwo/fY` `[0x1540b]` + `RjaOd` `[0x15415]`, `aYB` `[0x1541b]`, `aYC` `[0x1541f]` — fY has **no decompiled stub** (`payload-named/sixtwo/fY.java` absent); a helper class used by fW's VM (three member names unrecovered) `[slice + absence]`. Further fW/fY-adjacent obfuscated tokens: `wsVmd` `[0x15427]`, `bGcEu` `[0x15433]`, `AxzDu` `[0x15439]`, `aYE` `[0x1543f]`, `aYA` `[0x15443]`, `zJAXQ` `[0x15447]`, `aYD` `[0x1544d]` `[uncertain]`.
  - **fZ config-root cluster** (stub-matched to fZ.java): `sixtwo/fZ` `[0x15451]`, `TkVRj` `[0x1545b]` (fZ's static boolean), `juqnP` `[0x15461]` (fZ's singleton field), `Lsixtwo/fZ;` `[0x15467]`, `aYJ` `[0x15473]` + `(Lsixtwo/ga;Lsixtwo/ga;)Lsixtwo/ga;` `[0x15477]` (fZ's native merge `aYJ(ga,ga)→ga`), `noZXa` `[0x1549b]` + `Ljava/util/concurrent/ConcurrentHashMap;` `[0x154a1]` (fZ's backing map), `aYN` `[0x154f1]`, `aYV` `[0x154f5]` + `(Lsixtwo/fZ;)V` `[0x154f9]`, `aYO` `[0x15508]`, `MImcg` `[0x1550c]` + `Lsixtwo/ga;` `[0x15512]` (fZ's inner `ga` field), `aYP` `[0x1551e]` + `(Lsixtwo/ga;)V` `[0x15522]`, `aYS` `[0x15531]` + `(J)Lsixtwo/ga;` `[0x15535]` = **`ga.a(long)J`-shaped accessor** (long-keyed state lookup), `ojvoM` `[0x1554a]` (fZ's `int[]`), `UpcDR` `[0x15596]` (fZ's long field) `[stub match fZ.java:9-16,31-43]`.
  - **ga/gb protocol surface**: `Lsixtwo/ga;`, `(Lsixtwo/ga;)V`, `(J)Lsixtwo/ga;`, `(Lsixtwo/ga;)Z` `[0x156f6]` (= `ga.b(ga)Z` merge-test), `(II)J` `[0x15631]`, `(I)J` `[0x1564d]`, `(JII[I[J)J` `[0x155ee]`, `aZa` `[0x1565e]` + `(IILjava/util/ArrayList;Ljava/util/ArrayList;I)V` `[0x15662]`, `aZb` `[0x15699]` + `(IIILjava/util/ArrayList;Ljava/util/ArrayList;)V` `[0x1569d]` — the gb native peer-table builders (`aZa`/`aZb` paired-ArrayList codecs per framework doc §4) and bulk int[]/long[] long-math entry points; `(ILjava/lang/Object;)Ljava/lang/Object;` `[0x156ce]` — keyed map/table lookup `[decompiled + framework]`.
  - **Collection plumbing**: `arraycopy` + `(Ljava/lang/Object;ILjava/lang/Object;II)V` `[0x15550]`, `identityHashCode` `[0x15585]`, `Ljava/util/Vector;`/`java/util/Vector` `[0x155ba]`, `Ljava/util/ArrayList;` `[0x15605]` — ring-buffer/accumulation of measurements `[decompiled]`.
  - Unattributed obfuscated tokens: `idqOu` `[0x15544]`, `dxLwD` `[0x1559c]`, `anmuy` `[0x155a2]`, `aYH` `[0x155a8]`, `aYT` `[0x155ac]`, `aYI` `[0x155b0]` (note `aYH(boolean)`/`aYI(ga,ga)` ARE fZ's statics — stub-matched), `aMmNt` `[0x155b4]`, `Oefhm` `[0x155de]`, `EYSuF` `[0x155e4]`, `aYY` `[0x155ea]`, `saIRC` `[0x155f9]`, `YRQDX` `[0x155ff]`, `GyBiN` `[0x1561b]`, `aYZ` `[0x15621]`, `aYK` `[0x15625]`, `aYL` `[0x15629]`, `aYX` `[0x1562d]`, `fypFy` `[0x15637]`, `srzmL` `[0x1563d]`, `NpnYD` `[0x15643]`, `aYW` `[0x15649]`, `kClfx` `[0x15652]`, `DNYiY` `[0x15658]`, `qfDRg` `[0x15693]`, `aZc` `[0x15705]`, `sGkHu` `[0x15709]`, `[Lsixtwo/gd;` `[0x1570f]` (array of the 2-constant toggle/hold enum), `aZp` `[0x1571c]`, `aZo` `[0x15720]` `[uncertain — VM-internal or scattered members]`.
  - **Negative finding**: no `class_2848`/`ConfirmTransactionS2CPacket`, no `class_2596` (Packet), no window-click or transaction token anywhere in the window — the packet type test cannot be named from this slice `[slice absence]`.
- Contract: on every inbound S2C packet, filter for server transaction (window-confirmation/"ping") packets; on each, record timing measurements (send/receive ordering, long math via the `(J…)` gb codecs) into the shared `fZ`/`ga`/`gb` state-container tree (the same binary state store the config root uses), accumulating latency statistics the anticheat-facing features can read; registry wording "Reads the transactions the server sends you" = pure observation, no packet blocking implied by any token `[inferred]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_e27dbabc392562b8b6f7e71e45ebe541()V` | `[18a76c5b0]` | `[0x226,0xd]` | class-init stub |
| `aXZ(Lsixtwo/gL$tk;)V` | `[18a73dad0]` | `[0x153d1,0x353]` | S2C packet listener (whole behavior) |
| `aYa(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18a743250]` | — | identity rethrow |
| `aYb([B)Ljava/lang/String;` | `[18a7432e0]` | none | native byte[]→String |

- **class-init [18a76c5b0]** — decrypts shared clinit slice `POOL[0x226,0xd]`, `ExceptionCheck`, dispatch `UNK_1818712f0[(cVar1=='\0')*8]` at `18a76c68f`. No module behavior `[decompiled]`.
- **`aXZ(Lsixtwo/gL$tk;)V` [18a73dad0]** — the substantive handler. Decrypts `POOL[0x153d1,0x353]`, `ExceptionCheck`, dispatch `UNK_18186a420` at `18a73dbaf`. Virtualized body. Determinable surface (from the window): `fZ` singleton access + `ga`-container reads/writes (`(J)Lsixtwo/ga;` long-keyed lookup, `(Lsixtwo/ga;)Z` merge test, `aYJ` merge), gb paired-ArrayList table builds (`aZa`/`aZb`), `System.arraycopy`/`Vector`/`ArrayList`/`ConcurrentHashMap` accumulation, `identityHashCode` — a timing/latency statistics pipeline over the shared state store `[slice, inferred]`. Unrecovered: the transaction-packet discrimination (no packet token), the exact timing math, what `HDivr` caches, and whether anything is written back to the server (none evidenced) `[uncertain]`.
- **`aYa(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18a743250]** — `return param_3;` identity rethrow `[decompiled]`.
- **`aYb([B)Ljava/lang/String;` [18a7432e0]** — native; the stub decompile has **no blob decrypt** — a single 2-way indirect jump `UNK_18186c020[(param_3==0)*8]` at `18a743380` (null-array check then dispatch). Contract: `fW.aYb(byte[]) → String`, a native decoder (UTF-8/charset conversion or config-blob decode); its caller is VM-resident (the Java stub never calls it) `[decompiled stub + inferred]`.
- Continuation blocks (32): generic `ExceptionCheck` dispatchers; `ExceptionOccurred` + decrypt re-entry; `ThrowNew` (`0x70`); `GetArrayLength` (`0x558`)/`SetByteArrayRegion` (`0x680`)-style array plumbing; `swi(3)` trampolines. No module-specific logic `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `fW.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)JHUpj, false, gh.KfAlY).aZS(false))` `[decompiled fW.java:8-11]`.
- No `full-dump.jsonl` entries for fW (0 indy sites) — no hidden setting names recoverable `[decompiled absence]`.
- Consequence: pure read/observe module with no configuration; all statistics policy is VM-hard-wired `[inferred]`.

## Cross-module interplay

| peer | relationship | evidence |
|---|---|---|
| fV (Self Destruct) | run tail bleeds into fW's window prefix `[0x153d1,0x153f1)` (`StG`/`LkpRK`/`pmRzS`/`aXW`/`byJrA`/`fVUJp`) | `[slice]` |
| fY | adjacent helper class with **no decompiled stub**; `aYB`/`aYC`/`RjaOd` unrecovered | `[0x1540b,0x1541f]` |
| fZ/ga/gb | the state-store pipeline fW writes into — the same tree every other consumer of the config root reads | `[0x15451,…]` |
| fQ (No Protocol Disconnect) | the complementary Client-class module: fW reads S2C transaction traffic, fQ presumably guards the same pipeline against invalid packets; zero shared tokens | `[slice absence]` |
| `.aZS(false)` cohort | fW shares the metadata builder with ev/eB/dW/ey/cX — movement/network-visible set | `[decompiled]` |

## Unrecovered

1. **Module id 109** — registry-sourced; `(int)JHUpj` has no dump verification.
2. **Transaction-packet filter** — the S2C type test has no token (no `class_2848` ConfirmTransactionS2CPacket / window-click family); the VM may compare packet class identity via cached `MethodHandles` rather than pool strings, or filter on the `PacketListener` (`gL$tk.dpn()`).
3. **The latency math** — the `(JII[I[J)J`, `(II)J`, `(I)J` gb codec calls imply long-arithmetic pipelines (min/avg/deviation-style aggregation); every formula is VM-resident (zero numeric literals recoverable).
4. **`HDivr` (static String)** — declared but never read/written in Java; its content (a cached status? a serialized key?) is unrecovered.
5. **`aYb(byte[])` callers and format** — native decode; call sites are VM-resident.
6. **`fY` helper** — no decompile exists; `RjaOd`/`aYB`/`aYC` roles unknown.
7. **`sixtwo/gd` array (`[Lsixtwo/gd;`)** — the toggle/hold enum appearing as an array here is odd for a passive reader; role unrecovered.
8. **Flag `false` + `.aZS(false)`** — both native metadata knobs, meanings unrecovered.
9. **State-tree key layout** — the `ga.b(long)`/`ga.a(long)J` long keys fW writes are VM-chosen; without them a rebuild cannot reproduce the exact binary state layout the other modules expect.

## Shared helpers cited (one line each)

- `fZ` — config-root singleton (`ga` implementor, `ConcurrentHashMap noZXa`, `ga MImcg`, `int[] ojvoM`, `long UpcDR`; natives `aYJ(ga,ga)`, `aYN/aYO/aYP/aYM`, statics `aYH(boolean)`, `aYI(ga,ga)`) — the shared binary state store `[decompiled fZ.java]`.
- `ga` — state-container interface: `b(long)`, `b()[I`, `b(ga)Z`, `a(ga)V`, `a(long)J` `[decompiled ga.java]`.
- `gb` — native peer-table engine: paired-ArrayList builders `aZa`/`aZb`, bulk `int[]/long[]` codecs, per-class key derivation `aYR(long,long,Class)` `[framework doc §4]`.
- `gL`/`gL$tk` — inbound packet event: `bcf()` packet, `dpn()` `PacketListener` getters (direction proof `ey.md` ①).
- `gd` — 2-constant enum (toggle/hold) `[framework doc]`.

---
Confidence: MEDIUM on the event wiring + state-container surface (large window, strong stub matches) and LOW on the packet filter and statistics math (VM-resident, no packet tokens).