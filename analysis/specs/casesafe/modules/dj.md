# Hole ESP (sixtwo.dj)

- Registry: `sixtwo.dj|Hole ESP|Highlights safe holes|key=147|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dj.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 147, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~25 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Highlights safe holes

## Setting names (decrypted)

- `Bedrock Color` Ôćĺ **Bedrock Color**
- `Double` Ôćĺ **Double**
- `Ignore Self` Ôćĺ **Ignore Self**
- `Obsidian` Ôćĺ **Obsidian**
- `Obsidian Color` Ôćĺ **Obsidian Color**
- `Obsidian-Bedrock` Ôćĺ **Obsidian-Bedrock**
- `Obsidian-Bedrock Color` Ôćĺ **Obsidian-Bedrock Color**
- `Outline` Ôćĺ **Outline**
- `Range Y` Ôćĺ **Range Y**
- `Void Color` Ôćĺ **Void Color**

## Structural findings

### Settings (10 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.jybpu | ct | `this, mr.clS(new int[]{(int)77, (int)111ÔÇŽ` Ôćĺ .SO(0) | 125 | see 00-framework.md [inferred] |
| this.lvORN | cu | `this.jybpu, mr.clS(new int[]{(int)66, (iÔÇŽ`  | 126 | see 00-framework.md [inferred] |
| this.qEqID | cu | `this.jybpu, mr.clS(new int[]{(int)70, (iÔÇŽ`  | 127 | see 00-framework.md [inferred] |
| this.ZnfqN | cJ | `this, mr.clS(nArray2) /* "Outline" */` Ôćĺ .WE(true) | 146 | see 00-framework.md [inferred] |
| this.ObAdu | cJ | `this, mr.clS(nArray3) /* "Ignore Self" *ÔÇŽ` Ôćĺ .WE(false) | 160 | see 00-framework.md [inferred] |
| this.AMAdS | cJ | `this, mr.clS(nArray4) /* "Obsidian" */` Ôćĺ .WE(true) | 170 | see 00-framework.md [inferred] |
| this.vupnD | cJ | `this, mr.clS(nArray5) /* "Obsidian-BedroÔÇŽ` Ôćĺ .WE(true) | 188 | see 00-framework.md [inferred] |
| this.NUWIx | cJ | `this, mr.clS(nArray6) /* "Double" */` Ôćĺ .WE(false) | 196 | see 00-framework.md [inferred] |
| this.iKDmr | cJ | `this, mr.clS(new int[]{(int)81, (int)117ÔÇŽ` Ôćĺ .WE(false) | 197 | see 00-framework.md [inferred] |
| this.oBPYh | cJ | `this, mr.clS(new int[]{(int)86, (int)111ÔÇŽ` Ôćĺ .WE(false) | 198 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (14 refs)

- `net.minecraft.block.BlockState`
- `net.minecraft.block.Blocks`
- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.client.render.BufferBuilder`
- `net.minecraft.client.render.BuiltBuffer`
- `net.minecraft.client.render.VertexFormats`
- `net.minecraft.client.util.BufferAllocator`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Direction`
- `net.minecraft.util.math.Direction$Type`
- `net.minecraft.util.math.MathHelper`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `com.mojang.blaze3d.vertex.VertexFormat`
- `java.security.Key`
- `java.util.ArrayList`
- `java.util.Comparator`
- `java.util.HashMap`
- `java.util.HashSet`
- `java.util.Iterator`
- `java.util.List`
- `java.util.Map`
- `java.util.function.ToIntFunction`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.block.BlockState`
- `net.minecraft.block.Blocks`
- `net.minecraft.client.network.ClientPlayerEntity`
- `net.minecraft.client.render.BufferBuilder`
- `net.minecraft.client.render.BuiltBuffer`
- `net.minecraft.client.render.VertexFormats`
- `net.minecraft.client.util.BufferAllocator`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Direction`
- `net.minecraft.util.math.MathHelper`
- `net.minecraft.util.math.Vec3d`
- `org.joml.Matrix4f`
- `org.joml.Matrix4fc`

### Keybind usage

1 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Hole ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dj.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
