# Auto Clicker (sixtwo.fn)

- Registry: `sixtwo.fn|Auto Clicker|Clicks automatically when holding attack key|key=161|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fn.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 161, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~28 native tokens vs ~23 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Clicks automatically when holding attack key

## Setting names (decrypted)

- `Allow Breaking Blocks` → **Allow Breaking Blocks**
- `Click Pattern` → **Click Pattern**
- `Conditions` → **Conditions**
- `Holding Weapon` → **Holding Weapon**
- `Inventory` → **Inventory**
- `Left CPS` → **Left CPS**
- `Left Click` → **Left Click**
- `Mouse Buttons` → **Mouse Buttons**
- `Not Using Item` → **Not Using Item**
- `Randomize` → **Randomize**
- `Randomize Speed` → **Randomize Speed**
- `Right CPS` → **Right CPS**
- `Right Click` → **Right Click**
- `Simulate Exhaust` → **Simulate Exhaust**

## Structural findings

### Settings (12 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.WeTaM | cv | `this, mr.clS(nArray) /* "Mouse Buttons" …` → .Tm(1) | 85 | see 00-framework.md [inferred] |
| this.MVcap | cw | `this.WeTaM, mr.clS(nArray2) /* "Left Cli…` → .Tz() | 97 | see 00-framework.md [inferred] |
| this.zUyjt | cw | `this.WeTaM, mr.clS(nArray3) /* "Right Cl…` → .Tz() | 110 | see 00-framework.md [inferred] |
| this.bunVK | ct | `this, mr.clS(nArray4) /* "Click Pattern"…`  | 125 | see 00-framework.md [inferred] |
| this.YfhNn | cJ | `this, mr.clS(nArray7) /* "Randomize" */` → .WE(true) | 157 | see 00-framework.md [inferred] |
| this.ybxcg | cJ | `this, mr.clS(nArray8) /* "Simulate Exhau…` → .WE(false) | 175 | see 00-framework.md [inferred] |
| this.akhNQ | cJ | `this, mr.clS(nArray9) /* "Allow Breaking…` → .WE(true) | 198 | see 00-framework.md [inferred] |
| this.sxweB | cJ | `this, mr.clS(nArray11) /* "Inventory" */` → .WE(false) | 210 | see 00-framework.md [inferred] |
| this.aVMzs | cJ | `this, mr.clS(nArray12) /* "Randomize Spe…` → .WE(true) | 227 | see 00-framework.md [inferred] |
| this.ipOaN | cv | `this, mr.clS(nArray13) /* "Conditions" *…`  | 239 | see 00-framework.md [inferred] |
| this.SWful | cw | `this.ipOaN, mr.clS(nArray14) /* "Holding…`  | 255 | see 00-framework.md [inferred] |
| this.LbAPM | cw | `this.ipOaN, mr.clS(nArray15) /* "Not Usi…`  | 271 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.screen.slot.Slot`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.client.gui.screen.ingame.HandledScreen`
- `net.minecraft.screen.slot.Slot`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Clicker" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fn.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
