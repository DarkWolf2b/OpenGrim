# Name Protect (sixtwo.fS)

- Registry: `sixtwo.fS|Name Protect|Hides real player name|key=106|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fS.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 106, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~21 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Hides real player name

## Setting names (decrypted)

- `Friends` → **Friends**
- `Friends Name` → **Friends Name**
- `Protect` → **Protect**
- `Server` → **Server**
- `Server Name` → **Server Name**

## Structural findings

### Settings (4 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.lHFev | cv | `this, mr.clS(nArray) /* "Protect" */`  | 93 | see 00-framework.md [inferred] |
| this.JniNV | cw | `this.lHFev, mr.clS(new int[]{(int)78, (i…` → .Tz() | 94 | see 00-framework.md [inferred] |
| this.serPq | cw | `this.lHFev, mr.clS(nArray2) /* "Friends"…`  | 103 | see 00-framework.md [inferred] |
| this.VNukw | cw | `this.lHFev, mr.clS(nArray3) /* "Server" …`  | 111 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (7 refs)

- `net.minecraft.client.font.TextRenderer`
- `net.minecraft.scoreboard.ScoreboardEntry`
- `net.minecraft.text.MutableText`
- `net.minecraft.text.StringVisitable`
- `net.minecraft.text.StringVisitable$StyledVisitor`
- `net.minecraft.text.Style`
- `net.minecraft.text.Text`

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.Comparator`
- `java.util.HashMap`
- `java.util.Iterator`
- `java.util.List`
- `java.util.Map`
- `java.util.Optional`
- `java.util.function.BiConsumer`
- `java.util.function.IntConsumer`
- `java.util.function.IntFunction`
- `java.util.regex.Pattern`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`
- `net.minecraft.client.font.TextRenderer`
- `net.minecraft.scoreboard.ScoreboardEntry`
- `net.minecraft.text.MutableText`
- `net.minecraft.text.StringVisitable`
- `net.minecraft.text.Style`
- `net.minecraft.text.Text`
- `org.apache.commons.lang3.mutable.MutableInt`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Name Protect" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fS.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
