# Slot Lock (sixtwo.dN) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/dN` ("Slot Lock", registry description
"Disables item drop from selected slots"), derived from native handler decompiles +
pool-token evidence. Companion to `analysis/specs/modules/dN.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_dN.c` | PRIMARY: 6 native handler stubs + 58 continuation blocks |
| Pool window `0xaaf7,0x1e2` (POOL base RVA `0x301ee40`), dumped with absolute offsets | per-token position proof: starts inside dL's window tail (`0xaa17`); `sixtwo/dO` section begins mid-window |
| `analysis/decompiled/payload-decrypted/sixtwo/dN.java` | exact settings wiring (decrypted literals) |
| `analysis/decompiled/payload-named/sixtwo/gz.java` | key-input event shell (shared with fD/fE) |
| `analysis/jars/yarn-1.21.11+build.6.tiny` | Minecraft API names |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_086a0a1adaee57dcf039f55a4eea9fca` (class-init) |
| `0xaaf7,0x1e2` | `aon` (main body), `aop` (keyed int decryptor) |
| `0x857,0x26` | `aor` (string indy bootstrap) |
| none (pure dispatch stubs) | `aoo`, `aoq` |

Token layout of `0xaaf7,0x1e2` (offsets from the dump; `dL`'s window ends `0xab38`):

| Offsets | Tokens | Attribution |
|---|---|---|
| `0xaa17–0xab16` (window head) | `lass_239;` (HitResult descriptor tail, dL boundary artifact), `OKemK`, `xmVgM`, `VTfqp`, `ans` | dL boundary artifact |
| `0xab17–0xab38` | `sixtwo/dN`, `YAFsA`, `aoo`, `field_1869`, `mOyJK` | **dN** |
| `0xab39–0xacc9` | `sixtwo/gz`, `bbK`, `(Lnet/minecraft/class_304;)Z`, `xzqVc`, `ievSW`, `aop`, `NTPwK`, `sixtwo/dO`, `lIFPa`, `dcw`, `OMbpn`, `aoJ`, `ERHWx`, `byQPn`, `aow`, `aoz`, `LjWLs`, `class_490`, `NTcLD`, `aox`, `sixtwo/iX`, `HpSlL`, `[Lnet/minecraft/class_304;`, `method_7368`, `method_5438`, `(I)Lnet/minecraft/class_1799;`, `vASOe`, `[Lnet/minecraft/class_1799;`, `sixtwo/gq`, `bbq ()Lnet/minecraft/class_465;`, `field_8037`, `Lnet/minecraft/class_1799;`, `aoB`, `method_7972`, `bbp ()Lsixtwo/lC;`, `aoA`, `(Lmixin/a…` (truncated) | **dN/dO shared** (dO's section begins at `0xab67`-ish; tokens before it are dN's) |

Token→yarn resolution:

| Token | Yarn name |
|---|---|
| `field_1869` | `KeyBinding.dropKey` (the Q key binding) |
| `class_304` + `bbK` + `(Lnet/minecraft/class_304;)Z` | `KeyBinding` / `gz.bbK(KeyBinding)` ("was this key pressed for this binding?") |
| `method_7368` | `PlayerInventory.getHotbarSize()` (= 9) |
| `method_5438` + `(I)Lnet/minecraft/class_1799;` | `Inventory.getStack(int) -> ItemStack` |
| `method_7972` | `ItemStack.copy()` |
| `field_8037` | `ItemStack.EMPTY` |
| `class_490` | `InventoryScreen` (player inventory GUI) |
| `class_465` + `bbq` | `HandledScreen` / `sixtwo.gq.bbq() -> HandledScreen` (current screen query) |
| `[Lnet/minecraft/class_304;` / `[Lnet/minecraft/class_1799;` | `KeyBinding[]` / `ItemStack[]` |
| `sixtwo/gz` | key-input event shell (same as fD/fE) |
| `sixtwo/lC` via `bbp` | the client's click-GUI screen class (settings overlay) |
| `sixtwo/iX` | entity/movement helper (same one used by Mace Aura's scanner) |

## Runtime model

### Identity

- `dN extends gg`. Constructor: `super(gf.aZL(64, false, gh.qBzlZ))` — registry key **64**,
  not keybound, category `gh.qBzlZ` (same as dL No Entity Clip). Registry description:
  "Disables item drop from selected slots".

### Event wiring (exact)

- Exactly one `@hG` listener: `aon(gz)` (`[18dcf70e0]`) — the **key-input event** (same shell
  `gz extends hH` as fD/fE: `InputUtil.Key bbL()`, key→bindings map `bbM()`, `bbK(KeyBinding)`).
- No tick handler; purely reactive to key events.

### Behavior contract (recovered at API level)

1. The window names `gz.bbK(KeyBinding)` immediately after `KeyBinding.dropKey`
   (`field_1869`): the listener tests whether the key event corresponds to the vanilla
   **drop key** (Q / ctrl-Q bound `KeyBinding.dropKey`).
2. It iterates the hotbar via `getHotbarSize()` + `getStack(int)` (`method_7368`/
   `method_5438`) — the "Locked Slots" selection is a set of hotbar slot indices; for a locked
   slot the drop is canceled (`hH.bdX(true)`) so the vanilla drop-key path never runs.
3. `ItemStack.copy()`/`ItemStack.EMPTY` + `ItemStack[]` tokens indicate the handler snapshots
   the stacks in the locked slots (typical guard: don't drop the whole stack / distinguish
   cursor vs slot drops).
4. `InventoryScreen` (`class_490`) + `HandledScreen` (`class_465`, via `gq.bbq()` current-screen
   query) + `KeyBinding[]`: the listener also distinguishes **dropping from the inventory
   screen** (hovered slot / cursor stack) from the in-world hotbar drop — the registry
   description ("item drop from selected slots") covers both paths.
5. `sixtwo/lC` via `bbp() -> lC` (click-GUI screen) is consistent with the "Locked Slots"
   action setting (`cz`) opening a slot-picker overlay in the client GUI when clicked.
6. `sixtwo/dO` (next module in the pool region) shares the later tokens (`lIFPa`, `dcw`,
   `OMbpn`, `aoJ`, `ERHWx`, `byQPn`, `aow`, `aoz`, `LjWLs`, `NTcLD`, `aox`, `HpSlL`,
   `vASOe`, `aoB`, `aoA`) — attribution past `sixtwo/dO`'s marker is conservative.

### Shared support classes (one line each)

- `gz` — key-input event shell (identical to fD/fE usage).
- `gq` — screen helper: `bbq() -> HandledScreen` (current screen), `bbp() -> lC` (click GUI).
- `iX` — entity/movement helper (`bxD(e)` moving-entity predicate used elsewhere).
- `dO` — the next module sharing the pool region (identity/behavior not part of this spec).
- `cz` — action setting with callback (`.Vf(Runnable)`); used here as the "Locked Slots"
  picker trigger.

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_086a0a1adaee57dcf039f55a4eea9fca()V` | `18dd0a4b0` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(dN.class)`. `[18dd0a4b0]` |
| `aon(gz)V` | `18dcf70e0` | `0xaaf7,0x1e2` | `@hG` **key-input handler** (the module's only behavior entry point). Body fully virtualized. Token evidence pins the contract: match the pressed key against `KeyBinding.dropKey` via `gz.bbK(KeyBinding)`, iterate hotbar slots (`getHotbarSize`/`getStack`), compare against the "Locked Slots" selection, and cancel the event for locked slots; handles both in-world and `InventoryScreen`/`HandledScreen` drop paths (with `ItemStack.copy`/`EMPTY` snapshotting). `[18dcf70e0]` |
| `aoo(MatchException) -> MatchException` | `18dcfac60` | — | **Fully recovered: identity function** `return param_3;`. `[18dcfac60]` |
| `aop(int, long) -> int` | `18dcfacf0` | `0xaaf7,0x1e2` | Keyed int-constant decryptor (opaque XOR/rotate state machine, then decrypts `0xaaf7`). Output runtime-only. `[18dcfacf0]` |
| `aoq(Lookup,MutableCallSite,String,Object[]) -> int` | `18dd06790` | — | invokedynamic int bootstrap (dispatch stub). `[18dd06790]` |
| `aor(Lookup,String,MethodType) -> CallSite` | `18dd077a0` | `0x857,0x26` | String-literal indy bootstrap. `[18dd077a0]` |

Continuations (58 blocks): all `halt_baddata` VM stubs.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/dN.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Locked Slots" | `mOyJK` (`cz`) | action setting | name only, no builder args | opens the slot-selection picker (callback via the native `cz` action path); the selected slot set drives which hotbar/inventory slots cannot drop items |

Notes:
- Single-setting module; **no numeric literals** (no step/min/max/default exist to cite).
- The slot selection storage is not a Java field — it lives in the native state container
  (`ga`/`gb` per the framework contract) and is read inside the VM body.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **Which slots count as "locked"** — the selection set and its persistence are native
   (`cz` action + state container); the picker UI is not in the decompiled Java.
2. **The drop-path split** (hotbar Q-drop vs inventory-screen drop vs ctrl-Q whole-stack):
   the tokens prove both screen contexts are consulted, but the branch structure and any
   whole-stack special case are inside the VM.
3. **`ItemStack.copy()` purpose** — snapshot for comparison, for the picker UI, or for
   restoring after a canceled drop; not statically decidable.
4. **Shared-tail attribution** to dN vs `dO` (tokens after `sixtwo/dO`'s marker).
5. **Whether mouse-wheel/held-item swap keys are also intercepted** — only `dropKey` is named
   in the window; other bindings would need `KeyBinding[]` entries whose contents are
   runtime values.