# Auto Potion (sixtwo.fl)

- Registry: `sixtwo.fl|Auto Potion|Automatically uses potions|key=127|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fl.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 127, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~29 native tokens vs ~20 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically uses potions

## Setting names (decrypted)

- `Activation` Ôćĺ **Activation**
- `Fire Resistance` Ôćĺ **Fire Resistance**
- `Full Health` Ôćĺ **Full Health**
- `Heal Threshold` Ôćĺ **Heal Threshold**
- `Heal Until` Ôćĺ **Heal Until**
- `Healings` Ôćĺ **Healings**
- `Instant Healing` Ôćĺ **Instant Healing**
- `No Effect` Ôćĺ **No Effect**
- `Per Potion Delay` Ôćĺ **Per Potion Delay**
- `Potion Type Delay` Ôćĺ **Potion Type Delay**
- `Reaches Threshold` Ôćĺ **Reaches Threshold**
- `Regeneration` Ôćĺ **Regeneration**
- `Regeneration Threshold` Ôćĺ **Regeneration Threshold**
- `Regeneration Trigger` Ôćĺ **Regeneration Trigger**
- `Required Angle` Ôćĺ **Required Angle**
- `Strength` Ôćĺ **Strength**
- `Threshold` Ôćĺ **Threshold**
- `Throw Angle` Ôćĺ **Throw Angle**

## Structural findings

### Settings (23 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.dDKQL | ct | `this, mr.clS(new int[]{(int)77, (int)111ÔÇŽ`  | 139 | see 00-framework.md [inferred] |
| this.rVExA | cu | `this.dDKQL, mr.clS(new int[]{(int)72, (iÔÇŽ`  | 140 | see 00-framework.md [inferred] |
| this.GGmyQ | cu | `this.dDKQL, mr.clS(new int[]{(int)66, (iÔÇŽ`  | 141 | see 00-framework.md [inferred] |
| this.MEzpo | cu | `this.dDKQL, mr.clS(new int[]{(int)66, (iÔÇŽ`  | 142 | see 00-framework.md [inferred] |
| this.yCMVU | ct | `this, mr.clS(nArray) /* "Activation" */`  | 154 | see 00-framework.md [inferred] |
| this.NMaDj | cu | `this.yCMVU, mr.clS(new int[]{(int)65, (iÔÇŽ`  | 155 | see 00-framework.md [inferred] |
| this.vqHqt | cu | `this.yCMVU, mr.clS(new int[]{(int)76, (iÔÇŽ`  | 156 | see 00-framework.md [inferred] |
| this.GrPLO | ct | `this, mr.clS(nArray2) /* "Throw Angle" *ÔÇŽ`  | 169 | see 00-framework.md [inferred] |
| this.tyFzT | cu | `this.GrPLO, mr.clS(new int[]{(int)85, (iÔÇŽ`  | 170 | see 00-framework.md [inferred] |
| this.jvMbr | cu | `this.GrPLO, mr.clS(new int[]{(int)68, (iÔÇŽ` Ôćĺ .SY() | 171 | see 00-framework.md [inferred] |
| this.SOdOD | cv | `this, mr.clS(new int[]{(int)66, (int)117ÔÇŽ`  | 172 | see 00-framework.md [inferred] |
| this.cimiv | cw | `this.SOdOD, mr.clS(nArray3) /* "StrengthÔÇŽ` Ôćĺ .Tz() | 182 | see 00-framework.md [inferred] |
| this.eLmhr | cw | `this.SOdOD, mr.clS(new int[]{(int)83, (iÔÇŽ` Ôćĺ .Tz() | 183 | see 00-framework.md [inferred] |
| this.dnrRK | cw | `this.SOdOD, mr.clS(nArray4) /* "Fire ResÔÇŽ` Ôćĺ .Tz() | 200 | see 00-framework.md [inferred] |
| this.oMlyx | cv | `this, mr.clS(nArray5) /* "Healings" */`  | 210 | see 00-framework.md [inferred] |
| this.rfngy | cw | `this.oMlyx, mr.clS(nArray6) /* "Instant ÔÇŽ` Ôćĺ .Tz() | 227 | see 00-framework.md [inferred] |
| this.YdqGo | cw | `this.oMlyx, mr.clS(nArray7) /* "RegeneraÔÇŽ` Ôćĺ .Tz() | 241 | see 00-framework.md [inferred] |
| this.DDOas | ct | `this, mr.clS(nArray8) /* "Regeneration TÔÇŽ`  | 263 | see 00-framework.md [inferred] |
| this.TTfND | cu | `this.DDOas, mr.clS(nArray9) /* "No EffecÔÇŽ`  | 274 | see 00-framework.md [inferred] |
| this.qXCVd | cu | `this.DDOas, mr.clS(nArray10) /* "ThreshoÔÇŽ`  | 285 | see 00-framework.md [inferred] |
| this.rKSxQ | ct | `this, mr.clS(nArray13) /* "Heal Until" *ÔÇŽ`  | 337 | see 00-framework.md [inferred] |
| this.PEysr | cu | `this.rKSxQ, mr.clS(nArray14) /* "ReachesÔÇŽ`  | 356 | see 00-framework.md [inferred] |
| this.PfBXr | cu | `this.rKSxQ, mr.clS(nArray16) /* "Full HeÔÇŽ` Ôćĺ .SY() | 385 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.entity.effect.StatusEffect`
- `net.minecraft.entity.effect.StatusEffects`
- `net.minecraft.item.ItemStack`
- `net.minecraft.registry.entry.RegistryEntry`

### Other imports of interest

- `java.util.HashMap`
- `java.util.Map`
- `net.minecraft.entity.effect.StatusEffect`
- `net.minecraft.entity.effect.StatusEffects`
- `net.minecraft.item.ItemStack`
- `net.minecraft.registry.entry.RegistryEntry`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Potion" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fl.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
