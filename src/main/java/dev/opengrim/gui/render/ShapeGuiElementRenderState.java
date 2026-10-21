package dev.opengrim.gui.render;

import com.mojang.blaze3d.pipeline.RenderPipeline;

import net.minecraft.client.gui.ScreenRect;
import net.minecraft.client.gui.render.state.SimpleGuiElementRenderState;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.texture.TextureSetup;
import org.joml.Matrix3x2fc;
import org.joml.Vector2f;

/**
 * One quad of the recovered {@code shape} shader, submitted into the 1.21.11
 * deferred GUI renderer.
 *
 * <p>Vertex channel map (see {@code gui_shape.vsh}):
 * <ul>
 * <li>position (x, y, cornerSmoothness) — pose-transformed, z carries the
 * squircle exponent (ignored by the projection in the vertex shader),</li>
 * <li>UV0 = size (width, height),</li>
 * <li>UV1 = radius top-left/bottom-left, UV2 = radius top-right/bottom-right
 * (fixed point 8.8, the same order as ke.bOi's {@code radius} upload),</li>
 * <li>Normal = smoothness, innerSmoothness, thickness (normalized bytes),</li>
 * <li>Color = vertex colour.</li>
 * </ul>
 *
 * <p>This mirrors vanilla {@code ColoredQuadGuiElementRenderState}: vertices are
 * pose-transformed at setup time and the bounds feed the GUI renderer's
 * scissor/batching logic.
 */
public record ShapeGuiElementRenderState(
		RenderPipeline pipeline,
		Matrix3x2fc pose,
		float x,
		float y,
		float width,
		float height,
		float radius,
		float smoothness,
		float innerSmoothness,
		float thickness,
		float cornerSmoothness,
		int argb,
		ScreenRect scissorArea,
		ScreenRect bounds) implements SimpleGuiElementRenderState {

	/** Fixed-point scale of the radius channels (8.8, as used by the original). */
	private static final float RADIUS_FIXED_POINT = 256.0f;

	public ShapeGuiElementRenderState(RenderPipeline pipeline, Matrix3x2fc pose, float x, float y,
			float width, float height, float radius, float smoothness, float innerSmoothness,
			float thickness, float cornerSmoothness, int argb, ScreenRect scissorArea) {
		this(pipeline, pose, x, y, width, height, radius, smoothness, innerSmoothness, thickness,
				cornerSmoothness, argb, scissorArea,
				createBounds(x, y, width, height, pose, scissorArea));
	}

	@Override
	public TextureSetup textureSetup() {
		return TextureSetup.empty();
	}

	@Override
	public void setupVertices(VertexConsumer vertices) {
		float corner = Math.max(0.0f, Math.min(radius, Math.min(width, height) * 0.5f));
		int fixedRadius = Math.round(corner * RADIUS_FIXED_POINT);
		float smooth = clamp01(smoothness);
		float inner = clamp01(innerSmoothness);
		float thick = clamp01(thickness);

		Vector2f transformed = new Vector2f();
		// Indexed QUADS map gl_VertexID % 4 to (0,0) (0,1) (1,1) (1,0):
		// top-left, bottom-left, bottom-right, top-right.
		emit(vertices, transformed, x, y, fixedRadius, smooth, inner, thick);
		emit(vertices, transformed, x, y + height, fixedRadius, smooth, inner, thick);
		emit(vertices, transformed, x + width, y + height, fixedRadius, smooth, inner, thick);
		emit(vertices, transformed, x + width, y, fixedRadius, smooth, inner, thick);
	}

	private void emit(VertexConsumer vertices, Vector2f transformed, float vx, float vy,
			int fixedRadius, float smooth, float inner, float thick) {
		pose.transformPosition(vx, vy, transformed);
		vertices.vertex(transformed.x, transformed.y, cornerSmoothness)
				.color(argb)
				.texture(width, height)
				.overlay(fixedRadius, fixedRadius)
				.light(fixedRadius, fixedRadius)
				.normal(smooth, inner, thick);
	}

	private static float clamp01(float value) {
		return Math.max(0.0f, Math.min(1.0f, value));
	}

	private static ScreenRect createBounds(float x, float y, float width, float height,
			Matrix3x2fc pose, ScreenRect scissorArea) {
		int x0 = (int) Math.floor(x);
		int y0 = (int) Math.floor(y);
		int x1 = (int) Math.ceil(x + width);
		int y1 = (int) Math.ceil(y + height);
		ScreenRect rect = new ScreenRect(x0, y0, Math.max(0, x1 - x0), Math.max(0, y1 - y0))
				.transformEachVertex(pose);
		return scissorArea != null ? scissorArea.intersection(rect) : rect;
	}
}
