# Auto Market (sixtwo.dM)

- Registry: `sixtwo.dM|Auto Market|Automatically buys and sells items on market|key=26|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dM.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 26, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~50 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically buys and sells items on market

## Setting names (decrypted)

- `Add Rule Key` Ôćĺ **Add Rule Key**
- `Edit Market` Ôćĺ **Edit Market**
- `State Key` Ôćĺ **State Key**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.pdLuI | cD | `this, mr.clS(nArray) /* "State Key" */` Ôćĺ .VO((int)-999) | 135 | see 00-framework.md [inferred] |
| this.kUpne | cD | `this, mr.clS(nArray2) /* "Add Rule Key" ÔÇŽ` Ôćĺ .VO(mA.OGQHF.cmO()) | 149 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (10 refs)

- `net.minecraft.client.MinecraftClient`
- `net.minecraft.client.gui.screen.Screen`
- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.component.DataComponentTypes`
- `net.minecraft.enchantment.Enchantment`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.registry.RegistryKey`
- `net.minecraft.registry.entry.RegistryEntry`
- `net.minecraft.screen.slot.Slot`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Iterator`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `mixin.accessors.AbstractContainerScreenAccessor`
- `net.minecraft.client.MinecraftClient`
- `net.minecraft.client.gui.screen.Screen`
- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.component.DataComponentTypes`
- `net.minecraft.enchantment.Enchantment`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.registry.RegistryKey`
- `net.minecraft.registry.entry.RegistryEntry`
- `net.minecraft.screen.slot.Slot`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Market" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dM.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
