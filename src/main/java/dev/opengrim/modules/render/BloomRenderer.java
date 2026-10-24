package dev.opengrim.modules.render;

import java.nio.ByteBuffer;
import java.util.OptionalInt;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.pipeline.BlendFunction;
import com.mojang.blaze3d.pipeline.CompiledRenderPipeline;
import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.platform.DepthTestFunction;
import com.mojang.blaze3d.shaders.ShaderType;
import com.mojang.blaze3d.systems.CommandEncoder;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.FilterMode;
import com.mojang.blaze3d.textures.GpuTextureView;
import com.mojang.blaze3d.vertex.VertexFormat;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gl.Framebuffer;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.gl.SimpleFramebuffer;
import net.minecraft.client.gl.UniformType;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.util.Identifier;
import org.lwjgl.BufferUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Fullscreen bloom composite pipeline reproducing sixtwo.kl ({@code kl.bQd} / {@code kl.bQg}).
 *
 * <p>Uses the recovered {@code bloom_composite.glsl} shader pass with hierarchical multi-LOD pyramid sampling,
 * decoding HDR bloom levels and compositing the outer glow halo over the main framebuffer.
 *
 * <p>To prevent OpenGL/Blaze3D framebuffer texture feedback loops, the scene is copied to an intermediate
 * background buffer prior to the composite pass.
 */
public final class BloomRenderer {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/bloom");
	private static final Identifier SHADER = Identifier.of("opengrim", "bloom");
	private static final Identifier FRAGMENT_RESOURCE = Identifier.of("opengrim", "shaders/bloom.fsh");
	private static final int UBO_SIZE = 32;
	private static final int RING = 4;

	private static boolean attempted;
	private static boolean available;
	private static RenderPipeline pipeline;
	private static GpuBuffer quad;
	private static final GpuBuffer[] uniformRing = new GpuBuffer[RING];
	private static int ringIndex;

	private static SimpleFramebuffer bloomMask;
	private static int maskWidth;
	private static int maskHeight;

	private static SimpleFramebuffer background;
	private static int bgWidth;
	private static int bgHeight;

	private BloomRenderer() {
	}

