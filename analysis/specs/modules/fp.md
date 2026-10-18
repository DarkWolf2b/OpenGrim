# Backtrack (sixtwo.fp)

- Registry: `sixtwo.fp|Backtrack|Delays incoming packets to gain advantage|key=9|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fp.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 9, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~51 native tokens vs ~50 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Delays incoming packets to gain advantage

## Setting names (decrypted)

- `Chance` → **Chance**
- `Delay Knockback` → **Delay Knockback**
- `Distance` → **Distance**
- `Hurt Time` → **Hurt Time**
- `Knock Delay` → **Knock Delay**
- `Last Attack Time` → **Last Attack Time**
- `Latency` → **Latency**
- `Min-Max Distance` → **Min-Max Distance**
- `Pause On Hurt Time` → **Pause On Hurt Time**
- `Target Delay` → **Target Delay**
- `Target Mode` → **Target Mode**
- `Track Delay` → **Track Delay**

## Structural findings

### Settings (9 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.huobG | cA | `this, mr.clS(nArray) /* "Min-Max Distanc…` → .UG(0.1).UE(0.0).UF(10.0).UI(2.0, 3.5).UH((String)((Object)" blocks")) | 348 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.yNflG | cA | `this, mr.clS(nArray2) /* "Latency" */` → .UG(10.0).UE(0.0).UF(2500.0).UI(100.0, 500.0).UH((String)((Object)" ms")) | 357 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.RnQWk | cA | `this, mr.clS(nArray3) /* "Track Delay" *…` → .UG(10.0).UE(0.0).UF(2000.0).UI(500.0, 500.0).UH((String)((Object)" ms")) | 370 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.ntstt | cJ | `this, mr.clS(nArray5) /* "Pause On Hurt …` → .WE(true) | 398 | see 00-framework.md [inferred] |
| this.YicAd | ct | `this, mr.clS(nArray9) /* "Target Mode" *…`  | 454 | see 00-framework.md [inferred] |
| this.sCGqe | cu | `this.YicAd, mr.clS(new int[]{(int)72, (i…`  | 455 | see 00-framework.md [inferred] |
| this.srhrA | cu | `this.YicAd, mr.clS(nArray10) /* "Distanc…`  | 465 | see 00-framework.md [inferred] |
| this.qpbJT | cJ | `this, mr.clS(nArray11) /* "Delay Knockba…` → .WE(false) | 482 | see 00-framework.md [inferred] |
| this.AJNZt | cA | `this, mr.clS(nArray12) /* "Knock Delay" …` → .UG(25.0).UE(0.0).UF(9000.0).UI(2500.0, 2500.0).UH((String)((Object)" ms")) | 495 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.entity.TrackedPosition`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `com.google.common.collect.Queues`
- `java.util.Map`
- `java.util.concurrent.ConcurrentLinkedQueue`
- `net.minecraft.entity.TrackedPosition`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`

## Port notes (dev.opengrim)

- Implement "Backtrack" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fp.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
