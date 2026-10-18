# No Sign Screen (sixtwo.dH) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_dH.c` — 3 handlers (class-init `_4227529046ca3a06d54b1b984ec35c55`, `alC(gJ)`, `alD`) + 25 continuation blocks, 0 unresolved table targets. Citations are image addresses (`0x18xxxxxxxx`, runtime `6ffff5a5xxxxx`/`6ffff5a6xxxxx`).
- Java skeleton: `analysis/decompiled/payload-named/sixtwo/dH.java` — static seeds `stgmn`/`BqCmu`; natives: class-init, `alC(gJ)` `@hG`, `alD(MatchException)`.
- Structural spec: `analysis/specs/modules/dH.md`; registry row: `sixtwo.dH|No Sign Screen|Disables editing signs|key=138|bind=-999`; category `gh.qBzlZ` = **Misc** (`analysis/port/reports/batch6.md`).
- Mappings: `analysis/jars/yarn-1.21.11+build.6.tiny`; class names via `analysis/reference/intermediary-to-yarn-classes.tsv`.
- Pool re-resolution: `analysis/tools/resolve_pool_blob.py` + per-token offset dump against `analysis/ghidra/dumps/jna-decrypted-v2.dll`; pool base RVA `0x301ee50`. Decrypted constants: **no `sixtwo.dH` entries in `analysis/decrypted/full-dump.jsonl`**.
- Event semantics: `gJ` = screen event carrying `Screen olkZq` with getter `bcd()` `[decompiled gJ.java]`; sibling spec `do.md` (`@hG ahi(gJ)` = "screen open/close") corroborates the screen lifecycle phase.

### Recoverability caveat

`alC`'s body is a decrypt preamble → VM dispatch. The recoverable surface is its 5-token own run (below). The close mechanism has no token — the reaction is VM-resident.

## Runtime model

- `dH extends gg`. Constructor `[decompiled dH.java:8-11]`:
  - `long var1 = stgmn ^ 54446400566663L` — key-mix seed `[decompiled]`.
  - `super(gf.aZL((int)BqCmu, false, gh.qBzlZ))` — module id `(int)BqCmu` runtime-decrypted (registry: **138**), flag `false`, category **Misc** `[decompiled + registry]`.
- One `@hG` listener: `alC(gJ)` (default NORMAL priority) — fires on screen open/close `[decompiled + do.md precedent]`.
- No settings, no `aaj()`/`YO()` overrides — no enable/disable side effects Java-side; `hF` bus registration happens via the inherited `gg.aaj()` `[decompiled]`.
- **Own pool run** `POOL[0x9c9f,0x45)` (window `[0x9c7f,0x1be]` starts at `class_token − 0x20` = `0x9c7f`; per-token offsets):

| offset | token | resolution |
|---|---|---|
| `[0x9c9f]` | `sixtwo/dH` | self class name |
| `[0x9ca9]` | `stgmn` | seed field (stub-matched) |
| `[0x9caf]` | `net/minecraft/class_7744` | `net.minecraft.client.gui.screen.ingame.HangingSignEditScreen` |
| `[0x9cc8]` | `alD` | rethrow name (stub-matched) |
| `[0x9ccc]` | `net/minecraft/class_498` | `net.minecraft.client.gui.screen.ingame.SignEditScreen` |

  - These are exactly the two concrete sign-editing GUI classes in 1.21.11 (both extend `AbstractSignEditScreen`) `[class tsv]`.
  - Window tail after `[0x9ccc]` (`sixtwo/dJ` `[0x9ce4]`, `amJ`, `BBSYk`, `amG`, `(Lnet/minecraft/class_465;)Z` (`HandledScreen → boolean` container-screen test), `amW`, `BqCmu`, `amH`, `amI`, `amK`, `(Lnet/minecraft/class_465;DD)Lnet/minecraft/class_1735;` (`HandledScreen`-coordinate → `Slot` lookup), `wZqCT`, `Lnet/minecraft/class_1735;` = `Slot`, `field_7512` = `currentScreenHandler` (`f Lnet/minecraft/class_1703;`), `class_1703` = `ScreenHandler`, `method_34255` = `getCursorStack`, `method_7960` = `isEmpty`, `method_7677` = `getStack`, `amO`, …) = **dJ (Mouse Tweaks)** run — container-screen/Slot machinery, unrelated to dH `[stub match + registry order: dJ|Mouse Tweaks]`.
  - Window prefix `[0x9c7f,0x9c9f)`: `inecraft/class_304` (tail of `net/minecraft/class_304` = `KeyBinding`) + `method_23481` (`(Z)V` = `KeyBinding.setPressed`) — tail of the previous neighbor's run (consistent with dI Nuker's attack-key forcing, not dH) `[slice]`.
- Contract: on the screen event, type-check the screen (`bcd()`) against `SignEditScreen`/`HangingSignEditScreen`; on match, prevent the sign-edit UI (close it) `[inferred from run + registry "Disables editing signs"]`. No closing call is token-proven (no `setScreen`/`close` token in the run) — see Unrecovered.

