package dev.opengrim.modules.world;

import java.util.Comparator;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
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
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.World;

/**
 * Auto Web (registry sixtwo.eK, module id 10): "Automatically places webs at
 * enemies".
 *
 * <p>Port of sixtwo.eK (analysis/decompiled/casesafe/payload-decrypted/sixtwo/eK_.java:53-140
 * constructor; client-tick listener {@code azv(gv)} eK_.java:171-172; handler
 * spec analysis/specs/casesafe/handlers/eK_.md; module spec
 * analysis/specs/casesafe/modules/eK_.md). Superclass {@code eL} — the shared
 * block-placement base ({@code super(10)}, eK_.java:55; its own base settings
 * are encrypted and not ported, matching the AutoTrap eJ port). Settings in
 * declaration order (eK_.java:74-138):
 * <ul>
 * <li>Placement Options {@code cv .Tm(1)} (eK_.java:74) with Legs / Head
 * ({@code .Tz()} → selected) and Surround / Upper Surround (not selected),</li>
 * <li>Prediction Position {@code cJ .WE(false)} (eK_.java:120; the module-md
 * name list's "Predict Position" is stale — the ctor chars decode to
 * "Prediction Position"),</li>
 * <li>Prediction Ticks {@code cC .Vy(1.0).Vw(1.0).Vx(6.0).VA(3.0).Vz(EbxJv)}
 * (eK_.java:138) — the suffix is the native-decrypted static {@code EbxJv},
 * absent from the decrypted dump: [V] gap, kept null per the encrypted-suffix
 * convention (the family uses " ticks"; unproven here).</li>
 * </ul>
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/eK_.jsonl):
 * {@code azv} ran once per window tick and {@code ayt()} (the shared-window
 * eligibility gate, eK_.md "ays/ayt") returned 0 both times — no placement was
 * attempted in the tour. Capture condition: stand next to an enemy with cobwebs
 * in the hotbar so {@code azv} enters the placement pipeline (then the ring
 * geometry and {@code oj} submission become observable).
 *
 * <p>Reconstruction (native bodies; eK_.md "Unrecovered"): nearest enemy within
 * the base range, velocity extrapolation by Prediction Ticks when Prediction
 * Position is on, cobweb slot selection, support-face search and per-ring
 * placement.
 */
public class AutoWeb extends Module {
	private static final double TARGET_RANGE = 4.5;

	private final GroupSetting placementOptions = register(new GroupSetting("placement_options"));
	private final BoolSetting legs = new BoolSetting("legs", true);
	private final BoolSetting head = new BoolSetting("head", true);
	private final BoolSetting surround = new BoolSetting("surround", false);
	private final BoolSetting upperSurround = new BoolSetting("upper_surround", false);
	private final BoolSetting predictPosition = register(new BoolSetting("predict_position", false));
	private final DoubleSetting predictionTicks = register(new DoubleSetting("prediction_ticks",
			1.0, 1.0, 6.0, 3.0, null));

	public AutoWeb() {
		super("auto_web", "Auto Web", "Automatically places webs at enemies", ModuleCategory.WORLD);
		placementOptions.add(legs);
		placementOptions.add(head);
		placementOptions.add(surround);
		placementOptions.add(upperSurround);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}

		predictionTicks.setVisible(predictPosition.getValue());

		if (!player.getMainHandStack().isOf(Items.COBWEB) && !player.getOffHandStack().isOf(Items.COBWEB)) {
			int slot = webSlot(player);
			if (slot < 0) {
				return;
			}
			player.getInventory().setSelectedSlot(slot);
		}

		Entity target = findTarget(client, player);
		if (target == null) {
			return;
		}

		Vec3d aim = target.getEntityPos();
		if (predictPosition.getValue()) {
			aim = aim.add(target.getVelocity().multiply(predictionTicks.getValue().doubleValue()));
		}

		BlockPos feet = BlockPos.ofFloored(aim.x, aim.y, aim.z);
		World world = player.getEntityWorld();

		if (legs.getValue()) {
			tryPlace(client, player, world, feet);
		}
		if (head.getValue()) {
			tryPlace(client, player, world, feet.up());
		}
		if (surround.getValue()) {
			tryPlace(client, player, world, feet.north());
			tryPlace(client, player, world, feet.south());
			tryPlace(client, player, world, feet.west());
			tryPlace(client, player, world, feet.east());
		}
		if (upperSurround.getValue()) {
			BlockPos above = feet.up();
			tryPlace(client, player, world, above.north());
			tryPlace(client, player, world, above.south());
			tryPlace(client, player, world, above.west());
			tryPlace(client, player, world, above.east());
		}
	}

	private boolean tryPlace(MinecraftClient client, ClientPlayerEntity player, World world, BlockPos pos) {
		BlockState state = world.getBlockState(pos);
		if (!state.isReplaceable() || state.isOf(Blocks.COBWEB)) {
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
			Hand hand = player.getMainHandStack().isOf(Items.COBWEB) ? Hand.MAIN_HAND : Hand.OFF_HAND;
			client.interactionManager.interactBlock(player, hand, new BlockHitResult(hitVec, placeFace, support, false));
			player.swingHand(hand);
			return true;
		}
		return false;
	}

	private static int webSlot(ClientPlayerEntity player) {
		for (int slot = 0; slot < 9; slot++) {
			if (player.getInventory().getStack(slot).isOf(Items.COBWEB)) {
				return slot;
			}
		}
		return -1;
	}

	private Entity findTarget(MinecraftClient client, ClientPlayerEntity player) {
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(TARGET_RANGE);
		return client.world.getOtherEntities(player, box,
				e -> e.isAlive() && (e instanceof net.minecraft.entity.mob.Monster
						|| e instanceof PlayerEntity))
				.stream()
				.min(Comparator.comparingDouble(player::distanceTo))
				.orElse(null);
	}

	/**
	 * Returns the current target's web placement positions when Auto Web is active
	 * (mirroring {@code sixtwo.eK#ayB()} / {@code eL#aAM()} queried by {@code sixtwo.dK}).
	 */
	public java.util.List<BlockPos> getActiveCandidatePositions(MinecraftClient client, ClientPlayerEntity player) {
		if (!isEnabled() || player == null || client.world == null) {
			return java.util.List.of();
		}
		Entity target = findTarget(client, player);
		if (target == null) {
			return java.util.List.of();
		}
		Vec3d aim = target.getEntityPos();
		if (predictPosition.getValue()) {
			aim = aim.add(target.getVelocity().multiply(predictionTicks.getValue().doubleValue()));
		}
		BlockPos feet = BlockPos.ofFloored(aim.x, aim.y, aim.z);
		java.util.List<BlockPos> positions = new java.util.ArrayList<>();
		if (legs.getValue()) {
			positions.add(feet);
		}
		if (head.getValue()) {
			positions.add(feet.up());
		}
		if (surround.getValue()) {
			positions.add(feet.north());
			positions.add(feet.south());
			positions.add(feet.west());
			positions.add(feet.east());
		}
		if (upperSurround.getValue()) {
			BlockPos above = feet.up();
			positions.add(above.north());
			positions.add(above.south());
			positions.add(above.west());
			positions.add(above.east());
		}
		return positions;
	}
}
