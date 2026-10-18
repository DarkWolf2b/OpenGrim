package dev.opengrim.gui.ui.widgets;

import java.util.List;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Widget;

/**
 * Port of sixtwo.cD: a mode-cycling row (left click next mode, right click
 * previous).
 */
public class ModeWidget extends Widget {
	private final String label;
	private final List<String> modes;
	private int index;
	private Runnable onChange;

	/** List accessor for subclasses (previous-mode stepping). */
	public List<String> modeList() {
		return modes;
	}

	/** Update displayed mode without firing onChange (live binding). */
	public void setModeSilently(String mode) {
		int idx = modes.indexOf(mode);
		if (idx >= 0) {
			index = idx;
		}
	}

	public ModeWidget(String label, List<String> modes, String initial) {
		this.label = label;
		this.modes = modes;
		this.index = Math.max(0, modes.indexOf(initial));
	}

	public ModeWidget onChange(Runnable onChange) {
		this.onChange = onChange;
		return this;
	}

	public ModeWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	public String mode() {
		return modes.isEmpty() ? "" : modes.get(index);
	}

	private void setIndex(int i) {
		index = ((i % modes.size()) + modes.size()) % modes.size();
		if (onChange != null) {
			onChange.run();
		}
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
		MsdfFont regular = MsdfFont.regular();
		float hoverT = hover.current();
		ColorF bg = theme.panelColor();
		if (hoverT > 0.0f) {
			bg = bg.lerp(theme.text(), 0.05f * hoverT);
		}
		draw.fillRounded(x, y, w, h, 3.5f, bg);
		draw.text(semibold, label, x + 7.5f, y + h / 2.0f - 1.0f, 7.0f, theme.text());
		draw.textRight(regular, "< " + mode() + " >", x + w - 7.5f, y + h / 2.0f - 1.5f, 6.0f,
				theme.text().withAlphaScale(0.5f));
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (modes.isEmpty()) {
			return false;
		}
		if (button == MouseButton.LEFT) {
			setIndex(index + 1);
			return true;
		}
		if (button == MouseButton.RIGHT) {
			setIndex(index - 1);
			return true;
		}
		return false;
	}
}
