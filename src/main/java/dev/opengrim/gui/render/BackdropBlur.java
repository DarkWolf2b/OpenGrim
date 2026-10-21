package dev.opengrim.gui.render;

import java.nio.ByteBuffer;
import java.util.OptionalDouble;
import java.util.OptionalInt;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.buffers.GpuBufferSlice;
import com.mojang.blaze3d.buffers.Std140Builder;
import com.mojang.blaze3d.systems.CommandEncoder;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.FilterMode;
import com.mojang.blaze3d.vertex.VertexFormat;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gl.Framebuffer;
import net.minecraft.client.gl.SimpleFramebuffer;
import net.minecraft.client.texture.TextureSetup;
import org.lwjgl.BufferUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Two-pass separable backdrop blur (lC.ccW Blur branch, sixtwo.kk.bPM).
 *
 * <p>The original blurs the current framebuffer after the GUI flush, so its
 * backdrop contains the current world. The deferred rebuild cannot read the
 * frame it is about to draw, so this captures the main framebuffer during GUI
 * extraction (the current frame's world has already been rendered; the GUI
 * itself is still queued) and blurs it into offscreen ping-pong targets. The
 * window composite then samples the final texture.
 *
 * <p>Weights are generated exactly like {@code kk$uf.dsw}: Gaussian with
 * sigma = radius/2, normalised in the shader. Radius follows the recovered
 * {@code 32 * pow(blurPercent/100, 0.43)}; the port theme does not expose
 * {@code ii.bjm()} yet, so {@link #BLUR_PERCENT} is the documented default.
 */
public final class BackdropBlur {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/backdrop-blur");

	/** ii.bjm() is not carried by the port Theme; 75 reproduces the Blur style. */
	private static final float BLUR_PERCENT = 75.0f;
	private static final int RING_SIZE = 8;
	private static final int QUAD_FLOATS = 4 * 3;
	private static final int UBO_SIZE = 32 + 64 * 16;

	private static SimpleFramebuffer ping;
	private static SimpleFramebuffer pong;
	private static int width;
	private static int height;

	private static GpuBuffer quad;
	private static final GpuBuffer[] ringH = new GpuBuffer[RING_SIZE];
	private static final GpuBuffer[] ringV = new GpuBuffer[RING_SIZE];
	private static int ringIndex;
	private static boolean warned;

	private BackdropBlur() {
	}

	/**
	 * Captures and blurs the current world framebuffer. Must run on the render
	 * thread during GUI extraction. Returns the blurred texture binding, or
	 * null when the path is unavailable.
	 */
	public static TextureSetup prepare() {
		if (!GuiBackdropPipelines.available()) {
			return null;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null) {
			return null;
		}
		Framebuffer main = client.getFramebuffer();
		if (main == null || main.getColorAttachment() == null) {
			return null;
		}
		int w = main.textureWidth;
		int h = main.textureHeight;
		if (w <= 0 || h <= 0) {
			return null;
		}
		try {
			ensureResources(w, h);
			CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
			// The current frame's world has already been rendered into main; the
			// queued GUI has not been flushed yet, so this is a clean backdrop.
			encoder.copyTextureToTexture(main.getColorAttachment(), ping.getColorAttachment(),
					0, 0, 0, 0, 0, w, h);

			int radius = blurRadius();
			float[] weights = gaussianWeights(radius);
			int slot = ringIndex++ % RING_SIZE;
			GpuBuffer horizontal = ensureRing(ringH, slot);
			GpuBuffer vertical = ensureRing(ringV, slot);
			writeUniforms(encoder, horizontal, w, h, 1.0f, 0.0f, radius, weights);
			writeUniforms(encoder, vertical, w, h, 0.0f, 1.0f, radius, weights);

			drawPass(encoder, ping, pong, horizontal);
			drawPass(encoder, pong, ping, vertical);

			return TextureSetup.of(ping.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
		} catch (Throwable throwable) {
			if (!warned) {
				warned = true;
				LOGGER.warn("backdrop blur unavailable; using the opaque themed fill", throwable);
			}
			return null;
		}
	}

	private static void ensureResources(int w, int h) {
		if (ping == null) {
			ping = new SimpleFramebuffer("opengrim-blur-h", w, h, false);
			pong = new SimpleFramebuffer("opengrim-blur-v", w, h, false);
			width = w;
			height = h;
		} else if (width != w || height != h) {
			ping.resize(w, h);
			pong.resize(w, h);
			width = w;
			height = h;
		}
		if (quad == null) {
			ByteBuffer vertices = BufferUtils.createByteBuffer(QUAD_FLOATS * Float.BYTES);
			float[] coords = {-1.0f, -1.0f, 0.0f, -1.0f, 1.0f, 0.0f,
					1.0f, 1.0f, 0.0f, 1.0f, -1.0f, 0.0f};
			for (float coordinate : coords) {
				vertices.putFloat(coordinate);
			}
			vertices.flip();
			quad = RenderSystem.getDevice().createBuffer(() -> "opengrim blur fullscreen quad",
					GpuBuffer.USAGE_VERTEX, vertices);
		}
	}

	private static GpuBuffer ensureRing(GpuBuffer[] ring, int slot) {
		if (ring[slot] == null) {
			ring[slot] = RenderSystem.getDevice().createBuffer(
					() -> "opengrim blur uniforms", GpuBuffer.USAGE_UNIFORM | GpuBuffer.USAGE_COPY_DST,
					UBO_SIZE);
		}
		return ring[slot];
	}

	private static void writeUniforms(CommandEncoder encoder, GpuBuffer buffer, int w, int h,
			float directionX, float directionY, int radius, float[] weights) {
		ByteBuffer bytes = BufferUtils.createByteBuffer(UBO_SIZE);
		Std140Builder builder = Std140Builder.intoBuffer(bytes);
		builder.putVec2(1.0f / w, 1.0f / h)
				.putVec2(directionX, directionY)
				.putFloat(radius)
				.putFloat(0.0f)
				.align(16);
		for (int i = 0; i < 64; i++) {
			int base = i * 4;
			builder.putVec4(weights[base], weights[base + 1], weights[base + 2], weights[base + 3]);
		}
		encoder.writeToBuffer(buffer.slice(), builder.get());
	}

	private static void drawPass(CommandEncoder encoder, Framebuffer source, Framebuffer target,
			GpuBuffer uniforms) {
		try (RenderPass pass = encoder.createRenderPass(() -> "opengrim backdrop blur",
				target.getColorAttachmentView(), OptionalInt.empty(), null, OptionalDouble.empty())) {
			pass.setPipeline(GuiBackdropPipelines.blur());
			pass.setUniform("Blur", uniforms.slice());
			pass.bindTexture("inTexture", source.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.setVertexBuffer(0, quad);
			RenderSystem.ShapeIndexBuffer indices = RenderSystem.getSequentialBuffer(
					VertexFormat.DrawMode.QUADS);
			pass.setIndexBuffer(indices.getIndexBuffer(4), indices.getIndexType());
			pass.drawIndexed(0, 0, 4, 1);
		}
	}

	private static int blurRadius() {
		double radius = 32.0 * Math.pow(Math.max(0.0, BLUR_PERCENT) / 100.0, 0.43);
		return Math.max(1, Math.min(255, (int) Math.round(radius)));
	}

	private static float[] gaussianWeights(int radius) {
		float[] weights = new float[256];
		float sigma = Math.max(0.5f, radius / 2.0f);
		double scale = 1.0 / Math.sqrt(Math.PI * 2.0 * sigma * sigma);
		float total = 0.0f;
		for (int i = 0; i <= radius; i++) {
			float weight = (float) (scale * Math.exp(-(i * i) / (2.0 * sigma * sigma)));
			weights[i] = weight;
			total += i == 0 ? weight : weight * 2.0f;
		}
		if (total > 0.0f) {
			for (int i = 0; i <= radius; i++) {
				weights[i] /= total;
			}
		}
		return weights;
	}
}
