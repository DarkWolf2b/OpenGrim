# dY — Anti Invisible (module id 54)

## Evidence base

- Registry: `dY|Anti Invisible|Makes invisible entites visible|key=54|bind=-999` (bind -999 =
  unbound) [analysis/specs/registry.tsv:37]. Structural spec `analysis/specs/modules/dY.md`.
- Decompiled Java: `analysis/decompiled/payload-decrypted/sixtwo/dY.java` (Vineflower,
  DES literals folded to `(int)` char codes) — the entire module is 218 lines with one
  setting, one getter and static decryption kernels. No natives, no event listeners:
  coverage-matrix row `dY|Anti Invisible|0|0|0`, and no `sixtwo/dY` tokens exist in the
  pool dump (`grep -c 'sixtwo/dY' decrypted/full-dump.jsonl` → 0). Only the class *name*
  appears in the native module-registry token list of `ghidra/dumps/jna-decrypted-v2.dll`
  (alongside dG, cX, du, ds, dq, dd, dz, dw, da, cV, cW, di, cY, cZ, …).
- Helper classes: `cB` (settings-widget base), `cF` (entity-type multi-select widget),
  `jg` (math/entity helper — static entity-type universes), `jg$tJ` (native 3-constant
  enum), `mr` (label text holder: `mr.clS(int[])` builds a label from char codes,
  `mr.clT()` returns the widget id array).
- This class contains **no image-address material** — it is pure Java with no native
  handler stubs, so no `[18xxxxxxx]` citations exist for it.

## Runtime model

- `gf.aZL(54, false, gh.qBzlZ)` — registered disabled at boot, category `qBzlZ`
  (same category as dG Anti Trap, dQ Hit Sounds).
- The module declares **zero `@hG` event listeners** and **zero natives**. Everything it
  does is carried by a single `cF` widget (`vJyXR`) labeled "Entities":
  `this.vJyXR = new cF(this, mr.clS({69,110,116,105,116,105,101,115} /* "Entities" */)).VS(jg$tJ.OCdZM)`
  [payload-decrypted/sixtwo/dY.java:26-36]. `cF(this, mr)` stores the widget id
  (`NwlSF = mr.clT()`) and registers itself into the module's settings container via
  `cB.Vg(iS) → iS.bwH(this)`.
- `cF` defaults its *selected* set to `{EntityType.PLAYER}` in its constructor
  [payload-named/sixtwo/cF.java:34-36].
- `VS(jg$tJ)` (failed to decompile under CFR; recovered by `javap -c` disassembly of
  `payload-named.jar`) switches on the enum ordinal via `cF$sn.riatK` and seeds the widget's
  *candidate universe* `AcnID` from one of three static sets on `jg`:
  - `frJIr` (map value 1) → `jg.fbEDU` = `jg.bBU()`: **all** EntityType constants minus a
    26-entry exclusion set (TNT, AREA_EFFECT_CLOUD, INTERACTION, LEASH_KNOT, LIGHTNING_BOLT,
    PAINTING, ARMOR_STAND, FALLING_BLOCK, ITEM_DISPLAY, BLOCK_DISPLAY, TEXT_DISPLAY,
    FISHING_BOBBER, LLAMA_SPIT, WITHER_SKULL, FIREWORK_ROCKET, SHULKER_BULLET,
    SPECTRAL_ARROW, ARROW, EYE_OF_ENDER, EXPERIENCE_ORB, EXPERIENCE_BOTTLE, EVOKER_FANGS,
    FIREBALL, SMALL_FIREBALL, DRAGON_FIREBALL, ITEM_FRAME, GLOW_ITEM_FRAME)
    [payload-named/sixtwo/jg.java:600-640].
  - `OCdZM` (map value 2) → `jg.skTlu` = `jg.bBT()`: every EntityType whose generic type
    parameter is assignable to `LivingEntity`, with `EntityType.ARMOR_STAND` removed
    [payload-named/sixtwo/jg.java:1400-1427]. **This is dY's mode** — the UI offers all
    living entities except armor stands.
  - `iBGoL` (default arm) → `jg.hZYeV` = `jg.bBS()`: all EntityType constants via
    reflection over `EntityType.class.getDeclaredFields()` [jg.java:654-676].
- Filter predicate `cF.VX(Entity)` [payload-named/sixtwo/cF.java:230-268]:
  1. if the selected set `sulLA` is empty → `false`;
  2. else if the candidate universe `AcnID` contains the entity's type → return
     `sulLA.contains(entity.getType())`;
  3. else → `false`.
  I.e. an entity matches only when its type is both offered and selected.
- Config persistence: `SR(Map)` stores the selected set as entity-type display names
  (`EntityType#getName().getString()`) keyed by `Arrays.toString(NwlSF)`;
  `SS(JsonElement)` re-resolves names against `AcnID` and replaces `sulLA` when the parsed
  set differs, then fires change callbacks [payload-named/sixtwo/cF.java:110-179, 220-230].
