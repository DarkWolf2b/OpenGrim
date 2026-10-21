package dev.opengrim.modules.render;

import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

import com.mojang.authlib.GameProfile;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.OtherClientPlayerEntity;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.entity.LivingEntityRenderer;
import net.minecraft.client.render.entity.PlayerEntityRenderer;
import net.minecraft.client.render.entity.model.EntityModelLayers;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;
import org.joml.Vector3f;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.mixin.LimbAnimatorAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Pop Chams (registry sixtwo.cT): "Highlights player totem pops".
 *
 * <p>Port of sixtwo.cT (analysis/decompiled/payload-decrypted/sixtwo/cT.java lines 117-742;
 * inner clone class cT$so.java lines 41-209; spec analysis/specs/handlers/cT.md and
 * analysis/specs/modules/cT.md; raw class verified with javap on
 * analysis/decompiled/jar-casesafe/sixtwo/cT_.class + cT_$so.class).
 *
 * <p>Settings (cT.java:117-170, ct/cu single-select groups and cC numeric builders
 * Vy=step / Vw=min / Vx=max / VA=default / Vz=suffix — cC_.java:181-194,127-149):
 * <ul>
 *   <li>"Mode" (cT.java:120-138) — one-of "Simple" (index 0, default) / "Textured"
 *       (index 1); ct keeps a selected index (ct.java:24 kErPl, SQ(int) ct.java:178)</li>
 *   <li>"Color" (cT.java:139, cG) — default {@code rD.dlM().bjG().bis()} white</li>
 *   <li>"Time To Disappear" (cT.java:158) — step 1.0, min 1.0, max 10.0, default 3.0, " s"</li>
 *   <li>"Fly Speed" (cT.java:169) — step 0.01, min -2.0, max 2.0, default 0.4 (vertical
 *       offset applied as value/50 per rendered frame, cT.java:342)</li>
 * </ul>
 *
 * <p>Behavior:
 * <ul>
 *   <li>{@code Zk} (cT.java:660-741): on the totem-pop entity status packet
 *       (status 35 = vanilla {@code EntityStatuses.USE_TOTEM_OF_UNDYING}; the DES slot 30938
 *       is not in the decrypted dump — cross-checked with the ported AutoDoubleHand module
 *       which compares the same vanilla constant) clone the popping player as an
 *       {@link OtherClientPlayerEntity} with a fresh {@link GameProfile}, copy body/head yaw,
 *       sneaking and limb animation speed, and record the clone's skin texture.</li>
 *   <li>{@code Zi} (cT.java:633-657): per tick, advance every clone; when
 *       {@code mT.cpC(lifetime)} is true (elapsed &gt; {@code (int)"Time To Disappear" * 1000},
 *       mT.java:60-81, cT$so.java:171-196) drop it from the list and discard the clone entity
 *       from the world.</li>
 *   <li>{@code Zj}/{@code Zl} (cT.java:617-630 / 329-507): per rendered frame, offset the clone
 *       up by FlySpeed/50, copy last-tick fields, then draw the player model mirrored and
 *       enlarged ({@code Zm}, cT.java:531-535) at the clone position; "Textured" binds the skin
 *       texture, "Simple" draws the untextured pass (cT.java:363-456).</li>
 * </ul>
 *
 * <p>Known quirks kept 1:1:
 * <ul>
 *   <li>The color/alpha computed at cT.java:363 ({@code mG.cnQ(color).cob(fade)}) is dead code —
 *       bytecode stores it into a local that is never read, and the model is rendered through
 *       the 4-argument {@code Model.render(...)} which passes color -1 (white). The "Color"
 *       setting and the fade fraction therefore do not modulate the ghost (verified with javap:
 *       {@code PlayerEntityModel.render:(MatrixStack;VertexConsumer;II)V}).</li>
 *   <li>The clone model is built with {@code thinArms = true} for every player (cT$so.java:57,
 *       javap iconst_1) and its head is scaled by (-0.3, -0.3, -0.3) (cT$so.java:58).</li>
 * </ul>
 *
 * <p>Port notes: the original draws through private pipelines ({@code kR.NElVn} /
 * {@code kR.vTohM}, cT.java:368-457) — not expressible here; the closest vanilla layers are
 * used instead (documented divergence). The original fires its render event ({@code go$sX})
 * right after the sky pass (bootstrap WorldRenderEventBridgeMixin.java:74-109); our
 * {@link WorldRenderEvent} phase {@code AFTER_ENTITIES} is the closest available phase.
 * The clone's limb animation position is copied through the ported
 * {@code WalkAnimationStateAccessor} mixin ({@link dev.opengrim.mixin.LimbAnimatorAccessor}).
 */
