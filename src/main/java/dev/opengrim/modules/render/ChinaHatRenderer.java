package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;

import com.mojang.blaze3d.pipeline.BlendFunction;
import com.mojang.blaze3d.pipeline.CompiledRenderPipeline;
import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.platform.DepthTestFunction;
import com.mojang.blaze3d.platform.DestFactor;
import com.mojang.blaze3d.platform.SourceFactor;
import com.mojang.blaze3d.shaders.ShaderType;
import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.vertex.VertexFormat;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.util.FriendsManager;
import net.fabricmc.fabric.api.client.rendering.v1.LivingEntityFeatureRendererRegistrationCallback;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.BuiltBuffer;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.PlayerEntityRenderer;
import net.minecraft.client.render.entity.feature.FeatureRenderer;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Vec3d;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import org.joml.Vector3f;
import org.joml.Vector4f;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

/**
 * China Hat render path: the original {@code qD} is a player-model
 * {@code FeatureRenderer} and {@code ky.bSd} is its Java draw. This class
 * registers the equivalent feature renderer through Fabric's
 * {@link LivingEntityFeatureRendererRegistrationCallback} (the closest port of
 * the original renderer registration) and reproduces {@code ky.bSd} with the
 * recovered {@code kR.CDFBk} / {@code kR.Uzcne} pipeline state:
 *
 * <ul>
 *   <li>{@code CDFBk}: POSITION_COLOR TRIANGLE_FAN, blend {@code lh.GpGUc}
 *       (SRC_ALPHA, ONE_MINUS_SRC_ALPHA, ONE, ZERO), depth LEQUAL + write,
 *       cull false.</li>
 *   <li>{@code Uzcne}: POSITION_COLOR DEBUG_LINE_STRIP, same blend, depth LEQUAL
 *       without depth write, cull false.</li>
 * </ul>
 *
 * <p>Transform (qD.java:283-292): push, offset {@code cIT() ? -0.43 : -0.5}
 * (the {@code oK.cIT()} native is read as sneaking: sneaking -0.5, otherwise
 * -0.43), {@code PlayerEntityModel.getHead().applyTransform}, translate
 * (0, offset, 0), NEGATIVE_Z 180, POSITIVE_Y 90.
 *
 * <p>Geometry (ky.java:87-286): fan apex (0, 0.3, 0), rim radius
 * {@code state.width} at {@code (-sin(2*pi*i/segments), 0, cos(...))}, per
 * segment {@code jk.bDm(i, color, gradientSpeed)} and alpha 40; the rim is then
 * re-emitted as a line strip with the closing angle-0 vertex. The segment count
 * {@code nUFUt} stays the labeled guess from {@link ChinaHat}.
 */
public final class ChinaHatRenderer {
	private static final Logger LOGGER = LoggerFactory.getLogger("opengrim/china-hat");
	private static final Identifier SHADER = Identifier.of("opengrim", "circle_solid");
	private static final Identifier FRAGMENT_RESOURCE = Identifier.of("opengrim", "shaders/circle_solid.fsh");
	private static final BlendFunction BLEND = new BlendFunction(
			SourceFactor.SRC_ALPHA, DestFactor.ONE_MINUS_SRC_ALPHA,
			SourceFactor.ONE, DestFactor.ZERO);

	private static boolean attempted;
	private static RenderPipeline fan;
	private static RenderPipeline lines;

	/** Per-frame captures from the feature-renderer stage (qD -> jo.bEt deferral). */
	private record Hat(org.joml.Matrix4f position, org.joml.Matrix3f normal, float width,
			int color, int speed) {
	}

	private static final List<Hat> captured = new ArrayList<>();

	private ChinaHatRenderer() {
	}

	public static void init() {
		LivingEntityFeatureRendererRegistrationCallback.EVENT.register((entityType, renderer,
				registration, context) -> {
			if (renderer instanceof PlayerEntityRenderer<?> playerRenderer) {
				registration.register(new HatFeature(playerRenderer));
			}
		});
	}

