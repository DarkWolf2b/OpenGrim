package dev.opengrim.gui.anim;

import dev.opengrim.gui.ui.ColorF;

/**
 * Port of sixtwo.ri: an animated RGBA color built from four {@link Tween}s
 * (one per channel), advanced with {@code dfT(current)} toward the theme
 * color.
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/ii.java:38-59
 * ({@code new ri(duration, color)} per theme channel),
 * sixtwo/ri.java surface {@code dfT}).
 */
public final class AnimatedColor {
	private final Tween r;
	private final Tween g;
	private final Tween b;
	private final Tween a;

	public AnimatedColor(int durationMs, ColorF color) {
		this.r = new Tween(durationMs, color.red());
		this.g = new Tween(durationMs, color.green());
		this.b = new Tween(durationMs, color.blue());
		this.a = new Tween(durationMs, color.alpha());
	}

	/** ri.dfT: advance toward {@code target} and return the current color. */
	public ColorF update(ColorF target) {
		return ColorF.rgba(r.update(target.red()), g.update(target.green()), b.update(target.blue()), a.update(target.alpha()));
	}

	/** ri.dfT with per-channel first values (theme load). */
	public ColorF updateInit(ColorF initial, ColorF target) {
		return ColorF.rgba(r.updateInit(initial.red(), target.red()), g.updateInit(initial.green(), target.green()), b.updateInit(initial.blue(), target.blue()), a.updateInit(initial.alpha(), target.alpha()));
	}

	/** ri surface: hard set all channels. */
	public void snap(ColorF color) {
		r.snap(color.red());
		g.snap(color.green());
		b.snap(color.blue());
		a.snap(color.alpha());
	}

	/** ri surface: current color without advancing. */
	public ColorF current() {
		return ColorF.rgba(r.current(), g.current(), b.current(), a.current());
	}
}
