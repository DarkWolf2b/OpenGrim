# Anti Bot (sixtwo.fo)

- Registry: `sixtwo.fo|Anti Bot|Distincts real players from bots|key=12|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fo.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 12, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~22 native tokens vs ~16 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Distincts real players from bots

## Setting names (decrypted)

- `Dead Check` → **Dead Check**
- `Ground Check Mode` → **Ground Check Mode**
- `Main Hand` → **Main Hand**
- `Minimal Volume` → **Minimal Volume**
- `Movement Check` → **Movement Check**
- `Name Check` → **Name Check**
- `Off Ground` → **Off Ground**
- `Off Hand` → **Off Hand**
- `On Ground` → **On Ground**
- `Ping Check` → **Ping Check**
- `Sleep Check` → **Sleep Check**
- `Sound Check` → **Sound Check**
- `Sound Distance` → **Sound Distance**
- `Swing Check` → **Swing Check**
- `Swing Mode` → **Swing Mode**
- `Ticks Existed` → **Ticks Existed**
- `Ticks Existed Check` → **Ticks Existed Check**
- `Touched Ground Check` → **Touched Ground Check**
- `Velocity Check` → **Velocity Check**

## Structural findings

### Settings (16 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.xVFMx | cJ | `this, mr.clS(nArray) /* "Ping Check" */` → .WE(true) | 172 | see 00-framework.md [inferred] |
| this.YlLcN | cJ | `this, mr.clS(nArray2) /* "Name Check" */` → .WE(false) | 184 | see 00-framework.md [inferred] |
| this.XKOPz | cJ | `this, mr.clS(nArray3) /* "Ticks Existed …` → .WE(true) | 205 | see 00-framework.md [inferred] |
| this.PzVPu | cJ | `this, mr.clS(nArray5) /* "Touched Ground…` → .WE(false) | 242 | see 00-framework.md [inferred] |
| this.xhGdJ | ct | `this, mr.clS(nArray6) /* "Ground Check M…`  | 261 | see 00-framework.md [inferred] |
| this.ARssK | cu | `this.xhGdJ, mr.clS(nArray7) /* "On Groun…`  | 272 | see 00-framework.md [inferred] |
| this.kKXsM | cu | `this.xhGdJ, mr.clS(nArray8) /* "Off Grou…`  | 284 | see 00-framework.md [inferred] |
| this.RIfKs | cJ | `this, mr.clS(nArray9) /* "Sleep Check" *…` → .WE(false) | 297 | see 00-framework.md [inferred] |
| this.dhcOz | cJ | `this, mr.clS(nArray10) /* "Dead Check" *…` → .WE(false) | 309 | see 00-framework.md [inferred] |
| this.PqwUu | cJ | `this, mr.clS(nArray11) /* "Swing Check" …` → .WE(false) | 322 | see 00-framework.md [inferred] |
| this.zUESX | ct | `this, mr.clS(nArray12) /* "Swing Mode" *…`  | 334 | see 00-framework.md [inferred] |
| this.TCqvH | cu | `this.zUESX, mr.clS(nArray13) /* "Main Ha…`  | 345 | see 00-framework.md [inferred] |
| this.Icftg | cu | `this.zUESX, mr.clS(nArray14) /* "Off Han…`  | 355 | see 00-framework.md [inferred] |
| this.yGtxA | cJ | `this, mr.clS(nArray15) /* "Movement Chec…` → .WE(false) | 371 | see 00-framework.md [inferred] |
| this.tuLHs | cJ | `this, mr.clS(nArray16) /* "Sound Check" …` → .WE(false) | 384 | see 00-framework.md [inferred] |
| this.UYAQf | cJ | `this, mr.clS(nArray19) /* "Velocity Chec…` → .WE(false) | 432 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.player.PlayerEntity`

### Other imports of interest

- `java.util.HashSet`
- `java.util.Map`
- `java.util.Set`
- `java.util.function.Predicate`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.player.PlayerEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Anti Bot" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fo.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
