# Totem Refill (sixtwo.fy)

- Registry: `sixtwo.fy|Totem Refill|Automatically refills totems|key=32|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fy.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 32, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~12 native tokens vs ~12 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically refills totems

## Setting names (decrypted)

- `Normal` → **Normal**
- `Replace Current Item` → **Replace Current Item**
- `Totem Item` → **Totem Item**
- `Totem Slot` → **Totem Slot**

## Structural findings

### Settings (4 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.HJKFq | ct | `
         this,
         mr.clS(
       …`  | 56 | see 00-framework.md [inferred] |
| this.hyyHb | cu | `var10003, mr.clS(var10004) /* "Normal" *…`  | 75 | see 00-framework.md [inferred] |
| this.GffeC | cu | `
         this.HJKFq,
         mr.clS(
 …`  | 76 | see 00-framework.md [inferred] |
| this.VcMsR | cJ | `this, mr.clS(var10004) /* "Replace Curre…` → .WE(false) | 109 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Totem Refill" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fy.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
