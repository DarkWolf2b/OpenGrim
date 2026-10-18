# Batch 24 audit — dM, cX

Session: 2026-10-17 (audit-2026-10-17). Auditor+fixer: batch-24 subagent.
Modules: dM (Auto Market), cX (Fake Player).
Compile: `.\gradlew.bat compileJava -q --offline` → exit 0 (three runs, no output).

Sources used per id from `analysis/tools/audit/source-map.tsv`; both decompiles
verified by their declared class before use (`dM_.java:91 public class dM`,
`cX.java:78 public class cX`). Constant/order cross-checks: `javap -c -p` on
`analysis/decompiled/jar-casesafe/sixtwo/*.class` (inner classes copied under
their true names to a temp dir — javap cannot resolve `cX_$ss.class` by name),
`analysis/decrypted/full-dump.jsonl`, `analysis/traces/2026-10-17/`, the
bootstrap decompile (`analysis/decompiled/bootstrap/mixin/accessors/`) and the
yarn-mapped `minecraft-merged` jar for vanilla signatures. Helper classes read:
`mA` (key/mouse enum), `gg` (base: `aaj`/`YO`/`bab`), `jg` (`bBL`/`bBx`), `jc`
(`bzq`/`bzw`/`bzo`/`bzE`, via `payload-cfr`), `jh` (native), `cX$ss`/`cX$st`,
`av`, `hw$tv`, `gA`/`gz`/`gM`/`gN` and their bootstrap bridges.

---

## cX — Fake Player (`utility/FakePlayer.java`)

- **Post-fix parity: ~90% · status: ported · fixed: yes**
- Settings: 2/2 exact — "Name" (cX.java:101 `new cy(this, "Name").Un(32).Up("")`,
  default `""`, max length 32) and "Copy Inventory" (cX.java:117
  `new cJ(this, "Copy Inventory").WE(false)`, default false), registered in
  constructor order. `Un(32)` has no equivalent in this settings API, so the
  value is truncated at the use site (AutoLogout convention, `profileName()`).
- Fixes (this session):
  - **Status-effect durations 1:1**: all three spawn effects use **9999** ticks,
    not 1_000_000 — trace 2026-10-17 `cX_`: `aaH`/`aaI` returned `9999` for all
    three decrypt sites (slots 22049/20063), matching `aak` (cX.java:527-529).
    Amplifiers/order kept: REGENERATION 2, ABSORPTION 4, RESISTANCE 1.
  - **Custom-item eligibility 1:1**: `aax` (cX.java:963-1021) uses the
    `cX$st` switch map — javap of `cX$st.class`: `uFllB[UseAction.EAT] = 1`,
    `uFllB[UseAction.DRINK] = 2`, switch returns true for 1/2. The previous
    `getMaxUseTime > 0` test was wrong; now `UseAction.EAT || DRINK`.
  - **Tick state machine 1:1** (`aat`, cX.java:660-962; order verified from
    bytecode): idle → clear use; restore `heldItem` when the hand stack is
    empty and mode is custom; eligibility → clear+return; shield mode → clear
    only when `isCoolingDown(Items.SHIELD.getDefaultStack()) && isUsingItem()`;
    custom capture (`aHWam = stack.copy()`) and re-apply when the item differs;
    start use only when not already using in the use hand.
  - **Living-entity flags implemented** (`aay`, cX.java:613-657): flag 1 = using
    item, flag 2 = off-hand active (`using && hand == OFF_HAND`) through the
    bootstrap accessor — added `opengrim$setLivingFlag` (`@Invoker("setLivingFlag")`,
    port of `callSetLivingEntityFlag` on `method_6085`) to
    `mixin/LivingEntityAccessor.java`; called from the tick machine,
    `setUseMode` and the attack handler (previously absent entirely).
  - **Yaw sync 1:1** (`aaA`, cX.java:424-449): now also writes `lastYaw`,
    `lastPitch`, `lastBodyYaw = bodyYaw`, `headYaw`, `lastHeadYaw` (the previous
    port only set the current values, breaking interpolation).
  - **Remove 1:1** (`aaB`, cX.java:533-566): `world.removeEntity(id, DISCARDED)`
    when a world is loaded, then `setRemoved(DISCARDED)`, then null — replaces
    `discard()`; trace 2026-10-17 `cX_` shows `aaB` ×4 for 2 enable cycles
    (aak→aaB, YO→aaB) exactly as the port now calls it.
  - **Disable hook 1:1** (`YO`, cX.java:1510-1515): `remove(); useMode = IDLE;
    heldItem = EMPTY;` (mode/held reset was missing).
  - **Pre-attack handler implemented** (`aau`, cX.java:1319-1441) on
    `AttackEntityEvent` (port of the bootstrap `InteractionEventBridgeMixin`
    HEAD of `PlayerEntity.attack`): only when the attacked entity is the fake;
    always runs the wind-burst jump; while shield-using in the use hand and the
    attacker is behind (`jg.bBL`, jg.java:368-391 — ported inline as
    `isBehind`: horizontal direction dotted with
    `getRotationVector(0, getHeight())`), a blocking-disabling weapon
    (`jc.bzo`, jc.java:492-527 = WEAPON component with
    `disableBlockingForSeconds() > 0`) clears the use and sets the shield
    cooldown `= seconds × 20`; otherwise `onDamaged(playerAttack)`.
  - **Wind-burst jump implemented** (`aaz`, cX.java:1151-1233): singleplayer
    gate (`isConnectedToLocalServer`), WIND_BURST enchantment present
    (`jc.bzq` = `jh.bCg(stack, Enchantments.WIND_BURST)`; field_50159 mapped to
    WIND_BURST by positional javap of the intermediary vs yarn `Enchantments`),
    falling and not gliding (`jc.bzw`, jc.java:1697-1734 = `fallDistance > 1.5
    && !isGliding()` — bytecode-verified), boost `{1.2, 1.75, 2.2}[lvl-1]` for
    lvl ≤ 3 else `1.5 + (lvl-1)*0.35`, `fallDistance = 0`. The previous port
    kept the constants as dead code.
  - **Enable/spawn 1:1** (`aaj`/`aak`): in-game gate (`gg.bab()` = player, world,
    interactionManager, networkHandler all non-null), `remove()` before the new
    entity, off-hand copy outside the Copy-Inventory gate, armor loop
    `getInventory().setStack(base+i, …copy())` for i 0..3.
