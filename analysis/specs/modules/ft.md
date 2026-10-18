# Auto GApple (sixtwo.ft)

- Registry: `sixtwo.ft|Auto GApple|Automatically eats golden apples|key=144|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ft.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 144, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~19 native tokens vs ~19 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically eats golden apples

## Setting names (decrypted)

- `Distance Threshold` → **Distance Threshold**
- `Eat Below` → **Eat Below**
- `Eat Enchanted` → **Eat Enchanted**
- `Eat One` → **Eat One**
- `Eat Threshold` → **Eat Threshold**
- `Eat Until` → **Eat Until**
- `Full Health` → **Full Health**
- `Reaches Threshold` → **Reaches Threshold**
- `When Player Away` → **When Player Away**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.elFbq | ct | `this, mr.clS(var10004) /* "Eat Until" */`  | 60 | see 00-framework.md [inferred] |
| this.wztVz | cu | `var10003, mr.clS(var10004) /* "Eat One" …`  | 70 | see 00-framework.md [inferred] |
| this.uaqBp | cu | `var10003, mr.clS(var10004) /* "Reaches T…` → .SY() | 90 | see 00-framework.md [inferred] |
| this.DExMY | cu | `var10003, mr.clS(var10004) /* "Full Heal…`  | 119 | see 00-framework.md [inferred] |
| this.ZEypD | cJ | `this, mr.clS(var10004) /* "Eat Enchanted…` → .WE(true) | 134 | see 00-framework.md [inferred] |
| this.CcIwq | cJ | `this, mr.clS(var10004) /* "When Player A…` → .WE(false) | 152 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto GApple" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ft.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
