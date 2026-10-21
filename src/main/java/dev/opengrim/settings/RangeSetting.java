package dev.opengrim.settings;

import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ThreadLocalRandom;

/**
 * Two-handle numeric range setting, the OpenGrim form of the original
 * {@code cA} widget ("Packet Interval", "Lag Range Distance", Ambience times).
 *
 * <p>Recovered contract (sixtwo.cA, casesafe/payload-named/sixtwo/cA_.java):
 * the widget stores a {@code MutablePair<Double,Double>} of handles
 * ({@code wJgtl}), exposes handle 0/1 through {@code UP(int)} (line 201-210),
 * tests a value with {@code UM(double)} as {@code left <= d <= right}
 * (cA_.java:391-410), and draws a value with {@code UN()} (cA_.java:557-559),
 * which is {@code mU.cpR} → {@code random.nextDouble() * (right - left) + left}
 * (mU.java:214-219), i.e. uniform over the two handles.
 *
 * <p>The four builders map to {@code step}/{@code min}/{@code max} and the
 * handle pair: {@code UG}=step, {@code UE}=min, {@code UF}=max,
 * {@code UI(low,high)}=defaults, {@code UH}=suffix.
 */
public class RangeSetting extends Setting<RangeSetting.Range> {
	/** The two handle values, low first. */
	public record Range(double low, double high) {
	}

	private final double step;
	private final double min;
	private final double max;
	private final String suffix;

	public RangeSetting(String id, double step, double min, double max, double defaultLow, double defaultHigh,
			String suffix) {
		super(id, normalize(min, max, defaultLow, defaultHigh, step));
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

	public double getLow() {
		return getValue().low();
	}

	public double getHigh() {
		return getValue().high();
	}

	public void setLow(double low) {
		setHandles(low, getHigh());
	}

	public void setHigh(double high) {
		setHandles(getLow(), high);
	}

	public void setHandles(double low, double high) {
		super.setValue(normalize(min, max, low, high, step));
	}

	/** {@code mU.cpR(cA)}: a uniform draw over the current two handles. */
	public double randomValue() {
		double low = getLow();
		double high = getHigh();
		if (high <= low) {
			return low;
		}
		return ThreadLocalRandom.current().nextDouble(low, high);
	}

	/** {@code cA.UM(double)}: {@code low <= value <= high}. */
	public boolean contains(double value) {
		return value >= getLow() && value <= getHigh();
	}

	@Override
	public Object serialize() {
		Map<String, Object> out = new LinkedHashMap<>();
		out.put("low", getLow());
		out.put("high", getHigh());
		return out;
	}

	@Override
	public void deserialize(Object raw) {
		if (raw instanceof Map<?, ?> map) {
			Object low = map.get("low");
			Object high = map.get("high");
			if (low instanceof Number l && high instanceof Number h) {
				setHandles(l.doubleValue(), h.doubleValue());
			}
		} else if (raw instanceof List<?> list && list.size() == 2
				&& list.get(0) instanceof Number l && list.get(1) instanceof Number h) {
			setHandles(l.doubleValue(), h.doubleValue());
		}
	}

	private static Range normalize(double min, double max, double low, double high, double step) {
		double l = clampStep(low, min, max, step);
		double h = clampStep(high, min, max, step);
		if (l > h) {
			double swap = l;
			l = h;
			h = swap;
		}
		return new Range(l, h);
	}

	private static double clampStep(double value, double min, double max, double step) {
		double v = Math.max(min, Math.min(max, value));
		if (step > 0.0) {
			v = Math.round(v / step) * step;
			v = Math.max(min, Math.min(max, v));
		}
		return v;
	}
}
