# Anchor Macro (sixtwo.eX)

- Registry: `sixtwo.eX|Anchor Macro|Automatically charges and explodes an anchor|key=27|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eX.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 27, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~46 native tokens vs ~46 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically charges and explodes an anchor

## Setting names (decrypted)

- `After Charge` → **After Charge**
- `Anchor Delay` → **Anchor Delay**
- `Before Charge` → **Before Charge**
- `Cancel On Use` → **Cancel On Use**
- `Charge Anchors` → **Charge Anchors**
- `Charge Delay` → **Charge Delay**
- `Detonate Anchors` → **Detonate Anchors**
- `Detonate Delay` → **Detonate Delay**
- `Detonate Item` → **Detonate Item**
- `Diagonal` → **Diagonal**
- `Hold Key` → **Hold Key**
- `Only For Own` → **Only For Own**
- `Safe Anchor` → **Safe Anchor**
- `Safe Anchor Blocks` → **Safe Anchor Blocks**
- `Safe Anchor Hold` → **Safe Anchor Hold**
- `Switch Delay` → **Switch Delay**

## Structural findings

### Settings (18 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.tGIRe | ct | `
         this,
         mr.clS(
       …`  | 57 | see 00-framework.md [inferred] |
| this.ctwjT | cu | `
         this.tGIRe,
         mr.clS(
 …`  | 68 | see 00-framework.md [inferred] |
| this.Jtsgl | cu | `
         this.tGIRe,
         mr.clS(
 …`  | 80 | see 00-framework.md [inferred] |
| this.ikcZw | cJ | `this, mr.clS(var10004) /* "Charge Anchor…` → .WE(true) | 106 | see 00-framework.md [inferred] |
| this.qSoHb | cA | `this, mr.clS(var10004) /* "Charge Delay"…` → .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks") | 120 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.mmJaL | cJ | `this, mr.clS(var10004) /* "Detonate Anch…` → .WE(true) | 138 | see 00-framework.md [inferred] |
| this.xdsyS | cA | `this, mr.clS(var10005) /* "Detonate Dela…` → .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks") | 155 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.GIPFr | cA | `this, mr.clS(var10005) /* "Anchor Delay"…` → .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks") | 169 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.QJeGA | cA | `this, mr.clS(var10005) /* "Switch Delay"…` → .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks") | 198 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.JeboL | cJ | `this, mr.clS(var10005) /* "Only For Own"…` → .WE(false) | 212 | see 00-framework.md [inferred] |
| this.JCATM | cJ | `this, mr.clS(var10005) /* "Cancel On Use…` → .WE(true) | 227 | see 00-framework.md [inferred] |
| this.KfwhF | cJ | `this, mr.clS(var10004) /* "Safe Anchor" …` → .WE(false) | 243 | see 00-framework.md [inferred] |
| this.RGmUw | cJ | `this, mr.clS(var10004) /* "Safe Anchor H…` → .WE(false) | 261 | see 00-framework.md [inferred] |
| this.hPUWA | cD | `this, mr.clS(var10004) /* "Hold Key" */` → .VO(-999) | 271 | see 00-framework.md [inferred] |
| this.KUvew | ct | `
            this,
            mr.clS(
 …`  | 292 | see 00-framework.md [inferred] |
| this.EYjJv | cu | `var10003, mr.clS(var10004) /* "Before Ch…`  | 318 | see 00-framework.md [inferred] |
| this.lxmFM | cu | `var10003, mr.clS(var10004) /* "After Cha…`  | 333 | see 00-framework.md [inferred] |
| this.NZxVb | cJ | `this, mr.clS(var10004) /* "Diagonal" */` → .WE(true) | 343 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.item.Items`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.math.BlockPos`

### Other imports of interest

- `java.util.ArrayList`
- `java.util.List`
- `java.util.Map`
- `net.minecraft.item.Items`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.math.BlockPos`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Anchor Macro" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eX.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
