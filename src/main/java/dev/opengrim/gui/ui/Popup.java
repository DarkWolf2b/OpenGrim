package dev.opengrim.gui.ui;

import dev.opengrim.gui.anim.Easing;
import dev.opengrim.gui.anim.Tween;

/**
 * Port of sixtwo.ap: a floating popup panel with z-order
 * ({@code sP(int)} index, {@code sT(bool)} visibility), a drag surface and an
 * open/close animation. Used by the Click GUI for category panels
 * (sixtwo/c: 5 ap popups, z-index 0-4 via sP()) and by the settings window
 * for dialogs (bl.Eq).
 *
 * <p>The ap method bodies are native ({@code sixtwo/ap.c} handlers only
 * stitch dispatch stubs); the observable contract implemented here:
 * constructors {@code ap(x, y, w, h)} (ap.java:48-51, default radius
 * {@code 90.0f} degenerate / drag offsets {@code MCnYt, pNyTQ, BcpIo,
 * IzFhM}), z-index via {@code sP}, visibility via {@code sT}.
 */
public abstract class Popup extends Widget {
	/** ap z-index (sP). */
	protected int zIndex;
	/** Popup open animation (separate from hover). */
	protected final Tween openAnim = new Tween(150, 0.0f, Easing.OPEN);
	/** Drag state. */
	protected boolean dragging;
	protected float dragOffsetX;
	protected float dragOffsetY;
	/** Draggable flag (header drag like bl.TCMij). */
	protected boolean draggable = true;

	public Popup(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
	}

	/** ap.sP: z-index. */
	public Popup zIndex(int zIndex) {
		this.zIndex = zIndex;
		return this;
	}

	public int zIndex() {
		return zIndex;
	}

	/** ap.sT: visibility. */
	public Popup shown(boolean shown) {
		setVisible(shown);
		return this;
	}

	@Override
	public Popup setOpen(boolean open) {
		super.setOpen(open);
		openAnim.update(open ? 1.0f : 0.0f);
		return this;
	}

	public Tween openAnim() {
		return openAnim;
	}

	/**
	 * ap open/close tween, advanced per frame from the render entry
	 * ({@code az.fX}). Without this the tween only sees the {@link #setOpen}
	 * event and stays at its initial value — the popup would then be drawn
	 * at {@code 0.5 + 0.5 * 0} scale with all themed alphas at 0.
	 */
	@Override
	protected void updateAnimations() {
		openAnim.update(open ? 1.0f : 0.0f);
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (draggable && button == MouseButton.LEFT && my < y + 28.0f) {
			dragging = true;
			dragOffsetX = (float) (mx - x);
			dragOffsetY = (float) (my - y);
			return true;
		}
		return false;
	}

	@Override
	public boolean onMouseUp(double mx, double my, MouseButton button) {
		if (dragging) {
			dragging = false;
			return true;
		}
		return false;
	}

	@Override
	public boolean onMouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
		if (dragging) {
			// bl.Et: clamp into the design viewport (Math.clamp against window size).
			x = Math.max(0.0f, Math.min((float) (mx - dragOffsetX), Math.max(0.0f, 100000.0f)));
			y = Math.max(0.0f, (float) (my - dragOffsetY));
			return true;
		}
		return false;
	}

	/** ap.oa: per-frame update hook. */
	public void tick() {
	}

	/** Header height for drag hit-testing (bl header 28.0f). */
	protected float headerHeight() {
		return 28.0f;
	}
}
