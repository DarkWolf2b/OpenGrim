package dev.opengrim.gui.ui.widgets;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Widget;
import dev.opengrim.gui.ui.IconGlyph;

/**
 * Port of sixtwo.aq (icon/glyph button) and sixtwo.R (the 20×20 close button
 * of the bl window: {@code od.cBQ(afmPV)} texture, {@code W.igoQj} icon,
 * {@code .jb(r2 -> this.Er())} close callback — R.java surface). The original
 * passes an {@code lf} glyph (see {@link IconGlyph}); the icon font is packed
 * inside the payload DLL, so a text glyph stands in (documented divergence).
 */
public class IconButton extends Widget {
	private final String glyph;
	private final float size;
	private Runnable onClick;

	public IconButton(String glyph, float size) {
		this.glyph = glyph;
		this.size = size;
		size(size, size);
	}

	public IconButton onClick(Runnable onClick) {
		this.onClick = onClick;
		return this;
	}

	public IconButton at2(float x, float y) {
		at(x, y);
		return this;
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		float hoverT = hover.current();
		draw.fillRect(x, y, w, h, theme.background().lerp(theme.panelColor(), 0.5f + 0.3f * hoverT));
		if (hoverT > 0.5f) {
			draw.strokeRounded(x, y, w, h, 4.0f, theme.text().withAlphaScale(0.3f));
		}
		float textH = 7.0f;
		float tx = x + (w - draw.textWidth(draw.font(), glyph, textH)) / 2.0f;
		float ty = y + (h - textH) / 2.0f;
		draw.text(draw.font(), glyph, tx, ty, textH,
				hoverT > 0.5f ? theme.text() : theme.text().withAlphaScale(0.6f));
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
