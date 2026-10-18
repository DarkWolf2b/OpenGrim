# Anti Invisible (sixtwo.dY)

- Registry: `sixtwo.dY|Anti Invisible|Makes invisible entites visible|key=54|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dY.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 54, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~5 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Makes invisible entites visible

## Setting names (decrypted)

- `Entities` Ôćĺ **Entities**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.vJyXR | cF | `this, mr.clS(var10004) /* "Entities" */` Ôćĺ .VS(jg$tJ.OCdZM) | 36 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

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

- Implement "Anti Invisible" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dY.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
