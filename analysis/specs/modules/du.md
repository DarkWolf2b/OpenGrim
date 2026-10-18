# Tracers (sixtwo.du)

- Registry: `sixtwo.du|Tracers|Draws lines to entities|key=79|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/du.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 79, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~6 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Draws lines to entities

## Setting names (decrypted)

- `Entities` → **Entities**
- `Friend Color` → **Friend Color**
- `Ignore Friends` → **Ignore Friends**
- `Line Width` → **Line Width**

## Structural findings

### Settings (7 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.SqUZV | cF | `this, mr.clS(nArray) /* "Entities" */` → .VS(jg$tJ.OCdZM).VT(EntityType.ITEM, EntityType.CHEST_MINECART, EntityType.TNT_MINECART) | 72 | see 00-framework.md [inferred] |
| this.iuknf | ct | `this, mr.clS(new int[]{(int)77, (int)111…`  | 100 | see 00-framework.md [inferred] |
| this.wUMpA | cu | `this.iuknf, mr.clS(new int[]{(int)72, (i…`  | 101 | see 00-framework.md [inferred] |
| this.MmkQv | cu | `this.iuknf, mr.clS(new int[]{(int)67, (i…`  | 102 | see 00-framework.md [inferred] |
| this.rlVJG | cu | `this.iuknf, mr.clS(new int[]{(int)76, (i…`  | 103 | see 00-framework.md [inferred] |
| this.jJCGV | cu | `this.iuknf, mr.clS(new int[]{(int)70, (i…`  | 104 | see 00-framework.md [inferred] |
| this.PNacL | cJ | `this, mr.clS(nArray4) /* "Ignore Friends…` → .WE(true) | 120 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.entity.EntityType`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.entity.EntityType`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Tracers" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id du.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
