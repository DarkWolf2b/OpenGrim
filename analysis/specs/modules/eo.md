# No Slow (sixtwo.eo)

- Registry: `sixtwo.eo|No Slow|Allows to move faster when using items|key=39|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eo.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 39, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~30 native tokens vs ~30 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Allows to move faster when using items

## Setting names (decrypted)

- `Berry Bush` → **Berry Bush**
- `Block Options` → **Block Options**
- `Chargeables` → **Chargeables**
- `Grim V3` → **Grim V3**
- `Item Options` → **Item Options**
- `Main Hand` → **Main Hand**
- `Matrix` → **Matrix**
- `Matrix 2` → **Matrix 2**
- `Matrix 3` → **Matrix 3**
- `Movement Options` → **Movement Options**
- `Shield` → **Shield**
- `Soul Sand` → **Soul Sand**

## Structural findings

### Settings (20 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.lKIKk | ct | `
         this,
         mr.clS(
       …`  | 40 | see 00-framework.md [inferred] |
| this.EhnRt | cu | `
         this.lKIKk,
         mr.clS(
 …`  | 51 | see 00-framework.md [inferred] |
| this.HGufy | cu | `var10003, mr.clS(var10004) /* "Matrix" *…`  | 70 | see 00-framework.md [inferred] |
| this.cvVxe | cu | `var10, mr.clS(var10005) /* "Matrix 2" */`  | 82 | see 00-framework.md [inferred] |
| this.VtAqw | cu | `var11, mr.clS(var10005) /* "Matrix 3" */`  | 93 | see 00-framework.md [inferred] |
| this.gJhNS | cu | `
         this.lKIKk,
         mr.clS(
 …`  | 94 | see 00-framework.md [inferred] |
| this.hcJrI | cu | `var10003, mr.clS(var10004) /* "Grim V3" …` → .SY() | 111 | see 00-framework.md [inferred] |
| this.DVCYL | cJ | `this, mr.clS(var10004) /* "Main Hand" */` → .WE(true) | 122 | see 00-framework.md [inferred] |
| this.eWPzd | cv | `this, mr.clS(var10004) /* "Item Options"…`  | 136 | see 00-framework.md [inferred] |
| this.DKvXJ | cw | `var6, mr.clS(var10004) /* "Shield" */` → .Tz() | 157 | see 00-framework.md [inferred] |
| this.emXqU | cw | `var7, mr.clS(var10004) /* "Chargeables" …` → .Tz() | 171 | see 00-framework.md [inferred] |
| this.SZtpC | cv | `this, mr.clS(var10004) /* "Block Options…`  | 186 | see 00-framework.md [inferred] |
| this.dsCpw | cw | `
            this.SZtpC,
            mr.…`  | 187 | see 00-framework.md [inferred] |
| this.yIflo | cw | `
            this.SZtpC,
            mr.…`  | 199 | see 00-framework.md [inferred] |
| this.OcKIt | cw | `
            this.SZtpC,
            mr.…`  | 207 | see 00-framework.md [inferred] |
| this.tzUdG | cw | `var8, mr.clS(var10004) /* "Soul Sand" */`  | 230 | see 00-framework.md [inferred] |
| this.zwMyB | cw | `var9, mr.clS(var10004) /* "Berry Bush" *…`  | 243 | see 00-framework.md [inferred] |
| this.AwpkE | cv | `this, mr.clS(var10004) /* "Movement Opti…`  | 261 | see 00-framework.md [inferred] |
| this.lJLoK | cw | `
            this.AwpkE,
            mr.…`  | 262 | see 00-framework.md [inferred] |
| this.yMbIT | cw | `
            this.AwpkE,
            mr.…`  | 274 | see 00-framework.md [inferred] |

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

- Implement "No Slow" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eo.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
