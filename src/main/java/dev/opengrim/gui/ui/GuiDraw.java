package dev.opengrim.gui.ui;

import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.text.Text;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.ColorHelper;
import org.joml.Matrix3x2fStack;

/**
 * Port of the sixtwo.lC draw-context subset used by the widget framework.
 * The original forwards to custom shader pipelines ({@code kd.AhlXN} rect,
 * {@code kd.sQVlR} rounded rect, custom font renderer {@code ln}); here the
 * same surface is drawn with vanilla {@link DrawContext} primitives
 * (verified against Yarn 1.21.11+build.6), with rounded corners approximated
 * by corner-inset fills.
 *
 * <p>lC method mapping: {@code cdm}=rounded fill, {@code cej}=rounded stroke,
 * {@code cdg}=rect fill, {@code cdj}=rect fill from Rect, {@code cdf}=rounded
 * fill from Rect, {@code cdd}=circle, {@code ccW}=themed background
 * (style switch Blur/Liquid Glass/Solid, lC.java:315-360), {@code ccV}=themed
 * panel from Rect (lC.java:668-672), {@code cez/ceP}=text left/right,
 * {@code ceA/ceQ}=pool text, {@code cdR}=vertical gradient, {@code ccX}=fill
 * + border stack, {@code cff/cfg}=mouse, {@code ceV/ceW}=transform
 * push/pop (jH), {@code cfc}=matrix stack, {@code cfh}=delta.
 */
public final class GuiDraw {
	private final DrawContext ctx;
	private final double mouseX;
	private final double mouseY;
	private final float delta;
	private final net.minecraft.client.font.TextRenderer font;

	public GuiDraw(DrawContext ctx, double mouseX, double mouseY, float delta, net.minecraft.client.font.TextRenderer font) {
		this.ctx = ctx;
		this.mouseX = mouseX;
		this.mouseY = mouseY;
		this.delta = delta;
		this.font = font;
	}

	/** The vanilla font (stands in for the lE.WTzbi font stack). */
	public net.minecraft.client.font.TextRenderer font() {
		return font;
	}

	public DrawContext context() {
		return ctx;
	}

	public double mouseX() {
		return mouseX;
	}

	public double mouseY() {
		return mouseY;
	}

	/** lC.cfh. */
	public float delta() {
		return delta;
	}

	/** lC.cfc. */
	public Matrix3x2fStack matrices() {
		return ctx.getMatrices();
	}

	/**
	 * jH.bId: transform push — scale by {@code s} **about the pivot (cx, cy)**.
	 * The original is {@code pushMatrix; translate(cx,cy); scale(s,s);
	 * translate(-cx,-cy)} (sixtwo/jH.java bId, plaintext; the same pivot
	 * semantics as {@link dev.opengrim.gui.WheelDraw#pushScaleAbout}), so a
	 * widget drawn at its absolute rect inside the transform lands back on
	 * that rect at {@code s = 1}. Without the closing translate the pivot is
	 * the origin and everything drawn inside is displaced by (cx, cy).
	 */
	public void pushTransform(float cx, float cy, float scale) {
		Matrix3x2fStack m = ctx.getMatrices();
		m.pushMatrix();
		m.translate(cx, cy);
		m.scale(scale, scale);
		m.translate(-cx, -cy);
	}

	/** jH.bIf: transform pop. */
	public void popTransform() {
		ctx.getMatrices().popMatrix();
	}

	/** lC.ceV. */
	public void pushMatrix() {
		ctx.getMatrices().pushMatrix();
	}

	/** lC.ceW. */
	public void popMatrix() {
		ctx.getMatrices().popMatrix();
	}

	/** lC.ceX. */
	public void translate(float x, float y) {
		ctx.getMatrices().translate(x, y);
	}

	/** lC.ceY. */
	public void scale(float sx, float sy) {
		ctx.getMatrices().scale(sx, sy);
	}

	/** jG.bHI: scissor push (integer rect). */
	public void pushScissor(float x, float y, float w, float h) {
		ctx.enableScissor(Math.round(x), Math.round(y), Math.round(x + w), Math.round(y + h));
	}

	/** jG.bHN: scissor pop. */
	public void popScissor() {
		ctx.disableScissor();
	}

	// ------------------------------------------------------------------
	// Fills and strokes
	// ------------------------------------------------------------------

