# Cape (sixtwo.ee)

- Registry: `sixtwo.ee|Cape|Allows to set custom cape|key=73|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ee.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 73, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~14 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to set custom cape

## Setting names (decrypted)

- `Hide Wings` → **Hide Wings**
- `Preset` → **Preset**
- `Texture URL` → **Texture URL**
- `Use Presets` → **Use Presets**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.sxdUz | cJ | `this, mr.clS(var10004) /* "Use Presets" …` → .WE(true) | 60 | see 00-framework.md [inferred] |
| this.SmLHL | ct | `this, mr.clS(var10004) /* "Preset" */`  | 68 | see 00-framework.md [inferred] |
| this.FsBgj | cJ | `this, mr.clS(var10004) /* "Hide Wings" *…` → .WE(false) | 80 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.util.HashMap`
- `java.util.LinkedHashMap`
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

- Implement "Cape" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ee.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
