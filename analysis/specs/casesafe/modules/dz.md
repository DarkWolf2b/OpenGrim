# Target ESP (sixtwo.dz)

- Registry: `sixtwo.dz|Target ESP|Marks the active target|key=83|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dz.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 83, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~20 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Marks the active target

## Setting names (decrypted)

- `Bloom Amount` Ôćĺ **Bloom Amount**
- `Circle` Ôćĺ **Circle**
- `Crystals` Ôćĺ **Crystals**
- `Ghosts` Ôćĺ **Ghosts**
- `Hurt Animation` Ôćĺ **Hurt Animation**
- `Ignore Walls` Ôćĺ **Ignore Walls**

## Structural findings

### Settings (9 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.rPpMG | ct | `this, mr.clS(new int[]{(int)77, (int)111ÔÇŽ`  | 108 | see 00-framework.md [inferred] |
| this.daQhQ | cu | `this.rPpMG, mr.clS(nArray) /* "Circle" *ÔÇŽ`  | 116 | see 00-framework.md [inferred] |
| this.elvSh | cu | `this.rPpMG, mr.clS(new int[]{(int)83, (iÔÇŽ`  | 117 | see 00-framework.md [inferred] |
| this.VIkzT | cu | `this.rPpMG, mr.clS(nArray2) /* "Ghosts" ÔÇŽ`  | 125 | see 00-framework.md [inferred] |
| this.APstA | cu | `this.rPpMG, mr.clS(nArray3) /* "CrystalsÔÇŽ`  | 135 | see 00-framework.md [inferred] |
| this.zfESg | cJ | `this, mr.clS(new int[]{(int)76, (int)111ÔÇŽ` Ôćĺ .WE(true) | 137 | see 00-framework.md [inferred] |
| this.fGOOi | cJ | `this, mr.clS(nArray4) /* "Ignore Walls" ÔÇŽ` Ôćĺ .WE(false) | 151 | see 00-framework.md [inferred] |
| this.slRcN | cJ | `this, mr.clS(new int[]{(int)66, (int)108ÔÇŽ` Ôćĺ .WE(true) | 152 | see 00-framework.md [inferred] |
| this.ewNLk | cJ | `this, mr.clS(nArray6) /* "Hurt AnimationÔÇŽ` Ôćĺ .WE(false) | 182 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (5 refs)

- `net.minecraft.client.texture.AbstractTexture`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
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
- `net.minecraft.client.texture.AbstractTexture`
- `net.minecraft.client.util.math.MatrixStack`
- `net.minecraft.entity.Entity`
- `net.minecraft.entity.LivingEntity`
- `net.minecraft.util.math.Vec3d`
- `org.joml.Quaternionf`
- `org.joml.Quaternionfc`
- `org.joml.Vector3f`
- `org.joml.Vector3fc`

### Keybind usage

2 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Target ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dz.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
