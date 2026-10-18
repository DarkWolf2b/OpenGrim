# Batch 8 port report

Source batch: `../../../analysis/specs/batch8.txt` (18 modules, registry ids fM–fX, fa–fg).
Branch: `cursor/port-batch8-modules-cd8a`. Clean-room implementations only; no
decompiled text copied. All Yarn 1.21.11+build.6 API names were verified against
the committed yarn tiny and the maven yarn v2 jar / javadoc.

Notable Yarn-1.21.11 findings discovered while porting (add to HANDOFF traps):
- `Entity#getPos()` no longer exists — the position getter is
  `Entity#getEntityPos()` (Entity implements `net.minecraft.util.HeldItemContext`,
  which declares it). Verified via yarn javadoc + remapped payload bytecode.
- `Entity#getBlockPos()` comes from `net.minecraft.world.entity.EntityLike`.
- Trapdoor open state: `net.minecraft.state.property.Properties.OPEN`
  (there is no `BlockStateProperties` in this build).
- `GameOptions` has `getSoundVolumeOption(SoundCategory)` returning a
  `SimpleOption` (write via `.setValue`); no `setSoundVolume`.
- `InputUtil.isKeyPressed(net.minecraft.client.util.Window, int)` — Window, not
  a long handle; `InputUtil.isMouseButtonPressed` does not exist (use
  `client.mouse.wasMiddleButtonClicked()`).
- `DataComponentTypes.CHARGED` is gone; crossbow state is
  `DataComponentTypes.CHARGED_PROJECTILES`.

