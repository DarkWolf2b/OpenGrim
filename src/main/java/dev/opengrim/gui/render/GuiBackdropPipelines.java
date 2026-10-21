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
import net.minecraft.client.gl.UniformType;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.util.Identifier;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Pipelines for the recovered blur path ({@code blur.glsl}, sixtwo.kk.bPM) and
 * the blur-style window composite (lC.ccW {@code fX.aYf()}):
 * <ul>
 * <li>{@code gui_blur} — fullscreen separable Gaussian pass (no blend, POSITION
 * quad, custom {@code Blur} UBO + {@code inTexture});</li>
 * <li>{@code gui_blur_backdrop} — samples the blurred framebuffer and masks it
 * with the shape SDF (shape vertex stage + gui_blur_backdrop.fsh).</li>
 * </ul>
 */
public final class GuiBackdropPipelines {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/gui-backdrop");

	private static final Identifier BLUR_SHADER = Identifier.of("opengrim", "gui_blur");
	private static final Identifier BACKDROP_SHADER = Identifier.of("opengrim", "gui_shape");
	private static final Identifier BACKDROP_FRAGMENT =
			Identifier.of("opengrim", "gui_blur_backdrop");
	private static final Identifier BLUR_RESOURCE = Identifier.of("opengrim", "shaders/gui_blur.fsh");
	private static final Identifier BACKDROP_RESOURCE =
			Identifier.of("opengrim", "shaders/gui_blur_backdrop.fsh");

	private static boolean attempted;
	private static boolean available;
	private static RenderPipeline blur;
	private static RenderPipeline backdrop;

	private GuiBackdropPipelines() {
	}

	public static boolean available() {
		if (available) {
			return true;
		}
		if (attempted) {
			return false;
		}
		return initialize();
	}

	public static RenderPipeline blur() {
		return blur;
	}

	public static RenderPipeline backdrop() {
		return backdrop;
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
				|| client.getResourceManager().getResource(BLUR_RESOURCE).isEmpty()
				|| client.getResourceManager().getResource(BACKDROP_RESOURCE).isEmpty()) {
			return false;
		}
		if (client.getShaderLoader() == null
				|| client.getShaderLoader().getSource(BLUR_SHADER, ShaderType.VERTEX) == null
				|| client.getShaderLoader().getSource(BLUR_SHADER, ShaderType.FRAGMENT) == null
				|| client.getShaderLoader().getSource(BACKDROP_SHADER, ShaderType.VERTEX) == null
				|| client.getShaderLoader().getSource(BACKDROP_FRAGMENT, ShaderType.FRAGMENT) == null) {
			return false;
		}
		attempted = true;
		try {
			blur = RenderPipelines.register(RenderPipeline.builder()
					.withLocation(Identifier.of("opengrim", "pipeline/gui_blur"))
					.withVertexShader(BLUR_SHADER)
					.withFragmentShader(BLUR_SHADER)
					.withSampler("inTexture")
					.withUniform("Blur", UniformType.UNIFORM_BUFFER)
					.withVertexFormat(VertexFormats.POSITION, VertexFormat.DrawMode.QUADS)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(false)
					.withCull(false)
					.withoutBlend()
					.build());
			backdrop = RenderPipelines.register(RenderPipeline
					.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
					.withLocation(Identifier.of("opengrim", "pipeline/gui_blur_backdrop"))
					.withVertexShader(BACKDROP_SHADER)
					.withFragmentShader(BACKDROP_FRAGMENT)
					.withSampler("Sampler0")
					.withBlend(BlendFunction.TRANSLUCENT)
					.withVertexFormat(VertexFormats.POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL,
							VertexFormat.DrawMode.QUADS)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(false)
					.build());
			CompiledRenderPipeline compiledBlur = RenderSystem.getDevice().precompilePipeline(blur);
			CompiledRenderPipeline compiledBackdrop = RenderSystem.getDevice().precompilePipeline(backdrop);
			if (compiledBlur == null || !compiledBlur.isValid()
					|| compiledBackdrop == null || !compiledBackdrop.isValid()) {
				LOGGER.warn("blur/backdrop pipelines failed validation; the opaque themed fill stays");
				return false;
			}
			available = true;
			LOGGER.info("blur/backdrop pipelines ready (gui_blur + gui_blur_backdrop)");
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("blur/backdrop pipelines unavailable; the opaque themed fill stays", throwable);
			return false;
		}
	}
}
