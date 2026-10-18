# Scaffold (sixtwo.ei)

- Registry: `sixtwo.ei|Scaffold|Automatically bridges for you|key=38|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ei.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 38, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~13 native tokens vs ~13 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically bridges for you

## Setting names (decrypted)

- `Client` Ôćĺ **Client**
- `Hand Swing` Ôćĺ **Hand Swing**
- `Hand To Use` Ôćĺ **Hand To Use**
- `Main Hand` Ôćĺ **Main Hand**
- `Off Hand` Ôćĺ **Off Hand**
- `Only When Crouching` Ôćĺ **Only When Crouching**
- `Server` Ôćĺ **Server**

## Structural findings

### Settings (8 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.cNIJT | ct | `this, mr.clS(var10004) /* "Hand To Use" ÔÇŽ`  | 40 | see 00-framework.md [inferred] |
| this.kVyvV | cu | `var10003, mr.clS(var10004) /* "Main HandÔÇŽ`  | 52 | see 00-framework.md [inferred] |
| this.mjyti | cu | `var10003, mr.clS(var10004) /* "Off Hand"ÔÇŽ`  | 63 | see 00-framework.md [inferred] |
| this.bjFxu | cu | `
         this.cNIJT,
         mr.clS(
 ÔÇŽ`  | 64 | see 00-framework.md [inferred] |
| this.BhfJC | ct | `this, mr.clS(var10004) /* "Hand Swing" *ÔÇŽ`  | 86 | see 00-framework.md [inferred] |
| this.JluvD | cu | `var10003, mr.clS(var10004) /* "Client" *ÔÇŽ`  | 95 | see 00-framework.md [inferred] |
| this.RrLuA | cu | `var10003, mr.clS(var10004) /* "Server" *ÔÇŽ`  | 104 | see 00-framework.md [inferred] |
| this.VLSja | cJ | `this, mr.clS(var10004) /* "Only When CroÔÇŽ` Ôćĺ .WE(false) | 125 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.util.Hand`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.util.Hand`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Scaffold" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ei.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
