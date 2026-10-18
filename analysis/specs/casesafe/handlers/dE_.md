# Spammer (sixtwo.dE) — handler-derived behavior spec

Class: `sixtwo/dE` · display name **Spammer** · registry description "Spams
specified messages in chat" · primary key 146, active bind -999 [registry].
Superclass: `gg` (`extends iS`), category constant `gh.qBzlZ` (same category
family as dO Hotbar Restorer — a chat/utility category; display name encrypted in
`gh`, unrecovered). Constructor key constant decodes to 146 ✓.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_dE.c` — **26 native handlers +
   continuation blocks**, 0 unresolved table targets; 8845 lines total.
2. Structural: `analysis/specs/modules/dE.md`, Java shell
   `analysis/decompiled/payload-named/sixtwo/dE.java` (CFR; constructor fully
   decompiled, all behavior `native`).
3. **Pool windows** (global pool at image `+0x18301ee40`):
   - `YO ()V` [18deb1bb0]: `POOL[0x3806,0xbf]` — HUD-widget neighborhood window
     shared with fr/dO (attribution flagged, see fr.md §YO).
   - **Shared behavior core** — `akG, akH, akI, akJ, akK, akL, akM, akN, akO,
     akP, akQ, akR, akS, akT, akU` all decrypt the same `POOL[0x94a0,0x1a6]`
     (422 bytes).
   - `akZ`/`alc` indy bootstraps [18df16620, 18df25870]: `POOL[0x857,0x26]`.
   - `_2e5af…` clinit [18df28580]: `POOL[0x226,0xd]` (infra).
   The core window's head is dD's tail (`APUxf`, `akD`, `sixtwo/gO$tm|bdX` —
   dD's decryptor cache + a `gO$tm` disconnect-event consumer; dE has no
   `gO$tm` listener) and its tail bleeds into dO's head (`aoF/aoG/OMKFJ`,
   `(II)V`, `method_7974`) — attribute per-group.
4. Yarn mapping: `class_419`=`DisconnectedScreen`, `class_437`=`Screen`
   (`bcd ()Lnet/minecraft/class_437;` = `gJ.bcd()` accessor),
   `java/util/concurrent/ThreadLocalRandom` + `current()` + `nextInt` — the
   randomization surface for message pick and anti-spam suffix.
5. Decrypted constants: 105 `alc("m",…)` ints reconstruct **every dE setting
   name** (all 13 labeled settings + `Delay` which the module md misses); 7
   `akZ("p",…)` string constants (default message text, placeholders, unit
   suffixes) are present in the dump as raw args but **not plaintext** — their
   values are unrecovered.

## Runtime model

- **Events** (all `@hG`, registered via `gg.YO()` → `hF.bdM`):
  - `akH(gM)` [18df46c00] — bare marker tick/frame event `gM` (empty subclass of
    the bus base `hH`; the ~100-module per-tick event family) — the spam loop.
  - `akG(gJ)` [18df11a60] — **screen-change event** (`gJ` wraps a `Screen`,
    `bcd()` accessor). Core window pairs `sixtwo/gJ|bcd|()Lnet/minecraft/
    class_437;` with `net/minecraft/class_419` (DisconnectedScreen) and both
    `KKQQG`/`dCTpZ` — so the Disable-On-Leave/Disable-On-Disconnect checks run
    here: when the opened screen is a DisconnectedScreen (or the leave screen),
    disable the module.
  - `akI(gH$ti)` [18df4ad50] — post-tick event (per eC.md: `gH$ti` is the
    post-tick marker dispatched at the tail of the client tick) — candidate
    send-scheduler step. Role vs `akH` unrecovered.
  - `YO()` [18deb1bb0] — listener re-registration hook override.
  - `aaj()` override [18deb18c0] — the `gg` on-toggle reset hook (called by
    `gg.baa()` after the enabled-flag flips, per fr.md runtime model): resets
    the counters `eyNYv/xhFxb/sTtFK` and `yLikI`. Reset body unrecovered.
- **State fields** (typed in Java): `eyNYv` int (message index — sequential
  cursor for non-Randomize mode), `xhFxb` int (tick/split-phase counter),
  `sTtFK` int (second cursor — chunk index or timer accumulator), `yLikI`
  String (remainder of the message being split — in-window token `yLikI`).
- **Send path**: `akQ(String)` [18deccd10] — the chat submit (no packet classes
  imported; goes through the client's send-chat API natively). Split pipeline:
  `akM()` builds the candidate list → `akO(List)` picks one → `akN(List,
  String)` chops it into chunks → chunks sent via `akQ` paced by `ZtOjo`.

## Per-handler semantics

- **`akH (Lsixtwo/gM;)V` — tick loop [18df46c00]**. Core window. Contract: per
  tick while enabled (`baa` — `gg.baa()` is in-window), if the mT-accumulated
  delay ≥ `YQUEn` Delay (step 0.1, min 0.1, max 60, default **1.0**), pick the
  next message (`akO`), split if configured (`akN`), send (`akQ`). If any of
  the first chunk list remains, send remaining chunks every `ZtOjo` Split
  Delay. Exact pacing/state math unrecovered.
- **`akM ()Ljava/util/List;` [18df5e720]** — message-list builder. Core window:
  reads `zDhZI` ("Message Count", step 1, min 1, max 5, default **1**) and the
  `cy` fields `SqFnq..fzDjp` (all `.Un(256)` — 256-char cap). Returns the
  non-empty messages `[Message 1..Message N]`, N = Message Count.
- **`akO (Ljava/util/List;)Ljava/lang/String;` [18deb1ea0]** — message picker.
  Core window: `jNuzP` ("Randomize", default false) selects between
  `ThreadLocalRandom.current().nextInt(list.size())` (in-window) and sequential
  advance via `eyNYv`. Wrap-around handling unrecovered.
- **`akN (Ljava/util/List;Ljava/lang/String;)V` [18df65be0]** — splitter. Core
  window: gated by `AWqkh` ("Auto Split Messages", default false); chunk length
  = `NnmHf` ("Split Length", step 1, min 1, max 256, default **256** — i.e. by
  default no effective split); inter-chunk delay = `ZtOjo` ("Split Delay", step
  0.1, min 0.0, max 10.0, default **1.0**). Writes chunks into the list arg and
  the remainder into `yLikI`.
- **`akP ()Ljava/lang/String;` [18deb8a40]** — anti-spam suffix generator. Core
  window: gated by `odfuN` ("Bypass Anti Spam", default false); suffix length =
  `zJjQa` ("Length", step 1, min 1, max 256, default **16**); alphabet from
  `JoiPl` ("Include Uppercase Characters", default true) — lowercase-only when
  off, both cases when on; randomness via the in-window ThreadLocalRandom
  cluster. Exact alphabet string unrecovered.
- **`akQ (Ljava/lang/String;)V` [18deccd10]** — chat submit (above).
- **`akK ()I` [18df5df60] / `akL ()I` [18df5e340]** — int helpers over the core
  window (cursor/wrap candidates). Unrecovered.
- **`akJ ()V` [18df5da10]** — void worker (send-next-chunk step candidate).
  Unrecovered.
- **Visibility suppliers** (private `Boolean`, in window; wired in ctor
  dE.java:299): `akU`→`FDtPG` (Message 2), `akT`→`gPzpR` (Message 3),
  `akS`→`fgUKI` (Message 4), `akR`→`fzDjp` (Message 5). Almost certainly
  `Message Count >= k` — inference from wiring, not recovered logic.
- **`akG (Lsixtwo/gJ;)V` — screen-change [18df11a60]** — Disable-On-Leave/
  Disable-On-Disconnect check (both default **true**); see runtime model.
  Which screen class implements "leave" (only `class_419` DisconnectedScreen is
  in-window) is unrecovered.
- **Trivial/infra**: `akV` [18dee1600] identity rethrow; `akW ([B)String`
  [18dee1690] decoder stub; `akX (IJ)String` [18df0b000] / `ala (IJ)I`
  [18df190e0] pool decryptors (~530/~520 lines MBA noise); `akY`/`alb` indy
  transitions; `akZ`/`alc` bootstraps; `_2e5af…` clinit [18df28580].

## Settings → behavior mapping

All 16 fields; names decoded from the constructor (module md list confirmed,
plus `Delay` which it omits):

| field | setting | chain (verbatim) | behavior role |
|---|---|---|---|
| `zDhZI` | Message Count | `cC .Vy(1.0).Vw(1.0).Vx(5.0).VA(1.0)` — step 1, min 1, max 5, default 1 | how many of Message 1..5 are active; gates Message 2..5 visibility |
| `SqFnq` | Message 1 | `cy .Un(256).Up(<string>).Uo(<string>)` | message 1 (default text + placeholder strings unrecovered) |
| `FDtPG`/`gPzpR`/`fgUKI`/`fzDjp` | Message 2..5 | `cy .Un(256).Up("").Uo(<string>)` | messages 2..5 (empty defaults) |
| `YQUEn` | Delay | `cC .Vy(0.1).Vw(0.1).Vx(60.0).VA(1.0).Vz(<suffix>)` — step 0.1, min 0.1, max 60, default 1.0 | inter-message period (seconds-scale range; suffix string unrecovered) |
| `KKQQG` | Disable On Leave | `cJ .WE(true)` | disable when the leave screen shows (checked in `akG`) |
| `dCTpZ` | Disable On Disconnect | `cJ .WE(true)` | disable on DisconnectedScreen (`class_419`, in-window) |
| `jNuzP` | Randomize | `cJ .WE(false)` | pick message via ThreadLocalRandom instead of sequential cursor |
| `AWqkh` | Auto Split Messages | `cJ .WE(false)` | enable chunked sending; visibility-gates `NnmHf`, `ZtOjo` |
| `NnmHf` | Split Length | `cC .Vy(1.0).Vw(1.0).Vx(256.0).VA(256.0)` — step 1, min 1, max 256, default 256 | chunk size in chars |
| `ZtOjo` | Split Delay | `cC .Vy(0.1).Vw(0.0).Vx(10.0).VA(1.0)` — step 0.1, min 0.0, max 10.0, default 1.0 | delay between chunks |
| `odfuN` | Bypass Anti Spam | `cJ .WE(false)` | append random suffix to each send; visibility-gates `JoiPl`, `zJjQa` |
| `JoiPl` | Include Uppercase Characters | `cJ .WE(true)` | uppercase in the random-suffix alphabet |
| `zJjQa` | Length | `cC .Vy(1.0).Vw(1.0).Vx(256.0).VA(16.0)` — step 1, min 1, max 256, default 16 | random-suffix length |

## Unrecovered / uncertain

1. **Timing math** — how Delay/Split Delay map onto the mT timer and tick
   counters `xhFxb`/`sTtFK` (seconds vs ticks) is unrecovered; the suffix of
   `YQUEn` (unit label) is an unrecovered string.
2. **`akH` vs `akI` split** — which of the two tick events paces the send; both
   are marker events with no distinguishing evidence.
3. **Sequential cursor wrap** (`eyNYv`) and `akK`/`akL`/`akJ` exact roles.
4. **Default message text / placeholders / suffix strings** — the 7 `akZ`
   string constants are in the dump only as raw encrypted args (no plaintext).
5. **Visibility-supplier conditions** (`akU/akT/akS/akR`) — Message-Count
   comparison is inference.
6. **`akG` "leave" screen test** — only DisconnectedScreen is in-window;
   whether Disable On Leave keys off a different screen class or the same one
   is unrecovered. (Window head tokens `sixtwo/gO$tm|bdX|akD` are dD's, not
   dE's — dE declares no `gO` listener.)
7. **`YO`/`gd` initialization** — HUD-neighborhood window ambiguity as in fr.
