# Blink (sixtwo.ey)

- Registry: `sixtwo.ey|Blink|Cancels sending motion packets|key=45|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/ey.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 45, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~15 native tokens vs ~15 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Cancels sending motion packets

## Setting names (decrypted)

- `Auto Disable` Ôćĺ **Auto Disable**
- `Cancel Key` Ôćĺ **Cancel Key**
- `Disable Packets` Ôćĺ **Disable Packets**
- `Disable on Velocity` Ôćĺ **Disable on Velocity**
- `Pulse Packets` Ôćĺ **Pulse Packets**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.sTmtd | cJ | `this, mr.clS(var10004) /* "Disable on VeÔÇŽ` Ôćĺ .WE(false) | 62 | see 00-framework.md [inferred] |
| this.GFFOu | cJ | `this, mr.clS(var10004) /* "Auto Disable"ÔÇŽ` Ôćĺ .WE(false) | 104 | see 00-framework.md [inferred] |
| this.nEXgW | cD | `this, mr.clS(var10004) /* "Cancel Key" *ÔÇŽ` Ôćĺ .VO(-999) | 133 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (3 refs)

- `net.minecraft.network.packet.Packet`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Other imports of interest

- `java.util.Map`
- `java.util.Queue`
- `java.util.concurrent.ConcurrentLinkedQueue`
- `java.util.concurrent.atomic.AtomicBoolean`
- `net.minecraft.network.packet.Packet`
- `net.minecraft.util.math.Box`
- `net.minecraft.util.math.Vec3d`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`

## Port notes (dev.opengrim)

- Implement "Blink" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id ey.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
