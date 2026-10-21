package dev.opengrim.gui.render;

import com.mojang.blaze3d.pipeline.RenderPipeline;

import net.minecraft.client.gui.ScreenRect;
import net.minecraft.client.gui.render.state.SimpleGuiElementRenderState;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.texture.TextureSetup;
import org.joml.Matrix3x2fc;
import org.joml.Vector2f;

/**
 * One glyph quad of the recovered MSDF shader, submitted into the 1.21.11
 * deferred GUI renderer.
 *
 * <p>Channel map (see {@code gui_msdf.vsh}):
 * <ul>
 * <li>position (x, y, normalizedX) — pose-transformed; z feeds the fadeout
 * normalization,</li>
 * <li>UV0 = atlas texcoord,</li>
 * <li>UV1 = (range, thickness) | (smoothness, outlineThickness) packed 8/8,</li>
 * <li>UV2 = (outline R, G) | (outline B, A) packed 8/8,</li>
 * <li>Normal = (fadeoutStart, fadeoutEnd, 0),</li>
 * <li>Color = text colour.</li>
 * </ul>
 *
 * <p>The original {@code msdf.glsl} receives these as scalar uniforms; packing
 * them per glyph is the transport required by the deferred renderer (see
 * {@link GuiMsdfPipelines}).
 */
public record MsdfGuiElementRenderState(
		RenderPipeline pipeline,
		TextureSetup textureSetup,
		Matrix3x2fc pose,
		float x0,
		float y0,
		float x1,
		float y1,
		float u0,
		float v0,
		float u1,
		float v1,
		int argb,
		float range,
		float thickness,
		float smoothness,
		float outlineThickness,
		int outlineArgb,
		float fadeoutStart,
		float fadeoutEnd,
		float textPosX,
		float maxWidth,
		ScreenRect scissorArea,
		ScreenRect bounds) implements SimpleGuiElementRenderState {

	private static final float RANGE_MAX = 12.0f;
	private static final float THICKNESS_MAX = 1.0f;
	private static final float SMOOTHNESS_MAX = 4.0f;
	private static final float OUTLINE_THICKNESS_MAX = 4.0f;

	public MsdfGuiElementRenderState(RenderPipeline pipeline, TextureSetup textureSetup,
			Matrix3x2fc pose, float x0, float y0, float x1, float y1, float u0, float v0,
			float u1, float v1, int argb, float range, float thickness, float smoothness,
			float outlineThickness, int outlineArgb, float fadeoutStart, float fadeoutEnd,
			float textPosX, float maxWidth, ScreenRect scissorArea) {
		this(pipeline, textureSetup, pose, x0, y0, x1, y1, u0, v0, u1, v1, argb, range,
				thickness, smoothness, outlineThickness, outlineArgb, fadeoutStart,
				fadeoutEnd, textPosX, maxWidth, scissorArea,
				createBounds(x0, y0, x1, y1, pose, scissorArea));
	}

	@Override
	public void setupVertices(VertexConsumer vertices) {
		int rangeByte = quantize(range, 0.0f, RANGE_MAX, 255);
		int thicknessByte = quantize(thickness, -THICKNESS_MAX, THICKNESS_MAX, 255);
		int smoothnessByte = quantize(smoothness, 0.0f, SMOOTHNESS_MAX, 255);
		int outlineThicknessByte = quantize(outlineThickness, 0.0f, OUTLINE_THICKNESS_MAX, 255);
		int packedRangeThickness = (rangeByte << 8) | thicknessByte;
		int packedSmoothOutline = (smoothnessByte << 8) | outlineThicknessByte;

		int outlineR = (outlineArgb >> 16) & 0xFF;
		int outlineG = (outlineArgb >> 8) & 0xFF;
		int outlineB = outlineArgb & 0xFF;
		int outlineA = (outlineArgb >>> 24) & 0xFF;
		int packedRg = (outlineR << 8) | outlineG;
		int packedBa = (outlineB << 8) | outlineA;

		float fadeStart = clamp01(fadeoutStart);
		float fadeEnd = clamp01(fadeoutEnd);

		Vector2f transformed = new Vector2f();
		// Indexed QUADS map gl_VertexID % 4 to (0,0) (0,1) (1,1) (1,0):
		// top-left, bottom-left, bottom-right, top-right.
		emit(vertices, transformed, x0, y0, u0, v0, packedRangeThickness, packedSmoothOutline,
				packedRg, packedBa, fadeStart, fadeEnd);
		emit(vertices, transformed, x0, y1, u0, v1, packedRangeThickness, packedSmoothOutline,
				packedRg, packedBa, fadeStart, fadeEnd);
		emit(vertices, transformed, x1, y1, u1, v1, packedRangeThickness, packedSmoothOutline,
				packedRg, packedBa, fadeStart, fadeEnd);
		emit(vertices, transformed, x1, y0, u1, v0, packedRangeThickness, packedSmoothOutline,
				packedRg, packedBa, fadeStart, fadeEnd);
	}

	private void emit(VertexConsumer vertices, Vector2f transformed, float vx, float vy,
			float u, float v, int packedRangeThickness, int packedSmoothOutline, int packedRg,
			int packedBa, float fadeStart, float fadeEnd) {
		float fadePosition = maxWidth > 0.0f ? (vx - textPosX) / maxWidth : 0.0f;
		pose.transformPosition(vx, vy, transformed);
		vertices.vertex(transformed.x, transformed.y, fadePosition)
				.color(argb)
				.texture(u, v)
				.overlay(packedRangeThickness, packedSmoothOutline)
				.light(packedRg, packedBa)
				.normal(fadeStart, fadeEnd, 0.0f);
	}

	private static int quantize(float value, float min, float max, int levels) {
		float clamped = Math.max(min, Math.min(max, value));
		return Math.round((clamped - min) / (max - min) * levels);
	}

	private static float clamp01(float value) {
		return Math.max(0.0f, Math.min(1.0f, value));
	}

	private static ScreenRect createBounds(float x0, float y0, float x1, float y1,
			Matrix3x2fc pose, ScreenRect scissorArea) {
		int ix0 = (int) Math.floor(Math.min(x0, x1));
		int iy0 = (int) Math.floor(Math.min(y0, y1));
		int ix1 = (int) Math.ceil(Math.max(x0, x1));
		int iy1 = (int) Math.ceil(Math.max(y0, y1));
		ScreenRect rect = new ScreenRect(ix0, iy0, Math.max(0, ix1 - ix0), Math.max(0, iy1 - iy0))
				.transformEachVertex(pose);
		return scissorArea != null ? scissorArea.intersection(rect) : rect;
	}
}
