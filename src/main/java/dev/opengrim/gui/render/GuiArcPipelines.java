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
 * Pipeline for the recovered {@code arc} SDF
 * ({@code assets/opengrim/shaders/arc.glsl}, sixtwo.lC.cdw/cdx): stroked arcs
 * and filled discs. The original passes size/thickness/angles/smoothness as
 * scalar uniforms; they travel in the vertex stream here (see
 * {@link ArcGuiElementRenderState}).
 */
public final class GuiArcPipelines {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/gui-arc");

	private static final Identifier SHADER = Identifier.of("opengrim", "gui_arc");
	private static final Identifier FRAGMENT_RESOURCE = Identifier.of("opengrim", "shaders/gui_arc.fsh");

	private static boolean attempted;
	private static boolean available;
	private static RenderPipeline arc;

	private GuiArcPipelines() {
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

	public static RenderPipeline arc() {
		return arc;
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
			arc = RenderPipelines.register(RenderPipeline
					.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
					.withLocation(Identifier.of("opengrim", "pipeline/gui_arc"))
					.withVertexShader(SHADER)
					.withFragmentShader(SHADER)
					.withBlend(BlendFunction.TRANSLUCENT)
					.withVertexFormat(VertexFormats.POSITION_COLOR_TEXTURE_OVERLAY_LIGHT_NORMAL,
							VertexFormat.DrawMode.QUADS)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(false)
					.build());
			CompiledRenderPipeline compiled = RenderSystem.getDevice().precompilePipeline(arc);
			if (compiled == null || !compiled.isValid()) {
				LOGGER.warn("arc pipeline failed validation; GuiDraw.fillCircle keeps the raster fallback");
				return false;
			}
			available = true;
			LOGGER.info("arc pipeline ready (gui_arc, recovered arc.glsl)");
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("arc pipeline unavailable; GuiDraw.fillCircle keeps the raster fallback", throwable);
			return false;
		}
	}
}
