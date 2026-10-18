# Collision Long Jump (sixtwo.ev) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_ev.c` — 4 handlers (class-init `_bc8c023ff57a02def6819dda3daabfc3`, `aaj()`, `auR(hq)`, `auS`) + 33 continuation blocks, 0 unresolved table targets. Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff4a2xxxxx`/`6ffff4a37xxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/ev.java` — static seeds `zMDWT`/`PkbYQ`; natives: class-init, `aaj()` override, `auR(hq)` `@hG`, `auS(MatchException)`.
- Structural spec: `analysis/specs/modules/ev.md`; registry row: `sixtwo.ev|Collision Long Jump|Jumps when colliding with boat|key=48|bind=-999`; category `gh.xgeEn` = **Movement** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny`; pool re-resolution via `analysis/tools/resolve_pool_blob.py` (pool base RVA `0x301ee50`).
- Decrypted constants: **no `sixtwo.ev` entries in `analysis/decrypted/full-dump.jsonl`**.
- Event semantics: `hq` = entity-pair event `(Entity vUbKz, Entity utwPn)` with getters `bcZ()`/`bda()` `[decompiled hq.java]`.
- Neighbor runs pinned by class tokens: `sixtwo/ew` `[0xd9a3]`, `sixtwo/ex` `[0xd9ef]`, `sixtwo/ey` `[0xda1b]` (see ew.md for their surfaces).

### Recoverability caveat

Both `aaj` and `auR` decrypt the same window `[0xd91e,0x25a]` and dispatch into the VM. ev's own run is 7 tokens. The jump trigger itself has no token (no input/jumping/velocity tokens) — the jump mechanism is VM-resident.

## Runtime model

- `ev extends gg`. Constructor `[decompiled ev.java:9-12]`:
  - `long var1 = zMDWT ^ 92428775495529L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)PkbYQ, false, gh.xgeEn).aZS(false))` — module id runtime-decrypted (registry: **48**), flag `false`, category **Movement**, plus `.aZS(false)` — a native metadata builder (also used by eB Flight, dW Freecam, ey Blink, fW Transactions, cX Fake Player, dk, ej); its meaning is unrecovered, but the co-occurrence set (movement/network-visible modules) is recorded for pattern matching `[decompiled + grep across stubs]`.
- Overrides:
  - `aaj()` — on-enable hook (base `gg.aaj()` → `hF.bdI(this)`) `[decompiled gg.java:375-376]`.
  - `auR(hq)` — `@hG` entity-collision event listener, default NORMAL priority `[decompiled]`.
- **Own pool run** `POOL[0xd93e,0x5d)` (window `[0xd91e,0x25a]` starts at `class_token − 0x20` = `0xd91e`; per-token offsets):
  - `sixtwo/ev` `[0xd93e]`, `zMDWT` `[0xd948]` (seed), `auS` `[0xd94e]` (rethrow name), `net/minecraft/class_1690` `[0xd952]`, `yJtAG` `[0xd96b]`, `method_5739` `[0xd971]`, `(Lnet/minecraft/class_1297;)F` `[0xd97d]`.
  - Tiny/class: `class_1690` = `net/minecraft/entity/vehicle/BoatEntity`; `method_5739 (Lnet/minecraft/class_1297;)F` = `Entity.distanceTo(Entity)`.
  - `yJtAG` — obfuscated symbol **not declared in ev.java's stub** (its only fields are the two seeds). Either a VM-internal method/field name (like `bxN`/`auN` which follow) or a scattered member of a neighbor; unrecovered `[uncertain]`.
  - Window prefix `[0xd91e,0xd93e)`: `craft/class_3419;FF)V` (tail of a desc ending `(Lnet/minecraft/class_1297;Lnet/minecraft/class_3414;Lnet/minecraft/class_3419;FF)V` — a `playSound(Entity, SoundEvent, SoundCategory, float, float)`-shaped call; `class_3414` = `SoundEvent`, `class_3419` = `SoundCategory`) and `sixtwo/gD` `[0xd934]` (`gD extends hH` — an empty event-marker class). Both sit in the prefix (previous neighbor eu = Trident Boost's region per registry order), but `sixtwo/gD` could equally be ev's event reference; unresolvable `[slice, flagged]`.
  - Window tail from `sixtwo/ew` `[0xd9a3]`: ew/ex/ey runs (see ew.md) — padding over-coverage `[slice]`.
- Contract: on the entity-collision event (`hq` carries the colliding pair), test whether the other entity is a `BoatEntity` (`class_1690`) and whether it is within trigger distance (`distanceTo`), then trigger a player jump — the boat-collision boost exploit ("Jumps when colliding with boat") `[slice + registry, inferred]`. The jump itself (setting the jumping input flag, invoking the jump method, or injecting velocity) has **no pool token** — VM-resident `[uncertain]`.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_bc8c023ff57a02def6819dda3daabfc3()V` | `[18ce27ef0]` | `[0x226,0xd]` | class-init stub |
| `aaj()V` | `[18ce1e230]` | `[0xd91e,0x25a]` | on-enable hook |
| `auR(Lsixtwo/hq;)V` | `[18ce21500]` | `[0xd91e,0x25a]` | collision-event listener (whole behavior) |
| `auS(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18ce27e60]` | — | identity rethrow |

