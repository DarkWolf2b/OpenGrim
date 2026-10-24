package dev.opengrim.gui;

import dev.opengrim.gui.screen.ClickGuiScreen;
import net.fabricmc.fabric.api.client.event.lifecycle.v1.ClientTickEvents;
import net.fabricmc.fabric.api.client.keybinding.v1.KeyBindingHelper;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.client.util.InputUtil;
import org.lwjgl.glfw.GLFW;

/**
 * Open/close handling for the Click GUI. Registers a dedicated key binding
 * (default Right Shift, the framework contract's GUI toggle) and toggles the
 * {@link ClickGuiScreen}.
 *
 * <p>Written against the observable framework
 * contract in analysis/specs/00-framework.md; no code from the original
 * client is reproduced. Self-contained: only requires the one-line
 * {@code GuiManager.init()} call in {@code OpenGrimClient.onInitializeClient}.
 */
public final class GuiManager {
	private static final String BIND_NAME = "key.opengrim.click_gui";

	private static KeyBinding openKey;

	private GuiManager() {
	}

	/**
	 * Registers the GUI toggle key binding and its tick handler. Call once
	 * from {@code OpenGrimClient.onInitializeClient()} (after module
	 * registration so the GUI can list everything).
	 */
	public static void init() {
		openKey = KeyBindingHelper.registerKeyBinding(new KeyBinding(
				BIND_NAME, InputUtil.Type.KEYSYM, GLFW.GLFW_KEY_RIGHT_SHIFT,
				KeyBinding.Category.MISC));
		ClientTickEvents.END_CLIENT_TICK.register(client -> {
			while (openKey.wasPressed()) {
				toggle();
			}
		});
	}

	/**
	 * Opens the Click GUI, or closes it when already open.
	 */
	public static void toggle() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (isGuiOpen()) {
			client.setScreen(null);
			KeyBinding.unpressAll();
		} else if (client.currentScreen == null) {
			open();
		}
	}

	/**
	 * Opens the Click GUI via the bl.Eu()/bD.LD() open sequence
	 * (world guard + tween reset).
	 */
	public static void open() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.currentScreen == null) {
			// Opening the Click GUI must not keep a held movement key alive;
			// vanilla only clears key states on release events.
			KeyBinding.unpressAll();
			new ClickGuiScreen().openNow(client);
		}
	}

	/** Opens the Click GUI with one module's settings panel expanded. */
	public static void openFor(dev.opengrim.module.Module module) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.currentScreen != null || module == null) {
			return;
		}
		KeyBinding.unpressAll();
		ClickGuiScreen screen = new ClickGuiScreen();
		screen.openNow(client);
		screen.openModuleSettings(module);
	}

	/**
	 * Opens the radial wheel behind its own path. The rectangular
	 * Click GUI path above is unchanged; this only shows
	 * {@link EmoteWheelScreen} (the sixtwo/bD port) when no screen is open.
	 */
	public static void openWheel() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.currentScreen == null) {
			EmoteWheelScreen.open();
		}
	}

	/**
	 * Toggles the radial wheel, or closes it when already open.
	 */
	public static void toggleWheel() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (isWheelOpen()) {
			client.setScreen(null);
		} else if (client.currentScreen == null) {
			EmoteWheelScreen.open();
		}
	}

	/**
	 * @return whether the radial wheel is currently the active screen.
	 */
	public static boolean isWheelOpen() {
		return MinecraftClient.getInstance().currentScreen instanceof EmoteWheelScreen;
	}

	/**
	 * Closes the Click GUI if it is the current screen.
	 */
	public static void close() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (isGuiOpen()) {
			client.setScreen(null);
		}
	}

	/**
	 * @return whether the Click GUI is currently the active screen.
	 */
	public static boolean isGuiOpen() {
		return MinecraftClient.getInstance().currentScreen instanceof ClickGuiScreen;
	}
}
