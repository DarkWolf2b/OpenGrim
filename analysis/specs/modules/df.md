# Aspect Ratio (sixtwo.df)

- Registry: `sixtwo.df|Aspect Ratio|Changes game aspect ratio|key=92|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/df.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 92, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~12 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Changes game aspect ratio

## Setting names (decrypted)

- `Custom` → **Custom**
- `Preset` → **Preset**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.jtYSu | ct | `this, mr.clS(nArray) /* "Preset" */`  | 57 | see 00-framework.md [inferred] |
| this.JRiAq | cu | `this.jtYSu, mr.clS(nArray2) /* "Custom" …`  | 65 | see 00-framework.md [inferred] |
| this.ZzGuW | cu | `this.jtYSu, mr.clS(new int[]{(int)49, (i…`  | 66 | see 00-framework.md [inferred] |
| this.hfdrQ | cu | `this.jtYSu, mr.clS(new int[]{(int)49, (i…`  | 67 | see 00-framework.md [inferred] |
| this.XSYSg | cu | `this.jtYSu, mr.clS(new int[]{(int)52, (i…`  | 68 | see 00-framework.md [inferred] |

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

- Implement "Aspect Ratio" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id df.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
