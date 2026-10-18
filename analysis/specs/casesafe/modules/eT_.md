# Shield Drain (sixtwo.eT)

- Registry: `sixtwo.eT|Shield Drain|Spams attacks at enemy shield to break it|key=156|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eT.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 156, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~10 native tokens vs ~10 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Spams attacks at enemy shield to break it

## Setting names (decrypted)

- `Blatant` Ôćĺ **Blatant**
- `Click Mode` Ôćĺ **Click Mode**
- `Hit Per Tick` Ôćĺ **Hit Per Tick**
- `Min Fall Distance` Ôćĺ **Min Fall Distance**
- `Vanilla` Ôćĺ **Vanilla**

## Structural findings

### Settings (3 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.wSXQh | ct | `this, mr.clS(var10004) /* "Click Mode" *ÔÇŽ`  | 56 | see 00-framework.md [inferred] |
| this.uAaOS | cu | `var10003, mr.clS(var10004) /* "Vanilla" ÔÇŽ`  | 66 | see 00-framework.md [inferred] |
| this.mRyFn | cu | `var10003, mr.clS(var10004) /* "Blatant" ÔÇŽ`  | 76 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.entity.player.PlayerEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.player.PlayerEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Shield Drain" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eT.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