- Remaining gaps (in the class javadoc):
  - [U] script slot appliers `aar(String, ItemStack)` (cX.java:576-600, CFR
    failed — reconstructed from javap: 19 hash aliases → 3× main hand, 2× off
    hand, 2× each armor slot, 6 routed to `aav`) and `aav` (cX.java:1027-1149;
    "hotbar" is dump-confirmed, `hotbar1..9` max = 9, the second prefix + armor
    max are not). The alias strings are double-DES-encrypted (static table key
    from `gb.aYR` + site key) and absent from `full-dump.jsonl` and the trace;
    there is no script shell in this port to call them.
  - [G] copy-inventory base (DES int ~32446, absent from full-dump) taken as 36
    (the 4 armor slots, `PlayerInventory.EQUIPMENT_SLOTS` feet..head) —
    labeled `COPY_INVENTORY_BASE`.
  - [S] `jh.bCg/bCh` are native; mirrored with `EnchantmentHelper.getLevel`
    (WaterSpeed registry pattern).
- Evidence: trace 2026-10-17 `cX_` (aaj/aak/aaB×4/aaA×2/aat×6/YO×2, `aaI`
  `aaH` → 9999 ×3, strings "g" only); javap `cX_`, `cX_$ss` (ordinals
  uksqJ/RymlV/vNDXP = idle/shield/custom), `cX_$st` (EAT/DRINK map), `jc`
  (`bzq`/`bzo`/`bzw`), `mA`; full-dump `sixtwo.cX` (`hotbar`, int table).

## dM — Auto Market (`utility/AutoMarket.java`)

- **Post-fix parity: ~45% over the recovered Java (buy/sell 0% — engine native) · status: shell · fixed: yes (partial)**
- Settings: 3/3 present — "State Key" `cD` default **-999** (dM.java:135
  `.VO(-999)`); "Add Rule Key" `cD` default **2** = `mA.OGQHF.cmO()` — mA is the
  key/mouse enum (MouseInputMixin maps mouse buttons via `mA.cmN(button)`), and
  javap of `mA.class` static init constructs OGQHF with code `iconst_2` (the
  middle mouse button); "Edit Market" is a `cI` action button (`bz::KE`,
  dM.java:162) — this settings API has no button kind, registered as an empty
  `GroupSetting` placeholder (Esp2D "Edit ESP" convention).
