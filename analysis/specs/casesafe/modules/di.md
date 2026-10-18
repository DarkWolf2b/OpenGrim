# 2D ESP (sixtwo.di)

- Registry: `sixtwo.di|2D ESP|Allows you to see targets through walls|key=158|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/di.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 158, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~19 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows you to see targets through walls

## Setting names (decrypted)

- `ESP Profiles` Ôćĺ **ESP Profiles**
- `Edit ESP` Ôćĺ **Edit ESP**

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (18 refs)

- `net.minecraft.client.model.ModelPart`
- `net.minecraft.client.model.ModelPart$Cuboid`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.render.entity.PlayerEntityRenderer`
- `net.minecraft.client.render.entity.model.EntityModelLayers`
- `net.minecraft.client.render.entity.model.PlayerEntityModel`
- `net.minecraft.client.render.entity.state.PlayerEntityRenderState`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.PlayerLikeEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.entity.player.PlayerSkinType`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.MathHelper`
- `net.minecraft.util.math.RotationAxis`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.model.ModelPart`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.render.entity.PlayerEntityRenderer`
- `net.minecraft.client.render.entity.model.EntityModelLayers`
- `net.minecraft.client.render.entity.model.PlayerEntityModel`
- `net.minecraft.client.render.entity.state.PlayerEntityRenderState`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.PlayerLikeEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.entity.player.PlayerSkinType`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.MathHelper`
- `net.minecraft.util.math.RotationAxis`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`
- `org.joml.Matrix4f`
- `org.joml.Quaternionfc`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "2D ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id di.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
