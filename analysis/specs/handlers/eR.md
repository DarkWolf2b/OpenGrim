# eR — Wind Hop (module id 119)

## Evidence base

- Registry/structural spec: `analysis/specs/modules/eR.md`; registry row
  `sixtwo.eR|Wind Hop|Throws a wind charge beneath you|key=119|bind=-999` (primary key
  119, active bind −999 = unbound), category `gh.xwjCw` (Combat).
- Java shell: `analysis/decompiled/payload-decrypted/sixtwo/eR.java` (89 lines, Vineflower,
  DES literals folded) — two settings, one timer, four native methods.
- Native: `analysis/ghidra/handlers-full/sixtwo_eR.c` — 8 handler stubs, all
  decrypt-then-VM-dispatch; no bytecode statically recoverable. Fully native-backed.
- Pool window: POOL base RVA `0x301ee40`, image
  `analysis/ghidra/dumps/jna-decrypted-v2.dll`. Yarn map:
  `analysis/jars/yarn-1.21.11+build.6.tiny`. Helper semantics from `dF.md`
  (shared slot/predicate cluster) and `eP.md` (attack-suite vocabulary).

Handler → pool-blob usage map:

| Blob (off,len) | Handlers | Addresses |
|---|---|---|
| `0xfa19,0x2a6` | `aCF` `aCG` `aCH` (shared window; spans eR→eS$sJ→…→mW→eT→eU→eV sections) | aCF `[0x18bef7700]`, aCG `[0x18befe820]`, aCH `[0x18bf035f0]` |
| `0x9b3c,0x1b9` | `aCI(ItemStack)Z` — shared slot/predicate cluster (also serves dF/dH/dJ) | `[0x18bf0c6c0]` |
| `0x3806,0xbf` | `YO` (shared framework: `gg.baf→gc.aZg→gd`, `mG.cnP(FFF)`) | `[0x18bef7440]` |
| `0x226,0xd` | class-init | `[0x18bf1bd90]` |
| `0x857,0x26` | `aCM` (indy bootstrap) | `[0x18bf19080]` |

Verbatim exclusive token run of the eR section of `0xfa19,0x2a6`:
`LQdZG LUIYx xwmKI EdLUg aCy aCC sixtwo/eR qdiLm BatsP aCJ aBhOM woKJb OahHn MYLev dbm
(Lsixtwo/oI;ZZLsixtwo/gg;)Z PeQZj xMZKo KmTJA aCK ()[Lsixtwo/rB; sixtwo/eS$sJ …` — the
window then passes through obfuscated eS-section names, the **`mW` one-shot-gate cluster**
(`Lsixtwo/mW; sixtwo/mW crA cry crx crz`), and eT/eU/eV sections (incl. `ddn`, `field_23141`
= `Items.RESPAWN_ANCHOR`, `class_2885` = `PlayerInteractBlockC2SPacket` ctor
`(Hand, BlockHitResult, int)`) which belong to eS/eT/eU/eV, not eR.

`aCI` window (`0x9b3c,0x1b9`) verbatim head: `ixtwo/oT; dwN (Z)Lsixtwo/oT$vo;
net/minecraft/class_1802 field_8550 method_31574 sixtwo/oP cJm ()Lsixtwo/oQ; field_8281
sixtwo/oQ cJv (Ljava/util/function/Predicate;)Lsixtwo/oK; sixtwo/oI cIE field_8786
field_8705 field_8187 cKF (Lnet/minecraft/class_3965;)V … field_1904 Lnet/minecraft/class_304;
net/minecraft/class_304 method_23481 sixtwo/dH …` — Yarn: `field_8550/8705/8187/8281/8786/
23141` = `Items.BUCKET/WATER_BUCKET/LAVA_BUCKET/OBSIDIAN/COBWEB/RESPAWN_ANCHOR`,
`method_31574` = `Item.isOf`, `field_1904` = `KeyBinding.useKey`, `method_23481` =
`KeyBinding.setPressed`.

## Runtime model

- `gf.aZL(119, false, gh.xwjCw)` [eR.java:24] — registered disabled at boot, Combat.
- Registry behavior: **"Throws a wind charge beneath you"** — the module launches a wind
  charge under the local player to rocket-jump. Triggered from an activation key / event,
  gated per tick.
- Listener inventory (3 `@hG` + 1 lifecycle + 1 predicate, all native):
  - `aCG(gv)` — empty cancelable-shell event [eR.java:66]
  - `aCH(gH$th)` — client tick [eR.java:75]
  - `aCF(gA)` — input event (MouseInput/KeyInput + 3 ints `bbP/bbQ/bbR`) [eR.java:80]
  - `YO()` — on-disable override [eR.java:83]
  - `aCI(ItemStack)Z` — item predicate (native, public) [sixtwo_eR.c:86]
