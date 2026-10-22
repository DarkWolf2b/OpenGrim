package dev.opengrim.modules.render;

import java.util.OptionalDouble;
import java.util.OptionalInt;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.buffers.GpuBufferSlice;
import com.mojang.blaze3d.pipeline.BlendFunction;
import com.mojang.blaze3d.pipeline.CompiledRenderPipeline;
import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.platform.DepthTestFunction;
import com.mojang.blaze3d.platform.DestFactor;
import com.mojang.blaze3d.platform.SourceFactor;
import com.mojang.blaze3d.shaders.ShaderType;
import com.mojang.blaze3d.systems.CommandEncoder;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.GpuTextureView;
import com.mojang.blaze3d.vertex.VertexFormat;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gl.Framebuffer;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.render.BuiltBuffer;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.util.Identifier;
import org.joml.Matrix4f;
import org.joml.Vector3f;
import org.joml.Vector4f;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Immediate textured/solid circle draws for Jump Circle (sixtwo.db) and
 * Circle ESP (sixtwo.dw), reproducing {@code kz.bSh} (kz.java:458-480) and
 * {@code kz.bSi} (kz.java:344-452) with the recovered {@code kR} pipelines:
 *
 * <ul>
 *   <li>{@code kR.Dmmsd.bUZ(kz.aKqGY)} - POSITION_COLOR_TEXTURE_LIGHT quads,
 *       blend {@code lh.aApMr} (SRC_ALPHA, ONE, ONE, ONE — additive; lh.java:227),
 *       {@code NO_DEPTH_TEST}, depth write {@code true}, cull {@code false};
 *       additive is required: the recovered {@code circle.png} is an opaque
 *       black square with a white ring (alpha 255 everywhere), so black texels
 *       must contribute nothing. Standard alpha blending drew an opaque black
 *       card around every circle (user screenshot 2026-10-22 21:59).
 *       texture bound as {@code Sampler0} from
 *       {@code AbstractTexture.getGlTextureView()/getSampler()} (kz.bSj).</li>
 *   <li>{@code kR.PMnQE} - POSITION_COLOR TRIANGLE_STRIP, same state.</li>
 * </ul>
 *
 * <p>The original draws immediately through {@code lF.cfD/cfW} at the world
 * render event; this helper creates the equivalent {@link RenderPass} against
 * the main framebuffer with the main depth attachment. The lightmap arguments
 * in kz.bSh are {@code kz.bSr} native constants; the custom stages are
 * full-bright, as recorded in the Jump Circle / Circle ESP module docs.
 */
final class EffectDraw {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/circles");
	private static final Identifier TEXTURED_SHADER = Identifier.of("opengrim", "circle_textured");
	private static final Identifier SOLID_SHADER = Identifier.of("opengrim", "circle_solid");
	/** {@code lh.aApMr} (lh.java:227): SRC_ALPHA/ONE additive, not alpha blending. */
	private static final BlendFunction BLEND = new BlendFunction(
			SourceFactor.SRC_ALPHA, DestFactor.ONE,
			SourceFactor.ONE, DestFactor.ONE);

	private static boolean attempted;
	private static RenderPipeline textured;
	private static RenderPipeline solid;

	private EffectDraw() {
	}

