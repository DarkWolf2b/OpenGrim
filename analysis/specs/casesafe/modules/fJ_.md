# Target Margin (sixtwo.fJ)

- Registry: `sixtwo.fJ|Target Margin|Invisible version of hitboxes|key=6|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fJ.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 6, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~9 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Invisible version of hitboxes

## Setting names (decrypted)

- `Disable If Holding Cobweb` Ôćĺ **Disable If Holding Cobweb**
- `Disable If In Cobweb` Ôćĺ **Disable If In Cobweb**
- `Ignore Friends` Ôćĺ **Ignore Friends**
- `Only For Slots` Ôćĺ **Only For Slots**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.KbVJm | cA | `this, mr.clS(new int[]{(int)83, (int)105ÔÇŽ` Ôćĺ .UG(0.01).UE(0.0).UF(2.0).UI(0.0, 0.0).UH(lMLXr) | 324 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.CCWrA | cJ | `this, mr.clS(nArray) /* "Ignore Friends"ÔÇŽ` Ôćĺ .WE(false) | 340 | see 00-framework.md [inferred] |
| this.NStEn | cJ | `this, mr.clS(nArray2) /* "Disable If HolÔÇŽ` Ôćĺ .WE(false) | 367 | see 00-framework.md [inferred] |
| this.Fkuth | cJ | `this, mr.clS(nArray3) /* "Only For SlotsÔÇŽ` Ôćĺ .WE(false) | 383 | see 00-framework.md [inferred] |
| this.EqPct | cz | `this, mr.clS(new int[]{(int)83, (int)108ÔÇŽ`  | 384 | see 00-framework.md [inferred] |
| this.XIgqS | cJ | `this, mr.clS(nArray4) /* "Disable If In ÔÇŽ` Ôćĺ .WE(false) | 406 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (4 refs)

- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.Items`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.Items`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Target Margin" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fJ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
