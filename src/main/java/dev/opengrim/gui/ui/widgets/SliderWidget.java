package dev.opengrim.gui.ui.widgets;

import java.util.Locale;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Widget;

/**
 * Port of sixtwo.cC: a labeled slider with min/max/step/suffix (the numeric
 * setting widget of the Click GUI).
 *
 * <p>Sources: sixtwo/c POOL fragments show the builder chain
 * {@code .Vy(1.0).Vw(1.0).Vx(10.0).VA(2.0)} (min 1, max 10, step 1, 2
 * decimals); sixtwo.cL decrypted strings "start"/"end" (range endpoints);
 * slider rendering in bl/bd widgets.
 */
public class SliderWidget extends Widget {
	private final String label;
	private final float min;
	private final float max;
	private final float step;
	private final int decimals;
	private final String suffix;
	private float value;
	private Runnable onChange;
	private java.util.function.DoubleSupplier getter;

	/** Dynamic value source (read each frame before drawing). */
	public SliderWidget getter(java.util.function.DoubleSupplier getter) {
		this.getter = getter;
		return this;
	}

	/** Update the displayed value without firing onChange. */
	public void setValueSilently(float value) {
		this.value = clamp(stepRound(value));
	}

	public SliderWidget(String label, float min, float max, float step, float initial) {
		this(label, min, max, step, initial, "", 1);
	}

	public SliderWidget(String label, float min, float max, float step, float initial, String suffix, int decimals) {
		this.label = label;
		this.min = min;
		this.max = max;
		this.step = step;
		this.value = initial;
		this.suffix = suffix;
		this.decimals = decimals;
	}

	/** Accessor for subclasses (setting write-through). */
	protected void applyPointPublic(double mx) {
		applyPoint(mx);
	}

	public SliderWidget onChange(Runnable onChange) {
		this.onChange = onChange;
		return this;
	}

	public SliderWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	public float value() {
		return value;
	}

	public void setValue(float value) {
		this.value = clamp(stepRound(value));
		if (onChange != null) {
			onChange.run();
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

	private float fraction() {
		return max > min ? clamp((value - min) / (max - min)) : 0.0f;
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		if (getter != null) {
			setValueSilently((float) getter.getAsDouble());
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
		// Card-style label row: semibold name, regular value right-aligned.
		draw.text(semibold, label, x + 7.5f, y + 1.0f, 7.0f, theme.text());
		String shown = String.format(Locale.ROOT, "%." + decimals + "f", value) + suffix;
		draw.textRight(regular, shown, x + w - 7.5f, y + 1.5f, 6.0f, theme.text().withAlphaScale(0.5f));
		// Track + fill + knob (cC.Vx track; geometry native, palette recovered).
		float trackY = y + h - 6.0f;
		float trackH = 2.0f;
		float tx = x + 7.5f;
		float tw = w - 15.0f;
		draw.fillRounded(tx, trackY, tw, trackH, 1.0f, theme.background().withAlphaScale(0.8f));
		float fillW = tw * fraction();
		draw.fillRounded(tx, trackY, Math.max(trackH, fillW), trackH, 1.0f, theme.accent());
		draw.fillCircle(tx + fillW - 2.0f, trackY - 2.0f, 4.0f, theme.text());
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (button == MouseButton.LEFT) {
			applyPoint(mx);
			return true;
		}
		return false;
	}

	@Override
	public boolean onMouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
		applyPoint(mx);
		return true;
	}

	protected void applyPoint(double mx) {
		float tx = x + 4.0f;
		float tw = Math.max(1.0f, w - 8.0f);
		float frac = (float) ((mx - tx) / tw);
		setValue(min + clamp(frac) * (max - min));
	}
}
