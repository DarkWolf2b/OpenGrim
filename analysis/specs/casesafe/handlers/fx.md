# Auto Totem (sixtwo.fx) — handler-derived behavior spec

## Evidence base

- PRIMARY: `analysis/ghidra/handlers-stitched/sixtwo_fx.c` — 28 JNI handlers + all reachable continuation blocks. (The stitched corpus now lives as `analysis/ghidra/handlers-full/sixtwo_fx.c` (28 handlers) plus `analysis/ghidra/continuations/sixtwo_fx_cont.c` (315 continuation blocks, 7736 lines); sibling specs cite the same directory under its former name.) All paths in this doc are image addresses (`0x18xxxxxxxxx`), cited inline like `[18bd2fdd0]`.
- Java skeleton: `analysis/decompiled/payload-decrypted/sixtwo/fx.java` (Vineflower, literals folded — authoritative for decrypted constants); CFR variants under `analysis/decompiled/payload-named/sixtwo/` (`fx.java`, `fx$sT.java`).
- Shared click helper (fully decompiled, not a stub): `analysis/decompiled/payload-named/sixtwo/oR.java`, `oH.java`, `oK.java`, `rB.java`.
- Structural spec: `analysis/specs/modules/fx.md`; framework spec: `analysis/specs/modules/00-framework.md`.
- Decrypted constants: `analysis/decrypted/full-dump.jsonl` — 351 entries for `sixtwo.fx`: 348 int constants from `bsm aRI` (desc `(IJ)I`; includes the module id **31**) and 3 string constants from `bsm aRF`, all `" ms"` (the three millisecond-delay settings' units).
- Symbol translation: `analysis/jars/yarn-1.21.11+build.6.tiny` (tiny v2). Pool blobs re-resolved with `analysis/tools/resolve_pool_blob.py` (source deleted; only `analysis/tools/__pycache__/resolve_pool_blob.cpython-312.pyc` survives and is importable).
- Registry: `fx | sixtwo.fx | Auto Totem | Manages totem in your off hand | key=31 | bind=-999`.

### Recoverability caveat (read first)

Every behavior handler in this class is a *dispatcher stub*: it decrypts one constant-pool blob slice with `BLOB_DECRYPTOR(image-addr, resolved-ptr, len)`, calls `JNI->ExceptionCheck` (vtable offset `0x720`), and tail-dispatches through a 2-way indirect jump Ghidra cannot stitch. The 315 continuation fragments are almost entirely thread-code-VM interpreter work (MBA constant mixing, PRNG helper calls `func_0x18xxxxxxx`, `halt_baddata`-truncated jumps — largest blocks `[18b2bcf11]` ~890 lines and `[18b174889]` ~630 lines, all VM arithmetic). **No Java-level bytecode body of any behavior method is linearly recoverable from this corpus.** What IS recoverable per handler: which pool slice it decrypts (its symbol universe), its Java-side wiring, and the fully decompiled shared helpers it calls. Tagging:

- `[slice]` — handler verifiably decrypts the named pool slice (verified by address).
- `[decompiled]` — logic visible directly in a decompile (fx.java, oR.java, oH.java, fx$sT).
- `[inferred]` — inferred from descriptor + slice contents + framework contract; NOT from a recovered body.
- `[uncertain]` — cannot be attributed with confidence.

## Runtime model

- `fx extends gg` (module base, `gg extends iS`). Constructor `[decompiled: payload-decrypted/sixtwo/fx.java]`:
  - `super(gf.aZL(31, false, gh.xwjCw))` — module id **31**, flag `false`, category `gh.xwjCw` `[decompiled]`.
  - Key-mix seed: `tpbid ^ 0x3DB8674989AEL` (static long `tpbid`, payload-decryptor state) `[decompiled]`.
- Purpose: keeps a Totem of Undying in the player's offhand — when the offhand lacks the configured totem item (and the health trigger fires), move one there from the inventory/hotbar `[registry + slice + decompiled settings, inferred]`.
- Instance state `[decompiled]`:
  - 4 timer objects `PhcLM, zEDLl, gTABZ, IfUFA = mT.cpA()` — `mT` is the payload's monotonic-timer class (`cpC(long)` = elapsed ≥ threshold; `cpD(long)`/`cpE(long)` = elapsed ≥ threshold × multiplier `fCqJQ` (DES-encrypted, unrecovered); `cpH()` = elapsed > 0; `cpB()` = reset; `cpF()` = elapsed ms; `cpI()` = start time). Four timers vs. three ms settings (Swap Cooldown / Open Delay / Close Delay) suggests one timer per delay plus one for the swap cycle itself; the assignment is **not** recovered `[inferred, uncertain]`.
  - 2 boolean state flags `DqFyV`, `TnINJ` — roles unrecovered (plausibly "inventory open/should close" style latches) `[uncertain]`.
  - Field `zAhcx` — appears in fx's pool slice; role unrecovered (plausibly the cached current plan `fx$sT`) `[uncertain]`.
- Plan record `fx$sT` = record `(oH slot)` `[decompiled]`:
  - `oH` = slot wrapper over a container slot index: fields `PlayerEntity PFgHm`, `int LNOqr`; constructor validates `slot >= 0 && slot <= <indy int cIB("i",20811,…)>` else throws `IllegalArgumentException(oI.cIG())`; base class `oK` exposes `cIu()`→`ItemStack`, `cIv()`→int `[decompiled: oH.java/oK.java]`.
  - Natives `slot()V→…` [18b345190], `interactionSlot()I` [18b341e40] — `interactionSlot()` converts the wrapped container slot into the click-packet slot id (`oR.cJU` mapping: slots ≥ `PlayerInventory.getHotbarSize()` pass through unchanged; hotbar indices get an additive window-offset constant decrypted at runtime) `[decompiled helper, exact constant unrecovered]`.
- Click machinery (shared helper `sixtwo.oR`, fully decompiled — this is how the swap physically happens) `[decompiled: oR.java]`:
  - `oR.cKc(int n2)` [oR.java:235]: `interactionManager.clickSlot(player.currentScreenHandler.syncId, oR.cJU(n2), <runtime-decrypted int>, SlotActionType.SWAP, player)` — a **`SlotActionType.SWAP`** click; the button int comes from an indy int decrypt `oR.cKy("q", 2855, 0x4757651B4B150E70L ^ …)` and is unrecovered (a SWAP button is a hotbar index 0–8 or the offhand index 40 in vanilla) `[decompiled shape, button unrecovered]`.
  - `oR.cKd(int n2, int n3)` [oR.java:263]: `clickSlot(syncId, n2, n3, SlotActionType.SWAP, player)` — explicit two-slot SWAP.
  - `oR.cJU(int n2)` [oR.java:634]: `if (n2 >= PlayerInventory.getHotbarSize()) return n2; else return n2 + <indy int cKy("q", 27928, 0x60089CAAC2E93973L ^ …)>` — the hotbar→window-slot offset constant is unrecovered `[decompiled shape, constant unrecovered]`.
  - `oR.cKb(int,int)` [oR.java:453]: 3-click PICKUP sequence `PICKUP a btn0 → PICKUP b btn1 → PICKUP a btn0`; `oR.cJZ(int,int,boolean)` [oR.java:567]: 2-or-3-click PICKUP move (third click only when the flag is set); `oR.cJX(int)` [oR.java:490]: `clickSlot(syncId, n2, 0, SlotActionType.QUICK_MOVE, player)`.
  - `oR.cKi(Item)` [oR.java:672]: `Optional<Hand>` of the hand holding the item (`Hand.values()` × `getStackInHand(hand).isOf(item)`).
  - `oR.cJS(int)` [oR.java:703]: `playerInventory.setSelectedSlot(n2)` + `((MultiPlayerGameModeAccessor) interactionManager).callEnsureHasSentCarriedItem()` — hotbar selection with server sync.
  - `oR.cJW(oK,oK)` [oR.java:301]: swap two wrapped slots via `cIY()` on both + one clickSlot SWAP.
  - `oR.cKp(gg)` / `oR.cKq(gg)` [oR.java:942/1110]: build an `rB` status enum (4 constants `ahPNi, HbZxW, TfMBm, iSmge`) — equipment-relocation result reporting (the recovered body shows `Items.ELYTRA` / `oI` / `rD.dlZ().dbj(...)` paths); shared with other modules, attribution to fx uncertain `[decompiled helper, uncertain]`.
- Events (payload bus `hH.bdV()` → `hF.bdO` listener lists, native dispatch) `[decompiled]`:
  - `aRj(gH$th)` — `@hG` player-tick listener, **default priority** — per-tick offhand check + plan build/execute.
  - `aRk(gA)` — `@hG(priority = mw.LOWEST)` input listener (`gA` carries `MouseInput cfYNO`/`bbN()`, `KeyInput mcpAc`/`bbO()`, ints `eZWeT`/`bbP()`, `BZQxa`/`bbQ()`, `nctbO`/`bbR()`). LOWEST priority = runs first among input listeners — consistent with the **"Block Input"** setting swallowing mouse/keyboard input while the module operates `[decompiled annotation + inferred]`.
- Callbacks registered in the constructor `[decompiled]`: `BYSSp.Vd(this::aRA)` ("Mode" group change → aRA), `XZIWm.Vd(this::aRz)` ("Inventory Mode" change → aRz), `qPSSJ.Vf(this::aRy)` ("Close Delay" → aRy), `JVdpl.Vd(this::aRx)` ("Block Input" → aRx), plus 5 `.Vf(...)` change/visibility callbacks (`wooFC→CVZbc.WF`, `GLCcw/qJwPM/JVdpl/cbLje→yvOlX.SZ`) that re-validate dependent settings.
- Tick contract: `gg.YO()` base body is `hF.bdM(this)` (native module-tick dispatcher); `fx.YO()` overrides it. The module tick-gate is `gc`/`gd {ipLAD, zlSAY}` as in sibling modules `[decompiled framework, slice 0x3806 shared]`.

### Pool slices (per-handler symbol universes)

Verified mapping handler → decrypted slice (pool base rva `0x301EE40`, pointer global `0x18301ee50`):

| slice (off,len at pool base 0x301ee40) | handlers |
|---|---|
| `[0x13ddd,0x321]` — shared cluster table covering fx + neighbors fy/fz/fA/fB | aRA, aRj, aRk, aRl, aRn, aRo, aRp, aRq, aRr, aRs, aRu, aRw, aRx, aRy, aRz (15 handlers) |
| `[0x13db5,0x320]` — aRt-only variant (starts 0x28 earlier; extra tokens `method_15769` = `FluidState.isEmpty()Z`, `lSNgg`, `YezLm`, `SVJts`, `aRg`) | aRt |
| `[0x3806,0xbf]` — module-base tick slice | YO |
| `[0x226,0xd]` — clinit string slice | `_c7ac3063eea47a4b2ccde72f1bb0bf92`, and `fx$sT` equals/hashCode/toString |
| `[0x857,0x26]` — indy bootstrap plumbing | aRF, aRI |
| (no blob decrypt) | aRm, aRv, aRB, aRC, aRD, aRG, aRE, aRH |

fx's shared slice `[0x13ddd,0x321]` token-for-token (verbatim, NUL-separated; 801 bytes):

```
x$sT | slot | Lsixtwo/oH; | zAhcx | aRf | sixtwo/fx | aRm | tpbid | aRB | aRl | yvOlX |
aRn | aRo | JVdpl | TnINJ | aRq | aRp | ()Lsixtwo/fx$sT; | field_1852 | PhcLM | iLysS |
XZIWm | aRr | (Lsixtwo/fx$sT;)V | aRs | DqFyV | gTABZ | qPSSJ | aRv | CVZbc | aRw |
(Ljava/util/List;)I | wooFC | (Lsixtwo/oH;)V | JVKvm | IfUFA | zEDLl | sozdP | aRt |
cbLje | ZWKLJ | interactionSlot | cKc | field_12969 | GLCcw | field_10980 | field_11033 |
aRu | (Lsixtwo/fx$sT;)I | wDrfa | dKTMI | qJwPM | kMhip | cpO | hSKyg | DStJv | zVWpx |
pdvOw | DCBee | aRC | aRD | JkmiA | CKfua | aRG | OlRyl | sixtwo/fy | omtcl | aRL |
yhrdq | jlVat | VcMsR | hSWnq | BpvnW | HJKFq | TtVtG | aRK | Egkrb | BkDbz | aRN | aRM |
YfgMR | vfJqK | CHWJb | aRQ | sixtwo/fz | PnAIn | WdogO | rByTO | KZLPf | aRV | EiuwG |
method_5809 | uYazo | ZGNVq | QrNyB | method_49107 | CIryL | likHN | aRX | euEJd | ddesD |
aRW | sixtwo/fA | pJNbd | aSb | npLQh | cCwdY | HGYdz | gaHGm | Lblbv | BMRFS | aSd |
EnpZA | jKuHD | sixtwo/fB | XVRCB | WFFVU | pKMKg | NSrLe | UkpKz | aSc | aSo | snO…
```

Reliable MC API surface from this slice `[slice]`:

- `field_12969` = `PlayerActionC2SPacket.Action.SWAP_ITEM_WITH_OFFHAND` (`class_2846$class_2847`).
- `field_10980` = `BlockPos.ORIGIN`; `field_11033` = `Direction.DOWN`.
- **Together these three are the canonical vanilla hand-swap packet `new PlayerActionC2SPacket(SWAP_ITEM_WITH_OFFHAND, BlockPos.ORIGIN, Direction.DOWN)`.** Attribution is strong: they sit in the token run `… cbLje, ZWKLJ, interactionSlot, cKc, field_12969, GLCcw, field_10980, field_11033, aRu …` — interleaved with fx-specific setting tokens (`cbLje` "Auto Open Inventory", `GLCcw` "Open Delay"), not with neighbor blocks `[slice, inferred]`. This is most plausibly the "Legit" mode path (server-legal offhand swap packet) as opposed to the `oR.cKc` window-click path `[inferred, uncertain]`.
- `field_1852` = `GameOptions.hotbarKeys` (`[Lnet/minecraft/class_304;` = `KeyBinding[9]`) — plausibly used by "Take From Hotbar" to scan/identify hotbar slots `[slice, inferred, uncertain]`.
- `method_5809` = `Entity.isOnFire()Z`; `method_49107` = `Attackable.getLastAttacker()` (→ `LivingEntity`) — sit in the `sixtwo/fy` / `sixtwo/fz` (Totem Refill / Auto Jump Reset) token runs; fx attribution uncertain `[slice, uncertain]`.
- `cKc` = `oR.cKc(int)` (the SWAP click above); `interactionSlot` = `fx$sT.interactionSlot()`.
- Self symbols: fields `zAhcx, tpbid, yvOlX, JVdpl, TnINJ, DqFyV, PhcLM, iLysS, XZIWm, wooFC, JVKvm, IfUFA, zEDLl, gTABZ, qPSSJ, CVZbc, cbLje, ZWKLJ, wDrfa, dKTMI, qJwPM, kMhip, hSKyg, DStJv`; methods `aRf, aRm, aRB, aRl, aRn, aRo, aRq, aRp ()Lsixtwo/fx$sT;, aRr/aRs (Lsixtwo/fx$sT;)V, aRv, aRw (Ljava/util/List;)I, aRt (Lsixtwo/oH;)V, aRu (Lsixtwo/fx$sT;)I, aRC, aRD, aRG, interactionSlot`.
- `aRt`'s descriptor in its own slice is `(Lsixtwo/oH;)V` (takes a raw `oH` wrapper, not an `fx$sT` record) — the only handler with a distinct slice.
- Tokens `sixtwo/fy, sixtwo/fz, sixtwo/fA, sixtwo/fB` and everything from `omtcl` onward belong to the neighboring modules sharing this pool window: **fy = "Totem Refill" (id 32), fz = "Auto Jump Reset" (id 23), fA = "Potion Refill" (id 7), fB = "Auto Shield Break" (id 3)** `[structural spec]`. Their method/field names (`aRL, aRK, aRN, aRM, aRQ, aRV, aRX, aRW, aSb, aSc, aSd, aSo`, `omtcl`, `zVWpx…UkpKz`) must not be attributed to fx.

## Per-handler semantics

### Framework / obfuscation machinery (no module behavior)

- **`YO()V` [18b157c20]** `[slice 0x3806,0xbf]` — module tick override. Slice tokens: `Lsixtwo/gg;`, `baf ()Lsixtwo/gc;`, `sixtwo/gc`, `aZg ()Lsixtwo/gd;`, `aZi (Lsixtwo/gd;)Lsixtwo/gc;`, `cnP (FFF)Lsixtwo/mG;`, `sixtwo/gx` — reads/writes the 2-state module tick enum `gd {ipLAD, zlSAY}` and constructs an RGB color via `mG.cnP(float,float,float)`; exact transitions and color values are inside the VM `[inferred]`.
- **`_c7ac3063eea47a4b2ccde72f1bb0bf92()V` [18b2f3e90]** `[slice 0x226,0xd]` — native clinit stub; slice resolves `java/lang/String` / `<init>` for the `Loader.doInit(fx.class)` path. No module behavior `[decompiled]`.
- **`aRB(Ljava/lang/MatchException;)Ljava/lang/MatchException;` [18b2a7ed0]** — decompiled body `return param_3;` — identity rethrow for the `MatchException` pattern. No behavior `[decompiled]`.
- **`aRC([B)Ljava/lang/String;` [18b2af3b0]** — `byte[] → String` decryptor primitive (no blob decrypt). Obfuscation machinery `[decompiled machinery]`.
- **`aRD(IJ)Ljava/lang/String;` [18b2da040]** — the invokedynamic **string-constant decrypt kernel** (desc `(IJ)Ljava/lang/String;`), ~600 lines of MBA key-mixing over payload globals, ending by decrypting the main slice and tail-dispatching. Observable contract: `aRD(int off, long key) → decrypted String` `[decompiled machinery]`.
- **`aRG(IJ)I` [18b2e4ce0]** — the indy **int-constant decrypt kernel** (matches full-dump `bsm aRI`, desc `(IJ)I`; 348 constants decrypted through it for fx). ~590 lines of MBA mixing. Observable contract: `aRG(int off, long key) → decrypted int` `[decompiled machinery]`.
- **`aRE`/`aRH (Lookup;MutableCallSite;String;[Object;)` [18b2e1330]/[18b2f0170]** — `MutableCallSite` re-bootstraps (indy cache invalidation). No module behavior `[decompiled stubs]`.
- **`aRF`/`aRI (Lookup;String;MethodType;)CallSite` [18b2e2220]/[18b2f1180]** `[slice 0x857,0x26]` — indy bootstraps; slice tokens are tails of `Ljava/lang/invoke/MethodHandle;` plus an obfuscated name. Standard plumbing `[decompiled machinery]`.
- **`aRm()V` [18b321280]** — no blob decrypt; trivial decompile. Likely a compiler-synthesized accessor/bridge or empty stub `[decompiled stub, uncertain]`.

### `fx$sT` record natives

- **`slot()V→…` [18b345190]** — record component accessor `slot()` returning the wrapped `oH` `[decompiled record, native impl]`.
- **`interactionSlot()I` [18b341e40]** — record method converting the wrapped slot to the click-packet slot id (see `oR.cJU` mapping above) `[decompiled contract, offset constant unrecovered]`.
- equals/hashCode/toString use the clinit string slice `[0x226,0xd]` `[slice]`.

### Behavior handlers (all main-slice `[0x13ddd,0x321]` unless noted)

- **`aRj(Lsixtwo/gH$th;)V` [18b157f10]** — `@hG` player-tick listener (default priority). Core per-tick loop: check offhand content against the configured totem item, evaluate the health trigger, build a plan `fx$sT`, and dispatch it (timing via the four `mT` timers: Swap Cooldown / Open Delay / Close Delay windows) `[slice + decompiled wiring + inferred]`.
- **`aRk(Lsixtwo/gA;)V` [18b2a7f60]** — `@hG(mw.LOWEST)` input listener. Implements "Block Input": when enabled (and plausibly while the swap sequence is running), consume/suppress the input event before other handlers see it `[decompiled annotation + inferred]`.
- **`aRA()V` [18b2124c0]** — "Mode" group change callback (`BYSSp.Vd(this::aRA)`). Likely resets plan/timer state when the mode (Legit/Normal) flips `[decompiled wiring + inferred]`.
- **`aRz()V` [18b178360]** — "Inventory Mode" group change callback (`XZIWm.Vd(this::aRz)`); same reset pattern for Client/Silent flips `[decompiled wiring + inferred]`.
- **`aRx()V` [18b170b10]** — "Block Input" toggle callback (`JVdpl.Vd(this::aRx)`) `[decompiled wiring, body unrecovered]`.
- **`aRy()Ljava/lang/Boolean;` [18b1746e0]** — "Close Delay" change callback (`qPSSJ.Vf(this::aRy)`); Boolean-returning validation supplier (plausibly "Close Delay is meaningful only if Close After Swap") `[decompiled wiring + inferred]`.
- **`aRp()Lsixtwo/fx$sT;` [18b32d4f0]** — build the current swap plan: scan inventory for a stack of the configured totem item (respecting "Take From Hotbar" and "Pick Random Totem") and wrap the chosen container slot as `fx$sT(oH)` `[slice descriptor + decompiled helper contract + inferred]`.
- **`aRr(Lsixtwo/fx$sT;)V` [18b339c30] / `aRs(Lsixtwo/fx$sT;)V` [18b15fc50]** — the two `(Lsixtwo/fx$sT;)V` setters in the slice: store/consume a plan (e.g. staged slot vs. executed plan; which is which is unrecovered) `[slice, uncertain]`.
- **`aRu(Lsixtwo/fx$sT;)I` [18b166600]** — score or validate a plan, returning an int (e.g. stack count in the slot, or a preference ranking used by "Pick Random Totem") `[slice descriptor, uncertain]`.
- **`aRw(Ljava/util/List;)I` [18b16cd50]** — `(List) → int` over candidate slots; plausibly collects eligible totem slots and returns a count/index `[slice descriptor, uncertain]`.
- **`aRt(Lsixtwo/oH;)V` [18b165360]** `[slice 0x13db5,0x320]` — the only handler with its own slice variant (0x28 earlier, extra tokens `method_15769` = `FluidState.isEmpty()Z`, `lSNgg`, `YezLm`, `SVJts`, `aRg`). Descriptor `(Lsixtwo/oH;)V` = perform the swap for a slot wrapper — plausibly the Client-mode executor (open screen → `oR.cKc`/`cKd` click → close, with Open/Close Delay timers), while `fx$sT`-taking handlers serve the plan path `[slice + inferred, uncertain]`. Why a totem module needs `FluidState.isEmpty` (lava proximity?) is unrecovered `[uncertain]`.
- **`aRl()Z` [18b31a380], `aRo()Z` [18b327a10], `aRq()Z` [18b331b40]** — three parameterless boolean gates. Candidate roles: "health requirement met" (`CVZbc`/`wooFC`), "totem available in inventory", "inventory open / screen ready"; assignment unrecovered `[slice, inferred, uncertain]`.
- **`aRn()V` [18b3217f0]** — parameterless void step (plausibly "close inventory" or "reset cycle state") `[slice, uncertain]`.
- **`aRv()Lnet/minecraft/class_1792;` [18b16c420]** — no blob decrypt; `() → Item`. Most plausible role: read the configured "Totem Item" from setting `wDrfa` (default `Items.TOTEM_OF_UNDYING`) `[decompiled setting + descriptor, inferred]`.

### Anti-trace noise

`rdtsc` reads occur in continuation fragments (e.g. block `[18b2f58d9]`, which also writes stack constants `0xf9c122fc`, `0x44`, `0x530045` and calls vtable offset `0x518`); none gate recoverable logic — anti-trace noise `[uncertain]`. The only semantically interpretable JNI work outside the dispatcher stubs is continuation block **[18b316dcb]**: `GetPrimitiveArrayCritical` (0x6F0) / `ReleasePrimitiveArrayCritical` (0x6F8) / `GetArrayLength` (0x558) with a `GetArrayLength < 7` guard over single-byte elements — the pool/string decrypt runtime, not module behavior `[decompiled machinery]`.

## Settings → behavior mapping

| setting | wrapper | decrypted value | behavior link |
|---|---|---|---|
| "Totem Item" | `cK` (field `wDrfa`) | char codes `{84,111,116,101,109,32,73,116,101,109}` ("Totem Item", len 10); `.WM(jc.WnbNG)` whitelist; `.WN(Items.TOTEM_OF_UNDYING)` default | the item counted as "totem"; read by the offhand check and inventory scan (`aRv`/`aRp` cluster) `[inferred]`; `jc.WnbNG` is a `Set<Item>` populated by native `jc.bzM()` `[decompiled]` |
| "Mode" | `ct` group (field `BYSSp`) | char codes `{77,111,100,101}` ("Mode"); `.SO(1)`; children `hSKyg`="Legit" `{76,101,103,105,116}`, `dKTMI`="Normal" `{78,111,114,109,97,108}` | selects the swap mechanism: "Legit" plausibly the vanilla `SWAP_ITEM_WITH_OFFHAND` packet (slice tokens `field_12969`/`field_10980`/`field_11033`), "Normal" the window-click path through `oR.cKc` `[inferred, uncertain]`; change callback `aRA` `[decompiled]` |
| "Inventory Mode" | `ct` group (field `XZIWm`) | char codes `{73,110,118,101,110,116,111,114,121,32,77,111,100,101}` ("Inventory Mode"); `.SO(1)`; children `yvOlX`="Client" `{67,108,105,101,110,116}`, `DStJv`="Silent" `{83,105,108,101,110,116}` | Client = actually open the inventory screen during the swap (gated by "Auto Open Inventory"/"Open Delay"/"Close After Swap"/"Close Delay"); Silent = click without a visible screen. Change callback `aRz` `[decompiled wiring + inferred]` |
| "Auto Open Inventory" | `cJ` (field `cbLje`) | char codes `{65,117,116,111,32,79,112,101,110,32,73,110,118,101,110,116,111,114,121}` ("Auto Open Inventory"); `.WE(true)` default **true** | auto-opens the inventory screen before clicking in Client mode `[inferred]` |
| "Take From Hotbar" | `cJ` (field `JVKvm`) | char codes `{84,97,107,101,32,70,114,111,109,32,72,111,116,98,97,114}` ("Take From Hotbar"); `.WE(false)` default **false** | allows sourcing the totem from hotbar slots; slice carries `field_1852` (`GameOptions.hotbarKeys`) `[decompiled setting + slice, inferred]` |
| "Swap Cooldown" | `cA` (field `iLysS`) | char codes `{83,119,97,112,32,67,111,111,108,100,111,119,110}` ("Swap Cooldown"); `.UG(50.0)` default **50.0**, `.UE(0.0)` min, `.UF(5000.0)` max, `.UI(0.0,0.0)`, `.UH(" ms")` | minimum interval between swaps; enforced by one of the four `mT` timers (`cpC`/`cpD`-style threshold checks) `[decompiled constants + inferred mechanism]` |
| "Open Delay" | `cA` (field `GLCcw`) | char codes `{79,112,101,110,32,68,101,108,97,121}` ("Open Delay"); `.UG(10.0)` default **10.0**, min **0.0**, max **1000.0**, `.UH(" ms")` | delay between opening the inventory and the first click `[inferred]` |
| "Close After Swap" | `cJ` (field `qJwPM`) | char codes `{67,108,111,115,101,32,65,102,116,101,114,32,83,119,97,112}` ("Close After Swap"); `.WE(true)` default **true** | closes the screen after the swap completes `[inferred]` |
| "Close Delay" | `cA` (field `qPSSJ`) | char codes `{67,108,111,115,101,32,68,101,108,97,121}` ("Close Delay"); `.UG(10.0)` default **10.0**, min **0.0**, max **1000.0**, `.UH(" ms")` | delay before closing; change callback `aRy` returns `Boolean` `[decompiled wiring]` |
| "Return Original Slot" | `cJ` (field `ZWKLJ`) | char codes `{82,101,116,117,114,110,32,79,114,105,103,105,110,97,108,32,83,108,111,116}` ("Return Original Slot"); `.WE(false)` default **false** | after the totem is consumed, swap the (now empty/exchanged) stack back to its original container slot `[inferred]` |
| "Health Requirement" | `cJ` (field `CVZbc`) | char codes `{72,101,97,108,116,104,32,82,101,113,117,105,114,101,109,101,110,116}` ("Health Requirement"); `.WE(true)` default **true** | gates the swap on player health; when false the module keeps the offhand stocked unconditionally `[inferred]` |
| "Minimal Health %" | `cC` (field `wooFC`) | char codes `{77,105,110,105,109,97,108,32,72,101,97,108,116,104,32,37}` ("Minimal Health %"); `.Vy(1.0)` step, `.Vw(0.0)` min, `.Vx(100.0)` max, `.VA(50.0)` default **50.0**, `.Vz("%")` | the threshold the health check compares against; the comparison formula (which health value, absorption handling, percent scaling) is unrecovered `[inferred]` |
| "Pick Random Totem" | `cJ` (field `kMhip`) | char codes `{80,105,99,107,32,82,97,110,100,111,109,32,84,111,116,101,109}` ("Pick Random Totem"); `.WE(false)` default **false** | when multiple totem stacks exist, choose one randomly instead of deterministically (first/best) `[inferred]` |
| "Block Input" | `cJ` (field `JVdpl`) | char codes `{66,108,111,99,107,32,73,110,112,117,116}` ("Block Input"); `.WE(true)` default **true** | suppress mouse/keyboard input via `aRk(gA)` (registered at **LOWEST** priority so it runs first) `[decompiled wiring + inferred]` |

All string constants verified against `analysis/decrypted/full-dump.jsonl` (351 entries for `sixtwo.fx`; the 3 `aRF` strings are all `" ms"`).

## Unrecovered / uncertain

The following are explicitly NOT recoverable from this corpus. Do not guess them in the clean-room rebuild; pick documented designer choices and record divergence in PARITY.md:

1. **All behavior-method bytecode bodies.** The 15+ main-slice handlers are dispatcher stubs into the thread-code native VM; the 315 continuation fragments (max ~890 lines, all MBA arithmetic) could not be stitched into method bodies.
2. **The health trigger math.** Which quantity is compared against "Minimal Health %" (default 50.0) — raw hearts, scaled 0–100, absorption-inclusive — and the comparison direction, are inside the VM. Only the gate exists ("Health Requirement" default true).
3. **The SWAP-click button** used by `oR.cKc`: indy int `cKy("q", 2855, 0x4757651B4B150E70L ^ …)`. A vanilla `SlotActionType.SWAP` button is a hotbar index 0–8 or the offhand index 40, but the constant itself is unrecovered.
4. **The hotbar→window-slot offset** in `oR.cJU` (indy int `cKy("q", 27928, 0x60089CAAC2E93973L ^ …)`), needed to translate a hotbar index into a `clickSlot` argument.
5. **The `mT` timer multiplier `fCqJQ`** (DES-encrypted) used by `cpD`/`cpE`, and the assignment of the four timers (`PhcLM, zEDLl, gTABZ, IfUFA`) to Swap Cooldown / Open Delay / Close Delay / swap-cycle state.
6. **Mode-path wiring.** Whether "Legit" uses the `PlayerActionC2SPacket(SWAP_ITEM_WITH_OFFHAND, BlockPos.ORIGIN, Direction.DOWN)` tokens and "Normal" uses window clicks (or vice versa), and how "Inventory Mode" (Client/Silent) interacts with that choice — only tokens and setting names are recovered.
7. **Role assignment** among the boolean gates `aRl/aRo/aRq`, the void step `aRn`, `aRw(List)I`, `aRu(fx$sT)I`, and the plan setters `aRr`/`aRs`.
8. **Roles of state fields** `DqFyV`, `TnINJ`, `zAhcx`, and token `aRf` (a self symbol with no matching native handler — plausibly a Java-only method).
9. **Cluster-slice attribution.** The `[0x13ddd,0x321]` window is shared with `sixtwo.fy` ("Totem Refill"), `sixtwo.fz` ("Auto Jump Reset"), `sixtwo.fA` ("Potion Refill"), `sixtwo.fB` ("Auto Shield Break"); tokens `method_5809` (`Entity.isOnFire`), `method_49107` (`Attackable.getLastAttacker`), and all `omtcl…UkpKz` member names belong to the neighbors unless positionally interleaved with fx tokens (only `field_12969`/`field_10980`/`field_11033` and `cKc`/`interactionSlot` pass that test). `oR.cKp`/`cKq`/`rB` (ELYTRA-path equipment reporting) are shared-helper machinery; their use by fx is unconfirmed.
10. **Why `aRt`'s slice carries `FluidState.isEmpty()Z`** (`method_15769`) — lava/water context check inside the swap executor or a neighbor leak; unrecovered.
11. **"Pick Random Totem" selection algorithm** (uniform over stacks? over slots? seeded how?).
12. **Unresolved JNIEnv vtable offsets** in continuation fragments: `0x68, 0x70, 0x78, 0x88, 0x100, 0x120, 0x140, 0x1f8, 0x2e8, 0x348, 0x398, 0x448, 0x488, 0x4b8, 0x518, 0x560`. Standard JNIEnv-table candidates (offsets +4 reserved slots) do not fit the observed call shapes; these are most plausibly a payload-internal bridge vtable, not raw JNIEnv. Do not interpret calls through them as MC API calls.
13. **The `mG.cnP(FFF)` color values and tick-gate writes** in `YO` [18b157c20], as in sibling modules.