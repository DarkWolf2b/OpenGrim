# Auto Logout (sixtwo.fI)

- Registry: `sixtwo.fI|Auto Logout|Logouts you from server when player is in distance|key=2|bind=-999` [registry]
- Source: `../../../analysis/decompiled/payload-decrypted/sixtwo/fI.java` (Vineflower, literals folded)
- Superclass: `gg` [structure]
- Keybind: primary key 2, active bind -999 (-999 = unbound) [registry]
- Native coverage: ~14 native tokens vs ~14 method decls — behavior bodies mostly native-blocked; this spec is structural [structure]

## Intended behavior (from registry)

> Logouts you from server when player is in distance

## Setting names (decrypted)

- `Arrows` → **Arrows**
- `Disable On Logout` → **Disable On Logout**
- `Disconnect Message` → **Disconnect Message**
- `Distance` → **Distance**
- `Fish Rods` → **Fish Rods**
- `Ignore Friends` → **Ignore Friends**
- `Invisible` → **Invisible**
- `Logout From` → **Logout From**
- `Logout Key` → **Logout Key**
- `Logout on Key` → **Logout on Key**
- `Pearls` → **Pearls**
- `Potions` → **Potions**
- `Snowballs` → **Snowballs**

## Structural findings

### Settings (11 constructed)

| field | wrapper | builder chain (verbatim) | line | inferred |
|---|---|---|---|---|
| this.ZnFGj | cv | `this, mr.clS(var10004) /* "Logout From" …`  | 60 | see 00-framework.md [inferred] |
| this.btcIN | cw | `var10003, mr.clS(var10004) /* "Pearls" *…` → .Tz() | 69 | see 00-framework.md [inferred] |
| this.aVerA | cw | `var10003, mr.clS(var10004) /* "Snowballs…` → .Tz() | 81 | see 00-framework.md [inferred] |
| this.cGEiM | cw | `var10003, mr.clS(var10004) /* "Arrows" *…` → .Tz() | 90 | see 00-framework.md [inferred] |
| this.iXQno | cw | `var10003, mr.clS(var10004) /* "Fish Rods…` → .Tz() | 102 | see 00-framework.md [inferred] |
| this.xlSxX | cw | `var10003, mr.clS(var10004) /* "Potions" …` → .Tz() | 112 | see 00-framework.md [inferred] |
| this.qrTWi | cJ | `this, mr.clS(var10004) /* "Ignore Friend…` → .WE(true) | 128 | see 00-framework.md [inferred] |
| this.MXFNE | cJ | `this, mr.clS(var10004) /* "Invisible" */` → .WE(false) | 139 | see 00-framework.md [inferred] |
| this.yfLPs | cJ | `this, mr.clS(var10004) /* "Logout on Key…` → .WE(false) | 174 | see 00-framework.md [inferred] |
| this.CLGoi | cD | `this, mr.clS(var10004) /* "Logout Key" *…` → .VO(-999) | 186 | see 00-framework.md [inferred] |
| this.icZIc | cJ | `this, mr.clS(var10004) /* "Disable On Lo…` → .WE(false) | 205 | see 00-framework.md [inferred] |

### Event listeners (0 @hG methods)

None declared in this class.

### Minecraft API surface (1 refs)

- `net.minecraft.entity.projectile.ProjectileEntity`

### Other imports of interest

- `java.util.Map`
- `net.minecraft.entity.projectile.ProjectileEntity`

### Keybind usage

0 `rk` keybind object(s) constructed [structure]

### Network

No packet classes referenced statically (native-blocked if any).

## Port notes (dev.opengrim)

- Implement "Auto Logout" per registry description; settings above give constraint hints (numeric chains are step/min/max/default).
- Category, bind and lifecycle per 00-framework.md; module id fI.
- Native-blocked specifics (exact mode names, messages, thresholds without builders) are unknown — designer discretion allowed, document divergence in PARITY.md.
