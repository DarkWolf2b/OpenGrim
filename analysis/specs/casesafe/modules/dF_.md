# Lever Replace (sixtwo.dF)

- Registry: `sixtwo.dF|Lever Replace|Automatically replaces levers and buttons|key=112|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dF.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 112, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically replaces levers and buttons

## Setting names (decrypted)

- `Allowed Items` Ôćĺ **Allowed Items**
- `Block To Replace` Ôćĺ **Block To Replace**
- `Cobweb` Ôćĺ **Cobweb**
- `Held Block` Ôćĺ **Held Block**
- `Instant` Ôćĺ **Instant**
- `Obsidian` Ôćĺ **Obsidian**

## Structural findings

### Settings (7 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.iqrsx | ct | `
         this,
         mr.clS(
       ÔÇŽ`  | 34 | see 00-framework.md [inferred] |
| this.SMlWc | cu | `var10003, mr.clS(var10004) /* "Instant" ÔÇŽ`  | 54 | see 00-framework.md [inferred] |
| this.QJtRA | cu | `
         this.iqrsx,
         mr.clS(
 ÔÇŽ`  | 55 | see 00-framework.md [inferred] |
| this.FjyNN | ct | `this, mr.clS(var10004) /* "Block To ReplÔÇŽ`  | 107 | see 00-framework.md [inferred] |
| this.nZWdG | cu | `var10003, mr.clS(var10004) /* "Cobweb" *ÔÇŽ`  | 116 | see 00-framework.md [inferred] |
| this.MIMsQ | cu | `var10003, mr.clS(var10004) /* "Obsidian"ÔÇŽ`  | 127 | see 00-framework.md [inferred] |
| this.WOZWS | cu | `var10003, mr.clS(var10004) /* "Held BlocÔÇŽ`  | 140 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.util.Map`
- `java.util.function.Predicate`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Lever Replace" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dF.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
