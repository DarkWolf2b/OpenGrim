# Fake Lag (sixtwo.ff)

- Registry: `sixtwo.ff|Fake Lag|Creates lagging effect|key=18|bind=82` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ff.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 18, active bind 82 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~37 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Creates lagging effect

## Setting names (decrypted)

- `Lag Range` → **Lag Range**
- `Lag Range Distance` → **Lag Range Distance**
- `Normal` → **Normal**
- `Packet Interval` → **Packet Interval**
- `Reset On Explosion` → **Reset On Explosion**
- `Reset On Health Update` → **Reset On Health Update**
- `Reset On Knockback` → **Reset On Knockback**
- `Reset Time` → **Reset Time**

## Structural findings

### Settings (8 constructed — STALE: corrected 2026-10-17, batch 30: omits the `cC` Reset Time widget (ff.java:188) and the `kx` component (ff.java:233); see the impl + `handlers/ff.md`)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.cehgg | ct | `this, mr.clS(new int[]{(int)77, (int)111…`  | 100 | see 00-framework.md [inferred] |
| this.dYwpF | cu | `this.cehgg, mr.clS(nArray) /* "Normal" *…`  | 108 | see 00-framework.md [inferred] |
| this.NuoRm | cu | `this.cehgg, mr.clS(nArray2) /* "Lag Rang…`  | 119 | see 00-framework.md [inferred] |
| this.qWnBv | cA | `this, mr.clS(nArray3) /* "Packet Interva…` → .UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH((String)((Object)" ms")) | 136 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.FUqia | cA | `this, mr.clS(nArray4) /* "Lag Range Dist…` → .UG(0.1).UE(1.0).UF(6.0).UI(1.0, 3.6).UH((String)((Object)" blocks")) | 156 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.bAadz | cJ | `this, mr.clS(nArray5) /* "Reset On Knock…` → .WE(false) | 176 | see 00-framework.md [inferred] |
| this.fFKwZ | cJ | `this, mr.clS(nArray7) /* "Reset On Explo…` → .WE(true) | 208 | see 00-framework.md [inferred] |
| this.Bfvhw | cJ | `this, mr.clS(nArray8) /* "Reset On Healt…` → .WE(false) | 232 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods — STALE: corrected 2026-10-17, batch 30: six `@hG` listeners exist; see `handlers/ff.md`)

None declared in this class.

### Minecraft API surface (10 refs)

- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket`
- `net.minecraft.network.packet.c2s.play.HandSwingC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractBlockC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractItemC2SPacket`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `java.util.Queue`
- `java.util.concurrent.ConcurrentLinkedQueue`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket`
- `net.minecraft.network.packet.c2s.play.HandSwingC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractBlockC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractItemC2SPacket`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket`
- `net.minecraft.network.packet.c2s.play.HandSwingC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractBlockC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerInteractItemC2SPacket`

## Port notes (dev.opengrim)

- Implement "Fake Lag" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ff.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
