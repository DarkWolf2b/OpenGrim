# Freecam (sixtwo.dW)

- Registry: `sixtwo.dW|Freecam|Detaches camera allowing free movement|key=76|bind=71` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dW.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 76, active bind 71 (-999 = unbound) [registry]
- Native coverage: ~39 native tokens vs ~39 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Detaches camera allowing free movement

## Setting names (decrypted)

- `Disable on Damage` → **Disable on Damage**
- `Render Hand` → **Render Hand**
- `Rotate` → **Rotate**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.joJfw | cJ | `this, mr.clS(var10004) /* "Rotate" */` → .WE(false) | 61 | see 00-framework.md [inferred] |
| this.xkmCl | cJ | `this, mr.clS(var10004) /* "Disable on Da…` → .WE(false) | 80 | see 00-framework.md [inferred] |
| this.KEfhe | cJ | `this, mr.clS(var10004) /* "Render Hand" …` → .WE(false) | 93 | see 00-framework.md [inferred] |

### Event listeners (2 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aqu | `hh var1` | priority = mw.LOWEST | 117 |
| aql | `gA var1` | priority = mw.LOWEST | 172 |

### Minecraft API surface (2 refs)

- `net.minecraft.client.option.Perspective`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.client.option.Perspective`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Freecam" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dW.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
