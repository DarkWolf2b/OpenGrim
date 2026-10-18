# Auto Stun Slam (sixtwo.eS)

- Registry: `sixtwo.eS|Auto Stun Slam|Breaks opponent's shield and proceed to slam with mace|key=117|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eS.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 117, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~36 native tokens vs ~36 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Breaks opponent's shield and proceed to slam with mace

## Setting names (decrypted)

- `Chance` Ôćĺ **Chance**
- `Change Armor` Ôćĺ **Change Armor**
- `Min Fall Distance` Ôćĺ **Min Fall Distance**
- `On Attack` Ôćĺ **On Attack**
- `Return Delay` Ôćĺ **Return Delay**
- `Trigger` Ôćĺ **Trigger**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.ZPhzU | ct | `this, mr.clS(var10004) /* "Trigger" */` Ôćĺ .SO(0) | 45 | see 00-framework.md [inferred] |
| this.eQeWA | cu | `
         this.ZPhzU,
         mr.clS(
 ÔÇŽ`  | 46 | see 00-framework.md [inferred] |
| this.ZDYKK | cu | `var10003, mr.clS(var10004) /* "On AttackÔÇŽ`  | 68 | see 00-framework.md [inferred] |
| this.dVnxZ | cJ | `this, mr.clS(var10004) /* "Change Armor"ÔÇŽ` Ôćĺ .WE(false) | 82 | see 00-framework.md [inferred] |
| this.GEHFQ | cA | `this, mr.clS(var10004) /* "Return Delay"ÔÇŽ` Ôćĺ .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms") | 115 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.player.PlayerEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.player.PlayerEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Stun Slam" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eS.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
