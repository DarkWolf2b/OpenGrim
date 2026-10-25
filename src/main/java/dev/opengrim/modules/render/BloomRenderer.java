package dev.opengrim.modules.render;

import java.nio.ByteBuffer;
import java.util.OptionalInt;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.buffers.GpuBufferSlice;
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
import net.minecraft.client.gl.SimpleFramebuffer;
import net.minecraft.client.gl.UniformType;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.util.Identifier;
import org.lwjgl.BufferUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Port of sixtwo.kl ({@code kl.bQa}/{@code bQe}/{@code bQf}/{@code bQg}/
 * {@code bQb}) — the original's two-pass HDR bloom.
 *
 * <p>Pipeline (recovered from {@code analysis/decompiled/jar-casesafe/sixtwo/
 * kl.class}, which is fully Java; the on-disk {@code kl.java} is missing because
 * of the Windows {@code kl}/{@code kL} collision):
 * <ol>
 *   <li>{@link #capture} clears an effect target (with depth) and resizes the
 *       two ping-pong bloom buffers to the main framebuffer size
 *       ({@code kl.bQa}, {@code ls.caL}).</li>
 *   <li>The effect layer (glow sprites) is drawn into that target by the
 *       caller.</li>
 *   <li>{@link #composite} runs the blur/encode pass ({@code kR.JGYzq},
 *       {@code bloom_blur.fsh}, {@code jL.PTppR} = 0.25f) into the ping-pong
 *       buffer, then the composite pass ({@code kR.xfXqe},
 *       {@code bloom_composite.fsh}, {@code jL.wxgUS} = Glow Radius + Glow
 *       color) additively over the main framebuffer.</li>
 * </ol>
 *
 * <p>The previous implementation sampled the scene as if it were a bloom
 * pyramid, used a translucent (replace) blend and passed {@code Glow Radius *
 * 0.25f}. Both recovered shaders and the {@code kl} constants are used
 * verbatim here; {@code 0.25f} belongs to the blur pass, not to the Glow
 * Radius.
 */
public final class BloomRenderer {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/bloom");
	private static final Identifier SHARED_VERTEX = Identifier.of("opengrim", "bloom");
	private static final Identifier BLUR_SHADER = Identifier.of("opengrim", "bloom_blur");
	private static final Identifier COMPOSITE_SHADER = Identifier.of("opengrim", "bloom_composite");
	private static final Identifier BLUR_FRAGMENT = Identifier.of("opengrim", "shaders/bloom_blur.fsh");
	private static final Identifier COMPOSITE_FRAGMENT = Identifier.of("opengrim", "shaders/bloom_composite.fsh");
	private static final int UNIFORM_SIZE = 16;
	private static final int RING = 8;

	private static boolean attempted;
	private static boolean available;
	private static RenderPipeline blurPipeline;
	private static RenderPipeline compositePipeline;
	private static GpuBuffer quad;
	private static final GpuBuffer[] uniformRing = new GpuBuffer[RING];
	private static int ringIndex;

	private BloomRenderer() {
	}

	/** Per-module state corresponding to {@code kl$ug}. */
	public static final class State {
		private SimpleFramebuffer target;
		private SimpleFramebuffer bloomA;
		private SimpleFramebuffer bloomB;
		private int width;
		private int height;
		private int index;
		private boolean clearBlend = true;
	}

	public static State createState() {
		return new State();
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
		if (client.getResourceManager().getResource(BLUR_FRAGMENT).isEmpty()
				|| client.getResourceManager().getResource(COMPOSITE_FRAGMENT).isEmpty()) {
			return false;
		}
		if (client.getShaderLoader().getSource(SHARED_VERTEX, ShaderType.VERTEX) == null) {
			return false;
		}
		attempted = true;
		try {
			blurPipeline = RenderPipelines.register(RenderPipeline.builder()
					.withLocation(Identifier.of("opengrim", "pipeline/bloom_blur"))
					.withVertexShader(SHARED_VERTEX)
					.withFragmentShader(BLUR_SHADER)
					.withSampler("Sampler0")
					.withSampler("Sampler1")
					.withUniform("BloomBlur", UniformType.UNIFORM_BUFFER)
					.withVertexFormat(VertexFormats.POSITION, VertexFormat.DrawMode.QUADS)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(false)
					.withCull(false)
					.build());
			compositePipeline = RenderPipelines.register(RenderPipeline.builder()
					.withLocation(Identifier.of("opengrim", "pipeline/bloom_composite"))
					.withVertexShader(SHARED_VERTEX)
					.withFragmentShader(COMPOSITE_SHADER)
					.withSampler("Sampler0")
					.withSampler("Sampler1")
					.withUniform("Bloom", UniformType.UNIFORM_BUFFER)
					.withVertexFormat(VertexFormats.POSITION, VertexFormat.DrawMode.QUADS)
					.withBlend(BlendFunction.ADDITIVE)
					.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
					.withDepthWrite(false)
					.withCull(false)
					.build());
			CompiledRenderPipeline compiledBlur = RenderSystem.getDevice().precompilePipeline(blurPipeline);
			CompiledRenderPipeline compiledComposite = RenderSystem.getDevice().precompilePipeline(compositePipeline);
			if (compiledBlur == null || !compiledBlur.isValid()
					|| compiledComposite == null || !compiledComposite.isValid()) {
				LOGGER.warn("bloom pipelines failed validation");
				return false;
			}
			available = true;
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("bloom pipelines unavailable", throwable);
			return false;
		}
	}

	public static boolean available() {
		return initialize();
	}

	/**
	 * {@code kl.bQa}: clear/resize the effect target and return it. The caller
	 * draws the glow layer into the returned framebuffer.
	 */
	public static Framebuffer capture(State state, Framebuffer main, boolean copyDepth) {
		if (!initialize() || state == null || main == null || main.getColorAttachment() == null) {
			return null;
		}
		int width = main.textureWidth;
		int height = main.textureHeight;
		if (width <= 0 || height <= 0) {
			return null;
		}
		ensureSize(state, width, height);
		clear(state.target);
		if (copyDepth && main.getDepthAttachment() != null) {
			state.target.copyDepthFrom(main);
		}
		return state.target;
	}

	/**
	 * {@code kl.bQd}: blur/encode the effect layer, then composite it additively
	 * over {@code main}. {@code glowRadius} is the Glow Radius setting; it is
	 * the composite pass's {@code bloomStrength} and must not be scaled by the
	 * blur constant.
	 */
	public static boolean composite(State state, Framebuffer main, float glowRadius, int glowColor) {
		if (!initialize() || state == null || main == null || state.target == null
				|| main.getColorAttachment() == null) {
			return false;
		}
		if (main.textureWidth != state.width || main.textureHeight != state.height) {
			return false;
		}
		int slot = state.index++ & 1;
		SimpleFramebuffer bloomTarget = slot == 0 ? state.bloomA : state.bloomB;
		SimpleFramebuffer bloomPrevious = slot == 0 ? state.bloomB : state.bloomA;
		if (state.clearBlend) {
			clear(bloomPrevious);
			state.clearBlend = false;
		}
		clear(bloomTarget);
		CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
		blurPass(encoder, state.target, bloomTarget, bloomPrevious);
		compositePass(encoder, main, state.target, bloomTarget, glowRadius, glowColor);
		return true;
	}

	/** {@code kl.bQb} / {@code kl$ug.dsy}: drop the cached buffers. */
	public static void reset(State state) {
		if (state == null) {
			return;
		}
		delete(state.target);
		delete(state.bloomA);
		delete(state.bloomB);
		state.target = null;
		state.bloomA = null;
		state.bloomB = null;
		state.width = 0;
		state.height = 0;
		state.index = 0;
		state.clearBlend = true;
	}

	private static void ensureSize(State state, int width, int height) {
		if (state.target != null && state.width == width && state.height == height) {
			return;
		}
		delete(state.target);
		delete(state.bloomA);
		delete(state.bloomB);
		state.target = new SimpleFramebuffer("opengrim-bloom-target", width, height, true);
		state.bloomA = new SimpleFramebuffer("opengrim-bloom-a", width, height, false);
		state.bloomB = new SimpleFramebuffer("opengrim-bloom-b", width, height, false);
		state.width = width;
		state.height = height;
		state.index = 0;
		state.clearBlend = true;
	}

	private static void delete(SimpleFramebuffer framebuffer) {
		if (framebuffer != null) {
			framebuffer.delete();
		}
	}

	private static void clear(Framebuffer framebuffer) {
		if (framebuffer == null || framebuffer.getColorAttachment() == null) {
			return;
		}
		CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
		if (framebuffer.getDepthAttachment() != null) {
			encoder.clearColorAndDepthTextures(framebuffer.getColorAttachment(), 0,
					framebuffer.getDepthAttachment(), 1.0);
		} else {
			encoder.clearColorTexture(framebuffer.getColorAttachment(), 0);
		}
	}

	private static void blurPass(CommandEncoder encoder, Framebuffer source,
			Framebuffer target, Framebuffer previous) {
		// Buffer creation/uploads and ShapeIndexBuffer.getIndexBuffer must run
		// before the pass is opened (CommandEncoder writes are rejected inside
		// an active RenderPass; see EffectDraw.draw).
		GpuBuffer vertices = quad();
		RenderSystem.ShapeIndexBuffer indices = RenderSystem.getSequentialBuffer(VertexFormat.DrawMode.QUADS);
		GpuBuffer indexBuffer = indices.getIndexBuffer(6);
		VertexFormat.IndexType indexType = indices.getIndexType();
		// kl.bQf: jL.PTppR = 0.25f (the blur/temporal constant).
		GpuBufferSlice blurUniform = uniform(encoder, 0.25f, 0.0f, 0.0f, 0.0f).slice();
		try (RenderPass pass = encoder.createRenderPass(() -> "opengrim bloom blur",
				target.getColorAttachmentView(), OptionalInt.empty())) {
			pass.setPipeline(blurPipeline);
			pass.setUniform("BloomBlur", blurUniform);
			pass.bindTexture("Sampler0", source.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.bindTexture("Sampler1", previous.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.setVertexBuffer(0, vertices);
			pass.setIndexBuffer(indexBuffer, indexType);
			pass.drawIndexed(0, 0, 6, 1);
		}
	}

	private static void compositePass(CommandEncoder encoder, Framebuffer main,
			Framebuffer effectLayer, Framebuffer bloom, float glowRadius, int glowColor) {
		GpuBuffer vertices = quad();
		RenderSystem.ShapeIndexBuffer indices = RenderSystem.getSequentialBuffer(VertexFormat.DrawMode.QUADS);
		GpuBuffer indexBuffer = indices.getIndexBuffer(6);
		VertexFormat.IndexType indexType = indices.getIndexType();
		// kl.bQg: jL.wxgUS.bJq(bloomStrength, Glow Radius) + bJs(glowColor).
		GpuBufferSlice compositeUniform = uniform(encoder,
				((glowColor >> 16) & 0xFF) / 255.0f,
				((glowColor >> 8) & 0xFF) / 255.0f,
				(glowColor & 0xFF) / 255.0f,
				glowRadius).slice();
		try (RenderPass pass = encoder.createRenderPass(() -> "opengrim bloom composite",
				main.getColorAttachmentView(), OptionalInt.empty())) {
			pass.setPipeline(compositePipeline);
			pass.setUniform("Bloom", compositeUniform);
			pass.bindTexture("Sampler0", effectLayer.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.bindTexture("Sampler1", bloom.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.setVertexBuffer(0, vertices);
			pass.setIndexBuffer(indexBuffer, indexType);
			pass.drawIndexed(0, 0, 6, 1);
		}
	}

	private static GpuBuffer uniform(CommandEncoder encoder, float a, float b, float c, float d) {
		ByteBuffer bytes = BufferUtils.createByteBuffer(UNIFORM_SIZE);
		bytes.putFloat(a).putFloat(b).putFloat(c).putFloat(d);
		bytes.flip();
		int slot = ringIndex++ % RING;
		GpuBuffer buffer = uniformRing[slot];
		if (buffer == null) {
			buffer = RenderSystem.getDevice().createBuffer(() -> "opengrim bloom uniforms",
					GpuBuffer.USAGE_UNIFORM | GpuBuffer.USAGE_COPY_DST, UNIFORM_SIZE);
			uniformRing[slot] = buffer;
		}
		encoder.writeToBuffer(buffer.slice(), bytes);
		return buffer;
	}

	private static GpuBuffer quad() {
		if (quad == null) {
			ByteBuffer vertices = BufferUtils.createByteBuffer(4 * 3 * Float.BYTES);
			float[] coords = {
					-1.0f, -1.0f, 0.0f,
					1.0f, -1.0f, 0.0f,
					1.0f, 1.0f, 0.0f,
					-1.0f, 1.0f, 0.0f
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
}
