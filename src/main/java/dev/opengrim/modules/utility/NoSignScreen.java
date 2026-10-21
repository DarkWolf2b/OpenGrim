package dev.opengrim.modules.utility;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ingame.HangingSignEditScreen;
import net.minecraft.client.gui.screen.ingame.SignEditScreen;

/**
 * No Sign Screen (registry sixtwo.dH, module id 138): "Disables editing signs".
 *
 * <p>Port of sixtwo.dH (payload-named-cfr/sixtwo/dH.java:13-36 constructor dH.java:19-22;
 * native screen-event listener alC(gJ) dH.java:33-34; handler spec
 * analysis/specs/casesafe/handlers/dH_.md; pool run POOL[0x9c9f,0x45): class_498
 * SignEditScreen, class_7744 HangingSignEditScreen).
 *
 * <p>Settings: 0 settings in the original class.
 *
 * <p>Behavior: on the screen event, type-check the event's screen against
 * SignEditScreen and HangingSignEditScreen (the two concrete sign-editing GUIs in
 * 1.21.11; both extend AbstractSignEditScreen) and suppress the sign-edit UI via
 * MinecraftClient.setScreen(null). The screen-open/close event (gJ) has no rebuild
 * counterpart, so the check polls the active screen each tick instead (behaviorally
 * equivalent: the screen is closed as soon as it is open). The close mechanism
 * (setScreen(null) vs screen.close()) is unrecovered in the decompile; setScreen(null)
 * is the discretionary choice. The type test mirrors the original's two-class run —
 * a stock sign screen is always one of the two concrete classes.
 *
 * <p>trace 2026-10-17 (registry id 138): {@code alC} did not trigger in the 4&nbsp;s
 * window (the class loaded, zero method entries — no sign screen was opened). Capture
 * condition for a follow-up: right-click a sign (or a hanging sign) to open
 * {@code SignEditScreen}/{@code HangingSignEditScreen} while the module is enabled.
 */
public class NoSignScreen extends Module {
	public NoSignScreen() {
		super("no_sign_screen", "No Sign Screen", "Disables editing signs", ModuleCategory.PLAYER);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.currentScreen instanceof SignEditScreen
				|| client.currentScreen instanceof HangingSignEditScreen) {
			client.setScreen(null);
		}
	}
}