# Sound ESP (sixtwo.da)

- Registry: `sixtwo.da|Sound ESP|Highlights sounds|key=85|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/da.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 85, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~12 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Highlights sounds

## Setting names (decrypted)

- `Max Distance` Ôćĺ **Max Distance**
- `Quantity Limit` Ôćĺ **Quantity Limit**
- `Time Before Disappear` Ôćĺ **Time Before Disappear**

## Structural findings

### Settings (0 constructed)

No direct settings construction visible (may inherit from superclass or be native-built).

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (2 refs)

- `net.minecraft.client.sound.SoundInstance`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.Iterator`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.sound.SoundInstance`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Sound ESP" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id da.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
