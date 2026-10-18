package dev.opengrim.config;

import java.io.IOException;
import java.lang.reflect.Type;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;
import com.google.gson.reflect.TypeToken;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.Setting;
import dev.opengrim.util.FriendsManager;
import net.fabricmc.loader.api.FabricLoader;

/**
 * JSON config persistence: enabled state, binds and settings per module, plus
 * the shared friend list.
 *
 * <p>The original client keeps the same state in the native {@code fZ} root
 * (per-module settings/enabled/bind) and in the {@code qQ} name registry,
 * which is serialized to config via {@code qQ.ddD()} and is the friend store
 * read by the friend-aware modules (analysis/specs/handlers/dm.md "qQ / rD.dmc()").
 * The JSON layout is a documented divergence (analysis/ghidra/framework-findings.md
 * "fZ - global config/state root").
 *
 * <p>File shape (current): {@code {"modules": {"<module id>": {"enabled": bool,
 * "bind": int, "settings": {...}}}, "friends": ["name", ...]}}. A bare module
 * map (no {@code "modules"} wrapper) is still accepted on load for configs
 * written by the earlier layout.
 */
public class ConfigManager {
	private static final Gson GSON = new GsonBuilder().setPrettyPrinting().create();
	private static final Type MODULE_MAP_TYPE = new TypeToken<Map<String, ModuleState>>() {
	}.getType();
	private static final Type FRIEND_LIST_TYPE = new TypeToken<List<String>>() {
	}.getType();

	private final Map<String, ModuleState> states = new LinkedHashMap<>();

	static class ModuleState {
		boolean enabled;
		int bind = -999;
		Map<String, Object> settings = new LinkedHashMap<>();
	}

	private Path configPath() {
		return FabricLoader.getInstance().getConfigDir().resolve("opengrim.json");
	}

	public void load() {
		Path path = configPath();
		if (!Files.exists(path)) {
			return;
		}
		try {
			JsonObject root = JsonParser.parseString(Files.readString(path)).getAsJsonObject();
			JsonObject modules = root.has("modules") ? root.getAsJsonObject("modules") : root;
			Map<String, ModuleState> parsed = GSON.fromJson(modules, MODULE_MAP_TYPE);
			if (parsed != null) {
				for (Map.Entry<String, ModuleState> e : parsed.entrySet()) {
					Module module = ModuleManager.get().byId(e.getKey());
					if (module == null) {
						continue;
					}
					ModuleState state = e.getValue();
					// Settings and bind first, enable state last: onEnable() then
					// sees the loaded values (the previous order enabled the
					// module against its default settings).
					module.setBind(state.bind);
					for (Setting<?> setting : module.getSettings()) {
						Object raw = state.settings.get(setting.getId());
						if (raw != null) {
							setting.deserialize(raw);
						}
					}
					module.setEnabled(state.enabled);
				}
			}
			if (root.has("friends")) {
				List<String> friends = GSON.fromJson(root.get("friends"), FRIEND_LIST_TYPE);
				FriendsManager.clear();
				if (friends != null) {
					for (String friend : friends) {
						FriendsManager.add(friend);
					}
				}
			}
		} catch (IOException | RuntimeException ex) {
			// corrupt config: start fresh rather than crash the client
		}
	}

	public void save() {
		states.clear();
		for (Module module : ModuleManager.get().getModules()) {
			ModuleState state = new ModuleState();
			state.enabled = module.isEnabled();
			state.bind = module.getBind();
			for (Setting<?> setting : module.getSettings()) {
				Object serialized = setting.serialize();
				if (serialized != null) {
					state.settings.put(setting.getId(), serialized);
				}
			}
			states.put(module.getId(), state);
		}
		JsonObject root = new JsonObject();
		root.add("modules", GSON.toJsonTree(states));
		root.add("friends", GSON.toJsonTree(new ArrayList<>(FriendsManager.all())));
		try {
			Files.createDirectories(configPath().getParent());
			Files.writeString(configPath(), GSON.toJson(root));
		} catch (IOException ignored) {
		}
	}
}
