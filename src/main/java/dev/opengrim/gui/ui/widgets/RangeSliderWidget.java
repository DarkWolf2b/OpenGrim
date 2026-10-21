package dev.opengrim.gui.ui.widgets;

import java.util.Locale;
import java.util.function.DoubleSupplier;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.Widget;

/**
 * Two-handle slider for {@link dev.opengrim.settings.RangeSetting}: the
 * OpenGrim form of the original {@code cA} widget.
 *
 * <p>Recovered contract: {@code cA} stores a {@code MutablePair} of handles
 * (casesafe/payload-named/sixtwo/cA_.java:22-24), exposes {@code UP(0/1)}
 * (201-210), tests {@code UM(d) = low <= d <= high} (391-410) and draws the
 * uniform value {@code UN() = mU.cpR} (557-559, mU.java:214-219). The visual
 * row height and palette follow the numeric slider ({@code cC}/{@code cA}
 * {@code dn()} 28.0, ModuleWidgetFactory class javadoc); the knob geometry is
 * native and is approximated by the existing slider geometry.
 */
public class RangeSliderWidget extends Widget {
	private final String label;
	private final float min;
	private final float max;
	private final float step;
	private final int decimals;
	private final String suffix;
	private float low;
	private float high;
	private Runnable onChange;
	private DoubleSupplier lowGetter;
	private DoubleSupplier highGetter;
	private int activeHandle;

	public RangeSliderWidget(String label, float min, float max, float step, float low, float high,
			String suffix, int decimals) {
		this.label = label;
		this.min = min;
		this.max = max;
		this.step = step;
		this.low = clamp(stepRound(low));
		this.high = clamp(stepRound(high));
		this.suffix = suffix;
		this.decimals = decimals;
		order();
	}

	/** Dynamic value sources (read each frame before drawing). */
	public RangeSliderWidget getters(DoubleSupplier low, DoubleSupplier high) {
		this.lowGetter = low;
		this.highGetter = high;
		return this;
	}

	public RangeSliderWidget onChange(Runnable onChange) {
		this.onChange = onChange;
		return this;
	}

	public RangeSliderWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	public float low() {
		return low;
	}

	public float high() {
		return high;
	}

	/** Update the displayed handles without firing onChange. */
	public void setValuesSilently(float low, float high) {
		this.low = clamp(stepRound(low));
		this.high = clamp(stepRound(high));
		order();
	}

	private void order() {
		if (this.low > this.high) {
			float swap = this.low;
			this.low = this.high;
			this.high = swap;
		}
	}

	private float clamp(float v) {
		return v < min ? min : (v > max ? max : v);
	}

	private float stepRound(float v) {
		if (step <= 0.0f) {
			return v;
		}
		return Math.round(v / step) * step;
	}

	private float fraction(float value) {
		return max > min ? clamp((value - min) / (max - min)) : 0.0f;
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		if (lowGetter != null && highGetter != null) {
			setValuesSilently((float) lowGetter.getAsDouble(), (float) highGetter.getAsDouble());
		}
		Theme theme = Theme.get();
		MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
		MsdfFont regular = MsdfFont.regular();
		float hoverT = hover.current();
		ColorF bg = theme.panelColor();
		if (hoverT > 0.0f) {
			bg = bg.lerp(theme.text(), 0.05f * hoverT);
		}
		draw.fillRounded(x, y, w, h, 3.5f, bg);
		draw.text(semibold, label, x + 7.5f, y + 1.0f, 7.0f, theme.text());
		String shown = String.format(Locale.ROOT, "%." + decimals + "f", low) + " - "
				+ String.format(Locale.ROOT, "%." + decimals + "f", high) + suffix;
		draw.textRight(regular, shown, x + w - 7.5f, y + 1.5f, 6.0f, theme.text().withAlphaScale(0.5f));
		float trackY = y + h - 6.0f;
		float trackH = 2.0f;
		float tx = x + 7.5f;
		float tw = w - 15.0f;
		draw.fillRounded(tx, trackY, tw, trackH, 1.0f, theme.background().withAlphaScale(0.8f));
		float fx = tx + tw * fraction(low);
		float fy = tx + tw * fraction(high);
		draw.fillRounded(fx, trackY, Math.max(trackH, fy - fx), trackH, 1.0f, theme.accent());
		draw.fillCircle(fx, trackY - 2.0f, 4.0f, theme.text());
		draw.fillCircle(fy, trackY - 2.0f, 4.0f, theme.text());
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (button != MouseButton.LEFT) {
			return false;
		}
		float tx = x + 7.5f;
		float tw = Math.max(1.0f, w - 15.0f);
		float lowX = tx + tw * fraction(low);
		float highX = tx + tw * fraction(high);
		activeHandle = Math.abs(mx - lowX) <= Math.abs(mx - highX) ? 0 : 1;
		applyPoint(mx);
		return true;
	}

	@Override
	public boolean onMouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
		applyPoint(mx);
		return true;
	}

	private void applyPoint(double mx) {
		float tx = x + 7.5f;
		float tw = Math.max(1.0f, w - 15.0f);
		float frac = (float) ((mx - tx) / tw);
		float value = clamp(stepRound(min + clamp(frac) * (max - min)));
		if (activeHandle == 0) {
			low = Math.min(value, high);
		} else {
			high = Math.max(value, low);
		}
		if (onChange != null) {
			onChange.run();
		}
	}
}
