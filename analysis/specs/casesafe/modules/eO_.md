# Auto Pearl Catch (sixtwo.eO)

- Registry: `sixtwo.eO|Auto Pearl Catch|Catches pearl with wind charge in the air|key=118|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eO.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 118, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Catches pearl with wind charge in the air

## Setting names (decrypted)

- `Activation Key` Ôćĺ **Activation Key**
- `Return Delay` Ôćĺ **Return Delay**
- `Return Slot` Ôćĺ **Return Slot**
- `Wind Charge Delay` Ôćĺ **Wind Charge Delay**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.UHgUi | cD | `this, mr.clS(var10004) /* "Activation KeÔÇŽ` Ôćĺ .VO(-999) | 42 | see 00-framework.md [inferred] |
| this.GzaZR | cJ | `this, mr.clS(var10004) /* "Return Slot" ÔÇŽ` Ôćĺ .WE(true) | 74 | see 00-framework.md [inferred] |
| this.ecyXJ | cA | `this, mr.clS(var10004) /* "Return Delay"ÔÇŽ` Ôćĺ .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0) | 88 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "Auto Pearl Catch" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eO.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
