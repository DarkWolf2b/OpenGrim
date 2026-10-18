# Pop Chams (sixtwo.cT)

- Registry: `sixtwo.cT|Pop Chams|Highlights player totem pops|key=129|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cT.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 129, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~14 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Highlights player totem pops

## Setting names (decrypted)

- `Fly Speed` → **Fly Speed**
- `Simple` → **Simple**
- `Textured` → **Textured**
- `Time To Disappear` → **Time To Disappear**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.IOXoW | ct | `this, mr.clS(new int[]{(int)77, (int)111…`  | 120 | see 00-framework.md [inferred] |
| this.tjQAr | cu | `this.IOXoW, mr.clS(nArray) /* "Simple" *…`  | 128 | see 00-framework.md [inferred] |
| this.SSPDb | cu | `this.IOXoW, mr.clS(nArray2) /* "Textured…`  | 138 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (22 refs)

- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.network.OtherClientPlayerEntity`
- `net.minecraft.client.render.BufferBuilder`
- `net.minecraft.client.render.BuiltBuffer`
- `net.minecraft.client.render.VertexConsumer`
- `net.minecraft.client.render.VertexFormats`
- `net.minecraft.client.render.entity.LivingEntityRenderer`
- `net.minecraft.client.render.entity.model.PlayerEntityModel`
- `net.minecraft.client.render.entity.state.LivingEntityRenderState`
- `net.minecraft.client.render.entity.state.PlayerEntityRenderState`
- `net.minecraft.client.texture.AbstractTexture`
- `net.minecraft.client.util.BufferAllocator`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.PlayerLikeEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.util.Identifier`
- `net.minecraft.util.math.MathHelper`
- `net.minecraft.util.math.RotationAxis`
- `net.minecraft.world.World`

### Other imports of interest

- `com.mojang.authlib.GameProfile`
- `com.mojang.blaze3d.systems.RenderPass`
- `com.mojang.blaze3d.vertex.VertexFormat`
- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `java.util.concurrent.CopyOnWriteArrayList`
- `java.util.function.Consumer`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `mixin.accessors.WalkAnimationStateAccessor`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.network.OtherClientPlayerEntity`
- `net.minecraft.client.render.BufferBuilder`
- `net.minecraft.client.render.BuiltBuffer`
- `net.minecraft.client.render.VertexConsumer`
- `net.minecraft.client.render.VertexFormats`
- `net.minecraft.client.render.entity.LivingEntityRenderer`
- `net.minecraft.client.render.entity.model.PlayerEntityModel`
- `net.minecraft.client.render.entity.state.LivingEntityRenderState`
- `net.minecraft.client.render.entity.state.PlayerEntityRenderState`
- `net.minecraft.client.texture.AbstractTexture`
- `net.minecraft.client.util.BufferAllocator`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.PlayerLikeEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.util.Identifier`
- `net.minecraft.util.math.MathHelper`
- `net.minecraft.util.math.RotationAxis`
- `net.minecraft.world.World`
- `org.joml.Quaternionfc`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`

## Port notes (dev.opengrim)

- Implement "Pop Chams" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cT.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
