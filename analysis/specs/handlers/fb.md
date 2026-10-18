# Cart Assist (sixtwo.fb) — handler-derived behavior spec

Class: `sixtwo/fb` · display name **Cart Assist** · registry description "Automatically
performs insta cart" · key 163, bind -999 [registry]. Superclass `gg`.

## Evidence base

1. PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fb.c` — 41 handlers, standard
   dispatcher stubs (`BLOB_DECRYPTOR` → `JNI->ExceptionCheck` → 2-way indirect jump
   into the shared VM interpreter). No behavior bytecode recoverable.
2. Pool slices (pool base rva `0x301ee40`): one shared behavior window
   `POOL[0x110b1,0x2cb]` (715 bytes) decrypted by 32 handlers, plus `YO` base tick
   `POOL[0x3806,0xbf]`, clinit `POOL[0x226,0xd]`, indy `POOL[0x857,0x26]`,
   machinery `POOL[0xb15,0x2c]`, and a small cluster `POOL[0x784,0x25]` ×3
   (indy-bootstrap plumbing).
3. Java shell `analysis/decompiled/payload-named/sixtwo/fb.java` (constructor fully
   decompiled — settings, engines, state initializers).
4. **Shared-window warning**: the window straddles the neighboring **fa "Auto X-Bow"**
   projectile program — tokens `sixtwo/md`, `MucuO` (the projectile-config registry,
   md.java:119-130), `sixtwo/mj` + `launchSpeed` (projectile motion config record),
   `sixtwo/mh` + `ckf (World;Entity;Vec3d;Vec3d)mh` / `ckD (mj)mh` / `ckG
   (RaycastContext$ShapeType)mh` (trajectory simulator, mh.java:162-238), and
   `field_9126` = `ParticleTypes.FLAME` (trajectory rendering). None of these are fb's.
5. Shared helpers owned by fb: `XPiFl = new oi()` — the **block-placement engine**
   (`oi.cDG(Vec3d, PlayerEntity, Predicate<BlockPos>) → oi$vg` candidate rotation,
   `cDL()` BlockPos, `cDM()` Vec3d — oi.java:138-293; same family as fr's `pe`
   point engine, but for block placement). Helper `oz` = record
   `(BlockPos, BlockHitResult)` — the block-use plan handed to the interaction
   pipeline (oz.java:8).
6. Event semantics: `gM` marker tick; `gv` client tick; `gH$th` pre-motion tick;
   `gE` = **block-break/attack-progress event** carrying `(ItemStack stack, World,
   PlayerEntity player, int, int, float)` (gE.java).
7. fb's inner types are fully native (no CFR files): `fb$sM` — mutable plan record
   whose components are named in the window (`item` → ItemStack, `placeResult`);
   `fb$sN` — state enum with constant `OUxZP` (constructor starts there) and a
   `doW ()[Lsixtwo/fb$sN;` values() trampoline in the window.

## Runtime model

- **Purpose**: "insta cart" — on trigger, place a rail, then a minecart on it (and
  optionally a protective block), so the player can instantly enter a cart (dupe/
  transport tricks); "Return To" controls what to switch back to afterwards.
- **State** (fb.java:23-29, decompiled):
  - `jteVW : fb$sM` — current plan (item + placement result); produced by
    `aHj(float)fb$sM`, mutated by `aHk(fb$sM, ItemStack)`, validated by
    `aHl(fb$sM)Z`, converted to a state by `aHm(fb$sM)fb$sN`.
  - `oGEHp : fb$sN = OUxZP` — state-machine state (constructor default).
  - `vVjjy : int` — current action index/phase counter.
  - `kXSZU = -1`, `pnzrf = -1 : int` — cached hotbar slots (‑1 = none; the two slot
    fields pair with the item plan and the "Return To" swap).
  - `XPiFl : oi` — placement/rotation engine instance.
- **Event wiring** (native, default priority): `aHa(gM)` marker tick [18b3a7510],
  `aHb(gv)` client tick [18b3b36a0], `aHc(gH$th)` pre-motion tick [18b3b4680],
  `aHd(gE)` block-break/attack event [18b3a7310] — candidate trigger (the macro
  fires when the player starts breaking/mining, or mines the target block).
- **Interaction plan** (`aHp(BlockPos) → oz`): convert a chosen BlockPos into a
  `(BlockPos, BlockHitResult)` plan for a `PlayerInteractBlockC2SPacket`-style use.
  Validity predicates: `aHq(BlockPos)Z`, `aHs(BlockPos)Z`, `aHr(BlockPos, BlockState)Z`
  (block-state check — candidate "is this a rail placeable on"), `aHu(BlockPos, Item)Z`
  (candidate "can this item be placed here").
- **Item handling**: `aHv(Item)Z` (candidate "do we have item"), `aHz(ItemStack)Z`,
  `aHC(ItemStack)I` (candidate stack count), `aHx(Item) → Hand` (find hand holding
  item), `aHy() → Hand` (current plan hand), `aHD()I`, `aHA() → Vec3d` (candidate
  placement hit point), `aHB(Vec3d)Z` (candidate reach/LOS check).
- **Void steps** `aHn, aHt, aHf, aHg, aHh, aHi, aHE, aHG, aHH` — the phase pipeline
  (place rail → place minecart → place protect → return item). Individual roles not
  disambiguated.

## Per-handler semantics

All behavior handlers decrypt `POOL[0x110b1,0x2cb]`; bodies unrecovered (VM). Image
addresses for the wired ones are cited in Runtime model; the private helpers are
grouped here:

- **Plan lifecycle**: `aHj (F)fb$sM` (build plan from a float — candidate
  partial-tick/yaw), `aHl (fb$sM)Z` (plan still valid), `aHm (fb$sM)fb$sN` (map plan →
  next state), `aHk (fb$sM, ItemStack)` (attach the chosen stack to the plan).
- **Placement candidates**: `aHp (BlockPos)oz`, `aHq/aHs (BlockPos)Z`,
  `aHr (BlockPos, BlockState)Z`, `aHu (BlockPos, Item)Z`, `aHA ()Vec3d`,
  `aHB (Vec3d)Z` — window tokens `sixtwo/oi`, `cEc ()Lsixtwo/oi$vg;`,
  `sixtwo/oi$vg` confirm the placement-engine handoff.
- **Slot/hand management**: `aHx (Item)Hand`, `aHy ()Hand`, `aHD ()I`,
  `aHC (ItemStack)I`, `aHv (Item)Z`, `aHz (ItemStack)Z`, `aHw ()Z`, `aHF ()Z`.
- **Phase steps**: `aHn/aHt/aHf/aHg/aHh/aHi/aHE/aHG/aHH ()V`.
- **`YO ()V`** [18b3a5ed0] — module-base tick-gate slice `POOL[0x3806,0xbf]`
  (standard gc/gd 2-state enum).
- `_df5a3fa5a2cf8ba0758086f80f849087()V` [18b44bd20] — clinit stub
  (`POOL[0x226,0xd]`); `aHL/aHM/aHN/aHK` [18b… ] — indy/int decrypt kernels and
  MatchException rethrow (machinery).

### Trivial accessors

All six settings are exposed via stubs consistent with the field census (cv/cw×3/
ct/cu×2/cC); per-getter identity inside type groups unrecovered.

## Settings → behavior mapping

| field | setting | type / chain | behavior link |
|---|---|---|---|
| `tuKUN` | Actions | `cv` group | action multigroup |
| `uMDXH` | Place Rail | `cw` child, `.Tz()` (default-on marker) | phase: place the rail block |
| `WbnlP` | Place Minecart | `cw` child, `.Tz()` (default-on marker) | phase: place the minecart on the rail |
| `PVMYe` | Place Protect | `cw` child (no `.Tz()` — default off) | phase: place a protective block over the cart/rail |
| `bKNZB` | Return To | `ct` | after the sequence, what to switch back to |
| `jsjtu` | — (cu child, 3-char name — most plausibly "Gun"/"Bow"-style original item; unrecovered) | `cu` child of `bKNZB`, `.SY()` (default marker) | return-to option A |
| `SGmOv` | — (cu child, 4-char name, unrecovered) | `cu` child of `bKNZB` | return-to option B |
| `YCydL` | (cC, name unrecovered — candidate "Range") | `cC .Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0)` — step 1, 1–9, default 1 | placement search radius; `.Vf(SGmOv::SZ)` revalidation (fb.java:149) links it to the Return To child |

## Unrecovered / uncertain

1. **The full insta-cart sequence math** — block faces, rotation of the placement
   (`oi` candidate selection), timing between phases, and minecart-vs-rail ordering
   are VM bytecode.
2. **Trigger source** — `aHd(gE)` (block-break event) is the only non-tick trigger
   registered; whether the macro fires on mining a specific block (e.g. breaking the
   block above the rail) or on any attack is unrecovered.
3. **`fb$sM`/`fb$sN` internals** — the plan record's other components, the full enum
   constant list (only `OUxZP` + `values()` shape recovered), and the transition
   function `aHm` are native.
4. **Slot fields** — which of `kXSZU`/`pnzrf` is the rail slot vs the return slot;
   unproven.
5. **Names for `jsjtu` (3-char), `SGmOv` (4-char), `YCydL`** — not in the decrypted
   names list (7 names for 7+ settings but the group/children names don't align
   1:1); candidates flagged.
6. **Shared-window attribution** — the `md`/`mj`/`mh` projectile engine cluster,
   `ParticleTypes.FLAME`, and token `field_9126` belong to fa (Auto X-Bow); tokens
   `bbY`, `bbW`, `bcb`, `doX`, `yVCMq`, `JRycS`, `ifDZh`, `mgytQ` sit inside fb's
   run (interleaved with `jteVW`/`oGEHp`/`aHj`/`aHk`/`aHl`/`aHm`) and are most
   plausibly fb$sM/fb$sN members and jg/jf static helpers, but their exact owners are
   unproven.