	/** lC.cdg: plain rect fill. */
	public void fillRect(float x, float y, float w, float h, ColorF color) {
		if (w <= 0.0f || h <= 0.0f) {
			return;
		}
		ctx.fill(Math.round(x), Math.round(y), Math.round(x + w), Math.round(y + h), color.argb());
	}

	/** lC.cdj: rect fill from a Rect. */
	public void fillRect(Rect rect, ColorF color) {
		fillRect(rect.x(), rect.y(), rect.width(), rect.height(), color);
	}

	/** lC.cdm: rounded rect fill; corners approximated by inset squares. */
	public void fillRounded(float x, float y, float w, float h, float radius, ColorF color) {
		if (w <= 0.0f || h <= 0.0f) {
			return;
		}
		float r = Math.min(radius, Math.min(w, h) / 2.0f);
		int ix = Math.round(x);
		int iy = Math.round(y);
		int iw = Math.round(w);
		int ih = Math.round(h);
		int ir = Math.round(r);
		int argb = color.argb();
		ctx.fill(ix + ir, iy, ix + iw - ir, iy + ih, argb);
		ctx.fill(ix, iy + ir, ix + ir, iy + ih - ir, argb);
		ctx.fill(ix + iw - ir, iy + ir, ix + iw, iy + ih - ir, argb);
	}

	/** lC.cdf: rounded fill from a Rect. */
	public void fillRounded(Rect rect, float radius, ColorF color) {
		fillRounded(rect.x(), rect.y(), rect.width(), rect.height(), radius, color);
	}

	/** lC.cej: rounded stroke (1px outline, corners approximated). */
	public void strokeRounded(float x, float y, float w, float h, float radius, ColorF color) {
		fillRect(x, y, w, 1.0f, color);
		fillRect(x, y + h - 1.0f, w, 1.0f, color);
		fillRect(x, y, 1.0f, h, color);
		fillRect(x + w - 1.0f, y, 1.0f, h, color);
	}

	/** strokeRounded overload for a Rect. */
	public void strokeRounded(Rect rect, float radius, ColorF color) {
		strokeRounded(rect.x(), rect.y(), rect.width(), rect.height(), radius, color);
	}

	/** lC.cdd: circle fill. */
	public void fillCircle(float x, float y, float radius, ColorF color) {
		int cx = Math.round(x + radius / 2.0f);
		int cy = Math.round(y + radius / 2.0f);
		int r = Math.max(1, Math.round(radius / 2.0f));
		int argb = color.argb();
		for (int dy = -r; dy <= r; dy++) {
			int half = (int) Math.floor(Math.sqrt((double) r * r - (double) dy * dy));
			ctx.fill(cx - half, cy + dy, cx + half + 1, cy + dy + 1, argb);
		}
	}

	/** lC.cdz/cdw: arc wedge between angles (degrees), approximated by fan triangles. */
	public void fillWedge(float x, float y, float radiusInner, float radiusOuter, float fromDeg, float toDeg, int segments, ColorF color) {
		int argb = color.argb();
		int cx = Math.round(x);
		int cy = Math.round(y);
		double from = Math.toRadians(fromDeg);
		double to = Math.toRadians(toDeg);
		for (int i = 0; i < segments; i++) {
			double a0 = from + (to - from) * i / segments;
			double a1 = from + (to - from) * (i + 1) / segments;
			drawTriangleFan(cx, cy, radiusInner, radiusOuter, a0, a1, argb);
		}
	}

	private void drawTriangleFan(int cx, int cy, float rInner, float rOuter, double a0, double a1, int argb) {
		float ix0 = cx + rInner * (float) Math.cos(a0);
		float iy0 = cy + rInner * (float) Math.sin(a0);
		float ix1 = cx + rInner * (float) Math.cos(a1);
		float iy1 = cy + rInner * (float) Math.sin(a1);
		float ox0 = cx + rOuter * (float) Math.cos(a0);
		float oy0 = cy + rOuter * (float) Math.sin(a0);
		float ox1 = cx + rOuter * (float) Math.cos(a1);
		float oy1 = cy + rOuter * (float) Math.sin(a1);
		fillTri(ix0, iy0, ox0, oy0, ox1, oy1, argb);
		fillTri(ix0, iy0, ix1, iy1, ox1, oy1, argb);
	}

