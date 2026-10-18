package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.OverlayTexture;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.TexturedRenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.entity.EntityRenderManager;
import net.minecraft.client.texture.Sprite;
import net.minecraft.client.util.SpriteIdentifier;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.scoreboard.ScoreboardDisplaySlot;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

/**
 * Health Indicators (registry sixtwo.dr): "Displays other players health above their head".
 *
 * <p>1:1 reconstruction of {@code sixtwo.dr} and its heart-row renderer {@code sixtwo.rs}:
 * <ul>
 *   <li>Constructor &amp; settings: {@code analysis/decompiled/payload-decrypted/sixtwo/dr.java:53-106}</li>
 *   <li>Label render handler {@code aib(gi)}: {@code dr.java:236-307}</li>
 *   <li>Heart-row billboard &amp; sprite renderer {@code rs.djl}, {@code rs.djm}, {@code rs.djn}, {@code rs.djo}:
 *       {@code analysis/decompiled/payload-named-cfr/sixtwo/rs.java:152-465}</li>
 *   <li>Heart sprite selector {@code rs$we}: {@code analysis/decompiled/payload-named-cfr/sixtwo/rs$we.java}
 *       (dyK/dyJ native — mapping labeled high-probability guess).</li>
 * </ul>
 *
 * <p>Substitution (labeled): the original draws in the vanilla nameplate/label
 * render event ({@code gi}); OpenGrim has no such hook, so hearts render from
 * {@link WorldRenderEvent} AFTER_ENTITIES with the vanilla 64-block nameplate
 * gate (4096.0 squared distance) applied by hand. {@code getHeartsPerRow()} is
 * clamped to >= 1 here; whether {@code rs} clamps is unrecovered (spec "Unrecovered" 4).
 * Trace 2026-10-17: class load only (never enabled in the tour).
 */
public class HealthIndicators extends Module {
	/** Health state for one annotated player, in hearts (health / 2.0). */
	public record Indicator(PlayerEntity player, double healthHearts, double absorptionHearts, boolean visible) {
	}

	/**
	 * Port of {@code sixtwo.rs$we}: maps player status effects to GUI-atlas heart
	 * sprite identifiers.
	 *
	 * <p>High-probability guess (labeled): {@code rs$we.dyK}/{@code dyJ} are
	 * native; the constant order here mirrors vanilla's {@code HeartType}
	 * declaration (CONTAINER, NORMAL, POISONED, WITHERED, ABSORBING, FROZEN)
	 * and the vanilla sprite ids/effect order, which the enum's six constants
	 * and four Identifier fields match one-to-one.
	 */
	private enum HeartSpriteType {
		CONTAINER(
				Identifier.ofVanilla("hud/heart/container"),
				Identifier.ofVanilla("hud/heart/container"),
				Identifier.ofVanilla("hud/heart/container_hardcore"),
				Identifier.ofVanilla("hud/heart/container_hardcore")),
		NORMAL(
				Identifier.ofVanilla("hud/heart/full"),
				Identifier.ofVanilla("hud/heart/half"),
				Identifier.ofVanilla("hud/heart/hardcore_full"),
				Identifier.ofVanilla("hud/heart/hardcore_half")),
		POISONED(
				Identifier.ofVanilla("hud/heart/poisoned_full"),
				Identifier.ofVanilla("hud/heart/poisoned_half"),
				Identifier.ofVanilla("hud/heart/poisoned_hardcore_full"),
				Identifier.ofVanilla("hud/heart/poisoned_hardcore_half")),
		WITHERED(
				Identifier.ofVanilla("hud/heart/withered_full"),
				Identifier.ofVanilla("hud/heart/withered_half"),
				Identifier.ofVanilla("hud/heart/withered_hardcore_full"),
				Identifier.ofVanilla("hud/heart/withered_hardcore_half")),
		ABSORBING(
				Identifier.ofVanilla("hud/heart/absorbing_full"),
				Identifier.ofVanilla("hud/heart/absorbing_half"),
				Identifier.ofVanilla("hud/heart/absorbing_hardcore_full"),
				Identifier.ofVanilla("hud/heart/absorbing_hardcore_half")),
		FROZEN(
				Identifier.ofVanilla("hud/heart/frozen_full"),
				Identifier.ofVanilla("hud/heart/frozen_half"),
				Identifier.ofVanilla("hud/heart/frozen_hardcore_full"),
				Identifier.ofVanilla("hud/heart/frozen_hardcore_half"));