| Class id | File | Settings | Implementation notes | Parity confidence |
|---|---|---|---|---|
| fM | ../../../src/main/java/dev/opengrim/modules/world/AutoMlg.java | 8 | Threshold numeric recovered from decompiled ctor (step 0.1, 3–15, default 4, " blocks" assumed suffix); Anchor Player toggle; Mode group with Bucket/Slime/Honey/Cobweb/HayBale/Cherry toggles (defaults invented; "Slime" name recovered from decompile). Places first enabled MLG item from hotbar onto the ground below when fall distance reaches the threshold; anchor zeroes horizontal velocity. | medium |
| fN | ../../../src/main/java/dev/opengrim/modules/utility/SkinProtect.java | 13 | Protect group (Own Skin/Other Players), per-side Skin Source groups (Defaults/Custom), Own Default Skin + Other Players Skin groups (dynamically populated in the original — left as empty groups), Texture URL / Other Texture URL text settings (2048 chars). No render hook exists, so the module exposes shouldProtectSkin/resolveSource/textureUrlFor for a future skin hook. | low |
| fO | ../../../src/main/java/dev/opengrim/modules/utility/DiscordActivity.java | 0 | No RPC transport available; computes an activity summary (server, block position) exposed via summary(). | low |
| fP | ../../../src/main/java/dev/opengrim/modules/utility/AntiCheatDetector.java | 0 | No packet-receive hook; heuristic scan of the server brand string against known anti-cheat fingerprints, announced once per join in chat. | low |
| fQ | ../../../src/main/java/dev/opengrim/modules/utility/NoProtocolDisconnect.java | 0 | Fully native; would guard the connection exception path. State holder only. | low |
| fR | ../../../src/main/java/dev/opengrim/modules/utility/ClientSounds.java | 2 | Sound Type mode (normal/bubble — original was a group with two toggles) and Sound Volume numeric (step 1, 0–100, default 70; suffix unrecovered, "%" assumed). Applies vanilla per-category sound options; bubble muffles discrete categories; restores on disable. | medium |
| fS | ../../../src/main/java/dev/opengrim/modules/utility/NameProtect.java | 6 | Protect group (Name default-on, Friends, Server) with replacement strings recovered from the decompiled ctors ("Protected", "Protected Friend", "protected.gg"). Sets the client-side nametag alias on enable and exposes sanitize(String) for text hooks. Text setting ids use "name_alias" to avoid colliding with the group child "name". | medium |
| fT | ../../../src/main/java/dev/opengrim/modules/utility/ResourcePackBypass.java | 3 | Mode group (Enable For All / Specific Servers default-on) + Servers text (1024, default "anarchia.gg", placeholder "hypixel.net, play.example.com" recovered). Exposes shouldDecline(serverAddress) for the network hook; no packet path exists yet. | medium (logic) / low (wiring) |
| fU | ../../../src/main/java/dev/opengrim/modules/utility/MiddleClickFriend.java | 0 | Real implementation: middle click via client.mouse.wasMiddleButtonClicked() toggles the crosshair player in a static friend set with chat feedback. | high |
| fV | ../../../src/main/java/dev/opengrim/modules/utility/SelfDestruct.java | 10 | Clear Chat, Clean Strings, Post Action group (Delete File / Replace File / Close Handles / None), Replace File path text, Custom Mod Id + Mod Id text (32). Fires once: disables all modules, clears chat, self-disables. File/handle teardown intentionally not performed (unsafe). | medium |
| fX | ../../../src/main/java/dev/opengrim/modules/utility/Interface.java | 5 | Emote Key raw keycode (default 66), Style group (Liquid Glass, Blur default-on, Solid — .SY() default recovered), Edit Theme action approximated by opening the vanilla options screen; style flags exposed as static accessors. | low |
| fa | ../../../src/main/java/dev/opengrim/modules/combat/AutoXBow.java | 1 | Activation Key raw keycode (default -999 = unbound, recovered). Hold-to-charge the held/offhand crossbow, auto-release when CHARGED_PROJECTILES is present. Combo choreography with minecarts unknown. | low |
| fb | ../../../src/main/java/dev/opengrim/modules/world/CartAssist.java | 7 | Actions group (Place Rail default-on, Place Minecart default-on — .Tz() recovered; Place Protect unimplemented), Return To group (Bow default-on, Slot toggle) + Slot numeric (step 1, 1–9, default 1 — recovered). Rail→minecart→return sequence on the crosshair target, triggered on the rising edge of holding a rail. | low |
| fc | ../../../src/main/java/dev/opengrim/modules/world/CartRefill.java | 4 | Delay numeric (step 5, 0–1000, default 0 = first UI-pair value, " ms" assumed), Hover (modeled as "only while crosshair is on the cart"), Randomize Slots, Slots To Refill (original is a decrypted 0–8 multi-slot action; modeled as a single slot int). Interacts TNT into targeted/nearby TNT minecarts on cadence. | low |
| fd | ../../../src/main/java/dev/opengrim/modules/world/AutoDripstone.java | 1 | Cooldown numeric (step 1, 0–10, default 0, suffix unrecovered, " s" assumed). Finds the nearest player standing on a closed trapdoor (Properties.OPEN), places pointed dripstone beneath it from the hotbar and opens the trapdoor. | low |
| ff | ../../../src/main/java/dev/opengrim/modules/movement/FakeLag.java | 8 | Mode group (Normal default-on, Lag Range), Packet Interval (step 5, 0–2000, default 100, " ms" — recovered), Lag Range Distance (step 0.1, 1–6, default 1, " blocks" — recovered), Reset Time (step 5, 0–1000, default 100, " ms" — recovered from cC ctor), Reset On Knockback/Explosion (default-on)/Health Update. The packet buffer + timing state machine is real (offerPacket/drain for a future packet-send mixin); actual interception requires a hook the rebuild does not have yet. Reset toggles are carried but need the corresponding events. | medium |
| fg | ../../../src/main/java/dev/opengrim/modules/combat/TargetLock.java | 3 | Lock Keybind raw keycode (-999 default), Select Range (step 0.1, 3–10, default 5, " blocks" — recovered), Select Through Walls. Lock/unlock on key edge; steers pitch/yaw at the locked target's eye position. | medium |

## Notes
- Settings counts include group settings and their children; group children are
  attached to their GroupSetting (mirroring the original ct/cu and cv/cw trees)
  and are not double-registered at module level.
- cD settings with `.VO(int)` (fa Activation Key, fg Lock Keybind, fX Emote Key)
  are keybind-style; the settings API has no Bind setting, so they are ported
  as IntSetting over raw GLFW keycodes (-999 = unbound).
- cy text settings (fN, fS, fT, fV) have no counterpart in the settings API;
  a small bounded `TextSetting` (private nested class in SkinProtect, reused
  by NameProtect/ResourcePackBypass/SelfDestruct) mirrors them.
- Numeric `.UI(a, b)` builder pairs (fc Delay 0–50, ff Packet Interval 100–150,
  ff Lag Range Distance 1–3.6) are interpreted as randomized slider ranges; the
  first value is used as the single default in DoubleSetting.
- Unrecovered suffixes: fM Threshold (assumed " blocks"), fR Sound Volume
  (assumed "%"), fd Cooldown (assumed " s"), fc Delay (assumed " ms").