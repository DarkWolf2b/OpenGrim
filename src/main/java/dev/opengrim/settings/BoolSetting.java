package dev.opengrim.settings;

public class BoolSetting extends Setting<Boolean> {
	public BoolSetting(String id, boolean defaultValue) {
		super(id, defaultValue);
	}

	@Override
	public Object serialize() {
		return getValue();
	}

	@Override
	public void deserialize(Object raw) {
		if (raw instanceof Boolean b) {
			setValue(b);
		}
	}
}