# Soul Effects (sixtwo.cZ)

- Registry: `sixtwo.cZ|Soul Effects|Spawns souls after killing an entity|key=162|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cZ.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 162, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~22 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Spawns souls after killing an entity

## Setting names (decrypted)

- `Behind Walls` → **Behind Walls**
- `Dispersion` → **Dispersion**
- `Duration` → **Duration**
- `Glow Radius` → **Glow Radius**
- `Particle Count` → **Particle Count**
- `Primary` → **Primary**
- `Radius` → **Radius**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.pxIjY | cJ | `this, mr.clS(nArray2) /* "Behind Walls" …`  | 148 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (19 refs)

- `net.minecraft.client.gl.Framebuffer`
- `net.minecraft.client.model.ModelPart`
- `net.minecraft.client.render.BufferBuilder`
- `net.minecraft.client.render.VertexFormats`
- `net.minecraft.client.render.entity.EntityRenderer`
- `net.minecraft.client.render.entity.LivingEntityRenderer`
- `net.minecraft.client.render.entity.model.EntityModel`
- `net.minecraft.client.util.BufferAllocator`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.Entity$RemovalReason`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.data.DataTracker`
- `net.minecraft.entity.data.DataTracker$SerializedEntry`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.network.packet.s2c.play.EntityTrackerUpdateS2CPacket`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.World`

### Other imports of interest

- `com.mojang.blaze3d.systems.RenderPass`
- `com.mojang.blaze3d.vertex.VertexFormat`
- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `java.util.Set`
- `java.util.UUID`
- `java.util.concurrent.ConcurrentHashMap`
- `java.util.concurrent.CopyOnWriteArrayList`
- `java.util.function.Consumer`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `mixin.accessors.LivingEntityAccessor`
- `mixin.accessors.ModelPartAccessor`
- `net.minecraft.client.gl.Framebuffer`
- `net.minecraft.client.model.ModelPart`
- `net.minecraft.client.render.BufferBuilder`
- `net.minecraft.client.render.VertexFormats`
- `net.minecraft.client.render.entity.EntityRenderer`
- `net.minecraft.client.render.entity.LivingEntityRenderer`
- `net.minecraft.client.render.entity.model.EntityModel`
- `net.minecraft.client.util.BufferAllocator`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.data.DataTracker`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.network.packet.s2c.play.EntityTrackerUpdateS2CPacket`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.World`
- `org.joml.Matrix4f`
- `org.joml.Matrix4fc`
- `org.joml.Vector3f`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.network.packet.s2c.play.EntityTrackerUpdateS2CPacket`

## Port notes (dev.opengrim)

- Implement "Soul Effects" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cZ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
