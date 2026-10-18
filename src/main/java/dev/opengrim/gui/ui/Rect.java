package dev.opengrim.gui.ui;

/**
 * Port of sixtwo.lc: a float rect with the original accessor surface
 * ({@code bXF}=x, {@code bXG}=y, {@code bXH}=width, {@code bXI}=height,
 * {@code bXz}=right, {@code bXA}=bottom, {@code bXt}=set position,
 * {@code bXD}=contains point).
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/lc.java (fully
 * plaintext, lc.java:9-150).
 */
public final class Rect {
	private float x;
	private float y;
	private float w;
	private float h;

	public Rect(float x, float y, float w, float h) {
		this.x = x;
		this.y = y;
		this.w = w;
		this.h = h;
	}

	/** lc.bXF. */
	public float x() {
		return x;
	}

	/** lc.bXG. */
	public float y() {
		return y;
	}

	/** lc.bXH. */
	public float width() {
		return w;
	}

	/** lc.bXI. */
	public float height() {
		return h;
	}

	/** lc.bXz: x + width. */
	public float right() {
		return x + w;
	}

	/** lc.bXA: y + height. */
	public float bottom() {
		return y + h;
	}

	/** lc.bXt. */
	public void setPosition(float x, float y) {
		this.x = x;
		this.y = y;
	}

	/** lc.bXr. */
	public void set(float x, float y, float w, float h) {
		this.x = x;
		this.y = y;
		this.w = w;
		this.h = h;
	}

	/** lc.bXs. */
	public void set(Rect other) {
		set(other.x, other.y, other.w, other.h);
	}

	/** lc.bXD: point containment (jf.bAE). */
	public boolean contains(double px, double py) {
		return px >= x && py >= y && px < x + w && py < y + h;
	}

	/** lc.bXw: copy with new y. */
	public Rect withY(float newY) {
		return new Rect(x, newY, w, h);
	}

	/** lc.bXx: copy with new width. */
	public Rect withWidth(float newW) {
		return new Rect(x, y, newW, h);
	}

	/** lc.bXv: copy with new x. */
	public Rect withX(float newX) {
		return new Rect(newX, y, w, h);
	}

	/** lc.bXy: copy with new height. */
	public Rect withHeight(float newH) {
		return new Rect(x, y, w, newH);
	}
}
