package dev.opengrim.modules.world;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.BucketItem;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.ActionResult;
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
 * fall-damage estimation (fallDistance + height still to fall vs Threshold), the 16-block
 * ground scan and the gv phase split. The placement mechanism is decided by the held item:
 * buckets go through {@code interactItem} (a water bucket has no {@code useOnBlock} - calling
 * {@code interactBlock} with it is a silent no-op in vanilla), blocks through
 * {@code interactBlock}. Both aim through {@code Rotation}; the bucket use goes through
 * {@link RotationManager#applyForAction} because {@code BucketItem.raycast} reads the real
 * yaw/pitch before the packet is built. Placement runs in the pre-motion phase
 * ({@code START_CLIENT_TICK}, a stand-in for {@code aVq}), projects the landing column over
 * the remaining fall, and latches one bucket use per fall with an existing-water guard so a
 * second use cannot pick the MLG water back up. Divergence notes:
 * analysis/docs/PARITY.md Wave 15.
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

	/** Latch: one placement per fall; a second bucket use would pick the water back up. */
	private boolean placedThisFall;
	private World lastWorld;

	public AutoMlg() {
		super("auto_mlg", "Auto MLG", "Places block underneath to avoid fall damage", ModuleCategory.COMBAT);
		mode.add(bucket);
		mode.add(slime);
		mode.add(honey);
		mode.add(cobweb);
		mode.add(hayBale);
		mode.add(cherry);
	}

	/**
	 * Pre-motion phase (fM_.md:60-76 {@code aVp(gv)} / {@code aVq(gH$th)}).
	 * Running at START_CLIENT_TICK instead of END_CLIENT_TICK gives the bucket
	 * placement one full tick before the fall is applied — the END tick was
	 * one tick too late for water (server processes the use after the player
	 * has already landed).
	 */
	@Override
	public void onPreTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		if (client.world != lastWorld) {
			placedThisFall = false;
			lastWorld = client.world;
		}
		// Only while actually falling: the prediction below would otherwise fire while
		// jumping upward over a ledge (fallDistance 0 + the height already gained). In a
		// fluid or on a climbable vanilla resets/clamps fallDistance, so there is no fall
		// damage to predict there either.
		if (player.isOnGround() || player.isTouchingWater() || player.isInLava()
				|| player.isClimbing() || player.getVelocity().y >= 0.0) {
			placedThisFall = false;
			return;
		}
		if (placedThisFall) {
			// While the MLG placement is pending, a held right-click would let
			// vanilla use the same bucket again and pick the water back up.
			client.options.useKey.setPressed(false);
			return;
		}

		World world = client.world;
		Vec3d pos = player.getEntityPos();
		// Anchor Player keeps the target column directly under the player;
		// otherwise project the horizontal velocity over the remaining fall
		// time (fM_.md:74). A one-tick projection lands on the wrong block
		// whenever the fall spans a block boundary.
		BlockPos ground = anchorPlayer.getValue()
				? findGroundBelow(world, pos.x, pos.y, pos.z)
				: findProjectedGround(world, player, pos);
		if (ground == null) {
			return;
		}

		// fM_.md:70-72 - estimate the *upcoming* damage, not the distance already fallen.
		// fallDistance is reset in the same tick onGround becomes true, so an elapsed-distance
		// gate never opens for a fall of exactly Threshold blocks. Creative skips the check
		// (fM_.md:72), it does not disable the module.
		double remaining = Math.max(0.0, player.getY() - (ground.getY() + 1.0));
		boolean creative = client.interactionManager.getCurrentGameMode() != null
				&& client.interactionManager.getCurrentGameMode().isCreative();
		if (!creative && player.fallDistance + remaining < threshold.getValue().floatValue()) {
			return;
		}

		double reach = player.getBlockInteractionRange();
		Vec3d groundCenter = Vec3d.ofCenter(ground).add(0.0, 0.5, 0.0);
		if (player.getEyePos().distanceTo(groundCenter) > reach) {
			return;
		}

		// Main hand first (no slot switch when already holding the material), then offhand,
		// then the hotbar scan.
		Hand hand = Hand.MAIN_HAND;
		ItemStack stack = player.getMainHandStack();
		if (!matches(stack, world, ground)) {
			if (matches(player.getOffHandStack(), world, ground)) {
				hand = Hand.OFF_HAND;
				stack = player.getOffHandStack();
			} else {
				int slot = findMlgSlot(player, world, ground);
				if (slot < 0) {
					return;
				}
				player.getInventory().setSelectedSlot(slot);
				stack = player.getInventory().getStack(slot);
			}
		}

		Rotation rotation = Rotation.lookingAt(player.getEyePos(), groundCenter).clamped();
		RotationManager.get().submitRotation(rotation, RotationPriority.uWTdl, this);

		ActionResult result;
		Hand useHand = hand;
		if (stack.getItem() instanceof BucketItem) {
			// One bucket use per fall. A second use raycasts the water that was
			// just placed and picks it back up, removing the MLG water right
			// before the fall (the reported death). Latch before the call so a
			// second tick cannot repeat the use, and drop a held use key so
			// vanilla's own doItemUse cannot repeat it either.
			placedThisFall = true;
			client.options.useKey.setPressed(false);
			// InteractItem is the only path that runs BucketItem.use -> raycast -> placeFluid.
			// The raycast reads the player's real rotation, so apply and restore it around
			// the use via the rotation manager (cf. mk.java:405-424).
			result = RotationManager.get().applyForAction(rotation,
					() -> client.interactionManager.interactItem(player, useHand));
		} else {
			BlockHitResult hit = new BlockHitResult(groundCenter, Direction.UP, ground, false);
			result = client.interactionManager.interactBlock(player, hand, hit);
		}
		// Vanilla swings only for a successful client-side use (MinecraftClient.doItemUse).
		if (result instanceof ActionResult.Success success) {
			placedThisFall = true;
			if (success.swingSource() == ActionResult.SwingSource.CLIENT) {
				player.swingHand(hand);
			}
		}
	}

	@Override
	protected void onDisable() {
		placedThisFall = false;
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
			// Water already in the landing cell: using the bucket again would
			// raycast the source and pick it back up, removing the MLG water.
			if (world.getBlockState(ground.up()).isOf(Blocks.WATER)) {
				return false;
			}
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

	/**
	 * Projects the horizontal velocity over the estimated remaining fall time,
	 * then returns the first solid block in that landing column. Falls back to
	 * the column under the player when the projected column has no ground.
	 */
	private static BlockPos findProjectedGround(World world, ClientPlayerEntity player, Vec3d pos) {
		BlockPos under = findGroundBelow(world, pos.x, pos.y, pos.z);
		if (under == null) {
			Vec3d velocity = player.getVelocity();
			return findGroundBelow(world, pos.x + velocity.x, pos.y, pos.z + velocity.z);
		}
		double remaining = Math.max(0.0, pos.y - (under.getY() + 1.0));
		double fallSpeed = Math.max(0.08, -player.getVelocity().y);
		int ticks = Math.min(40, Math.max(1, (int) Math.ceil(remaining / fallSpeed)));
		Vec3d velocity = player.getVelocity();
		BlockPos projected = findGroundBelow(world,
				pos.x + velocity.x * ticks, pos.y, pos.z + velocity.z * ticks);
		return projected != null ? projected : under;
	}

	private static BlockPos findGroundBelow(World world, double x, double feetY, double z) {
		BlockPos pos = BlockPos.ofFloored(x, feetY, z);
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