public class PopChams extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode", List.of("Simple", "Textured"), "Simple"));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF));
	private final DoubleSetting timeToDisappear = register(new DoubleSetting("time_to_disappear", 1.0, 1.0, 10.0, 3.0, " s"));
	private final DoubleSetting flySpeed = register(new DoubleSetting("fly_speed", 0.01, -2.0, 2.0, 0.4, null));

	/** Original light argument slots (cT.java:373/443); both vertex formats carry no light
	 * element, so the values are visually inert. 10 is the decrypted value of slot 14940
	 * (analysis/decrypted/full-dump.jsonl); slot 12751 is not dumped. */
	private static final int LIGHT_TEXTURED = 0x00F000F0;
	private static final int LIGHT_SIMPLE = 10;

	private final CopyOnWriteArrayList<PopChamClone> clones = new CopyOnWriteArrayList<>();

	public PopChams() {
		super("pop_chams", "Pop Chams", "Highlights player totem pops", ModuleCategory.VISUALS);
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!isEnabled()) {
			return;
		}
		Packet<?> packet = event.packet();
		if (!(packet instanceof EntityStatusS2CPacket statusPacket)) {
			return;
		}
		if (statusPacket.getStatus() != 35) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return;
		}
		Entity entity = statusPacket.getEntity(client.world);
		if (!(entity instanceof PlayerEntity player)) {
			return;
		}

		// cT.java:729-740 — fresh GameProfile from uuid + name string.
		OtherClientPlayerEntity clonedPlayer = new OtherClientPlayerEntity(client.world,
				new GameProfile(player.getUuid(), player.getName().getString()));
		clonedPlayer.copyPositionAndRotation(player);
		clonedPlayer.bodyYaw = player.bodyYaw;
		clonedPlayer.headYaw = player.headYaw;
		clonedPlayer.lastBodyYaw = clonedPlayer.bodyYaw;
		clonedPlayer.lastHeadYaw = clonedPlayer.headYaw;
		clonedPlayer.setSneaking(player.isSneaking());
		clonedPlayer.limbAnimator.setSpeed(player.limbAnimator.getSpeed());
		// cT.java:737-739 — copy the source player's animation position through the
		// WalkAnimationStateAccessor port (dev.opengrim.mixin.LimbAnimatorAccessor).
		((LimbAnimatorAccessor) clonedPlayer.limbAnimator)
				.opengrim$setPosition(((LimbAnimatorAccessor) player.limbAnimator).opengrim$getPosition());

		Identifier skinTexture = clonedPlayer.getSkin().body().texturePath();
		clones.add(new PopChamClone(clonedPlayer, skinTexture));
	}

	@Override
	public void onTick() {
		if (clones.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		// cT$so.dnw (cT$so.java:171-196): expired clones are removed from the list and
		// discarded from the world.
		clones.removeIf(clone -> {
			if (!clone.expired()) {
				return false;
			}
			if (client.world != null) {
				client.world.removeEntity(clone.player.getId(), Entity.RemovalReason.DISCARDED);
			}
			clone.player.setRemoved(Entity.RemovalReason.DISCARDED);
			clone.player.onRemoved();
			return true;
		});
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || clones.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			return;
		}

		Vec3d cameraPos = event.camera().getCameraPos();
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);

		for (PopChamClone clone : clones) {
			renderClone(matrices, consumers, clone, cameraPos, tickDelta);
		}
	}

	/** Zl (cT.java:329-507) — draws one clone. */
	private void renderClone(MatrixStack matrices, VertexConsumerProvider consumers, PopChamClone clone,
			Vec3d cameraPos, float tickDelta) {
		AbstractClientPlayerEntity clonedPlayer = clone.player;
		PlayerEntityModel model = clone.model;

		model.leftPants.visible = true;
		model.rightPants.visible = true;
		model.leftSleeve.visible = true;
		model.rightSleeve.visible = true;
		model.jacket.visible = true;
		model.hat.visible = true;

		// cT.java:341-350 — offset is measured before the per-frame Fly Speed bump.
		Vec3d posOffset = clonedPlayer.getEntityPos().subtract(cameraPos);
		clonedPlayer.setPosition(clonedPlayer.getEntityPos().add(0.0, flySpeed.getValue() / 50.0, 0.0));
		clonedPlayer.lastX = clonedPlayer.getX();
		clonedPlayer.lastY = clonedPlayer.getY();
		clonedPlayer.lastZ = clonedPlayer.getZ();
		clonedPlayer.lastBodyYaw = clonedPlayer.bodyYaw;
		clonedPlayer.lastHeadYaw = clonedPlayer.headYaw;
		clonedPlayer.lastYaw = clonedPlayer.getYaw();
		clonedPlayer.lastPitch = clonedPlayer.getPitch();

		matrices.push();
		try {
			matrices.translate(posOffset.x, posOffset.y, posOffset.z);
			float lerpedBodyYaw = MathHelper.lerp(tickDelta, clonedPlayer.lastBodyYaw, clonedPlayer.bodyYaw);
			matrices.multiply(RotationAxis.POSITIVE_Y.rotationDegrees(180.0f - lerpedBodyYaw));
			zm(matrices);

			PlayerEntityRenderer renderer = (PlayerEntityRenderer) MinecraftClient.getInstance()
					.getEntityRenderDispatcher().getPlayerRenderer(clonedPlayer);
			PlayerEntityRenderState renderState = new PlayerEntityRenderState();
			renderer.updateRenderState((PlayerLikeEntity) clonedPlayer, renderState, tickDelta);
			renderState.limbSwingAmplitude = clonedPlayer.limbAnimator.getSpeed();
			renderState.limbSwingAnimationProgress = ((LimbAnimatorAccessor) clonedPlayer.limbAnimator).opengrim$getPosition();
			model.setAngles(renderState);

			int overlay = LivingEntityRenderer.getOverlay(renderState, 0.0f);

			// cT.java:363-365 computes mG.cnQ(color).cob(fade) here; the bytecode never reads the
			// result and the 4-argument Model.render below uses color -1 (white) — dead code kept out.

			if ("Textured".equals(mode.getValue())) {
				RenderLayer layer = RenderLayers.entitySolid(clone.skinTexture);
				VertexConsumer vertexConsumer = consumers.getBuffer(layer);
				model.render(matrices, vertexConsumer, LIGHT_TEXTURED, overlay);
			} else {
				RenderLayer layer = RenderLayers.debugFilledBox();
				VertexConsumer vertexConsumer = consumers.getBuffer(layer);
				model.render(matrices, vertexConsumer, LIGHT_SIMPLE, overlay);
			}
		} finally {
			matrices.pop();
		}
	}

	/** Zm (cT.java:531-535). */
	private static void zm(MatrixStack matrices) {
		matrices.scale(-1.0f, -1.0f, 1.0f);
		matrices.scale(1.6f, 1.8f, 1.6f);
		matrices.translate(0.0f, -1.501f, 0.0f);
	}

	@Override
	protected void onDisable() {
		clones.clear();
	}

	/** cT$so (cT$so.java:41-209) — the clone record with its own mT timer. */
	private final class PopChamClone {
		final AbstractClientPlayerEntity player;
		final PlayerEntityModel model;
		final Identifier skinTexture;
		final long spawnTime;

		PopChamClone(AbstractClientPlayerEntity player, Identifier skinTexture) {
			this.player = player;
			this.skinTexture = skinTexture;
			this.spawnTime = System.currentTimeMillis();
			// cT$so.java:57-58 — PlayerEntityModel(..., true) + head scale (-0.3)^3.
			this.model = new PlayerEntityModel(
					MinecraftClient.getInstance().getLoadedEntityModels().getModelPart(EntityModelLayers.PLAYER),
					true);
			this.model.getHead().scale(new Vector3f(-0.3f, -0.3f, -0.3f));
		}

		/** mT.cpC((long) CeLKq.VC() * 1000) (cT$so.java:179, mT.java:60-81): elapsed - lifetime &gt; 0. */
		boolean expired() {
			long lifetime = (long) timeToDisappear.getValue().intValue() * 1000L;
			return System.currentTimeMillis() - spawnTime - lifetime > 0L;
		}
	}
}
