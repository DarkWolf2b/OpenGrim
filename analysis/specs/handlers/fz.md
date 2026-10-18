# fz — Auto Jump Reset (module id 23)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/fz.md`; registry row
  `sixtwo.fz|Auto Jump Reset|Reduces knockback by jumping when getting hurt|key=23|bind=-999`
  (primary key 23, active bind −999 = unbound), category `gh.xwjCw` (Combat).
- Java shell: `analysis/decompiled/payload-decrypted/sixtwo/fz.java` (99 lines,
  Vineflower, DES literals folded) — one slider + two checkboxes + two `@hG` listeners +
  one lifecycle override.
- Native: `analysis/ghidra/handlers-full/sixtwo_fz.c` — 6 handler stubs, all
  decrypt-then-VM-dispatch; no bytecode statically recoverable. Fully native-backed.
- Pool window: POOL base RVA `0x301ee40`, image
  `analysis/ghidra/dumps/jna-decrypted-v2.dll`. Yarn map:
  `analysis/jars/yarn-1.21.11+build.6.tiny`. Gate helper `mW` read directly
  (`mW.java`, payload-named/sixtwo/).

Handler → pool-blob usage map:

| Blob (off,len) | Handlers | Addresses |
|---|---|---|
| `0x13fec,0x323` | `aRT` `aRU` (shared window covering fz + fA + fB + fC) | aRT `[0x18b087870]`, aRU `[0x18b092140]` |
| `0x3806,0xbf` | `YO` (shared framework: `gg.baf→gc.aZg→gd`, `mG.cnP(FFF)`) | `[0x18b087310]` |
| `0x226,0xd` | `_5f4ceb95140d8bab50cc0ded800b2db7` (class-init) | `[0x18b0d4bb0]` |
| `0x857,0x26` | `aRZ` (indy bootstrap) | `[0x18b0d1ea0]` |

Verbatim fz-exclusive token run of `0x13fec,0x323`:
`…z aRN aRM YfgMR vfJqK CHWJb aRQ sixtwo/fz PnAIn WdogO rByTO KZLPf aRV EiuwG method_5809
uYazo ZGNVq QrNyB method_49107 CIryL likHN aRX euEJd ddesD aRW` — then the window continues
into the **fA section** (`sixtwo/fA pJNbd aSb npLQh …`), the **fB section** (`sixtwo/fB
XVRCB WFFVU …`), and the **fC section** (`sixtwo/fC sLnpv aSz pltDm method_5771 bwT
(Ljava/lang/Runnable;JJILjava/util/concurrent/TimeUnit;Ljava/util/function/Predicate;
Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture; … mixin/accessors/
ClientboundSetEntityMotionPacketAccessor method_73085 setMovement aSx (DDI)D aSy
(Lnet/minecraft/class_2743;DDD)V …`) — all neighbor sections, **not** fz's.

Yarn: `method_5809` = `Entity.isOnFire()`; `method_49107` = `Attackable.getLastAttacker()`
returning `LivingEntity` (`class_8149` = `net.minecraft.entity.Attackable`); fC's
`class_2743` = `EntityVelocityUpdateS2CPacket`, `method_5771` = `Entity.isInLava()`.

Gate helper `mW` (direct Java, `mW.java`): `crx(int)` is a one-shot percent latch — on the
first call after a `crA()` reset it rolls `mU.cpN(int)` (a `ThreadLocalRandom` percent
check, `mU.java:133`; returns false for arg ≤ 0) into `ISQse`, latches `VEfPX = true`, and
returns the roll result on every call until reset [mW.java:33-58]; `cry()` = "has fired",
`crz()` = "roll succeeded", `crA()` = reset both [mW.java:14-31].

## Runtime model

- `gf.aZL(23, false, gh.xwjCw)` [fz.java:26] — registered disabled at boot, Combat.
- Registry behavior: **"Reduces knockback by jumping when getting hurt"** — when the local
  player takes knockback (S2C velocity packet), the module auto-jumps with a configurable
  chance, canceling/softening the knockback; disables while on fire when configured.
- Listener inventory (2 `@hG` + 1 lifecycle override, all native):
  - `aRT(gL$tk)` — S2C packet event (`gL$tk` exposes the `Packet` + `PacketListener`),
    `@hG` [fz.java:83; sixtwo_fz.c:35]
  - `aRU(hc)` — `hc` empty cancelable-shell event (hurt/notification trigger), `@hG`
    [fz.java:90; sixtwo_fz.c:52]
  - `YO()` — on-disable override [fz.java:94; sixtwo_fz.c:1]
- State: booleans `PnAIn`, `uYazo`, `WdogO` [fz.java:15-17] (roles unrecovered — read/
  written by the VM body only) and the one-shot gate `mW rByTO = new mW()` [fz.java:75].

## Per-handler semantics

