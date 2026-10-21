package dev.opengrim.gui.render;

import com.mojang.blaze3d.pipeline.RenderPipeline;

import net.minecraft.client.gui.ScreenRect;
import net.minecraft.client.gui.render.state.SimpleGuiElementRenderState;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.texture.TextureSetup;
import org.joml.Matrix3x2fc;
import org.joml.Vector2f;

/**
 * One quad of the recovered {@code arc} SDF. Channel map (see
 * {@code gui_arc.vsh}):
 * <ul>
 * <li>UV0 = size (width, height),</li>
 * <li>UV1 = thickness (/32 fixed point), startAngle (/256 fixed point),</li>
 * <li>UV2 = endAngle (/256), smoothness (/256),</li>
 * <li>Color = vertex colour.</li>
 * </ul>
 */
public record ArcGuiElementRenderState(
		RenderPipeline pipeline,
		Matrix3x2fc pose,
		float x,
		float y,
		float width,
		float height,
		float thickness,
		float startAngle,
		float endAngle,
		float smoothness,
		int argb,
		ScreenRect scissorArea,
		ScreenRect bounds) implements SimpleGuiElementRenderState {

	private static final float THICKNESS_SCALE = 32.0f;
	private static final float ANGLE_SCALE = 256.0f;

	public ArcGuiElementRenderState(RenderPipeline pipeline, Matrix3x2fc pose, float x, float y,
			float width, float height, float thickness, float startAngle, float endAngle,
			float smoothness, int argb, ScreenRect scissorArea) {
		this(pipeline, pose, x, y, width, height, thickness, startAngle, endAngle, smoothness,
				argb, scissorArea, createBounds(x, y, width, height, pose, scissorArea));
	}

	@Override
	public TextureSetup textureSetup() {
		return TextureSetup.empty();
	}

	@Override
	public void setupVertices(VertexConsumer vertices) {
		int packedThickness = Math.round(Math.max(0.0f, Math.min(1023.0f, thickness)) * THICKNESS_SCALE);
		int packedStart = Math.round(startAngle * ANGLE_SCALE);
		int packedEnd = Math.round(endAngle * ANGLE_SCALE);
		int packedSmoothness = Math.round(Math.max(0.0f, Math.min(127.0f, smoothness)) * ANGLE_SCALE);

		Vector2f transformed = new Vector2f();
		emit(vertices, transformed, x, y, width, height, packedThickness, packedStart, packedEnd,
				packedSmoothness);
		emit(vertices, transformed, x, y + height, width, height, packedThickness, packedStart,
				packedEnd, packedSmoothness);
		emit(vertices, transformed, x + width, y + height, width, height, packedThickness,
				packedStart, packedEnd, packedSmoothness);
		emit(vertices, transformed, x + width, y, width, height, packedThickness, packedStart,
				packedEnd, packedSmoothness);
	}

	private void emit(VertexConsumer vertices, Vector2f transformed, float vx, float vy, float width,
			float height, int packedThickness, int packedStart, int packedEnd, int packedSmoothness) {
		pose.transformPosition(vx, vy, transformed);
		vertices.vertex(transformed.x, transformed.y, 0.0f)
				.color(argb)
				.texture(width, height)
				.overlay(packedThickness, packedStart)
				.light(packedEnd, packedSmoothness)
				.normal(0.0f, 0.0f, 0.0f);
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