	private void fillTri(float x0, float y0, float x1, float y1, float x2, float y2, int argb) {
		// Rasterize by bounding box + barycentric test (small wedges only).
		int minX = Math.round(Math.min(x0, Math.min(x1, x2)));
		int maxX = Math.round(Math.max(x0, Math.max(x1, x2)));
		int minY = Math.round(Math.min(y0, Math.min(y1, y2)));
		int maxY = Math.round(Math.max(y0, Math.max(y1, y2)));
		for (int py = minY; py <= maxY; py++) {
			for (int px = minX; px <= maxX; px++) {
				float fx = px + 0.5f;
				float fy = py + 0.5f;
				float d0 = (x1 - x0) * (fy - y0) - (y1 - y0) * (fx - x0);
				float d1 = (x2 - x1) * (fy - y1) - (y2 - y1) * (fx - x1);
				float d2 = (x0 - x2) * (fy - y2) - (y0 - y2) * (fx - x2);
				boolean neg = d0 < 0 || d1 < 0 || d2 < 0;
				boolean pos = d0 > 0 || d1 > 0 || d2 > 0;
				if (!(neg && pos)) {
					ctx.fill(px, py, px + 1, py + 1, argb);
				}
			}
		}
	}

	/** lC.cdR: vertical gradient fill (top transparent → bottom color). */
	public void fillGradient(float x, float y, float w, float h, ColorF color) {
		if (w <= 0.0f || h <= 0.0f) {
			return;
		}
		int top = ColorF.TRANSPARENT.argb();
		int bottom = color.argb();
		ctx.fillGradient(Math.round(x), Math.round(y), Math.round(x + w), Math.round(y + h), top, bottom);
	}

	// ------------------------------------------------------------------
	// Themed backgrounds (lC.ccW / ccV / cdL / ccX)
	// ------------------------------------------------------------------

	/**
	 * lC.ccW: themed window background. Blur/Liquid-Glass cannot be reproduced
	 * with vanilla passes; both render as translucent panel fill (see
	 * PARITY-DIVERGENCES.md), Solid as opaque background-color fill at
	 * fX.aYh() opacity.
	 */
	public void themedBackground(float x, float y, float w, float h, float radius, float alpha) {
		Theme style = Theme.get();
		if (style.backgroundStyle() == Theme.BackgroundStyle.SOLID) {
			fillRounded(x, y, w, h, radius, style.background().withAlphaScale(style.backgroundStyle().opacity * alpha));
		} else {
			ColorF glass = style.glassFill();
			ColorF bg = style.background();
			float blend = style.backgroundStyle() == Theme.BackgroundStyle.LIQUID_GLASS ? 0.3f : 0.5f;
			fillRounded(x, y, w, h, radius, bg.withAlphaScale(alpha).lerp(glass.withAlphaScale(alpha), blend * 0.5f));
			strokeRounded(x, y, w, h, radius, style.glassBorder().withAlphaScale(alpha));
		}
	}

	/** lC.ccV: themed panel from a Rect with default radius 7 (ld.all(7.0f)). */
	public void themedPanel(Rect rect, float alpha) {
		themedBackground(rect.x(), rect.y(), rect.width(), rect.height(), 7.0f, alpha);
	}

	/** lC.ccX: stacked fill + accent border overlay (used for hover frames). */
	public void fillWithBorder(float x, float y, float w, float h, float alpha, ColorF border) {
		fillRect(x, y, w, h, ColorF.TRANSPARENT.withAlphaScale(alpha));
		strokeRounded(x, y, w, h, 7.0f, border.withAlphaScale(alpha));
	}

	// ------------------------------------------------------------------
	// Text
	// ------------------------------------------------------------------

	/**
	 * The original renders at font sizes in design points (5.0f–9.0f, e.g.
	 * bl.java: {@code lE.WTzbi.bYM(6.0f)}, aJ.java:461 {@code bYM(9.0f)});
	 * vanilla {@link TextRenderer} is 9px tall, so text is matrix-scaled by
	 * {@code size / 9.0f}.
	 */
	public float textHeight(float size) {
		return size;
	}

	public float textWidth(TextRenderer font, String text, float size) {
		return font.getWidth(text) * (size / 9.0f);
	}

	/** lC.cez: left-aligned scaled text. */
	public void text(TextRenderer font, String text, float x, float y, float size, ColorF color) {
		if (text == null || text.isEmpty()) {
			return;
		}
		float scale = size / 9.0f;
		pushMatrix();
		scale(scale, scale);
		ctx.drawText(font, text, Math.round(x / scale), Math.round(y / scale), color.argb(), false);
		popMatrix();
	}

