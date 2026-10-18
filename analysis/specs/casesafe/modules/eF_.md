# Spear Reach (sixtwo.eF)

- Registry: `sixtwo.eF|Spear Reach|Increases reach by attribute swapping with spear|key=128|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eF.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 128, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~17 native tokens vs ~17 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Increases reach by attribute swapping with spear

## Setting names (decrypted)

- `Allowed Items` Ôćĺ **Allowed Items**
- `Return Delay` Ôćĺ **Return Delay**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.jymCX | cA | `this, mr.clS(var10004) /* "Return Delay"ÔÇŽ` Ôćĺ .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(feInP) | 104 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (5 refs)

- `net.minecraft.component.type.AttackRangeComponent`
- `net.minecraft.entity.Entity`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.component.type.AttackRangeComponent`
- `net.minecraft.entity.Entity`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Spear Reach" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eF.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
