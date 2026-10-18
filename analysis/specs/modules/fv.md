# Auto Armor (sixtwo.fv)

- Registry: `sixtwo.fv|Auto Armor|Automatically replaces armor|key=16|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fv.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 16, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~26 native tokens vs ~22 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically replaces armor

## Setting names (decrypted)

- `Auto Open Inventory` → **Auto Open Inventory**
- `Client` → **Client**
- `Close After Swap` → **Close After Swap**
- `Close Delay` → **Close Delay**
- `Ignore Elytra` → **Ignore Elytra**
- `Inventory Mode` → **Inventory Mode**
- `Minimum Durability` → **Minimum Durability**
- `Normal` → **Normal**
- `Open Delay` → **Open Delay**
- `Silent` → **Silent**
- `Swap Cooldown` → **Swap Cooldown**

## Structural findings

### Settings (9 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.YeKOG | ct | `this, mr.clS(new int[]{(int)77, (int)111…`  | 62 | see 00-framework.md [inferred] |
| this.Ibyhc | cu | `this.YeKOG, mr.clS(new int[]{(int)76, (i…`  | 63 | see 00-framework.md [inferred] |
| this.SgsTt | cu | `this.YeKOG, mr.clS(nArray) /* "Normal" *…`  | 71 | see 00-framework.md [inferred] |
| this.PAzfu | ct | `this, mr.clS(nArray2) /* "Inventory Mode…`  | 87 | see 00-framework.md [inferred] |
| this.KWINT | cu | `this.PAzfu, mr.clS(nArray3) /* "Client" …`  | 95 | see 00-framework.md [inferred] |
| this.jVFDV | cu | `this.PAzfu, mr.clS(nArray4) /* "Silent" …`  | 103 | see 00-framework.md [inferred] |
| this.ftGho | cJ | `this, mr.clS(nArray5) /* "Auto Open Inve…` → .WE(true) | 124 | see 00-framework.md [inferred] |
| this.uFkOC | cJ | `this, mr.clS(nArray6) /* "Close After Sw…` → .WE(true) | 142 | see 00-framework.md [inferred] |
| this.vrDDR | cJ | `this, mr.clS(nArray11) /* "Ignore Elytra…` → .WE(false) | 217 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.item.ItemStack`
- `net.minecraft.item.equipment.EquipmentType`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.equipment.EquipmentType`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Armor" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fv.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
