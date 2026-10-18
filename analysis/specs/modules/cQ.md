# Swing Animations (sixtwo.cQ)

- Registry: `sixtwo.cQ|Swing Animations|Changes look of swing animation|key=94|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cQ.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 94, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~10 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Changes look of swing animation

## Setting names (decrypted)

- `Edit Animation` → **Edit Animation**

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (8 refs)

- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`
- `net.minecraft.item.consume.UseAction`
- `net.minecraft.util.Arm`
- `net.minecraft.util.Hand`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `mixin.accessors.ItemInHandRendererAccessor`
- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`
- `net.minecraft.item.consume.UseAction`
- `net.minecraft.util.Arm`
- `net.minecraft.util.Hand`
- `org.joml.Quaternionf`
- `org.joml.Quaternionfc`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Swing Animations" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cQ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
