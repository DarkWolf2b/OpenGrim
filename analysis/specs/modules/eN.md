# Mace Swap (sixtwo.eN)

- Registry: `sixtwo.eN|Mace Swap|Automatically performs breach and windburst swap|key=115|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eN.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 115, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~21 native tokens vs ~21 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically performs breach and windburst swap

## Setting names (decrypted)

- `Allowed Items` → **Allowed Items**
- `Breach` → **Breach**
- `Return Delay` → **Return Delay**
- `Wind Burst` → **Wind Burst**
- `Windburst Threshold` → **Windburst Threshold**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.RajOD | ct | `
         this,
         mr.clS(
       …`  | 32 | see 00-framework.md [inferred] |
| this.Mazxu | cu | `var10003, mr.clS(var10004) /* "Breach" *…`  | 51 | see 00-framework.md [inferred] |
| this.tjNtC | cu | `var10003, mr.clS(var10004) /* "Wind Burs…`  | 64 | see 00-framework.md [inferred] |
| this.EifDU | cu | `
         this.RajOD,
         mr.clS(
 …`  | 65 | see 00-framework.md [inferred] |
| this.DrFpA | cA | `this, mr.clS(var10004) /* "Return Delay"…` → .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms") | 140 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |

### Event listeners (1 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aBc | `hw$tv var1` | priority = mw.LOW | 165 |

### Minecraft API surface (2 refs)

- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.item.Item`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Mace Swap" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eN.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
