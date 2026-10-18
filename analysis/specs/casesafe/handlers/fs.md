# Knockback Displacement (sixtwo.fs) — handler-derived behavior spec

Class: `sixtwo/fs` · display name **Knockback Displacement** · registry description
"Allows to knockback target in custom direction" · key 151, bind -999 [registry].
Superclass `gg` (module base). This module is largely **Java-side state + native
behavior**: the constructor is fully decompiled and the pool slice cleanly separates
fs's own state fields from the neighboring fr (Kill Aura) settings run that shares the
window.

## Evidence base

1. PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fs.c` — 47 handlers; every
   behavioral handler is the standard dispatcher stub (`BLOB_DECRYPTOR` →
   `JNI->ExceptionCheck` → 2-way indirect jump into the shared VM interpreter). No
   behavior bytecode recoverable.
2. Pool slices (pool base rva `0x301ee40`): main behavior slice
   `POOL[0x133bc,0x313]` decrypted by 31 handlers — **straddles fr's (Kill Aura)
   settings run** (tokens `uuiVA, XPsdZ, loPKM, gFhjZ, vnYZx, xCupG, QnRHK, hJKeY,
   kOSut, vlCiC, ZacKI, EsIxA, znCAf, TSzIa, nuObX, bjunC, JmYqQ, nMsgI, JWNzq,
   NRHKu, HTLEq, GAmVW, CiqUj, bqKDj, zgYYt, FWguf, dlzgV, jtUDD, vUmBx, TRsxw,
   tBpfA, pboNi, esnRH, lDjkh, KNaqi, waYha` + fr's `aNz ()Lsixtwo/ou;`, `aNA
   ()Lsixtwo/os;` and int constants `OxsWw, PieGJ, nUNYg, jxlIg, XdhDb, PYAVO, aOV,
   aOZ` — all fr, NOT fs). fs-attributable tokens are the ones interleaved with fs's
   own field names (listed below). Minor slices: `YO`/`aaj` base `POOL[0x3806,0xbf]`,
   clinit `POOL[0x226,0xd]`, indy `POOL[0x857,0x26]`, `POOL[0xb1,0x5]` (`"Tlzw\0"`
   obfuscation fragment).
3. Java shell `analysis/decompiled/payload-named/sixtwo/fs.java` (constructor fully
   decompiled — all settings, defaults, and state-field initializers).
4. Helpers read for vocabulary: `iX.java` (`Ergzg` = movement `KeyBinding[4]`
   `{forward, back, right, left}`), `oW$vp.java` (`dxg` token), `jc.java` (`bzt`
   token), event shells `gZ`/`gZ$tt` (attack/crosshair-click event — verified via
   fq "Hitbox" `aMD(gZ$tt)` which reads `crosshairTarget instanceof EntityHitResult`),
   `gA` (input event, carries `KeyInput`), `gL$tj` (**outbound C2S packet** per
   ey.md), `gv` (client tick), `gH$th` (pre-motion tick), `gM` (marker tick).
5. Yarn: `method_15393` = `MathHelper.wrapDegrees(F)F`, `method_75882` =
   `canSprint()Z`, `class_2535` = `ClientConnection` (`dpm ()Lnet/minecraft/class_2535;`),
   `class_304` = `KeyBinding`, `class_1297` = `Entity`, `callSendPosition` = the
   `ClientPlayerEntity.sendPosition` accessor mixin (see
   `analysis/decompiled/bootstrap/mixin/accessors/`).
6. Decrypted constants: full-dump has fs entries for `aPT("s",…)`; the static
   `aRvFo` string is the axis suffix for setting `jJzSe` (a `" deg"`-style unit —
   exact value resolved through fs's `aPT` int chain, not independently confirmed).
7. Cross-module consumer: `bN.java` (HUD widget) reads `fs.bag()` (enabled) and
   `fs.aPz().SZ()` (a mode-child selected state) to color an indicator.

## Runtime model

- **Purpose**: when the local player takes knockback, re-issue the outgoing movement
  packets so the *displacement* happens in a custom direction/angle instead of the
  server's natural knockback vector — i.e. control where the hit pushes you.
- **State fields** (fs.java:26-39, decompiled):
  - `LypUB = 180.0F` — current "Given Direction" angle cache (initialized to the
    setting default 180.0).
  - `PnWns : float` — working angle (candidate: the live/animated direction angle).
  - `QOpIL : Entity` — a tracked entity (candidate: last attacker / nearest target
    for the Dynamic direction source).
  - `TvEdE : int` — step counter (candidate: remaining "Angle Step" increments in a
    dynamic sweep).
  - `btLpD`, `VOVop`, `bYXHg`, `URrjv : boolean` — latches; slice positions:
    `btLpD` next to `aPn`, `VOVop`/`TvEdE` next to `aPj`/`aPl`, `bYXHg` next to
    `bapCK`, `URrjv` between `YyudN` and `aPo`. Roles unrecovered (candidates:
    displacement active, knockback received, step direction sign, packet-hold
    active).
  - `FFrtc : double` — displacement distance/offset accumulator.
  - `bapCK : Queue<Packet<?>>` — outbound packets held/rewritten during the
    displacement (`aPO()` exposes it to other classes).
- **Event wiring** (fs.java:44-108, all native):
  - `aPg(gL$tj)` — **outbound C2S packet listener, priority `mw.CRUCIAL`** — runs
    before all other packet listeners; rewrites/cancels outgoing move packets while a
    displacement is in progress. `aPp(gL$tj)Z` is the internal packet filter
    (candidate: `instanceof PlayerMoveC2SPacket`).
  - `aPe(gv)` — client tick; `aPf(gH$th)` — pre-motion tick (the displacement's
    motion injection point); `aPc(gM)` — marker tick.
  - `aPh(gA)` — input event: detect "Change Angle Key" (`cD` keybind setting
    `LjfJW`, default `.VO(-999)` = unbound) via `aPm(KeyBinding, KeyBinding)`; the
    slice carries `iX.Ergzg` (movement WASD `KeyBinding[]`) and `method_75882`
    (`canSprint`) — the dynamic-angle source is plausibly the held movement key
    (e.g. forward ⇒ away from wall, side keys ⇒ lateral), with `wrapDegrees` normalizing.
  - `aPd(gZ$tt)` — attack/crosshair-click event: candidate displacement trigger on
    attacking (knockback happens after an attack) `[inferred]`.
- **Direct send path**: slice carries `dpm ()Lnet/minecraft/class_2535;` (get the raw
  `ClientConnection`) and `callSendPosition` (the `ClientPlayerEntity` send-position
  accessor) — the module sends crafted position packets directly through the
  connection, bypassing normal movement processing, and queues the originals in
  `bapCK` `[inferred from token cluster, strongly supported]`.

## Per-handler semantics

All behavior handlers decrypt `POOL[0x133bc,0x313]` and dispatch into the VM; bodies
unrecovered. Addresses are image addresses.

- **`aPg (Lsixtwo/gL$tj;)V` — outbound packet rewriter, `mw.CRUCIAL` [18bd1c720]**.
  Core hook. While the displacement latch is set, intercept outgoing movement packets:
  compute the displaced position/rotation (angle from `PnWns`/`LypUB`, distance from
  `FFrtc`), send the spoofed packet via the `ClientConnection` (`dpm()` token), hold
  the original in `bapCK`. Formula unrecovered.
- **`aPn (Lnet/minecraft/class_1297;DZI)Z` — displacement step [18bc983e0]** —
  takes an Entity, a double (distance/delta), a boolean (candidate: "silent"), an int
  (candidate: step count). Slice shows it adjacent to `btLpD`. Most plausible: advance
  one displacement step for/against the entity. The public `aPi(Entity, float,
  boolean)Z` [18bd249c0] is a variant entry (float angle) — exposed for other modules
  / the render path.
- **`aPm (Lnet/minecraft/class_304;Lnet/minecraft/class_304;)Z` — key pair check
  [18bc97f10]** — input helper comparing two `KeyBinding`s (candidate: "Change Angle
  Key" vs a movement key, or pressed+was-pressed edge detection).
- **`aPl (F)V` [18bc929e0] / `aPo (F)V` [18bca3b30]** — float setters (candidate:
  set working angle `PnWns` / increment angle by "Angle Step" `hyauK`).
- **`aPj ()F` [18bd24bd0]** — float getter (candidate: current working angle,
  consumed by the packet rewriter).
- **`aPk ()V` [18bd29dd0] / `aPq ()V` [18bcac560] / `aPr ()V` [18bcb2f30]** — void
  steps: candidate roles — start displacement, end displacement/flush `bapCK`, reset
  latch state. Not disambiguated.
- **`aPp (Lsixtwo/gL$tj;)Z` [18bca4c00]** — packet-type filter for `aPg`.
- **`aPh (Lsixtwo/gA;)V` — input event [18bd1f6a0]** — "Change Angle Key" handling
  (rotate `LypUB` by `hyauK` "Angle Step" per press; slice carries `wrapDegrees`).
- **`aPd (Lsixtwo/gZ$tt;)V` — attack/click event [18bcb4d10]** — candidate trigger
  (begin displacement on attacking) `[inferred, uncertain]`.
- **`aPe/aPf/aPc` — tick family [18bcb7ec0, 18bcbffd0, 18bc927f0]** — movement
  packet staging per tick and latch maintenance; exact split unrecovered.
- **`YO ()V` [18bc92500] / `aaj` (inherited path)** — module-base tick-gate slice
  (`POOL[0x3806,0xbf]`), standard gc/gd 2-state tick enum.
- `aPP` (MatchException identity rethrow) [18bcc9e60], `aPQ ([B)String` [18bcc9ef0]
  string decoder, `aPR (IJ)I` [18bcf3340] int-constant decrypt kernel,
  `aPT`/`aPS` indy bootstraps [18bcffaa0, 18bcfea90] — machinery, no behavior.

### Trivial accessors (grouped)

Pure stub → jumptable, no pool window: `aPB`/`aPD` (`cC` `hyauK`/"Angle Step",
`jJzSe`/"Given Direction"), `aPA` (`cD` `LjfJW`/"Change Angle Key"), `aPE` (`cJ`
`DtLvL`/"Hide Rotation"), `aPs`/`aPv` (`ct` `IcLmm`, `xtaAk`), `aPt`/`aPu`/`aPw`/
`aPx`/`aPC`/`aPt`... (`cu` children: `oBzcq`, `YyudN`, `HIGji`, `FXNOb`, `lOgKN`,
`clxNa`), `aPy` (`ct` `wyZEk` "Knockback Direction"), plus state getters `aPG`/`aPF`
(floats `LypUB`/`PnWns`), `aPL` (double `FFrtc`), `aPH` (`Entity` `QOpIL`), `aPI`
(int `TvEdE`), `aPJ`/`aPK`/`aPM`/`aPN` (booleans), `aPO` (queue `bapCK`). Type groups
match the field census; per-getter identity inside type groups unrecovered.

## Settings → behavior mapping

Tree (constructor fs.java:144-328, all verbatim):

| field | setting | type / chain | behavior link |
|---|---|---|---|
| `IcLmm` | (group, 4-char name — decrypted names list lacks a 4-char entry; most plausibly "Mode") | `ct` | top selector |
| `oBzcq` | — Rotation | `cu` child of `IcLmm` | displacement spread over movement packets (rotational drift) |
| `YyudN` | — Instant | `cu` child of `IcLmm` | displacement in one step |
| `xtaAk` | Displace | `ct` | when to displace |
| `HIGji` | — Always | `cu` child of `xtaAk` | displace on every knockback event |
| `FXNOb` | — With Knockback Only | `cu` child of `xtaAk` (19-char name; longest child array) | only when actual knockback velocity was applied |
| `wyZEk` | Knockback Direction | `ct .SO(0)` (default index 0) | direction source |
| `lOgKN` | — Dynamic | `cu` child of `wyZEk`; `.Vf(lOgKN::SZ)` revalidation from `LjfJW` (Change Angle Key) and `hyauK` (Angle Step) | derive direction from input state (movement keys via `iX.Ergzg` + `canSprint`) sweeping by `wrapDegrees` |
| `clxNa` | — Direction | `cu` child of `wyZEk`; `.Vf(clxNa::SZ)` revalidation from `jJzSe` | fixed "Given Direction" angle |
| `jJzSe` | Given Direction | `cC .Vy(1.0).Vw(-180.0).Vx(180.0).VA(180.0).Vz(<static aRvFo>)` — step 1, −180…180, default 180 | the manual angle (degrees); `LypUB` initialized to this default |
| `hyauK` | Angle Step | `cC .Vy(1.0).VA(90.0).Vw(1.0).Vx(180.0)` — step 1, 1…180, default 90 | per-press angle increment for "Change Angle Key" / dynamic sweep |
| `LjfJW` | Change Angle Key | `cD .VO(-999)` (unbound by default) | keybind rotating the given-direction angle |
| `DtLvL` | Hide Rotation | `cJ` (no `.WE` — default per framework, false) | suppress the rotation packet portion / hide rotation change from aim-correction |

Note: `.Vf(x::SZ)` registrations (fs.java:324-327) are visibility/revalidation
wiring, confirming the dependency edges above.

## Unrecovered / uncertain

1. **All displacement math** — the position/velocity delta per movement packet, the
   number of spoofed packets ("Instant" vs "Rotation" split), and how `FFrtc`
   accumulates, are VM bytecode. Do not guess; pick a designer choice and record it in
   PARITY.md.
2. **Direction-source details for "Dynamic"** — which movement key maps to which
   angle, whether `QOpIL` (Entity) is the attacker providing a reference vector, and
   how "Angle Step" animates the angle over ticks, are unrecovered.
3. **Trigger chain** — whether displacement starts on the `gZ$tt` attack click, on
   receiving the server's velocity packet (no inbound listener is registered — noted:
   `aPg` is outbound-only, so velocity detection must be tick-side), or on hurt-time,
   is unrecovered.
4. **Latch roles** among `btLpD`/`VOVop`/`bYXHg`/`URrjv` and the three void steps
   `aPk`/`aPq`/`aPr` are unproven.
5. **`IcLmm` group name** — 4-char name not in the decrypted names list (which has 12
   names for 13 settings); "Mode" is an inference.
6. **`jJzSe` suffix** (`aRvFo` static string) — presumed `" deg"`; not independently
   confirmed from fs's own decrypt args.
7. **Shared-window attribution** — the `[0x133bc,0x313]` window is dominated by fr's
   (Kill Aura) settings run; only tokens interleaved with fs's own field/method names
   (`aPn, aPp, aPj, aPl, QOpIL, FFrtc, bapCK, bYXHg, LypUB, hyauK, clxNa, jJzSe,
   lOgKN, LjfJW, btLpD, VOVop, TvEdE, PnWns, aPk, aPr, Ergzg, method_15393,
   method_75882, callSendPosition, dpm, bzt, dxg, bBI`) are attributed to fs.
   `bzt` (`jc.bzt(ItemStack)`) and `dxg` (`oW$vp.dxg(boolean)`) sit in the run but
   have no fs consumer — likely neighbor leakage; do not build fs behavior on them.
8. `rdtsc` reads appear in continuation blocks only — noise.