- Fixes (this session):
  - **Fabricated behavior removed**: the old packet handler wrote a `lastTickAt`
    timestamp and the tick handler polled both keys with `GLFW.glfwGetKey`
    without the original's guards; neither exists in dM. Replaced with the
    recovered dispatcher.
  - **Key dispatcher structure 1:1** (`anz`, dM.java:477-697): in-game gate
    (`bab()`), press-only, client-GUI guard (`currentScreen instanceof av` —
    port: `AnimatedScreen`/`WheelScreenBase`), Add Rule Key branch (container
    screen + hovered-slot validation `anK`: slot present, has stack, non-empty),
    State Key branch (running → `pauseAndNotify()`, else `startSession()`).
    Key polling covers keyboard and mouse buttons 0-6 (the original's `gA`
    carries both; the default Add Rule Key is a mouse button).
  - **Packet entry guard 1:1** (`anA`, dM.java:697-762): `!QvQJq` → return;
    trace 2026-10-17 `dM_` (anA ×42 per session, returning on the guard, no
    anJ/anE calls) confirms the guard is the whole observable path when the
    engine is idle.
  - **Session structure**: `pauseSession` (dM.java:1592-1646 order: clear
    `QvQJq` then reset), `pauseAndNotify` (dM.java:1480-1548: `!QvQJq` → return,
    then pause), `startSession` (dM.java:1011-1069 `anC`: reset, `QvQJq = true`,
    and the `reopenMarket` tail when the screen is not a `HandledScreen`),
    `reopenMarket` (dM.java:1550-1590: close screen, reset), `resetEngine`
    (dM.java:763-773 `anD` call structure), `isRunning` (dM.java:1397-1399
    `aoa`). [G] the start path skips the absent config/market gates
    (`jd.bAk`, `rD.dlO().bqh().bqK/bqI`) — the `QvQJq` flip itself is recovered
    (dM.java:1060).
  - **Disconnect reset** [S]: `any(gM)` (dM.java:378-411, bootstrap
    ClientWorldEventBridgeMixin:53-64 = `ClientWorld.disconnect`) has no event
    in this framework, so `pauseSession()` + `resetEngine()` run on the first
    tick without a world/player (batch-16 cR convention).
  - **Enable hook 1:1 structure** (dM.java:424-429: `anD()` + manager reload).
- Remaining gaps (all in the class javadoc):
  - [N] the market engine — `nO` orders, `nR` session timing, `nP` offers, `nM`
    rules, `nB/nC/nD/nA/nE` (the five `nH` steps), `nK` context, `nJ` results —
    native (j2cc VM) in the original; the five-step chain with its `nJ.cxz()`
    short-circuit and the `cwq/cwy/cwz` side-effect entries are recovered
    structurally only (`OgFsa = List.of(nB, nC, nD, nA, nE)`, dM.java:172).
  - [U] market config store (`iu`/`iy`/`iz` via `rD.dlV().bnM().bmP()`), market
    API (`iC.bqK/bqI`), notifications (`cN.XI/XJ/XQ`), server-address/URL
    helpers (`jd.bAk/bAn`), editor screen (`bz.KE/KH/KD`), and
    `rD.dlO().bpW()` (post-login reload, dM.java:428/474 — `gN` = post-login
    per bootstrap ClientLoginEventBridgeMixin:19-30).
  - [U] the pause hotkey compared at dM.java:546 (DES int slot 27464 — not in
    full-dump, not hit by the trace) and both `updateFallbackTimeout` long
    kernels (slots 29691/17688, dM.java:453-459) — no framework hook exists
    for the latter.
  - [U] `anB(gP)` and `anw(gq)` event identities: neither `gP` nor `gq` is
    constructed anywhere in the recovered bootstrap/payload trees, so their
    moments are unknown and the handlers are not wired.
  - [U] `runMarketOpenCommand(iy)` (dM.java:432-451, `jd.bAn`) and the `bz`
    accessor block (dM.java:1262-1478) — no consumers exist in the port.
- Evidence: trace 2026-10-17 `dM_` (aaj → anD; anA ×42 with no engine calls);
  javap `dM_` (anz/anz guards, aak-equivalent settings, `mA` static init);
  full-dump `sixtwo.dM` (slot 22296 → -999; no (IJ)J records; no slot 27464);
  bootstrap bridges (KeyMappingClickEventBridgeMixin/KeyboardInputMixin/
  MouseInputMixin for `gA`/`gz`, ClientLoginEventBridgeMixin for `gN`,
  ClientWorldEventBridgeMixin:53-64 for `gM`, InteractionEventBridgeMixin for
  `hw$tv`, ConnectionEventBridgeMixin:43 for `gL$tk`).

---

Batch summary: cX ported at ~90% (script slot appliers [U], armor base [G]);
dM kept as a documented shell at ~45% of the recovered Java — the module's own
Java is fully translated, but every behavior it delegates to (native engine,
config store, market API, notifications, editor) is unported, so buy/sell
automation remains 0% functional by design. Changed files:
`utility/FakePlayer.java` (rewrite), `utility/AutoMarket.java` (rewrite),
`mixin/LivingEntityAccessor.java` (added `opengrim$setLivingFlag` invoker, port
of the bootstrap `callSetLivingEntityFlag`). No mixin config change needed
(`LivingEntityAccessor` is already registered).
