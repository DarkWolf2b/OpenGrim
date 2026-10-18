# Chest Stealer (sixtwo.eb) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_eb.c` — 13 stitched handlers, 132 continuation blocks, 125 `halt_baddata()`, 0 `rdtsc`.
- Structural: `analysis/specs/modules/eb.md`; registry `sixtwo.eb|Chest Stealer|Automatically steals loot from the chest|key=68|bind=-999`.
- Java: `analysis/decompiled/payload-decrypted/sixtwo/eb.java` — settings labels are plain char-array literals, fully decoded below.
- Yarn: class_476=GenericContainerScreen, class_495=ShulkerBoxScreen, class_2371=DefaultedList; method_25440=Screen.getTitle(), method_7681=Slot.hasStack(), method_7963=ItemStack.isDamageable().

## Runtime model

Module extends `gg`, key 68, category `gh.qBzlZ`. All bodies in the `$mango$` VM; one shared pool window POOL[0xc1f7,0x213] used by the functional handlers (`aro`, `arp`), truncated at the tail after `(D)Lnet/minecr…`.

State (`eb.java`): settings fields only plus static decrypt plumbing (`pLesr`, `levSB`, `aWJGY`, `zeCFw`, `WefvZ`, `FDlBp`, `PwLkJ`).

Contract: while a storage screen is open (GenericContainerScreen / ShulkerBoxScreen), enumerate container slots (`DefaultedList`, `Slot.hasStack()`), filter by the item rules, and transfer the matching stacks to the player inventory. Title gating compares `Screen.getTitle()` (`method_25440`) against the "Storage Title" text per the Check-Storage-Title mode. Durability gating uses `ItemStack.isDamageable()` (`method_7963`) plus the Minimum Durability threshold for damageable items.

## Per-handler semantics

Trivial (group): `arr` (MatchException identity rethrow), `ars([B)→String` (string decoder), `art(IJ)→String` / `arw(IJ)→I` (seeded constant decryptors), `aru`/`arx` (MutableCallSite relays), `arv`/`ary` (CallSite bootstraps), `_c89bc814…` clinit [18d712d60] over POOL[0x226,0xd].

- `aro(gH$th)` [18d6f2650] — render-marker frame hook and the main loop: detect the open storage screen (class_476/class_495), run title check (`method_25440` + `YQDPW` text + mode children), enumerate slots (`class_2371`, `method_7681`), apply the item filter (`Ljava/util/Set;` token — the "Items" selection set from `iLvVO`), apply durability rules (`method_7963`, `VwKCp` threshold), and transfer matching stacks. `XMBJA` ("Hover") is evaluated here — the pool window contains the field token, consistent with restricting theft to the hovered slot when enabled.
- `arp()→Boolean` [18d70c280] — visibility predicate native: gates the "Storage Title" text setting (`YQDPW.Vf(this::arp)` in the Java ctor) — shown when the title-check mode is Equals/Contains.
- `arq()→Boolean` [18d72ef50] — visibility predicate native: gates the "Items" item selector (`iLvVO.Vf(this::arq)`) — shown when "Items To Steal" = "Selected".

Window straddle: the tail of POOL[0xc1f7,0x213] carries neighbor vocabulary — `sixtwo/ec` (Ghost Hand) with `arA`, `method_31709` (`AbstractBlockState.hasBlockEntity()`), and `sixtwo/ed` (Custom Camera Distance) with `arD`, `method_36454` getYaw, `method_36455` getPitch, `method_1024` rotateY, `method_1037` rotateX, `method_1021` multiply(D), `method_5836` getCameraPosVec(F), `method_18276` isInSneakingPose, `toRadians`. These belong to ec/ed, NOT eb. The head token `troyDelay` is a remnant of the preceding class's token (ends a longer name, plausibly "…destroyDelay") — owner unattributed.

## Settings → behavior mapping

Decoded from `payload-decrypted/sixtwo/eb.java`:

- `XMBJA` = "Hover" — `cJ .WE(false)` — steal only the hovered slot when on (label decoded "Hover"; missing from the modules-doc decrypted list — anomaly).
- `hXOHM` = "Check Storage Title" — `ct` group, children `oXJyj` = "Disabled", `VEKBb` = "Equals", `oKEJe` = "Contains"; compares the open screen's title (`method_25440`) with `YQDPW`.
- `YQDPW` = "Storage Title" — `cy` text setting (default text not visible in the decoded section — inside the encrypted blob), visibility-gated on the title-check mode.
- `CyMjO` = "Check Durability" — `cJ .WE(false)`.
- `VwKCp` = "Minimum Durability" — `cC .Vy(1.0).Vw(1.0).Vx(100.0).VA(30.0).Vz(" %")` → step 1.0, min 1.0, max 100.0, default 30.0, suffix " %"; visibility-gated on Check Durability.
- `rcYHI` = "Steal From" — `cv` group, children `SuQfI` = "Chest" (`.Tz()`), `BALtD` = "Shulk" (`.Tz()`) — matches the GenericContainerScreen/ShulkerBoxScreen screen pair.
- `ZDMzF` = "Items To Steal" — `ct` group, children `eTBAx` = "All", `dpNkl` = "Selected".
- `iLvVO` = "Items" — `cK .WM(jc.WnbNG)` pool = ALL Items (reflective set), no preselection decoded — the Selected-mode filter set.

## Unrecovered / uncertain

- **Transfer mechanics**: which packets/interaction path moves the stacks (click-window packets vs slot-action API) is entirely VM-hidden — no packet tokens visible in the window.
- **"Hover" semantics**: hovered-slot-only theft vs hover-to-trigger is inferred from the label; exact behavior unrecovered.
- **Steal order/limits**: slots-per-tick, delay between transfers, and inventory-fill order are unrecovered (no timer tokens in-window; if a delay exists it is VM-internal).
- **`YQDPW` default text** and the **exact title-match normalization** (case/strip) for Equals/Contains.
- **Head token `troyDelay`** and `CORiV`, `ADNhJ`, `arl`, `VZXHC`, `cJT`, `bze`, `ENAXX`, `fIYBK`, `esMqW`, `SRuur`, `PQbtp`, `bxZ` — per-group attribution unresolved (neighbors ec/ed or the preceding class).
- **`arp`/`arq` return Boolean (boxed)** — visibility callbacks presumably unbox; the exact gating conditions beyond the ctor wiring are unrecovered.