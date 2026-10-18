# Skeleton ESP (sixtwo.cV)

- Registry: `sixtwo.cV|Skeleton ESP|Renders skeleton on player models|key=126|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cV.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 126, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~10 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders skeleton on player models

## Setting names (decrypted)

- `Line Width` → **Line Width**

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (5 refs)

- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.render.BufferBuilder`
- `net.minecraft.client.render.VertexFormats`
- `net.minecraft.client.util.BufferAllocator`
- `net.minecraft.entity.Entity`

### Other imports of interest

- `com.mojang.blaze3d.systems.RenderPass`
- `com.mojang.blaze3d.vertex.VertexFormat`
- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `java.util.function.Consumer`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.render.BufferBuilder`
- `net.minecraft.client.render.VertexFormats`
- `net.minecraft.client.util.BufferAllocator`
- `net.minecraft.entity.Entity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Skeleton ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cV.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
