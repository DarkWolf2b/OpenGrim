# Glow (sixtwo.dy)

- Registry: `sixtwo.dy|Glow|Adds glowing effect to entities|key=86|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dy.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 86, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~6 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Adds glowing effect to entities

## Setting names (decrypted)

- `Entities` → **Entities**
- `Self Glow` → **Self Glow**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.fCwUr | cF | `this, mr.clS(nArray) /* "Entities" */` → .VS(jg$tJ.OCdZM) | 57 | see 00-framework.md [inferred] |
| this.wHVjK | cJ | `this, mr.clS(nArray2) /* "Self Glow" */` → .WE(false) | 68 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.entity.Entity`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.entity.Entity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Glow" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dy.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
