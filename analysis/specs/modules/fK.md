# Reach (sixtwo.fK)

- Registry: `sixtwo.fK|Reach|Extends player's reach|key=20|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fK.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 20, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~11 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Extends player's reach

## Setting names (decrypted)

- `Blocks Value` → **Blocks Value**
- `Entity Value` → **Entity Value**

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Reach" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fK.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
