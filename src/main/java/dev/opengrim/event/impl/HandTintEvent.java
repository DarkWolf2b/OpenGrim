package dev.opengrim.event.impl;

/**
 * Fired once per first-person hand item render pass (from the head of
 * {@code ItemRenderer#renderItem} when the display context is first-person).
 * Hand Chams (sixtwo de) maps its color/transparency parameters onto the
 * multipliers here; the render mixin wraps the item vertex consumer with a
 * color-multiplying filter when {@link #active()} is true.
 */
public class HandTintEvent {
	private boolean active;
	private float red = 1.0f;
	private float green = 1.0f;
	private float blue = 1.0f;
	private float alpha = 1.0f;

	public boolean active() {
		return active;
	}

	public void setActive(boolean active) {
		this.active = active;
	}

	public float red() {
		return red;
	}

	public float green() {
		return green;
	}

	public float blue() {
		return blue;
	}

	public float alpha() {
		return alpha;
	}

	public void set(float red, float green, float blue, float alpha) {
		this.red = red;
		this.green = green;
		this.blue = blue;
		this.alpha = alpha;
	}
}