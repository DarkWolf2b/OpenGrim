package dev.opengrim.module;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Owns module registration, keybind handling and the per-tick dispatch.
 */
public class ModuleManager {
	private static final ModuleManager INSTANCE = new ModuleManager();

	private final List<Module> modules = new ArrayList<>();

	private ModuleManager() {
	}

	public static ModuleManager get() {
		return INSTANCE;
	}

	public void register(Module module) {
		modules.add(module);
	}

	public List<Module> getModules() {
		return Collections.unmodifiableList(modules);
	}

	public Module byId(String id) {
		for (Module m : modules) {
			if (m.getId().equals(id)) {
				return m;
			}
		}
		return null;
	}

	public List<Module> byCategory(ModuleCategory category) {
		List<Module> out = new ArrayList<>();
		for (Module m : modules) {
			if (m.getCategory() == category) {
				out.add(m);
			}
		}
		return out;
	}

	/** Called once per client tick: ticks enabled modules. Binds live in KeybindManager. */
	public void tick() {
		for (Module m : modules) {
			if (m.isEnabled()) {
				m.onTick();
			}
		}
	}
}