# Logout Spots (sixtwo.dp)

- Registry: `sixtwo.dp|Logout Spots|Renders boxes at where player logged out|key=99|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dp.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 99, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~17 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders boxes at where player logged out

## Setting names (decrypted)

- `Background` Ôćĺ **Background**
- `Clear Spots` Ôćĺ **Clear Spots**
- `Height` Ôćĺ **Height**
- `Login Notification` Ôćĺ **Login Notification**
- `Position Color` Ôćĺ **Position Color**
- `Position Render Mode` Ôćĺ **Position Render Mode**
- `Refresh Timer` Ôćĺ **Refresh Timer**
- `Simple` Ôćĺ **Simple**
- `Textured` Ôćĺ **Textured**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.WYPZN | cJ | `this, mr.clS(nArray2) /* "Login NotificaÔÇŽ` Ôćĺ .WE(false) | 147 | see 00-framework.md [inferred] |
| this.VLWfc | ct | `this, mr.clS(nArray3) /* "Position RendeÔÇŽ`  | 169 | see 00-framework.md [inferred] |
| this.SNclR | cu | `this.VLWfc, mr.clS(nArray4) /* "Simple" ÔÇŽ`  | 177 | see 00-framework.md [inferred] |
| this.wjLCc | cu | `this.VLWfc, mr.clS(nArray5) /* "TexturedÔÇŽ`  | 187 | see 00-framework.md [inferred] |
| this.kUvkk | cJ | `this, mr.clS(nArray8) /* "Background" */` Ôćĺ .WE(false) | 223 | see 00-framework.md [inferred] |
| this.yDgej | cD | `this, mr.clS(nArray9) /* "Clear Spots" *ÔÇŽ` Ôćĺ .VO((int)-999) | 236 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (8 refs)

- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.network.ClientPlayNetworkHandler`
- `net.minecraft.client.network.PlayerListEntry`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.Collection`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `java.util.Set`
- `java.util.UUID`
- `java.util.stream.Collectors`
- `java.util.stream.StreamSupport`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.network.ClientPlayNetworkHandler`
- `net.minecraft.client.network.PlayerListEntry`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Logout Spots" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dp.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
