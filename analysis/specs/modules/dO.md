# Hotbar Restorer (sixtwo.dO)

- Registry: `sixtwo.dO|Hotbar Restorer|Restores hotbar to saved state|key=141|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-named/sixtwo/dO.java` (CFR)
- Superclass: `gg` [structure]
- Keybind: primary key 141, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~28 native tokens vs ~27 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Restores hotbar to saved state

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.ERHWx | cD | `this, mr.clS(nArray)` → .VO((int)dO.aoQ("o", (int)13004, (long)(0x4A6381F85C395F22L ^ l2))) | 81 | see 00-framework.md [inferred] |
| this.LjWLs | cD | `this, mr.clS(nArray2)` → .VO((int)dO.aoQ("o", (int)6077, (long)(0x2C12F1B959CE7A47L ^ l2))) | 91 | see 00-framework.md [inferred] |
| this.RPJPb | ct | `this, mr.clS(new int[]{(int)dO.aoQ("o", …`  | 92 | see 00-framework.md [inferred] |
| this.NTcLD | cu | `this.RPJPb, mr.clS(nArray3)`  | 100 | see 00-framework.md [inferred] |
| this.byQPn | cu | `this.RPJPb, mr.clS(new int[]{(int)dO.aoQ…`  | 101 | see 00-framework.md [inferred] |
| this.OMKFJ | cJ | `this, mr.clS(nArray4)` → .WE(false) | 122 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.entity.player.PlayerInventory`
- `net.minecraft.item.ItemStack`

### Other imports of interest

- `java.util.Arrays`
- `java.util.Map`
- `mixin.accessors.AbstractContainerScreenAccessor`
- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.entity.player.PlayerInventory`
- `net.minecraft.item.ItemStack`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Hotbar Restorer" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dO.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
