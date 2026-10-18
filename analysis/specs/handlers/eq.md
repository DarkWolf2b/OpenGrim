# Null Movement (sixtwo.eq) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_eq.c` — **1 handler** (class-init `_95f35cd333be09af769faf93936605a8`) + 9 continuation blocks, 0 unresolved table targets. All citations are image addresses (`0x18xxxxxxxx`, runtime base `6ffff4b7xxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/eq.java` (Vineflower) — the class stub is fully native-blocked: 1 native plumbing method, **no `@hG` listeners, no `aaj()`/`YO()` overrides, no settings fields**, no imports beyond `native.Loader`.
- Structural spec: `analysis/specs/modules/eq.md`; registry row: `sixtwo.eq|Null Movement|Prevents movement blocking|key=41|bind=-999` (`analysis/specs/registry.tsv`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny`; class names `analysis/reference/intermediary-to-yarn-classes.tsv`.
- Pool re-resolution: `analysis/tools/resolve_pool_blob.py` against `analysis/ghidra/dumps/jna-decrypted-v2.dll`; pool base RVA `0x301ee50` (pointer variable `plRam000000018301ee50`), pool runtime base `0x6fffe7c10000`.
- Decrypted constants: **no entries for `sixtwo.eq` in `analysis/decrypted/full-dump.jsonl`** (the dump covered 204 classes; eq is listed in `module-classes.txt` but has zero recorded indy sites) — module id 41 is registry-attributed, not VM-verified.
- Framework context: `analysis/specs/00-framework.md` (event bus `hF`, module base `gg`, `aaj()` = on-enable / `YO()` = on-disable hooks), phase precedents `analysis/specs/handlers/er.md` (`gH$th` pre-motion tick → `gv` pre-rotation → `qL` motion processing).

### Recoverability caveat (read first)

`eq` is a **single-behavior class whose entire visible surface is one decrypt stub**. It is *more* virtualized than eA-class modules: there is not even a `@hG` listener in the Java stub, and the class has **no constant-pool token run of its own** (see Per-handler semantics). Every claim about behavior below is tagged:

- `[decompiled]` — visible directly in a decompile or stitched corpus.
- `[inferred]` — inferred from the registry description + framework contract; NOT from any recovered body.
- `[uncertain]` — cannot be attributed with confidence.

## Runtime model

- `eq extends gg` (module base `gg extends iS`). Constructor `[decompiled eq.java:8-13]`:
  - Key-mix seed: `long var1 = Ignfk ^ 44958416929960L` (`Ignfk` = payload-decryptor static seed set by the `gb.aYR(...)` clinit chain) `[decompiled]`.
  - `super(gf.aZL((int)VLNez, false, gh.xgeEn))` — module id `(int)VLNez` decrypted at runtime (registry says **41**), flag `false` (meaning unrecovered, same `false` in all sibling modules), category `gh.xgeEn` = **Movement** (`analysis/port/reports/batch6.md`: `xgeEn=Movement`; shared with eA Strafe 35, ez No Fall 36, ew No Jump Delay 49) `[decompiled + registry]`.
- No settings are constructed (0 wrapper fields; see Settings section) `[decompiled]`.
- No keybind behavior in Java: registry bind `-999` = unbound; toggle via the `gg` base machinery (`gc.aZd(int)` int-code compare, `gd` toggle/hold enum) `[decompiled + framework]`.
- No `aaj()`/`YO()` override — the class registers nothing Java-side. Since `gg.aaj()` (→ `hF.bdI(this)`) registers annotated listeners and eq declares none, eq's whole behavior must be wired from the virtualized native layer: either the VM registers a bus listener by other means, or the module works purely through a static mixin/native hook. **No token evidence exists either way** `[inferred, uncertain]`.
- No Minecraft API surface is recoverable: the only pool slice eq ever decrypts is the shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"` — tails of `java/lang/String;` / `<init>`). Zero `net/minecraft/*`, zero `mixin/accessors/*`, zero setting-wrapper tokens are reachable from any eq handler `[decompiled slice]`.
- Nearest neighbors in pool layout: the region around eq's handlers contains no `sixtwo/eq` class token at all (checked `POOL[0x200,0x1000]` neighborhood of its window) — unlike eA/ew/ez whose class tokens anchor their runs. eq's VM code therefore references only VM-internal symbols `[decompiled absence]`.
- "Prevents movement blocking" (registry) is the classic movement-input restoration module (nullifying movement blocks imposed by order/rotation modules, e.g. `qL` rotation lockouts or server-imposed freezes). Given zero tokens, even the input path (`movementInput` object, keybind forcing, or velocity rewrite) is **not determinable** — see Unrecovered `[inferred, uncertain]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_95f35cd333be09af769faf93936605a8()V` | `[18cf6d580]` | native class-init stub (the only declared native) |

