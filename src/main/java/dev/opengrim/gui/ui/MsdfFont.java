package dev.opengrim.gui.ui;

import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.Map;

import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.client.texture.NativeImageBackedTexture;
import net.minecraft.util.Identifier;

/**
 * Renderer for the original MSDF font stack (sixtwo.lE: "regular", "medium",
 * "semibold", "bold" and the "icons-4.4" glyph font — lE.cfz values recovered
 * from the runtime dump, {@code analysis/decrypted/gui-dump.jsonl}).
 *
 * <p>Sources: the font sheets shipped with the original distribution,
 * recovered from the bootstrap payload
 * ({@code analysis/decompiled/bootstrap/offline/fonts/*.atlas|*.metadata}):
 * {@code *.atlas} is the msdfgen layout JSON (metrics + per-glyph
 * {@code advance}/{@code planeBounds} in em units and {@code atlasBounds} in
 * sheet pixels, {@code yOrigin = bottom}), {@code *.metadata} is the sheet PNG
 * itself. The sheets are MSDF (multi-channel signed distance field) images;
 * this port ships a pre-baked alpha conversion
 * ({@code assets/opengrim/fonts/*.png}, alpha = clamp((median(r,g,b) - 0.5) *
 * 10 + 0.5), i.e. a ~1 px smoothing band at the intended sizes) so the glyphs
 * can be drawn with the vanilla {@code GUI_TEXTURED} pipeline as tinted
 * textured quads. The exact glyph shapes, advances and the plane placement are
 * therefore 1:1 with the original.
 *
 * <p>Layout contract (matching the original's text shader): a glyph's ink is
 * placed at {@code penX + planeBounds.left * size .. penX + planeBounds.right *
 * size} horizontally and {@code baseline - top * size .. baseline - bottom *
 * size} vertically (planeBounds are y-up em units), the pen advances by
 * {@code advance * size}; the atlas region is flipped because the sheets store
 * rows bottom-up ({@code yOrigin = bottom}).
 */
public final class MsdfFont {
	/** lE.cfz values: the four text weights (gui-dump sixtwo.lE entries). */
	public static final String REGULAR = "regular";
	public static final String MEDIUM = "medium";
	public static final String SEMIBOLD = "semibold";
	public static final String BOLD = "bold";
	/** lE icons-4.4 (the lf glyph font). */
	public static final String ICONS = "icons-4.4";

	private static final Map<String, MsdfFont> CACHE = new HashMap<>();
	private static final Map<String, Boolean> FAILED = new HashMap<>();

	/** One glyph: metrics in em units (y-up) plus its sheet region in pixels. */
	private record Glyph(float advance, float left, float bottom, float right, float top,
			float srcX, float srcY, float srcW, float srcH) {
		boolean drawable() {
			return right > left && top > bottom;
		}
	}

	private final Identifier texture;
	private final float atlasWidth;
	private final float atlasHeight;
	private final float ascender;
	private final float descender;
	private final float lineHeight;
	private final Map<Integer, Glyph> glyphs = new HashMap<>();

	private MsdfFont(Identifier texture, float atlasWidth, float atlasHeight, float ascender, float descender,
			float lineHeight) {
		this.texture = texture;
		this.atlasWidth = atlasWidth;
		this.atlasHeight = atlasHeight;
		this.ascender = ascender;
		this.descender = descender;
		this.lineHeight = lineHeight;
	}

	/**
	 * Load (and cache) one of the recovered font sheets; {@code null} when the
	 * resource is missing so callers can fall back to the vanilla font.
	 */
	public static MsdfFont of(String name) {
		MsdfFont cached = CACHE.get(name);
		if (cached != null) {
			return cached;
		}
		if (Boolean.TRUE.equals(FAILED.get(name))) {
			return null;
		}
		MsdfFont loaded = load(name);
		if (loaded == null) {
			FAILED.put(name, Boolean.TRUE);
			return null;
		}
		CACHE.put(name, loaded);
		return loaded;
	}

	/** lE regular (ig.bio default text weight). */
	public static MsdfFont regular() {
		return of(REGULAR);
	}

	/** lE icons-4.4 (lf glyphs, codepoints 59905-59971). */
	public static MsdfFont icons() {
		return of(ICONS);
	}

