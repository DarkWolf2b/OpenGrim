# Anti Web (sixtwo.et)

- Registry: `sixtwo.et|Anti Web|Allows to move faster in webs|key=42|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/et.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 42, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~13 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to move faster in webs

## Setting names (decrypted)

- `Flight` → **Flight**
- `Horizontal Speed` → **Horizontal Speed**
- `Vanilla` → **Vanilla**
- `Vertical Speed` → **Vertical Speed**

## Structural findings

### Settings (4 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.qHibw | ct | `this, mr.clS(new int[]{(int)77, (int)111…`  | 66 | see 00-framework.md [inferred] |
| this.ISwMH | cu | `this.qHibw, mr.clS(nArray) /* "Vanilla" …`  | 75 | see 00-framework.md [inferred] |
| this.qAyzC | cu | `this.qHibw, mr.clS(nArray2) /* "Flight" …` → .SY() | 83 | see 00-framework.md [inferred] |
| this.UayhT | cu | `this.qHibw, mr.clS(new int[]{(int)83, (i…`  | 84 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (6 refs)

- `net.minecraft.block.BlockState`
- `net.minecraft.block.Blocks`
- `net.minecraft.block.CobwebBlock`
- `net.minecraft.client.MinecraftClient`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.util.math.Vec2f`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.block.BlockState`
- `net.minecraft.block.Blocks`
- `net.minecraft.block.CobwebBlock`
- `net.minecraft.client.MinecraftClient`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.util.math.Vec2f`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Anti Web" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id et.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
