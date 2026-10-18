# Pearl Prediction (sixtwo.dg)

- Registry: `sixtwo.dg|Pearl Prediction|Renders thrown pearl trajectory|key=93|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dg.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 93, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~10 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders thrown pearl trajectory

## Setting names (decrypted)

- `Show Time Left` → **Show Time Left**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.VOBNu | cJ | `this, mr.clS(nArray) /* "Show Time Left"…` → .WE(false) | 82 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.entity.Entity`
- `net.minecraft.entity.projectile.thrown.EnderPearlEntity`
- `net.minecraft.entity.projectile.thrown.ThrownItemEntity`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.HashSet`
- `java.util.List`
- `java.util.Map`
- `java.util.function.Predicate`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.projectile.thrown.EnderPearlEntity`
- `net.minecraft.entity.projectile.thrown.ThrownItemEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Pearl Prediction" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dg.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
