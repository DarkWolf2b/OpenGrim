# Item Frame Blocker (sixtwo.dD)

- Registry: `sixtwo.dD|Item Frame Blocker|Blocks putting items to an item frame|key=70|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dD.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 70, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~7 native tokens vs ~7 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Blocks putting items to an item frame

## Setting names (decrypted)

- `All Items` → **All Items**
- `Only Weapons` → **Only Weapons**
- `Specified Slots` → **Specified Slots**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.ZKjem | ct | `
         this,
         mr.clS(
       …`  | 26 | see 00-framework.md [inferred] |
| this.Qtxqy | cu | `var10003, mr.clS(var10004) /* "All Items…`  | 48 | see 00-framework.md [inferred] |
| this.VCHhf | cu | `var10003, mr.clS(var10004) /* "Only Weap…`  | 63 | see 00-framework.md [inferred] |
| this.ABbIM | cu | `var10003, mr.clS(var10004) /* "Specified…`  | 81 | see 00-framework.md [inferred] |
| this.mJHrk | cz | `
         this,
         mr.clS(
       …`  | 82 | see 00-framework.md [inferred] |

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

- Implement "Item Frame Blocker" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dD.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
