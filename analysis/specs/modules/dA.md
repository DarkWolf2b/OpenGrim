# Elytra Target (sixtwo.dA)

- Registry: `sixtwo.dA|Elytra Target|Automatically uses firework for target|key=59|bind=82` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dA.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 59, active bind 82 (-999 = unbound) [registry]
- Native coverage: ~26 native tokens vs ~26 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically uses firework for target

## Setting names (decrypted)

- `Elytra Bounce` → **Elytra Bounce**
- `Firework Cooldown` → **Firework Cooldown**
- `Firework Key` → **Firework Key**
- `Firework Use Mode` → **Firework Use Mode**
- `Follow Distance` → **Follow Distance**
- `On Bind` → **On Bind**
- `Overshoot` → **Overshoot**
- `Overshoot Value` → **Overshoot Value**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.woeNK | ct | `this, mr.clS(var10004) /* "Firework Use …`  | 74 | see 00-framework.md [inferred] |
| this.sGPoP | cu | `
         this.woeNK,
         mr.clS(
 …`  | 75 | see 00-framework.md [inferred] |
| this.thWij | cu | `var10003, mr.clS(var10004) /* "On Bind" …`  | 95 | see 00-framework.md [inferred] |
| this.pWbaz | cD | `this, mr.clS(var10004) /* "Firework Key"…` → .VO(-999) | 140 | see 00-framework.md [inferred] |
| this.srWas | cJ | `this, mr.clS(var10004) /* "Elytra Bounce…` → .WE(false) | 155 | see 00-framework.md [inferred] |
| this.MQFiv | cJ | `this, mr.clS(var10004) /* "Overshoot" */` → .WE(false) | 166 | see 00-framework.md [inferred] |

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

- Implement "Elytra Target" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dA.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
