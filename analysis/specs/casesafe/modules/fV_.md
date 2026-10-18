# Self Destruct (sixtwo.fV)

- Registry: `sixtwo.fV|Self Destruct|Self destructs the client|key=105|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fV.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 105, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~7 native tokens vs ~7 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Self destructs the client

## Setting names (decrypted)

- `Clean Strings` Ôćĺ **Clean Strings**
- `Clear Chat` Ôćĺ **Clear Chat**
- `Close Handles` Ôćĺ **Close Handles**
- `Custom Mod Id` Ôćĺ **Custom Mod Id**
- `Delete File` Ôćĺ **Delete File**
- `Mod Id` Ôćĺ **Mod Id**
- `Post Action` Ôćĺ **Post Action**
- `Replace File` Ôćĺ **Replace File**

## Structural findings

### Settings (8 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.YELYg | cJ | `this, mr.clS(var10004) /* "Clear Chat" *ÔÇŽ` Ôćĺ .WE(false) | 40 | see 00-framework.md [inferred] |
| this.LplVs | cJ | `this, mr.clS(var10004) /* "Clean StringsÔÇŽ` Ôćĺ .WE(true) | 55 | see 00-framework.md [inferred] |
| this.sgXyu | ct | `this, mr.clS(var10004) /* "Post Action" ÔÇŽ`  | 68 | see 00-framework.md [inferred] |
| this.GhxZC | cu | `var10003, mr.clS(var10004) /* "Delete FiÔÇŽ`  | 82 | see 00-framework.md [inferred] |
| this.mZCNn | cu | `var10003, mr.clS(var10004) /* "Replace FÔÇŽ`  | 97 | see 00-framework.md [inferred] |
| this.Oiypq | cu | `var10, mr.clS(var10005) /* "Close HandleÔÇŽ`  | 114 | see 00-framework.md [inferred] |
| this.JFraG | cu | `
         this.sgXyu,
         mr.clS(
 ÔÇŽ`  | 115 | see 00-framework.md [inferred] |
| this.dczoz | cJ | `this, mr.clS(var10005) /* "Custom Mod IdÔÇŽ` Ôćĺ .WE(false) | 154 | see 00-framework.md [inferred] |

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

- Implement "Self Destruct" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fV.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