	private static MsdfFont load(String name) {
		String path = "/assets/opengrim/fonts/" + name + ".atlas";
		try (InputStream atlasStream = MsdfFont.class.getResourceAsStream(path)) {
			if (atlasStream == null) {
				return null;
			}
			String json = new String(atlasStream.readAllBytes(), StandardCharsets.UTF_8);
			JsonObject root = JsonParser.parseString(json).getAsJsonObject();
			JsonObject atlas = root.getAsJsonObject("atlas");
			JsonObject metrics = root.getAsJsonObject("metrics");
			float width = atlas.get("width").getAsFloat();
			float height = atlas.get("height").getAsFloat();
			MsdfFont font = new MsdfFont(Identifier.of("opengrim", "fonts/" + name), width, height,
					metrics.get("ascender").getAsFloat(), metrics.get("descender").getAsFloat(),
					metrics.get("lineHeight").getAsFloat());
			JsonArray array = root.getAsJsonArray("glyphs");
			for (JsonElement element : array) {
				JsonObject glyph = element.getAsJsonObject();
				int codepoint = glyph.get("unicode").getAsInt();
				float advance = glyph.has("advance") ? glyph.get("advance").getAsFloat() : 0.0f;
				float left = 0.0f;
				float bottom = 0.0f;
				float right = 0.0f;
				float top = 0.0f;
				float srcX = 0.0f;
				float srcY = 0.0f;
				float srcW = 0.0f;
				float srcH = 0.0f;
				if (glyph.has("planeBounds") && glyph.has("atlasBounds")) {
					JsonObject plane = glyph.getAsJsonObject("planeBounds");
					left = plane.get("left").getAsFloat();
					bottom = plane.get("bottom").getAsFloat();
					right = plane.get("right").getAsFloat();
					top = plane.get("top").getAsFloat();
					JsonObject sheet = glyph.getAsJsonObject("atlasBounds");
					srcX = sheet.get("left").getAsFloat();
					srcW = sheet.get("right").getAsFloat() - srcX;
					// yOrigin = bottom: the sheet's rows run bottom-up.
					srcY = height - sheet.get("top").getAsFloat();
					srcH = sheet.get("top").getAsFloat() - sheet.get("bottom").getAsFloat();
				}
				font.glyphs.put(codepoint,
						new Glyph(advance, left, bottom, right, top, srcX, srcY, srcW, srcH));
			}
			try (InputStream imageStream = MsdfFont.class.getResourceAsStream("/assets/opengrim/fonts/" + name + ".png")) {
				if (imageStream == null) {
					return null;
				}
				NativeImage image = NativeImage.read(imageStream);
				MinecraftClient.getInstance().getTextureManager().registerTexture(font.texture,
						new NativeImageBackedTexture(() -> "opengrim-font-" + name, image));
			}
			return font;
		} catch (Throwable throwable) {
			return null;
		}
	}

	public boolean has(char codepoint) {
		return glyphs.containsKey((int) codepoint);
	}

	/** Metrics ascent in design units. */
	public float ascent(float size) {
		return ascender * size;
	}

	/** Metrics descent in design units (positive downward). */
	public float descent(float size) {
		return -descender * size;
	}

	/** Metrics line height in design units. */
	public float lineHeight(float size) {
		return lineHeight * size;
	}

	/** Advance width of a single glyph in design units. */
	public float advance(char codepoint, float size) {
		Glyph glyph = glyphs.get((int) codepoint);
		return glyph == null ? 0.0f : glyph.advance() * size;
	}

	/** Total advance width of a string in design units. */
	public float width(String text, float size) {
		if (text == null || text.isEmpty()) {
			return 0.0f;
		}
		float total = 0.0f;
		for (int i = 0; i < text.length(); i++) {
			total += advance(text.charAt(i), size);
		}
		return total;
	}

	/**
	 * Draw a string with its em-box top-left at ({@code x}, {@code topY}); the
	 * baseline sits {@code ascent(size)} below that.
	 */
	public void draw(GuiDraw draw, String text, float x, float topY, float size, ColorF color) {
		if (text == null || text.isEmpty()) {
			return;
		}
		float baseline = topY + ascent(size);
		float pen = x;
		for (int i = 0; i < text.length(); i++) {
			Glyph glyph = glyphs.get((int) text.charAt(i));
			if (glyph == null) {
				continue;
			}
			if (glyph.drawable()) {
				drawGlyph(draw, glyph, pen, baseline, size, color);
			}
			pen += glyph.advance() * size;
		}
	}

	/** Draw a string right-aligned so that it ends at {@code rightX}. */
	public void drawRight(GuiDraw draw, String text, float rightX, float topY, float size, ColorF color) {
		draw(draw, text, rightX - width(text, size), topY, size, color);
	}

	/**
	 * Draw one glyph anchored at the em box ({@code x}, {@code topY}) — the
	 * lf icon call convention (icons fill the em box through their plane
	 * bounds, e.g. lf.blMVg = IMPORT, lf.MZXpZ = MUSIC).
	 */
	public void drawIcon(GuiDraw draw, char codepoint, float x, float topY, float size, ColorF color) {
		Glyph glyph = glyphs.get((int) codepoint);
		if (glyph == null || !glyph.drawable()) {
			return;
		}
		drawGlyph(draw, glyph, x, topY + ascent(size), size, color);
	}

	/** Draw one glyph by its lf codepoint (see {@link IconGlyph}). */
	public void drawIcon(GuiDraw draw, IconGlyph glyph, float x, float topY, float size, ColorF color) {
		drawIcon(draw, glyph.codepoint(), x, topY, size, color);
	}

	private void drawGlyph(GuiDraw draw, Glyph glyph, float penX, float baseline, float size, ColorF color) {
		float x0 = penX + glyph.left() * size;
		float y0 = baseline - glyph.top() * size;
		float x1 = penX + glyph.right() * size;
		float y1 = baseline - glyph.bottom() * size;
		draw.texturedQuad(texture, x0, y0, x1, y1, glyph.srcX(), glyph.srcY(), glyph.srcW(), glyph.srcH(),
				atlasWidth, atlasHeight, color);
	}

	/**
	 * Truncate {@code text} to {@code maxWidth} with a trailing ellipsis —
	 * matching the module-card description clipping of the original
	 * (page-movement.png: "…with custom colors and tra…").
	 */
	public String truncate(String text, float size, float maxWidth) {
		if (text == null || text.isEmpty() || width(text, size) <= maxWidth) {
			return text;
		}
		float ellipsis = width("\u2026", size);
		int end = text.length();
		while (end > 0 && width(text.substring(0, end), size) + ellipsis > maxWidth) {
			end--;
		}
		return text.substring(0, end) + "\u2026";
	}
}
