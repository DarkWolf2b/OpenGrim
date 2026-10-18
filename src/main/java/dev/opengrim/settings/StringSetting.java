package dev.opengrim.settings;

/** Free-text string setting (the original's {@code cy} URL/text settings). */
public class StringSetting extends Setting<String> {
	public StringSetting(String id, String defaultValue) {
		super(id, defaultValue);
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
