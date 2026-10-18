package dev.opengrim.gui.ui;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

/**
 * Port of sixtwo.g: the widget manager. Holds widgets in z-order (last added
 * on top), dispatches input topmost-first, and supports class-based
 * queries/removals ({@code aY/aX/ba/bb}).
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/g.java (plaintext
 * skeleton: {@code ba(Class)} first-of-type query g.java:73-99,
 * {@code bb(Class)} remove-by-type g.java:100+, {@code aE(aR)} add,
 * {@code aL(lC)} render, {@code aF(aj)} remove).
 */
public class Manager {
	protected final List<Widget> widgets = new ArrayList<>();
	/** Widget currently capturing drags. */
	protected Widget dragTarget;

	/** g.aE: add widget on top. */
	public <T extends Widget> T add(T widget) {
		widgets.add(widget);
		return widget;
	}

	/** g.aF: remove widget. */
	public void remove(Widget widget) {
		widgets.remove(widget);
		if (dragTarget == widget) {
			dragTarget = null;
		}
	}

	/** g.bb(Class): remove all widgets of a type. */
	public <T extends Widget> void removeOfType(Class<T> type) {
		widgets.removeIf(type::isInstance);
		if (dragTarget != null && type.isInstance(dragTarget)) {
			dragTarget = null;
		}
	}

	/** g.aY(Class): all widgets of a type, topmost first. */
	public <T extends Widget> List<T> ofType(Class<T> type) {
		List<T> out = new ArrayList<>();
		for (int i = widgets.size() - 1; i >= 0; i--) {
			Widget w = widgets.get(i);
			if (type.isInstance(w)) {
				out.add(type.cast(w));
			}
		}
		return out;
	}

	/** g.aX(Class, supplier): get-or-create first of type. */
	public <T extends Widget> T getOrCreate(Class<T> type, java.util.function.Supplier<T> factory) {
		List<T> found = ofType(type);
		if (!found.isEmpty()) {
			return found.get(0);
		}
		T created = factory.get();
		return add(created);
	}

	/** g.ba(Class): optional first of type. */
	public <T extends Widget> Optional<T> firstOfType(Class<T> type) {
		List<T> found = ofType(type);
		return found.isEmpty() ? Optional.empty() : Optional.of(found.get(0));
	}

	/** g.aL: render all widgets bottom-most first. */
	public void render(GuiDraw draw) {
		for (Widget widget : widgets) {
			widget.render(draw);
		}
	}

	/** Input dispatch: topmost widget containing the point consumes. */
	public boolean mouseDown(double mx, double my, MouseButton button) {
		for (int i = widgets.size() - 1; i >= 0; i--) {
			Widget w = widgets.get(i);
			if (w.isVisible() && w.contains(mx, my) && w.onMouseDown(mx, my, button)) {
				dragTarget = w;
				return true;
			}
		}
		return false;
	}

	public boolean mouseUp(double mx, double my, MouseButton button) {
		boolean consumed = false;
		for (int i = widgets.size() - 1; i >= 0; i--) {
			Widget w = widgets.get(i);
			if (w.isVisible() && w.onMouseUp(mx, my, button)) {
				consumed = true;
			}
		}
		dragTarget = null;
		return consumed;
	}

	public boolean mouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
		if (dragTarget != null && dragTarget.isVisible()) {
			return dragTarget.onMouseDrag(mx, my, button, dx, dy);
		}
		return false;
	}

	public boolean scroll(double mx, double my, double amount) {
		for (int i = widgets.size() - 1; i >= 0; i--) {
			Widget w = widgets.get(i);
			if (w.isVisible() && w.contains(mx, my) && w.onScroll(mx, my, amount)) {
				return true;
			}
		}
		return false;
	}

	public boolean charTyped(char c) {
		for (int i = widgets.size() - 1; i >= 0; i--) {
			Widget w = widgets.get(i);
			if (w.isVisible() && w.onCharTyped(c)) {
				return true;
			}
		}
		return false;
	}

	public boolean keyPressed(int key, int scancode, int modifiers) {
		for (int i = widgets.size() - 1; i >= 0; i--) {
			Widget w = widgets.get(i);
			if (w.isVisible() && w.onKeyPressed(key, scancode, modifiers)) {
				return true;
			}
		}
		return false;
	}

	/** Raise a widget to the top of the z-order (drag-to-front). */
	public void raise(Widget widget) {
		if (widgets.remove(widget)) {
			widgets.add(widget);
		}
	}

	public void clear() {
		widgets.clear();
		dragTarget = null;
	}
}
