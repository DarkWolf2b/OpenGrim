# fJ — Target Margin (module id 6, key=6, bind=-999)

## Evidence base

- Registry: `fJ  sixtwo.fJ  Target Margin  "Invisible version of hitboxes"  key=6  bind=-999`
  (`analysis/specs/registry.tsv`); coverage matrix row `fJ  Target Margin  0 0 0`
  (`analysis/specs/coverage-matrix.tsv`) — no prior spec work.
- `analysis/decompiled/payload-decrypted/sixtwo/fJ.java` (527 lines, CFR with indy
  call-site scaffolding intact). No `payload-named` divergence of interest.
- Raw protected class `analysis/jars/payload-raw/sixtwo/fJ.class` disassembled with
  `javap -v -c` to confirm per-call-site `ldc2_w` int/long constants.
- Runtime interception corpus: 136 records for `"sixtwo.fJ"` in
  `analysis/decrypted/full-dump.jsonl`, all `bsm:"aUU"`, `desc:"(IJ)I"`, covering
  79 distinct `(seed, key)` pairs — one per entry of the 79-slot DES int table.
- Helper sources read: `analysis/decompiled/payload-named/sixtwo/cz.java` (slot-set
  widget), plus shared-widget semantics carried over from the ff/et specs (`cA`, `cJ`).
- **No native corpus**: fJ is pure Java — no `sixtwo_fJ.c` stub file, no image
  addresses `0x18xxxxxxx`, no j2cc virtualization in this class. Everything below is
  cited to Java line numbers, not image addresses.

## Runtime model

- Construction: `super(gf.aZL(6, false, gh.xwjCw))` [fJ.java:317] — module id 6,
  starts disabled, same category token `gh.xwjCw` as ff (Fake Lag).
- fJ implements a **render/aim-geometry filter** by overriding the vanilla
  `Entity#getTargetingMargin()` return value through a mixin event. The event class
  is `sixtwo.hr` [fJ.java:39], verified to wrap an `Entity` plus a
  `org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable<Float>`:
  `hr.bdb()` returns the entity, `hr.bdc()` returns the CIR, and the handler cancels
  vanilla behavior with `hr2.bdc().setReturnValue(Float.valueOf(this.aUP(entity)))`
  [fJ.java:87-88]. Since vanilla `getTargetingMargin()` returns 0.0f, every
  "disable" branch in `aUP` restores vanilla hitbox targeting.
- Module state is a single cached float `QAlRd` [fJ.java:57], redrawn from the
  random-range widget on every bare-entity event; the margin handler only reads the
  cache, so the effective margin is re-randomized per entity event rather than per
  frame.
- Enabled gating happens in the event handler (`this.bab()` [fJ.java:82]); when the
  module is off the CIR is untouched and vanilla margin applies.
- Indirect-call machinery: 79 static indy call sites resolve small int constants
  (setting-name char codes, array lengths) through `aUU → aUT → aUS` with a
  per-call-site long key [fJ.java:59-76, 149-159, 91-117]. All 136 runtime
  resolutions recorded in full-dump.jsonl reconcile 1:1 against the 79-entry table
  index formula `idx = seed ^ (key & 0x7FFF) ^ 0x1BCC` [fJ.java:93] (79 distinct
  indices, max 78) — the integer layer is fully explained; the decrypted literals
  are the plain ints already visible in the CFR output.

## Per-handler semantics

- `@hG public void aUN(hw.tv tv2)` [fJ.java:74-76] — fired on the bare-entity event
  (same `hw` event family ff uses for latching). Unconditionally re-draws the
  cached margin: `this.QAlRd = this.KbVJm.UN().floatValue()`. `cA.UN()` is the
  random-range draw (uniform between the widget's current range bounds — for
  `cA` semantics see ff.md). No enabled check: the cache refreshes even while the
  module is off (harmless, since `aUO` gates on `bab()`).
- `@hG public void aUO(hr hr2)` [fJ.java:78-89] — targeting-margin override event.
  Returns early without touching the CIR if `!this.bab()` (module disabled).
  Otherwise sets the return value to `aUP(hr2.bdb())`.
- `public float aUP(Entity entity)` [fJ.java:164-319] — the actual margin decision,
  evaluated in this order (each early return restores vanilla 0.0f margin):
  1. `entity == rD.dlmvG.player` → `0.0f` [fJ.java:181-182] — never inflate own
     targeting margin.
  2. `NStEn.WF() && rD.dlmvG.player.isHolding(Items.COBWEB)` → `0.0f`
     [fJ.java:190-210] — self-disable while holding cobweb.
  3. `Fkuth.WF() && !EqPct.Uy()` → `0.0f` [fJ.java:218-238]. `cz.Uy()`
     [cz.java:65-67] is `vTMHw.contains(player.getInventory().getSelectedSlot())` —
     i.e. with "Only For Slots" on, the margin boost applies only when the selected
     hotbar slot is one of the chosen slots.
  4. `entity instanceof LivingEntity && XIgqS.WF() && jg.bBs((LivingEntity)entity)`
     → `0.0f` [fJ.java:248-280]. `jg.bBs` is the shared "entity box intersects a
     cobweb block" scan (same predicate et/Anti-Web uses for its own gate).
  5. `entity instanceof PlayerEntity && CCWrA.WF() && rD.dmc().ddy(player)` →
     `0.0f` [fJ.java:285-311]. `rD.dmc().ddy` is the shared friend-list membership
     test (same call shape as fq/ff friend filtering).
  6. Otherwise `return this.QAlRd` [fJ.java:319] — the inflated margin.
