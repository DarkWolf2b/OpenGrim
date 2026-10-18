package dev.opengrim.gui.ui;

import dev.opengrim.gui.anim.Easing;
import dev.opengrim.gui.anim.Tween;

/**
 * Port of the sixtwo widget base: sixtwo.az (position/size/hit-test/lifecycle)
 * plus the interactive surface of sixtwo.aj.
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/az.java and
 * sixtwo/aj.java (plaintext). Method mapping: {@code sW(x,y)}=position,
 * {@code sX(w,h)}=size, {@code hc(x,y)}=contains, {@code su(lC)}=render
 * (transform push + {@code bV}), {@code dk/dl/dm/dB}=mouse press/release/
 * hold/drag, {@code eK}=char typed, {@code vP()}=hover tween,
 * {@code oj(bool)}=open/close animation flag.
 */
public abstract class Widget {
	protected float x;
	protected float y;
	protected float w;
	protected float h;
	/** Visible flag (az.sT). */
	protected boolean visible = true;
	/** Enabled flag (az.sU). */
	protected boolean enabled = true;
	/** Hover animation (az.vP hover tween, rj.MBpuQ-style ease). */
	protected final Tween hover = new Tween(120, 0.0f, Easing.HOVER);
	/** Open/close animation flag (oj). */
	protected boolean open = true;

	/** az.sW. */
	public Widget at(float x, float y) {
		this.x = x;
		this.y = y;
		return this;
	}

	/** az.sX. */
	public Widget size(float w, float h) {
		this.w = w;
		this.h = h;
		return this;
	}

	/** az.sT. */
	public Widget setVisible(boolean visible) {
		this.visible = visible;
		return this;
	}

	public boolean isVisible() {
		return visible;
	}

	/** az.sU. */
	public Widget setEnabled(boolean enabled) {
		this.enabled = enabled;
		return this;
	}

	public boolean isEnabled() {
		return enabled;
	}

	public float x() {
		return x;
	}

	public float y() {
		return y;
	}

	public float width() {
		return w;
	}

	public float height() {
		return h;
	}

	/** az.hc: point containment. */
	public boolean contains(double px, double py) {
		return px >= x && py >= y && px < x + w && py < y + h;
	}

	/** az.vP: hover tween, advanced with the observed pointer. */
	public Tween hoverTween() {
		return hover;
	}

	/** aj.oj: open/close animation state. */
	public Widget setOpen(boolean open) {
		this.open = open;
		return this;
	}

	public boolean isOpen() {
		return open;
	}

	/** az.su: render entry — advance hover, then draw. */
	public final void render(GuiDraw draw) {
		if (!visible) {
			return;
		}
		hover.update(contains(draw.mouseX(), draw.mouseY()) && enabled ? 1.0f : 0.0f);
		updateAnimations();
		drawWidget(draw);
	}

	/**
	 * az.fX / aj.oa: per-frame animation advance, run once per frame from
	 * {@link #render} before the draw body ({@code sv} = {@code fX} +
	 * {@code bV}). Subclasses that own tweens must drive them here — tweens
	 * are pure targets ({@code rk.dhd}), so a tween that is never advanced
	 * stays at its initial value.
	 */
	protected void updateAnimations() {
	}

	/** az.bV: widget drawing. */
	protected abstract void drawWidget(GuiDraw draw);

	/** az.dk: mouse press; returns true when consumed. */
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		return false;
	}

	/** az.dl: mouse release. */
	public boolean onMouseUp(double mx, double my, MouseButton button) {
		return false;
	}

	/** az.dm: mouse hold (each frame while pressed inside). */
	public boolean onMouseHold(double mx, double my, MouseButton button) {
		return false;
	}

	/** az.dB: mouse drag. */
	public boolean onMouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
		return false;
	}

	/** az.fC: scroll. */
	public boolean onScroll(double mx, double my, double amount) {
		return false;
	}

	/** az.eK: char typed. */
	public boolean onCharTyped(char c) {
		return false;
	}

	/** aj key surface: key pressed. */
	public boolean onKeyPressed(int key, int scancode, int modifiers) {
		return false;
	}
}
