# Nametags (sixtwo.dt)

- Registry: `sixtwo.dt|Nametags|Displays information about player|key=97|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dt.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 97, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~18 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Displays information about player

## Setting names (decrypted)

- `Absorption` → **Absorption**
- `Absorption Color` → **Absorption Color**
- `Background Color` → **Background Color**
- `Connected` → **Connected**
- `Display Name` → **Display Name**
- `Distance` → **Distance**
- `Distance Color` → **Distance Color**
- `Effects` → **Effects**
- `Enchants` → **Enchants**
- `Friend Name Color` → **Friend Name Color**
- `Group Items` → **Group Items**
- `Hand Items` → **Hand Items**
- `Health` → **Health**
- `Health Color` → **Health Color**
- `Info To Render` → **Info To Render**
- `Name Color` → **Name Color**
- `Name Display Mode` → **Name Display Mode**
- `Nickname Only` → **Nickname Only**
- `Ping Color` → **Ping Color**
- `Players` → **Players**
- `Render For` → **Render For**

## Structural findings

### Settings (18 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.bpDue | cv | `this, mr.clS(nArray) /* "Render For" */`  | 151 | see 00-framework.md [inferred] |
| this.jtzDi | cw | `this.bpDue, mr.clS(nArray2) /* "Players"…` → .Tz() | 160 | see 00-framework.md [inferred] |
| this.VPgLm | cw | `this.bpDue, mr.clS(new int[]{(int)73, (i…`  | 161 | see 00-framework.md [inferred] |
| this.vjqkH | cv | `this, mr.clS(nArray3) /* "Info To Render…`  | 177 | see 00-framework.md [inferred] |
| this.vExdX | cw | `this.vjqkH, mr.clS(new int[]{(int)78, (i…` → .Tz() | 178 | see 00-framework.md [inferred] |
| this.zHaUb | cw | `this.vjqkH, mr.clS(nArray4) /* "Health" …` → .Tz() | 186 | see 00-framework.md [inferred] |
| this.gxggV | cw | `this.vjqkH, mr.clS(nArray5) /* "Absorpti…` → .Tz() | 198 | see 00-framework.md [inferred] |
| this.AbmMN | cw | `this.vjqkH, mr.clS(nArray6) /* "Distance…` → .Tz() | 208 | see 00-framework.md [inferred] |
| this.yhuFt | cw | `this.vjqkH, mr.clS(new int[]{(int)80, (i…`  | 209 | see 00-framework.md [inferred] |
| this.JKWzw | cw | `this.vjqkH, mr.clS(new int[]{(int)65, (i…`  | 210 | see 00-framework.md [inferred] |
| this.ZhrcH | cw | `this.vjqkH, mr.clS(nArray7) /* "Hand Ite…`  | 222 | see 00-framework.md [inferred] |
| this.bhXKP | cw | `this.vjqkH, mr.clS(nArray8) /* "Enchants…`  | 232 | see 00-framework.md [inferred] |
| this.VrMbh | cw | `this.vjqkH, mr.clS(nArray9) /* "Effects"…`  | 241 | see 00-framework.md [inferred] |
| this.uuLKb | cJ | `this, mr.clS(nArray10) /* "Connected" */` → .WE(false) | 253 | see 00-framework.md [inferred] |
| this.bcjCz | ct | `this, mr.clS(nArray13) /* "Name Display …` → .SO(1) | 303 | see 00-framework.md [inferred] |
| this.OHUtJ | cu | `this.bcjCz, mr.clS(nArray14) /* "Display…`  | 317 | see 00-framework.md [inferred] |
| this.bgoRN | cu | `this.bcjCz, mr.clS(nArray15) /* "Nicknam…`  | 332 | see 00-framework.md [inferred] |
| this.KjFun | cJ | `this, mr.clS(nArray21) /* "Group Items" …` → .WE(true) | 424 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (15 refs)

- `net.minecraft.client.gl.RenderPipelines`
- `net.minecraft.client.gui.hud.InGameHud`
- `net.minecraft.component.type.ItemEnchantmentsComponent`
- `net.minecraft.enchantment.Enchantment`
- `net.minecraft.enchantment.EnchantmentHelper`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.ItemEntity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.effect.StatusEffectInstance`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.registry.entry.RegistryEntry`
- `net.minecraft.util.Identifier`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.Comparator`
- `java.util.HashMap`
- `java.util.Iterator`
- `java.util.List`
- `java.util.Map`
- `java.util.Optional`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.gl.RenderPipelines`
- `net.minecraft.client.gui.hud.InGameHud`
- `net.minecraft.component.type.ItemEnchantmentsComponent`
- `net.minecraft.enchantment.Enchantment`
- `net.minecraft.enchantment.EnchantmentHelper`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.ItemEntity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.effect.StatusEffectInstance`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.registry.entry.RegistryEntry`
- `net.minecraft.util.Identifier`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`
- `org.joml.Vector4d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Nametags" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dt.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
