# Knockback Displacement (sixtwo.fs)

- Registry: `sixtwo.fs|Knockback Displacement|Allows to knockback target in custom direction|key=151|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fs.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 151, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~47 native tokens vs ~46 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to knockback target in custom direction

## Setting names (decrypted)

- `Always` Ôćĺ **Always**
- `Angle Step` Ôćĺ **Angle Step**
- `Change Angle Key` Ôćĺ **Change Angle Key**
- `Direction` Ôćĺ **Direction**
- `Displace` Ôćĺ **Displace**
- `Dynamic` Ôćĺ **Dynamic**
- `Given Direction` Ôćĺ **Given Direction**
- `Hide Rotation` Ôćĺ **Hide Rotation**
- `Instant` Ôćĺ **Instant**
- `Knockback Direction` Ôćĺ **Knockback Direction**
- `Rotation` Ôćĺ **Rotation**
- `With Knockback Only` Ôćĺ **With Knockback Only**

## Structural findings

### Settings (11 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.IcLmm | ct | `
         this,
         mr.clS(
       ÔÇŽ`  | 144 | see 00-framework.md [inferred] |
| this.oBzcq | cu | `var10003, mr.clS(var10004) /* "Rotation"ÔÇŽ`  | 165 | see 00-framework.md [inferred] |
| this.YyudN | cu | `var10003, mr.clS(var10004) /* "Instant" ÔÇŽ`  | 175 | see 00-framework.md [inferred] |
| this.xtaAk | ct | `this, mr.clS(var10004) /* "Displace" */`  | 185 | see 00-framework.md [inferred] |
| this.HIGji | cu | `var10003, mr.clS(var10004) /* "Always" *ÔÇŽ`  | 194 | see 00-framework.md [inferred] |
| this.FXNOb | cu | `var10003, mr.clS(var10004) /* "With KnocÔÇŽ`  | 216 | see 00-framework.md [inferred] |
| this.wyZEk | ct | `this, mr.clS(var10004) /* "Knockback DirÔÇŽ` Ôćĺ .SO(0) | 237 | see 00-framework.md [inferred] |
| this.lOgKN | cu | `var10003, mr.clS(var10004) /* "Dynamic" ÔÇŽ`  | 247 | see 00-framework.md [inferred] |
| this.LjfJW | cD | `this, mr.clS(var10004) /* "Change Angle ÔÇŽ` Ôćĺ .VO(-999) | 265 | see 00-framework.md [inferred] |
| this.clxNa | cu | `var10003, mr.clS(var10004) /* "DirectionÔÇŽ`  | 289 | see 00-framework.md [inferred] |
| this.DtLvL | cJ | `this, mr.clS(var10004) /* "Hide RotationÔÇŽ`  | 321 | see 00-framework.md [inferred] |

### Event listeners (1 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aPg | `gL$tj var1` | priority = mw.CRUCIAL | 45 |

### Minecraft API surface (3 refs)

- `net.minecraft.client.option.KeyBinding`
- `net.minecraft.entity.Entity`
- `net.minecraft.network.packet.Packet`

### Other imports of interest

- `java.util.Map`
- `java.util.Queue`
- `java.util.concurrent.ConcurrentLinkedQueue`
- `net.minecraft.client.option.KeyBinding`
- `net.minecraft.entity.Entity`
- `net.minecraft.network.packet.Packet`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`

## Port notes (dev.opengrim)

- Implement "Knockback Displacement" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fs.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
