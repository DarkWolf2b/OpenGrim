# Hit Particles (sixtwo.dc)

- Registry: `sixtwo.dc|Hit Particles|Renders particles on hit|key=90|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dc.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 90, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~0 native tokens vs ~11 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Renders particles on hit

## Setting names (decrypted)

- `Amount` Ôćĺ **Amount**
- `Clouds` Ôćĺ **Clouds**
- `Diamonds` Ôćĺ **Diamonds**
- `Hearts` Ôćĺ **Hearts**
- `Only Self` Ôćĺ **Only Self**
- `Particles` Ôćĺ **Particles**
- `Physics` Ôćĺ **Physics**
- `Rotation Angle` Ôćĺ **Rotation Angle**
- `Rotation Speed` Ôćĺ **Rotation Speed**
- `Snowflakes` Ôćĺ **Snowflakes**
- `Thunders` Ôćĺ **Thunders**
- `Time Before Disappear` Ôćĺ **Time Before Disappear**

## Structural findings

### Settings (18 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.ywyjh | ct | `this, mr.clS(nArray) /* "Particles" */`  | 88 | see 00-framework.md [inferred] |
| this.kirnI | cu | `this.ywyjh, mr.clS(new int[]{(int)83, (iÔÇŽ`  | 89 | see 00-framework.md [inferred] |
| this.yDJQw | cu | `this.ywyjh, mr.clS(nArray2) /* "SnowflakÔÇŽ`  | 101 | see 00-framework.md [inferred] |
| this.NaIhp | cu | `this.ywyjh, mr.clS(new int[]{(int)71, (iÔÇŽ`  | 102 | see 00-framework.md [inferred] |
| this.yMEZd | cu | `this.ywyjh, mr.clS(nArray3) /* "Hearts" ÔÇŽ`  | 110 | see 00-framework.md [inferred] |
| this.loDyv | cu | `this.ywyjh, mr.clS(nArray4) /* "DiamondsÔÇŽ`  | 120 | see 00-framework.md [inferred] |
| this.INfLO | cu | `this.ywyjh, mr.clS(nArray5) /* "ThundersÔÇŽ`  | 130 | see 00-framework.md [inferred] |
| this.kXJCI | cu | `this.ywyjh, mr.clS(new int[]{(int)77, (iÔÇŽ`  | 131 | see 00-framework.md [inferred] |
| this.QDJQf | cu | `this.ywyjh, mr.clS(nArray6) /* "Clouds" ÔÇŽ`  | 139 | see 00-framework.md [inferred] |
| this.usOjR | ct | `this, mr.clS(nArray7) /* "Physics" */`  | 149 | see 00-framework.md [inferred] |
| this.aAYug | cu | `this.usOjR, mr.clS(new int[]{(int)70, (iÔÇŽ`  | 150 | see 00-framework.md [inferred] |
| this.fcvsC | cu | `this.usOjR, mr.clS(new int[]{(int)82, (iÔÇŽ`  | 151 | see 00-framework.md [inferred] |
| this.dWMfZ | cu | `this.usOjR, mr.clS(new int[]{(int)66, (iÔÇŽ`  | 152 | see 00-framework.md [inferred] |
| this.fkost | cu | `this.usOjR, mr.clS(new int[]{(int)70, (iÔÇŽ`  | 153 | see 00-framework.md [inferred] |
| this.gyzDI | cJ | `this, mr.clS(nArray10) /* "Only Self" */` Ôćĺ .WE(false) | 197 | see 00-framework.md [inferred] |
| this.rGtqd | cA | `this, mr.clS(nArray11) /* "Rotation AnglÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(360.0).UI(0.0, 180.0).UH((String)((Object)" deg")) | 213 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.MrfWt | cA | `this, mr.clS(nArray12) /* "Rotation SpeeÔÇŽ` Ôćĺ .UG(1.0).UE(0.0).UF(60.0).UI(0.0, 60.0).UH((String)((Object)" deg")) | 229 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.zbbPv | cJ | `this, mr.clS(new int[]{(int)71, (int)108ÔÇŽ` Ôćĺ .WE(true) | 230 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.security.Key`
- `java.util.ArrayList`
- `java.util.HashMap`
- `java.util.List`
- `java.util.Map`
- `javax.crypto.Cipher`
- `javax.crypto.SecretKey`
- `javax.crypto.SecretKeyFactory`
- `javax.crypto.spec.DESKeySpec`
- `javax.crypto.spec.IvParameterSpec`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Hit Particles" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dc.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