	private static boolean initialize() {
		if (textured != null && solid != null) {
			return true;
		}
		if (attempted) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null || client.getResourceManager() == null || client.getShaderLoader() == null) {
			return false;
		}
		if (client.getResourceManager().getResource(
				Identifier.of("opengrim", "shaders/circle_textured.fsh")).isEmpty()
				|| client.getResourceManager().getResource(
				Identifier.of("opengrim", "shaders/circle_solid.fsh")).isEmpty()) {
			return false;
		}
		if (client.getShaderLoader().getSource(TEXTURED_SHADER, ShaderType.VERTEX) == null
				|| client.getShaderLoader().getSource(SOLID_SHADER, ShaderType.VERTEX) == null) {
			return false;
		}
		attempted = true;
		try {
			textured = RenderPipelines.register(RenderPipeline
					.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
					.withLocation(Identifier.of("opengrim", "pipeline/circle_textured"))
					.withVertexShader(TEXTURED_SHADER)
					.withFragmentShader(TEXTURED_SHADER)
					.withSampler("Sampler0")
					.withBlend(BLEND)
					.withVertexFormat(VertexFormats.POSITION_COLOR_TEXTURE_LIGHT,
							VertexFormat.DrawMode.QUADS)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(true)
					.withCull(false)
					.build());
			solid = RenderPipelines.register(RenderPipeline
					.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
					.withLocation(Identifier.of("opengrim", "pipeline/circle_solid"))
					.withVertexShader(SOLID_SHADER)
					.withFragmentShader(SOLID_SHADER)
					.withBlend(BLEND)
					.withVertexFormat(VertexFormats.POSITION_COLOR,
							VertexFormat.DrawMode.TRIANGLE_STRIP)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(true)
					.withCull(false)
					.build());
			CompiledRenderPipeline compiledTextured = RenderSystem.getDevice().precompilePipeline(textured);
			CompiledRenderPipeline compiledSolid = RenderSystem.getDevice().precompilePipeline(solid);
			if (compiledTextured == null || !compiledTextured.isValid()
					|| compiledSolid == null || !compiledSolid.isValid()) {
				LOGGER.warn("circle pipelines failed validation");
				return false;
			}
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("circle pipelines unavailable", throwable);
			return false;
		}
	}

	/** {@code kz.bSh} textured billboard. */
	static void drawTextured(BuiltBuffer buffer, Identifier texture) {
		if (!initialize() || texture == null) {
			buffer.close();
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		AbstractTexture abstractTexture = client.getTextureManager().getTexture(texture);
		if (abstractTexture == null) {
			buffer.close();
			return;
		}
		draw(textured, buffer, abstractTexture.getGlTextureView(), abstractTexture.getSampler());
	}

	/** Generic immediate draw with an already-built pipeline (china hat). */
	static void drawCustom(RenderPipeline pipeline, BuiltBuffer buffer) {
		if (buffer == null) {
			return;
		}
		if (pipeline == null) {
			buffer.close();
			return;
		}
		draw(pipeline, buffer, null, null);
	}

	/** {@code kz.bSi} solid ring. */
	static void drawSolid(BuiltBuffer buffer) {
		if (!initialize()) {
			buffer.close();
			return;
		}
		draw(solid, buffer, null, null);
	}

	private static void draw(RenderPipeline pipeline, BuiltBuffer buffer, GpuTextureView texture,
			net.minecraft.client.gl.GpuSampler sampler) {
		MinecraftClient client = MinecraftClient.getInstance();
		Framebuffer main = client.getFramebuffer();
		if (main == null || main.getColorAttachmentView() == null) {
			buffer.close();
			return;
		}
		try (buffer) {
			CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
			// Everything that can map/upload a buffer must happen before the pass is open
			// (vanilla RenderLayer.draw:73-83 order): DynamicUniforms.write, the immediate
			// vertex upload and ShapeIndexBuffer.getIndexBuffer all issue command-encoder
			// writes. Doing any of them inside the pass throws
			// "Close the existing render pass before performing additional commands" and
			// killed every ChinaHat/JumpCircle/CircleEsp draw.
			GpuBufferSlice dynamicTransforms = RenderSystem.getDynamicUniforms().write(
					RenderSystem.getModelViewMatrix(), new Vector4f(1.0f, 1.0f, 1.0f, 1.0f),
					new Vector3f(0.0f), new Matrix4f());
			GpuBuffer vertices = pipeline.getVertexFormat()
					.uploadImmediateVertexBuffer(buffer.getBuffer());
			BuiltBuffer.DrawParameters parameters = buffer.getDrawParameters();
			RenderSystem.ShapeIndexBuffer indices = RenderSystem.getSequentialBuffer(
					parameters.mode());
			GpuBuffer indexBuffer = indices.getIndexBuffer(parameters.indexCount());
			VertexFormat.IndexType indexType = indices.getIndexType();
			try (RenderPass pass = encoder.createRenderPass(() -> "opengrim circles",
					main.getColorAttachmentView(), OptionalInt.empty(),
					main.getDepthAttachmentView(), OptionalDouble.empty())) {
				pass.setPipeline(pipeline);
				RenderSystem.bindDefaultUniforms(pass);
				pass.setUniform("DynamicTransforms", dynamicTransforms);
				pass.setVertexBuffer(0, vertices);
				if (texture != null) {
					pass.bindTexture("Sampler0", texture, sampler);
				}
				pass.setIndexBuffer(indexBuffer, indexType);
				pass.drawIndexed(0, 0, parameters.indexCount(), 1);
			}
		}
	}
}
