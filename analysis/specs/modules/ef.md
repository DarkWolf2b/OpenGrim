# Elytra Swapper (sixtwo.ef)

- Registry: `sixtwo.ef|Elytra Swapper|Swaps chestplate with elytra|key=67|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ef.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 67, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~25 native tokens vs ~20 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Swaps chestplate with elytra

## Setting names (decrypted)

- `Activate Firework` → **Activate Firework**
- `Activation Key` → **Activation Key**
- `Auto Fly` → **Auto Fly**
- `Auto Open Inventory` → **Auto Open Inventory**
- `Client` → **Client**
- `Inventory Mode` → **Inventory Mode**
- `Normal` → **Normal**
- `Silent` → **Silent**
- `Swap Back After Landing` → **Swap Back After Landing**
- `Swap Delay` → **Swap Delay**
- `Swap Firework` → **Swap Firework**

## Structural findings

### Settings (12 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.lKUBn | cD | `this, mr.clS(nArray) /* "Activation Key"…` → .VO((int)-999) | 87 | see 00-framework.md [inferred] |
| this.FVOfM | ct | `this, mr.clS(new int[]{(int)77, (int)111…`  | 88 | see 00-framework.md [inferred] |
| this.edpdA | cu | `this.FVOfM, mr.clS(new int[]{(int)76, (i…`  | 89 | see 00-framework.md [inferred] |
| this.UVlxx | cu | `this.FVOfM, mr.clS(nArray2) /* "Normal" …`  | 97 | see 00-framework.md [inferred] |
| this.mgssu | ct | `this, mr.clS(nArray3) /* "Inventory Mode…`  | 113 | see 00-framework.md [inferred] |
| this.GyyLJ | cu | `this.mgssu, mr.clS(nArray4) /* "Client" …`  | 121 | see 00-framework.md [inferred] |
| this.uilnT | cu | `this.mgssu, mr.clS(nArray5) /* "Silent" …`  | 129 | see 00-framework.md [inferred] |
| this.RXyTe | cJ | `this, mr.clS(nArray6) /* "Auto Open Inve…` → .WE(true) | 150 | see 00-framework.md [inferred] |
| this.LeMPS | cJ | `this, mr.clS(nArray8) /* "Auto Fly" */` → .WE(false) | 172 | see 00-framework.md [inferred] |
| this.vclgk | cJ | `this, mr.clS(nArray9) /* "Swap Back Afte…` → .WE(false) | 197 | see 00-framework.md [inferred] |
| this.AVoOt | cJ | `this, mr.clS(nArray10) /* "Swap Firework…` → .WE(false) | 212 | see 00-framework.md [inferred] |
| this.jiBcq | cJ | `this, mr.clS(nArray11) /* "Activate Fire…` → .WE(false) | 231 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.Hand`

### Other imports of interest

- `com.ibm.icu.impl.Pair`
- `java.util.Map`
- `java.util.Optional`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.Hand`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Elytra Swapper" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ef.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
