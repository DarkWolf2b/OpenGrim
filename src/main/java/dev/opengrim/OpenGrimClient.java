package dev.opengrim;

import dev.opengrim.config.ConfigManager;
import dev.opengrim.keybind.KeybindManager;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.Modules;
import net.fabricmc.api.ClientModInitializer;
import net.fabricmc.fabric.api.client.event.lifecycle.v1.ClientTickEvents;
import net.fabricmc.fabric.api.client.event.lifecycle.v1.ClientLifecycleEvents;

public class OpenGrimClient implements ClientModInitializer {
	private static final ConfigManager CONFIG = new ConfigManager();

	@Override
	public void onInitializeClient() {
		Modules.registerAll();
		// Boot-enabled modules (original gf.aZL(..., true, ...) metadata flag):
		// enabled before config load so a saved config can still override.
		for (Module m : ModuleManager.get().getModules()) {
			if (m.bootEnabled()) {
				m.setEnabled(true);
			}
		}
		CONFIG.load();
		dev.opengrim.gui.GuiManager.init();
		dev.opengrim.hud.HudOverlay.init();
		KeybindManager.init();
		dev.opengrim.event.EventBridge.init();
		dev.opengrim.rotation.RotationManager.get().init();
		ClientTickEvents.END_CLIENT_TICK.register(client -> {
			ModuleManager.get().tick();
			// Rotation-manager tick advance (cf. sixtwo.qL#dbN/dbK, qL.java:62-67):
			// queued silent rotations expire after module ticks each tick.
			dev.opengrim.rotation.RotationManager.get().tick();
		});
		ClientLifecycleEvents.CLIENT_STOPPING.register(client -> CONFIG.save());
	}
}