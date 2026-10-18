# Auto Double Hand (sixtwo.eZ)

- Registry: `sixtwo.eZ|Auto Double Hand|Automatically does double hand|key=30|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eZ.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 30, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~14 native tokens vs ~14 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically does double hand

## Setting names (decrypted)

- `Check Players Look` → **Check Players Look**
- `Crystal Predict` → **Crystal Predict**
- `Double Hand After Pop` → **Double Hand After Pop**
- `Sword Predict` → **Sword Predict**
- `Totem Item` → **Totem Item**
- `Totem On Inventory` → **Totem On Inventory**
- `Totem Slot` → **Totem Slot**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.lBfId | cJ | `this, mr.clS(var10004) /* "Double Hand A…` → .WE(false) | 66 | see 00-framework.md [inferred] |
| this.XxhAs | cJ | `this, mr.clS(var10004) /* "Crystal Predi…` → .WE(true) | 83 | see 00-framework.md [inferred] |
| this.wTnCk | cJ | `this, mr.clS(var10004) /* "Sword Predict…` → .WE(true) | 98 | see 00-framework.md [inferred] |
| this.ZKrlo | cJ | `this, mr.clS(var10004) /* "Check Players…` → .WE(true) | 118 | see 00-framework.md [inferred] |
| this.IwDsS | cJ | `this, mr.clS(var10004) /* "Totem On Inve…` → .WE(false) | 138 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.entity.decoration.EndCrystalEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.decoration.EndCrystalEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Double Hand" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eZ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
