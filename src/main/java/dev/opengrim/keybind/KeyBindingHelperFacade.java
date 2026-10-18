package dev.opengrim.keybind;

import net.fabricmc.fabric.api.client.keybinding.v1.KeyBindingHelper;
import net.minecraft.client.option.KeyBinding;

/** Facade so callers don't import Fabric directly in every file. */
public final class KeyBindingHelperFacade {
	private KeyBindingHelperFacade() {
	}

	public static void register(KeyBinding binding) {
		KeyBindingHelper.registerKeyBinding(binding);
	}
}