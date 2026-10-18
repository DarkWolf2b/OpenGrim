# Anti Trap (sixtwo.dG)

- Registry: `sixtwo.dG|Anti Trap|Cancels rendering of specific entities|key=61|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dG.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 61, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~15 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Cancels rendering of specific entities

## Setting names (decrypted)

- `Armor Stands` Ôćĺ **Armor Stands**
- `Banners` Ôćĺ **Banners**
- `Buttons` Ôćĺ **Buttons**
- `Decoration Pots` Ôćĺ **Decoration Pots**
- `Falling Blocks` Ôćĺ **Falling Blocks**
- `Levers` Ôćĺ **Levers**
- `Minecarts` Ôćĺ **Minecarts**
- `Paintings` Ôćĺ **Paintings**

## Structural findings

### Settings (10 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.gMmLp | cv | `this, mr.clS(new int[]{(int)72, (int)105ÔÇŽ`  | 96 | see 00-framework.md [inferred] |
| this.DsCRe | cw | `this.gMmLp, mr.clS(nArray) /* "PaintingsÔÇŽ` Ôćĺ .Tz() | 107 | see 00-framework.md [inferred] |
| this.gpExe | cw | `this.gMmLp, mr.clS(new int[]{(int)83, (iÔÇŽ` Ôćĺ .Tz() | 108 | see 00-framework.md [inferred] |
| this.ZJUtT | cw | `this.gMmLp, mr.clS(nArray2) /* "Buttons"ÔÇŽ`  | 117 | see 00-framework.md [inferred] |
| this.tXJgP | cw | `this.gMmLp, mr.clS(nArray3) /* "Levers" ÔÇŽ`  | 125 | see 00-framework.md [inferred] |
| this.IJUZj | cw | `this.gMmLp, mr.clS(nArray4) /* "Banners"ÔÇŽ` Ôćĺ .Tz() | 134 | see 00-framework.md [inferred] |
| this.WygqV | cw | `this.gMmLp, mr.clS(nArray5) /* "Armor StÔÇŽ` Ôćĺ .Tz() | 148 | see 00-framework.md [inferred] |
| this.lejDU | cw | `this.gMmLp, mr.clS(nArray6) /* "MinecartÔÇŽ` Ôćĺ .Tz() | 159 | see 00-framework.md [inferred] |
| this.LGsCc | cw | `this.gMmLp, mr.clS(nArray7) /* "Falling ÔÇŽ` Ôćĺ .Tz() | 175 | see 00-framework.md [inferred] |
| this.TNPUn | cw | `this.gMmLp, mr.clS(nArray8) /* "DecoratiÔÇŽ`  | 192 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (16 refs)

- `net.minecraft.block.AbstractBannerBlock`
- `net.minecraft.block.AbstractSignBlock`
- `net.minecraft.block.Block`
- `net.minecraft.block.BlockState`
- `net.minecraft.block.ButtonBlock`
- `net.minecraft.block.DecoratedPotBlock`
- `net.minecraft.block.LeverBlock`
- `net.minecraft.block.entity.BannerBlockEntity`
- `net.minecraft.block.entity.BlockEntity`
- `net.minecraft.block.entity.SignBlockEntity`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.FallingBlockEntity`
- `net.minecraft.entity.decoration.AbstractDecorationEntity`
- `net.minecraft.entity.decoration.ArmorStandEntity`
- `net.minecraft.entity.vehicle.AbstractMinecartEntity`
- `net.minecraft.util.shape.VoxelShapes`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
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
- `net.minecraft.block.entity.BannerBlockEntity`
- `net.minecraft.block.entity.BlockEntity`
- `net.minecraft.block.entity.SignBlockEntity`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.FallingBlockEntity`
- `net.minecraft.entity.decoration.AbstractDecorationEntity`
- `net.minecraft.entity.decoration.ArmorStandEntity`
- `net.minecraft.entity.vehicle.AbstractMinecartEntity`
- `net.minecraft.util.shape.VoxelShapes`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Anti Trap" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dG.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
