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
 * Pipeline for the recovered liquid glass composite
 * ({@code assets/opengrim/shaders/liquid_glass.glsl}, lC.ccW Liquid Glass branch
 * / kd.IbNTv). The shader keeps the original bevel/refraction/light/dispersion
 * model; per-window size/radius/cornerSmoothness/tint/opacity travel as vertex
 * attributes and the dark-glass configuration is the recovered theme default
 * (see gui_glass.fsh's const block).
 */
public final class GuiGlassPipelines {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/gui-glass");

	private static final Identifier SHADER = Identifier.of("opengrim", "gui_glass");
	private static final Identifier FRAGMENT_RESOURCE = Identifier.of("opengrim", "shaders/gui_glass.fsh");

	private static boolean attempted;
	private static boolean available;
	private static RenderPipeline glass;

	private GuiGlassPipelines() {
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

	public static RenderPipeline glass() {
		return glass;
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
			return false;
		}
		attempted = true;
		try {
			glass = RenderPipelines.register(RenderPipeline
					.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
					.withLocation(Identifier.of("opengrim", "pipeline/gui_glass"))
					.withVertexShader(SHADER)
					.withFragmentShader(SHADER)
					.withSampler("Sampler0")
					.withBlend(BlendFunction.TRANSLUCENT)
					.withVertexFormat(VertexFormats.POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL,
							VertexFormat.DrawMode.QUADS)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(false)
					.build());
			CompiledRenderPipeline compiled = RenderSystem.getDevice().precompilePipeline(glass);
			if (compiled == null || !compiled.isValid()) {
				LOGGER.warn("liquid glass pipeline failed validation; Blur/Solid stay available");
				return false;
			}
			available = true;
			LOGGER.info("liquid glass pipeline ready (gui_glass, recovered liquid_glass.glsl)");
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("liquid glass pipeline unavailable; Blur/Solid stay available", throwable);
			return false;
		}
	}
}