- The actual invisibility override ("render invisible entities anyway") has **no in-payload
  implementation** — no class calls `dY.aqV()`, no `@hG hl`/`he` entity-render listener
  exists here, and the decrypted DLLs reference `sixtwo/dY`/`aqV` only as name/slot tokens.
  The enforcement is therefore central/native (the client's entity-render dispatch consults
  registered modules' `cF` filters while the module is enabled). The module-level contract
  is fully specified above; the consumer is listed under Unrecovered.

## Per-handler semantics

Declared members (all Java, no image addresses):

1. `public dY()` — constructor [payload-decrypted/sixtwo/dY.java:24-36]: calls
   `super(gf.aZL(54, false, gh.qBzlZ))`, then builds the "Entities" `cF` with mode
   `jg$tJ.OCdZM` as above. No other initialization.
2. `public cF aqV()` — getter returning `vJyXR` [payload-decrypted/sixtwo/dY.java:209-211].
   This is the module's entire API surface toward the render pipeline.
3. `static {}` — DES key schedule for literal decryption (`gb.aYR(-8274142678140933289L,
   625689276679862641L, …).a(230252945837289L)` seeds key byte[0]; cipher
   `DES/CBC/NoPadding`); produces `dXRUT` (long[12] encrypted literals) and `UAgHi`
   (Integer[12] memo cache) [payload-decrypted/sixtwo/dY.java:39-110].
4. `private static CallSite aqY(Lookup, String, MethodType)` — invokedynamic bootstrap
   (MutableCallSite + `aqX` collector) [payload-decrypted/sixtwo/dY.java:136-148].
5. `private static int aqX(Lookup, MutableCallSite, String, Object[])` — callsite memo:
   computes `aqW(arg0, arg1)` and pins the constant int as the indy target
   [payload-decrypted/sixtwo/dY.java:150-158].
6. `private static int aqW(int, long)` — literal decrypt kernel:
   `idx = arg0 ^ (int)(arg1 & 0x7FFF) ^ 11130`; DES-decrypts `dXRUT[idx]` with key = arg1
   big-endian bytes, takes `(b[4]<<24)|(b[5]<<16)|(b[6]<<8)|b[7]` as the literal, memoized
   in `UAgHi[idx]` [payload-decrypted/sixtwo/dY.java:159-205]. Obfuscation machinery, no
   client behavior.
7. `private static MatchException` identity rethrows (inline catch helpers).

No `@hG` listeners; no packet classes; no keybind widgets (`cD`) — `bind=-999` in the
registry simply records that the module is GUI-toggle only.

## Settings→behavior

One widget, cited verbatim from `payload-decrypted/sixtwo/dY.java:26-36`:

- `cF vJyXR` = **"Entities"** (label built from char codes `{69,110,116,105,116,105,101,115}`)
  — an entity-type multi-select:
  - candidate universe: `jg$tJ.OCdZM` ⇒ all `LivingEntity` subtypes except `ARMOR_STAND`
    (via `jg.bBT()`);
  - default selection: `EntityType.PLAYER` (added in the `cF(mr)` constructor);
  - UI add/remove via `VU/VV(EntityType)`, membership via `VW(EntityType)`, selection read
    `VZ()`, bulk set `Wb(Set)`;
  - no step/min/max/default numeric chain exists (it is a set widget, not `cC`).
- Behavior mapping: while dY is enabled, entities of selected types are rendered even when
  the server/invisibility status would hide them (registry description
  "Makes invisible entites visible" — original spelling preserved). With the default
  `{PLAYER}` selection this reveals invisible players.

## Unrecovered

- **The enforcement point.** Which central/native component reads `dY.aqV()` (or scans `cF`
  widgets of enabled modules) and forces rendering of invisible entities. The decrypted
  DLL binaries contain the strings `sixtwo/dY` and `aqV` (slot-token tables), implying a
  native consumer, but no stitched handler for it exists under `ghidra/handlers-stitched/`
  and no pool blob decodes to a dY-scoped token list. Open question: is visibility forced
  via an entity-render event in the render dispatch layer, by flipping `Entity#isInvisible`
  (class_1297 method_5869/minecraft `setInvisible` method_5648) on a shadow copy, or by
  canceling a visibility cull?
- Whether the filter also applies to spectator-like hidden entities or only to the
  `isInvisible` flag (`Invisibility` status effect / armor-stand Invisible NBT — armor
  stands are already excluded from the candidate list).
- Whether `cF` selections from *other* modules' cF widgets are consulted by the same native
  hook (several modules embed cF: dl, do, ds, du, dv, dw, dy), i.e. whether dY is a
  settings-carrier for a shared "entity visibility filter" engine or owns its own.
- Enum constant display names for `jg$tJ` (`frJIr`, `OCdZM`, `iBGoL`) are native
  (`Loader.doInit` + `dpJ(byte[])`) — only ordinals and set contents are known.