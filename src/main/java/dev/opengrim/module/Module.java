package dev.opengrim.module;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import dev.opengrim.settings.Setting;

/**
 * Base class for all modules. Mirrors the observable contract of the original
 * client: id, display name, description, category, keybind, enable/disable
 * lifecycle and an owned settings tree.
 */
public abstract class Module {
	private final String id;
	private final String name;
	private final String description;
	private final ModuleCategory category;
	private final List<Setting<?>> settings = new ArrayList<>();
	private boolean enabled;
	private int bind = -999;

	protected Module(String id, String name, String description, ModuleCategory category) {
		this.id = id;
		this.name = name;
		this.description = description;
		this.category = category;
	}

	public final String getId() {
		return id;
	}

	public final String getName() {
		return name;
	}

	public final String getDescription() {
		return description;
	}

	public final ModuleCategory getCategory() {
		return category;
	}

	public final List<Setting<?>> getSettings() {
		return Collections.unmodifiableList(settings);
	}

	protected final <S extends Setting<?>> S register(S setting) {
		settings.add(setting);
		return setting;
	}

	public boolean isEnabled() {
		return enabled;
	}

	public void setEnabled(boolean enabled) {
		if (this.enabled == enabled) {
			return;
		}
		this.enabled = enabled;
		if (enabled) {
			dev.opengrim.event.EventBus.get().register(this);
			onEnable();
		} else {
			dev.opengrim.event.EventBus.get().unregister(this);
			onDisable();
		}
	}

	public void toggle() {
		setEnabled(!enabled);
	}

	public int getBind() {
		return bind;
	}

	public void setBind(int bind) {
		this.bind = bind;
	}

	/**
	 * Whether the module boots enabled at client start (the original metadata
	 * bool {@code gf.aZL(id, <bool>, category)}; e.g. sixtwo.fO Discord Activity
	 * is registered with {@code true} — analysis/specs/casesafe/handlers/fO_.md
	 * "Runtime model"). Applied before config load so a saved config still wins.
	 */
	public boolean bootEnabled() {
		return false;
	}

	protected void onEnable() {
	}

	protected void onDisable() {
	}

	/** Called every client tick while enabled. */
	public void onTick() {
	}
}