# Auto Fish (sixtwo.dU)

- Registry: `sixtwo.dU|Auto Fish|Automatically fishes for you|key=66|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dU.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 66, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~17 native tokens vs ~17 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically fishes for you

## Setting names (decrypted)

- `Anti Break` Ôćĺ **Anti Break**
- `Auto Cast` Ôćĺ **Auto Cast**
- `Catch Delay` Ôćĺ **Catch Delay**
- `In Gui` Ôćĺ **In Gui**
- `Recast Delay` Ôćĺ **Recast Delay**
- `Splash Detection ` Ôćĺ **Splash Detection **
- `Splash Detection Range` Ôćĺ **Splash Detection Range**
- `Throw Delay` Ôćĺ **Throw Delay**

## Structural findings

### Settings (4 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.jjTmy | cJ | `this, mr.clS(var10004) /* "Anti Break" *ÔÇŽ` Ôćĺ .WE(false) | 52 | see 00-framework.md [inferred] |
| this.OZKKQ | cJ | `this, mr.clS(var10004) /* "Auto Cast" */` Ôćĺ .WE(false) | 63 | see 00-framework.md [inferred] |
| this.eKQLo | cJ | `this, mr.clS(var10004) /* "Splash DetectÔÇŽ` Ôćĺ .WE(false) | 127 | see 00-framework.md [inferred] |
| this.LBRwP | cJ | `this, mr.clS(var10004) /* "In Gui" */` Ôćĺ .WE(false) | 154 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.util.Map`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Fish" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dU.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
