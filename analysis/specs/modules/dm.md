# Friend Indicator (sixtwo.dm)

- Registry: `sixtwo.dm|Friend Indicator|Visually marks friends|key=137|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dm.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 137, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~7 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Visually marks friends

## Setting names (decrypted)

- `Height` → **Height**

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Friend Indicator" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dm.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
