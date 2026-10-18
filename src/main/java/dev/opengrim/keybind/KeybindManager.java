package dev.opengrim.keybind;

import java.util.HashMap;
import java.util.Map;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import net.fabricmc.fabric.api.client.event.lifecycle.v1.ClientTickEvents;
import net.fabricmc.fabric.api.client.keybinding.v1.KeyBindingHelper;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.client.util.InputUtil;

/**
 * Registers one KeyBinding per bound module and toggles it on press.
 * bind == -999 means "no bind" (registry convention).
 */
public class KeybindManager {
	private final Map<Module, KeyBinding> bindings = new HashMap<>();

	public void register(Module module) {
		if (module.getBind() < 0) {
			return;
		}
		KeyBinding keyBinding = new KeyBinding("key.opengrim." + module.getId(),
				InputUtil.Type.KEYSYM, module.getBind(), KeyBinding.Category.MISC);
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

	public static void init() {
		KeybindManager manager = new KeybindManager();
		for (Module m : ModuleManager.get().getModules()) {
			manager.register(m);
		}
		ClientTickEvents.END_CLIENT_TICK.register(client -> manager.tick());
	}
}