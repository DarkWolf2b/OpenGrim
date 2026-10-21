package dev.opengrim.modules.world;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.BlockItem;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.World;

/**
 * Auto Trap (registry sixtwo.eJ): "Automatically traps enemy".
 *
 * <p>Original decompile: sixtwo/eJ.java (payload-decrypted/sixtwo/eJ.java:72-219,
 * payload-named-cfr/sixtwo/eJ.java:72-219).
 * Spec: analysis/specs/handlers/eJ.md.
 * Superclass: eL (shared block-placement base).
 *
 * <p>Settings tree (eJ.java:76-205): Trap Mode (Box, Head, Legs, default Box),
 * Blocks (cK block multiselect, default OBSIDIAN - ported as a group with the
 * obsidian toggle), Alternative Block Through Walls (default false),
 * Alternative Block (cK, default CRYING_OBSIDIAN + OAK_PLANKS - ported as a
 * group with the two toggles), Double Place group (Above, Below, default
 * false), Place Mode (Single, Multi, default Single), Blocks Per Tick
 * (step 1.0, min 2.0, max 12.0, default 8.0, visible when Place Mode is
 * Multi). Handlers ayq (tick entry) and shape resolvers compute target-bound
 * placement candidates, sort by distance, and place up to the per-tick budget.
 *
 * <p>Stack divergence (documented): the shared eL placement base (eL.java:62+,
 * ~30 settings incl. the 2.0-6.0/4.5 range slider) is not ported - the range
 * is the recovered default TARGET_RANGE 4.5. Trap-shape offsets and the
 * candidate score (azo) are j2cc-VM blocked; the box/head/legs ring layout is
 * a reconstruction. The MIXlE.Vf(ayE) / ogYnJ.Vf(azn) visibility predicates
 * are native and left always-visible. eJ's hardwired ayt()/ayu() gates
 * (trace 2026-10-17: ayt entered 2x, returned false) live in eL's pipeline,
 * which this port does not model.
 */
public class AutoTrap extends Module {
	private static final double TARGET_RANGE = 4.5;

	private final ModeSetting trapMode = register(new ModeSetting("trap_mode",
			List.of("box", "head", "legs"), "box"));
	private final GroupSetting blocks = register(new GroupSetting("blocks"));
	private final BoolSetting obsidian = new BoolSetting("obsidian", true);
	private final BoolSetting alternativeBlockThroughWalls = register(new BoolSetting("alternative_block_through_walls", false));
	private final GroupSetting alternativeBlock = register(new GroupSetting("alternative_block"));
	private final BoolSetting cryingObsidian = new BoolSetting("crying_obsidian", true);
	private final BoolSetting oakPlanks = new BoolSetting("oak_planks", true);
	private final GroupSetting doublePlace = register(new GroupSetting("double_place"));
	private final BoolSetting doublePlaceAbove = new BoolSetting("double_place_above", false);
	private final BoolSetting doublePlaceBelow = new BoolSetting("double_place_below", false);
	private final ModeSetting placeMode = register(new ModeSetting("place_mode",
			List.of("single", "multi"), "single"));
	private final DoubleSetting blocksPerTick = register(new DoubleSetting("blocks_per_tick",
			1.0, 2.0, 12.0, 8.0, null));

	public AutoTrap() {
		super("auto_trap", "Auto Trap", "Automatically traps enemy", ModuleCategory.COMBAT);
		blocks.add(obsidian);
		alternativeBlock.add(cryingObsidian);
		alternativeBlock.add(oakPlanks);
		doublePlace.add(doublePlaceAbove);
		doublePlace.add(doublePlaceBelow);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}

		blocksPerTick.setVisible("multi".equals(placeMode.getValue()));

		PlayerEntity target = findTarget(client, player);
		if (target == null) {
			return;
		}
		if (!alternativeBlockThroughWalls.getValue() && !player.canSee(target)) {
			return;
		}

		if (!holdingTrapBlock(player)) {
			int slot = trapBlockSlot(player);
			if (slot < 0) {
				return;
			}
			player.getInventory().setSelectedSlot(slot);
		}

		Vec3d predicted = target.getEntityPos().add(target.getVelocity());
		BlockPos base = BlockPos.ofFloored(predicted.x, predicted.y, predicted.z);
		List<BlockPos> candidates = candidatePositions(base);
		Vec3d targetCenter = target.getEntityPos().add(0.0, target.getHeight() / 2.0, 0.0);
		candidates.sort(Comparator.comparingDouble(pos -> pos.toCenterPos().squaredDistanceTo(targetCenter)));

