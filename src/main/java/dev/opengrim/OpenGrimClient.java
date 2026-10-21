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
	private static boolean fontsPreloaded;

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
		dev.opengrim.modules.render.ChinaHatRenderer.init();
		dev.opengrim.rotation.RotationManager.get().init();
		ClientTickEvents.END_CLIENT_TICK.register(client -> {
			ModuleManager.get().tick();
			// Rotation-manager tick advance (cf. sixtwo.qL#dbN/dbK, qL.java:62-67):
			// queued silent rotations expire after module ticks each tick.
			dev.opengrim.rotation.RotationManager.get().tick();
			// Register/precompile the recovered GUI shape pipelines once the
			// resource manager has loaded their shaders (no-op afterwards).
			dev.opengrim.gui.render.GuiShapePipelines.available();
			// Same for the recovered MSDF text pipeline.
			dev.opengrim.gui.render.GuiMsdfPipelines.available();
			// And the recovered arc/circle SDF.
			dev.opengrim.gui.render.GuiArcPipelines.available();
			// And the two-pass blur + backdrop composite.
			dev.opengrim.gui.render.GuiBackdropPipelines.available();
			// And the liquid glass composite.
			dev.opengrim.gui.render.GuiGlassPipelines.available();
			if (!fontsPreloaded && dev.opengrim.gui.render.GuiMsdfPipelines.available()) {
				fontsPreloaded = true;
				// lE.cfn loads the original font stack during startup; do the same
				// so the first ClickGUI frame does not hitch on texture upload.
				dev.opengrim.gui.ui.MsdfFont.regular();
				dev.opengrim.gui.ui.MsdfFont.of(dev.opengrim.gui.ui.MsdfFont.MEDIUM);
				dev.opengrim.gui.ui.MsdfFont.of(dev.opengrim.gui.ui.MsdfFont.SEMIBOLD);
				dev.opengrim.gui.ui.MsdfFont.of(dev.opengrim.gui.ui.MsdfFont.BOLD);
				dev.opengrim.gui.ui.MsdfFont.icons();
			}
		});
		ClientLifecycleEvents.CLIENT_STOPPING.register(client -> CONFIG.save());
	}
}