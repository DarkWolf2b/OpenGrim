# Particles (sixtwo.cR)

- Registry: `sixtwo.cR|Particles|Renders particles in the world|key=125|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cR.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 125, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~13 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders particles in the world

## Setting names (decrypted)

- `Add on` → **Add on**
- `Amount` → **Amount**
- `Arrow Shot` → **Arrow Shot**
- `Clouds` → **Clouds**
- `Diamonds` → **Diamonds**
- `Hearts` → **Hearts**
- `Movement` → **Movement**
- `Particles` → **Particles**
- `Pearl Throw` → **Pearl Throw**
- `Physics` → **Physics**
- `Snowflakes` → **Snowflakes**
- `Thunders` → **Thunders**
- `Totem Pop` → **Totem Pop**
- `Trident Throw` → **Trident Throw**

## Structural findings

### Settings (20 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.imXIw | ct | `this, mr.clS(nArray) /* "Particles" */`  | 124 | see 00-framework.md [inferred] |
| this.nVChr | cu | `this.imXIw, mr.clS(new int[]{(int)83, (i…`  | 125 | see 00-framework.md [inferred] |
| this.Taplw | cu | `this.imXIw, mr.clS(nArray2) /* "Snowflak…`  | 137 | see 00-framework.md [inferred] |
| this.sDuYV | cu | `this.imXIw, mr.clS(new int[]{(int)71, (i…`  | 138 | see 00-framework.md [inferred] |
| this.GZMuF | cu | `this.imXIw, mr.clS(nArray3) /* "Hearts" …`  | 146 | see 00-framework.md [inferred] |
| this.HzYvJ | cu | `this.imXIw, mr.clS(nArray4) /* "Diamonds…`  | 156 | see 00-framework.md [inferred] |
| this.wHlEJ | cu | `this.imXIw, mr.clS(nArray5) /* "Thunders…`  | 166 | see 00-framework.md [inferred] |
| this.BUBSR | cu | `this.imXIw, mr.clS(new int[]{(int)77, (i…`  | 167 | see 00-framework.md [inferred] |
| this.OJUIx | cu | `this.imXIw, mr.clS(nArray6) /* "Clouds" …`  | 175 | see 00-framework.md [inferred] |
| this.ywNJH | ct | `this, mr.clS(nArray7) /* "Physics" */`  | 185 | see 00-framework.md [inferred] |
| this.VMcLW | cu | `this.ywNJH, mr.clS(new int[]{(int)70, (i…`  | 186 | see 00-framework.md [inferred] |
| this.BjCne | cu | `this.ywNJH, mr.clS(new int[]{(int)68, (i…`  | 187 | see 00-framework.md [inferred] |
| this.pEdgo | cv | `this, mr.clS(nArray9) /* "Add on" */`  | 204 | see 00-framework.md [inferred] |
| this.Ubjvg | cw | `this.pEdgo, mr.clS(new int[]{(int)73, (i…` → .Tz() | 205 | see 00-framework.md [inferred] |
| this.UYbIm | cw | `this.pEdgo, mr.clS(nArray10) /* "Movemen…`  | 215 | see 00-framework.md [inferred] |
| this.IIZjW | cw | `this.pEdgo, mr.clS(nArray11) /* "Pearl T…`  | 228 | see 00-framework.md [inferred] |
| this.czNck | cw | `this.pEdgo, mr.clS(nArray12) /* "Arrow S…`  | 240 | see 00-framework.md [inferred] |
| this.cfNnD | cw | `this.pEdgo, mr.clS(nArray13) /* "Trident…`  | 255 | see 00-framework.md [inferred] |
| this.hQcMD | cw | `this.pEdgo, mr.clS(nArray14) /* "Totem P…`  | 266 | see 00-framework.md [inferred] |
| this.aTbJe | cJ | `this, mr.clS(new int[]{(int)71, (int)108…` → .WE(true) | 267 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (9 refs)

- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.projectile.PersistentProjectileEntity`
- `net.minecraft.entity.projectile.TridentEntity`
- `net.minecraft.entity.projectile.thrown.EnderPearlEntity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.World`

### Other imports of interest

- `com.mojang.blaze3d.platform.DepthTestFunction`
- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.projectile.PersistentProjectileEntity`
- `net.minecraft.entity.projectile.TridentEntity`
- `net.minecraft.entity.projectile.thrown.EnderPearlEntity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.World`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`

## Port notes (dev.opengrim)

- Implement "Particles" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cR.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
