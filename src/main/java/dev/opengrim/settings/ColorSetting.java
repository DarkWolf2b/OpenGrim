package dev.opengrim.settings;

/**
 * Color setting stored as packed ARGB int (alpha in the high byte), matching
 * the original's {@code cG} color-picker settings.
 */
public class ColorSetting extends Setting<Integer> {
	private final boolean allowAlpha;

	public ColorSetting(String id, int defaultArgb) {
		this(id, defaultArgb, true);
	}

	public ColorSetting(String id, int defaultArgb, boolean allowAlpha) {
		super(id, defaultArgb);
		this.allowAlpha = allowAlpha;
	}

	public boolean allowAlpha() {
		return allowAlpha;
	}

	public int red() {
		return (getValue() >> 16) & 0xFF;
	}

	public int green() {
		return (getValue() >> 8) & 0xFF;
	}

	public int blue() {
		return getValue() & 0xFF;
	}

	public int alpha() {
		return (getValue() >> 24) & 0xFF;
	}

	public float redF() {
		return red() / 255.0f;
	}

	public float greenF() {
		return green() / 255.0f;
	}

	public float blueF() {
		return blue() / 255.0f;
	}

	public float alphaF() {
		return alpha() / 255.0f;
	}

	@Override
	public Object serialize() {
		return getValue();
	}

	@Override
	public void deserialize(Object raw) {
		if (raw instanceof Number n) {
			setValue(n.intValue());
		} else if (raw instanceof String s) {
			try {
				setValue((int) Long.parseLong(s.replace("#", ""), 16));
			} catch (NumberFormatException ignored) {
			}
		}
	}
}
