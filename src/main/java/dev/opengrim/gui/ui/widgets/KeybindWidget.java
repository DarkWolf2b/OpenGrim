package dev.opengrim.gui.ui.widgets;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.Widget;
import dev.opengrim.settings.KeybindSetting;
import org.lwjgl.glfw.GLFW;

/**
 * Port of {@code sixtwo.y}: the 18-unit keybind row used by the module
 * settings panel for a {@link KeybindSetting} ({@code sixtwo.cD}).
 *
 * <p>Recovered surface: {@code y extends ak<cD>} with {@code dn() = 18}
 * (handler 0x1907c61b0), a label/value row with hover tween; the original
 * renders the bound key through {@code cD.VN() -> jb.byM(code)}
 * (casesafe/payload-named-cfr/sixtwo/y.java, cD_.java:81-83).
 *
 * <p>Interaction is the usual keybind capture: left click arms the row
 * ({@code ...}), the next keyboard key or mouse button binds; Escape cancels;
 * right click clears to {@code -999}. The native {@code y.dk}/{@code y.bV}
 * bodies are VM-hidden, so this is the recovered row geometry plus the
 * setting's own recovered surface.
 */
public class KeybindWidget extends Widget {
	private final KeybindSetting setting;
	private boolean listening;

	public KeybindWidget(KeybindSetting setting) {
		this.setting = setting;
	}

	public KeybindWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	public KeybindSetting setting() {
		return setting;
	}

	public boolean isListening() {
		return listening;
	}

	public void cancelListening() {
		listening = false;
	}

	/** Bind a mouse button delivered while this row is armed. */
	public void bindMouse(MouseButton button) {
		int code = switch (button) {
			case LEFT -> GLFW.GLFW_MOUSE_BUTTON_LEFT;
			case RIGHT -> GLFW.GLFW_MOUSE_BUTTON_RIGHT;
			case MIDDLE -> GLFW.GLFW_MOUSE_BUTTON_MIDDLE;
			case UNKNOWN -> -1;
		};
		if (code >= 0) {
			bind(code);
		}
	}

	private void bind(int code) {
		setting.setKey(code);
		listening = false;
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
		// ak.oF row label inset (sixtwo_35.java:159-167).
		draw.text(semibold, setting.getId(), x + 9.0f, y + h / 2.0f - 1.0f, 7.0f, theme.text());
		// cD.VN() value, right-aligned like the other compact rows.
		String shown = listening ? "..." : setting.getKeyName();
		ColorF valueColor = listening ? theme.accent() : theme.text().withAlphaScale(0.5f);
		draw.textRight(regular, shown, x + w - 9.0f, y + h / 2.0f - 1.5f, 6.0f, valueColor);
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (button == MouseButton.LEFT) {
			if (listening) {
				bindMouse(MouseButton.LEFT);
			} else {
				listening = true;
			}
			return true;
		}
		if (button == MouseButton.RIGHT) {
			if (listening) {
				bindMouse(MouseButton.RIGHT);
			} else {
				bind(KeybindSetting.UNBOUND);
			}
			return true;
		}
		if (listening && button == MouseButton.MIDDLE) {
			bindMouse(MouseButton.MIDDLE);
			return true;
		}
		return false;
	}

	@Override
	public boolean onKeyPressed(int key, int scancode, int modifiers) {
		if (!listening) {
			return false;
		}
		if (key == GLFW.GLFW_KEY_ESCAPE) {
			listening = false;
			return true;
		}
		if (key > 0) {
			bind(key);
		}
		return true;
	}
}
