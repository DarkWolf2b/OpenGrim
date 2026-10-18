# Trajectories (sixtwo.cP)

- Registry: `sixtwo.cP|Trajectories|Renders trajectories of items|key=87|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cP.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 87, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~15 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders trajectories of items

## Setting names (decrypted)

- `Box Fill Color` → **Box Fill Color**
- `Box Outline Color` → **Box Outline Color**
- `Filled Box` → **Filled Box**
- `Line Color` → **Line Color**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.ZVcly | cJ | `this, mr.clS(nArray4) /* "Filled Box" */` → .WE(true) | 154 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (21 refs)

- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.enchantment.Enchantment`
- `net.minecraft.enchantment.Enchantments`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.projectile.ArrowEntity`
- `net.minecraft.item.BowItem`
- `net.minecraft.item.CrossbowItem`
- `net.minecraft.item.EggItem`
- `net.minecraft.item.EnderPearlItem`
- `net.minecraft.item.ExperienceBottleItem`
- `net.minecraft.item.Item`
- `net.minecraft.item.LingeringPotionItem`
- `net.minecraft.item.SnowballItem`
- `net.minecraft.item.SplashPotionItem`
- `net.minecraft.item.TridentItem`
- `net.minecraft.registry.RegistryKey`
- `net.minecraft.util.Hand`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.MathHelper`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.World`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.enchantment.Enchantment`
- `net.minecraft.enchantment.Enchantments`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.projectile.ArrowEntity`
- `net.minecraft.item.BowItem`
- `net.minecraft.item.CrossbowItem`
- `net.minecraft.item.EggItem`
- `net.minecraft.item.EnderPearlItem`
- `net.minecraft.item.ExperienceBottleItem`
- `net.minecraft.item.Item`
- `net.minecraft.item.LingeringPotionItem`
- `net.minecraft.item.SnowballItem`
- `net.minecraft.item.SplashPotionItem`
- `net.minecraft.item.TridentItem`
- `net.minecraft.registry.RegistryKey`
- `net.minecraft.util.Hand`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.MathHelper`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.World`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Trajectories" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cP.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