- State: `boolean qdiLm` (armed flag, written by input/tick bodies), `mT OahHn` (ms timer,
  `mT.cpz()` at [eR.java:58]; `cpC(long)` elapsed test, `cpB()` reset), `long MYLev`
  (seed/static), statics `xMZKo/PeQZj/KmTJA`.

## Per-handler semantics

1. `public eR()` [eR.java:21-58] — constructor: registers module id 119 (disabled,
   Combat); builds `woKJb` = **"Activation Key"** keybind (chars `65 99 116 105 118 97 116
   105 111 110 32 75 101 121`) with `.VO(-999)` (unbound) [eR.java:39]; builds `aBhOM` =
   **"Only On Ground"** checkbox `.WE(true)` (on by default) [eR.java:55]; creates the
   `mT` timer [eR.java:58].
2. `@hG native aCF(gA)` [sixtwo_eR.c:35] — input event: matches the event key against the
   `Activation Key` keybind and arms the throw (`qdiLm = true`), consuming the shared `mW`
   one-shot gate (`crA()` reset / `crx(int)` percent latch / `cry()` fired / `crz()`
   success — gate semantics per `mW.java:14-58`). (inferred from keybind field + mW tokens
   + gA event shape)
3. `@hG native aCG(gv)` [sixtwo_eR.c:52] — empty-shell event handler sharing the same
   blob; most likely an additional trigger path (e.g. use/attack event) for the same
   throw routine. Exact event identity unrecovered. (inferred)
4. `@hG native aCH(gH$th)` [sixtwo_eR.c:69] — client tick; gates and throws, in order
   (inferred from token order and helper contracts):
   - enabled check `bab()`; if `aBhOM` "Only On Ground" is checked, require the player on
     ground;
   - cooldown via `OahHn` `mT` timer (`cpC(long)` elapsed vs. threshold; threshold source
     unrecovered — no cooldown setting exists, so likely a fixed internal value);
   - locate the wind-charge hotbar slot: `oQ.cJv(Predicate) → oK` slot search over
     `oP.cJm()` with predicate built around `aCI(ItemStack)Z` (the item-identity test),
     wrapped as an `oI` player+slot record;
   - arbitrate/execute the use: `qJ.dbm(oI, boolean, boolean, gg)Z` (slot-arbitration
     request against the module), then the `oT` block-interaction builder
     (`oT.dwN(Z) → oT$vo` chain, `oT.cKF(BlockHitResult)`) aiming beneath the player, with
     `KeyBinding.useKey.setPressed` spoof (`field_1904`/`method_23481`) so the throw reads
     as a real use.
5. `native aCI(ItemStack)Z` [sixtwo_eR.c:86] — virtualized item predicate living in the
   shared slot/predicate cluster (`0x9b3c,0x1b9`) that also serves dF "Lever Replace",
   dH and dJ. The cluster's plaintext tokens include
   `Items.BUCKET/WATER_BUCKET/LAVA_BUCKET/OBSIDIAN/COBWEB/RESPAWN_ANCHOR` via
   `Item.isOf` — **none of these is a wind charge**, so those item checks belong to the
   other cluster members; eR's own predicate constant (WIND_CHARGE) does not appear in
   plaintext anywhere in the window. Registry description ("throws a wind charge") is the
   authoritative identity. Blocker below.
6. `YO()` [sixtwo_eR.c:1] — framework disable (shared `0x3806,0xbf` blob, same as fz.YO /
   fO.aaj): clears internal state. (inferred)

## Settings

- `cD woKJb` = **"Activation Key"** (chars as above): keybind, default `.VO(-999)`
  (unbound) [eR.java:39].
- `cJ aBhOM` = **"Only On Ground"** (chars `79 110 108 121 32 79 110 32 71 114 111 117 110
  100`): `.WE(true)` — **on** by default [eR.java:55].
- No numeric sliders, no groups, no radio options. Two widgets total.
- Non-setting state: `OahHn` timer, `qdiLm` armed flag, `MYLev` long.

## Blockers / unknowns

- eR's own item-identity constant for the wind charge does not appear in plaintext in any
  of its windows (`aCI`'s cluster tokens are the shared bucket/cobweb/obsidian/anchor
  checks of dF/dH/dJ). The wind-charge identity rests on the registry description only.
  Whether the throw requires a wind-charge item in inventory (vs. synthesizing the use
  packet) is unrecovered.
- `()[Lsixtwo/rB;` (array of `sixtwo.rB`) appears in eR's exclusive token run — the class
  and its role are unrecovered (possibly projectile/hit-result helpers).
- The exact event published as `gv` (aCG's parameter) and what extra trigger it provides
  is unrecovered.
- Cooldown semantics: `mT` timer exists but no setting controls it; the threshold constant
  is inside the VM body. (inferred: fixed cooldown)
- `qJ.dbm(oI,ZZ,gg)Z` — the slot-arbitration request contract (2 booleans + module ref,
  returns claimed?) is used as in dF.md; full semantics of the two booleans unrecovered.
- Class-init and literal helpers (`aCJ`/`aCK`) are obfuscation machinery.