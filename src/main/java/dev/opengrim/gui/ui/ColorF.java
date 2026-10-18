package dev.opengrim.gui.ui;

import net.minecraft.util.math.MathHelper;

/**
 * Port of sixtwo.mG: an RGBA color with 0..255 float channels and the exact
 * helper surface used by the GUI ({@code cob} alpha-scale, {@code coa}
 * alpha-set, {@code coc} lerp, {@code coh} packed ARGB, {@code cnQ} unpack,
 * {@code cnP/cnR} factories, {@code cod}/{@code cof} 0.7 dimming).
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/mG.java (fully
 * plaintext: {@code cob(mG.java:62)}, {@code coa(mG.java:308)},
 * {@code coc(mG.java:518)}, {@code coh(mG.java:1049)}, static palette
 * {@code mG.java:184-199}).
 */
public final class ColorF {
	/** 0,0,0 — mG.QHTxQ. */
	public static final ColorF BLACK = rgb(0.0f, 0.0f, 0.0f);
	/** 255,255,255 — mG.hoGuU. */
	public static final ColorF WHITE = rgb(255.0f, 255.0f, 255.0f);
	/** 255,0,0 — mG.vuAhq. */
	public static final ColorF RED = rgb(255.0f, 0.0f, 0.0f);
	/** 0,255,71 — mG.rxCUH. */
	public static final ColorF GREEN = rgb(0.0f, 255.0f, 71.0f);
	/** 0,255,255 — mG.FQWvo. */
	public static final ColorF CYAN = rgb(0.0f, 255.0f, 255.0f);
	/** 0,71,255 — mG.Cgzkn. */
	public static final ColorF AZURE = rgb(0.0f, 71.0f, 255.0f);
	/** 128,205,255 — mG.NwQaf. */
	public static final ColorF SKY = rgb(128.0f, 205.0f, 255.0f);
	/** 88,86,214 — mG.JTHGB. */
	public static final ColorF INDIGO = rgb(88.0f, 86.0f, 214.0f);
	/** 255,255,0 — mG.NiWiU. */
	public static final ColorF YELLOW = rgb(255.0f, 255.0f, 0.0f);
	/** 255,155,0 — mG.xeUrY. */
	public static final ColorF ORANGE = rgb(255.0f, 155.0f, 0.0f);
	/** 151,71,255 — mG.yHyOB (default theme accent). */
	public static final ColorF VIOLET = rgb(151.0f, 71.0f, 255.0f);
	/** 255,45,85 — mG.ibYER. */
	public static final ColorF PINK = rgb(255.0f, 45.0f, 85.0f);
	/** transparent — mG.UhgnI. */
	public static final ColorF TRANSPARENT = rgba(0.0f, 0.0f, 0.0f, 0.0f);

	private final float r;
	private final float g;
	private final float b;
	private final float a;

	private ColorF(float r, float g, float b, float a) {
		this.r = MathHelper.clamp(r, 0.0f, 255.0f);
		this.g = MathHelper.clamp(g, 0.0f, 255.0f);
		this.b = MathHelper.clamp(b, 0.0f, 255.0f);
		this.a = MathHelper.clamp(a, 0.0f, 255.0f);
	}

	/** mG.cnP: opaque RGB. */
	public static ColorF rgb(float r, float g, float b) {
		return new ColorF(r, g, b, 255.0f);
	}

	/** mG.cnR: RGBA with explicit alpha. */
	public static ColorF rgba(float r, float g, float b, float a) {
		return new ColorF(r, g, b, a);
	}

	/** mG.cnQ: unpack 0xAARRGGBB int. */
	public static ColorF fromArgb(int argb) {
		return rgba((argb >> 16) & 0xFF, (argb >> 8) & 0xFF, argb & 0xFF, (argb >> 24) & 0xFF);
	}

	/** mG.cob: copy with alpha multiplied by {@code alpha/255}. */
	public ColorF withAlphaScale(float alpha) {
		return new ColorF(r, g, b, a * alpha);
	}

	/** mG.coa: copy with alpha set to {@code alpha/255}. */
	public ColorF withAlpha(float alpha) {
		return new ColorF(r, g, b, alpha);
	}

	/** mG.cod: 0.7 dimming. */
	public ColorF dim() {
		return scale(0.7f);
	}

	/** mG.cof: 1/0.7 brightening (inverse dim). */
	public ColorF brighten() {
		return divide(0.7f);
	}

	/** mG.coe: channel scale. */
	public ColorF scale(float factor) {
		return new ColorF(Math.max(r * factor, 0.0f), Math.max(g * factor, 0.0f), Math.max(b * factor, 0.0f), a);
	}

	/** mG.cog: channel divide. */
	public ColorF divide(float divisor) {
		return new ColorF(Math.min(r / divisor, 255.0f), Math.min(g / divisor, 255.0f), Math.min(b / divisor, 255.0f), a);
	}

	/** mG.coc: component lerp against {@code other} by {@code t} in [0,1]. */
	public ColorF lerp(ColorF other, float t) {
		t = Math.min(1.0f, Math.max(0.0f, t));
		return new ColorF(lerp(r, other.r, t), lerp(g, other.g, t), lerp(b, other.b, t), lerp(a, other.a, t));
	}

	private static float lerp(float from, float to, float t) {
		return from + (to - from) * t;
	}

	/** mG.cor/red. */
	public float red() {
		return r;
	}

	/** mG.cos/green. */
	public float green() {
		return g;
	}

	/** mG.cot/blue. */
	public float blue() {
		return b;
	}

	/** mG.cou/alpha. */
	public float alpha() {
		return a;
	}

	/** mG.coh: pack as 0xAARRGGBB. */
	public int argb() {
		return (Math.round(a) & 0xFF) << 24 | (Math.round(r) & 0xFF) << 16
				| (Math.round(g) & 0xFF) << 8 | Math.round(b) & 0xFF;
	}

	@Override
	public boolean equals(Object obj) {
		return obj instanceof ColorF other && argb() == other.argb();
	}

	@Override
	public int hashCode() {
		return argb();
	}

	@Override
	public String toString() {
		// mG.coo format: alpha,r,g,b rounded.
		return String.format("%d,%d,%d,%d", Math.round(a), Math.round(r), Math.round(g), Math.round(b));
	}
}
