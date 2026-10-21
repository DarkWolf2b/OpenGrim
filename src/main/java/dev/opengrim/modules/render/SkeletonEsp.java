package dev.opengrim.modules.render;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.model.ModelPart;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.entity.PlayerEntityRenderer;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;

/**
 * Skeleton ESP (registry sixtwo.cV): "Renders skeleton on player models".
 *
 * <p>Port of sixtwo.cV (analysis/decompiled/payload-decrypted/sixtwo/cV.java lines 71-323;
 * bone generator kq.java lines 75-452; spec analysis/specs/handlers/cV.md and
 * analysis/specs/modules/cV.md).
 *
 * <p>Settings:
 * <ul>
 *   <li>"Color" (ColorSetting, default white 0xFFFFFFFF — cV.java:74 Uf(bjG().bis()))</li>
 *   <li>"Line Width" (DoubleSetting, step 0.1, min 1.0, max 3.0, default 1.0 — cV.java:86)</li>
 * </ul>
 *
 * <p>Audit 2026-10-17 fixes: dropped invented alive/invisible/4096-distance gates
 * (cV.java:239-259 only skips self + frustum-invisible via jJ.bIB); swimming/gliding
 * pose uses NEGATIVE_X (kq.java:278 rotationAxis(90+pitch, -1,0,0)); raw ARGB passes
 * through without alpha fix-up.
 *
 * <p>Known divergence: sixtwo.jJ.bID falls back to the world renderer's culling
 * frustum when the captured frustum is null (jJ.java:34-57); OpenGrim has no
 * WorldRenderer accessor mixin, so a null captured frustum renders the player
 * instead of skipping it (same convention as Trails).
 */
