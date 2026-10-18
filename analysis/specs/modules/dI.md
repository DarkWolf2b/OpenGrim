# Nuker (sixtwo.dI)

- Registry: `sixtwo.dI|Nuker|Automatically mines blocks|key=58|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dI.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 58, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~45 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically mines blocks

## Setting names (decrypted)

- `Avoid Lava` → **Avoid Lava**
- `Block To Mine` → **Block To Mine**
- `Blocks` → **Blocks**
- `Check Raycast` → **Check Raycast**
- `Faster` → **Faster**
- `Fastest` → **Fastest**
- `Fill Color` → **Fill Color**
- `Filled` → **Filled**
- `From List` → **From List**
- `Mine Flat` → **Mine Flat**
- `Mine In Screens` → **Mine In Screens**
- `Mining Speed` → **Mining Speed**
- `Normal` → **Normal**
- `Options` → **Options**
- `Outline Color` → **Outline Color**
- `Render Block` → **Render Block**
- `Selected` → **Selected**
- `Selection Key` → **Selection Key**
- `Through Walls` → **Through Walls**

## Structural findings

### Settings (17 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.OEGRT | ct | `this, mr.clS(nArray2) /* "Block To Mine"…`  | 160 | see 00-framework.md [inferred] |
| this.JsQul | cu | `this.OEGRT, mr.clS(nArray3) /* "From Lis…`  | 171 | see 00-framework.md [inferred] |
| this.ndzRO | cu | `this.OEGRT, mr.clS(nArray4) /* "Selected…`  | 181 | see 00-framework.md [inferred] |
| this.DmJAW | cu | `this.OEGRT, mr.clS(new int[]{(int)65, (i…`  | 182 | see 00-framework.md [inferred] |
| this.mbblx | cD | `this, mr.clS(nArray5) /* "Selection Key"…` → .VO((int)-999) | 197 | see 00-framework.md [inferred] |
| this.SIzNY | ct | `this, mr.clS(nArray6) /* "Mining Speed" …`  | 211 | see 00-framework.md [inferred] |
| this.iMYFd | cu | `this.SIzNY, mr.clS(nArray7) /* "Normal" …`  | 219 | see 00-framework.md [inferred] |
| this.nKDKe | cu | `this.SIzNY, mr.clS(nArray8) /* "Faster" …`  | 227 | see 00-framework.md [inferred] |
| this.cuKBK | cu | `this.SIzNY, mr.clS(nArray9) /* "Fastest"…`  | 236 | see 00-framework.md [inferred] |
| this.OgoNY | cv | `this, mr.clS(nArray10) /* "Options" */`  | 245 | see 00-framework.md [inferred] |
| this.RxRpl | cw | `this.OgoNY, mr.clS(nArray11) /* "Through…`  | 260 | see 00-framework.md [inferred] |
| this.QxImU | cw | `this.OgoNY, mr.clS(nArray12) /* "Mine Fl…`  | 271 | see 00-framework.md [inferred] |
| this.vbcIH | cw | `this.OgoNY, mr.clS(nArray13) /* "Avoid L…`  | 283 | see 00-framework.md [inferred] |
| this.eBhEo | cw | `this.OgoNY, mr.clS(nArray14) /* "Check R…` → .Tz() | 298 | see 00-framework.md [inferred] |
| this.uhsFy | cJ | `this, mr.clS(nArray15) /* "Render Block"…` → .WE(false) | 312 | see 00-framework.md [inferred] |
| this.YdLcc | cJ | `this, mr.clS(nArray18) /* "Filled" */` → .WE(false) | 347 | see 00-framework.md [inferred] |
| this.xbrHm | cJ | `this, mr.clS(nArray19) /* "Mine In Scree…` → .WE(false) | 364 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (21 refs)

- `net.minecraft.block.Block`
- `net.minecraft.block.BlockState`
- `net.minecraft.block.CropBlock`
- `net.minecraft.client.network.SequencedPacketCreator`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action`
- `net.minecraft.util.Hand`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.hit.HitResult`
- `net.minecraft.util.hit.HitResult$Type`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Direction`
- `net.minecraft.util.math.Position`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.util.math.Vec3i`
- `net.minecraft.world.RaycastContext`
- `net.minecraft.world.RaycastContext$FluidHandling`
- `net.minecraft.world.RaycastContext$ShapeType`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Iterator`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.block.Block`
- `net.minecraft.block.BlockState`
- `net.minecraft.block.CropBlock`
- `net.minecraft.client.network.SequencedPacketCreator`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket`
- `net.minecraft.util.Hand`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.hit.HitResult`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Direction`
- `net.minecraft.util.math.Position`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.util.math.Vec3i`
- `net.minecraft.world.RaycastContext`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.client.network.SequencedPacketCreator`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket`
- `net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket$Action`

## Port notes (dev.opengrim)

- Implement "Nuker" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dI.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
