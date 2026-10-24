package dev.opengrim.settings;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.util.InputUtil;
import org.lwjgl.glfw.GLFW;

/**
 * Port of {@code sixtwo.cD}: a keybind setting holding a single GLFW key or
 * mouse-button code.
 *
 * <p>Recovered surface (casesafe/payload-named-cfr/sixtwo/cD_.java):
 * <ul>
 *   <li>field {@code taKVz} int, default from clinit (cD_.java:26, 34);</li>
 *   <li>{@code VP()} getter (cD_.java:85-87);</li>
 *   <li>{@code VO(int)} setter (cD_.java:89-115);</li>
 *   <li>{@code VN()} display name via {@code jb.byM(code)} (cD_.java:81-83);</li>
 *   <li>{@code SS}/{@code SR} JSON/map persistence (cD_.java:67-75).</li>
 * </ul>
 *
 * <p>{@code -999} is the original's unbound sentinel (`jb.byM` fallback).
 * Codes {@code 0..GLFW_MOUSE_BUTTON_LAST} are mouse buttons; every other
 * non-negative code is a keyboard key. The widget that edits this setting is
 * {@link dev.opengrim.gui.ui.widgets.KeybindWidget}.
 */
public class KeybindSetting extends Setting<Integer> {
	/** Unbound sentinel used by the original keybind settings. */
	public static final int UNBOUND = -999;

	public KeybindSetting(String id, int defaultKey) {
		super(id, defaultKey);
	}

	/** cD.VP. */
	public int getKey() {
		return getValue();
	}

	/** cD.VO. */
	public void setKey(int key) {
		setValue(key);
	}

	public boolean isUnbound() {
		return getValue() == UNBOUND;
	}

	/** cD.VN: the display name of the bound key. */
	public String getKeyName() {
		return displayName(getValue());
	}

	/**
	 * {@code jb.byM(code)}: unbound renders as {@code NONE}; mouse codes use
	 * the mouse type like the original's {@code mA} defaults; everything else
	 * is resolved through the key-sym type.
	 */
	public static String displayName(int code) {
		if (code == UNBOUND) {
			return "NONE";
		}
		InputUtil.Type type = isMouseCode(code)
				? InputUtil.Type.MOUSE
				: InputUtil.Type.KEYSYM;
		return type.createFromCode(code).getLocalizedText().getString();
	}

	public static boolean isMouseCode(int code) {
		return code >= 0 && code <= GLFW.GLFW_MOUSE_BUTTON_LAST;
	}

	/**
	 * Current held state of the bound key or mouse button. Mouse codes must use
	 * {@code glfwGetMouseButton}: {@link InputUtil#isKeyPressed} only queries
	 * the keyboard, so a mouse binding would silently read as released.
	 */
	public boolean isPressed() {
		int key = getKey();
		if (key == UNBOUND) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null || client.getWindow() == null) {
			return false;
		}
		if (isMouseCode(key)) {
			return GLFW.glfwGetMouseButton(client.getWindow().getHandle(), key) == GLFW.GLFW_PRESS;
		}
		return InputUtil.isKeyPressed(client.getWindow(), key);
	}

	@Override
	public Object serialize() {
		return getValue();
	}

	@Override
	public void deserialize(Object raw) {
		if (raw instanceof Number n) {
			setValue(n.intValue());
		}
	}
}