public class SkeletonEsp extends Module {
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, false));
	private final DoubleSetting lineWidth = register(new DoubleSetting("line_width", 0.1, 1.0, 3.0, 1.0, null));

	public SkeletonEsp() {
		super("skeleton_esp", "Skeleton ESP", "Renders skeleton on player models", ModuleCategory.VISUALS);
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			return;
		}

		Camera camera = event.camera();
		Vec3d cameraPos = camera.getCameraPos();
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		VertexConsumer lines = consumers.getBuffer(RenderLayers.lines());
		float tickDelta = MinecraftClient.getInstance().getRenderTickCounter().getTickProgress(true);

		int argb = color.getValue();
		float width = lineWidth.getValue().floatValue();

		// Visibility gate: sixtwo.jJ.bIB (jJ.java:59-85) — captured frustum
		// bounding-box test only; the original has no alive/invisible/distance gate.
		Frustum frustum = client.worldRenderer.getCapturedFrustum();

		for (AbstractClientPlayerEntity target : client.world.getPlayers()) {
			if (target == client.player) {
				continue;
			}
			if (frustum != null && !frustum.isVisible(target.getBoundingBox())) {
				continue;
			}

			renderPlayerSkeleton(matrices, lines, tickDelta, cameraPos, target, argb, width, client);
		}
	}

	private void renderPlayerSkeleton(MatrixStack matrices, VertexConsumer lines, float tickDelta,
			Vec3d cameraPos, AbstractClientPlayerEntity target, int argb, float width, MinecraftClient client) {
		PlayerEntityRenderer renderer = (PlayerEntityRenderer) client.getEntityRenderDispatcher().getRenderer(target);
		PlayerEntityModel model = (PlayerEntityModel) renderer.getModel();

		PlayerEntityRenderState renderState = new PlayerEntityRenderState();
		renderer.updateRenderState((PlayerLikeEntity) target, renderState, tickDelta);
		model.setAngles(renderState);

		float bodyYaw = MathHelper.lerpAngleDegrees(tickDelta, target.lastBodyYaw, target.bodyYaw);
		float pitch = target.getPitch(tickDelta);
		boolean isSwimming = target.isInSwimmingPose();
		boolean isSneaking = target.isInSneakingPose();
		boolean isGliding = target.isGliding();

		Vec3d lerpedPos = target.getLerpedPos(tickDelta);

		matrices.push();
		try {
			matrices.translate(lerpedPos.x - cameraPos.x, lerpedPos.y - cameraPos.y, lerpedPos.z - cameraPos.z);

			if (isSwimming) {
				matrices.translate(0.0f, 0.35f, 0.0f);
			}

			matrices.multiply(RotationAxis.POSITIVE_Y.rotationDegrees(180.0f - bodyYaw));

			if (isSwimming || isGliding) {
				// kq.java:278 — rotationAxis(90+pitch, -1, 0, 0) = NEGATIVE_X (legacy
				// vanilla swimming/gliding pose), NOT POSITIVE_X.
				matrices.multiply(RotationAxis.NEGATIVE_X.rotationDegrees(90.0f + pitch));
			}

			if (isSwimming) {
				matrices.translate(0.0f, -0.95f, 0.0f);
			}

			// Spine:
			float spineBottomY = isSneaking ? 0.6f : 0.7f;
			float spineBottomZ = isSneaking ? 0.23f : 0.0f;
			float spineTopY = isSneaking ? 1.05f : 1.4f;
			drawBone(lines, matrices, 0.0f, spineBottomY, spineBottomZ, 0.0f, spineTopY, 0.0f, argb, width);

			// Shoulders:
			float shoulderY = isSneaking ? 1.05f : 1.35f;
			drawBone(lines, matrices, -0.37f, shoulderY, 0.0f, 0.37f, shoulderY, 0.0f, argb, width);

			// Pelvis:
			float pelvisY = isSneaking ? 0.6f : 0.7f;
			float pelvisZ = isSneaking ? 0.23f : 0.0f;
			drawBone(lines, matrices, -0.15f, pelvisY, pelvisZ, 0.15f, pelvisY, pelvisZ, argb, width);

			// Head:
			matrices.push();
			try {
				matrices.translate(0.0f, isSneaking ? 1.05f : 1.4f, 0.0f);
				rotatePart(matrices, model.head);
				drawBone(lines, matrices, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f, 0.0f, argb, width);
			} finally {
				matrices.pop();
			}

			// Right Leg:
			matrices.push();
			try {
				matrices.translate(0.15f, isSneaking ? 0.6f : 0.7f, isSneaking ? 0.23f : 0.0f);
				rotatePart(matrices, model.rightLeg);
				drawBone(lines, matrices, 0.0f, 0.0f, 0.0f, 0.0f, -0.6f, 0.0f, argb, width);
			} finally {
				matrices.pop();
			}

			// Left Leg:
			matrices.push();
			try {
				matrices.translate(-0.15f, isSneaking ? 0.6f : 0.7f, isSneaking ? 0.23f : 0.0f);
				rotatePart(matrices, model.leftLeg);
				drawBone(lines, matrices, 0.0f, 0.0f, 0.0f, 0.0f, -0.6f, 0.0f, argb, width);
			} finally {
				matrices.pop();
			}

			// Right Arm:
			matrices.push();
			try {
				matrices.translate(0.37f, isSneaking ? 1.05f : 1.35f, 0.0f);
				rotatePart(matrices, model.rightArm);
				drawBone(lines, matrices, 0.0f, 0.0f, 0.0f, 0.0f, -0.55f, 0.0f, argb, width);
			} finally {
				matrices.pop();
			}

			// Left Arm:
			matrices.push();
			try {
				matrices.translate(-0.37f, isSneaking ? 1.05f : 1.35f, 0.0f);
				rotatePart(matrices, model.leftArm);
				drawBone(lines, matrices, 0.0f, 0.0f, 0.0f, 0.0f, -0.55f, 0.0f, argb, width);
			} finally {
				matrices.pop();
			}
		} finally {
			matrices.pop();
		}
	}

	private static void rotatePart(MatrixStack matrices, ModelPart part) {
		if (part.roll != 0.0f) {
			matrices.multiply(RotationAxis.POSITIVE_Z.rotation(part.roll));
		}
		if (part.yaw != 0.0f) {
			matrices.multiply(RotationAxis.NEGATIVE_Y.rotation(part.yaw));
		}
		if (part.pitch != 0.0f) {
			matrices.multiply(RotationAxis.NEGATIVE_X.rotation(part.pitch));
		}
	}

	private static void drawBone(VertexConsumer vc, MatrixStack matrices,
			float x1, float y1, float z1, float x2, float y2, float z2, int argb, float width) {
		MatrixStack.Entry entry = matrices.peek();
		Matrix4f posMatrix = entry.getPositionMatrix();

		float dx = x2 - x1;
		float dy = y2 - y1;
		float dz = z2 - z1;
		float len = MathHelper.sqrt(dx * dx + dy * dy + dz * dz);
		float nx = len != 0 ? dx / len : 0.0f;
		float ny = len != 0 ? dy / len : 1.0f;
		float nz = len != 0 ? dz / len : 0.0f;

		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;

		vc.vertex(posMatrix, x1, y1, z1).color(r, g, b, a).normal(entry, nx, ny, nz).lineWidth(width);
		vc.vertex(posMatrix, x2, y2, z2).color(r, g, b, a).normal(entry, nx, ny, nz).lineWidth(width);
	}

	public double getLineWidth() {
		return lineWidth.getValue();
	}
}
