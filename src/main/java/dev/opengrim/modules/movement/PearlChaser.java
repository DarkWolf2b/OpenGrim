package dev.opengrim.modules.movement;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.util.FriendsManager;
import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.fluid.FluidState;
import net.minecraft.item.Items;
import net.minecraft.registry.tag.FluidTags;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;

/**
 * Pearl Chaser (registry sixtwo.fm, module id 145):
 * "Automatically throws pearls after players".
 *
 * <p>Port of sixtwo.fm from (case-safe paths — the non-casesafe
 * payload-decrypted/payload-named-cfr entries are collapsed onto sixtwo.fM Auto MLG):
 * <ul>
 *   <li>analysis/decompiled/casesafe/payload-named-cfr/sixtwo/fm.java:37-84 (constructor)</li>
 *   <li>analysis/decompiled/casesafe/payload-decrypted/sixtwo/fm.java:14-132</li>
 *   <li>analysis/specs/casesafe/handlers/fm.md:1-56</li>
 * </ul>
 *
 * <p>Settings declared in original constructor sequence (casesafe fm.java:40-84):
 * Minimal Health To Throw (step 0.1, min 2.0, max 20.0, default 5.0, suffix null, fm.java:40-64),
 * Ignore Friends (default true, fm.java:65-80).
 *
 * <p>State fields preserved 1:1 from fm.java:17-26:
 * vlFZY (static double threshold metric), ERRVP (throw cooldown timer),
 * OivbA (tracking refresh timer), zPgOp (target/landing BlockPos),
 * EnrbM (scan counter), nHFuo (tick counter), wPysa (aim rotation vector, initialized 0.0, 0.0),
 * vfWoI, gwiUw (armed latch), QVPeQ.
 *
 * <p>Category is Combat (fm.java:39 {@code gh.xwjCw}). The computed aim is
 * submitted to {@link RotationManager} and applied around {@code interactItem}
 * with {@link RotationManager#applyForAction} (the use packet carries the real
 * yaw/pitch; submission alone threw along the visual view), then restored.
 * The ballistic trajectory/landing simulation is a labeled stand-in: the
 * native aKA/aKC/aKD/aKE bodies and the exact throw gate remain unrecovered
 * (PARITY.md Wave 15).
 */
public class PearlChaser extends Module {
	public static double vlFZY = 64.0;

	private final DoubleSetting minimalHealthToThrow = register(new DoubleSetting(
			"minimal_health_to_throw", 0.1, 2.0, 20.0, 5.0, null));
	private final BoolSetting ignoreFriends = register(new BoolSetting(
			"ignore_friends", true));

	private long timerErrvp;
	private long timerOivba;
	private BlockPos targetBlockPos;
	private int scanCounter;
	private int tickCounter;
	private float aimYaw;
	private float aimPitch;
	private int stateVfWoI;
	private boolean armed;
	private int stateQvPeQ;

	private int previousSlot = -1;
	private long returnAtMs;

	public PearlChaser() {
		super("pearl_chaser", "Pearl Chaser",
				"Automatically throws pearls after players", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		aKr();
	}

	@Override
	public void onDisable() {
		aKr();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}

		if (previousSlot >= 0 && System.currentTimeMillis() >= returnAtMs) {
			player.getInventory().setSelectedSlot(previousSlot);
			previousSlot = -1;
		}

		tickCounter++;
		if (player.getHealth() < minimalHealthToThrow.getValue().floatValue()) {
			armed = false;
			return;
		}

		// Client tick phase (aKp): scan thrown pearls and calculate landing positions
		EnderPearlEntity trackedPearl = null;
		double closestDistSq = Double.MAX_VALUE;
		for (Entity entity : client.world.getEntities()) {
			if (!(entity instanceof EnderPearlEntity pearl)) {
				continue;
			}
			Entity owner = pearl.getOwner();
			if (owner == player) {
				continue;
			}
			if (owner instanceof AbstractClientPlayerEntity playerOwner && !aKE(playerOwner)) {
				continue;
			}
			double d = player.squaredDistanceTo(pearl);
			if (d <= vlFZY * vlFZY && d < closestDistSq) {
				closestDistSq = d;
				trackedPearl = pearl;
			}
		}

		if (trackedPearl != null) {
			targetBlockPos = aKw(trackedPearl);
			if (targetBlockPos != null) {
				Vec3d targetPoint = new Vec3d(
						targetBlockPos.getX() + 0.5,
						targetBlockPos.getY() + 1.0,
						targetBlockPos.getZ() + 0.5);
				calculateAim(player, targetPoint);
				armed = true;
			}
		} else {
			// Fall back to tracking nearest eligible player
			PlayerEntity nearest = nearestPlayer(client, player);
			if (nearest != null) {
				targetBlockPos = nearest.getBlockPos();
				Vec3d targetPoint = nearest.getEntityPos().add(0.0, nearest.getHeight() * 0.5, 0.0);
				calculateAim(player, targetPoint);
				armed = true;
			} else {
				armed = false;
			}
		}

		// Pre-motion tick execution (aKq)
		if (armed && aKs()) {
			aKv();
		}
	}

