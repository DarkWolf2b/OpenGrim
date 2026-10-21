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
 * Pipelines for the recovered MSDF text shader
 * ({@code assets/opengrim/shaders/msdf.glsl}, sixtwo.lk.bZd / kR.mQUZT) with the
 * original {@code msdfgen} sheets imported under
 * {@code assets/opengrim/fonts/msdf/}.
 *
 * <p>The scalar uniform set ({@code range}, {@code thickness},
 * {@code smoothness}, {@code outline}, {@code outlineThickness},
 * {@code outlineColor}, {@code fadeout*}, {@code maxWidth}, {@code textPosX}) is
 * packed into {@code POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL} attributes
 * (see {@code gui_msdf.vsh} and {@link MsdfGuiElementRenderState}); no per-draw
 * uniform hook exists in 1.21.11's deferred GUI renderer.
 *
 * <p>The plain pipeline is what {@link dev.opengrim.gui.ui.MsdfFont} uses; the
 * outline/fadeout variants are registered/precompiled for the next text pass
 * (HUD outline text / overflow fade) and are selected by
 * {@link #pipeline(boolean, boolean)}.
 */
public final class GuiMsdfPipelines {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/gui-msdf");

	private static final Identifier SHADER = Identifier.of("opengrim", "gui_msdf");
	private static final Identifier FRAGMENT_RESOURCE =
			Identifier.of("opengrim", "shaders/gui_msdf.fsh");

	private static boolean attempted;
	private static boolean available;
	private static RenderPipeline plain;
	private static RenderPipeline outline;
	private static RenderPipeline fadeout;
	private static RenderPipeline outlineFadeout;

	private GuiMsdfPipelines() {
	}

	/** True when the plain MSDF pipeline is registered and compiled. */
	public static boolean available() {
		if (available) {
			return true;
		}
		if (attempted) {
			return false;
		}
		return initialize();
	}

	/** The plain text pipeline (no outline, no fadeout). */
	public static RenderPipeline plain() {
		return plain;
	}

	/**
	 * Selects a pipeline variant; {@code null} when that variant failed to
	 * compile (the caller may fall back to the baked-alpha path).
	 */
	public static RenderPipeline pipeline(boolean outline, boolean fadeout) {
		if (outline && fadeout) {
			return GuiMsdfPipelines.outlineFadeout;
		}
		if (outline) {
			return GuiMsdfPipelines.outline;
		}
		if (fadeout) {
			return GuiMsdfPipelines.fadeout;
		}
		return plain;
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
			return false;
		}
		if (client.getShaderLoader() == null
				|| client.getShaderLoader().getSource(SHADER, ShaderType.VERTEX) == null
				|| client.getShaderLoader().getSource(SHADER, ShaderType.FRAGMENT) == null) {
			// The shader cache is rebuilt by the resource reload; wait for it.
			return false;
		}
		attempted = true;
		try {
			plain = register("gui_msdf", false, false);
			outline = registerOrNull("gui_msdf_outline", true, false);
			fadeout = registerOrNull("gui_msdf_fadeout", false, true);
			outlineFadeout = registerOrNull("gui_msdf_outline_fadeout", true, true);
			CompiledRenderPipeline compiled = RenderSystem.getDevice().precompilePipeline(plain);
			if (compiled == null || !compiled.isValid()) {
				LOGGER.warn("MSDF pipeline failed validation; MsdfFont keeps the baked-alpha fallback");
				return false;
			}
			available = true;
			LOGGER.info("MSDF pipeline ready (gui_msdf, recovered msdf.glsl)");
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("MSDF pipeline unavailable; MsdfFont keeps the baked-alpha fallback", throwable);
			return false;
		}
	}

	private static RenderPipeline registerOrNull(String path, boolean outline, boolean fadeout) {
		try {
			RenderPipeline pipeline = register(path, outline, fadeout);
			CompiledRenderPipeline compiled = RenderSystem.getDevice().precompilePipeline(pipeline);
			return compiled != null && compiled.isValid() ? pipeline : null;
		} catch (Throwable throwable) {
			LOGGER.warn("MSDF pipeline variant {} unavailable", path, throwable);
			return null;
		}
	}

	private static RenderPipeline register(String path, boolean outline, boolean fadeout) {
		RenderPipeline.Builder builder = RenderPipeline
				.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
				.withLocation(Identifier.of("opengrim", "pipeline/" + path))
				.withVertexShader(SHADER)
				.withFragmentShader(SHADER)
				.withSampler("Sampler0")
				.withBlend(BlendFunction.TRANSLUCENT)
				.withVertexFormat(VertexFormats.POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL,
						VertexFormat.DrawMode.QUADS)
				.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
				.withDepthWrite(false);
		if (outline) {
			builder.withShaderDefine("MSDF_OUTLINE");
		}
		if (fadeout) {
			builder.withShaderDefine("MSDF_FADEOUT");
		}
		return RenderPipelines.register(builder.build());
	}
}
