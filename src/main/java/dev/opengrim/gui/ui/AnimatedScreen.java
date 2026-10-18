package dev.opengrim.gui.ui;

import dev.opengrim.gui.anim.Easing;
import dev.opengrim.gui.anim.Tween;
import net.minecraft.client.gui.Click;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.input.CharInput;
import net.minecraft.client.input.KeyInput;
import net.minecraft.text.Text;

/**
 * Port of sixtwo.av: the scale-animated GUI screen base. All input is
 * re-routed through scaled ("design space") coordinates into the
 * {@code cs} interface ({@code onMouseClicked/onMouseReleased/onMouseDragged/
 * onMouseScrolled/onKeyPressed/onCharTyped}); rendering wraps
 * {@link #renderGui} in the design-fit scale ({@code av.sh()}, av.java:144-226)
 * and the open/close scale ({@code av.sf()} = {@code 0.5 + 0.5 * tween},
 * av.java:236-238). Background renders the panorama when no world exists
 * (av.java:385-408). {@code shouldPause()} is false (av.java:452-454).
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/av.java (fully
 * plaintext).
 */
public abstract class AnimatedScreen extends Screen {
	/** av.Weytw: open/close tween. */
	protected final Tween openTween = new Tween(200, 0.0f, Easing.OPEN);
	/** av.VWsmm. */
	protected boolean closing = true;

	protected AnimatedScreen(Text title) {
		super(title);
	}

	/** av.n(): design viewport. */
	protected abstract float designWidth();

	protected abstract float designHeight();

	/** av.m(): the screen body in design space. */
	protected abstract void renderGui(GuiDraw draw);

	/** av.sf(). */
	public float openScale() {
		return 0.5f + 0.5f * openTween.current();
	}

	/** av.closing(). */
	public boolean isClosing() {
		return closing;
	}

	/**
	 * The bz.KE()/bD.LD() open sequence: guard world != null, set closing =
	 * false, restart the tween from 0, then attach the screen.
	 */
	public void openNow(net.minecraft.client.MinecraftClient client) {
		if (client.world == null) {
			return;
		}
		closing = false;
		openTween.snap(0.0f);
		client.setScreen(this);
	}

	/**
	 * The bz.KG()/bl.Ew() close sequence: mark closing, clear state and run
	 * widget close animations.
	 */
	public void closeNow() {
		closing = true;
	}

	/**
	 * av.sh(): fit of the design viewport into the real window, clamped to
	 * [0.5, 2.0], 2.0 degenerate fallback.
	 */
	protected double designScale() {
		float dw = designWidth();
		float dh = designHeight();
		if (dw <= 0.0f || dh <= 0.0f) {
			return 2.0;
		}
		double sx = (double) width / dw;
		double sy = (double) height / dh;
		double s = Math.min(sx, sy);
		if (!Double.isFinite(s)) {
			return 2.0;
		}
		return Math.max(0.5, Math.min(2.0, s));
	}

	/** rm.diq(): design-space window size. */
	protected float designWindowWidth() {
		return (float) ((double) width / designScale());
	}

	protected float designWindowHeight() {
		return (float) ((double) height / designScale());
	}

	@Override
	public final void render(DrawContext context, int mouseX, int mouseY, float deltaTicks) {
		// av.render pipeline: background first (panorama when world == null),
		// then the whole pass scaled into design space. super.render is not
		// called — av's final render() only invokes m(lC).
		renderBackground(context, mouseX, mouseY, deltaTicks);
		double scale = designScale();
		context.getMatrices().pushMatrix();
		context.getMatrices().scale((float) scale, (float) scale);
		double mx = mouseX / scale;
		double my = mouseY / scale;
		GuiDraw draw = new GuiDraw(context, mx, my, deltaTicks, textRenderer);
		try {
			// Open/close tween advance: opening runs toward 1, closing toward 0;
			// the screen detaches once the close tween finishes.
			if (closing) {
				openTween.withEasing(Easing.CLOSE);
				openTween.update(0.0f);
				if (openTween.finished()) {
					closeScreenNow();
					return;
				}
			} else {
				openTween.withEasing(Easing.OPEN);
				openTween.update(1.0f);
			}
			renderGui(draw);
		} finally {
			context.getMatrices().popMatrix();
		}
	}

	private void closeScreenNow() {
		if (client != null && client.currentScreen == this) {
			client.setScreen(null);
		}
	}

	@Override
	public void renderBackground(DrawContext context, int mouseX, int mouseY, float deltaTicks) {
		// av.renderBackground: panorama only when the player has no world.
		if (client != null && client.world == null) {
			renderPanoramaBackground(context, deltaTicks);
		}
	}

	@Override
	public boolean shouldPause() {
		return false;
	}

	// ------------------------------------------------------------------
	// cs input surface (design-space coordinates)
	// ------------------------------------------------------------------

	protected boolean onMouseClicked(double mx, double my, MouseButton button) {
		return false;
	}

	protected boolean onMouseReleased(double mx, double my, MouseButton button) {
		return false;
	}

	protected boolean onMouseDragged(double mx, double my, MouseButton button, double dx, double dy) {
		return false;
	}

	protected boolean onMouseScrolled(double mx, double my, double amount) {
		return false;
	}

	protected boolean onKeyPressed(int key, int scancode, int modifiers) {
		return false;
	}

	protected boolean onCharTyped(char c) {
		return false;
	}

	@Override
	public final boolean mouseClicked(Click click, boolean doubled) {
		return onMouseClicked(click.x() / designScale(), click.y() / designScale(), MouseButton.of(click.button()))
				|| super.mouseClicked(click, doubled);
	}

	@Override
	public final boolean mouseReleased(Click click) {
		return onMouseReleased(click.x() / designScale(), click.y() / designScale(), MouseButton.of(click.button()))
				|| super.mouseReleased(click);
	}

	@Override
	public final boolean mouseDragged(Click click, double offsetX, double offsetY) {
		return onMouseDragged(click.x() / designScale(), click.y() / designScale(),
				MouseButton.of(click.button()), offsetX, offsetY)
				|| super.mouseDragged(click, offsetX, offsetY);
	}

	@Override
	public final boolean mouseScrolled(double mouseX, double mouseY, double horizontal, double vertical) {
		return onMouseScrolled(mouseX / designScale(), mouseY / designScale(), vertical)
				|| super.mouseScrolled(mouseX, mouseY, horizontal, vertical);
	}

	@Override
	public final boolean keyPressed(KeyInput input) {
		return onKeyPressed(input.key(), input.scancode(), input.modifiers()) || super.keyPressed(input);
	}

	@Override
	public final boolean charTyped(CharInput input) {
		return onCharTyped((char) input.codepoint()) || super.charTyped(input);
	}
}
