# Middle Click Friend (sixtwo.fU) — handler-derived behavior spec

Class: `sixtwo/fU` · display name **Middle Click Friend** · registry
description "Adds friend when you click scroll on him" · primary key 107
(registry; in-code id is native-encrypted — see Unrecovered), active bind -999
(unbound) [`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`fU | Middle Click Friend | 7 | 7 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fU.c` — **7 native handlers** +
   70 continuation blocks; the single behavior handler `aXP` decrypts
   `POOL[0x15283,0x34e]`. Citations are image addresses.
2. Java skeleton: `payload-named/sixtwo/fU.java` (no decrypted variant —
   zero indy int constants; only two `String[]` statics).
3. Event payload `gy` (`extends hH`): `mA MtWid` (enum carrier), `int JQvRt`,
   `int rolKx`, doubles `UkPKN/JqQNi/AxWTh/ZwaoY`; getters `bbC()` (mA),
   `bbD()` (int), `bbE()` (int), `bbF()/bbG()/bbH()/bbI()` (doubles) — a
   click/pick interaction event with entity identity + position quadruple
   `[decompiled gy.java]`.
4. Notification builder `qu` (static factory `cYC()`, fluent
   `cYF(qt)` type / `cYE(Z)` / `cYG(String)` / `cYH(Z,String)` / `cYD(Z)`,
   send `cYI()`, queries `cYM/cYN/cYQ`, `cYJ()→qt`) and message-type enum
   `qt` (4 constants, lookup `cYw(int)`). `qu` includes `Optional<Path>` and
   static `AtomicBoolean cmARD` — a general UI notification/dialog primitive
   (also imported by `fS` Name Protect) `[decompiled qu.java/qt.java]`.
5. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/fU.md`.

## Runtime model

- `super(gf.aZL((int)pmRzS, false, gh.KfAlY))` — id encrypted via static long
  `pmRzS`; registry fixes it at **107**; category `gh.KfAlY`
  `[decompiled fU.java:19 + registry]`.
- **No settings**; state = two static `String[]` arrays `KrrAc`/`qvWvL` and a
  `Map YJICs` (indy cache) — the `String[]` pair is the persistent friends
  storage shape (friends list + working copy or per-server split)
  `[decompiled, inferred]`.
- One `@hG` listener `aXP(gy)` — the middle-click/pick event
  `[decompiled]`.
- fU's own symbol run (from `uaKgc … sixtwo/fU` through the `qu/qt` cluster
  to `pmRzS`):
  - `sixtwo/gy`, `bbD` (int getter), `bbC` (mA getter) — reads entity
    identity from the event `[slice]`.
  - `sixtwo/qu` + `cYC ()Lsixtwo/qu;` (factory), `sixtwo/qt` + `cYw (I)
    Lsixtwo/qt;` (type by ordinal), `cYF (Lsixtwo/qt;)Lsixtwo/qu;` (set type),
    `cYE (Z)Lsixtwo/qu;`, `cYD`, `cYG (Ljava/lang/String;)Lsixtwo/qu;`,
    `cYH (ZLjava/lang/String;)Lsixtwo/qu;`, `cYI` (send) — a notification is
    constructed and shown `[slice]`.
  - fU fields/statics `bVEnw/qvWvL/ddC?/YJICs/KrrAc/aXR/aXS/aXQ` — `ddC` and
    `aXW` are NOT fU members (fV Self Destruct's run starts here)
    `[window straddle, stub-matched]`.
- Neighbors (NOT fU): from `hGStG | LkpRK | aXW | byJrA | fVUJp | sixtwo/fV`
  onward — fV Self Destruct's settings and the `fZ` config-root machinery
  (`ga` state containers, `ConcurrentHashMap`, `arraycopy`,
  `identityHashCode`) `[window straddle]`.
- Technique (registry): on middle-click (pick), if the event's target is a
  player (identity check via `bbC`/`bbD` — exact test virtualized), add the
  player's name to the friends list (static `String[]`s) and show a
  notification (`qu` builder with a `qt` success/info type); clicking an
  existing friend presumably removes them (toggle) — the toggle is plausible
  from the two `String[]`s but unrecovered `[registry + slice, inferred]`.
- Consumers: `dm` (Friend Indicator, id 137) marks friends visually — it reads
  the same list (`fU` statics are package-visible obfuscation statics)
  `[registry, inferred]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_9ca8788c776fc65a0475168085a13724()V` | `[18a7f5280]` | native clinit stub (`POOL[0x226,0xd]`) |
| `aXP(Lsixtwo/gy;)V` | `[18a7a1bc0]` | the entire behavior: middle-click listener (virtualized) |
| `aXQ(MatchException)MatchException` | `[18a7c0690]` | identity rethrow (`return param_3;`) |
| `aXR([B)Ljava/lang/String;` | `[18a7c0720]` | string decryptor (notification texts) |
| `aXS(IJ)Ljava/lang/String;` | `[18a7eab60]` | **string-constant kernel** (off,key → String; note the String return — fU's literals are strings, not ints) |
| `aXT(Lookup;MutableCallSite;String;[Object;)Ljava/lang/Object;` | `[18a7f18d0]` | MutableCallSite re-bootstrap |
| `aXU(Lookup;String;MethodType;)CallSite` | `[18a7f27c0]` | indy bootstrap (`POOL[0x857,0x26]`) |

- **`aXP(gy)` [18a7a1bc0]** — decrypts `POOL[0x15283,0x34e]`,
  `ExceptionCheck` (`+0x720`), VM dispatch at `18a7a1cb1`. Recovered shape:
  read target identity (`bbC`/`bbD`), update the friends arrays, build +
  send a `qu` notification (`cYC().cYF(qt.cYw(n)).…cYG(text)…cYI()`),
  optionally with a boolean + string via `cYH`. All arithmetic/text content
  is virtualized — the notification strings come from `aXR`/`aXS`
  decryption `[slice, inferred]`.
- **`aXS(IJ)String` [18a7eab60]** — string decrypt kernel: same
  register-mixing family as the `I)I` kernels, returning `String`
  (the corpus tail shows the `NewByteArray`/`GetArrayLength` JNI path used by
  the string construction) `[decompiled machinery]`.

## Settings → behavior

- None — zero-setting module; behavior constants (notification text, friend
  list storage format) are VM-internal `[decompiled, negative evidence]`.
- Registry: id 107, bind -999, description "Adds friend when you click scroll
  on him" `[registry]`.

## Unrecovered

1. Friend-add vs. friend-remove logic (single middle click? repeat click?
   sneak+click?) — the `gy`→name mapping and the list mutation are
   virtualized.
2. Persistence of the friends list (the `String[]`s' serialization — fZ config
   root tokens in the window are neighbor-attributed; any fU→fZ link is
   unproven).
3. The `qt` ordinal used for the notification (success vs. info vs. error) —
   `cYw(int)` argument is VM-side.
4. The native-encrypted module id (`pmRzS`) — no `sixtwo.fU` rows in
   `decrypted/full-dump.jsonl`; id taken from the registry only.
