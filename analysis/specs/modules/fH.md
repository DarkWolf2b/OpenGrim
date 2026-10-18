# Aim Assist (sixtwo.fH)

- Registry: `sixtwo.fH|Aim Assist|Automatically aims at entity|key=8|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fH.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 8, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~60 native tokens vs ~56 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically aims at entity

## Setting names (decrypted)

- `Aim Point` → **Aim Point**
- `Aim While On Target` → **Aim While On Target**
- `Best Vector` → **Best Vector**
- `Cancel In Screens` → **Cancel In Screens**
- `Custom Slots` → **Custom Slots**
- `Distance` → **Distance**
- `Draw Fov` → **Draw Fov**
- `Fov Color` → **Fov Color**
- `Health` → **Health**
- `Hold Key` → **Hold Key**
- `Horizontal` → **Horizontal**
- `Horizontal Speed` → **Horizontal Speed**
- `Ignore Friends` → **Ignore Friends**
- `Ignore Naked` → **Ignore Naked**
- `Ignore Walls` → **Ignore Walls**
- `Items To Use` → **Items To Use**
- `Locked` → **Locked**
- `Nearest Vector` → **Nearest Vector**
- `Predict Position` → **Predict Position**
- `Prediction Color` → **Prediction Color**
- `Prediction Ticks` → **Prediction Ticks**
- `Randomization` → **Randomization**
- `Render Prediction` → **Render Prediction**
- `Switch` → **Switch**
- `Target` → **Target**
- `Target Mode` → **Target Mode**
- `Target Options` → **Target Options**
- `Target Priority` → **Target Priority**
- `Vertical` → **Vertical**
- `Vertical Speed` → **Vertical Speed**
- `Weapon Only` → **Weapon Only**
- `When Holding` → **When Holding**

## Structural findings

### Settings (27 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.Rscmj | cF | `this, mr.clS(nArray) /* "Target" */` → .VS(jg$tJ.OCdZM) | 238 | see 00-framework.md [inferred] |
| this.MTMNI | cJ | `this, mr.clS(nArray3) /* "Horizontal" */` → .WE(true) | 267 | see 00-framework.md [inferred] |
| this.mcave | cJ | `this, mr.clS(nArray5) /* "Vertical" */` → .WE(true) | 295 | see 00-framework.md [inferred] |
| this.objof | ct | `this, mr.clS(nArray7) /* "Aim Point" */`  | 322 | see 00-framework.md [inferred] |
| this.iznEa | cu | `this.objof, mr.clS(nArray8) /* "Best Vec…`  | 335 | see 00-framework.md [inferred] |
| this.loMXv | cu | `this.objof, mr.clS(nArray9) /* "Nearest …` → .SY() | 351 | see 00-framework.md [inferred] |
| this.NURBy | cJ | `this, mr.clS(nArray10) /* "Aim While On …` → .WE(true) | 372 | see 00-framework.md [inferred] |
| this.xZaeo | cJ | `this, mr.clS(nArray11) /* "Predict Posit…` → .WE(false) | 390 | see 00-framework.md [inferred] |
| this.maPUy | cJ | `this, mr.clS(nArray13) /* "Render Predic…` → .WE(false) | 427 | see 00-framework.md [inferred] |
| this.uOqTy | cv | `this, mr.clS(nArray15) /* "Target Option…`  | 461 | see 00-framework.md [inferred] |
| this.ZuWds | cw | `this.uOqTy, mr.clS(nArray16) /* "Ignore …`  | 475 | see 00-framework.md [inferred] |
| this.AcJyQ | cw | `this.uOqTy, mr.clS(nArray17) /* "Ignore …`  | 491 | see 00-framework.md [inferred] |
| this.jdxNC | cw | `this.uOqTy, mr.clS(nArray18) /* "Ignore …`  | 505 | see 00-framework.md [inferred] |
| this.pNnvx | ct | `this, mr.clS(nArray19) /* "Items To Use"…`  | 519 | see 00-framework.md [inferred] |
| this.ClWRz | cu | `this.pNnvx, mr.clS(nArray20) /* "Weapon …`  | 532 | see 00-framework.md [inferred] |
| this.MEfRH | cu | `this.pNnvx, mr.clS(nArray21) /* "Custom …`  | 546 | see 00-framework.md [inferred] |
| this.hjLsk | cz | `this, mr.clS(new int[]{(int)83, (int)108…`  | 547 | see 00-framework.md [inferred] |
| this.mMTcv | ct | `this, mr.clS(nArray22) /* "Target Priori…`  | 564 | see 00-framework.md [inferred] |
| this.KLTHe | cu | `this.mMTcv, mr.clS(nArray23) /* "Distanc…`  | 574 | see 00-framework.md [inferred] |
| this.rglYd | cu | `this.mMTcv, mr.clS(nArray24) /* "Health"…`  | 582 | see 00-framework.md [inferred] |
| this.uqpih | ct | `this, mr.clS(nArray25) /* "Target Mode" …`  | 595 | see 00-framework.md [inferred] |
| this.BtIDI | cu | `this.uqpih, mr.clS(nArray26) /* "Switch"…`  | 603 | see 00-framework.md [inferred] |
| this.rSkxN | cu | `this.uqpih, mr.clS(nArray27) /* "Locked"…`  | 611 | see 00-framework.md [inferred] |
| this.sYBzd | cJ | `this, mr.clS(nArray28) /* "Cancel In Scr…` → .WE(true) | 630 | see 00-framework.md [inferred] |
| this.AwNUJ | cJ | `this, mr.clS(nArray29) /* "Draw Fov" */` → .WE(false) | 640 | see 00-framework.md [inferred] |
| this.BkSML | cJ | `this, mr.clS(nArray31) /* "When Holding"…` → .WE(false) | 665 | see 00-framework.md [inferred] |
| this.gMClj | cD | `this, mr.clS(nArray32) /* "Hold Key" */` → .VO(mA.sCBUa.cmO()) | 675 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `com.ibm.icu.impl.Pair`
- `java.util.ArrayList`
- `java.util.Map`
- `java.util.Random`
- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Aim Assist" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fH.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.

## Native handler findings

Source: `../../../analysis/ghidra/handlers/sixtwo_fH.c` (59 handler stubs, j2cc native bodies).
Bodies are interpreter-obfuscated (XOR-mixed constants feeding `func_0x…` dispatches, no
readable trig/comparison code survives), so findings come from handler signatures, the
decompiled Java, and the decrypted setting builder chains.

### Handlers examined
- `aTv (Lsixtwo/gH$th;)V` — render handler; decompile timed out.
- `aTw (Lsixtwo/go$sX;)V` — primary event handler (large obfuscated body).
- `aTy (Lsixtwo/gk;)V` — second event handler (per-tick aim update; large body).
- `aTx ()Lnet/minecraft/class_1309;` / `aUl ()` — target getters (signature only).
- `aUp (Lnet/minecraft/class_1297;)Z` — target-validity predicate (entity in, bool out).
- `aUq (Lnet/minecraft/class_746;)Ljava/lang/Boolean;` — player-condition gate.
- `aUr/aUs ()Ljava/lang/Boolean;` — setting-visibility suppliers.
- `aUn/aUo ()F` — float accessors (rotation/step state).

### What the decrypted settings reveal (cross-checked with builder chains)
- Constructor wires a seeded noise generator: `iywBD.cqr(new Random().nextInt())` (seed),
  `cqs(0.05f)` (frequency), `cqw(3)` (3 octaves), `cqv(mV$uX.AjjgB)` (mode) — the
  `Randomization` setting (step 1, 0–100 %, default 5) drives *smooth noise*, not
  per-tick uniform jitter.
- `Range` (step 0.1, 3.0–10.0, default 6.0), `FOV` (step 1, 10–360, default 180 deg),
  `Horizontal/Vertical Speed` (step 0.1, 0.1–20.0, default 1.0) — all already matched.
- `Prediction Ticks` (step 1, 1.0–5.0, default 2.0), visibility-gated by
  `Predict Position` (default off) — already matched.
- `Aim Point` = `Best Vector` | `Nearest Vector`; the `.SY()` default marker sits on
  `Nearest Vector` (loMXv) ⇒ default is **Nearest Vector**, not Best Vector.
- `Target Mode` = `Switch` | `Locked` with no `.SO` index ⇒ default first option
  (Switch). `Target Priority` default Distance.
- `Target Options` filters: Ignore Walls / Ignore Friends / Ignore Naked only.

### Upgraded in rebuild (`modules/combat/AimAssist.java`)
- Replaced the per-tick uniform random jitter with a deterministic smooth-noise offset:
  1D value noise, 3 octaves, base frequency 0.05, reseeded on enable (yaw amplitude 4 deg
  and pitch 2 deg at 100 % randomization — same envelope as before).
- `aim_point` default changed `best_vector` → `nearest_vector` per the `.SY()` marker.
- Not ported (native-blocked): prediction-path rendering, FOV circle drawing, the exact
  `mV` noise mode enum.
