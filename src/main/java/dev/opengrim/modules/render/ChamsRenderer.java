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
import com.mojang.blaze3d.textures.GpuTextureView;
import com.mojang.blaze3d.vertex.VertexFormat;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.gl.Framebuffer;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.gl.SimpleFramebuffer;
import net.minecraft.client.gl.UniformType;
import net.minecraft.client.model.Model;
import net.minecraft.client.model.ModelPart;
import net.minecraft.client.render.OutlineVertexConsumerProvider;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.render.block.MovingBlockRenderState;
import net.minecraft.client.render.command.ModelCommandRenderer;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.command.OrderedRenderCommandQueueImpl;
import net.minecraft.client.render.command.RenderCommandQueue;
import net.minecraft.client.render.command.RenderDispatcher;
import net.minecraft.client.render.entity.EntityRenderManager;
import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.client.render.item.ItemRenderState;
import net.minecraft.client.render.model.BakedQuad;
import net.minecraft.client.render.model.BlockStateModel;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.texture.Sprite;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.item.ItemDisplayContext;
import net.minecraft.text.OrderedText;
import net.minecraft.text.Text;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Vec3d;
import org.joml.Quaternionf;
import org.lwjgl.BufferUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * Screen-space Chams pass for sixtwo.dv.
 *
 * <p>Recovered pipeline (dv.java:1063-1089, 1101-1162; kj.java:161-200,
 * kn.java:141-201, kn.java:299-371, jC.java:166-198):
 * <ol>
 *   <li>{@code kj.bPv} copies the current main framebuffer into a background
 *       target ({@code mNSdG}), clears the mask target ({@code dVZad}) and runs
 *       the entity re-render runnable with the main render target swapped to the
 *       mask.</li>
 *   <li>The runnable sets {@code kn.YNOIY = true}, re-creates each entity's
 *       render state ({@code kn.bQu} -&gt; {@code getRenderState} +
 *       {@code EntityRenderDispatcher.render}) and flushes the command queue.
 *       The mask queue ({@code kn$uh}) forwards only model/model-part/item/
 *       custom commands - labels, shadows, fire, leashes, blocks and text are
 *       dropped, so the mask contains the bare model.</li>
 *   <li>{@code kn.bQr} draws one full-screen quad with the recovered
 *       glass/water/chrome/liquid-metal fragment stage, binding
 *       {@code maskTexture} = mask and {@code backgroundTexture} = the copy.</li>
 * </ol>
 *
 * <p>1.21.11 mapping: the original swaps {@code MinecraftClient.framebuffer}
 * ({@code MinecraftAccessor.setMainRenderTarget}); the reloaded renderer
 * exposes {@link RenderSystem#outputColorTextureOverride} /
 * {@link RenderSystem#outputDepthTextureOverride}, which {@code RenderLayer.draw}
 * honours for every layer - the same redirection the payload itself uses for
 * GUI entity previews (jr.java:120-140). The mask/background targets are
 * {@link SimpleFramebuffer}s and the composite is one {@link RenderPass}
 * against the main framebuffer, matching {@code kn.bQr}.
 *
 * <p>Uniform names are the recovered GLSL names. RenderPass only uploads
 * uniform blocks, so the fragment stages declare a std140 {@code Chams} block;
 * {@link #pack} writes the original {@code jL.bJq/bJt/bJs} call order into
 * twelve {@code vec4} slots. Colors use the recovered {@code mG.con()} float
 * layout ({@code r,g,b,a} in 0..1).
 */
final class ChamsRenderer {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/chams");

	private static final String[] MODES = {"Glass", "Water", "Chrome", "Liquid Metal"};
	private static final Identifier VERTEX_SHADER = Identifier.of("opengrim", "chams");
	private static final String[] FRAGMENT_SHADERS = {
			"chams_glass", "chams_water", "chams_chrome", "chams_liquidmetal"
	};
	private static final Identifier[] FRAGMENT_RESOURCES = {
			Identifier.of("opengrim", "shaders/chams_glass.fsh"),
			Identifier.of("opengrim", "shaders/chams_water.fsh"),
			Identifier.of("opengrim", "shaders/chams_chrome.fsh"),
			Identifier.of("opengrim", "shaders/chams_liquidmetal.fsh")
	};

	private static final int SLOTS = 12;
	private static final int UBO_SIZE = SLOTS * 16;
	private static final int RING = 4;

	private static RenderPipeline[] pipelines;
	private static boolean attempted;
	private static volatile boolean failed;

	private static SimpleFramebuffer mask;
	private static SimpleFramebuffer background;
	private static int width;
	private static int height;

	private static OrderedRenderCommandQueueImpl queue;
	private static RenderDispatcher dispatcher;
	private static VertexConsumerProvider.Immediate immediate;
	private static VertexConsumerProvider.Immediate crumbling;
	private static OutlineVertexConsumerProvider outlines;

	private static GpuBuffer quad;
	private static final GpuBuffer[] uniformRing = new GpuBuffer[RING];
	private static int ringIndex;

	private ChamsRenderer() {
	}

	/** True when the given Effect mode compiled and its resources are loaded. */
	static boolean available(String mode) {
		if (failed || !initialize()) {
			return false;
		}
		int index = modeIndex(mode);
		return index >= 0 && pipelines[index] != null;
	}

	private static boolean initialize() {
		if (pipelines != null) {
			return true;
		}
		if (attempted) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null || client.getResourceManager() == null || client.getShaderLoader() == null) {
			return false;
		}
		for (Identifier resource : FRAGMENT_RESOURCES) {
			if (client.getResourceManager().getResource(resource).isEmpty()) {
				return false; // not loaded yet; retry next frame
			}
		}
		if (client.getShaderLoader().getSource(VERTEX_SHADER, ShaderType.VERTEX) == null) {
			return false;
		}
		attempted = true;
		pipelines = new RenderPipeline[MODES.length];
		for (int i = 0; i < MODES.length; i++) {
			Identifier fragment = Identifier.of("opengrim", FRAGMENT_SHADERS[i]);
			if (client.getShaderLoader().getSource(fragment, ShaderType.FRAGMENT) == null) {
				continue;
			}
			try {
				RenderPipeline pipeline = RenderPipelines.register(RenderPipeline.builder()
						.withLocation(Identifier.of("opengrim",
								"pipeline/" + FRAGMENT_SHADERS[i]))
						.withVertexShader(VERTEX_SHADER)
						.withFragmentShader(fragment)
						.withSampler("maskTexture")
						.withSampler("backgroundTexture")
						.withUniform("Chams", UniformType.UNIFORM_BUFFER)
						.withVertexFormat(VertexFormats.POSITION, VertexFormat.DrawMode.QUADS)
						.withDepthTestFunction(DepthTestFunction.NO_DEPTH_TEST)
						.withDepthWrite(false)
						.withCull(false)
						.withBlend(BlendFunction.TRANSLUCENT)
						.build());
				CompiledRenderPipeline compiled = RenderSystem.getDevice().precompilePipeline(pipeline);
				if (compiled == null || !compiled.isValid()) {
					LOGGER.warn("chams {} pipeline failed validation", MODES[i]);
					continue;
				}
				pipelines[i] = pipeline;
			} catch (Throwable throwable) {
				LOGGER.warn("chams {} pipeline unavailable", MODES[i], throwable);
			}
		}
		return pipelines[0] != null || pipelines[1] != null
				|| pipelines[2] != null || pipelines[3] != null;
	}

	private static int modeIndex(String mode) {
		for (int i = 0; i < MODES.length; i++) {
			if (MODES[i].equals(mode)) {
				return i;
			}
		}
		return -1;
	}

	/**
	 * Runs the shared mask pass (dv aiI + dl agJ): background copy (optional),
	 * clear, entity re-render under the shared {@code kn.YNOIY} window, restore.
	 * Returns false when the targets or the entity queue are unavailable.
	 */
	static boolean renderMask(List<Entity> entities, MatrixStack matrices,
			CameraRenderState cameraState, Vec3d cameraPos, float tickDelta,
			boolean copyBackground) {
		if (entities.isEmpty() || failed) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		Framebuffer main = client.getFramebuffer();
		if (main == null || main.getColorAttachment() == null || main.getDepthAttachment() == null) {
			return false;
		}
		int w = main.textureWidth;
		int h = main.textureHeight;
		if (w <= 0 || h <= 0) {
			return false;
		}
		try {
			ensureResources(client, w, h);
			CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
			if (copyBackground) {
				encoder.copyTextureToTexture(main.getColorAttachment(),
						background.getColorAttachment(), 0, 0, 0, 0, 0, w, h);
			}
			encoder.clearColorAndDepthTextures(mask.getColorAttachment(), 0,
					mask.getDepthAttachment(), 1.0);
		} catch (Throwable throwable) {
			failed = true;
			LOGGER.warn("entity mask targets unavailable; hiding disabled for this session", throwable);
			return false;
		}

		GpuTextureView previousColor = RenderSystem.outputColorTextureOverride;
		GpuTextureView previousDepth = RenderSystem.outputDepthTextureOverride;
		RenderSystem.outputColorTextureOverride = mask.getColorAttachmentView();
		RenderSystem.outputDepthTextureOverride = mask.getDepthAttachmentView();
		boolean previousChamsBatch = Chams.isChamsBatchActive;
		boolean previousOutlineBatch = Outlines.isOutliningActive;
		// sixtwo.kn.YNOIY is one shared flag: both dv.aiJ and dl.agK read it.
		Chams.isChamsBatchActive = true;
		Outlines.isOutliningActive = true;
		try {
			EntityRenderManager manager = client.getEntityRenderDispatcher();
			OrderedRenderCommandQueue filter = new FilteringQueue(queue);
			for (Entity entity : entities) {
				EntityRenderState state = manager.getAndUpdateRenderState(entity, tickDelta);
				if (state == null) {
					continue;
				}
				manager.render(state, cameraState,
						state.x - cameraPos.x, state.y - cameraPos.y, state.z - cameraPos.z,
						matrices, filter);
			}
			dispatcher.render();
			dispatcher.endLayeredCustoms();
			immediate.draw();
			crumbling.draw();
			outlines.draw();
		} catch (Throwable throwable) {
			failed = true;
			LOGGER.warn("entity mask render failed; hiding disabled for this session", throwable);
			return false;
		} finally {
			Chams.isChamsBatchActive = previousChamsBatch;
			Outlines.isOutliningActive = previousOutlineBatch;
			RenderSystem.outputColorTextureOverride = previousColor;
			RenderSystem.outputDepthTextureOverride = previousDepth;
		}
		return true;
	}

	/** Mask color target after a successful {@link #renderMask} call. */
	static Framebuffer maskTarget() {
		return mask;
	}

	/** Background copy target after a successful {@link #renderMask(..., true)} call. */
	static Framebuffer backgroundTarget() {
		return background;
	}

	/**
	 * Runs the recovered composite pass against the main framebuffer.
	 * {@code slots} comes from {@link #pack} and already contains the packed
	 * tint/light/color slots.
	 */
	static boolean composite(String mode, float[] slots, Framebuffer maskTarget,
			Framebuffer backgroundTarget) {
		int selected = modeIndex(mode);
		if (selected < 0 || pipelines == null || pipelines[selected] == null) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		Framebuffer main = client.getFramebuffer();
		if (main == null || main.getColorAttachmentView() == null || maskTarget == null
				|| backgroundTarget == null) {
			return false;
		}
		CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
		GpuBuffer uniforms = uniformBuffer(encoder, slots, maskTarget.textureWidth,
				maskTarget.textureHeight);
		try (RenderPass pass = encoder.createRenderPass(() -> "opengrim chams",
				main.getColorAttachmentView(), OptionalInt.empty())) {
			pass.setPipeline(pipelines[selected]);
			pass.setUniform("Chams", uniforms.slice());
			pass.bindTexture("maskTexture", maskTarget.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.bindTexture("backgroundTexture", backgroundTarget.getColorAttachmentView(),
					RenderSystem.getSamplerCache().get(FilterMode.LINEAR));
			pass.setVertexBuffer(0, quad);
			RenderSystem.ShapeIndexBuffer indices = RenderSystem.getSequentialBuffer(
					VertexFormat.DrawMode.QUADS);
			pass.setIndexBuffer(indices.getIndexBuffer(4), indices.getIndexType());
			pass.drawIndexed(0, 0, 4, 1);
		}
		return true;
	}

	/**
	 * Runs the recovered mask + composite pass for the world-entity module.
	 */
	static void render(List<Entity> entities, MatrixStack matrices, CameraRenderState cameraState,
			Vec3d cameraPos, float tickDelta, String mode, float[] slots) {
		if (!renderMask(entities, matrices, cameraState, cameraPos, tickDelta, true)) {
			return;
		}
		composite(mode, slots, mask, background);
	}

	/** Creates the twelve-slot parameter area and writes {@code screenSize/time}. */
	static float[] pack(float time) {
		float[] slots = new float[SLOTS * 4];
		slots[2] = time;
		return slots;
	}

	static void put(float[] slots, int slot, float x, float y, float z, float w) {
		int base = slot * 4;
		slots[base] = x;
		slots[base + 1] = y;
		slots[base + 2] = z;
		slots[base + 3] = w;
	}

	static void putColor(float[] slots, int slot, int argb) {
		put(slots, slot, ((argb >> 16) & 0xFF) / 255.0f, ((argb >> 8) & 0xFF) / 255.0f,
				(argb & 0xFF) / 255.0f, ((argb >>> 24) & 0xFF) / 255.0f);
	}

	private static GpuBuffer uniformBuffer(CommandEncoder encoder, float[] source, int w, int h) {
		float[] data = source.clone();
		data[0] = w;
		data[1] = h;
		int slot = ringIndex++ % RING;
		GpuBuffer buffer = uniformRing[slot];
		if (buffer == null) {
			buffer = RenderSystem.getDevice().createBuffer(() -> "opengrim chams uniforms",
					GpuBuffer.USAGE_UNIFORM | GpuBuffer.USAGE_COPY_DST, UBO_SIZE);
			uniformRing[slot] = buffer;
		}
		ByteBuffer bytes = BufferUtils.createByteBuffer(UBO_SIZE);
		for (int i = 0; i < SLOTS * 4; i++) {
			bytes.putFloat(data[i]);
		}
		bytes.flip();
		encoder.writeToBuffer(buffer.slice(), bytes);
		return buffer;
	}

	private static void ensureResources(MinecraftClient client, int w, int h) {
		if (mask == null || width != w || height != h) {
			if (mask != null) {
				mask.delete();
				background.delete();
			}
			mask = new SimpleFramebuffer("opengrim-chams-mask", w, h, true);
			background = new SimpleFramebuffer("opengrim-chams-background", w, h, false);
			width = w;
			height = h;
		}
		if (queue == null) {
			queue = new OrderedRenderCommandQueueImpl();
			Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator> map =
					new Object2ObjectLinkedOpenHashMap<>();
			addGlint(map, RenderLayers.armorEntityGlint());
			addGlint(map, RenderLayers.glint());
			addGlint(map, RenderLayers.glintTranslucent());
			addGlint(map, RenderLayers.entityGlint());
			immediate = VertexConsumerProvider.immediate(map, new BufferAllocator(262144));
			crumbling = VertexConsumerProvider.immediate(new BufferAllocator(262144));
			outlines = new OutlineVertexConsumerProvider();
			dispatcher = new RenderDispatcher(queue, client.getBlockRenderManager(), immediate,
					client.getAtlasManager(), outlines, crumbling, client.textRenderer);
		}
		if (quad == null) {
			ByteBuffer vertices = BufferUtils.createByteBuffer(4 * 3 * Float.BYTES);
			float[] coords = {-1.0f, -1.0f, 0.0f, 1.0f, -1.0f, 0.0f,
					1.0f, 1.0f, 0.0f, -1.0f, 1.0f, 0.0f};
			for (float coordinate : coords) {
				vertices.putFloat(coordinate);
			}
			vertices.flip();
			quad = RenderSystem.getDevice().createBuffer(() -> "opengrim chams quad",
					GpuBuffer.USAGE_VERTEX, vertices);
		}
	}

	private static void addGlint(Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator> map,
			RenderLayer layer) {
		map.put(layer, new BufferAllocator(layer.getExpectedBufferSize()));
	}

	/**
	 * {@code kn$uh} + {@code kn$ui}: the mask queue drops labels, shadows, fire,
	 * leashes, blocks, text and layered customs, and forwards only model,
	 * model-part, item and custom submissions.
	 */
	private record FilteringQueue(OrderedRenderCommandQueueImpl delegate)
			implements OrderedRenderCommandQueue {
		@Override
		public RenderCommandQueue getBatchingQueue(int order) {
			return new FilteringCommandQueue(delegate.getBatchingQueue(order));
		}

		@Override
		public void submitShadowPieces(MatrixStack matrices, float shadowRadius,
				List<EntityRenderState.ShadowPiece> shadowPieces) {
		}

		@Override
		public void submitLabel(MatrixStack matrices, Vec3d nameLabelPos, int y, Text label,
				boolean notSneaking, int light, double squaredDistanceToCamera,
				CameraRenderState cameraState) {
		}

		@Override
		public void submitText(MatrixStack matrices, float x, float y, OrderedText text,
				boolean dropShadow, TextRenderer.TextLayerType layerType, int light, int color,
				int backgroundColor, int outlineColor) {
		}

		@Override
		public void submitFire(MatrixStack matrices, EntityRenderState renderState,
				Quaternionf rotation) {
		}

		@Override
		public void submitLeash(MatrixStack matrices, EntityRenderState.LeashData leashData) {
		}

		@Override
		public <S> void submitModel(Model<? super S> model, S state, MatrixStack matrices,
				RenderLayer renderLayer, int light, int overlay, int tintedColor, Sprite sprite,
				int outlineColor, ModelCommandRenderer.CrumblingOverlayCommand crumblingOverlay) {
			delegate.submitModel(model, state, matrices, renderLayer, light, overlay, tintedColor,
					sprite, outlineColor, crumblingOverlay);
		}

		@Override
		public void submitModelPart(ModelPart part, MatrixStack matrices, RenderLayer renderLayer,
				int light, int overlay, Sprite sprite, boolean sheeted, boolean hasGlint,
				int tintedColor, ModelCommandRenderer.CrumblingOverlayCommand crumblingOverlay,
				int order) {
			delegate.submitModelPart(part, matrices, renderLayer, light, overlay, sprite, sheeted,
					hasGlint, tintedColor, crumblingOverlay, order);
		}

		@Override
		public void submitBlock(MatrixStack matrices, BlockState state, int light, int overlay,
				int outlineColor) {
		}

		@Override
		public void submitMovingBlock(MatrixStack matrices, MovingBlockRenderState state) {
		}

		@Override
		public void submitBlockStateModel(MatrixStack matrices, RenderLayer renderLayer,
				BlockStateModel model, float r, float g, float b, int light, int overlay,
				int outlineColor) {
		}

		@Override
		public void submitItem(MatrixStack matrices, ItemDisplayContext displayContext, int light,
				int overlay, int outlineColors, int[] tintLayers, List<BakedQuad> quads,
				RenderLayer renderLayer, ItemRenderState.Glint glintType) {
			delegate.submitItem(matrices, displayContext, light, overlay, outlineColors, tintLayers,
					quads, renderLayer, glintType);
		}

		@Override
		public void submitCustom(MatrixStack matrices, RenderLayer renderLayer,
				OrderedRenderCommandQueue.Custom customRenderer) {
			delegate.submitCustom(matrices, renderLayer, customRenderer);
		}

		@Override
		public void submitCustom(OrderedRenderCommandQueue.LayeredCustom customRenderer) {
		}
	}

	/** {@code kn$ui}: same filter for per-order batching queues. */
	private record FilteringCommandQueue(RenderCommandQueue delegate) implements RenderCommandQueue {
		@Override
		public <S> void submitModel(Model<? super S> model, S state, MatrixStack matrices,
				RenderLayer renderLayer, int light, int overlay, int tintedColor, Sprite sprite,
				int outlineColor, ModelCommandRenderer.CrumblingOverlayCommand crumblingOverlay) {
			delegate.submitModel(model, state, matrices, renderLayer, light, overlay, tintedColor,
					sprite, outlineColor, crumblingOverlay);
		}

		@Override
		public void submitModelPart(ModelPart part, MatrixStack matrices, RenderLayer renderLayer,
				int light, int overlay, Sprite sprite, boolean sheeted, boolean hasGlint,
				int tintedColor, ModelCommandRenderer.CrumblingOverlayCommand crumblingOverlay,
				int order) {
			delegate.submitModelPart(part, matrices, renderLayer, light, overlay, sprite, sheeted,
					hasGlint, tintedColor, crumblingOverlay, order);
		}

		@Override
		public void submitItem(MatrixStack matrices, ItemDisplayContext displayContext, int light,
				int overlay, int outlineColors, int[] tintLayers, List<BakedQuad> quads,
				RenderLayer renderLayer, ItemRenderState.Glint glintType) {
			delegate.submitItem(matrices, displayContext, light, overlay, outlineColors, tintLayers,
					quads, renderLayer, glintType);
		}

		@Override
		public void submitCustom(MatrixStack matrices, RenderLayer renderLayer,
				OrderedRenderCommandQueue.Custom customRenderer) {
			delegate.submitCustom(matrices, renderLayer, customRenderer);
		}

		@Override
		public void submitText(MatrixStack matrices, float x, float y, OrderedText text,
				boolean dropShadow, TextRenderer.TextLayerType layerType, int light, int color,
				int backgroundColor, int outlineColor) {
		}

		@Override
		public void submitShadowPieces(MatrixStack matrices, float shadowRadius,
				List<EntityRenderState.ShadowPiece> shadowPieces) {
		}

		@Override
		public void submitFire(MatrixStack matrices, EntityRenderState renderState,
				Quaternionf rotation) {
		}

		@Override
		public void submitLabel(MatrixStack matrices, Vec3d nameLabelPos, int y, Text label,
				boolean notSneaking, int light, double squaredDistanceToCamera,
				CameraRenderState cameraState) {
		}

		@Override
		public void submitLeash(MatrixStack matrices, EntityRenderState.LeashData leashData) {
		}

		@Override
		public void submitBlock(MatrixStack matrices, BlockState state, int light, int overlay,
				int outlineColor) {
		}

		@Override
		public void submitMovingBlock(MatrixStack matrices, MovingBlockRenderState state) {
		}

		@Override
		public void submitBlockStateModel(MatrixStack matrices, RenderLayer renderLayer,
				BlockStateModel model, float r, float g, float b, int light, int overlay,
				int outlineColor) {
		}

		@Override
		public void submitCustom(OrderedRenderCommandQueue.LayeredCustom customRenderer) {
		}
	}
}