- **class-init [18ce27ef0]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck` (vtable `0x720`), dispatch `UNK_1820adfc0[(cVar1=='\0')*8]` at `18ce27fcf`. No module behavior `[decompiled]`.
- **`aaj()V` [18ce1e230]** — decrypts the same window as `auR` (`POOL[0xd91e,0x25a]`), `ExceptionCheck`, dispatch `UNK_1820aae70` at `18ce1e2f1`. On-enable: besides the base listener registration, any state reset the VM performs is token-free (consistent with clearing a small flag). No separate slice exists for it `[decompiled + inferred]`.
- **`auR(Lsixtwo/hq;)V` [18ce21500]** — the substantive handler. Decrypts `POOL[0xd91e,0x25a]`, `ExceptionCheck`, dispatch `UNK_1820abca0` at `18ce215ca`. Virtualized body; determinable: `BoatEntity` type test (`class_1690`) and a `distanceTo(Entity)` measurement against one of the event pair (`hq.bcZ()`/`bda()`) `[slice, inferred]`. Unrecovered: which pair member is type-tested, the distance threshold, whether the module requires the local player to be the colliding party, and the jump-issuing mechanism (no `KeyBinding`/`jumping`/velocity token in the run) `[uncertain]`.
- **`auS(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18ce27e60]** — `return param_3;` identity rethrow `[decompiled]`.
- Continuation blocks (33): generic `ExceptionCheck` 2-way dispatchers; `ExceptionOccurred` + decrypt re-entry (`FUN_190dd72e0`, one with key cookie `0x7c…`-style stack cookies); `ThrowNew` (`0x70`) thunks; `swi(3)` trampolines; bare `return`s. No module-specific logic `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `ev.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)PkbYQ, false, gh.xgeEn).aZS(false))` `[decompiled ev.java:9-12]`.
- No `full-dump.jsonl` entries for ev (0 indy sites) — no hidden setting names recoverable `[decompiled absence]`.
- Consequence: the boat-detection radius and any jump-impulse parameter are hard-wired in VM bytecode `[inferred]`.

## Cross-module interplay

| peer | relationship | evidence |
|---|---|---|
| eu (Trident Boost) | window prefix hosts the `playSound(Entity, SoundEvent, SoundCategory, FF)` desc tail and `sixtwo/gD` — attribution to eu vs ev unresolved | `[0xd91e,0xd93e)` |
| ew (No Jump Delay) | next run from `[0xd9a3]`; ew resets the jump cooldown each tick, so ew enabled alongside ev guarantees consecutive jumps fire | `[0xd9a3]` |
| ex/ey | tails of the shared window (documented in ew.md) | `[0xd9ef,0xda1b)` |
| seed scatter | ev's second seed `PkbYQ` sits in ew's run at `[0xd9e9]` — proven cross-boundary scatter; token attribution is semantic only | `[0xd9e9]` |

- ev is one of seven modules calling `.aZS(false)` after `gf.aZL(...)` in the constructor (eB Flight, dW Freecam, ey Blink, fW Transactions, cX Fake Player, dk, ej); whatever the flag means, it is shared across movement/network-visible modules — a likely candidate is "hidden from config sync/HUD" or "requires a bind", but this is pattern inference only `[grep across stubs]`.
- The `hq` entity-collision event is also consumed by other movement modules; ev is the only one in this window whose run type-tests `class_1690`.

## Unrecovered

1. **Module id 48** — registry-sourced; `(int)PkbYQ` has no dump verification.
2. **The jump mechanism** — no jump/input/velocity token exists in ev's run; the trigger must be VM-internal (e.g. direct field write through an untokenized path) or delegated to a helper class token that is absent. This is the module's core open question.
3. **Distance threshold** — `distanceTo`'s comparison constant is VM-resident.
4. **`yJtAG`** — undeclared obfuscated symbol in ev's own run; role unknown.
5. **`sixtwo/gD` + playSound desc in the window prefix** — could belong to ev (a post-jump sound cue / custom event) or to eu (Trident Boost); unresolvable from the window.
6. **`.aZS(false)` metadata flag** — native builder, meaning unrecovered (see Runtime model).
7. **Which `hq` member is the boat** — `bcZ()` vs `bda()`; the event does not order attacker/victim, and no getter tokens exist in the run (inherited plumbing).
8. **Repeat-jump gating** — whether ev re-triggers every tick while contact persists or fires once per collision; no state-token evidence (a boolean field could live in the VM's own frame, not the pool).
9. **Seed arithmetic** — `zMDWT ^ 92428775495529L` feeds the id-decrypt key schedule; undumped.

## Shared helpers cited

- `gg`/`iS` — module base; `aaj()`/`YO()` enable/disable hooks.
- `hq` — entity-pair collision event: `hq(Entity,Entity)`, `bcZ()`, `bda()` getters `[decompiled hq.java]`.
- `gD` — empty `hH` event-marker class (attribution uncertain here).
- `gf`/`gh` — metadata (`aZL`, `aZS` builders) + category enum (`xgeEn` = Movement).
- Neighbors in window: eu (Trident Boost) prefix; ew/ex/ey tails (documented in ew.md).

---
Confidence: MEDIUM on the surface (7-token run, exact BoatEntity + distanceTo pair) and LOW on the trigger mechanics (no jump token; distance threshold and jump issuance VM-resident).