		private final Identifier full;
		private final Identifier half;
		private final Identifier hardcoreFull;
		private final Identifier hardcoreHalf;

		HeartSpriteType(Identifier full, Identifier half, Identifier hardcoreFull, Identifier hardcoreHalf) {
			this.full = full;
			this.half = half;
			this.hardcoreFull = hardcoreFull;
			this.hardcoreHalf = hardcoreHalf;
		}

		/** Mirrors {@code rs$we.dyJ(boolean hardcore, boolean half)}. */
		Identifier getTexture(boolean hardcore, boolean isHalf) {
			if (hardcore) {
				return isHalf ? hardcoreHalf : hardcoreFull;
			}
			return isHalf ? half : full;
		}

		/** Mirrors {@code rs$we.dyK(PlayerLikeEntity)}. */
		static HeartSpriteType fromPlayer(PlayerEntity player) {
			if (player.hasStatusEffect(StatusEffects.POISON)) {
				return POISONED;
			}
			if (player.hasStatusEffect(StatusEffects.WITHER)) {
				return WITHERED;
			}
			if (player.isFrozen()) {
				return FROZEN;
			}
			return NORMAL;
		}
	}

	private final DoubleSetting heartsPerRow = register(new DoubleSetting("hearts_per_row", 1.0, 1.0, 30.0, 10.0, null));
	private final BoolSetting invisible = register(new BoolSetting("invisible", false));
	private final BoolSetting visibleThroughWalls = register(new BoolSetting("visible_through_walls", false));

	private final List<Indicator> indicators = new ArrayList<>();

	public HealthIndicators() {
		super("health_indicators", "Health Indicators", "Displays other players health above their head",
				ModuleCategory.RENDER);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (Outlines.isOutliningActive || player == null || client.world == null) {
			indicators.clear();
			return;
		}
		indicators.clear();
		for (PlayerEntity target : client.world.getPlayers()) {
			if (target == player) {
				continue;
			}
			if (target.isInvisible() && !invisible.getValue()) {
				continue;
			}
			indicators.add(new Indicator(target, target.getHealth() / 2.0, target.getAbsorptionAmount() / 2.0,
					visibleThroughWalls.getValue() || player.canSee(target)));
		}
	}

