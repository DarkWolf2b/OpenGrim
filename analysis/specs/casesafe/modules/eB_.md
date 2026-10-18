# Flight (sixtwo.eB)

- Registry: `sixtwo.eB|Flight|Allows to fly|key=44|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eB.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 44, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~40 native tokens vs ~40 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to fly

## Setting names (decrypted)

- `Abilities` Ôćĺ **Abilities**
- `Anti Kick` Ôćĺ **Anti Kick**
- `Anti Kick Mode` Ôćĺ **Anti Kick Mode**
- `Normal` Ôćĺ **Normal**
- `Off Time` Ôćĺ **Off Time**
- `Packet` Ôćĺ **Packet**
- `Velocity` Ôćĺ **Velocity**
- `Vertical Speed Match` Ôćĺ **Vertical Speed Match**

## Structural findings

### Settings (9 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.xPGtf | cJ | `this, mr.clS(var10004) /* "Anti Kick" */` Ôćĺ .WE(false) | 52 | see 00-framework.md [inferred] |
| this.hojzx | cJ | `this, mr.clS(var10004) /* "Vertical SpeeÔÇŽ` Ôćĺ .WE(false) | 74 | see 00-framework.md [inferred] |
| this.Kqwum | ct | `
         this,
         mr.clS(
       ÔÇŽ`  | 118 | see 00-framework.md [inferred] |
| this.YqWYM | cu | `var10003, mr.clS(var10004) /* "AbilitiesÔÇŽ`  | 140 | see 00-framework.md [inferred] |
| this.wKOWY | cu | `var10003, mr.clS(var10004) /* "Velocity"ÔÇŽ`  | 151 | see 00-framework.md [inferred] |
| this.MoNPF | ct | `this, mr.clS(var10004) /* "Anti Kick ModÔÇŽ`  | 167 | see 00-framework.md [inferred] |
| this.PgiSy | cu | `var10003, mr.clS(var10004) /* "Normal" *ÔÇŽ`  | 176 | see 00-framework.md [inferred] |
| this.TJdZl | cu | `var10003, mr.clS(var10004) /* "Packet" *ÔÇŽ`  | 185 | see 00-framework.md [inferred] |
| this.fklcz | cu | `
         this.MoNPF,
         mr.clS(
 ÔÇŽ`  | 186 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.entity.Entity`
- `net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.Entity`
- `net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket`

## Port notes (dev.opengrim)

- Implement "Flight" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eB.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
