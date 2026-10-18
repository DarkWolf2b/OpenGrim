# Auto Exp (sixtwo.eh)

- Registry: `sixtwo.eh|Auto Exp|Throws exp bottles faster|key=25|bind=74` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eh.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 25, active bind 74 (-999 = unbound) [registry]
- Native coverage: ~8 native tokens vs ~8 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Throws exp bottles faster

## Setting names (decrypted)

- `Cooldown` Ôćĺ **Cooldown**

## Structural findings

### Settings (1 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.GYRzq | cA | `this, mr.clS(var10004) /* "Cooldown" */` Ôćĺ .UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(QZqXr) | 33 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

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

- Implement "Auto Exp" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eh.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
