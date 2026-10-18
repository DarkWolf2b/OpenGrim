# Arrows (sixtwo.do)

- Registry: `sixtwo.do|Arrows|Draws arrows to entities|key=88|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/do.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 88, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~11 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Draws arrows to entities

## Setting names (decrypted)

- `Entities` Ôćĺ **Entities**
- `Friend Color` Ôćĺ **Friend Color**
- `Radius` Ôćĺ **Radius**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.LHfSj | cF | `this, mr.clS(nArray) /* "Entities" */` Ôćĺ .VS(jg$tJ.OCdZM) | 95 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (6 refs)

- `net.minecraft.client.gui.screen.Screen`
- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
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
- `net.minecraft.client.gui.screen.Screen`
- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Vec2f`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

1 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Arrows" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id do.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