	/**
	 * World render hook porting {@code sixtwo.dr#aib(gi)} (dr.java:236-307) and
	 * {@code sixtwo.rs#djl} (rs.java:152-274).
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		// dr.java:247: if (kn.YNOIY) return;
		if (Outlines.isOutliningActive) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity self = client.player;
		if (self == null || client.world == null) {
			return;
		}

		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		EntityRenderManager dispatcher = client.getEntityRenderDispatcher();
		Vec3d cam = event.camera().getCameraPos();
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);
		int perRow = Math.max(1, getHeartsPerRow());
		boolean throughWalls = visibleThroughWalls.getValue();

		for (AbstractClientPlayerEntity target : client.world.getPlayers()) {
			// dr.java:280: skip local player
			if (target == self) {
				continue;
			}
			// dr.java:289-304: if (!BkqiN.WF() && target.isInvisible()) return;
			if (!invisible.getValue() && target.isInvisible()) {
				continue;
			}
			// Substitution (labeled): the original runs inside the vanilla
			// nameplate/label render event (gi), which the game only fires within
			// the 64-block nameplate range; the world-render hook must apply that
			// gate itself (spec dr.md "Runtime model": 64-block nameplate distance
			// is vanilla behavior, not module logic).
			if (dispatcher.getSquaredDistanceToCamera(target) > 4096.0) {
				continue;
			}
			renderPlayerHearts(client, matrices, consumers, dispatcher, cam, tickDelta, target, perRow, throughWalls);
		}
	}

	/**
	 * Exact port of {@code sixtwo.rs#djl} (rs.java:152-265).
	 */
	private static void renderPlayerHearts(
			MinecraftClient client,
			MatrixStack matrices,
			VertexConsumerProvider consumers,
			EntityRenderManager dispatcher,
			Vec3d cam,
			float tickDelta,
			AbstractClientPlayerEntity target,
			int perRow,
			boolean throughWalls) {
		int health = MathHelper.ceil(target.getHealth());
		int maxHealth = MathHelper.ceil(target.getMaxHealth());
		int absorption = MathHelper.ceil(target.getAbsorptionAmount());
		if (maxHealth <= 0 && absorption <= 0) {
			return;
		}

		double x = MathHelper.lerp(tickDelta, target.lastX, target.getX()) - cam.x;
		double y = MathHelper.lerp(tickDelta, target.lastY, target.getY()) - cam.y;
		double z = MathHelper.lerp(tickDelta, target.lastZ, target.getZ()) - cam.z;
		double sqDist = dispatcher.getSquaredDistanceToCamera(target);

		matrices.push();
		try {
			matrices.translate((float) x, (float) y + target.getHeight() + 0.5f, (float) z);

			// rs.java:184-205: nameplate & BELOW_NAME scoreboard vertical offsets (0.25875f each)
			if (sqDist <= 4096.0) {
				matrices.translate(0.0, 0.25875f, 0.0);
				if (sqDist < 100.0
						&& target.getEntityWorld().getScoreboard().getObjectiveForSlot(ScoreboardDisplaySlot.BELOW_NAME) != null) {
					matrices.translate(0.0, 0.25875f, 0.0);
				}
			}

			// rs.java:211-215: camera billboard rotation and (-0.025, 0.025, 0.025) scale
			matrices.multiply(client.gameRenderer.getCamera().getRotation());
			matrices.scale(-1.0f, 1.0f, 1.0f);
			float scale = 0.025f;
			matrices.scale(scale, scale, scale);

			HeartSpriteType heartType = HeartSpriteType.fromPlayer(target);
			boolean hardcore = target.getEntityWorld().getLevelProperties().isHardcore();
			int maxHealthHearts = MathHelper.ceil((float) maxHealth / 2.0f);
			int absorptionHearts = MathHelper.ceil((float) absorption / 2.0f);
			int totalHearts = maxHealthHearts + absorptionHearts;
			int rows = (totalHearts + perRow - 1) / perRow;
			int rowStep = Math.max(10 - (rows - 2), 3);
			int rowPixelWidth = Math.min(totalHearts, perRow) * 8 + 1;
			float halfWidth = (float) rowPixelWidth / 2.0f;
			int light = dispatcher.getLight(target, tickDelta);

			// rs.java:252-263: see-through pass (when visibleThroughWalls is enabled) followed by depth-tested pass
			if (throughWalls) {
				drawHeartRows(client, matrices,
						consumers.getBuffer(RenderLayers.textSeeThrough(TexturedRenderLayers.GUI_ATLAS_TEXTURE)),
						perRow, totalHearts, rowStep, halfWidth, maxHealthHearts, maxHealth, absorption, health,
						hardcore, heartType, light);
			}
			drawHeartRows(client, matrices,
					consumers.getBuffer(RenderLayers.text(TexturedRenderLayers.GUI_ATLAS_TEXTURE)),
					perRow, totalHearts, rowStep, halfWidth, maxHealthHearts, maxHealth, absorption, health,
					hardcore, heartType, light);
		} finally {
			matrices.pop();
		}
	}