	private static ChinaHat module() {
		Module module = ModuleManager.get().byId("china_hat");
		return module instanceof ChinaHat hat ? hat : null;
	}

	private static boolean initialize() {
		if (fan != null && lines != null) {
			return true;
		}
		if (attempted) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null || client.getResourceManager() == null || client.getShaderLoader() == null) {
			return false;
		}
		if (client.getResourceManager().getResource(FRAGMENT_RESOURCE).isEmpty()
				|| client.getShaderLoader().getSource(SHADER, ShaderType.VERTEX) == null
				|| client.getShaderLoader().getSource(SHADER, ShaderType.FRAGMENT) == null) {
			return false;
		}
		attempted = true;
		try {
			fan = RenderPipelines.register(RenderPipeline.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
					.withLocation(Identifier.of("opengrim", "pipeline/china_hat_fan"))
					.withVertexShader(SHADER)
					.withFragmentShader(SHADER)
					.withBlend(BLEND)
					.withVertexFormat(VertexFormats.POSITION_COLOR, VertexFormat.DrawMode.TRIANGLE_FAN)
					.withDepthTestFunction(DepthTestFunction.LEQUAL_DEPTH_TEST)
					.withDepthWrite(true)
					.withCull(false)
					.build());
			lines = RenderPipelines.register(RenderPipeline.builder(RenderPipelines.TRANSFORMS_AND_PROJECTION_SNIPPET)
					.withLocation(Identifier.of("opengrim", "pipeline/china_hat_lines"))
					.withVertexShader(SHADER)
					.withFragmentShader(SHADER)
					.withBlend(BLEND)
					.withVertexFormat(VertexFormats.POSITION_COLOR,
							VertexFormat.DrawMode.DEBUG_LINE_STRIP)
					.withDepthTestFunction(DepthTestFunction.LEQUAL_DEPTH_TEST)
					.withDepthWrite(false)
					.withCull(false)
					.build());
			CompiledRenderPipeline fanCompiled = RenderSystem.getDevice().precompilePipeline(fan);
			CompiledRenderPipeline lineCompiled = RenderSystem.getDevice().precompilePipeline(lines);
			if (fanCompiled == null || !fanCompiled.isValid()
					|| lineCompiled == null || !lineCompiled.isValid()) {
				LOGGER.warn("china hat pipelines failed validation");
				return false;
			}
			return true;
		} catch (Throwable throwable) {
			LOGGER.warn("china hat pipelines unavailable", throwable);
			return false;
		}
	}

	private static final class HatFeature extends FeatureRenderer<PlayerEntityRenderState, PlayerEntityModel> {
		private HatFeature(PlayerEntityRenderer<?> renderer) {
			super(renderer);
		}

		@Override
		public void render(MatrixStack matrices, OrderedRenderCommandQueue queue, int light,
				PlayerEntityRenderState state, float limbAngle, float limbDistance) {
			ChinaHat hat = module();
			if (hat == null || !hat.isEnabled() || !initialize()) {
				return;
			}
			// qD.java:266-272: kn.YNOIY suppresses the hat during the
			// Chams/Outlines replacement-model batch (shared flag).
			if (Chams.isChamsBatchActive || Outlines.isOutliningActive) {
				return;
			}
			MinecraftClient client = MinecraftClient.getInstance();
			if (client.player == null || state.invisible) {
				return;
			}
			boolean self = state.id == client.player.getId();
			if (self) {
				if (!hat.isSelf() || client.options.getPerspective().isFirstPerson()) {
					return;
				}
			} else if (!hat.isFriends() || state.playerName == null
					|| !FriendsManager.isFriend(state.playerName.getString())) {
				return;
			}

			matrices.push();
			try {
				float offset = state.sneaking ? -0.5f : -0.43f;
				this.getContextModel().getHead().applyTransform(matrices);
				matrices.translate(0.0f, offset, 0.0f);
				matrices.multiply(RotationAxis.NEGATIVE_Z.rotationDegrees(180.0f));
				matrices.multiply(RotationAxis.POSITIVE_Y.rotationDegrees(90.0f));
				MatrixStack.Entry entry = matrices.peek();
				captured.add(new Hat(new org.joml.Matrix4f(entry.getPositionMatrix()),
						new org.joml.Matrix3f(entry.getNormalMatrix()), state.width,
						hat.getColor(), (int) hat.getGradientSpeed()));
			} finally {
				matrices.pop();
			}
		}
	}

	static void clearCaptured() {
		captured.clear();
	}

	/** Draws the hats captured during entity submission (qD's deferred {@code jo.bEt}). */
	static void drawCaptured() {
		if (captured.isEmpty() || !initialize()) {
			captured.clear();
			return;
		}
		long time = System.currentTimeMillis();
		for (Hat hat : captured) {
			MatrixStack stack = new MatrixStack();
			MatrixStack.Entry entry = stack.peek();
			entry.getPositionMatrix().set(hat.position());
			entry.getNormalMatrix().set(hat.normal());
			drawFan(entry, hat.width(), hat.color(), hat.speed(), time);
			drawLines(entry, hat.width(), hat.color(), hat.speed(), time);
		}
		captured.clear();
	}

	private static void drawFan(MatrixStack.Entry entry, float width, int argb, int speed,
			long time) {
		int segments = ChinaHat.SEGMENTS;
		BufferAllocator allocator = new BufferAllocator(
				VertexFormats.POSITION_COLOR.getVertexSize() * (segments * 2 + 2));
		try {
			BufferBuilder builder = new BufferBuilder(allocator,
					VertexFormat.DrawMode.TRIANGLE_FAN, VertexFormats.POSITION_COLOR);
			for (int i = 0; i <= segments; i++) {
				float[] rgb = gradient(time, i, argb, speed);
				builder.vertex(entry, 0.0f, 0.3f, 0.0f).color(rgb[0], rgb[1], rgb[2], 40.0f);
			}
			for (int i = 0; i <= segments; i++) {
				float[] rgb = gradient(time, i, argb, speed);
				float angle = (float) i * 6.2831855f / (float) segments;
				builder.vertex(entry, (float) (-MathHelper.sin(angle) * width), 0.0f,
						(float) (MathHelper.cos(angle) * width))
						.color(rgb[0], rgb[1], rgb[2], 40.0f);
			}
			BuiltBuffer built = builder.end();
			EffectDraw.drawCustom(fan, built);
		} finally {
			allocator.close();
		}
	}

	private static void drawLines(MatrixStack.Entry entry, float width, int argb, int speed,
			long time) {
		int segments = ChinaHat.SEGMENTS;
		BufferAllocator allocator = new BufferAllocator(
				VertexFormats.POSITION_COLOR.getVertexSize() * (segments + 2));
		try {
			BufferBuilder builder = new BufferBuilder(allocator,
					VertexFormat.DrawMode.DEBUG_LINE_STRIP, VertexFormats.POSITION_COLOR);
			float[] last = new float[3];
			for (int i = 0; i <= segments; i++) {
				float[] rgb = gradient(time, i, argb, speed);
				last = rgb;
				float angle = (float) i * 6.2831855f / (float) segments;
				builder.vertex(entry, (float) (-MathHelper.sin(angle) * width), 0.0f,
						(float) (MathHelper.cos(angle) * width))
						.color(rgb[0], rgb[1], rgb[2], 40.0f);
			}
			builder.vertex(entry, 0.0f, 0.0f, width).color(last[0], last[1], last[2], 40.0f);
			BuiltBuffer built = builder.end();
			EffectDraw.drawCustom(lines, built);
		} finally {
			allocator.close();
		}
	}

	private static float[] gradient(long time, int segment, int argb, int speed) {
		float t = (float) (time / Math.max(1, speed) + segment) % 360.0f;
		if (t < 0.0f) {
			t += 360.0f;
		}
		if (t > 180.0f) {
			t = 360.0f - t;
		}
		float f = t / 180.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		return new float[] {
				MathHelper.lerp(f, r, r * 0.5f),
				MathHelper.lerp(f, g, g * 0.5f),
				MathHelper.lerp(f, b, b * 0.5f) };
	}
}
