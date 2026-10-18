# Spear Double Tap (sixtwo.eI)

- Registry: `sixtwo.eI|Spear Double Tap|Performs spear and mace double tap|key=150|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eI.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 150, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~22 native tokens vs ~22 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Performs spear and mace double tap

## Setting names (decrypted)

- `After Spear Hit` → **After Spear Hit**
- `Armor Change Timing` → **Armor Change Timing**
- `Before Mace Hit` → **Before Mace Hit**
- `Change Armor` → **Change Armor**
- `Return Back` → **Return Back**
- `Return Delay` → **Return Delay**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.tOxMr | cJ | `this, mr.clS(var10004) /* "Change Armor"…`  | 84 | see 00-framework.md [inferred] |
| this.yTUFP | ct | `this, mr.clS(var10004) /* "Armor Change …`  | 105 | see 00-framework.md [inferred] |
| this.TEwfc | cu | `var10003, mr.clS(var10004) /* "After Spe…`  | 123 | see 00-framework.md [inferred] |
| this.cKxMx | cu | `var10003, mr.clS(var10004) /* "Before Ma…`  | 141 | see 00-framework.md [inferred] |
| this.ytGpS | cJ | `this, mr.clS(var10004) /* "Return Back" …` → .WE(true) | 154 | see 00-framework.md [inferred] |
| this.Eppcp | cA | `this, mr.clS(var10004) /* "Return Delay"…` → .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(GGWXd) | 168 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.entity.player.PlayerEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.player.PlayerEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Spear Double Tap" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eI.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
