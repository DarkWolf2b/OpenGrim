# Batch 26 audit report - audit 2026-10-17

Module: `ee` (Cape) - the single id in `analysis/specs/audit20261017/batch26.txt`.

Registry row re-verified from `analysis/specs/registry.tsv`:
`ee | sixtwo.ee | Cape | Allows to set custom cape | key=73 | bind=-999`
(`key=` = module id 73, `bind=` = keybind -999 = unbound; port: `Module` default bind -999, no
`setBind` needed). Original constructor `gf.aZL(73, false, gh.qBzlZ)` (ee.java:33) - starts
disabled (`bootEnabled()` default false, not overridden) and uses the original's generic
`gh.qBzlZ` category; the port's `ModuleCategory.RENDER` is the rebuild's own per-module
assignment, consistent with the other qBzlZ render modules (Custom FOV / Custom Camera Distance /
Freecam / Anti Invisible).

The class is 1051 lines, of which 140-892 is the DES-protected static block building the 13-entry
preset registry. The behavior surface is small and fully Java-decompiled (no j2cc bodies in ee):
constructor + 4 settings + 3 change callbacks + 1 visibility gate + `arI(gR)` listener + `aaj()`
enable hook + empty `YO()` + 4 accessors + the `arS/arR` tripwire; everything that does the actual
texture work lives in native `qG`/`qE`/`qC` (outside ee).

---

### ee - Cape
post-fix parity: 95% | status: ported | fixed: yes

Fixed (all evidence-cited):

- **Preset table lost its insertion order**: the port stored TDPHW as `Map.ofEntries`, whose
  iteration order is unspecified, while the original is a `LinkedHashMap`
  (`TDPHW = new LinkedHashMap<>()`, ee.java:206) filled by 13 `put`s at ee.java:253/300/347/394/
  441/491/556/606/656/705/757/807/861. `getPresetUrls()` claimed "insertion order" but did not
  provide it. Rebuilt as an unmodifiable `LinkedHashMap` (`Cape.presetUrls()`, same 13 puts in the
  same order).
- **Table content + order re-verified offline**: re-derived the class's own DES kernel key from
  `analysis/decrypted/full-dump.jsonl` (`var11 = 4301960516425646947L ^ runtime-arg = 0x3e2ef0d4a171`
  for the idx=13072 call, matching the handler spec) and decoded the static block's key/value char
  arrays with the 58 recorded `arW` call values. Key/value lengths and partial decodes confirm the
  exact spec table and order: 4/4/4/4/4/6/14/6/6/5/7/6/8 name chars and 38/38/38/38/38/40/47/40/40/
  39/41/40/42 URL chars (2011, 2012, 2013, 2015, 2016, Mojang, Mojang Studios, Mojira, Cobalt,
  Spade, Snowman, Turtle, Birthday); fragments like `????ng ?tu?i?s` (block 7) and `?irt?d??`
  (block 13) pin the positions.
- **"Texture URL" max length not enforced at set time**: the original is `cy.Un(2048)` (ee.java:47;
  bytecode-verified: `cy.Un(int)` sets the max-length field `dVhKN = Math.max(0, n)`, and
  `cy.Up(String)` - the value setter used by the GUI and by config load `SS(JsonElement)` - caps
  the stored value against it); the port truncated on read only, so the stored/displayed value
  could exceed 2048. The setting now caps in `setValue` (SkinProtect.TextSetting precedent) and
  `getTextureUrl()` returns the value directly.
- **Visibility gate was stale at boot and while disabled**: the original wires
  `ZOSxo.Vf(() -> !sxdUz.WF())` (ee.java:117-135), re-evaluated on every GUI draw - so the
  "Texture URL" row is hidden whenever "Use Presets" is on, regardless of module state. The port
  refreshed the flag only in `onTick` (which runs only while enabled), so a boot-disabled Cape
  showed the URL row with Use Presets = on (its default). The gate is now applied at construction
  and from the Use Presets change callback (`BoolSetting.onChange` override, LeverReplace/NoMiss
  precedent).
