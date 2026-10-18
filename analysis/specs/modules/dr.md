# Health Indicators (sixtwo.dr)

- Registry: `sixtwo.dr|Health Indicators|Displays other players health above their head|key=91|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dr.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 91, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~6 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Displays other players health above their head

## Setting names (decrypted)

- `Hearts Per Row` → **Hearts Per Row**
- `Invisible` → **Invisible**
- `Visible Through Walls` → **Visible Through Walls**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.BkqiN | cJ | `this, mr.clS(nArray2) /* "Invisible" */` → .WE(false) | 82 | see 00-framework.md [inferred] |
| this.gKqqU | cJ | `this, mr.clS(nArray3) /* "Visible Throug…` → .WE(false) | 105 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.PlayerLikeEntity`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.PlayerLikeEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Health Indicators" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dr.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