## Per-handler semantics

| handler | image | slice | role |
|---|---|---|---|
| `_4227529046ca3a06d54b1b984ec35c55()V` | `[18de515e0]` | `[0x226,0xd]` | class-init stub |
| `alC(Lsixtwo/gJ;)V` | `[18de4c9a0]` | `[0x9c7f,0x1be]` | screen-event listener (whole behavior) |
| `alD(Ljava/lang/MatchException;)Ljava/lang/MatchException;` | `[18de51550]` | — | identity rethrow |

- **class-init [18de515e0]** — decrypts shared clinit slice `POOL[0x226,0xd]` (`"ang/String;"`, `"<"`), `ExceptionCheck` (vtable `0x720`), dispatch `UNK_1823f5be0[(cVar1=='\0')*8]` at `18de516bf`. No module behavior `[decompiled]`.
- **`alC(Lsixtwo/gJ;)V` [18de4c9a0]** — the only substantive handler. Decrypts `POOL[0x9c7f,0x1be]`, `ExceptionCheck`, tail dispatch `UNK_1823f45b0` at `18de4ca61`. Virtualized body. From its 5-token run the only determinable behavior: obtain the event's screen via `gJ.bcd()`, `instanceof`-test against `class_498 SignEditScreen` and `class_7744 HangingSignEditScreen`, and suppress the sign-edit screen (registry: "Disables editing signs") `[slice + registry, inferred]`. Which action follows the type test — closing via `Minecraft.setScreen(null)`, calling the screen's own `close()`, or suppressing the open — has **no token evidence** and is unrecovered `[uncertain]`.
- **`alD(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18de51550]** — decompiled body `return param_3;` — identity rethrow. No behavior `[decompiled]`.
- Continuation blocks (25): generic `ExceptionCheck` 2-way dispatchers; `ExceptionOccurred` (`0x78`) + `FUN_190dd72e0` decrypt re-entry; `ThrowNew` (`0x70`); one `FUN_190de3220` variant; `swi(3)` trampolines; bare `return`s. No dH-specific logic beyond the decrypt plumbing `[decompiled]`.

## Settings → behavior mapping

- **Zero settings constructed.** `dH.java` declares no wrapper fields; the constructor is exactly the seed mix + `super(gf.aZL((int)BqCmu, false, gh.qBzlZ))` `[decompiled dH.java:8-11]`.
- No `full-dump.jsonl` entries for dH (0 indy sites) — no hidden setting names recoverable as ints `[decompiled absence]`.
- Consequence: hard-wired toggle, no configuration surface `[inferred]`.

## Cross-module interplay

- Category peers (Misc, `gh.qBzlZ`): dC View Model, dT Multi Task, dX No Miss Delay, ec Ghost Hand, dB Full Bright.
- dJ (Mouse Tweaks) shares the window (its `Slot`/`ScreenHandler` drag machinery follows dH's run) — the two modules both react to container-family screens but through different event paths; no coupling tokens exist `[slice + registry]`.
- `gJ` has no cancel flag (`bcd()` getter only) — so dH cannot veto the open through the event; it must close after the fact `[decompiled gJ.java]`.

## Unrecovered

1. **Module id 138** — registry-sourced; `(int)BqCmu` has no dump verification.
2. **The close/suppress mechanism** — no `setScreen`/`close`/cancel token in the run. The three candidate implementations are not separable.
3. **Scope question**: whether dH blocks both sign types equally (both classes are in the run — yes by evidence), and whether it additionally blocks the sign text submit packet — only the two screen classes are evidenced; any packet-level behavior would need `gL$tj` tokens, which are absent.
4. **Whether the screen event is consumed (cancelled) or dH merely reacts after the screen opened** — reactive closing is the only model consistent with the event API (`gJ` carries no cancel flag).
5. **Flag `false` in `gf.aZL(138, false, gh.qBzlZ)`** — meaning unrecovered.
6. **Repeat-open race** — if dH closes the screen reactively, the window between open and close (and whether the server already received sign-edit opens) is not static-recoverable; no timing tokens exist.

## Shared helpers cited (one line each)

- `gg`/`iS` — module base; listener registration via `hF` bus on enable (`gg.aaj()`).
- `gJ` — screen event payload: `gJ(Screen)`, `bcd()` getter `[decompiled gJ.java]`.
- `hG`/`mw` — listener annotation (default NORMAL priority) + 6-constant priority enum.
- `gf`/`gh` — metadata record + category enum (`qBzlZ` = Misc).
- Neighbor: dJ (Mouse Tweaks) — surface above; see its own spec for the full container-drag behavior.

---
Confidence: MEDIUM on the trigger surface (clean 5-token run, exact screen classes) and LOW on the reaction (unrecovered close mechanism, no settings to compensate).