		int budget = "multi".equals(placeMode.getValue()) ? blocksPerTick.getValue().intValue() : 1;
		int placed = 0;
		World world = player.getEntityWorld();
		for (BlockPos pos : candidates) {
			if (placed >= budget) {
				break;
			}
			if (tryPlace(client, player, world, pos)) {
				placed++;
			}
		}
	}

	private boolean holdingTrapBlock(ClientPlayerEntity player) {
		return isTrapBlock(player.getMainHandStack().getItem())
				|| isTrapBlock(player.getOffHandStack().getItem());
	}

	private boolean isTrapBlock(Item item) {
		if (obsidian.getValue() && item == Items.OBSIDIAN) {
			return true;
		}
		if (cryingObsidian.getValue() && item == Items.CRYING_OBSIDIAN) {
			return true;
		}
		return oakPlanks.getValue() && item == Items.OAK_PLANKS;
	}

	private int trapBlockSlot(ClientPlayerEntity player) {
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (isTrapBlock(stack.getItem())) {
				return slot;
			}
		}
		return -1;
	}

	private List<BlockPos> candidatePositions(BlockPos base) {
		String mode = trapMode.getValue();
		boolean headLayer = "box".equals(mode) || "head".equals(mode);
		boolean legLayer = "box".equals(mode) || "legs".equals(mode);
		List<BlockPos> positions = new ArrayList<>();
		positions.addAll(ringPositions(base, legLayer));
		positions.addAll(ringPositions(base.up(), headLayer));
		if ("box".equals(mode)) {
			positions.add(base.up(2));
		}
		if (doublePlaceAbove.getValue() || doublePlaceBelow.getValue()) {
			List<BlockPos> extra = new ArrayList<>();
			for (BlockPos pos : new ArrayList<>(positions)) {
				if (doublePlaceAbove.getValue()) {
					extra.add(pos.up());
				}
				if (doublePlaceBelow.getValue()) {
					extra.add(pos.down());
				}
			}
			positions.addAll(extra);
		}
		return positions;
	}

	private List<BlockPos> ringPositions(BlockPos layerBase, boolean enabled) {
		if (!enabled) {
			return List.of();
		}
		return List.of(layerBase.north(), layerBase.south(), layerBase.west(), layerBase.east());
	}

	private boolean tryPlace(MinecraftClient client, ClientPlayerEntity player, World world, BlockPos pos) {
		BlockState targetState = world.getBlockState(pos);
		if (!targetState.isReplaceable() || targetState.isOf(Blocks.LEVER)) {
			return false;
		}

		Direction[] faces = {Direction.DOWN, Direction.UP, Direction.NORTH, Direction.SOUTH, Direction.WEST, Direction.EAST};
		for (Direction face : faces) {
			BlockPos support = pos.offset(face);
			BlockState supportState = world.getBlockState(support);
			if (supportState.isReplaceable()) {
				continue;
			}
			Direction placeFace = face.getOpposite();
			Vec3d center = Vec3d.ofCenter(support);
			Vec3d hitVec = center.add(placeFace.getOffsetX() * 0.5, placeFace.getOffsetY() * 0.5, placeFace.getOffsetZ() * 0.5);

			RotationManager.get().submitPosition(Vec3d.ofCenter(pos), RotationPriority.uWTdl, this);
			Hand hand = isTrapBlock(player.getMainHandStack().getItem()) ? Hand.MAIN_HAND : Hand.OFF_HAND;
			client.interactionManager.interactBlock(player, hand, new BlockHitResult(hitVec, placeFace, support, false));
			player.swingHand(hand);
			return true;
		}
		return false;
	}

	private PlayerEntity findTarget(MinecraftClient client, ClientPlayerEntity player) {
		double best = Double.MAX_VALUE;
		PlayerEntity found = null;
		for (PlayerEntity other : client.world.getPlayers()) {
			if (other == player || !other.isAlive() || other.isSpectator()) {
				continue;
			}
			double dist = player.distanceTo(other);
			if (dist <= TARGET_RANGE && dist < best) {
				best = dist;
				found = other;
			}
		}
		return found;
	}

	/**
	 * Returns the current target's placement candidate positions when Auto Trap is active
	 * (mirroring {@code sixtwo.eJ#ayB()} / {@code eL#aAM()} queried by {@code sixtwo.dK}).
	 */
	public List<BlockPos> getActiveCandidatePositions(MinecraftClient client, ClientPlayerEntity player) {
		if (!isEnabled() || player == null || client.world == null) {
			return List.of();
		}
		PlayerEntity target = findTarget(client, player);
		if (target == null) {
			return List.of();
		}
		Vec3d predicted = target.getEntityPos().add(target.getVelocity());
		BlockPos base = BlockPos.ofFloored(predicted.x, predicted.y, predicted.z);
		List<BlockPos> candidates = candidatePositions(base);
		Vec3d targetCenter = target.getEntityPos().add(0.0, target.getHeight() / 2.0, 0.0);
		candidates.sort(Comparator.comparingDouble(pos -> pos.toCenterPos().squaredDistanceTo(targetCenter)));
		return candidates;
	}
}
