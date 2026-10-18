# Self Destruct (sixtwo.fV) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/fV` ("Self Destruct", registry description
"Self destructs the client"), derived from native handler decompiles + pool-token evidence.
Companion to `analysis/specs/modules/fV.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_fV.c` | PRIMARY: 6 native handler stubs + 52 continuation blocks |
| Pool windows `0x152c7,0x350` (`aaj`) and `0x152e3,0x351` (`aXW`, contiguous) (POOL base RVA `0x301ee40`) | full token streams |
| `analysis/decompiled/payload-decrypted/sixtwo/fV.java` | exact settings wiring (decrypted literals) |
| `analysis/decompiled/payload-named/sixtwo/qu.java`, `qt.java` | destruct request builder + post-action enum (recovered shape) |
| `analysis/decompiled/payload-named/sixtwo/fX.java` | framework class using the shared `fX.aYu()/aYt(int[])` store |
| `analysis/specs/00-framework.md` | module lifecycle (`aaj` = enable hook), `fZ` config root, `ga`/`gb` state container |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_d9531e8e50a6ac533da20314017f39c4` (class-init) |
| `0x152c7,0x350` | `aaj` (enable hook — the destruct trigger) |
| `0x152e3,0x351` | `aXW` (keyed int decryptor) |
| `0x857,0x26` | `aXY` (string indy bootstrap) |
| none (pure dispatch stubs) | `aXV`, `aXX` |

Token stream of `aaj`'s window (verbatim, head):

```
C | qvWvL | ddC | YJICs | KrrAc | aXR | aXS | sixtwo/qu | cYC ()Lsixtwo/qu; | sixtwo/fV |
sgXyu | sixtwo/qt | cYw (I)Lsixtwo/qt; | cYF (qt)->qu | YELYg | cYE (Z)->qu | LplVs | cYD |
gJTkT | cYG (String)->qu | dczoz | oNtMH | cYH (Z,String)->qu | cYI | hGStG | LkpRK | pmRzS |
aXW | byJrA | fVUJp | sixtwo/fW | zSGdC | aYa | HDivr | sixtwo/fY | RjaOd | aYB | aYC | aYb |
wsVmd | JHUpj | bGcEu | AxzDu | aYE | aYA | zJAXQ | aYD | sixtwo/fZ | TkVRj | juqnP |
Lsixtwo/fZ; | aYJ (ga,ga)->ga | ConcurrentHashMap | aYV (fZ)->V | aYS (J)->ga | arraycopy |
identityHashCode | Vector | aYY (JII[I[J)J | ArrayList …
```

Token surface of `qu`/`qt` (the destruct pipeline, decompiled shape):

| API | Meaning |
|---|---|
| `qu.cYC() -> qu` (static) | create destruct request |
| `qu.cYF(qt) -> qu` | set post action (enum `qt`) |
| `qu.cYE(boolean) -> qu` | boolean flag (matches "Clear Chat") |
| `qu.cYD(boolean) -> qu` | boolean flag (matches "Clean Strings") |
| `qu.cYG(String) -> qu` | set a path string (matches "Replace File" text) |
| `qu.cYH(boolean, String) -> qu` | set "custom mod id" flag + id (matches "Custom Mod Id"/"Mod Id") |
| `qu.cYI() -> void` | **execute the destruct** |
| `qt` enum `wjeAy, VcXaL, cxMaE, yEEGd`, `qt.cYw(int)` | 4 post-action constants — matches the 4 "Post Action" entries (None / Delete File / Replace File / Close Handles) |
| `qu` fields | `qt OkYxD`, `String yLBNF`, `String qtbYI`, `boolean OAbVF`, `boolean ADfTH`, `Optional<Path> QbsAi`, `String SWtFH`, `boolean kFnhQ`; statics `String JEtTq`, `AtomicBoolean cmARD` |

## Runtime model

### Identity

- `fV extends gg`. Constructor:
  `super(gf.aZL(105, false, gh.KfAlY).aZS(false).aZU(true))` — registry key **105**, fifth
  category `gh.KfAlY`, with two extra metadata flags `.aZS(false)` / `.aZU(true)` (meanings
  unrecovered; cf. dW's `.aZS(false)`). Class seed: `fVUJp ^ 50220215738545L`.

### Trigger (exact)

- `@Override public native void aaj()` — the **enable hook** (`gg.aaj()` normally registers
  listeners; fV replaces it). Enabling the module **is** the trigger: the user toggles
  "Self Destruct" and the destruct sequence starts. There are no other handlers — no tick,
  no keybind handler; the module is one-shot on enable.
- The `aaj` window contains the full `qu`/`qt` builder API (see table): the hook builds a
  destruct request from the module's settings (`cYC()`, `cYF(qt.cYw(postActionIndex))`,
  `cYE(clearChat)`, `cYD(cleanStrings)`, `cYG(replaceFilePath)`,
  `cYH(customModId, modId)`) and executes it (`cYI()`). The window then references
  `sixtwo/fW`, `sixtwo/fY`, `sixtwo/fZ` + `ConcurrentHashMap`/`Vector`/`arraycopy`/
  `identityHashCode`/`ga` — the string-cleaning and config-state sweep machinery that runs
  after (or during) the destruct.
- The constructor also calls `fX.aYu()` and (when `iS.bwL() == null`, an anti-debug-looking
  guard) `fX.aYt(new int[5])` — resetting the shared `fX` int-array store.

### Behavior contract (recovered at API level)

1. **Clear Chat** (`YELYg`, default off): flag into `qu.cYE(boolean)`.
2. **Clean Strings** (`LplVs`, default on): flag into `qu.cYD(boolean)`; the sweep machinery
   tokens (`fW`/`fY`, `ConcurrentHashMap`, `Vector`, `arraycopy`, `identityHashCode`) are the
   client-string/memory wiping half.
3. **Post Action** (`sgXyu` radio): `None` / `Delete File` / `Replace File` /
   `Close Handles` — mapped to the 4 `qt` enum constants and passed via `qu.cYF(qt)`.
   - "Delete File": deletes the client file (the `Optional<Path> QbsAi` field on `qu`).
   - "Replace File": replaces the client file; the replacement path comes from the
     "Replace File" text setting (`gJTkT`, wired via `gJTkT.Vf(this.mZCNn::SZ)`).
   - "Close Handles": closes the client file's open handles first.
   - "None": file left untouched.
4. **Custom Mod Id** (`dczoz`, default off) + **Mod Id** (`oNtMH`, text, max 32): identity
   override after destruct, passed via `qu.cYH(boolean, String)` (wired via
   `oNtMH.Vf(this.dczoz::WF)`).
5. `qu`'s static `AtomicBoolean cmARD` and `cYS(boolean)` indicate the destruct state is
   queryable process-wide; `fZ` (config root) + `ga` tokens indicate config/state teardown.

### Shared support classes (one line each)

- `qu` — destruct request builder/executor (shape above; all bodies native).
- `qt` — 4-constant post-action enum (`wjeAy`, `VcXaL`, `cxMaE`, `yEEGd`), `cYw(int)` by
  index, predicates `cYx()`/`cYy()`.
- `fX` — framework class holding a shared `int[]` store (`aYu()`/`aYt(int[])`) and its own
  `@hG aYc(gA)` listener; `YO()` = `baa(true)`.
- `fW`/`fY` — string/memory sweep helpers (named only in the window; no decompiled body).
- `fZ` — singleton config root (`ConcurrentHashMap`-backed; per framework doc).
- `cy` — string/text setting wrapper (`.Un(int)` = max length, `.Up(String)` = default).

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_d9531e8e50a6ac533da20314017f39c4()V` | `18a7881d0` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(fV.class)`. `[18a7881d0]` |
| `aaj()V` | `18a777690` | `0x152c7,0x350` | `@Override` **enable hook = the destruct trigger**. Body fully virtualized; the window proves it constructs and executes a `qu` request via the full builder API (`cYC`→`cYF(cYw)`→`cYE`/`cYD`/`cYG`/`cYH`→`cYI`) with the module's settings as arguments, then engages the fW/fY/fZ cleanup machinery. `[18a777690]` |
| `aXV(MatchException) -> MatchException` | `18a779180` | — | **Fully recovered: identity function** `return param_3;`. `[18a779180]` |
| `aXW(int, long) -> int` | `18a779210` | `0x152e3,0x351` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0x152e3`). Output runtime-only. `[18a779210]` |
| `aXX(Lookup,MutableCallSite,String,Object[]) -> int` | `18a7844b0` | — | invokedynamic int bootstrap (dispatch stub). `[18a7844b0]` |
| `aXY(Lookup,String,MethodType) -> CallSite` | `18a7854c0` | `0x857,0x26` | String-literal indy bootstrap. `[18a7854c0]` |

Continuations (52 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/fV.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Clear Chat" | `YELYg` (`cJ`) | toggle | `.WE(false)` → **default off** | `qu.cYE(bool)` — clears chat history during destruct |
| "Clean Strings" | `LplVs` (`cJ`) | toggle | `.WE(true)` → **default on** | `qu.cYD(bool)` — wipes client strings/memory traces |
| "Post Action" | `sgXyu` (`ct`) | radio group container | — | parent of the four actions below |
| "Delete File" | `GhxZC` (`cu`, child of sgXyu) | action entry | name only | delete the client file (`qu.QbsAi` path) |
| "Replace File" | `mZCNn` (`cu`, child of sgXyu) | action entry | name only; bound to `gJTkT.Vf(this.mZCNn::SZ)` | replace the client file with the path below |
| "Close Handles" | `Oiypq` (`cu`, child of sgXyu) | action entry | name only (`"Close Handles"`, 13 chars) | close the client file's handles before action |
| "None" | `JFraG` (`cu`, child of sgXyu) | action entry | literal `"None"` (78,111,111,101) | no file action |
| "Replace File" (path) | `gJTkT` (`cy`) | text setting | `.Un(2048).Up("")` → **max length 2048, default ""** | replacement file path |
| "Custom Mod Id" | `dczoz` (`cJ`) | toggle | `.WE(false)` → **default off**; bound to `oNtMH.Vf(this.dczoz::WF)` | enable the identity override below |
| "Mod Id" | `oNtMH` (`cy`) | text setting | `.Un(32).Up("")` → **max length 32, default ""** | `qu.cYH(bool, id)` — the mod id used after destruct |

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **File-scope of the destruct**: which file(s) the Delete/Replace/Close-Handles actions
   target (the client jar? the native DLL? config dir?) — the paths are computed inside the
   VM/`qu` natives; only `Optional<Path> QbsAi` is visible.
2. **The `qt` enum display mapping** — which of `wjeAy/VcXaL/cxMaE/yEEGd` is
   None/Delete/Replace/CloseHandles (order suggests the settings order, but that is
   inference, not evidence).
3. **`Clean Strings` mechanics** — `fW`/`fY` have no decompiled bodies; whether the sweep
   touches heap strings, class names, config files, or the `fZ` persistence store is unknown.
4. **`.aZS(false)` / `.aZU(true)` metadata flags** — module-registry flags (possibly
   "hidden in GUI"/"dangerous"); semantics unrecovered.
5. **`fX.aYt(new int[5])` role** in the ctor (shared store reset) and the guard
   `iS.bwL() == null`.
6. **Whether the destruct aborts the game process** (`qu.cYI()` may or may not exit the
   client); no exit/exec token is visible in the window.