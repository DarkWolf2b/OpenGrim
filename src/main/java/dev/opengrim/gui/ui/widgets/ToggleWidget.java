package dev.opengrim.gui.ui.widgets;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Widget;

/**
 * Port of sixtwo.cJ: a labeled boolean toggle row (the module switch used by
 * the Click GUI; original labels come from the string pool via mr.clS).
 *
 * <p>Sources: sixtwo/c handler POOL fragments (jk/jl/jm label fonts,
 * sixtwo_c.c Lsixtwo/c; A/B/C handlers), c widget wiring in
 * analysis/specs.
 */
public class ToggleWidget extends Widget {
	protected final String label;
	private boolean state;
	private Runnable onChange;

	public ToggleWidget(String label, boolean initialState) {
		this.label = label;
		this.state = initialState;
	}

	/** Update state without firing onChange (used for live binding). */
	public void setStateSilently(boolean state) {
		this.state = state;
	}

	public ToggleWidget onChange(Runnable onChange) {
		this.onChange = onChange;
		return this;
	}

	public ToggleWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	public boolean state() {
		return state;
	}

	public void setState(boolean state) {
		this.state = state;
		if (onChange != null) {
			onChange.run();
		}
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
		float hoverT = hover.current();
		// Row styling of the recovered card surface (bi cards of the bl window:
		// panel fill, radius 3.5, hover lift) — the cJ draw body itself is native.
		ColorF bg = theme.panelColor();
		if (hoverT > 0.0f) {
			bg = bg.lerp(theme.text(), 0.05f * hoverT);
		}
		draw.fillRounded(x, y, w, h, 3.5f, bg);
		// ak.oF (plaintext): label at MCnYt + 9.0f, vertically centred in the
		// row (jf.bAH(font.cat(), 18.0f)).
		draw.text(semibold, label, x + 9.0f, y + h / 2.0f - 1.0f, 7.0f,
				state ? theme.accent() : theme.text());
		// Switch indicator on the right edge.
		float sw = 14.0f;
		float sh = 6.0f;
		float sx = x + w - sw - 7.5f;
		float sy = y + (h - sh) / 2.0f;
		draw.fillRounded(sx, sy, sw, sh, sh / 2.0f, theme.background().withAlphaScale(0.8f));
		float knobX = sx + 1.0f + (sw - 5.0f) * stateT();
		draw.fillRounded(knobX, sy + 1.0f, 4.0f, sh - 2.0f, 2.0f,
				state ? theme.accent() : theme.text().withAlphaScale(0.5f));
	}

	private float stateT() {
		return state ? 1.0f : 0.0f;
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (button == MouseButton.LEFT) {
			setState(!state);
			return true;
		}
		return false;
	}
}
