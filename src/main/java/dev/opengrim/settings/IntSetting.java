package dev.opengrim.settings;

public class IntSetting extends Setting<Integer> {
	private final int min;
	private final int max;

	public IntSetting(String id, int min, int max, int defaultValue) {
		super(id, Math.max(min, Math.min(max, defaultValue)));
		this.min = min;
		this.max = max;
	}

	public int getMin() {
		return min;
	}

	public int getMax() {
		return max;
	}

	@Override
	public void setValue(Integer value) {
		super.setValue(Math.max(min, Math.min(max, value)));
	}

	@Override
	public Object serialize() {
		return getValue();
	}

	@Override
	public void deserialize(Object raw) {
		if (raw instanceof Number n) {
			setValue(n.intValue());
		}
	}
}