	private void aKr() {
		if (previousSlot >= 0) {
			MinecraftClient client = MinecraftClient.getInstance();
			if (client.player != null) {
				client.player.getInventory().setSelectedSlot(previousSlot);
			}
			previousSlot = -1;
		}
		timerErrvp = 0L;
		timerOivba = 0L;
		targetBlockPos = null;
		scanCounter = 0;
		tickCounter = 0;
		aimYaw = 0.0f;
		aimPitch = 0.0f;
		stateVfWoI = 0;
		armed = false;
		stateQvPeQ = 0;
	}

	private boolean aKs() {
		return System.currentTimeMillis() - timerErrvp >= 1000L;
	}

	private void aKv() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		if (!selectPearl(player)) {
			return;
		}

		Rotation rotation = new Rotation(aimYaw, aimPitch);
		RotationManager.get().submitRotation(rotation, RotationPriority.uWTdl, this);
		// The use packet carries its own yaw/pitch (and vanilla's client-side
		// use path reads the real rotation), so apply the aim around the use;
		// RotationManager restores the visual rotation in a finally block.
		RotationManager.get().applyForAction(rotation,
				() -> client.interactionManager.interactItem(player, Hand.MAIN_HAND));
		player.swingHand(Hand.MAIN_HAND);

		timerErrvp = System.currentTimeMillis();
		armed = false;
	}

	private BlockPos aKw(EnderPearlEntity pearl) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return pearl.getBlockPos();
		}

		Vec3d pos = pearl.getEntityPos();
		Vec3d velocity = pearl.getVelocity();

		for (int step = 0; step < 120; step++) {
			Vec3d nextPos = pos.add(velocity);
			HitResult hit = client.world.raycast(new RaycastContext(
					pos, nextPos, RaycastContext.ShapeType.COLLIDER,
					RaycastContext.FluidHandling.NONE, pearl));

			if (hit.getType() != HitResult.Type.MISS) {
				return BlockPos.ofFloored(hit.getPos());
			}

			pos = nextPos;
			BlockPos blockPos = BlockPos.ofFloored(pos);
			FluidState fluidState = client.world.getFluidState(blockPos);
			double drag = fluidState.isIn(FluidTags.WATER) ? 0.8 : 0.99;
			velocity = velocity.multiply(drag).subtract(0.0, 0.03, 0.0);
		}

		return BlockPos.ofFloored(pos);
	}

	private void calculateAim(ClientPlayerEntity player, Vec3d target) {
		Vec3d eye = player.getEyePos();
		double dx = target.x - eye.x;
		double dy = target.y - eye.y;
		double dz = target.z - eye.z;
		double dist = Math.sqrt(dx * dx + dz * dz);

		aimYaw = (float) Math.toDegrees(Math.atan2(dz, dx)) - 90.0f;
		float directPitch = (float) -Math.toDegrees(Math.atan2(dy, dist));

		double v = 1.5;
		double g = 0.03;
		double v2 = v * v;
		double v4 = v2 * v2;
		double discriminant = v4 - g * (g * dist * dist + 2 * dy * v2);

		if (discriminant >= 0) {
			double root = Math.sqrt(discriminant);
			double angleLow = Math.atan((v2 - root) / (g * dist));
			aimPitch = (float) -Math.toDegrees(angleLow);
		} else {
			aimPitch = directPitch - (float) Math.min(15.0, dist * 0.5);
		}

		aimPitch = MathHelper.clamp(aimPitch, -90.0f, 90.0f);
	}

	private boolean aKE(AbstractClientPlayerEntity target) {
		if (target == null || !target.isAlive()) {
			return false;
		}
		if (ignoreFriends.getValue() && FriendsManager.isFriend(target.getGameProfile().name())) {
			return false;
		}
		return true;
	}

	private PlayerEntity nearestPlayer(MinecraftClient client, ClientPlayerEntity player) {
		if (client.world == null) {
			return null;
		}
		return client.world.getPlayers().stream()
				.filter(p -> p != player && p.isAlive())
				.filter(p -> player.distanceTo(p) <= vlFZY)
				.filter(p -> !(ignoreFriends.getValue()
						&& FriendsManager.isFriend(p.getGameProfile().name())))
				.min(Comparator.comparingDouble(player::distanceTo))
				.orElse(null);
	}

	private boolean selectPearl(ClientPlayerEntity player) {
		if (player.getMainHandStack().getItem() == Items.ENDER_PEARL) {
			return true;
		}
		for (int slot = 0; slot < 9; slot++) {
			if (player.getInventory().getStack(slot).getItem() == Items.ENDER_PEARL) {
				if (previousSlot < 0) {
					previousSlot = player.getInventory().getSelectedSlot();
				}
				player.getInventory().setSelectedSlot(slot);
				returnAtMs = System.currentTimeMillis() + 150L;
				return true;
			}
		}
		return false;
	}

	public BlockPos getTargetBlockPos() {
		return targetBlockPos;
	}

	public boolean isArmed() {
		return armed;
	}

	public float getAimYaw() {
		return aimYaw;
	}

	public float getAimPitch() {
		return aimPitch;
	}
}
