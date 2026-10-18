# Criticals (sixtwo.fu)

- Registry: `sixtwo.fu|Criticals|Makes it easier to crit|key=135|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fu.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 135, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~19 native tokens vs ~19 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Makes it easier to crit

## Setting names (decrypted)

- `Custom` → **Custom**
- `Full 1` → **Full 1**
- `Full 2` → **Full 2**
- `Full 3` → **Full 3**
- `Full 4` → **Full 4**
- `Full 5` → **Full 5**
- `Ground 1` → **Ground 1**
- `Ground 2` → **Ground 2**
- `Ground 3` → **Ground 3**
- `Ground 4` → **Ground 4**
- `Ground 5` → **Ground 5**
- `Lag Delay` → **Lag Delay**
- `Offset 1` → **Offset 1**
- `Offset 2` → **Offset 2**
- `Offset 3` → **Offset 3**
- `Offset 4` → **Offset 4**
- `Offset 5` → **Offset 5**
- `Packet` → **Packet**
- `Packet 1` → **Packet 1**
- `Packet 2` → **Packet 2**
- `Packet 3` → **Packet 3**
- `Packet 4` → **Packet 4**
- `Packet 5` → **Packet 5**
- `Send Packet 1` → **Send Packet 1**
- `Send Packet 2` → **Send Packet 2**
- `Send Packet 3` → **Send Packet 3**
- `Send Packet 4` → **Send Packet 4**
- `Send Packet 5` → **Send Packet 5**
- `Vanilla` → **Vanilla**
- `Web Lag` → **Web Lag**

## Structural findings

### Settings (21 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.OZwTl | ct | `
         this,
         mr.clS(
       …`  | 94 | see 00-framework.md [inferred] |
| this.HWcZh | cu | `var10003, mr.clS(var10004) /* "Vanilla" …`  | 114 | see 00-framework.md [inferred] |
| this.hWgcS | cu | `var10003, mr.clS(var10004) /* "Custom" *…`  | 123 | see 00-framework.md [inferred] |
| this.nImvb | cu | `var10003, mr.clS(var10004) /* "Packet" *…`  | 132 | see 00-framework.md [inferred] |
| this.oExgz | cu | `var10003, mr.clS(var10004) /* "Web Lag" …` → .SY() | 142 | see 00-framework.md [inferred] |
| this.LaROb | cA | `this, mr.clS(var10004) /* "Lag Delay" */` → .UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH(" ms") | 153 | numeric (cA-style: UG=step, UE=min, UF=max, UI=default, UH=suffix) [inferred] |
| this.PmsBY | cJ | `mr.clS(var6) /* "Send Packet 1" */` → .WE(true) | 168 | see 00-framework.md [inferred] |
| this.BkSRE | cJ | `mr.clS(var7) /* "Ground 1" */` → .WE(true) | 178 | see 00-framework.md [inferred] |
| this.RLDCA | cJ | `mr.clS(var8) /* "Full 1" */` → .WE(true) | 186 | see 00-framework.md [inferred] |
| this.cKQhx | cJ | `mr.clS(var10) /* "Send Packet 2" */` → .WE(true) | 221 | see 00-framework.md [inferred] |
| this.KnAho | cJ | `mr.clS(var11) /* "Ground 2" */` → .WE(false) | 231 | see 00-framework.md [inferred] |
| this.TOKrl | cJ | `mr.clS(var12) /* "Full 2" */` → .WE(true) | 239 | see 00-framework.md [inferred] |
| this.FxYCf | cJ | `mr.clS(var14) /* "Send Packet 3" */` → .WE(true) | 274 | see 00-framework.md [inferred] |
| this.iIlaN | cJ | `mr.clS(var15) /* "Ground 3" */` → .WE(false) | 284 | see 00-framework.md [inferred] |
| this.LWIOL | cJ | `mr.clS(var16) /* "Full 3" */` → .WE(false) | 292 | see 00-framework.md [inferred] |
| this.TnuIy | cJ | `mr.clS(var18) /* "Send Packet 4" */` → .WE(false) | 327 | see 00-framework.md [inferred] |
| this.yYAVi | cJ | `mr.clS(var19) /* "Ground 4" */` → .WE(false) | 337 | see 00-framework.md [inferred] |
| this.Vzyof | cJ | `mr.clS(var20) /* "Full 4" */` → .WE(false) | 345 | see 00-framework.md [inferred] |
| this.NGzOC | cJ | `mr.clS(var22) /* "Send Packet 5" */` → .WE(false) | 380 | see 00-framework.md [inferred] |
| this.IiAXY | cJ | `mr.clS(var23) /* "Ground 5" */` → .WE(false) | 390 | see 00-framework.md [inferred] |
| this.xaWdH | cJ | `mr.clS(var24) /* "Full 5" */` → .WE(false) | 398 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.network.packet.Packet`

### Other imports of interest

- `java.util.Map`
- `java.util.Queue`
- `java.util.concurrent.ConcurrentLinkedQueue`
- `net.minecraft.network.packet.Packet`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

- `net.minecraft.network.packet.Packet`

## Port notes (dev.opengrim)

- Implement "Criticals" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fu.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
