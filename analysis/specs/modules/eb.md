# Chest Stealer (sixtwo.eb)

- Registry: `sixtwo.eb|Chest Stealer|Automatically steals loot from the chest|key=68|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/eb.java` (CFR, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 68, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~13 native tokens vs ~11 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Automatically steals loot from the chest

## Setting names (decrypted)

- `Check Durability` → **Check Durability**
- `Check Storage Title` → **Check Storage Title**
- `Contains` → **Contains**
- `Disabled` → **Disabled**
- `Equals` → **Equals**
- `Items To Steal` → **Items To Steal**
- `Minimum Durability` → **Minimum Durability**
- `Selected` → **Selected**
- `Steal From` → **Steal From**
- `Storage Title` → **Storage Title**

## Structural findings

### Settings (12 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.XMBJA | cJ | `this, mr.clS(new int[]{(int)72, (int)111…` → .WE(false) | 59 | see 00-framework.md [inferred] |
| this.hXOHM | ct | `this, mr.clS(nArray) /* "Check Storage T…`  | 80 | see 00-framework.md [inferred] |
| this.oXJyj | cu | `this.hXOHM, mr.clS(nArray2) /* "Disabled…`  | 90 | see 00-framework.md [inferred] |
| this.VEKBb | cu | `this.hXOHM, mr.clS(nArray3) /* "Equals" …`  | 98 | see 00-framework.md [inferred] |
| this.oKEJe | cu | `this.hXOHM, mr.clS(nArray4) /* "Contains…`  | 108 | see 00-framework.md [inferred] |
| this.CyMjO | cJ | `this, mr.clS(nArray6) /* "Check Durabili…` → .WE(false) | 141 | see 00-framework.md [inferred] |
| this.rcYHI | cv | `this, mr.clS(nArray8) /* "Steal From" */`  | 173 | see 00-framework.md [inferred] |
| this.SuQfI | cw | `this.rcYHI, mr.clS(new int[]{(int)67, (i…` → .Tz() | 174 | see 00-framework.md [inferred] |
| this.BALtD | cw | `this.rcYHI, mr.clS(new int[]{(int)83, (i…` → .Tz() | 175 | see 00-framework.md [inferred] |
| this.ZDMzF | ct | `this, mr.clS(nArray9) /* "Items To Steal…`  | 191 | see 00-framework.md [inferred] |
| this.eTBAx | cu | `this.ZDMzF, mr.clS(new int[]{(int)65, (i…`  | 192 | see 00-framework.md [inferred] |
| this.dpNkl | cu | `this.ZDMzF, mr.clS(nArray10) /* "Selecte…`  | 202 | see 00-framework.md [inferred] |

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

- Implement "Chest Stealer" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id eb.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