	public static boolean initialize() {
		if (available) {
			return true;
		}
		if (attempted) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null || client.getResourceManager() == null || client.getShaderLoader() == null) {
			return false;
		}
		if (client.getResourceManager().getResource(FRAGMENT_RESOURCE).isEmpty()) {
			return false;
		}
		if (client.getShaderLoader().getSource(SHADER, ShaderType.VERTEX) == null) {
			return false;
		}
		attempted = true;
		try {
			pipeline = RenderPipelines.register(RenderPipeline.builder()
					.withLocation(Identifier.of("opengrim", "pipeline/bloom"))
					.withVertexShader(SHADER)
					.withFragmentShader(SHADER)
					.withSampler("Sampler0")
					.withSampler("Sampler1")
					.withUniform("Bloom", UniformType.UNIFORM_BUFFER)
					.withVertexFormat(VertexFormats.POSITION, VertexFormat.DrawMode.QUADS)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(false)
					.withCull(false)
					.withBlend(BlendFunction.TRANSLUCENT)
					.build());
			CompiledRenderPipeline compiled = RenderSystem.getDevice().precompilePipeline(pipeline);
			if (compiled == null || !compiled.isValid()) {
				LOGGER.warn("bloom pipeline failed validation");
				return false;
			}
			available = true;
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("bloom pipeline unavailable", throwable);
			return false;
		}
	}

	public static boolean available() {
		return initialize();
	}

	public static SimpleFramebuffer getOrCreateMask(int width, int height) {
		if (bloomMask == null || maskWidth != width || maskHeight != height) {
			if (bloomMask != null) {
				bloomMask.delete();
			}
			bloomMask = new SimpleFramebuffer("opengrim-bloom-mask", width, height, true);
			maskWidth = width;
			maskHeight = height;
		}
		return bloomMask;
	}

	public static boolean composite(Framebuffer main, Framebuffer mask, float strength, int glowColor) {
		if (!initialize() || main == null) {
			return false;
		}
		if (main.getColorAttachment() == null) {
			return false;
		}
		int width = main.textureWidth;
		int height = main.textureHeight;
		if (width <= 0 || height <= 0) {
			return false;
		}

		if (background == null || bgWidth != width || bgHeight != height) {
			if (background != null) {
				background.delete();
			}
			background = new SimpleFramebuffer("opengrim-bloom-background", width, height, false);
			bgWidth = width;
			bgHeight = height;
		}

		CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
		encoder.copyTextureToTexture(main.getColorAttachment(), background.getColorAttachment(),
				0, 0, 0, 0, 0, width, height);

		GpuBuffer vertices = quad();
		RenderSystem.ShapeIndexBuffer indices = RenderSystem.getSequentialBuffer(VertexFormat.DrawMode.QUADS);
		GpuBuffer indexBuffer = indices.getIndexBuffer(6);
		VertexFormat.IndexType indexType = indices.getIndexType();
		GpuBuffer uniforms = uniformBuffer(encoder, strength, glowColor);

		GpuTextureView maskView = (mask == null || mask == main || mask.getColorAttachment() == null)
				? background.getColorAttachmentView()
				: mask.getColorAttachmentView();

		try (RenderPass pass = encoder.createRenderPass(() -> "opengrim bloom",
				main.getColorAttachmentView(), OptionalInt.empty())) {
			pass.setPipeline(pipeline);
			pass.setUniform("Bloom", uniforms.slice());
			pass.bindTexture("Sampler0", background.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.bindTexture("Sampler1", maskView,
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.setVertexBuffer(0, vertices);
			pass.setIndexBuffer(indexBuffer, indexType);
			pass.drawIndexed(0, 0, 6, 1);
		}
		return true;
	}

	private static GpuBuffer quad() {
		if (quad == null) {
			ByteBuffer vertices = BufferUtils.createByteBuffer(4 * 3 * Float.BYTES);
			float[] coords = {
					-1.0f, -1.0f, 0.0f,
					 1.0f, -1.0f, 0.0f,
					 1.0f,  1.0f, 0.0f,
					-1.0f,  1.0f, 0.0f
			};
			for (float coordinate : coords) {
				vertices.putFloat(coordinate);
			}
			vertices.flip();
			quad = RenderSystem.getDevice().createBuffer(() -> "opengrim bloom quad",
					GpuBuffer.USAGE_VERTEX, vertices);
		}
		return quad;
	}

	private static GpuBuffer uniformBuffer(CommandEncoder encoder, float strength, int glowColor) {
		ByteBuffer bytes = BufferUtils.createByteBuffer(UBO_SIZE);
		// vec4 glowColor
		bytes.putFloat(((glowColor >> 16) & 0xFF) / 255.0f)
				.putFloat(((glowColor >> 8) & 0xFF) / 255.0f)
				.putFloat((glowColor & 0xFF) / 255.0f)
				.putFloat(1.0f);
		// vec4 params: x = bloomStrength, y = 7.0f, z = 0, w = 0
		bytes.putFloat(strength)
				.putFloat(7.0f)
				.putFloat(0.0f)
				.putFloat(0.0f);
		bytes.flip();

		int slot = ringIndex++ % RING;
		GpuBuffer buffer = uniformRing[slot];
		if (buffer == null) {
			buffer = RenderSystem.getDevice().createBuffer(() -> "opengrim bloom uniforms",
					GpuBuffer.USAGE_UNIFORM | GpuBuffer.USAGE_COPY_DST, UBO_SIZE);
			uniformRing[slot] = buffer;
		}
		encoder.writeToBuffer(buffer.slice(), bytes);
		return buffer;
	}
}
