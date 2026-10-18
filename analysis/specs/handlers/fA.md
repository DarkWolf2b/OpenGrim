# Potion Refill (sixtwo.fA) — handler-derived behavior spec

Class: `sixtwo/fA` · display name **Potion Refill** · registry description
"Automatically refills potions" · primary key 7, active bind -999 (unbound)
[`analysis/specs/registry.tsv`]. Superclass `gg`. Coverage matrix:
`fA | Potion Refill | 7 | 7 | 0`.

## Evidence base

1. `analysis/ghidra/handlers-stitched/sixtwo_fA.c` — **7 native handlers** +
   continuation blocks; the single behavior handler `aSa` decrypts
   `POOL[0x14063,0x324]` (the widest window in this batch — it straddles
   sibling potion modules). Citations are image addresses.
2. Java skeleton: `payload-named/sixtwo/fA.java` + decrypted
   `payload-decrypted/sixtwo/fA.java`.
3. Sibling modules sharing the window: `fB` Auto Shield Break, `fC` Velocity,
   `fD` Uncharge Block, `fE` No Miss `[registry]`.
4. Helper: `mT` timer; `cz` action setting with `.Uw(int[])`; `iU`-family
   `CompletableFuture` scheduler token `bwT (Runnable,J,J,I,TimeUnit,
   Predicate,Object)CompletableFuture`.
5. Yarn tiny `1.21.11+build.6`; structural spec `analysis/specs/modules/fA.md`.

## Runtime model

- `super(gf.aZL(7, false, gh.xwjCw))` — id 7, category `gh.xwjCw`
  `[decompiled fA.java:38]`.
- Settings (names decrypted verbatim):
  - `jKuHD` — **"Delay"** (`cA`): `.UG(5.0).UE(0.0).UF(1000.0).UI(0.0, 50.0).UH(NSrLe)`
    — step 5, min 0, max 1000, default pair (0, 50), suffix `NSrLe`
    (unrecovered) `[decrypted fA.java:39-55]`;
  - `Lblbv` — **"Hover"** (`cJ`): `.WE(false)` `[decrypted fA.java:56-66]`;
  - `gaHGm` — **"Randomize Slots"** (`cJ`): `.WE(false)`
    `[decrypted fA.java:67-87]`;
  - `BMRFS` — **"Slots To Refill"** (`cz` action setting):
    `new cz(this, mr.clS("Slots To Refill")).Uw([0,1,2,3,4,5,6,7,8])` —
    hotbar-slot picker over all 9 hotbar slots `[decrypted fA.java:88-112]`;
  - `EnpZA = mT.cpz()` — timer `[decrypted fA.java:113]`.
- One `@hG` listener `aSa(gH$th)` — tick `[decompiled]`.
- fA's own symbol run (before the `sixtwo/fB` marker): fields
  `pJNbd/aSb/npLQh/cCwdY/HGYdz/gaHGm/Lblbv/BMRFS/aSd/EnpZA/jKuHD`, string
  decryptor `aSc`, statics `NSrLe/UkpKz` — plus **no direct Minecraft method
  tokens** in its own segment `[slice]`.
- The rest of the window is shared cluster: `method_5771` →
  `Entity.isInLava()`; `bwT` — scheduled `CompletableFuture` (the `iU`
  scheduler family — deferred slot swaps); `mixin/accessors/
  ClientboundSetEntityMotionPacketAccessor` + `method_73085` →
  `EntityVelocityUpdateS2CPacket.getVelocity()` + `setMovement` + locals
  `aSx (DDI)D` / `aSy (Lnet/minecraft/class_2743;DDD)V` — **fC (Velocity)**
  knockback-editing machinery, NOT fA `[window straddle, stub-matched]`;
  `sixtwo/fB/fC/fD/fE` markers.
- Technique (registry + template twin `fc`): watch the hotbar slots selected
  in "Slots To Refill"; when a potion is consumed/emptied, find a
  replacement potion stack in the inventory and move it into the hotbar slot
  after **Delay**; **Randomize Slots** shuffles the refill order; **Hover**
  gates refills (condition virtualized — likely "only while hovering the
  slot/potion in the inventory GUI") `[inferred, template-matched with fc]`.

## Per-handler semantics

| handler | image | role |
|---|---|---|
| `_55aef275d55a37c987ad6b6b0cab4a38()V` | `[18b06cea0]` | native clinit stub |
| `aSa(Lsixtwo/gH$th;)V` | `[18b02a580]` | the entire behavior: tick listener (virtualized) |
| `aSb(MatchException)MatchException` | `[18b0365f0]` | identity rethrow |
| `aSc([B)Ljava/lang/String;` | `[18b036680]` | string decryptor (suffix `NSrLe`) |
| `aSd(IJ)I` | `[18b05df40]` | int-constant decrypt kernel (decrypts `POOL[0x14063,0x324]` at the end) |
| `aSe(Lookup;MutableCallSite;String;[Object;)I` | `[18b069180]` | MutableCallSite re-bootstrap |
| `aSf(Lookup;String;MethodType;)CallSite` | `[18b06a190]` | indy bootstrap |

- **`aSa(gH$th)` [18b02a580]** — decrypts `POOL[0x14063,0x324]`,
  `ExceptionCheck` (`+0x720`), VM dispatch. Slot moves themselves are not
  packet-visible in fA's segment — the swap most plausibly rides the
  `ClickType.SWAP`/inventory machinery proven for twin module `fc` (window
  neighbor); the exact inventory operation inside fA's VM is unrecovered
  `[inferred, uncertain]`.

## Settings → behavior

| field | wrapper | chain (verbatim) | notes |
|---|---|---|---|
| `jKuHD` | `cA` | `"Delay" .UG(5.0) .UE(0.0) .UF(1000.0) .UI(0.0, 50.0) .UH(NSrLe)` | step 5 / min 0 / max 1000 / default 0, current 50 |
| `Lblbv` | `cJ` | `"Hover" .WE(false)` | default false |
| `gaHGm` | `cJ` | `"Randomize Slots" .WE(false)` | default false |
| `BMRFS` | `cz` | `"Slots To Refill" .Uw({0..8})` | action/picker over hotbar slots 0–8 |

- Decrypted name constants verified in `full-dump.jsonl` (class `sixtwo.fA`):
  "Delay", "Hover", "Randomize Slots", "Slots To Refill" `[full-dump]`.
- Registry: id 7, bind -999, description "Automatically refills potions"
  `[registry]`.

## Unrecovered

1. The inventory-swap mechanism inside `aSa` (no `ClickType`/`ScreenHandler`
   tokens in fA's own segment; `fc`'s window proves the family uses
   `ClickType.SWAP` + `Collections.shuffle`).
2. "Hover" semantics (GUI-hover gate vs. hover-key hold).
3. Suffix literal `NSrLe` (runtime byte[] decrypt).
4. Time units of Delay (0–1000, step 5 — ms at 10 ms granularity or ticks;
   `max=1000` suggests ms) `[uncertain]`.
