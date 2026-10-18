# Mace Aura (sixtwo.eP)

- Registry: `sixtwo.eP|Mace Aura|Automatically attacks with Mace|key=120|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eP.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 120, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~32 native tokens vs ~32 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically attacks with Mace

## Setting names (decrypted)

- `Attack Point` → **Attack Point**
- `Best Vector` → **Best Vector**
- `Change Armor` → **Change Armor**
- `Change View` → **Change View**
- `Distance` → **Distance**
- `Health` → **Health**
- `Hit Distance` → **Hit Distance**
- `Ignore Friends` → **Ignore Friends**
- `Ignore In Damage Tick` → **Ignore In Damage Tick**
- `Ignore Naked` → **Ignore Naked**
- `Limit FOV` → **Limit FOV**
- `Min Fall Distance` → **Min Fall Distance**
- `Nearest Vector` → **Nearest Vector**
- `Target Options` → **Target Options**
- `Target Priority` → **Target Priority**
- `Targets` → **Targets**

## Structural findings

### Settings (14 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.ODZUf | cF | `this, mr.clS(var10004) /* "Targets" */` → .VS(jg$tJ.OCdZM) | 86 | see 00-framework.md [inferred] |
| this.OqtQM | cv | `this, mr.clS(var10004) /* "Target Option…`  | 102 | see 00-framework.md [inferred] |
| this.AGzRp | cw | `var10003, mr.clS(var10004) /* "Ignore Fr…`  | 119 | see 00-framework.md [inferred] |
| this.GJMaG | cw | `var10003, mr.clS(var10004) /* "Ignore Na…`  | 134 | see 00-framework.md [inferred] |
| this.OwGUK | cw | `var10003, mr.clS(var10004) /* "Ignore In…`  | 158 | see 00-framework.md [inferred] |
| this.PVTLs | ct | `this, mr.clS(var10004) /* "Target Priori…`  | 175 | see 00-framework.md [inferred] |
| this.lRWug | cu | `var7, mr.clS(var10004) /* "Distance" */`  | 186 | see 00-framework.md [inferred] |
| this.xKdBS | cu | `var8, mr.clS(var10004) /* "Health" */`  | 195 | see 00-framework.md [inferred] |
| this.AyJJM | ct | `this, mr.clS(var10004) /* "Attack Point"…`  | 209 | see 00-framework.md [inferred] |
| this.zhiUo | cu | `var9, mr.clS(var10004) /* "Best Vector" …`  | 223 | see 00-framework.md [inferred] |
| this.oGBUC | cu | `var10, mr.clS(var10004) /* "Nearest Vect…`  | 240 | see 00-framework.md [inferred] |
| this.gXxAz | cJ | `this, mr.clS(var10004) /* "Change Armor"…` → .WE(false) | 268 | see 00-framework.md [inferred] |
| this.KSprU | cJ | `this, mr.clS(var10004) /* "Change View" …` → .WE(false) | 281 | see 00-framework.md [inferred] |
| this.OWsAx | cJ | `this, mr.clS(var10005) /* "Limit FOV" */` → .WE(false) | 293 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.entity.LivingEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.LivingEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Mace Aura" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eP.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
