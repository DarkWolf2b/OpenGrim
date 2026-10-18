package dev.opengrim.modules.combat;

import java.util.Comparator;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.mob.Monster;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

/**
 * Projectile Aim Bot (registry sixtwo.fj): "Automatically aims at targets".
 *
 * <p>Port of sixtwo.fj (payload-named-cfr/sixtwo/fj.java:27-114 constructor;
 * charge aJA/aJB, hitbox aJC, gates aJD/aJE/aJF/aJG, frame aJy(gH$th), render
 * aJz(go$sX); spec analysis/specs/handlers/fj.md). Settings in declaration
 * order (fj.java:43-113): Ignore Walls cJ .WE(false), FOV cC
 * .Vy(1.0).Vw(10.0).Vx(360.0).VA(45.0).Vz(zVHFr) = step 1.0, min 10.0, max 360.0,
 * default 45.0 (suffix zVHFr native-decrypted/unrecovered), Render Prediction
 * cJ .WE(false), Outline Color cG .Uf(bjG().bis()).Uh(false) = white,
 * alpha-off (bis() is the white theme accessor per db/dc/dd specs),
 * Fill Color cG .Uf(bis().cob(0.5F)).Uh(false) = white at alpha 0.5,
 * Filled cJ .WE(false), visible with Render Prediction
 * (WLOHi/OxgJE/DRvrZ .Vf(IMpen::WF), fj.java:111-113).
 *
 * <p>high-probability guesses (VM bodies, casesafe/handlers/fj.md "Unrecovered"):
 * the trajectory/lead math below is a design-level stand-in (the spec explicitly
 * says the aJA/aJB formula is not recovered - do not treat as recovered), the FOV
 * half-angle test, the 48-block search box and the monster/player target set.
 * Aim submission uses {@link RotationManager} at {@link RotationPriority#uWTdl}.
 *
 * <p>trace 2026-10-17: aJy (gH$th frame) ran 2x with no nested aJA/aJB/aJC calls -
 * no valid target/projectile scenario in the tour. Capture condition: hold a
 * charged bow/crossbow with a player in FOV and log aJA/aJB/aJC + the rotation
 * submission.
 */
public class ProjectileAimBot extends Module {
	private final BoolSetting ignoreWalls = register(new BoolSetting("ignore_walls", false));
	private final DoubleSetting fov = register(new DoubleSetting("fov", 1.0, 10.0, 360.0, 45.0, null));
	private final BoolSetting renderPrediction = register(new BoolSetting("render_prediction", false));
	private final ColorSetting outlineColor = register(new ColorSetting("outline_color", 0xFFFFFFFF, false));
	private final ColorSetting fillColor = register(new ColorSetting("fill_color", 0x80FFFFFF, false));
	private final BoolSetting filled = register(new BoolSetting("filled", false));

	private Entity target;

	public ProjectileAimBot() {
		super("projectile_aim_bot", "Projectile Aim Bot", "Automatically aims at targets", ModuleCategory.COMBAT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		outlineColor.setVisible(renderPrediction.getValue());
		fillColor.setVisible(renderPrediction.getValue());
		filled.setVisible(renderPrediction.getValue());
		if (!isThrowable(player.getMainHandStack()) && !isThrowable(player.getOffHandStack())) {
			return;
		}
		target = findTarget(client, player);
		if (target == null) {
			return;
		}
		Vec3d point = leadPoint(player, target);
		RotationManager.get().submitRotation(
				Rotation.lookingAt(player.getEyePos(), point).clamped(), RotationPriority.uWTdl, this);
	}

	public Entity currentTarget() {
		return target;
	}

	private static boolean isThrowable(ItemStack stack) {
		return stack.isOf(Items.BOW) || stack.isOf(Items.CROSSBOW) || stack.isOf(Items.TRIDENT)
				|| stack.isOf(Items.ENDER_PEARL) || stack.isOf(Items.SNOWBALL) || stack.isOf(Items.EGG);
	}

	private Entity findTarget(MinecraftClient client, ClientPlayerEntity player) {
		Box area = new Box(player.getBlockPos()).expand(48.0);
		float halfFov = fov.getValue().floatValue() / 2.0f;
		return client.world.getOtherEntities(player, area,
				e -> (e instanceof Monster || e instanceof PlayerEntity) && e.isAlive())
				.stream()
				.filter(e -> ignoreWalls.getValue() || player.canSee(e))
				.filter(e -> angleTo(player, e) <= halfFov)
				.min(Comparator.comparingDouble(player::distanceTo))
				.orElse(null);
	}

	private static Vec3d leadPoint(ClientPlayerEntity player, Entity target) {
		Vec3d center = target.getEntityPos().add(0.0, target.getHeight() * 0.5, 0.0);
		double pull = player.getItemUseTime() > 0 ? Math.min(1.0, player.getItemUseTime() / 20.0) : 1.0;
		double speed = Math.max(0.5, 3.0 * pull);
		double distance = player.getEyePos().distanceTo(center);
		double ticks = Math.ceil(distance / speed);
		return center.add(target.getVelocity().multiply(ticks));
	}

	private static float angleTo(ClientPlayerEntity player, Entity target) {
		Vec3d toTarget = target.getEyePos().subtract(player.getEyePos()).normalize();
		Vec3d look = RotationManager.get().effectiveRotation().toDirection().normalize();
		double dot = Math.max(-1.0, Math.min(1.0, toTarget.dotProduct(look)));
		return (float) Math.toDegrees(Math.acos(dot));
	}
}
