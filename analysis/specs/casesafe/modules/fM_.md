# Auto MLG (sixtwo.fM)

- Registry: `sixtwo.fM|Auto MLG|Places block underneath to avoid fall damage|key=21|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fM.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 21, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~9 native tokens vs ~9 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Places block underneath to avoid fall damage

## Setting names (decrypted)

- `Anchor Player` Ôćĺ **Anchor Player**
- `Bucket` Ôćĺ **Bucket**
- `Cherry` Ôćĺ **Cherry**
- `Cobweb` Ôćĺ **Cobweb**
- `HayBale` Ôćĺ **HayBale**
- `Threshold` Ôćĺ **Threshold**

## Structural findings

### Settings (8 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.YSNTj | cJ | `this, mr.clS(var10004) /* "Anchor PlayerÔÇŽ` Ôćĺ .WE(false) | 56 | see 00-framework.md [inferred] |
| this.Btadw | ct | `
         this,
         mr.clS(
       ÔÇŽ`  | 57 | see 00-framework.md [inferred] |
| this.tKkYu | cu | `var10003, mr.clS(var10004) /* "Bucket" *ÔÇŽ`  | 76 | see 00-framework.md [inferred] |
| this.AleCL | cu | `
         this.Btadw,
         mr.clS(
 ÔÇŽ`  | 77 | see 00-framework.md [inferred] |
| this.rDsyy | cu | `
         this.Btadw,
         mr.clS(
 ÔÇŽ`  | 89 | see 00-framework.md [inferred] |
| this.ZBrrX | cu | `var10003, mr.clS(var10004) /* "Cobweb" *ÔÇŽ`  | 109 | see 00-framework.md [inferred] |
| this.fFjCr | cu | `var10003, mr.clS(var10004) /* "HayBale" ÔÇŽ`  | 119 | see 00-framework.md [inferred] |
| this.EDXTP | cu | `var10003, mr.clS(var10004) /* "Cherry" *ÔÇŽ`  | 128 | see 00-framework.md [inferred] |

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

- Implement "Auto MLG" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fM.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
