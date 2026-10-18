# fO — Discord Activity (module id 104)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/fO.md`; registry row
  `sixtwo.fO|Discord Activity|Changes your in game activity|key=104|bind=-999` (primary
  key 104, active bind −999 = unbound), category `gh.KfAlY` (Client).
- Java shell: **only** `analysis/decompiled/payload-named/sixtwo/fO.java` (48 lines,
  Vineflower) exists — there is **no decrypted-literal variant** for this class, so the
  constructor literals were NOT recovered (the module id `(int)JLbAF` and the boot flag
  are visible only through the named shell).
- Native: `analysis/ghidra/handlers-full/sixtwo_fO.c` — 6 handler stubs, all
  decrypt-then-VM-dispatch. Fully native-backed.
- Pool window: POOL base RVA `0x301ee40`, image
  `analysis/ghidra/dumps/jna-decrypted-v2.dll`. Yarn map:
  `analysis/jars/yarn-1.21.11+build.6.tiny`. Helper classes read directly:
  `qn.java`, `qq.java`, `ry.java` (payload-named/sixtwo/).

Handler → pool-blob usage map:

| Blob (off,len) | Handlers | Addresses |
|---|---|---|
| `0x14ccb,0x33c` | `YO()` | `[0x18aa91760]` |
| `0x14cbd,0x33b` | `aWj()` (same region as YO's, offset by 8) | `[0x18aa918e0]` |
| `0x3806,0xbf` | `aaj()` (shared framework: `gg.baf→gc.aZg→gd`, `mG.cnP(FFF)`) | `[0x18aa91470]` |
| `0x226,0xd` | `_f119d8f6a1bb3ad0f1fb0c30292c429a` (class-init) | `[0x18aadc580]` |
| `0x857,0x26` | `aWo` (indy bootstrap) | `[0x18aad9ac0]` |

Verbatim fO-exclusive token run of `0x14ccb,0x33c` / `0x14cbd,0x33b`:
`sixtwo/fO aWj sixtwo/qq cXK RaFvq zATNU cXG (JLjava/lang/Runnable;)Z aWk BkQJI
Lsixtwo/qn; lEAyT sixtwo/ry dkB ()Lsixtwo/ry; dkI vWbJl sixtwo/qn cXu cXv cXq
java/time/Instant now getEpochSecond cXs cXJ (Lsixtwo/qn;)V ofIip aWm aWl` — then the
window continues into the **neighbor fP section** (`sixtwo/fP aWq aWp … class_2678
GameJoinS2CPacket class_12079$class_10726 method_60656 Identifier.ofVanilla field_41123
PlayerSkinType.WIDE method_36950 CommonPingS2CPacket.getParameter field_41122 SLIM
field_1705 class_329 InGameHud method_1743 getChatHud class_338 ChatHud method_1812
addMessage … method_1558 getCurrentServerEntry class_642 ServerInfo …`). Per attribution:
those fP tokens are fP's, **except `JLbAF`** which is fO's own id-decrypt seed static
(declared fO.java:17, consumed at fO.java:22) interleaved into the region.

Helper contracts (direct Java evidence):
- `qn implements rp` (toJson/fromJson DTO) [qn.java:11]; setters: `cXs(long)` [qn.java:37],
  `cXt(long)` [qn.java:51] (timestamps), `cXq(String,String)` [qn.java:39],
  `cXr(String,String)` [qn.java:55] (string pairs), `cXu(String)` [qn.java:57],
  `cXv(String)` [qn.java:59] (single strings); statics `cXx()`/`cXw(Z)`/`cXy()`.
- `qq` scheduler: `cXJ(qn)` publish [qq.java:31], `cXG(long, Runnable)Z` delayed schedule
  [qq.java:37], `cXI()` [qq.java:39], `cXK()` [qq.java:41], `cXN()I` [qq.java:45].
- `ry` transport (real CFR Java): fields `Gson DmrIF`, `HttpClient QsAWV`,
  `ScheduledExecutorService bVgUI` [ry.java:36-38]; ctor builds Gson with Instant
  adapters, single-thread scheduled executor, and an `HttpClient` with a DES-encrypted
  connect timeout and `Redirect.ALWAYS` [ry.java:58-60]; `dkI()I` [ry.java:68],
  `dkJ()String` [ry.java:70], `dkP()Gson` [ry.java:80], `dkQ()HttpClient` [ry.java:96],
  singleton `dkB()ry` [ry.java:132].

## Runtime model

- `gf.aZL((int)JLbAF, true, gh.KfAlY)` [fO.java:22] — registered **enabled at boot**
  (`true` — the only one of these 8 modules booting enabled), category `KfAlY` (Client);
  the module id is runtime-decrypted from static `long JLbAF` (registry row says 104).
- Registry behavior: **"Changes your in game activity"** — publishes the player's game
  activity (rich-presence-style DTO) to a remote endpoint through the shared scheduler +
  HTTP transport; it holds **zero settings**.
- Listener inventory (0 `@hG`; 2 lifecycle overrides + 1 private native):
  - `aaj()` — on-enable override [fO.java:30; sixtwo_fO.c:587]
  - `YO()` — on-disable override [fO.java:46; sixtwo_fO.c:1]
  - `aWj()` — private native worker (activity build/publish) [fO.java:40; sixtwo_fO.c:35]
- State: `static qn BkQJI` [fO.java:12] — the shared activity DTO instance; seeds
  `RaFvq`/`JLbAF`/`zATNU` and string-table statics `ofIip`/`lEAyT`.

## Per-handler semantics

1. `public fO()` [fO.java:20-23] — constructor only registers the module (id from
   `(int)JLbAF`, boot-enabled, Client); no settings built.
2. `native aaj()` on-enable [sixtwo_fO.c:587] — shares the `0x3806,0xbf` framework blob
   with fz.YO / eR.YO (module-state machinery: `gg.baf()→gc`, `gc.aZg()→gd`, `mG.cnP(FFF)`);
   the enable path plausibly schedules the recurring activity worker via the `qq`
   scheduler (`cXK` init / `cXG(delay, runnable)`). (inferred)
3. `native aWj()` private worker [sixtwo_fO.c:35] — token-ordered behavior (inferred):
   - obtain/construct the `qn` activity DTO (`BkQJI`, type ref `Lsixtwo/qn;`);
   - fill strings via `qn.cXu(String)`/`cXv(String)` and the pair setters
     `cXq(String,String)`/`cXr(String,String)` (rich-presence-style fields: e.g. activity
     name/state; exact string contents are DES-encrypted literals — undecrypted);
   - timestamp the activity: `java/time/Instant` → `now()` → `getEpochSecond()` feeding
     `qn.cXs(long)`/`cXt(long)` (start/end epoch seconds);
   - publish: `qq.cXJ(BkQJI)` (`cXJ(Lsixtwo/qn;)V`); the `qq` scheduler and
     `cXG(J, Runnable)Z` delayed schedule drive repetition;
   - transport side: `ry.dkB()` singleton, `dkI()I` (status/health int) — the Gson/
     HttpClient/ScheduledExecutorService in `ry` serialize the DTO (`qn` implements `rp`
     → `toJson`) and POST it to the remote endpoint (URL inside DES-encrypted literals —
     undecrypted).
4. `native YO()` on-disable [sixtwo_fO.c:1] — same 0x14ccb region; stops the activity
   loop / clears the published activity (teardown via `qq` scheduler state). (inferred)
5. Static: class-init `[0x18aadc580]`, indy `[0x18aad9ac0]`, literal helpers
   `aWm(IJ)String`/`aWl(byte[])`, `aWk(MatchException)`, indy site `aWn`.

## Settings

- **None.** No `cC`/`cJ`/`cD`/`ct` widgets are constructed; the module is a pure
  background service booting enabled.

## Blockers / unknowns

- **No decrypted-literal Java variant exists for fO** — the DES string kernels (endpoint
  URL in `ry`, activity text templates, the pair/single field labels, `JLbAF` id seeds)
  are unrecovered; only the field/method contract is known. Nothing below cites decrypted
  string contents.
- The mapping of `qn`'s six setters to semantic fields (which is name/state/details/
  timestamps) is inferred from typical rich-presence DTO shape, not evidenced.
- Whether `aWj` runs once per activity change, on an interval scheduled by
  `qq.cXG(J,Runnable)Z`, or on both is inside the VM body. (inferred: scheduled interval)
- The `dkI()I`/`dkJ()` return semantics (status code vs. count; response body) are
  unrecovered; `ry`'s handler-side logic (`mC yyzxB`, `wYkLL`, `RlrIz`, `bFlmc` fields)
  is partially native.
- fP-section tokens (GameJoinS2CPacket, `Identifier.ofVanilla`, `PlayerSkinType.WIDE/SLIM`,
  `CommonPingS2CPacket.getParameter`, `InGameHud.getChatHud().addMessage`,
  `getCurrentServerEntry`) are neighbor fP's and excluded from fO's behavior — except
  `JLbAF`, which is fO's own static interleaved into that region.
- Boot-enabled flag (`true`) is direct evidence [fO.java:22]; combined with `qq`/`ry`
  state this means the activity publisher runs from client start until disabled.