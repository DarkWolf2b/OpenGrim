# Velocity (sixtwo.fC)

- Registry: `sixtwo.fC|Velocity|Changes player knockback|key=24|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fC.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 24, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~13 native tokens vs ~13 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Changes player knockback

## Setting names (decrypted)

- `Disable In Fluid` Ôćĺ **Disable In Fluid**
- `Horizontal` Ôćĺ **Horizontal**
- `Vertical` Ôćĺ **Vertical**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.oUOJc | cA | `this, mr.clS(var10004) /* "Horizontal" *ÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %") | 39 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.hXcoz | cA | `this, mr.clS(var10004) /* "Vertical" */` Ôćĺ .UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %") | 49 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.pltDm | cJ | `this, mr.clS(var10004) /* "Disable In FlÔÇŽ` Ôćĺ .WE(false) | 67 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket`

## Port notes (dev.opengrim)

- Implement "Velocity" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fC.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
