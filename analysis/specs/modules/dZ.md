# Fast Place (sixtwo.dZ)

- Registry: `sixtwo.dZ|Fast Place|Removes right click delay|key=62|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dZ.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 62, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~12 native tokens vs ~12 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Removes right click delay

## Setting names (decrypted)

- `Blocks` → **Blocks**
- `Only For Slots` → **Only For Slots**
- `Only For Valid Blocks` → **Only For Valid Blocks**
- `Only If You Can Place` → **Only If You Can Place**
- `Right Click Delay` → **Right Click Delay**
- `Valid Blocks` → **Valid Blocks**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.Wkwey | cJ | `this, mr.clS(var10004) /* "Blocks" */` → .WE(true) | 39 | see 00-framework.md [inferred] |
| this.whhdh | cJ | `this, mr.clS(var10004) /* "Only For Vali…` → .WE(false) | 75 | see 00-framework.md [inferred] |
| this.uafIf | cA | `this, mr.clS(var10004) /* "Right Click D…` → .UG(1.0).UE(0.0).UF(4.0).UI(0.0, 0.0).UH(MCipD) | 108 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.AKRql | cJ | `this, mr.clS(var10004) /* "Only If You C…` → .WE(false) | 131 | see 00-framework.md [inferred] |
| this.hSAvy | cJ | `this, mr.clS(var10004) /* "Only For Slot…` → .WE(false) | 147 | see 00-framework.md [inferred] |
| this.vmwmS | cz | `
         this,
         mr.clS(
       …`  | 148 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.item.Item`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.item.Item`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Fast Place" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dZ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
