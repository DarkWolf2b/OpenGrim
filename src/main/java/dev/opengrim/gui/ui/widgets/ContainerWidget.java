package dev.opengrim.gui.ui.widgets;

import java.util.ArrayList;
import java.util.List;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Widget;

/**
 * Port of sixtwo.iS: a vertical container that lays out child widgets with
 * fixed row heights, clips overflow and scrolls ({@code bwH} add, {@code bwI}
 * list, {@code bwJ} replace; content pane {@code bi cjnmJ} of the bl window
 * renders inside one at bl.java:888-891).
 */
public class ContainerWidget extends Widget {
	private final List<Widget> children = new ArrayList<>();
	private float scroll;
	private float contentHeight;
	private float rowHeight = 14.0f;

	/** iS.bwH. */
	public ContainerWidget add(Widget child) {
		children.add(child);
		return this;
	}

	/** iS.bwJ. */
	public ContainerWidget replace(Widget oldChild, Widget newChild) {
		int idx = children.indexOf(oldChild);
		if (idx >= 0) {
			children.set(idx, newChild);
		}
		return this;
	}

	/** iS.bwI. */
	public List<Widget> children() {
		return children;
	}

	public ContainerWidget rowHeight(float rowHeight) {
		this.rowHeight = rowHeight;
		return this;
	}

	/** Fluent bounds helper. */
	public ContainerWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	public void setScroll(float scroll) {
		this.scroll = Math.max(0.0f, Math.min(Math.max(0.0f, contentHeight - h), scroll));
	}

	public float contentHeight() {
		return contentHeight;
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		// Lay out children top-down at their natural heights; clip to the container.
		draw.pushScissor(x, y, w, h);
		float cy = y - scroll;
		for (Widget child : children) {
			float childH = child.height() > 0.0f ? child.height() : rowHeight;
			child.at(x + 1.0f, cy).size(w - 2.0f, childH);
			child.render(draw);
			cy += childH;
		}
		contentHeight = Math.max(0.0f, cy + scroll - y);
		draw.popScissor();
	}

	@Override
	public boolean onScroll(double mx, double my, double amount) {
		setScroll(scroll - (float) amount * 12.0f);
		return true;
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		// Children were positioned by the last draw pass (scroll already applied).
		for (int i = children.size() - 1; i >= 0; i--) {
			Widget child = children.get(i);
			if (child.contains(mx, my) && child.onMouseDown(mx, my, button)) {
				return true;
			}
		}
		return false;
	}

	@Override
	public boolean onMouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
		for (int i = children.size() - 1; i >= 0; i--) {
			Widget child = children.get(i);
			if (child.onMouseDrag(mx, my, button, dx, dy)) {
				return true;
			}
		}
		return false;
	}

	@Override
	public boolean onMouseUp(double mx, double my, MouseButton button) {
		boolean consumed = false;
		for (Widget child : children) {
			if (child.onMouseUp(mx, my, button)) {
				consumed = true;
			}
		}
		return consumed;
	}

	@Override
	public boolean onCharTyped(char c) {
		for (int i = children.size() - 1; i >= 0; i--) {
			if (children.get(i).onCharTyped(c)) {
				return true;
			}
		}
		return false;
	}

	@Override
	public boolean onKeyPressed(int key, int scancode, int modifiers) {
		for (int i = children.size() - 1; i >= 0; i--) {
			if (children.get(i).onKeyPressed(key, scancode, modifiers)) {
				return true;
			}
		}
		return false;
	}
}
