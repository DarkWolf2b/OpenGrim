# Auto Drain (sixtwo.fw)

- Registry: `sixtwo.fw|Auto Drain|Automatically pickups liquid from cobweb|key=14|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fw.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 14, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~13 native tokens vs ~13 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically pickups liquid from cobweb

## Setting names (decrypted)

- `Auto Switch Delay` → **Auto Switch Delay**
- `Blatant` → **Blatant**
- `Cancel For` → **Cancel For**
- `Cancel In Screens` → **Cancel In Screens**
- `Friends` → **Friends**
- `Lava Cobweb` → **Lava Cobweb**
- `Manual` → **Manual**
- `Steal Mode` → **Steal Mode**
- `Switch Mode` → **Switch Mode**
- `Water Cobweb` → **Water Cobweb**

## Structural findings

### Settings (17 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.sGDWO | ct | `this, mr.clS(new int[]{(int)77, (int)111…`  | 88 | see 00-framework.md [inferred] |
| this.aRvvg | cu | `this.sGDWO, mr.clS(nArray) /* "Blatant" …`  | 97 | see 00-framework.md [inferred] |
| this.Qksff | cu | `this.sGDWO, mr.clS(new int[]{(int)76, (i…`  | 98 | see 00-framework.md [inferred] |
| this.YBVgI | ct | `this, mr.clS(nArray2) /* "Switch Mode" *…`  | 111 | see 00-framework.md [inferred] |
| this.pJxNC | cu | `this.YBVgI, mr.clS(new int[]{(int)65, (i…`  | 112 | see 00-framework.md [inferred] |
| this.wbUnO | cu | `this.YBVgI, mr.clS(nArray3) /* "Manual" …`  | 120 | see 00-framework.md [inferred] |
| this.KzsPl | cA | `this, mr.clS(nArray4) /* "Auto Switch De…` → .UG(1.0).UE(0.0).UF(20.0).UI(1.0, 1.0).UH(zAhcx) | 139 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.tYcBL | ct | `this, mr.clS(nArray5) /* "Steal Mode" */`  | 151 | see 00-framework.md [inferred] |
| this.ZtDkv | cu | `this.tYcBL, mr.clS(nArray6) /* "Water Co…`  | 165 | see 00-framework.md [inferred] |
| this.UFdMN | cu | `this.tYcBL, mr.clS(nArray7) /* "Lava Cob…`  | 178 | see 00-framework.md [inferred] |
| this.NnigP | cu | `this.tYcBL, mr.clS(new int[]{(int)87, (i…`  | 179 | see 00-framework.md [inferred] |
| this.vyhuq | cu | `this.tYcBL, mr.clS(new int[]{(int)76, (i…`  | 180 | see 00-framework.md [inferred] |
| this.KuKPX | cu | `this.tYcBL, mr.clS(new int[]{(int)65, (i…`  | 181 | see 00-framework.md [inferred] |
| this.cuIXt | ct | `this, mr.clS(nArray8) /* "Cancel For" */`  | 193 | see 00-framework.md [inferred] |
| this.SzYmi | cu | `this.cuIXt, mr.clS(new int[]{(int)79, (i…`  | 194 | see 00-framework.md [inferred] |
| this.qzZfU | cu | `this.cuIXt, mr.clS(nArray9) /* "Friends"…`  | 203 | see 00-framework.md [inferred] |
| this.FbvPk | cJ | `this, mr.clS(nArray10) /* "Cancel In Scr…` → .WE(false) | 222 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (13 refs)

- `net.minecraft.block.Blocks`
- `net.minecraft.entity.Entity`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.hit.HitResult`
- `net.minecraft.util.hit.HitResult$Type`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Position`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.BlockView`
- `net.minecraft.world.RaycastContext`
- `net.minecraft.world.RaycastContext$FluidHandling`
- `net.minecraft.world.RaycastContext$ShapeType`

### Other imports of interest

- `java.util.ArrayList`
- `java.util.List`
- `java.util.Map`
- `java.util.Random`
- `net.minecraft.block.Blocks`
- `net.minecraft.entity.Entity`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.hit.HitResult`
- `net.minecraft.util.math.BlockPos`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Position`
- `net.minecraft.util.math.Vec3d`
- `net.minecraft.world.BlockView`
- `net.minecraft.world.RaycastContext`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Drain" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fw.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
