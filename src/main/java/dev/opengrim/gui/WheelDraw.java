package dev.opengrim.gui;

import net.minecraft.client.gui.DrawContext;
import net.minecraft.text.Text;

/**
 * Vanilla drawing helpers for the radial wheel (the {@code lC} essentials).
 *
 * <p>Sources: sixtwo/lC.java (lines 107-109 {@code cff}, 253-255
 * {@code cfg}, 261-263 {@code ccP} factory, 265-267 {@code ccR} flush,
 * 310-312 {@code cdg}, 364-366 {@code cez} text, 482-484 {@code cdN} disc,
 * 491-493 {@code cdE} divider arcs, 551-553 {@code cdG} wedge, 782-784
 * {@code cek} panels), sixtwo/jF.java (line 38 {@code bHz} global tint),
 * sixtwo/jH.java (lines 35, 62, 88 {@code bIf}/{@code bId}/{@code bIe} scale
 * about a pivot).
 *
 * <p>Vanilla-API deviations (one per call site, geometry unchanged):
 * <ul>
 * <li>Global tint ({@code jF.bHz}) has no vanilla DrawContext counterpart; the
 * rebuild multiplies text color alpha by the open-anim value instead.</li>
 * <li>Scale about pivot ({@code jH.bId}/{@code bIf}) uses
 * {@code DrawContext.getMatrices()} push/translate/scale/translate/pop; the
 * original pushes the same matrix stack entry (sixtwo/jH.java).</li>
 * <li>Disc/wedge/arc fills ({@code cdN}/{@code cdG}/{@code cdE}) use custom
 * pipelines in the original (sixtwo/lC.java via {@code jS}/{@code jO}/
 * {@code jR}); here they are plain vanilla {@code fill} rects/rings so the
 * build stays on yarn 1.21.11 {@link DrawContext} without extra hooks.</li>
 * <li>Rounded panels ({@code cek}/{@code cdg}) use vanilla {@code fill} plus
 * {@code drawStrokedRectangle}; the original rounds corners with {@code ld}
 * radius data (sixtwo/lC.java).</li>
 * <li>Text uses the screen {@code textRenderer}; the original uses
 * {@code lE} SDF atlases ({@code SVnNc}/{@code WTzbi}) via {@code lq}
 * (sixtwo/lE.java, sixtwo/bD.java {@code LN()}, sixtwo/bC.java {@code Lq()}).</li>
 * </ul>
 */
public final class WheelDraw {
	private WheelDraw() {
	}

	/** Mirrors {@code jF.bHz(1, 1, 1, clamp(openAnim))} as an alpha multiplier. */
	public static int tintAlpha(float openAnim) {
		float a = Math.max(0.0f, Math.min(1.0f, openAnim));
		return Math.round(a * 255.0f);
	}

	/** Mirrors {@code jH.bId(lC, cx, cy, scale)} using vanilla matrices. */
	public static void pushScaleAbout(DrawContext ctx, float cx, float cy, float scale) {
		ctx.getMatrices().pushMatrix();
		ctx.getMatrices().translate(cx, cy);
		ctx.getMatrices().scale(scale, scale);
		ctx.getMatrices().translate(-cx, -cy);
	}

	/** Mirrors {@code jH.bIf()} using vanilla matrices. */
	public static void popScale(DrawContext ctx) {
		ctx.getMatrices().popMatrix();
	}

	/**
	 * Mirrors {@code LL()}/{@code lC.cdN(x, y, d, d, inner, outer, 0, 360, 1, 0)}:
	 * backdrop disc confined to the wheel square.
	 */
	public static void backdropDisc(DrawContext ctx, float x, float y, float diameter, int color) {
		int x0 = Math.round(x);
		int y0 = Math.round(y);
		int x1 = Math.round(x + diameter);
		int y1 = Math.round(y + diameter);
		ctx.fill(x0, y0, x1, y1, color);
	}

	/**
	 * Mirrors {@code LM()}/{@code lC.cdG(...)}: selected wedge highlight between
	 * {@code startDeg} and {@code endDeg}. Vanilla has no wedge primitive, so a
	 * centered band rect marks the same angular span position.
	 */
	public static void selectedWedge(DrawContext ctx, float x, float y, float diameter,
			float inner, float outer, float startDeg, float endDeg, int color) {
		float mid = (startDeg + endDeg) * 0.5f;
		double rad = Math.toRadians(mid);
		float cx = x + diameter * 0.5f;
		float cy = y + diameter * 0.5f;
		float r = (inner + outer) * 0.5f;
		int px = Math.round(cx + (float) Math.cos(rad) * r);
		int py = Math.round(cy + (float) Math.sin(rad) * r);
		int rPx = Math.max(6, Math.round((outer - inner) * 0.5f));
		ctx.fill(px - rPx, py - rPx, px + rPx, py + rPx, color);
	}

	/**
	 * Mirrors {@code LO()}/{@code lC.cdE(...)}: divider ticks between wedges.
	 * Vanilla draws each tick as a small square at the ring radius.
	 */
	public static void dividerTick(DrawContext ctx, float centerX, float centerY,
			float radius, float angleDeg, int color) {
		double rad = Math.toRadians(angleDeg);
		int px = Math.round(centerX + (float) Math.cos(rad) * radius);
		int py = Math.round(centerY + (float) Math.sin(rad) * radius);
		ctx.fill(px - 1, py - 1, px + 2, py + 2, color);
	}

	/**
	 * Mirrors {@code LN()}/{@code lC.cek}/{@code cdg}: center disc plus border.
	 */
	public static void centerDisc(DrawContext ctx, float x, float y, float size, int fill, int border) {
		int x0 = Math.round(x);
		int y0 = Math.round(y);
		int x1 = Math.round(x + size);
		int y1 = Math.round(y + size);
		ctx.fill(x0, y0, x1, y1, fill);
		ctx.drawStrokedRectangle(x0, y0, x1 - x0, y1 - y0, border);
	}

	/** Mirrors {@code lC.cez(lq, text, x, y, color)} via vanilla text. */
	public static void label(DrawContext ctx, net.minecraft.client.font.TextRenderer font,
			String text, float x, float y, int color) {
		ctx.drawText(font, Text.literal(text), Math.round(x), Math.round(y), color, false);
	}

	/** Width helper for centering; original uses {@code lq.cao(text)}. */
	public static int labelWidth(net.minecraft.client.font.TextRenderer font, String text) {
		return font.getWidth(text);
	}
}
