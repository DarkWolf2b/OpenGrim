# Mouse Tweaks (sixtwo.dJ)

- Registry: `sixtwo.dJ|Mouse Tweaks|Enhances inventory management|key=157|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dJ.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 157, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~32 native tokens vs ~32 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Enhances inventory management

## Setting names (decrypted)

- `Always One` → **Always One**
- `First To Last` → **First To Last**
- `Inverted` → **Inverted**
- `LMB Tweak With Item` → **LMB Tweak With Item**
- `LMB Tweak Without Item` → **LMB Tweak Without Item**
- `Last To First` → **Last To First**
- `Normal` → **Normal**
- `Position Aware` → **Position Aware**
- `Position Aware Inverted` → **Position Aware Inverted**
- `Proportional` → **Proportional**
- `RMB Tweak` → **RMB Tweak**
- `Scroll Item Scaling` → **Scroll Item Scaling**
- `Wheel Scroll Direction` → **Wheel Scroll Direction**
- `Wheel Search Order` → **Wheel Search Order**
- `Wheel Tweak` → **Wheel Tweak**

## Structural findings

### Settings (15 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.hRuUo | cJ | `this, mr.clS(var10004) /* "RMB Tweak" */` → .WE(true) | 57 | see 00-framework.md [inferred] |
| this.Twcyd | cJ | `this, mr.clS(var10004) /* "LMB Tweak Wit…` → .WE(true) | 78 | see 00-framework.md [inferred] |
| this.AkIWJ | cJ | `this, mr.clS(var10004) /* "LMB Tweak Wit…` → .WE(true) | 102 | see 00-framework.md [inferred] |
| this.kshzP | cJ | `this, mr.clS(var10004) /* "Wheel Tweak" …` → .WE(true) | 115 | see 00-framework.md [inferred] |
| this.MjLVq | ct | `this, mr.clS(var10004) /* "Wheel Search …`  | 135 | see 00-framework.md [inferred] |
| this.GndWc | cu | `var10003, mr.clS(var10004) /* "First To …`  | 151 | see 00-framework.md [inferred] |
| this.lULpb | cu | `var10003, mr.clS(var10004) /* "Last To F…` → .SY() | 167 | see 00-framework.md [inferred] |
| this.XujOg | ct | `this, mr.clS(var10004) /* "Wheel Scroll …`  | 191 | see 00-framework.md [inferred] |
| this.BEFfA | cu | `var10003, mr.clS(var10004) /* "Normal" *…` → .SY() | 200 | see 00-framework.md [inferred] |
| this.FkJRf | cu | `var10003, mr.clS(var10004) /* "Inverted"…`  | 211 | see 00-framework.md [inferred] |
| this.RCVzG | cu | `var10003, mr.clS(var10004) /* "Position …`  | 228 | see 00-framework.md [inferred] |
| this.iUlIH | cu | `var10003, mr.clS(var10004) /* "Position …`  | 254 | see 00-framework.md [inferred] |
| this.cnoHj | ct | `this, mr.clS(var10004) /* "Scroll Item S…`  | 275 | see 00-framework.md [inferred] |
| this.YdPTn | cu | `var10003, mr.clS(var10004) /* "Proportio…` → .SY() | 290 | see 00-framework.md [inferred] |
| this.QgNbo | cu | `var10003, mr.clS(var10004) /* "Always On…`  | 303 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.client.gui.screen.Screen`
- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.item.ItemStack`
- `net.minecraft.screen.slot.Slot`

### Other imports of interest

- `java.util.List`
- `java.util.Map`
- `net.minecraft.client.gui.screen.Screen`
- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.item.ItemStack`
- `net.minecraft.screen.slot.Slot`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Mouse Tweaks" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dJ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
