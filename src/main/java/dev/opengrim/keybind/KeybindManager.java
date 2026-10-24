package dev.opengrim.keybind;

import java.util.HashMap;
import java.util.Map;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import net.fabricmc.fabric.api.client.event.lifecycle.v1.ClientTickEvents;
import net.fabricmc.fabric.api.client.keybinding.v1.KeyBindingHelper;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.client.util.InputUtil;
import org.lwjgl.glfw.GLFW;

/**
 * Registers one KeyBinding per bound module and toggles it on press.
 * bind == -999 means "no bind" (registry convention).
 *
 * <p>The Click GUI's Keybind popup ({@code bh}) changes a module bind at
 * runtime; {@link #setBind(Module, int)} updates the existing vanilla
 * KeyBinding in place (or registers one) so the new key takes effect without
 * restarting the game.
 */
public class KeybindManager {
	private static KeybindManager instance;

	private final Map<Module, KeyBinding> bindings = new HashMap<>();

	public void register(Module module) {
		if (module.getBind() == -999) {
			return;
		}
		KeyBinding keyBinding = new KeyBinding("key.opengrim." + module.getId(),
				keyFor(module.getBind()).getCategory(), module.getBind(), KeyBinding.Category.MISC);
		KeyBindingHelper.registerKeyBinding(keyBinding);
		bindings.put(module, keyBinding);
	}

	public void tick() {
		for (Map.Entry<Module, KeyBinding> e : bindings.entrySet()) {
			while (e.getValue().wasPressed()) {
				e.getKey().toggle();
			}
		}
	}

	/** Update a module bind from the Keybind popup. */
	public void applyBind(Module module, int code) {
		module.setBind(code);
		KeyBinding binding = bindings.get(module);
		if (binding == null) {
			if (code != -999) {
				register(module);
			}
			return;
		}
		binding.setBoundKey(keyFor(code));
	}

	private static InputUtil.Key keyFor(int code) {
		if (code == -999) {
			return InputUtil.UNKNOWN_KEY;
		}
		InputUtil.Type type = code >= 0 && code <= GLFW.GLFW_MOUSE_BUTTON_LAST
				? InputUtil.Type.MOUSE
				: InputUtil.Type.KEYSYM;
		return type.createFromCode(code);
	}

	public static void setBind(Module module, int code) {
		if (instance != null) {
			instance.applyBind(module, code);
		} else {
			module.setBind(code);
		}
	}

	public static void init() {
		instance = new KeybindManager();
		for (Module m : ModuleManager.get().getModules()) {
			instance.register(m);
		}
		ClientTickEvents.END_CLIENT_TICK.register(client -> instance.tick());
	}
}
