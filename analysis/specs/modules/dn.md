# Firework Spots (sixtwo.dn)

- Registry: `sixtwo.dn|Firework Spots|Renders used fireworks|key=98|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dn.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 98, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~9 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders used fireworks

## Setting names (decrypted)

- `Quantity Limit` → **Quantity Limit**
- `Time Before Disappear` → **Time Before Disappear**

## Structural findings

### Settings (0 constructed — stale: superseded by `handlers/dn.md`, which carries the full tree; corrected 2026-10-17, batch 13)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.entity.Entity`
- `net.minecraft.entity.projectile.FireworkRocketEntity`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.Iterator`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.projectile.FireworkRocketEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Firework Spots" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dn.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
