package dev.opengrim.settings;

/**
 * Numeric setting with step/min/max/default constraints, mirroring the
 * builder chain evidence recovered from the original (UG=step, UE=min,
 * UF=max, UI=default).
 */
public class DoubleSetting extends Setting<Double> {
	private final double step;
	private final double min;
	private final double max;
	private final String suffix;

	public DoubleSetting(String id, double step, double min, double max, double defaultValue, String suffix) {
		super(id, clamp(defaultValue, min, max));
		this.step = step;
		this.min = min;
		this.max = max;
		this.suffix = suffix == null ? "" : suffix;
	}

	public double getStep() {
		return step;
	}

	public double getMin() {
		return min;
	}

	public double getMax() {
		return max;
	}

	public String getSuffix() {
		return suffix;
	}

	private static double clamp(double v, double min, double max) {
		return Math.max(min, Math.min(max, v));
	}

	@Override
	public void setValue(Double value) {
		super.setValue(clamp(value, min, max));
	}

	@Override
	public Object serialize() {
		return getValue();
	}

	@Override
	public void deserialize(Object raw) {
		if (raw instanceof Number n) {
			setValue(n.doubleValue());
		}
	}
}