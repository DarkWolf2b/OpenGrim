# Ambience (sixtwo.dh)

- Registry: `sixtwo.dh|Ambience|Changes the world ambience|key=123|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dh.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 123, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~54 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Changes the world ambience

## Setting names (decrypted)

- `Change Time` → **Change Time**
- `Change Weather` → **Change Weather**
- `Custom` → **Custom**
- `Evening` → **Evening**
- `Fog Color` → **Fog Color**
- `Fog Range` → **Fog Range**
- `Morning` → **Morning**
- `Override` → **Override**
- `Particle Type` → **Particle Type**
- `Particles` → **Particles**
- `Particles Color` → **Particles Color**
- `Presets` → **Presets**
- `Real Time` → **Real Time**
- `Sunset` → **Sunset**
- `Sync With Sky` → **Sync With Sky**
- `Thunder` → **Thunder**
- `Time Mode` → **Time Mode**
- `Time Value` → **Time Value**
- `Triangles` → **Triangles**
- `Weather` → **Weather**

## Structural findings

### Settings (28 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.mfkLN | cJ | `this, mr.clS(nArray) /* "Particles" */` → .WE(false) | 138 | see 00-framework.md [inferred] |
| this.jabvB | ct | `this, mr.clS(nArray2) /* "Particle Type"…`  | 153 | see 00-framework.md [inferred] |
| this.GBNpt | cu | `this.jabvB, mr.clS(nArray3) /* "Triangle…`  | 164 | see 00-framework.md [inferred] |
| this.CqmWf | cu | `this.jabvB, mr.clS(new int[]{(int)67, (i…`  | 165 | see 00-framework.md [inferred] |
| this.yFtsJ | cJ | `this, mr.clS(nArray5) /* "Change Time" *…` → .WE(true) | 195 | see 00-framework.md [inferred] |
| this.qpOXm | ct | `this, mr.clS(nArray6) /* "Time Mode" */`  | 206 | see 00-framework.md [inferred] |
| this.BoBPt | cu | `this.qpOXm, mr.clS(nArray7) /* "Presets"…`  | 215 | see 00-framework.md [inferred] |
| this.aZAwH | cu | `this.qpOXm, mr.clS(nArray8) /* "Custom" …`  | 223 | see 00-framework.md [inferred] |
| this.JQMui | ct | `this, mr.clS(new int[]{(int)84, (int)105…`  | 224 | see 00-framework.md [inferred] |
| this.ZpFTL | cu | `this.JQMui, mr.clS(new int[]{(int)68, (i…`  | 225 | see 00-framework.md [inferred] |
| this.YJtQI | cu | `this.JQMui, mr.clS(nArray9) /* "Morning"…`  | 234 | see 00-framework.md [inferred] |
| this.LqvcY | cu | `this.JQMui, mr.clS(new int[]{(int)68, (i…`  | 235 | see 00-framework.md [inferred] |
| this.sZhib | cu | `this.JQMui, mr.clS(nArray10) /* "Evening…`  | 244 | see 00-framework.md [inferred] |
| this.GUxQz | cu | `this.JQMui, mr.clS(nArray11) /* "Sunset"…`  | 252 | see 00-framework.md [inferred] |
| this.NTDZv | cu | `this.JQMui, mr.clS(new int[]{(int)78, (i…`  | 253 | see 00-framework.md [inferred] |
| this.wVJGm | cu | `this.JQMui, mr.clS(nArray12) /* "Real Ti…`  | 264 | see 00-framework.md [inferred] |
| this.YdEwv | cJ | `this, mr.clS(nArray14) /* "Change Weathe…` → .WE(true) | 292 | see 00-framework.md [inferred] |
| this.pJzyP | ct | `this, mr.clS(nArray15) /* "Weather" */`  | 301 | see 00-framework.md [inferred] |
| this.fqmSC | cu | `this.pJzyP, mr.clS(new int[]{(int)67, (i…`  | 302 | see 00-framework.md [inferred] |
| this.eQLga | cu | `this.pJzyP, mr.clS(new int[]{(int)82, (i…`  | 303 | see 00-framework.md [inferred] |
| this.erIOP | cu | `this.pJzyP, mr.clS(nArray16) /* "Thunder…`  | 312 | see 00-framework.md [inferred] |
| this.HvDcw | cu | `this.pJzyP, mr.clS(new int[]{(int)83, (i…`  | 313 | see 00-framework.md [inferred] |
| this.tOEQJ | ct | `this, mr.clS(new int[]{(int)70, (int)111…`  | 314 | see 00-framework.md [inferred] |
| this.vkaUD | cu | `this.tOEQJ, mr.clS(new int[]{(int)78, (i…`  | 315 | see 00-framework.md [inferred] |
| this.vNlIZ | cu | `this.tOEQJ, mr.clS(new int[]{(int)67, (i…`  | 316 | see 00-framework.md [inferred] |
| this.uxQGU | cu | `this.tOEQJ, mr.clS(nArray17) /* "Overrid…` → .SY() | 326 | see 00-framework.md [inferred] |
| this.MbiQi | cA | `this, mr.clS(nArray19) /* "Fog Range" */` → .UG(1.0).UE(0.0).UF(256.0).UI(64.0, 128.0).UH((String)((Object)" blocks")) | 348 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.VkfWt | cJ | `this, mr.clS(nArray20) /* "Sync With Sky…` → .WE(true) | 363 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (7 refs)

- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.common.DisconnectS2CPacket`
- `net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket`
- `net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket$Reason`
- `net.minecraft.network.packet.s2c.play.WorldTimeUpdateS2CPacket`
- `net.minecraft.util.math.Box`
- `net.minecraft.world.World`

### Other imports of interest

- `com.mojang.blaze3d.platform.DepthTestFunction`
- `java.security.Key`
- `java.time.LocalTime`
- `java.time.ZoneId`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.common.DisconnectS2CPacket`
- `net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket`
- `net.minecraft.network.packet.s2c.play.WorldTimeUpdateS2CPacket`
- `net.minecraft.util.math.Box`
- `net.minecraft.world.World`
- `org.joml.Quaternionf`
- `org.joml.Quaternionfc`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.common.DisconnectS2CPacket`
- `net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket`
- `net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket$Reason`
- `net.minecraft.network.packet.s2c.play.WorldTimeUpdateS2CPacket`

## Port notes (dev.opengrim)

- Implement "Ambience" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dh.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
