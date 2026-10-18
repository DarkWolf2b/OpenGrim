# China Hat (sixtwo.cS)

- Registry: `sixtwo.cS|China Hat|Renders china hat on your head|key=122|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-named/sixtwo/cS.java` (Vineflower)
- Superclass: `gg` [structure]
- Keybind: primary key 122, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~9 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders china hat on your head

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.PDKAy | cv | `this, mr.clS(var10004)`  | 40 | see 00-framework.md [inferred] |
| this.OHlmP | cw | `var10003, mr.clS(var10004)`  | 62 | see 00-framework.md [inferred] |

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

- Implement "China Hat" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cS.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
