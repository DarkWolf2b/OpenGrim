# Hand No Clip (sixtwo.dS)

- Registry: `sixtwo.dS|Hand No Clip|Allows to attack through blocks|key=55|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dS.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 55, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~8 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to attack through blocks

## Setting names (decrypted)

- `Blocks` → **Blocks**
- `Ignore` → **Ignore**
- `Specified` → **Specified**
- `Work On` → **Work On**

## Structural findings

### Settings (4 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.CFOLa | ct | `this, mr.clS(var10004) /* "Ignore" */`  | 36 | see 00-framework.md [inferred] |
| this.CeZar | cu | `
         this.CFOLa,
         mr.clS(
 …`  | 37 | see 00-framework.md [inferred] |
| this.UeXgv | cu | `var10003, mr.clS(var10004) /* "Specified…`  | 54 | see 00-framework.md [inferred] |
| this.gWbBh | cv | `this, mr.clS(var10004) /* "Work On" */` → .Tm(1) | 63 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.item.Items`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Hand No Clip" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dS.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
