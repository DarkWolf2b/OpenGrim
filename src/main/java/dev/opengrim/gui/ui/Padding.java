package dev.opengrim.gui.ui;

/**
 * Port of sixtwo.ld: uniform padding with {@code all()} factories and
 * {@code inflate}/{@code deflate} used by the widget framework.
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/ld.java;
 * usages: {@code ld.all(6.0f)} (c search field), {@code ld.all(4.0f)}
 * (aJ.java:141), {@code ld.all(7.0f)} defaults in lC.java:496/561.
 */
public final class Padding {
	public static final Padding ZERO = new Padding(0.0f);

	private final float value;

	private Padding(float value) {
		this.value = value;
	}

	/** ld.all. */
	public static Padding all(float value) {
		return new Padding(value);
	}

	public float value() {
		return value;
	}

	/** Inflate a rect outward by the padding (ld inflate used by lC.ccW blur path). */
	public Rect inflate(Rect rect) {
		return new Rect(rect.x() - value, rect.y() - value, rect.width() + value * 2.0f, rect.height() + value * 2.0f);
	}

	/** Shrink a rect inward by the padding. */
	public Rect deflate(Rect rect) {
		return new Rect(rect.x() + value, rect.y() + value, Math.max(0.0f, rect.width() - value * 2.0f), Math.max(0.0f, rect.height() - value * 2.0f));
	}
}