- **Hide Wings hid the elytra**: the port nulled `SkinTextures.elytra()` when the toggle was on.
  Evidence contradicts this: Hide Wings (`FsBgj`, ee.java:80, `arM()` ee.java:894-896) gates the
  client's cosmetic **wings** FeatureRenderer `qC` (`if (ee2.arM().WF()) return;`, qC.java:396) -
  and that same renderer *also* returns while the player wears an elytra (`getEquippedStack(CHEST)
  .isOf(Items.ELYTRA)`, qC.java:403-405), i.e. wings and elytra are mutually exclusive; the toggle
  never touches the elytra. The elytra nulling was removed (it made worn elytras invisible, a
  vanilla behavior change with no evidence). The setting stays (`hide_wings`, default false) and
  `isHideWings()` is exposed for the (unported) qC consumer.
- **Enable hook missing**: `aaj()` (ee.java:898-920) refreshes the cape immediately on enable
  (trace 2026-10-17: the aaj enter/exit pair spans 218,436 QPC ticks - the native `qG.dam()` blocks
  on its fetch). Added `onEnable()` -> `CapeTextureManager.ensureLoaded(getResolvedCapeUrl())`
  (background fetch, PARITY-documented divergence). `onDisable` stays unoverridden = the empty
  `YO()` (ee.java:1048-1050).
- **Cape could bind an unregistered texture**: the port replaced the cape asset unconditionally,
  but the original renders the custom cape only when `qG.daj(player)` returns a loaded identifier
  (`if (class_29602 == null) return;`, qE.java:182-186) - otherwise the vanilla cape stays. Added
  `CapeTextureManager.hasCape()` (a texture is registered under `opengrim:cape`) as that gate,
  which also reproduces the original's "keep the previous cape while a new fetch is pending/fails".
- **Skin replacement dropped other modules' changes**: the handler rebuilt the record from
  `event.skin()`, discarding a replacement already applied (e.g. SkinProtect's body swap, which
  explicitly composes with Cape). It now composes from `event.replacement()` when present
  (SkinProtect.java:114-117 precedent).

Verified 1:1 (no change needed):

- Settings order/defaults (ee.java:30-80): "Texture URL" `cy .Un(2048).Up("")` -> `StringSetting
  ("texture_url", "")`; "Use Presets" `cJ .WE(true)` -> `BoolSetting("use_presets", true)`;
  "Preset" `ct` -> `ModeSetting("preset", <13 options>, "2011")`; "Hide Wings" `cJ .WE(false)` ->
  `BoolSetting("hide_wings", false)`. Registration order = construction order.
- Preset default: no `.SO()`/`.SY()` anywhere in ee, and `ct`'s selected index `kErPl` defaults to
  0 (`ct.SL/SM` = `kwiHL.get(kErPl)`, bytecode-verified) -> the first option "2011" is selected.
  The 13 `cu` children are created from `TDPHW.keySet().toArray()` (ee.java:81-102), so their
  order is the map order.
- Change-callback semantics (ee.java:104-116): URL change refreshes only for a URL-valid value
  (`jd.bAm`, native [N]), Use Presets and Preset changes refresh unconditionally - all three are
  covered by the idempotent per-tick `ensureLoaded` poll plus the enable refresh.
- `arS()/arR()` tripwire (ee.java:938-945, 1044-1046): always null in practice - trace 2026-10-17
  `digests/ee.txt`: `arS` entered 46x, numeric exit 0 in all 46 samples; not ported (obfuscation
  machinery only).
- Accessors `arM/arJ/arK/arL` (ee.java:894-896, 972-975, 986-988, 1040-1042) -> `isHideWings/
  getTextureUrl/isUsePresets/getPreset`; no keybind (bind -999), GUI toggle only.

Remaining gaps:

- [U] `gR` event identity/firing point (ee.java:947-971): bare `hH` subclass, dispatched from the
  native layer (no Java `new gR()` anywhere in the payload; the native handler inventory only
  lists `fT.aXp(Lsixtwo/gR;)V`). Never fired in the 2026-10-17 trace (0 `arI` entries; also absent
  from the frame captures). The rebuild refreshes per tick while enabled - capture condition: any
  session where a cape refresh is observable (enable Cape, change the preset, watch `sixtwo/ee.arI`
  fire in a by-class trace).
- [G] Original refresh cadence: ee's listener + change callbacks are registered in the constructor
  (`hF.bdI(this)`, ee.java:136) and never unregistered (empty `YO`), so the original re-runs
  `qG.dam()` even while the module is disabled. The port refreshes only while enabled (plus on
  enable); the visible cape application is gated by `ee2.bag()` (qE.java:161) in both, so the only
  difference is texture-cache warmth while disabled.