- Static helpers are obfuscation infrastructure, not behavior:
  `aUS(int,long)` DES/CBC/NoPadding table decrypt with memo cache `QfLOA`
  [fJ.java:91-117]; `aUR(byte[])` UTF-8-ish byte→char decoder for the static
  string [fJ.java:120-148]; `aUT`/`aUU` indy bootstrap pair [fJ.java:59-76,
  149-159]; `aUQ` identity rethrow [fJ.java:150-152].
- No tick, packet, render, or world handlers are declared — fJ is purely the
  margin hook plus the cache redraw.

## Settings→behavior

All names decoded from plain int char arrays in the constructor
[fJ.java:318-409]; widget builders are the shared ones documented in ff.md.

- `cA KbVJm` — `"Size"` [fJ.java:319]
  `.UG(0.01).UE(0.0).UF(2.0).UI(0.0, 0.0).UH(lMLXr)`
  → step 0.01, min 0.0, max 2.0, default random range (0.0, 0.0), unit `lMLXr`
  (see Unrecovered). Because the default range is (0.0, 0.0), the shipped default
  margin is 0.0 — the module is a no-op until the user raises Size.
- `cJ CCWrA` — `"Ignore Friends"` (chars 73 103 110 111 114 101 32 70 114 105 101
  110 100 115) [fJ.java:327-339] `.WE(false)` — default off; when on, players on
  the friend list keep vanilla margin.
- `cJ NStEn` — `"Disable If Holding Cobweb"` (25 chars, starts 68 105 115 97 98
  108 101 ...) [fJ.java:340-368] `.WE(false)` — default off; when on and the local
  player holds `Items.COBWEB`, margin reverts to vanilla.
- `cJ Fkuth` — `"Only For Slots"` (chars 79 110 108 121 32 70 111 114 32 83 108
  111 116 115) [fJ.java:369-383] `.WE(false)` — default off; visibility-gates the
  slot selector (`this.EqPct.Vf(this.Fkuth::WF)` [fJ.java:408]).
- `cz EqPct` — `"Slots"` (chars 83 108 111 116 115) [fJ.java:384] — multi-select
  hotbar-slot set (`Set<Integer>` of selected-slot indices); no default slots are
  programmed (constructed with the name only), so with "Only For Slots" on and an
  empty set, `Uy()` is false for every slot and the margin reverts to vanilla.
- `cJ XIgqS` — `"Disable If In Cobweb"` (20 chars, starts 68 105 115 97 98 108
  101 ...) [fJ.java:385-405] `.WE(false)` — default off; targets standing in
  cobweb keep vanilla margin.

## Unrecovered

- **Unit string `lMLXr`.** The only literal not present in plaintext. It is
  DES/CBC/PKCS5Padding-decrypted in `static{}` from the 8-byte cipher
  `"\u00acheJ\u00f67<p"` (bytes ac 68 65 4a f6 37 3c 70, ISO-8859-1) with key
  `var11 = qeHDl ^ 27484011507191` [fJ.java:419-440], where
  `qeHDl = gb.aYR(4976854293152449724L, -8816708037096018054L, fJ).a(65789968378512L)`
  [fJ.java:417] is a native pool decrypt (no runtime record for `gb.aYR` exists in
  full-dump.jsonl, and calibration against the solved ee key `0x3e2ef0d4a171`
  shows no simple arithmetic relation to the `aYR` arguments). fJ has no
  `(IJ)Ljava/lang/String;` record in the dump (peer modules recorded units like
  `' blocks'`, `' ms'`, `' ticks'`), so the string was never decrypted during the
  capture. Peer-consistency suggests a length unit but this is NOT asserted.
- **`hw.tv` event identity.** fJ subscribes to `hw.tv` (bare-entity family) for the
  cache redraw. The precise vanilla injection point (per-entity tick vs spawn vs
  track) is determined by the central event-bus mapping, not by this class; the
  redraw frequency is therefore "per whatever hw.tv fires on", which only matters
  for how often the random margin re-rolls.
- **Random draw distribution of `cA.UN()`.** Shared widget internals (bounds vs
  uniform draw) live in `cA`; treated as a shared primitive per ff.md, not
  re-derived here.