# Interface (sixtwo.fX)

- Registry: `sixtwo.fX|Interface|Allows to change interface settings|key=102|bind=344` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fX.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 102, active bind 344 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~24 method decls — corrected 2026-10-17, batch 13: fX is **pure Java** (the "mostly native-blocked" reading was stale; the handler spec fX.md is correct).

## Intended behavior (from registry)

> Allows to change interface settings

## Setting names (decrypted)

- `Edit Theme` → **Edit Theme**
- `Emote Key` → **Emote Key**
- `Liquid Glass` → **Liquid Glass**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.jGdAR | cD | `this, mr.clS(nArray) /* "Emote Key" */` → .VO((int)66) | 67 | see 00-framework.md [inferred] |
| this.nJAFn | ct | `this, mr.clS(new int[]{(int)83, (int)116…`  | 68 | see 00-framework.md [inferred] |
| this.hltCm | cu | `this.nJAFn, mr.clS(nArray2) /* "Liquid G…`  | 82 | see 00-framework.md [inferred] |
| this.OzuKt | cu | `this.nJAFn, mr.clS(new int[]{(int)66, (i…` → .SY() | 83 | see 00-framework.md [inferred] |
| this.seKrG | cu | `this.nJAFn, mr.clS(new int[]{(int)83, (i…`  | 84 | see 00-framework.md [inferred] |

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

- Implement "Interface" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fX.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
