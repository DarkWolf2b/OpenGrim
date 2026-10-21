package dev.opengrim.gui.render;

import com.mojang.blaze3d.pipeline.RenderPipeline;

import net.minecraft.client.gui.ScreenRect;
import net.minecraft.client.gui.render.state.SimpleGuiElementRenderState;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.texture.TextureSetup;
import org.joml.Matrix3x2fc;
import org.joml.Vector2f;

/**
 * Blur-style backdrop quad (lC.ccW {@code fX.aYf()}): the blurred world texture
 * masked by the recovered shape SDF and tinted with the theme background.
 *
 * <p>Channel map is the shape vertex stage's: UV0 size, UV1/UV2 radius,
 * Normal = (smoothness, tintMix, opacity), Color = tint RGB.
 */
public record BackdropGuiElementRenderState(
		RenderPipeline pipeline,
		TextureSetup textureSetup,
		Matrix3x2fc pose,
		float x,
		float y,
		float width,
		float height,
		float radius,
		float smoothness,
		float tintMix,
		float opacity,
		int tintArgb,
		float cornerSmoothness,
		ScreenRect scissorArea,
		ScreenRect bounds) implements SimpleGuiElementRenderState {

	private static final float RADIUS_FIXED_POINT = 256.0f;

	public BackdropGuiElementRenderState(RenderPipeline pipeline, TextureSetup textureSetup,
			Matrix3x2fc pose, float x, float y, float width, float height, float radius,
			float smoothness, float tintMix, float opacity, int tintArgb, float cornerSmoothness,
			ScreenRect scissorArea) {
		this(pipeline, textureSetup, pose, x, y, width, height, radius, smoothness, tintMix,
				opacity, tintArgb, cornerSmoothness, scissorArea,
				createBounds(x, y, width, height, pose, scissorArea));
	}

	@Override
	public void setupVertices(VertexConsumer vertices) {
		float corner = Math.max(0.0f, Math.min(radius, Math.min(width, height) * 0.5f));
		int fixedRadius = Math.round(corner * RADIUS_FIXED_POINT);
		float smooth = clamp01(smoothness);
		float mix = clamp01(tintMix);
		float alpha = clamp01(opacity);

		Vector2f transformed = new Vector2f();
		emit(vertices, transformed, x, y, fixedRadius, smooth, mix, alpha);
		emit(vertices, transformed, x, y + height, fixedRadius, smooth, mix, alpha);
		emit(vertices, transformed, x + width, y + height, fixedRadius, smooth, mix, alpha);
		emit(vertices, transformed, x + width, y, fixedRadius, smooth, mix, alpha);
	}

	private void emit(VertexConsumer vertices, Vector2f transformed, float vx, float vy,
			int fixedRadius, float smooth, float mix, float alpha) {
		pose.transformPosition(vx, vy, transformed);
		vertices.vertex(transformed.x, transformed.y, cornerSmoothness)
				.color(tintArgb)
				.texture(width, height)
				.overlay(fixedRadius, fixedRadius)
				.light(fixedRadius, fixedRadius)
				.normal(smooth, mix, alpha);
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
