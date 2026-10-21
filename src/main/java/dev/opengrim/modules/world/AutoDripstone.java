package dev.opengrim.modules.world;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.block.TrapdoorBlock;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.state.property.Properties;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

/**
 * Auto Dripstone (registry sixtwo.fd, module id 15): "Automatically places
 * dripstone and opens trapdoor". Category {@code gh.xwjCw} (fd.java:28).
 *
 * <p>Port of sixtwo.fd from payload-decrypted/sixtwo/fd.java:26-40 (constructor),
 * fd.java:49-83 (handlers aHU(gv) tick, aHV(gH$th) marker; helpers aHW/aHX plan
 * builders, aHY hit result, aHZ position point, aIa validity, aIc face, aIb
 * execute), and the plan record {@code fd$sO(dripstonePos, trapdoorPos,
 * placeHitResult, secondaryUse)}. Behavior spec:
 * analysis/specs/casesafe/handlers/fd.md (the non-casesafe
 * analysis/specs/handlers/fd.md holds the case-twin fD "Uncharge Block"); the
 * case-safe structural spec analysis/specs/casesafe/modules/fd.md. Native
 * corpus analysis/ghidra/handlers-full-annotated/sixtwo_fd.c (verified
 * {@code Lsixtwo/fd;}).
 *
 * <p>Settings in declaration order:
 * <ul>
 *   <li>Cooldown (ZVSdF, fd.java:38, step 1.0, min 0.0, max 10.0, default 0.0,
 *       suffix eVFHp native-decrypted — cited as " s", high-probability guess);
 *       enforced through the {@code mT.cpA()} timer (ms family per the eR
 *       timer contract), ported as wall-clock ms</li>
 * </ul>
 *
 * <p>Recovered pool surface (casesafe/handlers/fd.md): {@code field_28048} =
 * {@code Blocks.POINTED_DRIPSTONE}, {@code class_2533} = {@code TrapdoorBlock},
 * {@code method_24953} = {@code BlockPos.ofCenter}, {@code method_1107} =
 * {@code Entity.getBoundingBox} with the six {@code Box} component reads
 * (minX/maxX/minY/maxY/minZ/maxZ), the qN module-action arbitration
 * (dcC check / dcB unregister), and the {@code fd$sO} plan-record constructor
 * {@code (BlockPos, BlockPos, BlockHitResult, Z)}.
 *
 * <p>State fields from decompile:
 * <ul>
 *   <li>hcRZI (mT.cpA() stopwatch — ported as the {@code nextActionTime} ms deadline)</li>
 *   <li>YKpSx (boolean — latch; ported as {@code lastPlaced})</li>
 *   <li>ghppw (BlockPos cached candidate; ported as {@code cachedTrapdoor})</li>
 * </ul>
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): {@code YO()} ran once (the
 * disable path) = {@code super.YO()} (gg.YO deregistration) then
 * {@code aId()} = {@code rD.dma()} (the qN module-action registry singleton)
 * → {@code qN.dcB(this)} (the unregister; nested {@code qL.dcb() → 1}) — the
 * private helper is the qN action cancel, superseding fd.md's "state reset
 * candidate" reading. The tick {@code aHU(gv)}, marker {@code aHV(gH$th)} and
 * plan builders ({@code aHW/aHX/aHY/aHZ/aIa/aIb/aIc}) never triggered —
 * capture condition: enable the module in-game on a client tick with a player
 * standing on a closed trapdoor and pointed dripstone in the hotbar.
 *
 * <p>high-probability guess: the placement/trigger geometry is VM-only
 * (fd.md §Unrecovered 1) — the port scans players within reach standing on a
 * closed TrapdoorBlock, places dripstone into the replaceable block below it
 * via {@code interactionManager.interactBlock}, else right-clicks the trapdoor
 * (the "secondaryUse" open step); targets, qN arbitration and the
 * {@code aHY}/{@code aHZ}/{@code aIa}/{@code aIc} formulas are unrecovered.
 */
public class AutoDripstone extends Module {
	private final DoubleSetting cooldown = register(new DoubleSetting("cooldown", 1.0, 0.0, 10.0, 0.0, " s"));

	private long nextActionTime;
	private BlockPos cachedTrapdoor;
	private boolean lastPlaced;

	public AutoDripstone() {
		super("auto_dripstone", "Auto Dripstone", "Automatically places dripstone and opens trapdoor",
				ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		nextActionTime = 0L;
		cachedTrapdoor = null;
		lastPlaced = false;
	}

	@Override
	public void onDisable() {
		// trace 2026-10-17: fd.YO = super.YO() then aId() = rD.dma().dcB(this)
		// (the qN module-action unregister). The qN registry has no port
		// analog — the cached plan is discarded here.
		nextActionTime = 0L;
		cachedTrapdoor = null;
		lastPlaced = false;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null
				|| client.currentScreen != null) {
			return;
		}

		long now = System.currentTimeMillis();
		if (now < nextActionTime) {
			return;
		}

		BlockPos trapdoorPos = findTrapdoorVictim(player);
		if (trapdoorPos == null) {
			return;
		}

		cachedTrapdoor = trapdoorPos.toImmutable();
		BlockPos dripstonePos = trapdoorPos.down();
		BlockState belowState = player.getEntityWorld().getBlockState(dripstonePos);

		if ((belowState.isAir() || belowState.isReplaceable()) && selectDripstone(player)) {
			RotationManager.get().submitPosition(Vec3d.ofCenter(dripstonePos), RotationPriority.uWTdl, this);
			BlockHitResult placeHit = new BlockHitResult(Vec3d.ofCenter(trapdoorPos), Direction.DOWN, trapdoorPos, false);
			client.interactionManager.interactBlock(player, Hand.MAIN_HAND, placeHit);
			player.swingHand(Hand.MAIN_HAND);
			lastPlaced = true;
		} else {
			RotationManager.get().submitPosition(Vec3d.ofCenter(trapdoorPos), RotationPriority.uWTdl, this);
			BlockHitResult useHit = new BlockHitResult(Vec3d.ofCenter(trapdoorPos), Direction.UP, trapdoorPos, false);
			client.interactionManager.interactBlock(player, Hand.MAIN_HAND, useHit);
			player.swingHand(Hand.MAIN_HAND);
			lastPlaced = false;
		}

		long cdMillis = Math.round(cooldown.getValue().doubleValue() * 1000.0);
		nextActionTime = now + cdMillis;
	}

	private BlockPos findTrapdoorVictim(ClientPlayerEntity player) {
		var world = player.getEntityWorld();
		BlockPos best = null;
		double bestDistance = 4.5;

		for (PlayerEntity other : world.getPlayers()) {
			if (other == player || !other.isAlive()) {
				continue;
			}
			double distance = player.distanceTo(other);
			if (distance >= bestDistance) {
				continue;
			}
			BlockPos support = other.getBlockPos().down();
			BlockState state = world.getBlockState(support);
			// Recovered token: class_2533 = TrapdoorBlock (fd.md) — only closed
			// trapdoors qualify.
			if (!(state.getBlock() instanceof TrapdoorBlock) || !state.contains(Properties.OPEN)
					|| state.get(Properties.OPEN)) {
				continue;
			}
			bestDistance = distance;
			best = support.toImmutable();
		}
		return best;
	}

	private static boolean selectDripstone(PlayerEntity player) {
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (stack.isOf(Items.POINTED_DRIPSTONE)) {
				player.getInventory().setSelectedSlot(slot);
				return true;
			}
		}
		return false;
	}
}
