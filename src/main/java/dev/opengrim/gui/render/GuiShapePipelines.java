package dev.opengrim.gui.render;

import com.mojang.blaze3d.pipeline.BlendFunction;
import com.mojang.blaze3d.pipeline.CompiledRenderPipeline;
import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.platform.DepthTestFunction;
import com.mojang.blaze3d.shaders.ShaderType;
import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.vertex.VertexFormat;

import dev.opengrim.gui.ui.GuiDraw;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.util.Identifier;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Render pipelines for the recovered original {@code shape} shader
 * ({@code assets/opengrim/shaders/shape.glsl}, sixtwo.lC.cdm/cej).
 *
 * <p>The original client owns its GL programs (sixtwo.lR) and binds scalar
 * uniforms directly (sixtwo.jN.bJq/bJt). 1.21.11's deferred GUI renderer
 * batches by {@link RenderPipeline} and cannot carry per-primitive scalar
 * uniforms, so {@code gui_shape.vsh/fsh} transport the same uniform values in
 * the vertex stream. The SDF/mask math is unchanged from {@code shape.glsl};
 * see {@link ShapeGuiElementRenderState} for the channel map.
 *
 * <p>Two pipelines share the shaders:
 * <ul>
 * <li>{@code fill} = lC.cdm / kg.bOX (maskType MASK_FILL),</li>
 * <li>{@code outline} = lC.cej / kg.bPb (MASK_OUTLINE, 1.0f thickness).</li>
 * </ul>
 *
 * <p>If the shaders cannot be compiled (missing resources, driver rejection),
 * {@link #available()} turns false and {@link GuiDraw} keeps the old
 * DrawContext approximation. The pipelines are only built after the client's
 * resource manager has loaded our shader files, so a startup race cannot
 * permanently disable the path.
 */
public final class GuiShapePipelines {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/gui-shape");

	private static final Identifier SHADER = Identifier.of("opengrim", "gui_shape");
	private static final Identifier FRAGMENT_RESOURCE =
			Identifier.of("opengrim", "shaders/gui_shape.fsh");

	private static boolean attempted;
	private static boolean available;
	private static RenderPipeline fill;
	private static RenderPipeline outline;

	private GuiShapePipelines() {
	}

	/** True when both shape pipelines are registered and compiled. */
	public static boolean available() {
		if (available) {
			return true;
		}
		if (attempted) {
			return false;
		}
		return initialize();
	}

	public static RenderPipeline fill() {
		return fill;
	}

	public static RenderPipeline outline() {
		return outline;
	}

	private static synchronized boolean initialize() {
		if (available) {
			return true;
		}
		if (attempted) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null || client.getResourceManager() == null
				|| client.getResourceManager().getResource(FRAGMENT_RESOURCE).isEmpty()) {
			// Resource reload has not picked up our shaders yet; retry next frame.
			return false;
		}
		if (client.getShaderLoader() == null
				|| client.getShaderLoader().getSource(SHADER, ShaderType.VERTEX) == null
				|| client.getShaderLoader().getSource(SHADER, ShaderType.FRAGMENT) == null) {
			// The shader cache is rebuilt by the resource reload; wait until both
			// stages are present instead of permanently falling back on the first
			// tick of a reload.
			return false;
		}
		attempted = true;
		try {
			fill = register("gui_shape_fill", false);
			outline = register("gui_shape_outline", true);
			CompiledRenderPipeline compiledFill = RenderSystem.getDevice().precompilePipeline(fill);
			CompiledRenderPipeline compiledOutline = RenderSystem.getDevice().precompilePipeline(outline);
			if (compiledFill == null || !compiledFill.isValid()
					|| compiledOutline == null || !compiledOutline.isValid()) {
				LOGGER.warn("shape pipeline failed validation; GuiDraw keeps the DrawContext fallback");
				return false;
			}
			available = true;
			LOGGER.info("shape pipelines ready (gui_shape fill/outline, POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL)");
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("shape pipeline unavailable; GuiDraw keeps the DrawContext fallback", throwable);
			return false;
		}
	}

	private static RenderPipeline register(String path, boolean maskOutline) {
		RenderPipeline.Builder builder = RenderPipeline
				.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
				.withLocation(Identifier.of("opengrim", "pipeline/" + path))
				.withVertexShader(SHADER)
				.withFragmentShader(SHADER)
				.withBlend(BlendFunction.TRANSLUCENT)
				.withVertexFormat(VertexFormats.POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL,
						VertexFormat.DrawMode.QUADS)
				.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
				.withDepthWrite(false)
				// lC.cdk/kd.sQVlR uses SHAPE_RECTANGLE here: the port's GuiDraw
				// surface carries one corner radius and no squircle exponent yet.
				.withShaderDefine("SHAPE_TYPE", 0);
		if (maskOutline) {
			builder.withShaderDefine("MASK_OUTLINE");
		}
		return RenderPipelines.register(builder.build());
	}
}
