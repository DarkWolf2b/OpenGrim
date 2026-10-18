# Hit Sounds (sixtwo.dQ)

- Registry: `sixtwo.dQ|Hit Sounds|Plays sound after hit|key=63|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/dQ.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 63, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~13 native tokens vs ~12 method decls ÔÇö behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Plays sound after hit

## Setting names (decrypted)

- `Cancel Original Sound` Ôćĺ **Cancel Original Sound**
- `Custom` Ôćĺ **Custom**
- `Hit Sound` Ôćĺ **Hit Sound**
- `Sound URL` Ôćĺ **Sound URL**
- `Sound Volume` Ôćĺ **Sound Volume**
- `Synchronized` Ôćĺ **Synchronized**
- `Volume` Ôćĺ **Volume**

## Structural findings

### Settings (12 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.rccnf | ct | `this, mr.clS(nArray) /* "Hit Sound" */`  | 69 | see 00-framework.md [inferred] |
| this.qeNwl | cu | `this.rccnf, mr.clS(nArray2) /* "Custom" ÔÇŽ`  | 77 | see 00-framework.md [inferred] |
| this.LokgE | cu | `this.rccnf, mr.clS(new int[]{(int)79, (iÔÇŽ` Ôćĺ .SY() | 78 | see 00-framework.md [inferred] |
| this.DVJLX | cu | `this.rccnf, mr.clS(new int[]{(int)84, (iÔÇŽ`  | 79 | see 00-framework.md [inferred] |
| this.gRGas | cu | `this.rccnf, mr.clS(new int[]{(int)84, (iÔÇŽ`  | 80 | see 00-framework.md [inferred] |
| this.sNObT | cu | `this.rccnf, mr.clS(new int[]{(int)70, (iÔÇŽ`  | 81 | see 00-framework.md [inferred] |
| this.ulolB | cu | `this.rccnf, mr.clS(new int[]{(int)70, (iÔÇŽ`  | 82 | see 00-framework.md [inferred] |
| this.MEkaw | cu | `this.rccnf, mr.clS(new int[]{(int)83, (iÔÇŽ`  | 83 | see 00-framework.md [inferred] |
| this.imJSo | ct | `this, mr.clS(nArray3) /* "Volume" */` Ôćĺ .SO(1) | 91 | see 00-framework.md [inferred] |
| this.LOyUV | cu | `this.imJSo, mr.clS(nArray4) /* "SynchronÔÇŽ`  | 105 | see 00-framework.md [inferred] |
| this.wWQPU | cu | `this.imJSo, mr.clS(nArray5) /* "Custom" ÔÇŽ`  | 113 | see 00-framework.md [inferred] |
| this.sfyvC | cJ | `this, mr.clS(nArray7) /* "Cancel OriginaÔÇŽ` Ôćĺ .WE(true) | 150 | see 00-framework.md [inferred] |

### Event listeners (1 @hG methods)

| method | params | priority | line |
|---|---|---|---|
| aoY | `gI var1` | priority=mw.LOWEST | 190 |

### Minecraft API surface (0 refs)

No direct net.minecraft references (likely all native).

### Other imports of interest

- `java.util.Map`
- `java.util.concurrent.CompletableFuture`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Hit Sounds" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id dQ.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown ÔÇö designer discretion allowed, document divergence in PARITY.md.
