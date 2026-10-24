package dev.opengrim.gui.ui.widgets;

import java.util.function.Consumer;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Widget;

/**
 * Port of sixtwo.in (single-line text field) with the search-field surface of
 * sixtwo.Q as used by the Click GUI (c search field builder:
 * {@code .ip(text).io(lf.blMVg = IconGlyph.IMPORT).is(8.0f).je(true)
 * .jq/js/jr(mG3).jk/jl/jm(mG2).jf(ld.all(6.0f)).jb(this::E)}; mG2 = text
 * color, mG3 = text color at 0.3 alpha — placeholder rendered muted).
 */
public class TextFieldWidget extends Widget {
	private final String placeholder;
	private final StringBuilder text = new StringBuilder();
	private boolean focused;
	private boolean bare;
	private int cursor;
	private Consumer<String> onChange;

	public TextFieldWidget(String placeholder) {
		this.placeholder = placeholder;
	}

	/** Q surface mode: no background, no placeholder (the bare header search of bl). */
	public TextFieldWidget bare(boolean bare) {
		this.bare = bare;
		return this;
	}

	/** Focus state (used by keybind close checks). */
	public boolean isFocused() {
		return focused;
	}

	/** Explicit focus (search overlay open). */
	public void focus() {
		focused = true;
		cursor = text.length();
	}

	/** Explicit unfocus (search overlay close). */
	public void blur() {
		focused = false;
	}

	public TextFieldWidget onChange(Consumer<String> onChange) {
		this.onChange = onChange;
		return this;
	}

	public TextFieldWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	public String text() {
		return text.toString();
	}

	public void setText(String value) {
		text.setLength(0);
		text.append(value);
		cursor = text.length();
	}

	public void clear() {
		setText("");
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		if (bare) {
			// Bare surface (bl header search): text only, no frame.
			if (!text.isEmpty()) {
				draw.text(draw.font(), text.toString(), x, y + (h - 6.0f) / 2.0f, 6.0f, theme.text());
			}
			return;
		}
		float hoverT = hover.current();
		ColorF bg = theme.panelColor();
		if (hoverT > 0.0f) {
			bg = bg.lerp(theme.text(), 0.05f * hoverT);
		}
		draw.fillRounded(x, y, w, h, 3.5f, bg);
		float textH = 6.0f;
		float ty = y + (h - textH) / 2.0f;
		String shown = text.isEmpty() && !focused ? placeholder : text.toString();
		ColorF color = text.isEmpty() && !focused ? theme.text().withAlphaScale(0.3f) : theme.text();
		draw.text(draw.font(), shown, x + 7.5f, ty, textH, color);
		if (focused && (System.currentTimeMillis() / 500) % 2 == 0) {
			float caretX = x + 7.5f + draw.textWidth(draw.font(), text.substring(0, Math.min(cursor, text.length())), textH);
			draw.fillRect(caretX, ty, 1.0f, textH, theme.text());
		}
		if (focused) {
			draw.strokeRounded(x, y, w, h, 3.5f, theme.accent().withAlphaScale(0.6f));
		}
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (button == MouseButton.LEFT) {
			focused = true;
			cursor = text.length();
			return true;
		}
		return false;
	}

	@Override
	public boolean onCharTyped(char c) {
		if (!focused || c < 32) {
			return false;
		}
		text.insert(cursor, c);
		cursor++;
		notifyChange();
		return true;
	}

	@Override
	public boolean onKeyPressed(int key, int scancode, int modifiers) {
		if (!focused) {
			return false;
		}
		switch (key) {
			case 259 -> { // GLFW_KEY_BACKSPACE
				if (cursor > 0) {
					text.deleteCharAt(cursor - 1);
					cursor--;
					notifyChange();
				}
				return true;
			}
			case 261 -> { // GLFW_KEY_DELETE
				if (cursor < text.length()) {
					text.deleteCharAt(cursor);
					notifyChange();
				}
				return true;
			}
			case 262 -> { // GLFW_KEY_RIGHT
				cursor = Math.min(text.length(), cursor + 1);
				return true;
			}
			case 263 -> { // GLFW_KEY_LEFT
				cursor = Math.max(0, cursor - 1);
				return true;
			}
			case 257, 335 -> { // ENTER / KP_ENTER
				focused = false;
				return true;
			}
			default -> {
				return false;
			}
		}
	}

	private void notifyChange() {
		if (onChange != null) {
			onChange.accept(text.toString());
		}
	}
}