- [N] `jd.bAm(String)` URL validator (ee.java:108) is native - replaced by "fetch failure keeps the
  previous cape, retry on the 250 ms cooldown" (PARITY divergences, unchanged).
- [N] The texture pipeline itself: `qG.dam()` / `qG.daj(AbstractClientPlayerEntity)` /
  `qG.dal()` (native + unobtainable Vineflower bodies, qG.java:72-296) and the `qE` custom-cape
  FeatureRenderer. Rebuilt as `CapeTextureManager` + `SkinTexturesResolveEvent` (background
  download instead of the original's blocking fetch; vanilla cape until loaded). Per-player capes
  (`qG.dak(name)`, other players) belong to qG's own service, not ee, and are not ported.
- [U] `qC` (wings FeatureRenderer) is not ported, so "Hide Wings" currently has no visible effect;
  the toggle is queryable via `isHideWings()`. Whether qE's custom cape replaces or layers over the
  vanilla cape could not be resolved (its render-state flags `class_100552.field_53333/field_53532`
  have no yarn field mapping in the repo corpus).

evidence:

- analysis/decompiled/payload-decrypted/sixtwo/ee.java:30-138 (constructor: settings, cu loop,
  callbacks, `hF.bdI(this)` at :136), 141-892 (static block; LinkedHashMap at :206, puts at
  :253-861), 894-896 (arM), 898-920 (aaj), 938-945 (arR/arT), 947-971 (arI), 972-988 (arJ/arV/arK),
  990-1038 (arU DES kernel), 1040-1050 (arL/arS/YO)
- bytecode: `javap -c -p` of analysis/decompiled/jar-casesafe/sixtwo/ee.class (declared class
  verified), ct.class / cu.class (`kErPl` default 0, `SL/SM` read it, `SO/SN` builders), cy.class
  (`Un(int)` max length, `Up(String)` default, `Us()` value), hF_.class (`bdI` = reflective
  `@hG`-handler registration, `bdM` removal, no enabled check)
- analysis/decompiled/payload-cfr/sixtwo/qC.java:387-412 (wings renderer: invisible check, Hide
  Wings gate at :396, elytra check at :403-405, wing texture at :412), qE.java:89-186 (custom-cape
  FeatureRenderer: world gate, `ee2.bag()` at :161, `qG.daj()` at :182, null -> return at :184-186)
- analysis/specs/handlers/ee.md (per-handler roles, DES recovery, 58/58 verified table),
  analysis/specs/modules/ee.md, analysis/specs/registry.tsv (ee row)
- analysis/decrypted/full-dump.jsonl (58 `sixtwo.ee` `arW` entries; key re-solved to
  0x3e2ef0d4a171; static-block char arrays decoded offline 2026-10-17)
- analysis/traces/2026-10-17: digests/ee.txt (arS x46 = 0, aaj/YO x2, arJ/arK/arL x2),
  by-class-casesafe/ee.jsonl (aaj enter 170041587109 -> exit 170041805545), raw/frame1-2.jsonl
  (no gR), classes-by-events.txt
- src/main/java/dev/opengrim/modules/render/Cape.java, CapeTextureManager.java,
  mixin/PlayerListEntryMixin.java, event/impl/SkinTexturesResolveEvent.java,
  modules/utility/SkinProtect.java (composition precedent)

compile: `.\gradlew.bat compileJava --offline` -> BUILD SUCCESSFUL.

changed files:
- src/main/java/dev/opengrim/modules/render/Cape.java (ordered preset map, set-time 2048 cap,
  dynamic visibility gate, onEnable refresh, loaded-texture gate, replacement composition, Hide
  Wings no longer nulls the elytra, citations)
- src/main/java/dev/opengrim/modules/render/CapeTextureManager.java (added `hasCape()`)

suggested PARITY.md updates (orchestrator):
- ee row: `render/Cape.java - 1:1 settings/gates/lifecycle (preset map ordered, URL cap 2048,
  visibility gate dynamic, enable refresh); CapeTextureManager downloads the resolved URL to
  opengrim:cape, applied only when loaded and only while enabled; Hide Wings no longer nulls the
  elytra (qC wings renderer unported)`.
- divergences section: replace "Hide Wings nulls the elytra asset" with "Hide Wings (sixtwo.ee
  FsBgj) gates the qC wings renderer, which is not part of the rebuild - toggle currently has no
  visible effect; the previous elytra-nulling was removed as contradicted by qC.java:403-405".
