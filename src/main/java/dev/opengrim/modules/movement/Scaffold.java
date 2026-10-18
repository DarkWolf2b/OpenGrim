package dev.opengrim.modules.movement;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.BlockItem;
import net.minecraft.item.ItemStack;
import net.minecraft.util.ActionResult;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

/**
 * Scaffold (registry sixtwo.ei, module id 38): "Automatically bridges for you".
 *
 * <p>Port of sixtwo.ei (casesafe/payload-decrypted/sixtwo/ei.java:25-126
 * constructor, :133-157 native surface; note the un-prefixed
 * analysis/specs/handlers/ei.md declares sixtwo.eI Spear Double Tap — the
 * Scaffold handler spec is analysis/specs/casesafe/handlers/ei.md). Setting
 * tree, in declaration order: Hand To Use (Main Hand / Off Hand / Both,
 * ei.java:28-74), Hand Swing (Client / Server, ei.java:75-104), Only When
 * Crouching (default false, ei.java:105-125). The original has no numeric
 * settings and no timers.
 *
 * <p>Placement follows the {@code oC.cHT} engine order (see
 * analysis/specs/casesafe/handlers/ei.md): the target is the block below the
 * player feet (cf. {@code getBlockPos().down()}, ei.md "asJ"); it must satisfy
 * the {@code cHP} replaceable predicate (fire, short plants, snow, vines or
 * otherwise replaceable); support faces are enumerated in the {@code YuMVe}
 * order (0,-1,0), (0,1,0), (-1,0,0), (1,0,0), (0,0,1), (0,0,-1)
 * (oC.java:175-180) and must be solid. Placement is suppressed while using
 * an item or mining a block (ingredients of the {@code asG} gate, ei.md).
 *
 * <p>Unrecovered / not implemented from the decompiled engine: the face
 * sampling grid and counts N₁/N₂ are DES-encrypted (ei.md "Unrecovered" #4),
 * so the click point here is the support-face centre (legal under the
 * recovered cId bounds [0.15, 0.85], oC.java:501-539) instead of the
 * best-pick cIa look-ray scoring; the cHY reach+raycast validation
 * (oC.java:1137-1211) and the cHU previous-target reuse are not implemented;
 * the {@code oU.Xrdom} already-planned guard/support condition (cHT steps 2 /
 * cIf) is omitted because its entry lifetime is unrecovered (ei.md #11) and
 * the module places one block per tick; the exact {@code asG} boolean formula
 * (ei.md #2), the {@code Both}-hands semantics (ei.md #8) and the silent-aim
 * submit qL.dbI are documented designer choices. Divergences are recorded in
 * analysis/docs/PARITY.md.
 */
public class Scaffold extends Module {
	private final ModeSetting handToUse = register(new ModeSetting("hand_to_use",
			List.of("main_hand", "off_hand", "both"), "main_hand"));
	private final ModeSetting handSwing = register(new ModeSetting("hand_swing",
			List.of("client", "server"), "client"));
	private final BoolSetting onlyWhenCrouching = register(new BoolSetting("only_when_crouching", false));

	public Scaffold() {
		super("scaffold", "Scaffold", "Automatically bridges for you", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		if (onlyWhenCrouching.getValue() && !player.isSneaking()) {
			return;
		}
		// Ingredients of the sixtwo.ei#asG gate (ei.md "asG"): no placement
		// while using an item (method_6115) or mining (method_2923).
		if (player.isUsingItem() || client.interactionManager.isBreakingBlock()) {
			return;
		}
		BlockPos target = player.getBlockPos().down();
		if (!isReplaceableTarget(client, target)) {
			return;
		}
		Direction face = findSupportFace(client, target);
		if (face == null) {
			return;
		}
		int slot = findBlockSlot(player);
		if (slot < 0) {
			return;
		}
		if (slot != player.getInventory().getSelectedSlot()) {
			player.getInventory().setSelectedSlot(slot);
		}
		Hand hand = resolveHand(player);
		if (hand == null) {
			return;
		}
		ActionResult result = client.interactionManager.interactBlock(player, hand,
				hitResult(target.offset(face.getOpposite()), face));
		if (result.isAccepted() && "client".equals(handSwing.getValue())) {
			player.swingHand(hand);
		}
	}

	private Direction findSupportFace(MinecraftClient client, BlockPos target) {
		// Support enumeration in YuMVe order (oC.java:175-180); a neighbor
		// supports placement when solid (oC#cIf, BlockState.isSolid — the
		// recovered call; deprecated in yarn 1.21.11, kept 1:1). The
		// returned face points from the support block toward the target
		// (ja.toQLU). The second cIf clause, oU.Xrdom.containsKey(neighbor),
		// is omitted (see class javadoc).
		int[][] offsets = { { 0, -1, 0 }, { 0, 1, 0 }, { -1, 0, 0 }, { 1, 0, 0 }, { 0, 0, 1 }, { 0, 0, -1 } };
		for (int[] offset : offsets) {
			BlockPos neighbor = target.add(offset[0], offset[1], offset[2]);
			if (client.world.getBlockState(neighbor).isSolid()) {
				return Direction.fromVector(-offset[0], -offset[1], -offset[2], null);
			}
		}
		return null;
	}

	/**
	 * Port of the {@code cHP} replaceable predicate (ei.md "cHT step 3"):
	 * fire, short plants, snow, vines, or anything otherwise replaceable.
	 * {@code isReplaceable} already covers air, plants, snow and vines; fire
	 * is checked explicitly.
	 */
	private static boolean isReplaceableTarget(MinecraftClient client, BlockPos target) {
		BlockState state = client.world.getBlockState(target);
		return state.isReplaceable() || state.isOf(Blocks.FIRE) || state.isOf(Blocks.SOUL_FIRE);
	}

	private int findBlockSlot(ClientPlayerEntity player) {
		ItemStack selected = player.getInventory().getMainStacks().get(player.getInventory().getSelectedSlot());
		if (selected.getItem() instanceof BlockItem) {
			return player.getInventory().getSelectedSlot();
		}
		for (int i = 0; i < 9; i++) {
			if (player.getInventory().getMainStacks().get(i).getItem() instanceof BlockItem) {
				return i;
			}
		}
		return -1;
	}

	private Hand resolveHand(ClientPlayerEntity player) {
		switch (handToUse.getValue()) {
			case "off_hand" -> {
				return Hand.OFF_HAND;
			}
			case "both" -> {
				if (player.getMainHandStack().getItem() instanceof BlockItem) {
					return Hand.MAIN_HAND;
				}
				return Hand.OFF_HAND;
			}
			default -> {
				return Hand.MAIN_HAND;
			}
		}
	}

	private BlockHitResult hitResult(BlockPos support, Direction face) {
		Vec3d center = Vec3d.ofCenter(support);
		Vec3d hitVec = center.add(face.getOffsetX() * 0.5, face.getOffsetY() * 0.5, face.getOffsetZ() * 0.5);
		return new BlockHitResult(hitVec, face, support, false);
	}
}