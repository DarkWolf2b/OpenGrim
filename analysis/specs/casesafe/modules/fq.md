# Hitbox (sixtwo.fq)

- Registry: `sixtwo.fq|Hitbox|Visible version of hitboxes|key=4|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fq.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 4, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~39 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Visible version of hitboxes

## Setting names (decrypted)

- `Disable If Holding Cobweb` Ôćĺ **Disable If Holding Cobweb**
- `Height` Ôćĺ **Height**
- `Ignore Friends` Ôćĺ **Ignore Friends**
- `Invisible` Ôćĺ **Invisible**
- `Only For Slots` Ôćĺ **Only For Slots**
- `Retry Timeout` Ôćĺ **Retry Timeout**
- `Silent` Ôćĺ **Silent**
- `Static Height` Ôćĺ **Static Height**
- `Vanilla` Ôćĺ **Vanilla**
- `Visible` Ôćĺ **Visible**

## Structural findings

### Settings (10 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.meQED | ct | `this, mr.clS(new int[]{(int)77, (int)111ÔÇŽ`  | 98 | see 00-framework.md [inferred] |
| this.ufdaw | cu | `this.meQED, mr.clS(nArray) /* "Vanilla" ÔÇŽ` Ôćĺ .SY() | 107 | see 00-framework.md [inferred] |
| this.zpLUV | cu | `this.meQED, mr.clS(nArray2) /* "Silent" ÔÇŽ`  | 115 | see 00-framework.md [inferred] |
| this.sHsoL | cJ | `this, mr.clS(nArray4) /* "Ignore FriendsÔÇŽ` Ôćĺ .WE(false) | 140 | see 00-framework.md [inferred] |
| this.QSPxG | cJ | `this, mr.clS(nArray5) /* "Disable If HolÔÇŽ` Ôćĺ .WE(false) | 167 | see 00-framework.md [inferred] |
| this.bLnpl | cJ | `this, mr.clS(nArray6) /* "Only For SlotsÔÇŽ` Ôćĺ .WE(false) | 183 | see 00-framework.md [inferred] |
| this.aucRP | cz | `this, mr.clS(new int[]{(int)83, (int)108ÔÇŽ`  | 184 | see 00-framework.md [inferred] |
| this.mEZCb | cJ | `this, mr.clS(nArray7) /* "Invisible" */` Ôćĺ .WE(false) | 195 | see 00-framework.md [inferred] |
| this.ZCQrO | cJ | `this, mr.clS(nArray8) /* "Visible" */` Ôćĺ .WE(false) | 204 | see 00-framework.md [inferred] |
| this.fylmP | cJ | `this, mr.clS(nArray10) /* "Static HeightÔÇŽ` Ôćĺ .WE(false) | 234 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (12 refs)

- `net.minecraft.entity.Entity`
- `net.minecraft.entity.EntityDimensions`
- `net.minecraft.entity.EntityPose`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.Items`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.hit.EntityHitResult`
- `net.minecraft.util.hit.HitResult`
- `net.minecraft.util.hit.HitResult$Type`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.security.Key`
- `java.util.HashMap`
- `java.util.Map`
- `java.util.Optional`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.EntityDimensions`
- `net.minecraft.entity.EntityPose`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.entity.player.PlayerEntity`
- `net.minecraft.item.Items`
- `net.minecraft.util.hit.BlockHitResult`
- `net.minecraft.util.hit.EntityHitResult`
- `net.minecraft.util.hit.HitResult`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Hitbox" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fq.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
