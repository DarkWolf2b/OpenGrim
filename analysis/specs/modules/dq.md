# Storage ESP (sixtwo.dq)

- Registry: `sixtwo.dq|Storage ESP|Draws box around storage blocks|key=81|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dq.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 81, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~13 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Draws box around storage blocks

## Setting names (decrypted)

- `Barrel Fill Color` → **Barrel Fill Color**
- `Barrel Outline Color` → **Barrel Outline Color**
- `Block Entities` → **Block Entities**
- `Brewing Stand Fill Color` → **Brewing Stand Fill Color**
- `Brewing Stand Outline Color` → **Brewing Stand Outline Color**
- `Chest Fill Color` → **Chest Fill Color**
- `Chest Outline Color` → **Chest Outline Color**
- `Ender Chest Fill Color` → **Ender Chest Fill Color**
- `Ender Chest Outline Color` → **Ender Chest Outline Color**
- `Filled` → **Filled**
- `Furnace Fill Color` → **Furnace Fill Color**
- `Furnace Outline Color` → **Furnace Outline Color**
- `Hopper Fill Color` → **Hopper Fill Color**
- `Hopper Outline Color` → **Hopper Outline Color**
- `Shulker Fill Color` → **Shulker Fill Color**
- `Shulker Outline Color` → **Shulker Outline Color**
- `Spawner Fill Color` → **Spawner Fill Color**
- `Spawner Outline Color` → **Spawner Outline Color**
- `Tracers` → **Tracers**
- `Tracers Width` → **Tracers Width**
- `Trapped Chest Fill Color` → **Trapped Chest Fill Color**
- `Trapped Chest Outline Color` → **Trapped Chest Outline Color**

## Structural findings

### Settings (2 constructed — STALE: corrected 2026-10-17, batch 30: the class builds 22 settings)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.rlmtC | cJ | `this, mr.clS(nArray2) /* "Filled" */` → .WE(false) | 144 | see 00-framework.md [inferred] |
| this.wzGtS | cJ | `this, mr.clS(nArray3) /* "Tracers" */` → .WE(false) | 153 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods — STALE: corrected 2026-10-17, batch 30: two (`ahQ` dq.java:945, `ahP` dq.java:1078))

None declared in this class.

### Minecraft API surface (7 refs)

- `net.minecraft.block.entity.BlockEntity`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`
- `net.minecraft.util.Util`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.chunk.WorldChunk`

### Other imports of interest

- `com.mojang.datafixers.util.Pair`
- `java.security.Key`
- `java.util.ArrayList`
- `java.util.Collection`
- `java.util.HashMap`
- `java.util.Iterator`
- `java.util.LinkedHashMap`
- `java.util.List`
- `java.util.Map`
- `java.util.concurrent.CompletableFuture`
- `java.util.concurrent.Executor`
- `java.util.concurrent.ExecutorService`
- `java.util.concurrent.Executors`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.block.entity.BlockEntity`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`
- `net.minecraft.util.Util`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.chunk.WorldChunk`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Storage ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dq.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
