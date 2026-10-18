# Entity ESP (sixtwo.ds)

- Registry: `sixtwo.ds|Entity ESP|Draws box around entities|key=80|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ds.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 80, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~6 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Draws box around entities

## Setting names (decrypted)

- `Entities` Ôćĺ **Entities**
- `Fill Color` Ôćĺ **Fill Color**
- `Filled` Ôćĺ **Filled**
- `Friend Fill Color` Ôćĺ **Friend Fill Color**
- `Friend Outline Color` Ôćĺ **Friend Outline Color**
- `Hitbox` Ôćĺ **Hitbox**
- `Outline Color` Ôćĺ **Outline Color**

## Structural findings

### Settings (5 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.RIxRc | cF | `this, mr.clS(nArray) /* "Entities" */` Ôćĺ .VS(jg$tJ.OCdZM).VT(EntityType.ITEM, EntityType.TNT_MINECART) | 86 | see 00-framework.md [inferred] |
| this.NgLhx | cJ | `this, mr.clS(nArray2) /* "Filled" */` Ôćĺ .WE(false) | 94 | see 00-framework.md [inferred] |
| this.Tkevx | ct | `this, mr.clS(new int[]{(int)77, (int)111ÔÇŽ` Ôćĺ .SO(1) | 163 | see 00-framework.md [inferred] |
| this.Bcsfp | cu | `this.Tkevx, mr.clS(new int[]{(int)77, (iÔÇŽ`  | 164 | see 00-framework.md [inferred] |
| this.omxYT | cu | `this.Tkevx, mr.clS(nArray7) /* "Hitbox" ÔÇŽ`  | 172 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (6 refs)

- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.EntityType`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.EntityType`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Entity ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ds.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
