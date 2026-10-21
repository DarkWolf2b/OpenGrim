package dev.opengrim.modules.world;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.World;

/**
 * Auto MLG (registry sixtwo.fM): "Places block underneath to avoid fall damage".
 *
 * <p>Original decompile: sixtwo/fM.java (payload-decrypted/sixtwo/fM.java:28-129,
 * payload-named-cfr/sixtwo/fM.java:28-129 - both declare sixtwo.fM, verified).
 * Spec: analysis/specs/casesafe/handlers/fM_.md (the non-casesafe handlers/fM.md is
 * the sixtwo.fm Pearl Chaser twin).
 *
 * <p>Settings tree (fM.java:31-128): Threshold cC .Vy(0.1).Vw(3.0).Vx(15.0).VA(4.0).Vz(GgimX)
 * (step 0.1, min 3.0, max 15.0, default 4.0, suffix " blocks" - high-probability guess:
 * GgimX is native-decrypted/unrecovered and the threshold gates a fall-distance/height
 * check; PARITY.md records " blocks" as the assumed suffix), Anchor Player (default false),
 * Mode group with six toggles (Bucket, Slime, Honey, Cobweb, HayBale, Cherry, all default
 * false). Handlers aVp (pre-rotation) and aVq (tick listener) verify falling state against
 * creative mode, gate on Threshold, select the configured material, apply Anchor Player
 * positioning, and place onto ground.
 *
 * <p>high-probability guesses (VM bodies, casesafe/handlers/fM_.md "Unrecovered"): the
 * fall-damage estimation (vanilla fallDistance vs Threshold), the 16-block ground scan,
 * the placement hit (interactBlock on the ground top face) and the gv phase split.
 *
 * <p>trace 2026-10-17: aVp (pre-rotation) and aVq (tick) ran 1x each during the tour
 * window; no fall occurred, so no placement path executed. Capture condition: fall more
 * than Threshold blocks with a mode material in the hotbar and log the aVp/aVq placement.
 */
public class AutoMlg extends Module {
	private final DoubleSetting threshold = register(new DoubleSetting("threshold", 0.1, 3.0, 15.0, 4.0, " blocks"));
	private final BoolSetting anchorPlayer = register(new BoolSetting("anchor_player", false));
	private final GroupSetting mode = register(new GroupSetting("mode"));
	private final BoolSetting bucket = new BoolSetting("bucket", false);
	private final BoolSetting slime = new BoolSetting("slime", false);
	private final BoolSetting honey = new BoolSetting("honey", false);
	private final BoolSetting cobweb = new BoolSetting("cobweb", false);
	private final BoolSetting hayBale = new BoolSetting("hay_bale", false);
	private final BoolSetting cherry = new BoolSetting("cherry", false);

	public AutoMlg() {
		super("auto_mlg", "Auto MLG", "Places block underneath to avoid fall damage", ModuleCategory.COMBAT);
		mode.add(bucket);
		mode.add(slime);
		mode.add(honey);
		mode.add(cobweb);
		mode.add(hayBale);
		mode.add(cherry);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		if (client.interactionManager.getCurrentGameMode() != null
				&& client.interactionManager.getCurrentGameMode().isCreative()) {
			return;
		}
		if (player.isOnGround() || player.fallDistance < threshold.getValue().floatValue()) {
			return;
		}

		World world = player.getEntityWorld();
		Vec3d pos = player.getEntityPos();
		Vec3d targetCol = anchorPlayer.getValue() ? pos : pos.add(player.getVelocity());
		if (anchorPlayer.getValue()) {
			Vec3d velocity = player.getVelocity();
			player.setVelocity(0.0, velocity.y, 0.0);
		}

		BlockPos ground = findGroundBelow(world, targetCol);
		if (ground == null) {
			return;
		}

		double reach = player.getBlockInteractionRange();
		Vec3d groundCenter = Vec3d.ofCenter(ground).add(0.0, 0.5, 0.0);
		if (player.getEyePos().distanceTo(groundCenter) > reach) {
			return;
		}

		int slot = findMlgSlot(player, world, ground);
		if (slot < 0) {
			return;
		}
		player.getInventory().setSelectedSlot(slot);

		RotationManager.get().submitPosition(groundCenter, RotationPriority.uWTdl, this);
		BlockHitResult hit = new BlockHitResult(groundCenter, Direction.UP, ground, false);
		client.interactionManager.interactBlock(player, Hand.MAIN_HAND, hit);
		player.swingHand(Hand.MAIN_HAND);
	}

	private int findMlgSlot(ClientPlayerEntity player, World world, BlockPos ground) {
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (matches(stack, world, ground)) {
				return slot;
			}
		}
		return -1;
	}

	private boolean matches(ItemStack stack, World world, BlockPos ground) {
		if (bucket.getValue() && stack.isOf(Items.WATER_BUCKET)) {
			Box check = new Box(ground.up());
			boolean entityHurtByWater = false;
			for (Entity e : world.getOtherEntities(null, check)) {
				if (e instanceof LivingEntity living && living.hurtByWater()) {
					entityHurtByWater = true;
					break;
				}
			}
			if (!entityHurtByWater) {
				return true;
			}
		}
		if (slime.getValue() && stack.isOf(Items.SLIME_BLOCK)) {
			return true;
		}
		if (honey.getValue() && stack.isOf(Items.HONEY_BLOCK)) {
			return true;
		}
		if (cobweb.getValue() && stack.isOf(Items.COBWEB)) {
			return true;
		}
		if (hayBale.getValue() && stack.isOf(Items.HAY_BLOCK)) {
			return true;
		}
		return cherry.getValue() && (stack.isOf(Items.SWEET_BERRIES) || stack.isOf(Items.CHERRY_LEAVES));
	}

	private static BlockPos findGroundBelow(World world, Vec3d col) {
		BlockPos pos = BlockPos.ofFloored(col.x, col.y, col.z);
		for (int i = 0; i < 16; i++) {
			BlockState state = world.getBlockState(pos);
			if (!state.isAir() && !state.isLiquid()) {
				return pos;
			}
			pos = pos.down();
		}
		return null;
	}
}