	/**
	 * Exact port of {@code sixtwo.rs#djm} (rs.java:320-446).
	 */
	private static void drawHeartRows(
			MinecraftClient client,
			MatrixStack matrices,
			VertexConsumer vertexConsumer,
			int perRow,
			int totalHearts,
			int rowStep,
			float halfWidth,
			int maxHealthHearts,
			int maxHealth,
			int absorption,
			int health,
			boolean hardcore,
			HeartSpriteType heartType,
			int light) {
		MatrixStack.Entry entry = matrices.peek();

		for (int i = totalHearts - 1; i >= 0; --i) {
			int row = i / perRow;
			int col = i % perRow;
			float x = halfWidth - (float) (col * 8);
			float y = row * rowStep;
			float z = (float) row * 0.01f;

			// Container background heart
			drawHeartSprite(client, entry, vertexConsumer, x, y, z,
					HeartSpriteType.CONTAINER.getTexture(hardcore, false), light);

			int halfHeartIndex = i * 2;
			if (i >= maxHealthHearts) {
				int absHalfIndex = halfHeartIndex - maxHealth;
				if (absHalfIndex < absorption) {
					boolean isHalf = (absHalfIndex + 1) == absorption;
					HeartSpriteType absType = (heartType == HeartSpriteType.WITHERED)
							? HeartSpriteType.WITHERED
							: HeartSpriteType.ABSORBING;
					drawHeartSprite(client, entry, vertexConsumer, x, y, z,
							absType.getTexture(hardcore, isHalf), light);
				}
			}
			if (halfHeartIndex < health) {
				boolean isHalf = (halfHeartIndex + 1) == health;
				drawHeartSprite(client, entry, vertexConsumer, x, y, z,
						heartType.getTexture(hardcore, isHalf), light);
			}
		}
	}

	/**
	 * Exact port of {@code sixtwo.rs#djn} and {@code sixtwo.rs#djo} (rs.java:448-464).
	 */
	private static void drawHeartSprite(
			MinecraftClient client,
			MatrixStack.Entry entry,
			VertexConsumer vertexConsumer,
			float x,
			float y,
			float z,
			Identifier spriteId,
			int light) {
		Sprite sprite = client.getAtlasManager().getSprite(
				new SpriteIdentifier(TexturedRenderLayers.GUI_ATLAS_TEXTURE, spriteId));
		float minU = sprite.getMinU();
		float maxU = sprite.getMaxU();
		float minV = sprite.getMinV();
		float maxV = sprite.getMaxV();
		float size = 9.0f;
		emitVertex(entry, vertexConsumer, x, y - size, z, minU, maxV, light);
		emitVertex(entry, vertexConsumer, x - size, y - size, z, maxU, maxV, light);
		emitVertex(entry, vertexConsumer, x - size, y, z, maxU, minV, light);
		emitVertex(entry, vertexConsumer, x, y, z, minU, minV, light);
	}

	private static void emitVertex(
			MatrixStack.Entry entry,
			VertexConsumer vertexConsumer,
			float x,
			float y,
			float z,
			float u,
			float v,
			int light) {
		vertexConsumer.vertex(entry, x, y, z)
				.color(255, 255, 255, 255)
				.texture(u, v)
				.overlay(OverlayTexture.DEFAULT_UV)
				.light(light)
				.normal(entry, 0.0f, 0.0f, 1.0f);
	}

	@Override
	protected void onDisable() {
		indicators.clear();
	}

	public List<Indicator> getIndicators() {
		return indicators;
	}

	/** Hearts rendered per row before the indicator wraps (dr.java:235-300, {@code CWkfv.VC()}). */
	public int getHeartsPerRow() {
		return (int) Math.round(heartsPerRow.getValue());
	}
}
