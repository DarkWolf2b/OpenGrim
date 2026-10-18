# Uncharge Block (sixtwo.fD) — handler-derived behavior spec

Clean-room behavior specification for `sixtwo/fD` ("Uncharge Block"), derived from native
handler decompiles + pool-token evidence. Companion to `analysis/specs/modules/fD.md`.

## Evidence base

| Source | Used for |
|---|---|
| `analysis/ghidra/handlers-stitched/sixtwo_fD.c` | PRIMARY: 7 native handler stubs + 66 continuation blocks |
| Pool window `0x142f2,0x328` (POOL base RVA `0x301ee40`) | shared interpreted-body pool for the **fD–fH module family** (tokens list `sixtwo/fD`, `sixtwo/fE`, `sixtwo/fF`, `sixtwo/fG`, `sixtwo/fH` and each class's private fields interleaved) |
| `analysis/decompiled/payload-decrypted/sixtwo/fD.java` | exact settings wiring (decrypted literals) |
| `analysis/decompiled/payload-named/sixtwo/gz.java`, `ox.java` | event shell and reach/raycast helper |
| `analysis/specs/00-framework.md` | `cA` builder chain semantics (`UG=step, UE=min, UF=max, UI=default`), `hH` event contract |

Handler → pool-blob usage map:

| Blob (off,len) | Handlers |
|---|---|
| `0x226,0xd` | `_5b68228b901343062102411937de5c37` (class-init; tokens `ang/String; | <`) |
| `0x142f2,0x328` | `aSH` (main event body), `aSK` (keyed int decryptor) |
| `0x857,0x26` | `aSM` (string indy bootstrap; tokens `odHandle; | iUrOn | Ljava/util/Map; | java/l`) |
| none (pure dispatch stubs) | `aSI`, `aSJ`, `aSL` |

**Pool-sharing caveat.** The `0x142f2,0x328` window is one contiguous token region serving the
whole fD–fH family. fD's own fields (`ATgii`, `OcUPP`, `MXvEw`, `uboIQ`, `Fdfgt`, `ByUPz`) do
appear in it, so the VM bodies demonstrably read fD's settings — but Minecraft-API tokens in
the window (e.g. `bxt (Lnet/minecraft/class_4587;Ljava/lang/Iterable;Lsixtwo/mG;)V` = render
hook with `MatrixStack`, `cHk (Ljava/util/function/Predicate;)Lsixtwo/ox;` = target filter on
the `ox` reach-resolver) may belong to sibling modules fE/fF/fG/fH and cannot be attributed to
fD alone.

## Runtime model

### Identity

- `fD extends gg`. Constructor: `super(gf.aZL(19, false, gh.xwjCw))` — registry key **19**,
  not keybound, combat category `gh.xwjCw` (same category as Mace Aura). Registry description:
  "Prevents attacking when not passing the threshold" [registry]. Class seed:
  `ATgii ^ 0x2B419F6E51DBL`.

### Event wiring (exact)

- Exactly one `@hG` listener: `aSH(gz)` (`[18aefa9c0]`).
- `gz extends hH` (cancelable via the `hH` contract): a **key/mouse-input event** carrying
  - `InputUtil.Key YKcvD` (getter `bbL()`) — the key that changed state;
  - `Map<Key, List<KeyBinding>> zrjpu` (getter `bbM()`) — the game's key→bindings map;
  - convenience `bbJ()` (bindings for the key, default `List.of()`) and `bbK(KeyBinding)`
    (is this key mapped to the given binding).
- No construction site for `gz` exists in the decompiled Java tree (fired by the native input
  patch). The module receives every key event; the VM body decides (via the shared `gz.bbK`
  surface) whether the event corresponds to attacking and cancels it (`hH.bdX(true)`) when the
  charge threshold is not met.

### State (fields, exact names)

| Field | Type | Role |
|---|---|---|
| `uboIQ` | `ct` | settings group "Items To Use" |
| `PtIgv`, `VXzzI`, `aMhGz` | `cu` | radio/choice children of `uboIQ` |
| `Fdfgt` | `cz` | action setting "Slots" with callback `this::aSI` |
| `ByUPz` | `cA` | numeric slider "Threshold" |
| `ATgii` | `static long` | class decrypt seed |
| `OcUPP`, `MXvEw`, `QIEUj` | `static long[]`, `Integer[]`, `Map` | invokedynamic constant-decryptor key tables |

### Shared support classes (one line each)

- `ox` — reach/raycast context builder: fields `wuRIs` (Entity), `HJoUm` (`ov` rotation),
  `rnYFy = 3.0` (range), `fmYuI`, `XIKjc = true`, `WIDNA = RaycastContext.ShapeType.OUTLINE`;
  builder `cHk(Predicate<LivingEntity>) -> ox`; resolves block/entity hit results.
- `gz` — key-input event shell (above).
- `cA` — numeric setting; `ct` — group container; `cu` — choice/child setting; `cz` —
  action setting with callback (`.Vf(Runnable)`).

## Per-handler semantics

| Handler | Image | Blob | Recovered semantics |
|---|---|---|---|
| `_5b68228b901343062102411937de5c37()V` | `18af10ab0` | `0x226,0xd` | Class-init trampoline after `Loader.doInit(fD.class)`. `[18af10ab0]` |
| `aSH(gz)V` | `18aefa9c0` | `0x142f2,0x328` | `@hG` **input-event handler** (the module's only behavior entry point). Body fully virtualized. Token evidence: reads all six settings fields (`uboIQ` group, `Fdfgt`, `ByUPz`, plus static keys `ATgii/OcUPP/MXvEw`), and the shared family window names `ox.cHk(Predicate)` — plausibly used to resolve what the crosshair is on when evaluating the attack. Per fD's registry purpose: on an attack key event, cancel the event when the held item's attack charge is below "Threshold" and the "Items To Use" item filter matches. Which of the three `cu` choices is active, the exact charge source (attack-cooldown progress vs item use charge) and the cancel path are inside the VM. `[18aefa9c0]` |
| `aSI() -> Boolean` | `18af01b00` | — | `private native /* synthetic */ Boolean aSI()` — the "Slots" action callback (`Fdfgt.Vf(this::aSI)`). Pure dispatch stub; declared to return `Boolean` (boxed). Likely opens a slot-picking dialog and returns acknowledgment, but the body is virtualized/undecompilable. `[18af01b00]` |
| `aSJ(MatchException) -> MatchException` | `18af01f50` | — | **Fully recovered: identity function** `return param_3;` (MatchException rethrow wrapper). `[18af01f50]` |
| `aSK(int, long) -> int` | `18af01fe0` | `0x142f2,0x328` | Keyed int-constant decryptor (same shape as es.aus: opaque XOR/rotate/multiply state machine over the shared window's key tables), then decrypts `0x142f2`. Output runtime-only. `[18af01fe0]` |
| `aSL(Lookup,MutableCallSite,String,Object[]) -> int` | `18af0cd90` | — | invokedynamic int bootstrap (pure dispatch stub). `[18af0cd90]` |
| `aSM(Lookup,String,MethodType) -> CallSite` | `18af0dda0` | `0x857,0x26` | String-literal indy bootstrap (`aSM<"…">(idx, key)` sites). `[18af0dda0]` |

Continuations (66 blocks): all j2cc VM stubs ending in `halt_baddata`; no fD-owned game logic
recoverable beyond the pool window.

## Settings → behavior mapping

Exact constructor wiring from `payload-decrypted/sixtwo/fD.java` (literals verbatim):

| Setting | Field | Type | Exact spec | Drives |
|---|---|---|---|---|
| "Items To Use" | `uboIQ` (`ct`) | group container | — | parent of the three choice entries below |
| "All Items" | `PtIgv` (`cu`, child of uboIQ) | choice entry | name only, no builder args | item-filter mode: threshold applies to every held item |
| "Only Weapons" | `VXzzI` (`cu`, child of uboIQ) | choice entry | name only | threshold applies only to weapon items |
| "Specified Slots" | `aMhGz` (`cu`, child of uboIQ) | choice entry | name only | threshold applies only to the slots chosen via "Slots" |
| "Slots" | `Fdfgt` (`cz`) | action + `.Vf(this::aSI)` | — | opens the slot selection UI (callback `aSI`) |
| "Threshold" | `ByUPz` (`cA`) | slider | `.UG(0.01).UE(0.25).UF(1.0).UI(0.9, 0.9)` → **step 0.01, min 0.25, max 1.0, default 0.9** (no suffix) | attack-charge gate consumed inside `aSH` |

Notes:
- `cu` children are constructed with the parent group as first ctor arg (`cu(this.uboIQ, …)`),
  confirming the two-level tree; whether the three `cu` entries behave as an exclusive radio
  or independent toggles is not recoverable from the Java (native builders).
- "Threshold" spans 0.25–1.0 with default 0.9 — i.e. by default the module blocks attacks
  whose charge is below 90% of the cooldown progress; the lower bound 0.25 prevents fully
  disabling attacks.

## Unrecovered

(Nothing below is guessed; each item is a hard static-analysis gap.)

1. **`aSH` body control flow.** The whole threshold comparison, the item/slot filter
   evaluation, and the cancel decision live in the j2cc VM. In particular: whether the
   "charge" is `ClientPlayerEntity.getAttackCooldownProgress(float)` (method-level identity
   not present in the window — no `method_` tokens for it), item use charge, or something
   else; and whether cancellation stops the attack, the swing, or the input itself.
2. **Attribution of the shared-window Minecraft tokens** (`cHk(Predicate)Lsixtwo/ox;`,
   `bxt(MatrixStack,Iterable,mG)`) to fD vs fE/fF/fG/fH — one pool, five modules.
3. **`aSI()` slot-picker internals** — native, returns boxed `Boolean`; which slots it edits
   and where the selection is stored (there is no slot-collection field in fD's Java; likely
   persisted through the native `ga`/`gb` state container) is unknown.
4. **`cu` entry semantics** (exclusive radio vs toggles) and their native builder chains.
5. **Whether `aSH` runs for every input event or is pre-filtered** by priority/registration
   (the `hG` annotation in fD is bare `@hG`; no explicit `mw` priority is declared).