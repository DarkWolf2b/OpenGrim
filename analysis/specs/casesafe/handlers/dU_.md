# Auto Fish (sixtwo.dU) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_dU.c` — 19 handlers, continuation blocks all generic VM trampolines.
- Structure/setting names: `analysis/specs/modules/dU.md`, `analysis/decompiled/payload-named/sixtwo/dU.java` (constructor fully decompiled).
- Single class pool window `POOL[0xb74e,0x1fc]` (dU-exclusive; fully visible in annotation), tiny windows `POOL[0xb1,0x5]` ("Tlzw" — trivial trampolines) for apN–apQ.
- Registry: `sixtwo.dU|Auto Fish|Automatically fishes for you|key=66|bind=-999`, category `gh.qBzlZ` (utility).

## Runtime model

Classic auto-fish loop around the local player's bobber: detect a catch (splash), reel, then re-cast, with rod-durability protection.

Pool-derived MC surface (verbatim from `POOL[0xb74e,0x1fc]`):

- `net/minecraft/class_1536` = `FishingBobberEntity`; `field_7513` = `fishHook` (field of type class_1536 — the client player's active bobber).
- `method_23317`/`method_23318`/`method_23321` = `getX/getY/getZ` (bobber) and `method_4784`/`method_4779`/`method_4778` = `getX/getY/getZ` (second coordinate source) — splash detection compares bobber motion between two positions.
- `cso (DDDDDD)D` — six-double helper returning double: point-distance metric (two Vec3 inputs) used by the splash check.
- `field_8378` = `Items.FISHING_ROD`; `method_7919` = `getDamage`, `method_7936` = `getMaxDamage` — "Anti Break" rod-durability monitor.
- `method_7261 (F)F` = `getAttackCooldownProgress` — swing/cooldown gate.
- `method_1434` = `KeyBinding.isPressed` — held-key state.
- `method_2910` = `attackBlock (BlockPos,Direction)Z`, `method_2918` = `attackEntity (PlayerEntity,Entity)V` (ClientPlayerInteractionManager) — interaction calls used by the cast/reel path (exact usage unrecovered; see Uncertain).
- `java/util/concurrent/TimeUnit.MILLISECONDS` — millisecond delay computation.
- Static `String[] HZHUw`, `jqbGc` — decrypted strings (module-internal; no chat/format tokens, so likely statuses, not messages).

State fields: `dneZD`, `kzZLu` (booleans — casting/catch state), `nzBUx`, `DiDCD`, `TcAon`, `gipBo` (ints — bobber id, phase counters, delay deadlines).

Events:
- `aaj()` on-toggle reset [18d96b310] — clears state (standard `gg.aaj()`).
- `apK(gI)` [18d96b700] — packet event (same event type dQ registers at LOWEST priority): bobber/splash evidence from server packets.
- `apL(gH.th)` [18d9cf6b0] — pre-motion tick: main fishing state machine (delays, reel, recast).
- `apM(gz)` [18da33590] — key event: manual trigger/stop (works with `method_1434 isPressed`).

## Per-handler semantics

All bodies are decrypt-preamble → VM dispatch; semantics = token contract.

- `aaj()` [18d96b310] — on-disable/toggle reset.
- `apK(gI)` [18d96b700] — packet event: tracks the spawned/updated `FishingBobberEntity` (entity ids in `nzBUx`/`gipBo`), splash detection evidence.
- `apL(gH.th)` [18d9cf6b0] — main tick: `Throw Delay` before casting, splash-wait, `Catch Delay` reel, `Recast Delay` re-cast; Anti Break and In Gui checks gate here.
- `apM(gz)` [18da33590] — key event: toggle/trigger via bound key.
- `apR(ItemStack) Z` [18da38020] — rod validity: is the held stack a FISHING_ROD within usable damage (Anti Break: `getDamage` vs `getMaxDamage` comparison unrecovered).
- `apN/apO/apP/apQ ()V` [18da348a0/18da35da0/18da36460/18da37960] — trivial trampolines (`POOL[0xb1,0x5]` only; no class tokens) — stage steps of the fishing state machine.
- `apS` (MatchException trap) [18da3de10], `apT/apU/apV/apW/apX/apY/apZ/aqa/aqb/aqc` — j2cc string-decrypt boilerplate.

## Settings → behavior mapping

| setting (decoded) | field | wrapper / chain (verbatim) | behavior role |
|---|---|---|---|
| Anti Break | jjTmy | `cJ .WE(false)` | stop fishing when rod near break (`getDamage`/`getMaxDamage`) |
| Auto Cast | OZKKQ | `cJ .WE(false)` | enable automatic re-cast loop |
| (delay slider 1) | ytUYv | `cC .Vy(1.0).Vw(0.0).Vx(100.0).VA(15.0).Vz(apW<"l">(27377,…))` | 0–100 default 15, own suffix window — assigned "Throw Delay" (attribution uncertain, see below) |
| (delay slider 2) | AERRL | `cC .Vy(1.0).Vw(0.0).Vx(60.0).VA(5.0).Vz(apW<"l">(3670,…))` | 0–60 default 5; shares suffix window with ouAAg — "Catch Delay" / "Recast Delay" pair |
| (delay slider 3) | ouAAg | `cC .Vy(1.0).Vw(0.0).Vx(60.0).VA(5.0).Vz(apW<"l">(3670,…))` | identical chain to AERRL — the other of the Catch/Recast pair |
| Splash Detection | eKQLo | `cJ .WE(false)` | enable bobber-motion-based splash detection (uses `cso`/getXYZ deltas) |
| Splash Detection Range | ilNfZ | `cC .Vy(0.1).Vw(0.0).Vx(10.0).VA(5.0).Vz(apW<"l">(30680,…))` | 0–10 default 5, step 0.1 — radius for splash evidence |
| In Gui | LBRwP | `cJ .WE(false)` | operate while a screen is open |

Slider suffix strings (windows 27377 / 3670 / 30680) are decrypted via bsm; values not recovered (all three likely time units, "s"/"ms" unproven).

## Unrecovered / uncertain

- All bodies virtualized; the splash predicate (how bobber position deltas + `cso` distance + range compare), reel/recast trigger conditions, and delay scheduling are unrecovered — do not guess formulas.
- Name→slider attribution: constructor order gives the three delay sliders as ytUYv, AERRL, ouAAg vs md names "Catch Delay", "Recast Delay", "Throw Delay"; AERRL+ouAAg share an identical chain (0–60 def 5, same suffix bsm window) and ytUYv (0–100 def 15) has a distinct suffix — pairing ytUYv="Throw Delay", AERRL="Catch Delay", ouAAg="Recast Delay" is inferred, not proven.
- `method_2910 attackBlock` / `method_2918 attackEntity` in the pool: exact role (reel action, anti-idle click, or gui interplay) is unrecovered.
- Which of `apN/apO/apP/apQ` implements cast vs reel vs splash-wait is unrecovered (all trivial trampolines).
- Static string arrays `HZHUw`/`jqbGc` contents not resolved (no `resolve_pool_blob` window carries them; they are built by `apU`/`apT` at runtime).
