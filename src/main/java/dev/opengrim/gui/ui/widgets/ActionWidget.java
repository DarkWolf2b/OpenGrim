package dev.opengrim.gui.ui.widgets;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Widget;

/**
 * Port of sixtwo.cz: an action button (label + callback).
 */
public class ActionWidget extends Widget {
	private final String label;
	private Runnable onClick;

	public ActionWidget(String label) {
		this.label = label;
	}

	public ActionWidget onClick(Runnable onClick) {
		this.onClick = onClick;
		return this;
	}

	public ActionWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
		float hoverT = hover.current();
		draw.fillRounded(x, y, w, h, 3.5f, theme.panelColor().lerp(theme.accent(), hoverT * 0.35f));
		draw.text(semibold, label, x + (w - semibold.width(label, 7.0f)) / 2.0f, y + h / 2.0f - 1.0f, 7.0f,
				theme.text());
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (button == MouseButton.LEFT) {
			if (onClick != null) {
				onClick.run();
			}
			return true;
		}
		return false;
	}
}
