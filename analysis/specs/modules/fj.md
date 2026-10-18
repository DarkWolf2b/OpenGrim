# Projectile Aim Bot (sixtwo.fj)

- Registry: `sixtwo.fj|Projectile Aim Bot|Automatically aims at targets|key=111|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fj.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 111, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~12 native tokens vs ~12 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically aims at targets

## Setting names (decrypted)

- `Fill Color` → **Fill Color**
- `Filled` → **Filled**
- `Ignore Walls` → **Ignore Walls**
- `Outline Color` → **Outline Color**
- `Render Prediction` → **Render Prediction**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.NJTyK | cJ | `this, mr.clS(var10004) /* "Ignore Walls"…` → .WE(false) | 43 | see 00-framework.md [inferred] |
| this.IMpen | cJ | `this, mr.clS(var10004) /* "Render Predic…` → .WE(false) | 75 | see 00-framework.md [inferred] |
| this.DRvrZ | cJ | `this, mr.clS(var10004) /* "Filled" */` → .WE(false) | 110 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.math.Box`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.ItemStack`
- `net.minecraft.util.math.Box`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Projectile Aim Bot" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fj.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
