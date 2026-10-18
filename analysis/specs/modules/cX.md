# Fake Player (sixtwo.cX)

- Registry: `sixtwo.cX|Fake Player|Spawns fake player|key=72|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cX.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 72, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~28 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Spawns fake player

## Setting names (decrypted)

- `Copy Inventory` → **Copy Inventory**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.TadoM | cJ | `this, mr.clS(nArray) /* "Copy Inventory"…` → .WE(false) | 117 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (17 refs)

- `net.minecraft.client.MinecraftClient`
- `net.minecraft.client.network.OtherClientPlayerEntity`
- `net.minecraft.client.world.ClientWorld`
- `net.minecraft.component.DataComponentTypes`
- `net.minecraft.component.type.WeaponComponent`
- `net.minecraft.enchantment.Enchantment`
- `net.minecraft.enchantment.Enchantments`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.Entity$RemovalReason`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.effect.StatusEffectInstance`
- `net.minecraft.entity.effect.StatusEffects`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`
- `net.minecraft.registry.RegistryKey`
- `net.minecraft.util.Hand`

### Other imports of interest

- `com.mojang.authlib.GameProfile`
- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `java.util.UUID`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `mixin.accessors.LivingEntityAccessor`
- `net.minecraft.client.MinecraftClient`
- `net.minecraft.client.network.OtherClientPlayerEntity`
- `net.minecraft.client.world.ClientWorld`
- `net.minecraft.component.DataComponentTypes`
- `net.minecraft.component.type.WeaponComponent`
- `net.minecraft.enchantment.Enchantment`
- `net.minecraft.enchantment.Enchantments`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.effect.StatusEffectInstance`
- `net.minecraft.entity.effect.StatusEffects`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`
- `net.minecraft.registry.RegistryKey`
- `net.minecraft.util.Hand`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Fake Player" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cX.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
