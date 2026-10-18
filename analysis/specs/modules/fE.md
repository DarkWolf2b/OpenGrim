# No Miss (sixtwo.fE)

- Registry: `sixtwo.fE|No Miss|Cancels attack if misses|key=17|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fE.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 17, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~7 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Cancels attack if misses

## Setting names (decrypted)

- `All Items` → **All Items**
- `Ignore Friends` → **Ignore Friends**
- `Items To Use` → **Items To Use**
- `Only Weapons` → **Only Weapons**
- `Specified Slots` → **Specified Slots**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.aoNus | ct | `this, mr.clS(nArray) /* "Items To Use" *…`  | 53 | see 00-framework.md [inferred] |
| this.RDugC | cu | `this.aoNus, mr.clS(nArray2) /* "All Item…`  | 64 | see 00-framework.md [inferred] |
| this.YbiEE | cu | `this.aoNus, mr.clS(nArray3) /* "Only Wea…`  | 78 | see 00-framework.md [inferred] |
| this.IGJjx | cu | `this.aoNus, mr.clS(nArray4) /* "Specifie…`  | 95 | see 00-framework.md [inferred] |
| this.zeyXv | cz | `this, mr.clS(new int[]{(int)83, (int)108…`  | 96 | see 00-framework.md [inferred] |
| this.noHUW | cJ | `this, mr.clS(nArray5) /* "Ignore Friends…` → .WE(false) | 112 | see 00-framework.md [inferred] |

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

- Implement "No Miss" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fE.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
