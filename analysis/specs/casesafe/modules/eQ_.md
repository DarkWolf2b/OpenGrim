# Mace Elytra Target (sixtwo.eQ)

- Registry: `sixtwo.eQ|Mace Elytra Target|Follows target using firework and hits it with mace|key=152|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eQ.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 152, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~31 native tokens vs ~31 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Follows target using firework and hits it with mace

## Setting names (decrypted)

- `Armor Swap` Ôćĺ **Armor Swap**
- `Firework Cooldown` Ôćĺ **Firework Cooldown**
- `Firework Key` Ôćĺ **Firework Key**
- `Firework Use Mode` Ôćĺ **Firework Use Mode**
- `Fly Up For` Ôćĺ **Fly Up For**
- `Follow Distance` Ôćĺ **Follow Distance**
- `Force Smash` Ôćĺ **Force Smash**
- `Hit Mode` Ôćĺ **Hit Mode**
- `On Bind` Ôćĺ **On Bind**

## Structural findings

### Settings (7 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.SSNbc | ct | `this, mr.clS(var10004) /* "Hit Mode" */`  | 106 | see 00-framework.md [inferred] |
| this.PeaJE | cu | `var5, mr.clS(var10005) /* "Armor Swap" *ÔÇŽ`  | 120 | see 00-framework.md [inferred] |
| this.QeZfw | cu | `var6, mr.clS(var10005) /* "Force Smash" ÔÇŽ`  | 134 | see 00-framework.md [inferred] |
| this.dgFao | ct | `this, mr.clS(var10005) /* "Firework Use ÔÇŽ`  | 182 | see 00-framework.md [inferred] |
| this.QVqek | cu | `
         this.dgFao,
         mr.clS(
 ÔÇŽ`  | 183 | see 00-framework.md [inferred] |
| this.ALqGX | cu | `var7, mr.clS(var10005) /* "On Bind" */`  | 203 | see 00-framework.md [inferred] |
| this.zMwsj | cD | `this, mr.clS(var10004) /* "Firework Key"ÔÇŽ` Ôćĺ .VO(-999) | 250 | see 00-framework.md [inferred] |

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

- Implement "Mace Elytra Target" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eQ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
