# Spammer (sixtwo.dE)

- Registry: `sixtwo.dE|Spammer|Spams specified messages in chat|key=146|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dE.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 146, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~27 native tokens vs ~23 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Spams specified messages in chat

## Setting names (decrypted)

- `Auto Split Messages` Ôćĺ **Auto Split Messages**
- `Bypass Anti Spam` Ôćĺ **Bypass Anti Spam**
- `Disable On Disconnect` Ôćĺ **Disable On Disconnect**
- `Disable On Leave` Ôćĺ **Disable On Leave**
- `Include Uppercase Characters` Ôćĺ **Include Uppercase Characters**
- `Length` Ôćĺ **Length**
- `Message 1` Ôćĺ **Message 1**
- `Message 2` Ôćĺ **Message 2**
- `Message 3` Ôćĺ **Message 3**
- `Message 4` Ôćĺ **Message 4**
- `Message 5` Ôćĺ **Message 5**
- `Message Count` Ôćĺ **Message Count**
- `Randomize` Ôćĺ **Randomize**
- `Split Delay` Ôćĺ **Split Delay**
- `Split Length` Ôćĺ **Split Length**

## Structural findings

### Settings (6 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.KKQQG | cJ | `this, mr.clS(nArray8) /* "Disable On LeaÔÇŽ` Ôćĺ .WE(true) | 153 | see 00-framework.md [inferred] |
| this.dCTpZ | cJ | `this, mr.clS(nArray9) /* "Disable On DisÔÇŽ` Ôćĺ .WE(true) | 176 | see 00-framework.md [inferred] |
| this.jNuzP | cJ | `this, mr.clS(nArray10) /* "Randomize" */` Ôćĺ .WE(false) | 187 | see 00-framework.md [inferred] |
| this.AWqkh | cJ | `this, mr.clS(nArray11) /* "Auto Split MeÔÇŽ` Ôćĺ .WE(false) | 208 | see 00-framework.md [inferred] |
| this.odfuN | cJ | `this, mr.clS(nArray14) /* "Bypass Anti SÔÇŽ` Ôćĺ .WE(false) | 253 | see 00-framework.md [inferred] |
| this.JoiPl | cJ | `this, mr.clS(nArray15) /* "Include UpperÔÇŽ` Ôćĺ .WE(true) | 283 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.util.List`
- `java.util.Map`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Spammer" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dE.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
