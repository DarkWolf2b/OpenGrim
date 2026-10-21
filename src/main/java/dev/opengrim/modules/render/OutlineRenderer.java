package dev.opengrim.modules.render;

import java.nio.ByteBuffer;
import java.util.List;
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
import com.mojang.blaze3d.vertex.VertexFormat;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gl.Framebuffer;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.gl.UniformType;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Vec3d;
import org.lwjgl.BufferUtils;
import org.lwjgl.glfw.GLFW;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Outline composite for sixtwo.dl ({@code ki.bPi} -> {@code ki.bPk}).
 *
 * <p>Recovered pipeline (ki.java:206-266):
 * <ol>
 *   <li>{@code ZtWVe.caK()/caM()} resizes and clears the outline target (color +
 *       depth).</li>
 *   <li>The main render target is swapped to the outline target and the {@code dl.agJ}
 *       runnable re-renders every collected entity through {@code kn.bQt} with
 *       {@code kn.YNOIY = true}; the shared mask pass is {@link ChamsRenderer#renderMask}.</li>
 *   <li>{@code kn.bQr(kR.MNKWu, framebuffer, ...)} draws the recovered
 *       {@code outlines.glsl} composite, binding the outline target as
 *       {@code Sampler0} and uploading the ten {@code ki.bPi} parameters.</li>
 * </ol>
 *
 * <p>Uniform order (ki.java:249-264 and outlines.glsl): time = GLFW time *
 * animation speed, firstColor/secondColor from the two colour settings,
 * colorMode/glowQuality ints, glowRadius, glowAlphaMultiplier,
 * glowThinOutline = 1, fillAlphaMultiplier, halfTexelSize = 0.5 / target size,
 * saturation, brightness. The {@code ki.bPq} DES slots are inferred from the
 * shader's visible names, which are unique to this uniform set.
 */
final class OutlineRenderer {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/outlines");
	private static final Identifier SHADER = Identifier.of("opengrim", "outlines");
	private static final Identifier FRAGMENT_RESOURCE = Identifier.of("opengrim", "shaders/outlines.fsh");
	private static final int UBO_SIZE = 96;
	private static final int RING = 4;

	private static boolean attempted;
	private static boolean available;
	private static RenderPipeline pipeline;
	private static GpuBuffer quad;
	private static final GpuBuffer[] uniformRing = new GpuBuffer[RING];
	private static int ringIndex;

	private OutlineRenderer() {
	}

	private static boolean initialize() {
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
					.withLocation(Identifier.of("opengrim", "pipeline/outlines"))
					.withVertexShader(SHADER)
					.withFragmentShader(SHADER)
					.withSampler("Sampler0")
					.withUniform("Outlines", UniformType.UNIFORM_BUFFER)
					.withVertexFormat(VertexFormats.POSITION, VertexFormat.DrawMode.QUADS)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(false)
					.withCull(false)
					.withBlend(BlendFunction.TRANSLUCENT)
					.build());
			CompiledRenderPipeline compiled = RenderSystem.getDevice().precompilePipeline(pipeline);
			if (compiled == null || !compiled.isValid()) {
				LOGGER.warn("outlines pipeline failed validation");
				return false;
			}
			available = true;
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("outlines pipeline unavailable", throwable);
			return false;
		}
	}

	/** True once the outline composite shader is compiled. */
	static boolean available() {
		return initialize();
	}

	static void draw(List<Entity> entities, MatrixStack matrices, CameraRenderState cameraState,
			Vec3d cameraPos, float tickDelta, Outlines module) {
		if (!initialize() || !ChamsRenderer.renderMask(entities, matrices, cameraState, cameraPos,
				tickDelta, false)) {
			return;
		}
		composite(ChamsRenderer.maskTarget(), module.getColor(), module.getSecondColor(),
				colorModeIndex(module.getColorMode()), module.getGlowQuality(),
				module.getGlowRadius(), module.getAnimationSpeed(),
				module.getGlowAlphaMultiplier(), module.getFillAlphaMultiplier(),
				module.getSaturation(), module.getBrightness());
	}

	/** Composite-only entry used by Hand Chams ({@code de.act}) with a hand mask. */
	static boolean composite(Framebuffer mask, int color, int secondColor, int colorMode,
			int glowQuality, double glowRadius, double animationSpeed, double glowAlpha,
			double fillAlpha, double saturation, double brightness) {
		if (!initialize() || mask == null) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		Framebuffer main = client.getFramebuffer();
		if (main == null || main.getColorAttachmentView() == null) {
			return false;
		}
		CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
		GpuBuffer uniforms = uniformBuffer(encoder, mask.textureWidth, mask.textureHeight, color,
				secondColor, colorMode, glowQuality, glowRadius, animationSpeed, glowAlpha,
				fillAlpha, saturation, brightness);
		try (RenderPass pass = encoder.createRenderPass(() -> "opengrim outlines",
				main.getColorAttachmentView(), OptionalInt.empty())) {
			pass.setPipeline(pipeline);
			pass.setUniform("Outlines", uniforms.slice());
			pass.bindTexture("Sampler0", mask.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.setVertexBuffer(0, quad(encoder));
			RenderSystem.ShapeIndexBuffer indices = RenderSystem.getSequentialBuffer(
					VertexFormat.DrawMode.QUADS);
			pass.setIndexBuffer(indices.getIndexBuffer(4), indices.getIndexType());
			pass.drawIndexed(0, 0, 4, 1);
		}
		return true;
	}

	private static GpuBuffer quad(CommandEncoder encoder) {
		if (quad == null) {
			ByteBuffer vertices = BufferUtils.createByteBuffer(4 * 3 * Float.BYTES);
			float[] coords = {-1.0f, -1.0f, 0.0f, 1.0f, -1.0f, 0.0f,
					1.0f, 1.0f, 0.0f, -1.0f, 1.0f, 0.0f};
			for (float coordinate : coords) {
				vertices.putFloat(coordinate);
			}
			vertices.flip();
			quad = RenderSystem.getDevice().createBuffer(() -> "opengrim outlines quad",
					GpuBuffer.USAGE_VERTEX, vertices);
		}
		return quad;
	}

	private static GpuBuffer uniformBuffer(CommandEncoder encoder, int width, int height,
			int color, int secondColor, int colorMode, int glowQuality, double glowRadius,
			double animationSpeed, double glowAlpha, double fillAlpha, double saturation,
			double brightness) {
		ByteBuffer bytes = BufferUtils.createByteBuffer(UBO_SIZE);
		bytes.putFloat(0.5f / width).putFloat(0.5f / height)
				.putFloat((float) (GLFW.glfwGetTime() * animationSpeed))
				.putFloat(0.0f);
		putColor(bytes, color);
		putColor(bytes, secondColor);
		bytes.putInt(colorMode)
				.putInt(glowQuality)
				.putInt(1) // glowThinOutline (ki.bPk constant 1)
				.putInt(0);
		bytes.putFloat((float) glowRadius)
				.putFloat((float) glowAlpha)
				.putFloat((float) fillAlpha)
				.putFloat((float) saturation);
		bytes.putFloat((float) brightness).putFloat(0.0f).putFloat(0.0f).putFloat(0.0f);
		bytes.flip();

		int slot = ringIndex++ % RING;
		GpuBuffer buffer = uniformRing[slot];
		if (buffer == null) {
			buffer = RenderSystem.getDevice().createBuffer(() -> "opengrim outlines uniforms",
					GpuBuffer.USAGE_UNIFORM | GpuBuffer.USAGE_COPY_DST, UBO_SIZE);
			uniformRing[slot] = buffer;
		}
		encoder.writeToBuffer(buffer.slice(), bytes);
		return buffer;
	}

	private static int colorModeIndex(String mode) {
		return switch (mode) {
			case "One" -> 1;
			case "Two" -> 2;
			case "Three" -> 3;
			default -> 0;
		};
	}

	private static void putColor(ByteBuffer bytes, int argb) {
		bytes.putFloat(((argb >> 16) & 0xFF) / 255.0f)
				.putFloat(((argb >> 8) & 0xFF) / 255.0f)
				.putFloat((argb & 0xFF) / 255.0f)
				.putFloat(((argb >>> 24) & 0xFF) / 255.0f);
	}
}
