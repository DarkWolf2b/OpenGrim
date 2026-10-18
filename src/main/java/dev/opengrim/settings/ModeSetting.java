package dev.opengrim.settings;

import java.util.List;

/**
 * Mode setting: one of a fixed set of named options.
 */
public class ModeSetting extends Setting<String> {
	private final List<String> modes;

	public ModeSetting(String id, List<String> modes, String defaultMode) {
		super(id, modes.contains(defaultMode) ? defaultMode : modes.get(0));
		this.modes = List.copyOf(modes);
	}

	public List<String> getModes() {
		return modes;
	}

	public void cycle() {
		int idx = (modes.indexOf(getValue()) + 1) % modes.size();
		setValue(modes.get(idx));
	}

	@Override
	public void setValue(String value) {
		if (modes.contains(value)) {
			super.setValue(value);
		}
	}

	@Override
	public Object serialize() {
		return getValue();
	}

	@Override
	public void deserialize(Object raw) {
		if (raw instanceof String s) {
			setValue(s);
		}
	}
}