- **`_95f35cd333be09af769faf93936605a8()V` [18cf6d580]** — decrypts the shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), calls `JNI->ExceptionCheck` (vtable offset `0x720`), then tail-dispatches through `UNK_1820eeb60[(cVar1=='\0')*8]` (jump table at `18cf6d65f`; index 0 = clean path, 1 = exception path). No module behavior; the `Loader.doInit(eq.class)` static block is the only Java-side trigger `[decompiled]`.
- **Continuation blocks** (all generic VM trampolines; no eq-specific logic) `[decompiled]`:
  - `FUN_18cf6d662` [rva 0xcf6d662] — `FUN_190de3220()` + `ExceptionCheck` + 2-way `halt_baddata` dispatch (clean/exception path).
  - `FUN_18cf6dbd2` [0xcf6dbd2], `FUN_18cf6ebf0` [0xcf6ebf0], `FUN_18cf6f962` [0xcf6f962], `FUN_18cf76422` [0xcf76422] — bare 2-way dispatch tails ending in `halt_baddata` (VM interpreter block exits).
  - `FUN_18cf6ec0a` [0xcf6ec0a] — `JNI->CallStaticObjectMethodA` (`0x3a0`) + `ExceptionCheck`: the invokedynamic/bootstrap plumbing shape (string-decrypt call site through a foreign bootstrap).
  - `FUN_18cf6fa8e` [0xcf6fa8e] — array-decrypt helper: `JNI->GetArrayLength` (`0x558`) with index/bounds setup (`iStack…58 = 2`, stack cookie `0x28`, `unaff_R15 >> 0x28` byte extraction) and an `index < 0 || length <= index` bound check — consistent with the per-character decryption of an obfuscated identifier, but no plaintext survives.
  - `FUN_18cf6ff7b` [0xcf6ff7b] — `FUN_190dd72e0` (BLOB_DECRYPTOR) + `ExceptionCheck`.
  - `FUN_18cf775f3` [0xcf775f3] — bare `return`.
- **Missing from the corpus** (and from the Java stub): no `MatchException` identity-rethrow handler, no indy bootstrap (`Lookup,String,MethodType`) handler, no int-constant decrypt kernel — compare eA (`avq/avp/avo/avn` all declared in-class): eq's constant decryption must go through a **shared/foreign bootstrap** (e.g. `iY.bym`/`byl`-style shared plumbing seen in ec's window), meaning eq's own name/id constants are decrypted through another class's slice `[inferred from stub + absence]`.

## Settings → behavior mapping

- **Zero settings constructed.** `eq.java` declares no `cA/cB/cC/cD/cJ/cu/ct` fields and the constructor builds none:
  `[decompiled eq.java:8-13]` — constructor is exactly `long var1 = Ignfk ^ 44958416929960L; super(gf.aZL((int)VLNez, false, gh.xgeEn));`
- No decrypted name-char indy sites for eq exist in `full-dump.jsonl` (0 entries), so no setting display name can be recovered even as raw int arrays (`mr.clS({...})` sites like eA's "Speed") `[decompiled absence]`.
- Consequence for behavior: whatever "prevents movement blocking" does, it takes **no user-visible configuration** — a hard-wired behavior toggle, fully VM-resident `[inferred]`.
- For the rebuild: implement as a no-config module; the registry description is the only behavioral source of truth (`analysis/specs/modules/eq.md` "Port notes" already flags designer discretion).

## Cross-module interplay

- Category peers (Movement, `gh.xgeEn`): eB Flight (44), eC Sprint (34), ez No Fall (36), eA Strafe (35), ew No Jump Delay (49), ev Collision Long Jump (48), ex Safe Walk, et Anti Web, eu Trident Boost. Null Movement's "blocking" most plausibly interacts with the `qL` rotation-manager lockouts and server-driven movement freezes, but no call-site tokens exist to confirm `[inferred]`.
- Dispatch phase unknown: no listener method is declared, so eq cannot be placed in the verified `gH$th` → `gv` → `qL` tick pipeline (er.md) from static evidence `[uncertain]`.

## Unrecovered

1. **Module id 41**: registry-sourced; `(int)VLNez` is not present in `full-dump.jsonl` (eq has no recorded indy decrypt sites). Not VM-verified.
2. **The entire behavior body**: zero pool tokens are attributable to eq (its window list contains only the shared clinit slice), so the mechanism of "movement blocking" prevention is unknown: input-vector rewrite (`LivingEntity.forwardSpeed/sidewaysSpeed`), keybind forcing, movement-input object replacement, or velocity patching — all plausible, none evidenced. The event/phase it runs at (tick? pre-rotation `gv`? packet?) is also unknown.
3. **Listener registration path**: no `@hG` method, no `aaj/YO` override, no bus registration token. Whether eq's listener is registered by the VM from the clinit block, or the module works through a static hook installed by the loader, is an open question.
4. **`Ignfk`/`VLNez` seed provenance**: `gb.aYR(long,long,Class)` key derivation for eq's clinit; exact derivation constants unrecovered (VM).
5. **Flag `false` in `gf.aZL(41, false, gh.xgeEn)`** — meaning unrecovered (universal across sibling modules).
6. **Peer-listener ordering** — if eq mutates movement input at a listener phase, its ordering vs ez (No Fall, C2S rewrite) and ew (pre-motion cooldown reset) is bus-ordering, not static-visible; the rebuild must define a deterministic order.

## Shared helpers cited (one line each)

- `gg`/`iS` — module base (id, category, bind, enable/disable hooks `aaj`/`YO`; per-module state container `gc GfFkt`).
- `gf` — module metadata record: `aZL(int,boolean,gh)` ctor; accessors `aZM()` id, `aZO()` category, `aZN/aZT/aZV/aZR` flags (all native).
- `gh` — 5-constant category enum (`xgeEn` = Movement for eq).
- `gb`/`ga` — native state-container peer (`gb.aYR` clinit key derivation; paired-ArrayList table builders `aZa`/`aZb`).
- `hF` — concurrent event bus (`bdI`/`bdM` register/unregister, priority-sorted dispatch).
- `gc` — per-module state container (field `GfFkt` on the base class), inherited unused by eq (no tokens).

---
Confidence: LOW-MEDIUM on the API contract (single decrypt stub, zero own tokens, zero settings), HIGH on the negative findings (there is genuinely nothing else statically recoverable).