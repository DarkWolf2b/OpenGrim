# Skin Protect (sixtwo.fN)

- Registry: `sixtwo.fN|Skin Protect|Hides real player skin|key=142|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fN.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 142, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~41 native tokens vs ~30 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Hides real player skin

## Setting names (decrypted)

- `Custom` Ôćĺ **Custom**
- `Defaults` Ôćĺ **Defaults**
- `Other Players` Ôćĺ **Other Players**
- `Other Players Skin` Ôćĺ **Other Players Skin**
- `Other Skin Source` Ôćĺ **Other Skin Source**
- `Other Texture URL` Ôćĺ **Other Texture URL**
- `Own Default Skin` Ôćĺ **Own Default Skin**
- `Own Skin` Ôćĺ **Own Skin**
- `Own Skin Source` Ôćĺ **Own Skin Source**
- `Protect` Ôćĺ **Protect**
- `Texture URL` Ôćĺ **Texture URL**

## Structural findings

### Settings (11 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.TclUV | cv | `this, mr.clS(nArray) /* "Protect" */`  | 79 | see 00-framework.md [inferred] |
| this.bHviN | cw | `this.TclUV, mr.clS(nArray2) /* "Own SkinÔÇŽ` Ôćĺ .Tz() | 89 | see 00-framework.md [inferred] |
| this.pWupw | cw | `this.TclUV, mr.clS(nArray3) /* "Other PlÔÇŽ` Ôćĺ .Tz() | 104 | see 00-framework.md [inferred] |
| this.xuNWw | ct | `this, mr.clS(nArray4) /* "Own Skin SourcÔÇŽ`  | 121 | see 00-framework.md [inferred] |
| this.DPswU | cu | `this.xuNWw, mr.clS(nArray5) /* "DefaultsÔÇŽ` Ôćĺ .SY() | 131 | see 00-framework.md [inferred] |
| this.YESwS | cu | `this.xuNWw, mr.clS(nArray6) /* "Custom" ÔÇŽ`  | 139 | see 00-framework.md [inferred] |
| this.NYWkc | ct | `this, mr.clS(nArray7) /* "Own Default SkÔÇŽ`  | 157 | see 00-framework.md [inferred] |
| this.BMcCi | ct | `this, mr.clS(nArray8) /* "Other Players ÔÇŽ`  | 177 | see 00-framework.md [inferred] |
| this.iWgvu | ct | `this, mr.clS(nArray9) /* "Other Skin SouÔÇŽ`  | 196 | see 00-framework.md [inferred] |
| this.lprwR | cu | `this.iWgvu, mr.clS(nArray10) /* "DefaultÔÇŽ` Ôćĺ .SY() | 206 | see 00-framework.md [inferred] |
| this.smvRE | cu | `this.iWgvu, mr.clS(nArray11) /* "Custom"ÔÇŽ`  | 214 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (5 refs)

- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.entity.player.SkinTextures`
- `net.minecraft.util.AssetInfo`
- `net.minecraft.util.AssetInfo$TextureAsset`
- `net.minecraft.util.Identifier`

### Other imports of interest

- `java.util.List`
- `java.util.Map`
- `net.minecraft.client.network.AbstractClientPlayerEntity`
- `net.minecraft.entity.player.SkinTextures`
- `net.minecraft.util.AssetInfo`
- `net.minecraft.util.Identifier`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Skin Protect" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fN.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