	/** lC.ceP: right-aligned scaled text ending at {@code rightX}. */
	public void textRight(TextRenderer font, String text, float rightX, float y, float size, ColorF color) {
		text(font, text, rightX - textWidth(font, text, size), y, size, color);
	}

	/**
	 * lC.ceH: scaled text with independent x/y scale squeezes and a maximum
	 * width (e.g. Q placeholder draw at (0.8f, 0.99f) with maxWidth w-24,
	 * gui-src sixtwo_6.java:356; bf.java:224). The original compresses the
	 * string into the width through the text shader; here overflow is trimmed
	 * by dropping trailing characters (documented divergence).
	 */
	public void textScaledMax(TextRenderer font, String text, float x, float y, float size, ColorF color,
			float scaleX, float scaleY, float maxWidth) {
		if (text == null || text.isEmpty()) {
			return;
		}
		String shown = trimForWidth(font, text, size * scaleX, Math.max(maxWidth, 0.0f));
		pushMatrix();
		translate(x, y);
		float s = size / 9.0f;
		scale(s * scaleX, s * scaleY);
		ctx.drawText(font, shown, 0, 0, color.argb(), false);
		popMatrix();
	}

	/** Drop trailing characters until the string fits the width. */
	private static String trimForWidth(TextRenderer font, String text, float size, float maxWidth) {
		String shown = text;
		while (shown.length() > 0 && font.getWidth(shown) * (size / 9.0f) > maxWidth) {
			shown = shown.substring(0, shown.length() - 1);
		}
		return shown;
	}

	/** lC.ceD: component text. */
	public void text(TextRenderer font, Text text, float x, float y, float size, ColorF color) {
		text(font, text.getString(), x, y, size, color);
	}

	// ------------------------------------------------------------------
	// Original font stack (lE sheets, see MsdfFont)
	// ------------------------------------------------------------------

	/**
	 * Tinted textured quad in design space (the lC text-shader primitive):
	 * pixel-space destination with a source region in texture pixels, drawn
	 * through the vanilla {@code GUI_TEXTURED} pipeline (lC's custom MSDF
	 * shader is not reproducible; the glyph coverage is baked into the sheet
	 * alpha by {@link MsdfFont}).
	 */
	public void texturedQuad(Identifier texture, float x0, float y0, float x1, float y1,
			float srcX, float srcY, float srcW, float srcH, float textureW, float textureH, ColorF color) {
		int ix0 = Math.round(x0);
		int iy0 = Math.round(y0);
		int iw = Math.max(1, Math.round(x1 - x0));
		int ih = Math.max(1, Math.round(y1 - y0));
		int sw = Math.max(1, Math.round(srcW));
		int sh = Math.max(1, Math.round(srcH));
		ctx.drawTexture(RenderPipelines.GUI_TEXTURED, texture, ix0, iy0, srcX, srcY, iw, ih, sw, sh,
				Math.round(textureW), Math.round(textureH), color.argb());
	}

	/** MSDF text draw (weight sheet), em-box top-left anchored. */
	public void text(MsdfFont font, String text, float x, float topY, float size, ColorF color) {
		if (font == null) {
			text(font(), text, x, topY, size, color);
			return;
		}
		font.draw(this, text, x, topY, size, color);
	}

	/** MSDF right-aligned text draw. */
	public void textRight(MsdfFont font, String text, float rightX, float topY, float size, ColorF color) {
		if (font == null) {
			textRight(font(), text, rightX, topY, size, color);
			return;
		}
		font.drawRight(this, text, rightX, topY, size, color);
	}

	/** lf icon draw (em-box anchored, see {@link MsdfFont#drawIcon}). */
	public void icon(MsdfFont icons, IconGlyph glyph, float x, float topY, float size, ColorF color) {
		if (icons != null) {
			icons.drawIcon(this, glyph, x, topY, size, color);
		}
	}

	/** Width of {@code text} in the given MSDF sheet (vanilla fallback). */
	public float textWidth(MsdfFont font, String text, float size) {
		return font == null ? textWidth(font(), text, size) : font.width(text, size);
	}

	// ------------------------------------------------------------------
	// Misc
	// ------------------------------------------------------------------

	/** lC.cdj via kd.AhlXN on a Rect: plain opaque rect fill. */
	public void rect(Rect rect, ColorF color) {
		fillRect(rect, color);
	}
}
