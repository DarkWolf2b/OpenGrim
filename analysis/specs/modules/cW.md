# Trap ESP (sixtwo.cW)

- Registry: `sixtwo.cW|Trap ESP|Detects potential trap locations|key=140|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cW.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 140, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~15 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Detects potential trap locations

## Setting names (decrypted)

- `Armor Stands` → **Armor Stands**
- `Banners` → **Banners**
- `Buttons` → **Buttons**
- `Cluster Radius` → **Cluster Radius**
- `Decoration Pots` → **Decoration Pots**
- `Falling Blocks` → **Falling Blocks**
- `Levers` → **Levers**
- `Minecarts` → **Minecarts**
- `Minimal Count` → **Minimal Count**
- `Paintings` → **Paintings**
- `Scan For` → **Scan For**

## Structural findings

### Settings (10 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.SEHkS | cv | `this, mr.clS(nArray) /* "Scan For" */`  | 126 | see 00-framework.md [inferred] |
| this.PEUjg | cw | `this.SEHkS, mr.clS(nArray2) /* "Painting…` → .Tz() | 137 | see 00-framework.md [inferred] |
| this.eomCv | cw | `this.SEHkS, mr.clS(new int[]{(int)83, (i…` → .Tz() | 138 | see 00-framework.md [inferred] |
| this.IcGgS | cw | `this.SEHkS, mr.clS(nArray3) /* "Buttons"…`  | 147 | see 00-framework.md [inferred] |
| this.WtLkJ | cw | `this.SEHkS, mr.clS(nArray4) /* "Levers" …`  | 155 | see 00-framework.md [inferred] |
| this.YRSFN | cw | `this.SEHkS, mr.clS(nArray5) /* "Banners"…` → .Tz() | 164 | see 00-framework.md [inferred] |
| this.dVboG | cw | `this.SEHkS, mr.clS(nArray6) /* "Armor St…` → .Tz() | 178 | see 00-framework.md [inferred] |
| this.sZCWO | cw | `this.SEHkS, mr.clS(nArray7) /* "Minecart…` → .Tz() | 189 | see 00-framework.md [inferred] |
| this.XQhcG | cw | `this.SEHkS, mr.clS(nArray8) /* "Falling …` → .Tz() | 205 | see 00-framework.md [inferred] |
| this.TkcsS | cw | `this.SEHkS, mr.clS(nArray9) /* "Decorati…`  | 222 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (14 refs)

- `net.minecraft.block.AbstractBannerBlock`
- `net.minecraft.block.AbstractSignBlock`
- `net.minecraft.block.Block`
- `net.minecraft.block.BlockState`
- `net.minecraft.block.ButtonBlock`
- `net.minecraft.block.DecoratedPotBlock`
- `net.minecraft.block.LeverBlock`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.FallingBlockEntity`
- `net.minecraft.entity.decoration.AbstractDecorationEntity`
- `net.minecraft.entity.decoration.ArmorStandEntity`
- `net.minecraft.entity.vehicle.AbstractMinecartEntity`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.Comparator`
- `java.util.HashMap`
- `java.util.HashSet`
- `java.util.Iterator`
- `java.util.List`
- `java.util.Map`
- `java.util.function.Predicate`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.block.AbstractBannerBlock`
- `net.minecraft.block.AbstractSignBlock`
- `net.minecraft.block.Block`
- `net.minecraft.block.BlockState`
- `net.minecraft.block.ButtonBlock`
- `net.minecraft.block.DecoratedPotBlock`
- `net.minecraft.block.LeverBlock`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.FallingBlockEntity`
- `net.minecraft.entity.decoration.AbstractDecorationEntity`
- `net.minecraft.entity.decoration.ArmorStandEntity`
- `net.minecraft.entity.vehicle.AbstractMinecartEntity`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Trap ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cW.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
