package dev.opengrim.gui.screen;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Popup;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.keybind.KeybindManager;
import dev.opengrim.module.Module;
import dev.opengrim.settings.KeybindSetting;
import org.lwjgl.glfw.GLFW;

/**
 * Port of {@code sixtwo.bh}, the 110x80 popup opened by the settings panel's
 * {@code bk} "Keybind" row (analysis/artifacts/gui-native/bd-settings-spec.md
 * "bk.dk -> bh"). The original is native: a header value from
 * {@code gg.baf()} (the module bind) plus two toggles over {@code gg.bai()} /
 * {@code gg.baj()}, which select whether the module appears in the array list
 * and whether that row shows its bind.
 *
 * <p>The port keeps the recovered 110x80 frame, renders the bind value through
 * {@code jb.byM}'s replacement ({@link KeybindSetting#displayName}), and lets a
 * click on the value capture the next key/mouse button. Escape closes.
 */
public final class ModuleBindPopup extends Popup {
	private static final float WIDTH = 110.0f;
	private static final float HEIGHT = 80.0f;
	private static final float HEADER_H = 28.0f;
	private static final float ROW_H = 20.0f;

	private Module module;
	private boolean listening;

	public ModuleBindPopup() {
		super(0.0f, 0.0f, WIDTH, HEIGHT);
		setVisible(false);
	}

	public void openFor(Module module, float x, float y) {
		this.module = module;
		this.listening = false;
		at(x, y);
		size(WIDTH, HEIGHT);
		setVisible(true);
		setOpen(true);
		openAnim.snap(0.0f);
	}

	public Module module() {
		return module;
	}

	public boolean isListening() {
		return listening;
	}

	public void close() {
		listening = false;
		module = null;
		setOpen(false);
		setVisible(false);
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
		MsdfFont regular = MsdfFont.regular();
		float alpha = Math.min(1.0f, openAnim.current() + 0.2f);
		ColorF panel = theme.background().lerp(theme.panelColor(), 0.3f).withAlphaScale(alpha);
		draw.fillRounded(x, y, w, h, 7.0f, panel);
		draw.strokeRounded(x, y, w, h, 7.0f, theme.text().withAlphaScale(0.06f * alpha));

		draw.text(semibold, "Keybind", x + 9.0f, y + 9.0f, 7.0f, theme.text().withAlphaScale(alpha));
		String value = listening ? "..." : KeybindSetting.displayName(module == null ? -999 : module.getBind());
		draw.textRight(regular, value, x + w - 9.0f, y + 10.0f, 6.0f,
				(listening ? theme.accent() : theme.text().withAlphaScale(0.6f)).withAlphaScale(alpha));

		float rowY = y + HEADER_H + 4.0f;
		drawToggleRow(draw, semibold, "ArrayList", module != null && module.isShownInArrayList(),
				x + 9.0f, rowY, alpha);
		drawToggleRow(draw, semibold, "Show Key", module != null && module.isShowKeybindInArrayList(),
				x + 9.0f, rowY + ROW_H, alpha);
	}

	private void drawToggleRow(GuiDraw draw, MsdfFont font, String label, boolean state, float labelX,
			float rowY, float alpha) {
		Theme theme = Theme.get();
		draw.text(font, label, labelX, rowY, 6.5f, theme.text().withAlphaScale(alpha));
		float sw = 14.0f;
		float sh = 6.0f;
		float sx = x + w - sw - 9.0f;
		float sy = rowY + 1.0f;
		draw.fillRounded(sx, sy, sw, sh, sh / 2.0f,
				theme.background().withAlphaScale(0.8f * alpha));
		draw.fillRounded(sx + 1.0f + (sw - 5.0f) * (state ? 1.0f : 0.0f), sy + 1.0f, 4.0f,
				sh - 2.0f, 2.0f, (state ? theme.accent() : theme.text().withAlphaScale(0.5f)).withAlphaScale(alpha));
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (!contains(mx, my) || module == null) {
			return false;
		}
		if (button == MouseButton.LEFT) {
			if (my < y + HEADER_H) {
				listening = true;
				return true;
			}
			if (my < y + HEADER_H + 4.0f + ROW_H) {
				module.setShownInArrayList(!module.isShownInArrayList());
				return true;
			}
			if (my < y + HEADER_H + 4.0f + 2.0f * ROW_H) {
				module.setShowKeybindInArrayList(!module.isShowKeybindInArrayList());
				return true;
			}
		}
		if (listening && button != MouseButton.LEFT) {
			int code = switch (button) {
				case RIGHT -> GLFW.GLFW_MOUSE_BUTTON_RIGHT;
				case MIDDLE -> GLFW.GLFW_MOUSE_BUTTON_MIDDLE;
				default -> -1;
			};
			if (code >= 0) {
				KeybindManager.setBind(module, code);
				listening = false;
			}
			return true;
		}
		return false;
	}

	@Override
	public boolean onKeyPressed(int key, int scancode, int modifiers) {
		if (!listening) {
			if (key == GLFW.GLFW_KEY_ESCAPE) {
				close();
				return true;
			}
			return false;
		}
		if (key == GLFW.GLFW_KEY_ESCAPE) {
			listening = false;
			return true;
		}
		if (key > 0 && module != null) {
			KeybindManager.setBind(module, key);
			listening = false;
		}
		return true;
	}

	@Override
	public boolean onCharTyped(char c) {
		return listening;
	}
}
