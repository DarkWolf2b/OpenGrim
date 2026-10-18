# Anti Blind (sixtwo.dx)

- Registry: `sixtwo.dx|Anti Blind|Allows to disable screen effects|key=100|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dx.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 100, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~12 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to disable screen effects

## Setting names (decrypted)

- `Disable Blindness` Ôćĺ **Disable Blindness**
- `Disable Darkness` Ôćĺ **Disable Darkness**
- `Disable Fire` Ôćĺ **Disable Fire**
- `Disable Freezing` Ôćĺ **Disable Freezing**
- `Disable Nausea` Ôćĺ **Disable Nausea**
- `Disable Pumpkin Blur` Ôćĺ **Disable Pumpkin Blur**
- `Disable Suffocation Overlay` Ôćĺ **Disable Suffocation Overlay**
- `Disable Water Overlay` Ôćĺ **Disable Water Overlay**

## Structural findings

### Settings (8 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.rNxMx | cJ | `this, mr.clS(var10004) /* "Disable Fire"ÔÇŽ` Ôćĺ .WE(false) | 47 | see 00-framework.md [inferred] |
| this.uiQvy | cJ | `this, mr.clS(var10004) /* "Disable PumpkÔÇŽ` Ôćĺ .WE(false) | 69 | see 00-framework.md [inferred] |
| this.MMhZn | cJ | `this, mr.clS(var10004) /* "Disable FreezÔÇŽ` Ôćĺ .WE(false) | 87 | see 00-framework.md [inferred] |
| this.kKviC | cJ | `this, mr.clS(var10004) /* "Disable NauseÔÇŽ` Ôćĺ .WE(false) | 103 | see 00-framework.md [inferred] |
| this.FAwHq | cJ | `this, mr.clS(var10004) /* "Disable BlindÔÇŽ` Ôćĺ .WE(false) | 122 | see 00-framework.md [inferred] |
| this.kFBwN | cJ | `this, mr.clS(var10004) /* "Disable DarknÔÇŽ` Ôćĺ .WE(false) | 140 | see 00-framework.md [inferred] |
| this.EiPlS | cJ | `this, mr.clS(var10004) /* "Disable SuffoÔÇŽ` Ôćĺ .WE(false) | 169 | see 00-framework.md [inferred] |
| this.IeNYH | cJ | `this, mr.clS(var10004) /* "Disable WaterÔÇŽ` Ôćĺ .WE(false) | 192 | see 00-framework.md [inferred] |

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

- Implement "Anti Blind" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dx.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
