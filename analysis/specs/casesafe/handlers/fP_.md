# Anti-Cheat Detector (sixtwo.fP) — handler-derived behavior spec

## Evidence base

- Primary: `analysis/ghidra/handlers-stitched/sixtwo_fP.c` — 20 handlers, continuation blocks all generic VM trampolines.
- Structure: `analysis/specs/modules/fP.md` (no settings decoded), `analysis/decompiled/payload-named/sixtwo/fP.java` (constructor + fields only).
- Single class pool window `POOL[0x14da4,0x340]` (fP-exclusive, fully resolved below).
- Registry: `sixtwo.fP|Anti-Cheat Detector|Analyzes packets to detect Anti-Cheat|key=108|bind=-999`, category `gh.KfAlY` (distinct from the combat `gh.xwjCw` / utility `gh.qBzlZ` categories used elsewhere in this batch). Constructor passes an extra flag: `gf.aZL(<name>, false, gh.KfAlY).aZS(false)` — second `false`/`aZS(false)` semantics unrecovered (possibly hidden-in-hud or non-persistable).

## Runtime model

Watches chat and packet traffic to fingerprint anti-cheat / fake-player infrastructure, then reports findings into the local chat HUD.

Pool-derived MC surface (verbatim from `POOL[0x14da4,0x340]`):

- `net/minecraft/class_2678` = `GameJoinS2CPacket` — server-join trigger to (re)initialize per-server analysis.
- Skin-asset probing: `net/minecraft/class_12079$class_10726` = `AssetInfo$TextureAssetInfo`, `method_60656` = `ofVanilla(Identifier)` (plus descriptor `(Lnet/minecraft/class_2960;)V` = Identifier), `class_12079$class_12081` = `AssetInfo$TextureAsset`, `class_7920` = `PlayerSkinType` with `field_41122` = `SLIM` / `field_41123` = `WIDE`, `method_36950` = `getParameter`, and initializer `([I Lnet/minecraft/class_12079$class_12081; Lnet/minecraft/class_7920;)V` — checks whether a player's skin texture is a vanilla asset and which arm model it parses as; vanilla-default skins are NPC/bot evidence.
- Chat reporting: `field_1705` = `InGameHud.inGameHud`, `method_1743` = `getChatHud`, `class_338` = `ChatHud`, `method_1812` = `addMessage(Text)` — detection verdicts printed to local chat; `aWx(String)` pushes a message, `aWw()` builds the report string.
- Static `String[] vyRDw`, `DnMlW` — decrypted pattern arrays (chat-message fingerprints / detection keywords — contents not recovered).
- `(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;` — entry-pairing helper over collected samples.

State: `swcAS = new ArrayList<>(5)` — fixed-capacity sample window (ping/kick/message timings — exact sample unrecovered); `yNCfW` boolean (detection-latched flag); `OFbuO` static int counter.

## Per-handler semantics

All bodies are decrypt-preamble → VM dispatch.

- `YO()` [18a93f520] — listener registration (`gL.tk` packets, `gN` chat, `gM` frame).
- `aaj()` [18a93f230] — toggle reset (clears `swcAS`, `yNCfW`).
- `aWt(gL.tk)` [18a9ac490] — packet event: watches `GameJoinS2CPacket` (join → reset/probe) and skin-asset traffic.
- `aWr(gN)` [18a9ac0b0] — chat event: matches incoming messages against `vyRDw`/`DnMlW` patterns (anti-cheat ban/kick/alert messages).
- `aWs(gM)` [18a9ac2a0] — frame event: periodic analysis/flush of the sample window.
- `aWu(int)` [18a9b1800] — appends an int sample to `swcAS`.
- `aWy(List, Integer) Z` [18a9487d0] — trivial trampoline (`POOL[0xcd,0x6]` "…ion|si") — list membership/scan helper.
- `aWw() String` [18a9b94e0] — builds the detection report string.
- `aWx(String)` [18a93f810] — delivers a report via `ChatHud.addMessage`.
- `aWp()` [18a98aef0], `aWq()` [18a9abbf0], `aWv()` [18a9b6090] — analysis sub-steps (skin probe, pattern scan, verdict latch) — attribution by token membership only.
- Native-only `aWm`/`aWl` (pool tokens, no CFR decl) — synthetic members; `(Lsixtwo/qn;)V` constructor token suggests a `qn` notification component is built.
- `aWz` (MatchException trap) [18a948b20], `aWA/aWB/aWC/aWD/aWE/aWF/aWG` — j2cc decrypt boilerplate.

## Settings → behavior mapping

None. The class constructs no settings (confirmed: constructor only builds `swcAS`/`yNCfW`); behavior is keybind-gated (registry key 108, bind -999 unbound) and fully packet/chat driven. The `aZS(false)` descriptor flag is the only module-level knob observed.

## Unrecovered / uncertain

- All bodies virtualized; the detection heuristics — how skin-asset vanilla checks (`ofVanilla`, SLIM/WIDE) combine with chat patterns and the 5-sample window into a verdict — are entirely unrecovered. Do not guess the decision logic.
- `swcAS` sample semantics (ping values, message counts, or detection scores) unrecovered.
- `String[] vyRDw` / `DnMlW` contents are built by `aWB`/`aWA` at runtime; no pool window in this corpus carries readable values — pattern list unrecovered.
- `aWp`/`aWq`/`aWv` role split is inferred; `aWm`/`aWl` and the `qn` component token are unattributed.
- `method_36950 getParameter` owner (SkinTextures vs PlayerSkinType) unresolved.
- Registry key=108 vs unbound -999: same pattern as ef/dU (legacy default bind), unresolved.
