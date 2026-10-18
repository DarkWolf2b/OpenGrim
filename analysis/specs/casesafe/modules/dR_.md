# Click Action (sixtwo.dR)

- Registry: `sixtwo.dR|Click Action|Uses item on click|key=60|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dR.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 60, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~18 native tokens vs ~18 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Uses item on click

## Setting names (decrypted)

- `Firework Key` Ôćĺ **Firework Key**
- `Pearl Key` Ôćĺ **Pearl Key**
- `Potion Key` Ôćĺ **Potion Key**
- `Return Delay` Ôćĺ **Return Delay**

## Structural findings

### Settings (4 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.KnWWg | cD | `this, mr.clS(var10004) /* "Pearl Key" */` Ôćĺ .VO(-999) | 46 | see 00-framework.md [inferred] |
| this.jdDxa | cD | `this, mr.clS(var10004) /* "Firework Key"ÔÇŽ` Ôćĺ .VO(-999) | 60 | see 00-framework.md [inferred] |
| this.HOwTg | cD | `this, mr.clS(var10004) /* "Potion Key" *ÔÇŽ` Ôćĺ .VO(-999) | 72 | see 00-framework.md [inferred] |
| this.PiCte | cA | `this, mr.clS(var10004) /* "Return Delay"ÔÇŽ` Ôćĺ .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(gcmeH) | 86 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.Hand`

### Other imports of interest

- `java.util.Map`
- `java.util.function.Predicate`
- `net.minecraft.item.Item`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.Hand`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Click Action" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dR.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
