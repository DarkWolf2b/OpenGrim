package dev.opengrim.gui;

import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.text.Text;

/**
 * Screen-path essentials for wheel screens (the {@code av} essentials).
 *
 * <p>Sources: sixtwo/av.java (lines 162-166 {@code n()} design space via
 * bD, 144-226 {@code sh()} fit scale, 236-238 {@code sf()} open scale
 * {@code 0.5 + 0.5 * anim}, 112-134 {@code si()} key-press sync, 413-424
 * {@code render()} wrap, 357-383 {@code mouseClicked} plus 303-329
 * {@code mouseDragged} / 275-301 {@code mouseReleased} / 248-273
 * {@code mouseScrolled} / 426-450 {@code keyPressed} / 331-355
 * {@code charTyped} delegates, 385-408 {@code renderBackground} panorama
 * guard, 452-454 {@code shouldPause() == false}).
 *
 * <p>Vanilla-API deviations:
 * <ul>
 * <li>Design-fit scale ({@code av.sh()}) is provided by {@link #fitScale()}
 * as a helper but is not applied to the wheel pass; the wheel lays out
 * directly in screen space from {@code width}/{@code height} while the
 * original scales the whole pass through {@code rm.dil(sh())}
 * (sixtwo/av.java:413-424).</li>
 * <li>Pointer mapping uses the {@link DrawContext} mouse args directly; the
 * original remaps through {@code rm.dis()} (sixtwo/av.java).</li>
 * <li>Button mapping uses vanilla {@code button == 0} for left; the original
 * maps through {@code mA.cmN(button) == mA.sCBUa} (sixtwo/mA.java).</li>
 * <li>Key-press sync ({@code av.si()}) touches {@code KeyBinding.setPressed}
 * state; the rebuild leaves key state alone and reports the gap in the
 * final-message divergence list.</li>
 * </ul>
 */
public abstract class WheelScreenBase extends Screen {
	/** Design edge from {@code bD.n()} ({@code 270.0f}). */
	protected static final float DESIGN = WheelGeometry.DESIGN_SIZE;

	/** Open animation progress in {@code [0, 1]}; mirrors {@code Weytw.dhj()}. */
	protected float openAnim = 1.0f;
	/** Open animation start stamp for the fallback timed ramp. */
	protected long openStartedAt = System.currentTimeMillis();

	protected WheelScreenBase(Text title) {
		super(title);
	}

	/**
	 * Mirrors {@code av.sh()}: fit of the 270x270 design space into the
	 * current screen, clamped to {@code [0.5, 2.0]} with {@code 2.0} fallback.
	 */
	protected double fitScale() {
		if (DESIGN <= 0.0f || width <= 0 || height <= 0) {
			return 2.0;
		}
		double sx = (double) width / (double) DESIGN;
		double sy = (double) height / (double) DESIGN;
		double s = Math.min(sx, sy);
		if (!Double.isFinite(s)) {
			return 2.0;
		}
		return Math.max(0.5, Math.min(2.0, s));
	}

	/**
	 * Mirrors {@code av.sf()}: {@code 0.5 + 0.5 * openAnim}.
	 */
	protected float openScale() {
		return 0.5f + 0.5f * openAnim;
	}

	@Override
	public boolean shouldPause() {
		// Matches av.java shouldPause().
		return false;
	}

	@Override
	public void renderBackground(DrawContext context, int mouseX, int mouseY, float deltaTicks) {
		// Matches av.java renderBackground(): panorama only when no world is present.
		if (client != null && client.world == null) {
			renderPanoramaBackground(context, deltaTicks);
		}
	}

	/** Left-button check; mirrors {@code mA.cmN(button) == mA.sCBUa}. */
	protected static boolean isLeftButton(int button) {
		return button == 0;
	}
}
