# Shield Status (sixtwo.cY)

- Registry: `sixtwo.cY|Shield Status|Shows shield status represented by color|key=159|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/cY.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 159, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~14 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Shows shield status represented by color

## Setting names (decrypted)

- `Color Transition` → **Color Transition**
- `Disabled Color` → **Disabled Color**
- `Enabled Color` → **Enabled Color**
- `Only Self` → **Only Self**
- `Using Color` → **Using Color**

## Structural findings

### Settings (2 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.BDssA | cJ | `this, mr.clS(nArray) /* "Only Self" */` → .WE(false) | 82 | see 00-framework.md [inferred] |
| this.SnGMi | cJ | `this, mr.clS(nArray2) /* "Color Transiti…`  | 100 | see 00-framework.md [inferred] |

### Event listeners (1 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aaQ | `go.sY sY2` | priority=mw.LOWEST | 560 |

### Minecraft API surface (5 refs)

- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.network.packet.s2c.play.PlaySoundS2CPacket`
- `net.minecraft.world.World`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.network.packet.s2c.play.PlaySoundS2CPacket`
- `net.minecraft.world.World`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket`
- `net.minecraft.network.packet.s2c.play.PlaySoundS2CPacket`

## Port notes (dev.opengrim)

- Implement "Shield Status" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id cY.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
