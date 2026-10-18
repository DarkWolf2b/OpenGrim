package dev.opengrim.modules.utility;

import java.util.List;

import dev.opengrim.gui.screen.ClickGuiScreen;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.util.InputUtil;
import org.lwjgl.glfw.GLFW;

/**
 * Interface (registry sixtwo.fX, module id 102): "Allows to change interface settings".
 *
 * <p>Sources:
 * <ul>
 * <li>analysis/decompiled/casesafe/payload-decrypted/sixtwo/fX_.java (lines 38-436)</li>
 * <li>analysis/specs/handlers/fX.md (spec)</li>
 * </ul>
 *
 * <p>Settings (3 decrypted from constructor lines 54-104):
 * <ul>
 * <li>Emote Key (jGdAR, cD keybind widget, default 66 ['B']) (fX.java:67)</li>
 * <li>Style (nJAFn, ct radio group) with Liquid Glass (hltCm, index 0), Blur (OzuKt, index 1, default), Solid (seKrG, index 2) (fX.java:68-84)</li>
 * <li>Edit Theme (HevkM, cI action widget, opens theme configuration screen) (fX.java:96-103)</li>
 * </ul>
 *
 * <p>Runtime model:
 * <ul>
 * <li>aYc(gA): key event handler opening click GUI if no screen open, emote key pressed, and F3 (GLFW 292) not held (fX.java:231-287)</li>
 * <li>aYh(): static background opacity resolver selecting 0.2f (Liquid Glass), 0.75f (Blur), or 0.85f (Solid) (fX.java:188-220)</li>
 * <li>aYu() / aYt(): static probe channel CgnEr (fX.java:222-224, 313-315)</li>
 * <li>YO(): toggle lifecycle hook calling baa(true) — self-re-enable (fX.java:226-229)</li>
 * </ul>
 *
 * <p>Framework divergences (labeled):
 * <ul>
 * <li>[G] No key event exists in this framework; the aYc trigger is emulated by
 *     edge-detecting the Emote Key with GLFW in {@link #onTick} (the bab() in-game
 *     gate is ported in full).</li>
 * <li>[G] The cI "Edit Theme" action opens the aZ(2.0f) theme editor routed via
 *     aw.route (fX.java:96-103); this rebuild has no theme-editor screen, so the
 *     BoolSetting trigger opens the ClickGuiScreen instead.</li>
 * </ul>
 */
public class Interface extends Module {
	private final IntSetting emoteKey = register(new IntSetting("emote_key", -999, 999, 66));
	private final ModeSetting style = register(new ModeSetting("style",
			List.of("liquid_glass", "blur", "solid"), "blur"));
	private final BoolSetting editTheme = register(new BoolSetting("edit_theme", false));

	private static int[] probeChannel = new int[2];
	private boolean emoteKeyDown;

	public Interface() {
		super("interface", "Interface", "Allows to change interface settings", ModuleCategory.UTILITY);
		setBind(344);
	}

	/**
	 * Boot-enabled: the original registers fX with the {@code true} metadata
	 * flag ({@code gf.aZL(102, true, gh.KfAlY)}, fX.java:56). Applied before
	 * config load so a saved config still wins.
	 */
	@Override
	public boolean bootEnabled() {
		return true;
	}

	/**
	 * Port of the {@code YO()} override (fX.java:226-229): {@code YO()} calls
	 * {@code this.baa(true)} on every toggle, so disabling Interface re-enables
	 * it — the module is effectively always on.
	 */
	@Override
	public void onDisable() {
		setEnabled(true);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();

		if (editTheme.getValue()) {
			editTheme.setValue(false);
			if (client.currentScreen == null) {
				client.setScreen(new ClickGuiScreen());
			}
		}

		if (!isEnabled() || client.currentScreen != null) {
			emoteKeyDown = false;
			return;
		}
		// bab() gate (gg.java:393-459): player, world, interaction manager, network handler.
		if (client.player == null || client.world == null
				|| client.interactionManager == null || client.getNetworkHandler() == null) {
			emoteKeyDown = false;
			return;
		}

		long handle = client.getWindow().getHandle();
		int key = emoteKey.getValue();
		boolean pressed = key >= 0 && GLFW.glfwGetKey(handle, key) == GLFW.GLFW_PRESS;

		if (pressed && !emoteKeyDown) {
			boolean f3Held = InputUtil.isKeyPressed(client.getWindow(), GLFW.GLFW_KEY_F3);
			if (!f3Held) {
				client.setScreen(new ClickGuiScreen());
			}
		}
		emoteKeyDown = pressed;
	}

	public static boolean isLiquidGlass() {
		Interface self = lookup();
		return self != null && "liquid_glass".equalsIgnoreCase(self.style.getValue());
	}

	public static boolean isBlur() {
		Interface self = lookup();
		return self != null && "blur".equalsIgnoreCase(self.style.getValue());
	}

	public static boolean isSolid() {
		Interface self = lookup();
		return self != null && "solid".equalsIgnoreCase(self.style.getValue());
	}

	public static float getBackgroundOpacity() {
		if (isLiquidGlass()) {
			return 0.2f;
		}
		if (isBlur()) {
			return 0.75f;
		}
		return 0.85f;
	}

	public static int[] getProbeChannel() {
		return probeChannel;
	}

	public static void setProbeChannel(int[] channel) {
		probeChannel = channel;
	}

	private static Interface lookup() {
		for (Module module : ModuleManager.get().getModules()) {
			if (module instanceof Interface self) {
				return self;
			}
		}
		return null;
	}
}