1. `public fz()` [fz.java:24-76] — constructor: registers module id 23 (disabled,
   Combat); builds `ZGNVq` = **"Chance"** slider (chars `67 104 97 110 99 101`) with
   `.Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(ddesD)` [fz.java:29]; builds `EiuwG` =
   **"Cancel In Fire"** (chars `67 97 110 99 101 108 32 73 110 32 70 105 114 101`)
   `.WE(false)` [fz.java:39-52]; builds `QrNyB` = **"Only From Players"** (chars `79 110
   108 121 32 70 114 111 109 32 80 108 97 121 101 114 115`) `.WE(true)` [fz.java:56-71];
   constructs the gate `rByTO = new mW()` [fz.java:75].
2. `@hG native aRT(gL$tk)` [sixtwo_fz.c:35] — S2C packet hook; the knockback trigger
   (order inferred from token sequence + setting semantics):
   - enabled check; identify the knockback/velocity packet targeting the local player —
     **the packet-type discrimination is not token-visible in fz's section** (the
     `EntityVelocityUpdateS2CPacket` / mixin-accessor tokens belong to neighbor fC's slice
     of the same window); the gL$tk framework may pre-filter typed packets (unrecovered);
   - `QrNyB` "Only From Players" (default on): require the knockback source to be a
     player via `Attackable.getLastAttacker()` (`method_49107`) — the last attacker must
     be a `PlayerEntity`. (inferred)
   - `EiuwG` "Cancel In Fire" (default off): when checked, suppress the jump while
     `Entity.isOnFire()` (`method_5809`) is true. (inferred)
   - `ZGNVq` "Chance" (default 100): pass through the one-shot gate `rByTO.crx((int)
     ZGNVq.VB())` — the roll is taken once per knockback window (reset by `crA()`), so a
     failed roll does not re-roll within the same window. (inferred latch timing)
   - jump: on gate success, execute the jump (jumpKey press spoof or `player.jump()`).
     **No jump-mechanism token exists in fz's window** (`KeyBinding`, `jumpKey`, `input`
     are absent) — the action is VM-resident or dispatched through shared framework code
     outside the window. (inferred)
3. `@hG native aRU(hc)` [sixtwo_fz.c:52] — empty-shell event; with the same blob as aRT
   it most plausibly re-arms/resets the gate (`rByTO.crA()`) or arms the one-shot window
   around the hurt moment. (inferred)
4. `YO()` [sixtwo_fz.c:1] — framework disable via the shared `0x3806,0xbf` blob (same as
   eR.YO / fO.aaj); clears module state. (inferred)
5. Static: class-init `[0x18b0d4bb0]`, indy `[0x18b0d1ea0]`, literal helpers
   `aRX(IJ)I`/`aRW(byte[])`, `aRV(MatchException)` wrapper.

## Settings

- `cC ZGNVq` = **"Chance"** (chars as above): `.Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0)` ⇒
  step **1.0**, min **1.0**, max **100.0**, default **100.0** [fz.java:29]. Unit suffix
  `.Vz(ddesD)`: DES-encrypted static, **undecrypted** (percent assumed from the 1–100
  range; not confirmed).
- `cJ EiuwG` = **"Cancel In Fire"**: `.WE(false)` — off by default [fz.java:39-52].
- `cJ QrNyB` = **"Only From Players"**: `.WE(true)` — **on** by default [fz.java:56-71].
- No keybind, no groups, no radio options. Three widgets total.

## Blockers / unknowns

- Packet-type discrimination in `aRT`: fz's exclusive token run contains **no** packet/
  velocity identifiers. The `EntityVelocityUpdateS2CPacket` (`class_2743`) and
  `mixin/accessors/ClientboundSetEntityMotionPacketAccessor` tokens sit in neighbor fC's
  slice of the shared window; whether fz's VM body reuses that cluster (same region ⇒
  plausible) or the gL$tk framework delivers pre-filtered knockback packets is
  unrecovered. Flagged explicitly rather than attributed.
- The jump mechanism (which control is spoofed and for how many ticks) is VM-resident —
  no `KeyBinding`/`jumpKey`/`input` tokens in fz's window. (inferred)
- Roles of the booleans `PnAIn`/`uYazo`/`WdogO` are unrecovered (VM-body state; plausibly
  per-window armed/in-fire/recently-jumped flags). (inferred)
- Gate-window timing: what event resets `rByTO` (`aRU(hc)` vs. per-packet) is inferred,
  not evidenced.
- `.Vz(ddesD)` suffix: DES-encrypted, **undecrypted** — stated explicitly.
- fA/fB/fC sections of the `0x13fec` window (incl. fC's `isInLava`, scheduled
  `CompletableFuture` helper `bwT`, velocity accessor, `aSx(DDI)D`, `aSy(class_2743;DDD)V`)
  belong to those neighbors and are excluded here.