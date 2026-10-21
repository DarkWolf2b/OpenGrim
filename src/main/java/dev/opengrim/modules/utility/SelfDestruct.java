package dev.opengrim.modules.utility;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.StringSetting;
import net.fabricmc.loader.api.FabricLoader;
import net.minecraft.client.MinecraftClient;

/**
 * Self Destruct (registry sixtwo.fV, module id 105, category {@code gh.KfAlY}
 * = Client): "Self destructs the client".
 *
 * <p>Port of sixtwo.fV (analysis/decompiled/payload-decrypted/sixtwo/fV.java:26-173
 * constructor; enable hook {@code aaj()} override fV.java:180-181 — enabling the
 * module <em>is</em> the trigger; handler spec
 * analysis/specs/casesafe/handlers/fV_.md). Settings in declaration order
 * (fV.java:40-166):
 * <ul>
 *   <li>Clear Chat {@code cJ .WE(false)} (fV.java:40),</li>
 *   <li>Clean Strings {@code cJ .WE(true)} (fV.java:55),</li>
 *   <li>Post Action {@code ct} (fV.java:68) with children Delete File /
 *       Replace File / Close Handles / None ({@code cu}; no {@code .SY()} →
 *       radio default index 0 = Delete File),</li>
 *   <li>Replace File {@code cy .Un(2048).Up("")} (fV.java:139; max length not
 *       expressible in {@link StringSetting} — flagged), visibility
 *       {@code gJTkT.Vf(this.mZCNn::SZ)} (fV.java:165) = Replace File selected,</li>
 *   <li>Custom Mod Id {@code cJ .WE(false)} (fV.java:154),</li>
 *   <li>Mod Id {@code cy .Un(32).Up("")} (fV.java:162; max length flagged),
 *       visibility {@code oNtMH.Vf(this.dczoz::WF)} (fV.java:166).</li>
 * </ul>
 *
 * <p>Destruct pipeline (handler spec "Token surface"): the {@code aaj} window
 * builds a {@code qu} request — {@code cYC()} → {@code cYF(qt.cYw(postAction))}
 * → {@code cYE(clearChat)} / {@code cYD(cleanStrings)} / {@code cYG(path)} /
 * {@code cYH(customModId, modId)} → {@code cYI()} execute — then engages the
 * fW/fY/fZ string/config sweep. The {@code qt} enum has 4 constants
 * (None / Delete File / Replace File / Close Handles per the setting order; the
 * exact display mapping is inference, fV_.md "Unrecovered" 2).
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/fV_.jsonl):
 * the window captured only {@code aaj} (enable, 1.17 s) — the single behavior
 * entry point, matching "enabling is the trigger".
 *
 * <p>high-probability guess (labeled): the original's file scope is unrecovered
 * (fV_.md "Unrecovered" 1 — only {@code Optional<Path> QbsAi} is visible). On
 * this stack the destruct target is the OpenGrim config file
 * ({@code config/opengrim.json}, the rebuild's client-state file): Delete File
 * deletes it, Replace File copies the {@code replace_file_path} file over it,
 * Close Handles is a no-op (config writes are synchronous here), None leaves it
 * untouched. "Clean Strings" is mirrored with a GC hint (the fW/fY sweep is
 * native); disabling all other modules mirrors the fZ config/state teardown.
 */
public class SelfDestruct extends Module {
	private final BoolSetting clearChat = register(new BoolSetting("clear_chat", false));
	private final BoolSetting cleanStrings = register(new BoolSetting("clean_strings", true));
	private final ModeSetting postAction = register(new ModeSetting("post_action",
			List.of("delete_file", "replace_file", "close_handles", "none"), "delete_file"));
	private final StringSetting replaceFilePath = register(new StringSetting("replace_file_path", ""));
	private final BoolSetting customModId = register(new BoolSetting("custom_mod_id", false));
	private final StringSetting modId = register(new StringSetting("mod_id", ""));

	private boolean fired;

	public SelfDestruct() {
		super("self_destruct", "Self Destruct", "Self destructs the client", ModuleCategory.CLIENT);
		// Initial visibility wiring (fV.java:165-166); refreshed in onTick while enabled.
		replaceFilePath.setVisible("replace_file".equals(postAction.getValue()));
		modId.setVisible(customModId.getValue());
	}

	@Override
	public void onTick() {
		// gJTkT.Vf(this.mZCNn::SZ) / oNtMH.Vf(this.dczoz::WF) (fV.java:165-166).
		replaceFilePath.setVisible("replace_file".equals(postAction.getValue()));
		modId.setVisible(customModId.getValue());
	}

	/**
	 * Destruct trigger mirroring sixtwo.fV#aaj() (fV.java:180-181, the enable
	 * hook override): the destruct request is built and executed once per
	 * activation (the original guards process-wide via {@code qu.cmARD}).
	 */
	@Override
	protected void onEnable() {
		if (fired) {
			setEnabled(false);
			return;
		}
		fired = true;

		MinecraftClient client = MinecraftClient.getInstance();

		for (Module module : ModuleManager.get().getModules()) {
			if (module != this) {
				module.setEnabled(false);
			}
		}

		if (clearChat.getValue() && client.inGameHud != null) {
			client.inGameHud.getChatHud().clear(false);
		}

		applyPostAction();

		if (cleanStrings.getValue()) {
			System.gc();
		}

		setEnabled(false);
	}

	private void applyPostAction() {
		Path config = FabricLoader.getInstance().getConfigDir().resolve("opengrim.json");
		try {
			switch (postAction.getValue()) {
				case "delete_file" -> Files.deleteIfExists(config);
				case "replace_file" -> {
					Path replacement = Path.of(replaceFilePath.getValue());
					if (!replaceFilePath.getValue().isEmpty() && Files.exists(replacement)) {
						Files.copy(replacement, config, StandardCopyOption.REPLACE_EXISTING);
					}
				}
				case "close_handles" -> {
					// Config persistence opens/closes per operation on this stack.
				}
				default -> {
					// None: file left untouched.
				}
			}
		} catch (IOException | RuntimeException ignored) {
			// Original qu.cYI() swallows execution failures (native).
		}
	}

	/**
	 * Returns whether the self destruct sequence executed.
	 */
	public boolean didRun() {
		return fired;
	}
}
