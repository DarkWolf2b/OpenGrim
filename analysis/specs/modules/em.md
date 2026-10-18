# High Jump (sixtwo.em)

- Registry: `sixtwo.em|High Jump|Allows player to jump higher|key=167|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/em.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 167, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~9 native tokens vs ~9 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows player to jump higher

## Setting names (decrypted)

- `Grim Shulker` → **Grim Shulker**
- `Jump Height` → **Jump Height**
- `Vanilla` → **Vanilla**
- `Vertical Boost` → **Vertical Boost**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.hyrdo | ct | `
         this,
         mr.clS(
       …`  | 25 | see 00-framework.md [inferred] |
| this.Mbkzf | cu | `var10003, mr.clS(var10004) /* "Vanilla" …`  | 45 | see 00-framework.md [inferred] |
| this.nszob | cu | `var10003, mr.clS(var10004) /* "Grim Shul…` → .SY() | 60 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.block.entity.ShulkerBoxBlockEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.block.entity.ShulkerBoxBlockEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "High Jump" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id em.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
